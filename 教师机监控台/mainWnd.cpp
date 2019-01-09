#include "mainWnd.h"
#include "lookStuCom.h"
#include "tool.h"
#include "数据接收控制.h"
#include "无线电源控制主界面.h"
#include "元件伏安特性测试.h"
#include "TodayTrial.h"
using namespace 教师机监控台;
void mainWnd::open查看学生电脑() {
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
void mainWnd::open成绩接收() {
	Control^ f_wnd = GetWindowsChild("数据接收控制");
	if (f_wnd == nullptr) {
		//CloseAllMidchild();
		数据接收控制^ f = gcnew 数据接收控制;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "数据接收控制";
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
		元件伏安特性测试^ f = gcnew 元件伏安特性测试(FileName);
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "元件伏安特性测试";
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

void mainWnd::open成绩查询() {
	Control^ f_wnd = GetWindowsChild("成绩查询");
	if (f_wnd == nullptr) {
		//CloseAllMidchild();
		成绩查询 ^f = gcnew 成绩查询;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "成绩查询";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f_wnd->BringToFront();
	}
}

void mainWnd::open无线电源控制() {
	Control^ f_wnd = GetWindowsChild("无线电源控制主界面");
	if (f_wnd == nullptr) {
		//CloseAllMidchild();
		无线控制 ^f = gcnew 无线控制;
		f->MdiParent = this;
		f->Parent = this->panel1;
		f->Name = "无线电源控制主界面";
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



