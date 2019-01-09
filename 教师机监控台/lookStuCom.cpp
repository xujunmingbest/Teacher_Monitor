#include "lookStuCom.h"

void lookStuCom::SearchLANIps() {

	mutex->WaitOne();
	try {
		string SearchIp; // = T_to_string(textBox1->Text);
		GetLANIps();
		listView1->Items->Clear();
		Sleep(1000);
		listView1->BeginUpdate();
		int j = 0;
		for (int i = 0; i < LANIps.size(); i++) {
			//Console::WriteLine(gcnew String(LANIps[i].c_str()));

			if (SearchIp == LANIps[i]) {
				listView1->Items->Add(gcnew String(LANIps[i].c_str()));
				listView1->Items[j++]->ImageIndex = 0;
			}
		}
		listView1->EndUpdate();
	}
	catch (System::Exception ^ e) {
		Console::WriteLine(e->ToString());
	}
	mutex->ReleaseMutex();
}

void lookStuCom::GetGetLANIps() {

	mutex->WaitOne();
	try {
		GetLANIps();
		listView1->Items->Clear();
		Sleep(1000);
		listView1->BeginUpdate();
		int j = 0;
		for (int i = 0; i < LANIps.size(); i++) {

				listView1->Items->Add(gcnew String(LANIps[i].c_str()));
				listView1->Items[j++]->ImageIndex = 0;
		}
		listView1->EndUpdate();
	}
	catch (System::Exception ^ e) {
		Console::WriteLine(e->ToString());
	}
	mutex->ReleaseMutex();
}

void lookStuCom::ComputerLoad() {
	try {
		Thread ^t = gcnew Thread(gcnew ThreadStart(this, &lookStuCom::GetComputers));
		t->Start();
	}
	catch (System::Exception^e) {
		cout << "开辟线程引发异常" << endl;
	}
}
void lookStuCom::SearchComLoad() {
	Thread ^t = gcnew Thread(gcnew ThreadStart(this, &lookStuCom::SearchLANIps));
	t->Start();
}


//获取 
void lookStuCom::GetComputers() {
	mutex->WaitOne();
	try {
		listView1->Items->Clear();
		vector<TrialStatus_s> Cominfos;
		LongConnectServ::GetCominfos(Cominfos);
		listView1->BeginUpdate();
		int j = 0;
		for (int i = 0; i < Cominfos.size(); i++) {
			listView1->Items->Add(gcnew String(Cominfos[i].ts.computerId)
				+ "\n姓名1:" + gcnew String(Cominfos[i].ts.ti.stuName1)
				+ "\n姓名2:"+gcnew String(Cominfos[i].ts.ti.stuName2)
				+"\n状态: " +gcnew String(Cominfos[i].ts.trialStatus));
			listView1->Items[j]->ImageIndex = 0;
			listView1->Items[j]->Name = gcnew String(Cominfos[i].ts.computerId);
			String ^TText = listView1->Items[j]->Text;
			if (TText->Contains("开机")) {
				listView1->Items[j]->ForeColor = Color::Blue;
			}
			else if (TText->Contains("实验中")) {
				listView1->Items[j]->ForeColor = Color::Green;
			}
			else if (TText->Contains("已交卷")) {
				listView1->Items[j]->ForeColor = Color::Red;
			}
			j++;
		}
		listView1->EndUpdate();
	}
	catch (System::Exception^e) {
		Console::Write(e->ToString());
	}
	mutex->ReleaseMutex();
}

void lookStuCom::RecvCallTeacherMessage() {
	while (CallTeacherQueue.QueueEnable) {
		S_CallTeacher sct = CallTeacherQueue.Consume();
		String^msg = gcnew String(sct.ti.computerId) + " 消息通知:" +
			gcnew String(sct.msg);
		userLog->LogOutput(msg);
	}
}

void lookStuCom::StartThreadCallTeacher() {
	try {
		t_CallTeacher->Abort();
	}
	catch (System::Exception ^ e) {

	}
	t_CallTeacher = gcnew Thread(gcnew ThreadStart(this,&lookStuCom::RecvCallTeacherMessage));
	t_CallTeacher->Start();
}