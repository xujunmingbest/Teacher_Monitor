#include "LongConnectServ.h"
#include "tool.h"

map<string, TrialStatus_s> cominfo;
QueueMutex cm;
MsgQueue<S_CallTeacher> CallTeacherQueue;

bool LongConnectServ::Open() {
	cs.SetServfun(RecvFun);
	if (!cs.Open(10001)) return false;
	cs.Acpt();
	return true;
}

bool LongConnectServ::SendCmdCapture(SOCKET c) {
	string r_s = GenerateCmd(Long_connection_Req[1]);
	protocolDemo md;
	return md.Send(c, r_s);
}


bool LongConnectServ::SendCmdStopTrial(SOCKET c) {
	string r_s = GenerateCmd(Long_connection_Req[2]);
	protocolDemo md;
	return md.Send(c, r_s);
}
bool LongConnectServ::SendCmdRecoverTrial(SOCKET c) {
	string r_s = GenerateCmd(Long_connection_Req[5]);
	protocolDemo md;
	return md.Send(c, r_s);
}

bool LongConnectServ::SendCmdForceCommitTrial(SOCKET c) {
	string r_s = GenerateCmd(Long_connection_Req[3]);
	protocolDemo md;
	return md.Send(c, r_s);
}

bool LongConnectServ::SendCmdGetNowTrial(SOCKET c) {
	Tool::clrmutex->WaitOne();
	if (Tool::openMonitorCount == 0) {
		Tool::clrmutex->ReleaseMutex();
	}
	else {
		Tool::clrmutex->ReleaseMutex();
		MessageBox::Show("先关闭现有监控");
		return false;
	}

	string r_s = GenerateCmd(Long_connection_Req[6]);
	protocolDemo md;
	return md.Send(c, r_s);
}

string LongConnectServ::GenerateCmd(string &cmd) {
	Long_connection_Head H;
	snprintf(H.req, sizeof(H.req),"%s", cmd.c_str());
	protocolDemo pd;
	string data("null");
	string l_f = pd.GenerateFIRSTBYTES(sizeof(Long_connection_Head));
	string l_s = pd.GenerateSECONDBYTES(data.length());
	string final = l_f + l_s + string((char*)&H, sizeof(Long_connection_Head)) + data;
	return final;
}
string LongConnectServ::GenerateReply(string &replyType,string &Replymsg) {
	Long_connection_Head H;
	memset(&H, 0x00, sizeof(Long_connection_Head));
	snprintf(H.reply, sizeof(H.reply), "%s", replyType.c_str());
	protocolDemo pd;

	string l_f = pd.GenerateFIRSTBYTES(sizeof(Long_connection_Head));
	string l_s = pd.GenerateSECONDBYTES(Replymsg.length());
	string final = l_f + l_s + string((char*)&H, sizeof(Long_connection_Head)) + Replymsg;
	return final;

}

void LongConnectServ::Close() {
	cs.Destroy();
}
void LongConnectServ::SocketClose(SOCKET s,string &computerId) {
	closesocket(s);
	DeleteCominfo(computerId);

}


void LongConnectServ::RecvFun(SOCKET s) {
	string ComputerId;
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
		Long_connection_Head H;
		memcpy(&H, f_s.c_str(), sizeof(Long_connection_Head));

		string req(H.req);
		string reply(H.reply);
		if (req.length() != 0) {
			if (req == Long_connection_Req[4]) //
			{ //获取机子信息
				TrialStatus_s tss;
				memcpy(&tss.ts, s_s.c_str(), sizeof(TrialStatus));
				//验证是不是在实验名单中
				string retmsg;
				if ( IsLoginLegal(tss.ts.ti)) retmsg = GenerateReply(Long_connection_Req[4],MsgRet[2]);
				else retmsg = GenerateReply(Long_connection_Req[4], MsgRet[-4]);
				md.Send(s, retmsg);
				ComputerId = tss.ts.computerId;
				tss.s = s;
				Addcominfo(ComputerId, tss);
			}
			if (req == Long_connection_Req[7])
			{ //获取学生列表
				string stuList;
				for (int i = 0; i < students.size(); i++) {
					ClassElement CE;
					memset(&CE, 0x00, sizeof(ClassElement));
					memcpy(CE.ClassName, students[i].Class.c_str(), students[i].Class.length());
					for (int j = 0; j < students[i].stus.size(); j++) {
						if (j >= 100) break;
						string stuName = students[i].stus[j][0];
						string stuXueHao = students[i].stus[j][1];
						if (stuName.length() > 100) continue;
						if (stuXueHao.length() > 50) continue;
						memcpy(CE.SEs[j].stuName, stuName.c_str(), stuName.length());
						memcpy(CE.SEs[j].XueHao, stuXueHao.c_str(), stuXueHao.length());
					}
					stuList += string((char*)&CE, sizeof(ClassElement));
				}
				string retmsg;
				if (stuList.length() == 0) GenerateReply(Long_connection_Req[7], MsgRet[-5]);
			    else retmsg = GenerateReply(Long_connection_Req[7], stuList);
				md.Send(s, retmsg);
			}
			if (req == Long_connection_Req[8]) { //呼叫老师
				if (CallTeacherQueue.QueueEnable) {
					S_CallTeacher sct;
					memcpy(&sct,s_s.c_str(), s_s.length());
					CallTeacherQueue.Publish(sct);
				}
			}
		}
		else if (reply.length() != 0 ) {
			if (reply == Long_connection_Req[6]) {
			// 获取实验信息
			   
			}
		}
	}
	SocketClose(s, ComputerId);
}


void LongConnectServ::Addcominfo(string &computer, TrialStatus_s &cs) {
	cm.Lock();
	cominfo[computer] = cs;
	cm.UnLock();
}

bool LongConnectServ::IsLoginLegal(TrialInfo &ti) {
	bool legal = false;
	int Pos = -1;
	for (int i = 0; i < students.size(); i++) {
		if (students[i].Class == string(ti.Class)) {
			legal = true;
			Pos = i;
			break;
		}
	}
	if (legal) {
		int legalCount = 0;
		for (int i = 0; i < students[Pos].stus.size(); i++) {
			if ( students[Pos].stus[i][0] == string(ti.stuName1) ) {
				if( students[Pos].stus[i][1] == string(ti.XueHao1))
					legalCount++;
			}
			if (students[Pos].stus[i][0] == string(ti.stuName2)) {
				if (students[Pos].stus[i][1] == string(ti.XueHao2))
					legalCount++;
			}
		}
		if (legalCount >= 2) {
			return true;
		}
	}
	return false;
}

void LongConnectServ::DeleteCominfo(string &computer) {
	cm.Lock();
	bool cout = cominfo.count(computer);
	if (cout) {
		cominfo.erase(computer);
	}
	cm.UnLock();
}

bool LongConnectServ::FindCominfo(string &computer, TrialStatus_s &cs) {
	cm.Lock();
	bool cout = cominfo.count(computer);
	if (cout) {
		cs = cominfo[computer];
		cm.UnLock();
		return true;
	}
	cm.UnLock();
	return false;
}

void LongConnectServ::GetCominfos(vector<TrialStatus_s> &Cominfos) {
	cm.UnLock();
	Cominfos.clear();
	map<string, TrialStatus_s>::iterator i;
	for (i = cominfo.begin(); i != cominfo.end(); i++) {
		Cominfos.push_back(i->second);
	}
	cm.Lock();
}

LongConnectServ::LongConnectServ() {

}

LongConnectServ::~LongConnectServ() {

}


vector<Students> students;

void LongConnectServ::GetStudents(string Path) {

	students.clear();
	vector<string> FData;
	GetOneFolderFiles(Path, FData);
	for (int i = 0; i < FData.size(); i++) {
		cout << FData[i].c_str() << endl;
		CSVdata cd;
		cd.FileName = FData[i];
		CSVLoad cl;
		cl.Read(cd);
		Students sts;
		sts.fields = cd.Fields;
		sts.Class = cd.Class;
		sts.stus = cd.Rows;
		students.push_back(sts);
	}

	for (int i = 0; i < students.size(); i++) {
		cout << students[i].Class.c_str() << endl;
	}
}