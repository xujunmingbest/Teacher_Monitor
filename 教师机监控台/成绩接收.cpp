#include "成绩接收.h"


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

	//报文已经全部接受完毕
	GradesHead H;
	memcpy(&H, f_s.c_str(), sizeof(GradesHead));
	//判断是哪个实验 
	switch (H.TrialCode) {
	case 1: //元件伏安特性测试
	{   
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s,-2);
			md.Send(s, ret);
			break;
		}
		ST_元件伏安特性测试 sT_元件伏安特性测试;
		memcpy(&sT_元件伏安特性测试, s_s.c_str(), sizeof(ST_元件伏安特性测试));
		string savePath = GenerateFileName(sT_元件伏安特性测试.ti);
		fileSql f;
		string data((char*)&sT_元件伏安特性测试, sizeof(ST_元件伏安特性测试));
		
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
		ST_基尔霍夫定律 sT_基尔霍夫定律;
		memcpy(&sT_基尔霍夫定律, s_s.c_str(), sizeof(ST_基尔霍夫定律));
		string savePath = GenerateFileName(sT_基尔霍夫定律.ti);
		fileSql f;
		string data((char*)&sT_基尔霍夫定律, sizeof(ST_基尔霍夫定律));


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
		ST_叠加原理 sT_叠加原理;
		memcpy(&sT_叠加原理, s_s.c_str(), sizeof(ST_叠加原理));
		string savePath = GenerateFileName(sT_叠加原理.ti);
		fileSql f;
		string data((char*)&sT_叠加原理, sizeof(ST_叠加原理));

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
		ST_戴维南定理 sT_戴维南定理;
		memcpy(&sT_戴维南定理, s_s.c_str(), sizeof(ST_戴维南定理));
		string savePath = GenerateFileName(sT_戴维南定理.ti);
		fileSql f;
		string data((char*)&sT_戴维南定理, sizeof(ST_戴维南定理));

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
		ST_电压源与电流源的等效变换 sT_电压源与电流源的等效变换;
		memcpy(&sT_电压源与电流源的等效变换, s_s.c_str(), sizeof(ST_电压源与电流源的等效变换));
		string savePath = GenerateFileName(sT_电压源与电流源的等效变换.ti);
		fileSql f;
		string data((char*)&sT_电压源与电流源的等效变换, sizeof(ST_电压源与电流源的等效变换));

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
		ST_一阶电路的响应测试 sT_一阶电路的响应测试;
		memcpy(&sT_一阶电路的响应测试, s_s.c_str(), sizeof(ST_一阶电路的响应测试));
		string savePath = GenerateFileName(sT_一阶电路的响应测试.ti);
		fileSql f;
		string data((char*)&sT_一阶电路的响应测试, sizeof(ST_一阶电路的响应测试));

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
		ST_二阶动态电路响应的研究 sT_二阶动态电路响应的研究;
		memcpy(&sT_二阶动态电路响应的研究, s_s.c_str(), sizeof(ST_二阶动态电路响应的研究));
		string savePath = GenerateFileName(sT_二阶动态电路响应的研究.ti);
		fileSql f;
		string data((char*)&sT_二阶动态电路响应的研究, sizeof(ST_二阶动态电路响应的研究));

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
		ST_VCVS实验 sT_VCVS实验;
		memcpy(&sT_VCVS实验, s_s.c_str(), sizeof(ST_VCVS实验));
		string savePath = GenerateFileName(sT_VCVS实验.ti);
		fileSql f;
		string data((char*)&sT_VCVS实验, sizeof(ST_VCVS实验));

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
		ST_二端口网络的研究 sT_二端口网络的研究;
		memcpy(&sT_二端口网络的研究, s_s.c_str(), sizeof(ST_二端口网络的研究));
		string savePath = GenerateFileName(sT_二端口网络的研究.ti);
		fileSql f;
		string data((char*)&sT_二端口网络的研究, sizeof(ST_二端口网络的研究));

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
		ST_最大功率传输条件的测定 sT_最大功率传输条件的测定;
		memcpy(&sT_最大功率传输条件的测定, s_s.c_str(), sizeof(ST_最大功率传输条件的测定));
		string savePath = GenerateFileName(sT_最大功率传输条件的测定.ti);
		fileSql f;
		string data((char*)&sT_最大功率传输条件的测定, sizeof(ST_最大功率传输条件的测定));

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
	/***\时间\班级\name1-name2-trial.sql***/

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
报文就是无格式的错误信息
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