#include "查看学生正在做的实验.h"
using namespace 教师机监控台;



元件伏安特性监控^ 查看学生正在做的实验::Open元件伏安特性监控() {
	Form^ f = GetWindowsChild("元件伏安特性监控");
	MessageBox::Show("123455");
	if (f == nullptr) {
		MessageBox::Show("666666");
		CloseAllMidchild();
		元件伏安特性监控^ f = gcnew 元件伏安特性监控();
		f->MdiParent = this;
		f->Parent = this->panel2;
		f->Name = "元件伏安特性监控";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
		MessageBox::Show("haha");
	}
	return (元件伏安特性监控^)f;
}


Form^ 查看学生正在做的实验::GetWindowsChild(String ^FormName) {
	for each(Form^ f in MdiChildren)
	{
		if (f->Name == FormName)
		{
			return f;
		}
	}
	return nullptr;
}


void 查看学生正在做的实验::CloseAllMidchild() {
	panel2->Controls->Clear();
	for each(Form^ f in MdiChildren)
	{
		f->Close();
	}
}