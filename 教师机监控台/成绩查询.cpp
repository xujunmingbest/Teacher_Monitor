#include "成绩查询.h"
#include <windows.h>
#include "E:/clr中腾/电工电路试验台/电工电路试验台/tool/gradeSubmit.h"
#include "tool.h"
#include "元件伏安特性测试.h"

using namespace 教师机监控台;
void 成绩查询::LoadAllTrial() {
	comboBox1->Items->Clear();
	comboBox2->Items->Clear();
	for (int i = 0; i < Grades.size(); i++) {
		comboBox1->Items->Add(gcnew String(Grades[i+1].c_str()));
	}
	for (int i = 0; i < students.size(); i++) {
		comboBox2->Items->Add(gcnew String(students[i].Class.c_str()));
	}
}

void 成绩查询::LoadcomboBox3(int index) {
	comboBox3->Items->Clear();
	for (int i = 0; i < students[index].stus.size(); i++) {
		comboBox3->Items->Add(gcnew String(students[index].stus[i][0].c_str()));
	}

}


void 成绩查询::OpenTrial(string &TrialName) {
	if (TrialName.find(Grades[1], 0) != TrialName.npos) {
		元件伏安特性测试 ^ f = gcnew 元件伏安特性测试(TrialName);
		f->ShowDialog();
	}
	else {

	}

}









bool _GetAllFiles(string& Path, vector<string> &FData)
{
	WIN32_FIND_DATA FindData;
	HANDLE hError;
	hError = FindFirstFile((Path + "/*.*").c_str(), &FindData);
	if (hError == INVALID_HANDLE_VALUE)
	{
		printf("搜索失败!");
		return false;
	}
	while (::FindNextFile(hError, &FindData))
	{
		// 过虑.和..
		if (memcmp(FindData.cFileName, ".", 1) == 0
			|| memcmp(FindData.cFileName, "..", 2) == 0)
		{  //
			continue;
		}
		// 构造完整路径
		if (FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{//判断是否文件夹
			string FullPathName = Path + FindData.cFileName + "/";
			_GetAllFiles(FullPathName, FData);
			continue;
		}
		// 输出本级的文件
		string Char = Path + FindData.cFileName;
		FData.push_back(Char);
	}
	return true;
}

void 成绩查询::GetDataByCondition(vector<string> &files, vector<string> &contitions) {
	files.clear();
	vector<string> filestemp;
	if (!_GetAllFiles(string("data/"), filestemp)) {
		MessageBox::Show("成绩查询失败");
		return;
	}
	for (int i = 0; i < filestemp.size(); i++) {
		bool has = true;
		string fileName = filestemp[i];
		for (int j = 0; j < contitions.size(); j++) {
			string condition = contitions[j];
			if (fileName.find(condition, 0) == fileName.npos) { //查询不到
				has = false;
				break;
			}
		}
		if(has) files.push_back(fileName);
	}
}

void 成绩查询::GetCondition(vector<string> &contitions) {
	contitions.clear();
	if (comboBox3->Text->Trim() != "") {
		contitions.push_back(T_to_string(comboBox3->Text));
	}
	if (comboBox2->Text->Trim() != "") {
		contitions.push_back(T_to_string(comboBox2->Text));
	}
	if (comboBox1->Text->Trim() != "") {
		contitions.push_back(T_to_string(comboBox1->Text));
	}
	contitions.push_back(T_to_string(dateTimePicker1->Value.ToString("yyyy-MM-dd")));
}

static map<string, TrialInfo> ListFiles;
void 成绩查询::LoadListBox1() {
	ListFiles.clear();
	vector<string> files;
	vector<string> contitions;
	GetCondition(contitions);
	GetDataByCondition(files, contitions);
	mutex->WaitOne();
	for (int i = 0; i < files.size(); i++) {
		ifstream ifile;
		ifile.open(files[i], ios::binary);
		if (!ifile) continue;
		char buff[sizeof(TrialInfo)];
		ifile.read(buff, 4);
		ifile.read(buff, sizeof(TrialInfo));
		ifile.close();
		TrialInfo ti;
		memcpy(&ti, buff, sizeof(TrialInfo));
		ListFiles[files[i]] = ti;
	}

	listView1->BeginUpdate();
	listView1->Items->Clear();
	int i = 0;
	map<string, TrialInfo>::iterator it;
	listView1->ListViewItemSorter = nullptr;
	for (it = ListFiles.begin(); it != ListFiles.end(); it++, i++) {
		TrialInfo ti = it->second;
		listView1->Items->Add(gcnew String(ti.Class));
		listView1->Items[i]->SubItems->Add(gcnew String(ti.stuName1));
		listView1->Items[i]->SubItems->Add(gcnew String(ti.stuName2));
		listView1->Items[i]->SubItems->Add(gcnew String(ti.TrialName));
		listView1->Items[i]->SubItems->Add(gcnew String(ti.date));
		listView1->Items[i]->SubItems->Add(ti.totalscore.ToString());
		listView1->Items[i]->Name = gcnew String(it->first.c_str());
		if (ti.totalscore == -1) {
			listView1->Items[i]->SubItems->Add("未批改");
		}
		else {
			listView1->Items[i]->SubItems->Add("已批改");
		}
	}
	for (int i = 0; i < listView1->Columns->Count; i++)
		listView1->Columns[i]->Width = -2;

	listView1->EndUpdate();
	mutex->ReleaseMutex();
}


