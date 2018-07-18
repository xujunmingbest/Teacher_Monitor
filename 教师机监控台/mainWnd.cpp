#include "mainWnd.h"
#include "lookStuCom.h"
#include "tool.h"
#include "数据接收控制.h"
#include "元件伏安特性测试.h"
#include "TodayTrial.h"
using namespace 教师机监控台;
void mainWnd::open查看学生电脑() {
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
void mainWnd::open成绩接收() {
	bool f = GetWindowsChild("数据接收控制");
	if (!f) {
		CloseAllMidchild();
		数据接收控制^ f = gcnew 数据接收控制;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "数据接收控制";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
}


void mainWnd::openTrialReport(string &FileName) {
	if (FileName.find(Grades[1], 0) != FileName.npos) {
		CloseAllMidchild();
		元件伏安特性测试^ f = gcnew 元件伏安特性测试(FileName);
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "元件伏安特性测试";
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

void mainWnd::open成绩查询() {
	bool f = GetWindowsChild("成绩查询");
	if (!f) {
		CloseAllMidchild();
		成绩查询 ^f = gcnew 成绩查询;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "成绩查询";
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



