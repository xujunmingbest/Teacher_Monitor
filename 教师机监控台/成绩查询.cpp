#include "�ɼ���ѯ.h"
#include <windows.h>
#include "E:/clr����/�繤��·����̨/�繤��·����̨/tool/gradeSubmit.h"
#include "tool.h"
#include "Ԫ���������Բ���.h"
#include "����������.h"
#include "����ԭ��.h"
#include "��ά�϶���.h"
#include "��ѹԴ�����Դ�ĵ�Ч�任.h"
#include "һ�׵�·����Ӧ����.h"
#include "���׶�̬��·��Ӧ���о�.h"
#include "VCVSʵ��.h"
#include "���˿�������о�.h"
#include "����ʴ��������Ĳⶨ.h"
#include "��·״̬�켣�Ĺ۲�.h"
#include "RLCԪ���迹���ԵĲⶨ.h"
#include "RLC����г���·���о�.h"

using namespace ��ʦ�����̨;
void �ɼ���ѯ::LoadAllTrial() {
	comboBox1->Items->Clear();
	comboBox2->Items->Clear();
	for (int i = 0; i < Grades.size(); i++) {
		comboBox1->Items->Add(gcnew String(Grades[i+1].c_str()));
	}
	for (int i = 0; i < students.size(); i++) {
		comboBox2->Items->Add(gcnew String(students[i].Class.c_str()));
	}
}

void �ɼ���ѯ::LoadcomboBox3(int index) {
	comboBox3->Items->Clear();
	for (int i = 0; i < students[index].stus.size(); i++) {
		comboBox3->Items->Add(gcnew String(students[index].stus[i][0].c_str()));
	}

}


void �ɼ���ѯ::OpenTrial(string &TrialName) {
	if (TrialName.find(Grades[1], 0) != TrialName.npos) {
		Ԫ���������Բ��� ^ f = gcnew Ԫ���������Բ���(TrialName);
		f->ShowDialog();
	}
	else if(TrialName.find(Grades[2], 0) != TrialName.npos) {
		���������� ^ f = gcnew ����������();
		f->Load����������Data(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[3], 0) != TrialName.npos) {
		����ԭ�� ^ f = gcnew ����ԭ��();
		f->Load����ԭ��Data(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[4], 0) != TrialName.npos) {
		��ά�϶��� ^ f = gcnew ��ά�϶���();
		f->Load��ά�϶���Data(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[5], 0) != TrialName.npos) {
		��ѹԴ�����Դ�ĵ�Ч�任 ^ f = gcnew ��ѹԴ�����Դ�ĵ�Ч�任();
		f->Load��ѹԴ�����Դ�ĵ�Ч�任Data(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[6], 0) != TrialName.npos) {
		һ�׵�·����Ӧ���� ^ f = gcnew һ�׵�·����Ӧ����();
		f->Loadһ�׵�·����Ӧ����Data(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[7], 0) != TrialName.npos) {
		���׶�̬��·��Ӧ���о�^ f = gcnew ���׶�̬��·��Ӧ���о�();
		f->Loadһ�׵�·����Ӧ����Data(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[8], 0) != TrialName.npos) {
		VCVSʵ��^ f = gcnew VCVSʵ��();
		f->LoadVCVSʵ��Data(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[9], 0) != TrialName.npos) {
		���˿�������о�^ f = gcnew ���˿�������о�();
		f->Load���˿�������о�Data(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[10], 0) != TrialName.npos) {
		����ʴ��������Ĳⶨ^ f = gcnew ����ʴ��������Ĳⶨ();
		f->Load����ʴ��������ĲⶨData(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[11], 0) != TrialName.npos) {
		��·״̬�켣�Ĺ۲�^ f = gcnew ��·״̬�켣�Ĺ۲�();
		f->Load��·״̬�켣�Ĺ۲�Data(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[12], 0) != TrialName.npos) {
		RLCԪ���迹���ԵĲⶨ^ f = gcnew RLCԪ���迹���ԵĲⶨ();
		f->LoadRLCԪ���迹���ԵĲⶨData(TrialName);
		f->ShowDialog();
	}
	else if (TrialName.find(Grades[13], 0) != TrialName.npos) {
		RLC����г���·���о�^ f = gcnew RLC����г���·���о�();
		f->LoadRLC����г���·���о�Data(TrialName);
		f->ShowDialog();
	}
}









bool _GetAllFiles(string& Path, vector<string> &FData)
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

void �ɼ���ѯ::GetDataByCondition(vector<string> &files, vector<string> &contitions) {
	files.clear();
	vector<string> filestemp;
	if (!_GetAllFiles(string("data/"), filestemp)) {
		MessageBox::Show("�ɼ���ѯʧ��");
		return;
	}
	for (int i = 0; i < filestemp.size(); i++) {
		bool has = true;
		string fileName = filestemp[i];
		for (int j = 0; j < contitions.size(); j++) {
			string condition = contitions[j];
			if (fileName.find(condition, 0) == fileName.npos) { //��ѯ����
				has = false;
				break;
			}
		}
		if(has) files.push_back(fileName);
	}
}

void �ɼ���ѯ::GetCondition(vector<string> &contitions) {
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
void �ɼ���ѯ::LoadListBox1() {
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
			listView1->Items[i]->SubItems->Add("δ����");
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


