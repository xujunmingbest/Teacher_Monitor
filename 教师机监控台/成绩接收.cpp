#include "�ɼ�����.h"


bool GradeRecvServ::open() {
	if (!cs.Open(RECVGRADEPORT)) {
		return false;
	}
	cs.SetServfun(handle);
	cs.Acpt();
	return true;
}
using namespace System::IO; 
using namespace System;

void GradeRecvServ::handle(SOCKET s) {
	RecvGradeProtocol md;
	String^ Day = DateTime::Now.ToString("yyyy-MM-dd");
	uint f_l = 0;
	if (!md.RecvFIRSTBYTES(s, f_l)) {
		closesocket(s);
		return;
	}
	uint s_l = 0;
	if (!md.RecvSECONDBYTES(s, s_l)) {
		closesocket(s);
		return;
	}
	string f_s;
	if (!md.RecvFIRST(s, f_l, f_s)) {
		closesocket(s);
		return;
	}

	string s_s;
	if (!md.RecvSECOND(s, s_l, s_s)) {
		closesocket(s);
		return;
	}

	//�����Ѿ�ȫ���������
	GradesHead H;
	memcpy(&H, f_s.c_str(), sizeof(GradesHead));
	//�ж����ĸ�ʵ�� 
	switch (H.TrialCode) {
	case 1: //Ԫ���������Բ���
	{   
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s,-2);
			md.Send(s, ret);
			break;
		}
		ST_Ԫ���������Բ��� sT_Ԫ���������Բ���;
		memcpy(&sT_Ԫ���������Բ���, s_s.c_str(), sizeof(ST_Ԫ���������Բ���));
		string savePath = GenerateFileName(sT_Ԫ���������Բ���.ti);
		fileSql f;
		string data((char*)&sT_Ԫ���������Բ���, sizeof(ST_Ԫ���������Բ���));
		
		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}

	}

	closesocket(s);
}


string GradeRecvServ::GenerateFileName(TrialInfo &ti) {
	/***\ʱ��\�༶\name1-name2-trial.sql***/

	string savePath(GRADESAVEPATH);
	string time(ti.date);
	time = time.substr(0, 10);
	savePath += time + "/" + ti.Class + "/";
	Directory::CreateDirectory(gcnew String(savePath.c_str()));
	savePath += string(ti.stuName1) + "-" + string(ti.stuName2) + "-" + string(ti.TrialName) + ".fileSql";
	return savePath;
}



void GradeRecvServ::close() {
	cs.Destroy();

}


/*******
���ľ����޸�ʽ�Ĵ�����Ϣ
********/
string RecvGradeProtocol::GenerateErrRet(string &OriginHead, int errorCode) {
	string f = GenerateFIRSTBYTES(OriginHead.length());

	
	GradesHead H;
	memcpy(&H, OriginHead.c_str(), OriginHead.length());
	snprintf(H.MsgType, sizeof(H.MsgType), "RETMSG");
	string f_s((char*)&H, OriginHead.length());

	string s_s = GradesRet[errorCode];
	string s = GenerateSECONDBYTES(s_s.length());
	string fina = f + s + f_s + s_s;
	return fina;
}