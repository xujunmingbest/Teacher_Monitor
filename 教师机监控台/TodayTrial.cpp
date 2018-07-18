#include "TodayTrial.h"
using namespace ��ʦ�����̨;
#include "tool.h"
/*******
�ļ��Ĳ�νṹ
����: �༶  : ����1-����2  : �ܷ�:����
*****/


static map<string, TrialInfo> todayFiles;

void TodayTrial::LoadTodayTrial() {
	mutex->WaitOne();
	map<string, TrialInfo>::iterator it;
	LoadTodayFiles();

	listView1->BeginUpdate();
	listView1->Items->Clear();
	int i = 0;
	for ( it = todayFiles.begin(); it != todayFiles.end(); it++,i++) {
		TrialInfo ti = it->second;
		listView1->Items->Add(gcnew String(ti.Class));
		listView1->Items[i]->SubItems->Add(gcnew String(ti.stuName1));
		listView1->Items[i]->SubItems->Add(gcnew String(ti.stuName2));
		listView1->Items[i]->SubItems->Add(gcnew String(ti.TrialName));
		listView1->Items[i]->SubItems->Add(gcnew String(ti.date));
		listView1->Items[i]->SubItems->Add(ti.totalscore.ToString());
		listView1->Items[i]->Name = gcnew String(it->first.c_str());
		if (ti.totalscore == -1) {
			listView1->Items[i]->SubItems->Add("δ����");
			listView1->Items[i]->ForeColor = Color::Red;
		}
		else {
			listView1->Items[i]->SubItems->Add("������");
		}
	}
	for (int i = 0; i < listView1->Columns->Count; i++)
		listView1->Columns[i]->Width = -2;

	listView1->EndUpdate();
	mutex->ReleaseMutex();
}

void TodayTrial::LoadTodayFiles() {
	vector<string> fdatas;
	string date = T_to_string(DateTime::Now.ToString("yyyy-MM-dd"));
	string path = ("data/") + date + "/";
	if (!_GetAllFiles(path, fdatas)) {
		MessageBox::Show("��ѯ����");
		return;
	}
	todayFiles.clear();
	for (int i = 0; i < fdatas.size(); i++) {
		//
		ifstream ifile;
		ifile.open(fdatas[i], ios::binary);
		if (!ifile) continue;
		char buff[sizeof(TrialInfo)];
		ifile.read(buff, 4);
		ifile.read(buff, sizeof(TrialInfo));
		ifile.close();
		TrialInfo ti;
		memcpy(&ti, buff, sizeof(TrialInfo));
		todayFiles[fdatas[i]] = ti;
	}
}



bool  TodayTrial::_GetAllFiles(string& Path, vector<string> &FData)
{
	WIN32_FIND_DATA FindData;
	HANDLE hError;
	hError = FindFirstFile((Path + "/*.*").c_str(), &FindData);
	if (hError == INVALID_HANDLE_VALUE)
	{
		printf("����ʧ��!");
		return false;
	}
	while (::FindNextFile(hError, &FindData))
	{
		// ����.��..
		if (memcmp(FindData.cFileName, ".", 1) == 0
			|| memcmp(FindData.cFileName, "..", 2) == 0)
		{  //
			continue;
		}
		// ��������·��
		if (FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{//�ж��Ƿ��ļ���
			string FullPathName = Path + FindData.cFileName + "/";
			_GetAllFiles(FullPathName, FData);
			continue;
		}
		// ����������ļ�
		string Char = Path + FindData.cFileName;
		FData.push_back(Char);
	}
	return true;
}



void TodayTrial::OpenTrial(string &TrialName) {
	if (TrialName.find(Grades[1],0) != TrialName.npos) {
		Ԫ���������Բ��� ^ f = gcnew Ԫ���������Բ���(TrialName);
		f->ShowDialog();
	}
	else {
	
	}

}