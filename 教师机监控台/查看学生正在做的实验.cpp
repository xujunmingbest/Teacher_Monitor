#include "�鿴ѧ����������ʵ��.h"
using namespace ��ʦ�����̨;



Ԫ���������Լ��^ �鿴ѧ����������ʵ��::OpenԪ���������Լ��() {
	Form^ f = GetWindowsChild("Ԫ���������Լ��");
	MessageBox::Show("123455");
	if (f == nullptr) {
		MessageBox::Show("666666");
		CloseAllMidchild();
		Ԫ���������Լ��^ f = gcnew Ԫ���������Լ��();
		f->MdiParent = this;
		f->Parent = this->panel2;
		f->Name = "Ԫ���������Լ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
		MessageBox::Show("haha");
	}
	return (Ԫ���������Լ��^)f;
}


Form^ �鿴ѧ����������ʵ��::GetWindowsChild(String ^FormName) {
	for each(Form^ f in MdiChildren)
	{
		if (f->Name == FormName)
		{
			return f;
		}
	}
	return nullptr;
}


void �鿴ѧ����������ʵ��::CloseAllMidchild() {
	panel2->Controls->Clear();
	for each(Form^ f in MdiChildren)
	{
		f->Close();
	}
}