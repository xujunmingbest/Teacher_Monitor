#include "mainWnd.h"
#include "lookStuCom.h"
#include "tool.h"
#include "���ݽ��տ���.h"
#include "���ߵ�Դ����������.h"
#include "Ԫ���������Բ���.h"
#include "TodayTrial.h"
using namespace ��ʦ�����̨;
void mainWnd::open�鿴ѧ������() {
	Control^ f_wnd = GetWindowsChild("lookStuCom");
	if (f_wnd == nullptr) {
		//CloseAllMidchild();
		lookStuCom^ f = gcnew lookStuCom;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "lookStuCom";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f_wnd->BringToFront();
	}
}
void mainWnd::open�ɼ�����() {
	Control^ f_wnd = GetWindowsChild("���ݽ��տ���");
	if (f_wnd == nullptr) {
		//CloseAllMidchild();
		���ݽ��տ���^ f = gcnew ���ݽ��տ���;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "���ݽ��տ���";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f_wnd->BringToFront();
	}
}


void mainWnd::openTrialReport(string &FileName) {
	if (FileName.find(Grades[1], 0) != FileName.npos) {
		//CloseAllMidchild();
		Ԫ���������Բ���^ f = gcnew Ԫ���������Բ���(FileName);
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "Ԫ���������Բ���";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	
	}
}

void mainWnd::openTodayTrials() {
	Control^ f_wnd = GetWindowsChild("TodayTrial");
	if (f_wnd == nullptr) {
		//CloseAllMidchild();
		TodayTrial^ f = gcnew TodayTrial;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "TodayTrial";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f_wnd->BringToFront();
	}

}

void mainWnd::open�ɼ���ѯ() {
	Control^ f_wnd = GetWindowsChild("�ɼ���ѯ");
	if (f_wnd == nullptr) {
		//CloseAllMidchild();
		�ɼ���ѯ ^f = gcnew �ɼ���ѯ;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "�ɼ���ѯ";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f_wnd->BringToFront();
	}
}

void mainWnd::open���ߵ�Դ����() {
	Control^ f_wnd = GetWindowsChild("���ߵ�Դ����������");
	if (f_wnd == nullptr) {
		//CloseAllMidchild();
		���߿��� ^f = gcnew ���߿���;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "���ߵ�Դ����������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f_wnd->BringToFront();
	}
}

void mainWnd::CloseAllMidchild() {
	panel1->Controls->Clear();
	for each(Form^ f in MdiChildren)
	{
		f->Close();
	}
}
Control^ mainWnd::GetWindowsChild(String ^FormName) {
	//for each(Form^ f in MdiChildren)
	//{
	//	if (f->Name == FormName)
	//	{
	//		return true;
	//	}
	//}
	for each(Control^ f in this->panel1->Controls)
	{
		if (f->Name == FormName)
		{
			return f;
		}
	}
	return nullptr;
}



