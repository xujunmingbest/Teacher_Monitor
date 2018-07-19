#include "monitorTrial.h"
#include "E:/clr中腾/电工电路试验台/电工电路试验台/Long_connection_control.h"
#include <stdio.h>
#include <iostream>
using namespace std;
using namespace 教师机监控台;
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
	元件伏安特性监控 ^ 元件伏安特性监控wnd = gcnew 元件伏安特性监控;
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
			// 根据实验编号进行实验的提取 这个一定要showdialog
			switch (ti.TrialCode) {
			case 0: {
				MessageBox::Show("学生没有在实验");
				break;
			}
			case 1: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(元件伏安特性监控wnd);
					firstEnter = false;
				}
				ST_元件伏安特性测试 sT_元件伏安特性测试;
				memcpy(&sT_元件伏安特性测试, s_s.c_str(),sizeof(ST_元件伏安特性测试));
				if(元件伏安特性监控wnd->Name->Contains("close")) closesocket(s);
				元件伏安特性监控wnd->This_Load(sT_元件伏安特性测试);
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
		MessageBox::Show("学生没有正在进行的实验");
		return nullptr;
	}

	for each (Form^f in Application::OpenForms)
	{
		Console::WriteLine(f->Name);
		if (f->Name == "元件伏安特性监控" && TrialCode == 1) {
			return f;
		}
	}

	return nullptr;
}