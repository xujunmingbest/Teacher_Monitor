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
	���������ɼ�� ^ ���������ɼ��wnd = gcnew ���������ɼ��;
	����ԭ���� ^ ����ԭ����wnd = gcnew ����ԭ����;
	��ά�϶����� ^ ��ά�϶�����wnd = gcnew ��ά�϶�����;
	��ѹԴ�����Դ�ĵ�Ч�任���^ ��ѹԴ�����Դ�ĵ�Ч�任���Wnd = gcnew ��ѹԴ�����Դ�ĵ�Ч�任���;
	һ�׵�·����Ӧ���Լ�� ^һ�׵�·����Ӧ���Լ��Wnd = gcnew һ�׵�·����Ӧ���Լ��;
	���׶�̬��·��Ӧ���о���� ^���׶�̬��·��Ӧ���о����Wnd = gcnew ���׶�̬��·��Ӧ���о����;
	VCVSʵ���� ^VCVSʵ����Wnd = gcnew VCVSʵ����;
	���˿�������о���� ^���˿�������о����Wnd = gcnew ���˿�������о����;
	����ʴ��������Ĳⶨ��� ^����ʴ��������Ĳⶨ���Wnd = gcnew ����ʴ��������Ĳⶨ���;

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
			case 2: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(���������ɼ��wnd);
					firstEnter = false;
				}
				ST_���������� sT_����������;
				memcpy(&sT_����������, s_s.c_str(), sizeof(ST_����������));
				if (���������ɼ��wnd->Name->Contains("close")) closesocket(s);
				���������ɼ��wnd->LoadData(sT_����������);
				break;
			}
			case 3: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(����ԭ����wnd);
					firstEnter = false;
				}
				ST_����ԭ�� sT_����ԭ��;
				memcpy(&sT_����ԭ��, s_s.c_str(), sizeof(ST_����ԭ��));
				if (����ԭ����wnd->Name->Contains("close")) closesocket(s);
				����ԭ����wnd->LoadData(sT_����ԭ��);
				break;
			}
			case 4: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(��ά�϶�����wnd);
					firstEnter = false;
				}
				ST_��ά�϶��� sT_��ά�϶���;
				memcpy(&sT_��ά�϶���, s_s.c_str(), sizeof(ST_��ά�϶���));
				if (��ά�϶�����wnd->Name->Contains("close")) closesocket(s);
				��ά�϶�����wnd->LoadData(sT_��ά�϶���);
				break;
			}
			case 5: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(��ѹԴ�����Դ�ĵ�Ч�任���Wnd);
					firstEnter = false;
				}
				ST_��ѹԴ�����Դ�ĵ�Ч�任 sT_��ѹԴ�����Դ�ĵ�Ч�任;
				memcpy(&sT_��ѹԴ�����Դ�ĵ�Ч�任, s_s.c_str(), sizeof(ST_��ѹԴ�����Դ�ĵ�Ч�任));
				if (��ѹԴ�����Դ�ĵ�Ч�任���Wnd->Name->Contains("close")) closesocket(s);
				��ѹԴ�����Դ�ĵ�Ч�任���Wnd->LoadData(sT_��ѹԴ�����Դ�ĵ�Ч�任);
				break;
			}
			case 6: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(һ�׵�·����Ӧ���Լ��Wnd);
					firstEnter = false;
				}
				ST_һ�׵�·����Ӧ���� sT_һ�׵�·����Ӧ����;
				memcpy(&sT_һ�׵�·����Ӧ����, s_s.c_str(), sizeof(ST_һ�׵�·����Ӧ����));
				if (һ�׵�·����Ӧ���Լ��Wnd->Name->Contains("close")) closesocket(s);
				һ�׵�·����Ӧ���Լ��Wnd->LoadData(sT_һ�׵�·����Ӧ����);
				break;
			}
			case 7: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(���׶�̬��·��Ӧ���о����Wnd);
					firstEnter = false;
				}
				ST_���׶�̬��·��Ӧ���о� sT_���׶�̬��·��Ӧ���о�;
				memcpy(&sT_���׶�̬��·��Ӧ���о�, s_s.c_str(), sizeof(ST_���׶�̬��·��Ӧ���о�));
				if (���׶�̬��·��Ӧ���о����Wnd->Name->Contains("close")) closesocket(s);
				���׶�̬��·��Ӧ���о����Wnd->LoadData(sT_���׶�̬��·��Ӧ���о�);
				break;
			}
			case 8: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(VCVSʵ����Wnd);
					firstEnter = false;
				}
				ST_VCVSʵ�� sT_VCVSʵ��;
				memcpy(&sT_VCVSʵ��, s_s.c_str(), sizeof(ST_VCVSʵ��));
				if (VCVSʵ����Wnd->Name->Contains("close")) closesocket(s);
				VCVSʵ����Wnd->LoadData(sT_VCVSʵ��);
				break;
			}			
			case 9: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(���˿�������о����Wnd);
					firstEnter = false;
				}
				ST_���˿�������о� sT_���˿�������о�;
				memcpy(&sT_���˿�������о�, s_s.c_str(), sizeof(ST_���˿�������о�));
				if (���˿�������о����Wnd->Name->Contains("close")) closesocket(s);
				���˿�������о����Wnd->LoadData(sT_���˿�������о�);
				break;
			}
			case 10: {
				if (firstEnter) {
					ParameterizedThreadStart ^pt = gcnew ParameterizedThreadStart(ShowDialog);
					Thread ^t = gcnew Thread(pt);
					t->Start(����ʴ��������Ĳⶨ���Wnd);
					firstEnter = false;
				}
				ST_����ʴ��������Ĳⶨ sT_����ʴ��������Ĳⶨ;
				memcpy(&sT_����ʴ��������Ĳⶨ, s_s.c_str(), sizeof(ST_����ʴ��������Ĳⶨ));
				if (����ʴ��������Ĳⶨ���Wnd->Name->Contains("close")) closesocket(s);
				����ʴ��������Ĳⶨ���Wnd->LoadData(sT_����ʴ��������Ĳⶨ);
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