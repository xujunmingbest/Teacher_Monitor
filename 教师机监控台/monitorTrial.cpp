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
	基尔霍夫定律监控 ^ 基尔霍夫定律监控wnd = gcnew 基尔霍夫定律监控;
	叠加原理监控 ^ 叠加原理监控wnd = gcnew 叠加原理监控;
	戴维南定理监控 ^ 戴维南定理监控wnd = gcnew 戴维南定理监控;
	电压源与电流源的等效变换监控^ 电压源与电流源的等效变换监控Wnd = gcnew 电压源与电流源的等效变换监控;
	一阶电路的响应测试监控 ^一阶电路的响应测试监控Wnd = gcnew 一阶电路的响应测试监控;
	二阶动态电路响应的研究监控 ^二阶动态电路响应的研究监控Wnd = gcnew 二阶动态电路响应的研究监控;
	VCVS实验监控 ^VCVS实验监控Wnd = gcnew VCVS实验监控;
	二端口网络的研究监控 ^二端口网络的研究监控Wnd = gcnew 二端口网络的研究监控;
	最大功率传输条件的测定监控 ^最大功率传输条件的测定监控Wnd = gcnew 最大功率传输条件的测定监控;

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
			case 2: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(基尔霍夫定律监控wnd);
					firstEnter = false;
				}
				ST_基尔霍夫定律 sT_基尔霍夫定律;
				memcpy(&sT_基尔霍夫定律, s_s.c_str(), sizeof(ST_基尔霍夫定律));
				if (基尔霍夫定律监控wnd->Name->Contains("close")) closesocket(s);
				基尔霍夫定律监控wnd->LoadData(sT_基尔霍夫定律);
				break;
			}
			case 3: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(叠加原理监控wnd);
					firstEnter = false;
				}
				ST_叠加原理 sT_叠加原理;
				memcpy(&sT_叠加原理, s_s.c_str(), sizeof(ST_叠加原理));
				if (叠加原理监控wnd->Name->Contains("close")) closesocket(s);
				叠加原理监控wnd->LoadData(sT_叠加原理);
				break;
			}
			case 4: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(戴维南定理监控wnd);
					firstEnter = false;
				}
				ST_戴维南定理 sT_戴维南定理;
				memcpy(&sT_戴维南定理, s_s.c_str(), sizeof(ST_戴维南定理));
				if (戴维南定理监控wnd->Name->Contains("close")) closesocket(s);
				戴维南定理监控wnd->LoadData(sT_戴维南定理);
				break;
			}
			case 5: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(电压源与电流源的等效变换监控Wnd);
					firstEnter = false;
				}
				ST_电压源与电流源的等效变换 sT_电压源与电流源的等效变换;
				memcpy(&sT_电压源与电流源的等效变换, s_s.c_str(), sizeof(ST_电压源与电流源的等效变换));
				if (电压源与电流源的等效变换监控Wnd->Name->Contains("close")) closesocket(s);
				电压源与电流源的等效变换监控Wnd->LoadData(sT_电压源与电流源的等效变换);
				break;
			}
			case 6: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(一阶电路的响应测试监控Wnd);
					firstEnter = false;
				}
				ST_一阶电路的响应测试 sT_一阶电路的响应测试;
				memcpy(&sT_一阶电路的响应测试, s_s.c_str(), sizeof(ST_一阶电路的响应测试));
				if (一阶电路的响应测试监控Wnd->Name->Contains("close")) closesocket(s);
				一阶电路的响应测试监控Wnd->LoadData(sT_一阶电路的响应测试);
				break;
			}
			case 7: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(二阶动态电路响应的研究监控Wnd);
					firstEnter = false;
				}
				ST_二阶动态电路响应的研究 sT_二阶动态电路响应的研究;
				memcpy(&sT_二阶动态电路响应的研究, s_s.c_str(), sizeof(ST_二阶动态电路响应的研究));
				if (二阶动态电路响应的研究监控Wnd->Name->Contains("close")) closesocket(s);
				二阶动态电路响应的研究监控Wnd->LoadData(sT_二阶动态电路响应的研究);
				break;
			}
			case 8: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(VCVS实验监控Wnd);
					firstEnter = false;
				}
				ST_VCVS实验 sT_VCVS实验;
				memcpy(&sT_VCVS实验, s_s.c_str(), sizeof(ST_VCVS实验));
				if (VCVS实验监控Wnd->Name->Contains("close")) closesocket(s);
				VCVS实验监控Wnd->LoadData(sT_VCVS实验);
				break;
			}			
			case 9: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(二端口网络的研究监控Wnd);
					firstEnter = false;
				}
				ST_二端口网络的研究 sT_二端口网络的研究;
				memcpy(&sT_二端口网络的研究, s_s.c_str(), sizeof(ST_二端口网络的研究));
				if (二端口网络的研究监控Wnd->Name->Contains("close")) closesocket(s);
				二端口网络的研究监控Wnd->LoadData(sT_二端口网络的研究);
				break;
			}
			case 10: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(最大功率传输条件的测定监控Wnd);
					firstEnter = false;
				}
				ST_最大功率传输条件的测定 sT_最大功率传输条件的测定;
				memcpy(&sT_最大功率传输条件的测定, s_s.c_str(), sizeof(ST_最大功率传输条件的测定));
				if (最大功率传输条件的测定监控Wnd->Name->Contains("close")) closesocket(s);
				最大功率传输条件的测定监控Wnd->LoadData(sT_最大功率传输条件的测定);
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