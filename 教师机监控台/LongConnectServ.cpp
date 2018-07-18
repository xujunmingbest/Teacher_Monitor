#include "LongConnectServ.h"
#include "tool.h"

map<string, TrialStatus_s> cominfo;
QueueMutex cm;


bool LongConnectServ::Open() {
	cs.SetServfun(RecvFun);
	if (!cs.Open(1236)) return false;
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
				ComputerId = tss.ts.computerId;
				tss.s = s;
				Addcominfo(ComputerId, tss);
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