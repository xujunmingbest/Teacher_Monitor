#include "monitorTrial.h"
#include "E:/clr中腾/电工电路试验台/电工电路试验台/Long_connection_control.h"
#include <stdio.h>
#include <iostream>
using namespace std;
using namespace 教师机监控台;
using namespace System::Threading;
monitorTrial mt;

void monitorTrial::Open() {
	cs.Open(1239);
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
	电路状态轨迹的观测监控^ 电路状态轨迹的观测监控Wnd = gcnew 电路状态轨迹的观测监控;
	RLC元件阻抗特性的测定监控 ^RLC元件阻抗特性的测定监控Wnd = gcnew RLC元件阻抗特性的测定监控;
	RLC串联谐振电路的研究监控 ^RLC串联谐振电路的研究监控Wnd = gcnew RLC串联谐振电路的研究监控;
	单相铁心变压器特性的测试监控 ^单相铁心变压器特性的测试监控Wnd = gcnew 单相铁心变压器特性的测试监控;
	单相电度表实验监控 ^单相电度表实验监控Wnd = gcnew 单相电度表实验监控;
	三相交流电路电压电流的测量监控 ^三相交流电路电压电流的测量监控Wnd = gcnew 三相交流电路电压电流的测量监控;
	日光灯功率因数的提高监控 ^日光灯功率因数的提高监控Wnd = gcnew 日光灯功率因数的提高监控;
	回转器监控 ^回转器监控Wnd = gcnew 回转器监控;
	三相电路功率的测量监控 ^三相电路功率的测量监控Wnd = gcnew 三相电路功率的测量监控;
	负阻抗变换器监控 ^负阻抗变换器监控Wnd = gcnew 负阻抗变换器监控;
	RC网络的频率特性监控 ^RC网络的频率特性监控Wnd = gcnew RC网络的频率特性监控;
	仪表量程的扩展监控 ^仪表量程的扩展监控Wnd = gcnew 仪表量程的扩展监控;

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
			case 11: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(电路状态轨迹的观测监控Wnd);
					firstEnter = false;
				}
				ST_电路状态轨迹的观测 sT_电路状态轨迹的观测;
				memcpy(&sT_电路状态轨迹的观测, s_s.c_str(), sizeof(ST_电路状态轨迹的观测));
				if (电路状态轨迹的观测监控Wnd->Name->Contains("close")) closesocket(s);
				电路状态轨迹的观测监控Wnd->LoadData(sT_电路状态轨迹的观测);
				break;
			}			
			case 12: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(RLC元件阻抗特性的测定监控Wnd);
					firstEnter = false;
				}
				ST_RLC元件阻抗特性的测定 sT_RLC元件阻抗特性的测定;
				memcpy(&sT_RLC元件阻抗特性的测定, s_s.c_str(), sizeof(ST_RLC元件阻抗特性的测定));
				if (RLC元件阻抗特性的测定监控Wnd->Name->Contains("close")) closesocket(s);
				RLC元件阻抗特性的测定监控Wnd->LoadData(sT_RLC元件阻抗特性的测定);
				break;
			}			
			case 13: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(RLC串联谐振电路的研究监控Wnd);
					firstEnter = false;
				}
				ST_RLC串联谐振电路的研究 sT_RLC串联谐振电路的研究;
				memcpy(&sT_RLC串联谐振电路的研究, s_s.c_str(), sizeof(ST_RLC串联谐振电路的研究));
				if (RLC串联谐振电路的研究监控Wnd->Name->Contains("close")) closesocket(s);
				RLC串联谐振电路的研究监控Wnd->LoadData(sT_RLC串联谐振电路的研究);
				break;
			}			
			case 14: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(单相铁心变压器特性的测试监控Wnd);
					firstEnter = false;
				}
				ST_单相铁心变压器特性的测试 sT_单相铁心变压器特性的测试;
				memcpy(&sT_单相铁心变压器特性的测试, s_s.c_str(), sizeof(ST_单相铁心变压器特性的测试));
				if (单相铁心变压器特性的测试监控Wnd->Name->Contains("close")) closesocket(s);
				单相铁心变压器特性的测试监控Wnd->LoadData(sT_单相铁心变压器特性的测试);
				break;
			}			
			case 15: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(单相电度表实验监控Wnd);
					firstEnter = false;
				}
				ST_单相电度表实验 sT_单相电度表实验;
				memcpy(&sT_单相电度表实验, s_s.c_str(), sizeof(ST_单相电度表实验));
				if (单相电度表实验监控Wnd->Name->Contains("close")) closesocket(s);
				单相电度表实验监控Wnd->LoadData(sT_单相电度表实验);
				break;
			}
			case 16: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(三相交流电路电压电流的测量监控Wnd);
					firstEnter = false;
				}
				ST_三相交流电路电压电流的测量 sT_三相交流电路电压电流的测量;
				memcpy(&sT_三相交流电路电压电流的测量, s_s.c_str(), sizeof(ST_三相交流电路电压电流的测量));
				if (三相交流电路电压电流的测量监控Wnd->Name->Contains("close")) closesocket(s);
				三相交流电路电压电流的测量监控Wnd->LoadData(sT_三相交流电路电压电流的测量);
				break;
			}
			case 17: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(日光灯功率因数的提高监控Wnd);
					firstEnter = false;
				}
				ST_日光灯功率因数的提高 sT_日光灯功率因数的提高;
				memcpy(&sT_日光灯功率因数的提高, s_s.c_str(), sizeof(ST_日光灯功率因数的提高));
				if (日光灯功率因数的提高监控Wnd->Name->Contains("close")) closesocket(s);
				日光灯功率因数的提高监控Wnd->LoadData(sT_日光灯功率因数的提高);
				break;
			}
			case 18: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(回转器监控Wnd);
					firstEnter = false;
				}
				ST_回转器 sT_回转器;
				memcpy(&sT_回转器, s_s.c_str(), sizeof(ST_回转器));
				if (回转器监控Wnd->Name->Contains("close")) closesocket(s);
				回转器监控Wnd->LoadData(sT_回转器);
				break;
			}			
			case 19: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(三相电路功率的测量监控Wnd);
					firstEnter = false;
				}
				ST_三相电路功率的测量 sT_三相电路功率的测量;
				memcpy(&sT_三相电路功率的测量, s_s.c_str(), sizeof(ST_三相电路功率的测量));
				if (三相电路功率的测量监控Wnd->Name->Contains("close")) closesocket(s);
				三相电路功率的测量监控Wnd->LoadData(sT_三相电路功率的测量);
				break;
			}		
			case 20: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(负阻抗变换器监控Wnd);
					firstEnter = false;
				}
				ST_负阻抗变换器 sT_负阻抗变换器;
				memcpy(&sT_负阻抗变换器, s_s.c_str(), sizeof(ST_负阻抗变换器));
				if (负阻抗变换器监控Wnd->Name->Contains("close")) closesocket(s);
				负阻抗变换器监控Wnd->LoadData(sT_负阻抗变换器);
				break;
			}		
			case 21: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(RC网络的频率特性监控Wnd);
					firstEnter = false;
				}
				ST_RC网络的频率特性 sT_RC网络的频率特性;
				memcpy(&sT_RC网络的频率特性, s_s.c_str(), sizeof(ST_RC网络的频率特性));
				if (RC网络的频率特性监控Wnd->Name->Contains("close")) closesocket(s);
				RC网络的频率特性监控Wnd->LoadData(sT_RC网络的频率特性);
				break;
			}
			case 22: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(仪表量程的扩展监控Wnd);
					firstEnter = false;
				}
				ST_仪表量程的扩展 sT_仪表量程的扩展;
				memcpy(&sT_仪表量程的扩展, s_s.c_str(), sizeof(ST_仪表量程的扩展));
				if (仪表量程的扩展监控Wnd->Name->Contains("close")) closesocket(s);
				仪表量程的扩展监控Wnd->LoadData(sT_仪表量程的扩展);
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