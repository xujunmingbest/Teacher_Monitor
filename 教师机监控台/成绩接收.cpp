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
	case 2: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_���������� sT_����������;
		memcpy(&sT_����������, s_s.c_str(), sizeof(ST_����������));
		string savePath = GenerateFileName(sT_����������.ti);
		fileSql f;
		string data((char*)&sT_����������, sizeof(ST_����������));


		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 3: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_����ԭ�� sT_����ԭ��;
		memcpy(&sT_����ԭ��, s_s.c_str(), sizeof(ST_����ԭ��));
		string savePath = GenerateFileName(sT_����ԭ��.ti);
		fileSql f;
		string data((char*)&sT_����ԭ��, sizeof(ST_����ԭ��));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 4: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_��ά�϶��� sT_��ά�϶���;
		memcpy(&sT_��ά�϶���, s_s.c_str(), sizeof(ST_��ά�϶���));
		string savePath = GenerateFileName(sT_��ά�϶���.ti);
		fileSql f;
		string data((char*)&sT_��ά�϶���, sizeof(ST_��ά�϶���));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 5: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_��ѹԴ�����Դ�ĵ�Ч�任 sT_��ѹԴ�����Դ�ĵ�Ч�任;
		memcpy(&sT_��ѹԴ�����Դ�ĵ�Ч�任, s_s.c_str(), sizeof(ST_��ѹԴ�����Դ�ĵ�Ч�任));
		string savePath = GenerateFileName(sT_��ѹԴ�����Դ�ĵ�Ч�任.ti);
		fileSql f;
		string data((char*)&sT_��ѹԴ�����Դ�ĵ�Ч�任, sizeof(ST_��ѹԴ�����Դ�ĵ�Ч�任));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 6: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_һ�׵�·����Ӧ���� sT_һ�׵�·����Ӧ����;
		memcpy(&sT_һ�׵�·����Ӧ����, s_s.c_str(), sizeof(ST_һ�׵�·����Ӧ����));
		string savePath = GenerateFileName(sT_һ�׵�·����Ӧ����.ti);
		fileSql f;
		string data((char*)&sT_һ�׵�·����Ӧ����, sizeof(ST_һ�׵�·����Ӧ����));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 7: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_���׶�̬��·��Ӧ���о� sT_���׶�̬��·��Ӧ���о�;
		memcpy(&sT_���׶�̬��·��Ӧ���о�, s_s.c_str(), sizeof(ST_���׶�̬��·��Ӧ���о�));
		string savePath = GenerateFileName(sT_���׶�̬��·��Ӧ���о�.ti);
		fileSql f;
		string data((char*)&sT_���׶�̬��·��Ӧ���о�, sizeof(ST_���׶�̬��·��Ӧ���о�));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 8: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_VCVSʵ�� sT_VCVSʵ��;
		memcpy(&sT_VCVSʵ��, s_s.c_str(), sizeof(ST_VCVSʵ��));
		string savePath = GenerateFileName(sT_VCVSʵ��.ti);
		fileSql f;
		string data((char*)&sT_VCVSʵ��, sizeof(ST_VCVSʵ��));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 9: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_���˿�������о� sT_���˿�������о�;
		memcpy(&sT_���˿�������о�, s_s.c_str(), sizeof(ST_���˿�������о�));
		string savePath = GenerateFileName(sT_���˿�������о�.ti);
		fileSql f;
		string data((char*)&sT_���˿�������о�, sizeof(ST_���˿�������о�));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 10: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_����ʴ��������Ĳⶨ sT_����ʴ��������Ĳⶨ;
		memcpy(&sT_����ʴ��������Ĳⶨ, s_s.c_str(), sizeof(ST_����ʴ��������Ĳⶨ));
		string savePath = GenerateFileName(sT_����ʴ��������Ĳⶨ.ti);
		fileSql f;
		string data((char*)&sT_����ʴ��������Ĳⶨ, sizeof(ST_����ʴ��������Ĳⶨ));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 11: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_��·״̬�켣�Ĺ۲� sT_��·״̬�켣�Ĺ۲�;
		memcpy(&sT_��·״̬�켣�Ĺ۲�, s_s.c_str(), sizeof(ST_��·״̬�켣�Ĺ۲�));
		string savePath = GenerateFileName(sT_��·״̬�켣�Ĺ۲�.ti);
		fileSql f;
		string data((char*)&sT_��·״̬�켣�Ĺ۲�, sizeof(ST_��·״̬�켣�Ĺ۲�));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 12: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_RLCԪ���迹���ԵĲⶨ sT_RLCԪ���迹���ԵĲⶨ;
		memcpy(&sT_RLCԪ���迹���ԵĲⶨ, s_s.c_str(), sizeof(ST_RLCԪ���迹���ԵĲⶨ));
		string savePath = GenerateFileName(sT_RLCԪ���迹���ԵĲⶨ.ti);
		fileSql f;
		string data((char*)&sT_RLCԪ���迹���ԵĲⶨ, sizeof(ST_RLCԪ���迹���ԵĲⶨ));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}	
	case 13: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_RLC����г���·���о� sT_RLC����г���·���о�;
		memcpy(&sT_RLC����г���·���о�, s_s.c_str(), sizeof(ST_RLC����г���·���о�));
		string savePath = GenerateFileName(sT_RLC����г���·���о�.ti);
		fileSql f;
		string data((char*)&sT_RLC����г���·���о�, sizeof(ST_RLC����г���·���о�));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 14: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_�������ı�ѹ�����ԵĲ��� sT_�������ı�ѹ�����ԵĲ���;
		memcpy(&sT_�������ı�ѹ�����ԵĲ���, s_s.c_str(), sizeof(ST_�������ı�ѹ�����ԵĲ���));
		string savePath = GenerateFileName(sT_�������ı�ѹ�����ԵĲ���.ti);
		fileSql f;
		string data((char*)&sT_�������ı�ѹ�����ԵĲ���, sizeof(ST_�������ı�ѹ�����ԵĲ���));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}	
	case 15: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_�����ȱ�ʵ�� sT_�����ȱ�ʵ��;
		memcpy(&sT_�����ȱ�ʵ��, s_s.c_str(), sizeof(ST_�����ȱ�ʵ��));
		string savePath = GenerateFileName(sT_�����ȱ�ʵ��.ti);
		fileSql f;
		string data((char*)&sT_�����ȱ�ʵ��, sizeof(ST_�����ȱ�ʵ��));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}	
	case 16: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_���ཻ����·��ѹ�����Ĳ��� sT_���ཻ����·��ѹ�����Ĳ���;
		memcpy(&sT_���ཻ����·��ѹ�����Ĳ���, s_s.c_str(), sizeof(ST_���ཻ����·��ѹ�����Ĳ���));
		string savePath = GenerateFileName(sT_���ཻ����·��ѹ�����Ĳ���.ti);
		fileSql f;
		string data((char*)&sT_���ཻ����·��ѹ�����Ĳ���, sizeof(ST_���ཻ����·��ѹ�����Ĳ���));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 17: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_�չ�ƹ������������ sT_�չ�ƹ������������;
		memcpy(&sT_�չ�ƹ������������, s_s.c_str(), sizeof(ST_�չ�ƹ������������));
		string savePath = GenerateFileName(sT_�չ�ƹ������������.ti);
		fileSql f;
		string data((char*)&sT_�չ�ƹ������������, sizeof(ST_�չ�ƹ������������));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 18: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_��ת�� sT_��ת��;
		memcpy(&sT_��ת��, s_s.c_str(), sizeof(ST_��ת��));
		string savePath = GenerateFileName(sT_��ת��.ti);
		fileSql f;
		string data((char*)&sT_��ת��, sizeof(ST_��ת��));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 19: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_�����·���ʵĲ��� sT_�����·���ʵĲ���;
		memcpy(&sT_�����·���ʵĲ���, s_s.c_str(), sizeof(ST_�����·���ʵĲ���));
		string savePath = GenerateFileName(sT_�����·���ʵĲ���.ti);
		fileSql f;
		string data((char*)&sT_�����·���ʵĲ���, sizeof(ST_�����·���ʵĲ���));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}
	case 20: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_���迹�任�� sT_���迹�任��;
		memcpy(&sT_���迹�任��, s_s.c_str(), sizeof(ST_���迹�任��));
		string savePath = GenerateFileName(sT_���迹�任��.ti);
		fileSql f;
		string data((char*)&sT_���迹�任��, sizeof(ST_���迹�任��));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}	
	case 21: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_RC�����Ƶ������ sT_RC�����Ƶ������;
		memcpy(&sT_RC�����Ƶ������, s_s.c_str(), sizeof(ST_RC�����Ƶ������));
		string savePath = GenerateFileName(sT_RC�����Ƶ������.ti);
		fileSql f;
		string data((char*)&sT_RC�����Ƶ������, sizeof(ST_RC�����Ƶ������));

		if (!f.WriteStruct(savePath, data)) {
			string ret = md.GenerateErrRet(f_s, -3);
			md.Send(s, ret);
			break;
		}
		string ret = md.GenerateErrRet(f_s, 1);
		md.Send(s, ret);
		break;
	}	
	case 22: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_�Ǳ����̵���չ sT_�Ǳ����̵���չ;
		memcpy(&sT_�Ǳ����̵���չ, s_s.c_str(), sizeof(ST_�Ǳ����̵���չ));
		string savePath = GenerateFileName(sT_�Ǳ����̵���չ.ti);
		fileSql f;
		string data((char*)&sT_�Ǳ����̵���չ, sizeof(ST_�Ǳ����̵���չ));

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

	string s_s = MsgRet[errorCode];
	string s = GenerateSECONDBYTES(s_s.length());
	string fina = f + s + f_s + s_s;
	return fina;
}