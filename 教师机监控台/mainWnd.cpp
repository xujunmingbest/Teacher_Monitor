#include "mainWnd.h"
#include "lookStuCom.h"
#include "tool.h"
#include "���ݽ��տ���.h"
#include "Ԫ���������Բ���.h"
#include "TodayTrial.h"
using namespace ��ʦ�����̨;
void mainWnd::open�鿴ѧ������() {
	bool f = GetWindowsChild("lookStuCom");
	if (!f) {
		CloseAllMidchild();
		lookStuCom^ f = gcnew lookStuCom;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "lookStuCom";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}
void mainWnd::open�ɼ�����() {
	bool f = GetWindowsChild("���ݽ��տ���");
	if (!f) {
		CloseAllMidchild();
		���ݽ��տ���^ f = gcnew ���ݽ��տ���;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "���ݽ��տ���";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}


void mainWnd::openTrialReport(string &FileName) {
	if (FileName.find(Grades[1], 0) != FileName.npos) {
		CloseAllMidchild();
		Ԫ���������Բ���^ f = gcnew Ԫ���������Բ���(FileName);
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "Ԫ���������Բ���";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	
	}
}

void mainWnd::openTodayTrials() {
	bool f = GetWindowsChild("TodayTrial");
	if (!f) {
		CloseAllMidchild();
		TodayTrial^ f = gcnew TodayTrial;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "TodayTrial";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}

void mainWnd::open�ɼ���ѯ() {
	bool f = GetWindowsChild("�ɼ���ѯ");
	if (!f) {
		CloseAllMidchild();
		�ɼ���ѯ ^f = gcnew �ɼ���ѯ;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "�ɼ���ѯ";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}

}


void mainWnd::CloseAllMidchild() {
	panel1->Controls->Clear();
	for each(Form^ f in MdiChildren)
	{
		f->Close();
	}
}
bool mainWnd::GetWindowsChild(String ^FormName) {
	for each(Form^ f in MdiChildren)
	{
		if (f->Name == FormName)
		{
			return true;
		}
	}
	for each(Control^ f in this->panel1->Controls)
	{
		if (f->Name == FormName)
		{
			return true;
		}
	}

	return false;
}



