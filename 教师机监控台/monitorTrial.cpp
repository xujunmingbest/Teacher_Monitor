#include "monitorTrial.h"
#include "E:/clr����/�繤��·����̨/�繤��·����̨/Long_connection_control.h"
#include <stdio.h>
#include <iostream>
using namespace std;
using namespace ��ʦ�����̨;
using namespace System::Threading;
monitorTrial mt;

void monitorTrial::Open() {
	cs.Open(1238);
	cs.SetServfun(monitorTrial::RecvGrade);
	cs.Acpt();
}

Form ^GetChildByName(String ^Name) {
	for each (Form^f in Application::OpenForms)
	{
		if (f->Name == Name) {
			return f;
		}
	}
	return nullptr;
}

void monitorTrial::RecvGrade(SOCKET s) {
	Ԫ���������Լ�� ^ Ԫ���������Լ��wnd = gcnew Ԫ���������Լ��;
	bool firstEnter =true;

	while (true) {
		protocolDemo md;
		uint f_l = 0;
		if (!md.RecvFIRSTBYTES(s, f_l)) {
			break;
		}
		uint s_l = 0;
		if (!md.RecvSECONDBYTES(s, s_l)) {
			break;
		}
		string f_s;
		if (!md.RecvFIRST(s, f_l, f_s)) {
			break;
		}

		string s_s;
		if (!md.RecvSECOND(s, s_l, s_s)) {
			break;
		}
		TrialInfo ti;
		memcpy(&ti, s_s.c_str(), s_s.length());
		try {
			// ����ʵ���Ž���ʵ�����ȡ ���һ��Ҫshowdialog
			switch (ti.TrialCode) {
			case 0: {
				MessageBox::Show("ѧ��û����ʵ��");
				break;
			}
			case 1: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(Ԫ���������Լ��wnd);
					firstEnter = false;
				}
				ST_Ԫ���������Բ��� sT_Ԫ���������Բ���;
				memcpy(&sT_Ԫ���������Բ���, s_s.c_str(),sizeof(ST_Ԫ���������Բ���));
				if(Ԫ���������Լ��wnd->Name->Contains("close")) closesocket(s);
				Ԫ���������Լ��wnd->This_Load(sT_Ԫ���������Բ���);
				break;
			}
			}
		}
		catch (Exception^e) {
			Console::Write(e->Message);
		}
	}
	closesocket(s);
}

void monitorTrial::Close() {
	cs.Destroy();
}

void ShowDialog(Object^f) {

	((Form^)f)->ShowDialog();
	((Form^)f)->Name += "close";
}


Form^ monitorTrial::FindFormByTrialCode(int TrialCode) {

	string name = Grades[TrialCode];
	if (name == "") {
		MessageBox::Show("ѧ��û�����ڽ��е�ʵ��");
		return nullptr;
	}

	for each (Form^f in Application::OpenForms)
	{
		Console::WriteLine(f->Name);
		if (f->Name == "Ԫ���������Լ��" && TrialCode == 1) {
			return f;
		}
	}

	return nullptr;
}