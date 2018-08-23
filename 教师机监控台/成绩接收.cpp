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
	case 11: {
		string RecvName(H.TrialName);
		if (RecvName != Grades[H.TrialCode]) {
			string ret = md.GenerateErrRet(f_s, -2);
			md.Send(s, ret);
			break;
		}
		ST_电路状态轨迹的观测 sT_电路状态轨迹的观测;
		memcpy(&sT_电路状态轨迹的观测, s_s.c_str(), sizeof(ST_电路状态轨迹的观测));
		string savePath = GenerateFileName(sT_电路状态轨迹的观测.ti);
		fileSql f;
		string data((char*)&sT_电路状态轨迹的观测, sizeof(ST_电路状态轨迹的观测));

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
		ST_RLC元件阻抗特性的测定 sT_RLC元件阻抗特性的测定;
		memcpy(&sT_RLC元件阻抗特性的测定, s_s.c_str(), sizeof(ST_RLC元件阻抗特性的测定));
		string savePath = GenerateFileName(sT_RLC元件阻抗特性的测定.ti);
		fileSql f;
		string data((char*)&sT_RLC元件阻抗特性的测定, sizeof(ST_RLC元件阻抗特性的测定));

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
		ST_RLC串联谐振电路的研究 sT_RLC串联谐振电路的研究;
		memcpy(&sT_RLC串联谐振电路的研究, s_s.c_str(), sizeof(ST_RLC串联谐振电路的研究));
		string savePath = GenerateFileName(sT_RLC串联谐振电路的研究.ti);
		fileSql f;
		string data((char*)&sT_RLC串联谐振电路的研究, sizeof(ST_RLC串联谐振电路的研究));

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
		ST_单相铁心变压器特性的测试 sT_单相铁心变压器特性的测试;
		memcpy(&sT_单相铁心变压器特性的测试, s_s.c_str(), sizeof(ST_单相铁心变压器特性的测试));
		string savePath = GenerateFileName(sT_单相铁心变压器特性的测试.ti);
		fileSql f;
		string data((char*)&sT_单相铁心变压器特性的测试, sizeof(ST_单相铁心变压器特性的测试));

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
		ST_单相电度表实验 sT_单相电度表实验;
		memcpy(&sT_单相电度表实验, s_s.c_str(), sizeof(ST_单相电度表实验));
		string savePath = GenerateFileName(sT_单相电度表实验.ti);
		fileSql f;
		string data((char*)&sT_单相电度表实验, sizeof(ST_单相电度表实验));

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
		ST_三相交流电路电压电流的测量 sT_三相交流电路电压电流的测量;
		memcpy(&sT_三相交流电路电压电流的测量, s_s.c_str(), sizeof(ST_三相交流电路电压电流的测量));
		string savePath = GenerateFileName(sT_三相交流电路电压电流的测量.ti);
		fileSql f;
		string data((char*)&sT_三相交流电路电压电流的测量, sizeof(ST_三相交流电路电压电流的测量));

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
		ST_日光灯功率因数的提高 sT_日光灯功率因数的提高;
		memcpy(&sT_日光灯功率因数的提高, s_s.c_str(), sizeof(ST_日光灯功率因数的提高));
		string savePath = GenerateFileName(sT_日光灯功率因数的提高.ti);
		fileSql f;
		string data((char*)&sT_日光灯功率因数的提高, sizeof(ST_日光灯功率因数的提高));

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
		ST_回转器 sT_回转器;
		memcpy(&sT_回转器, s_s.c_str(), sizeof(ST_回转器));
		string savePath = GenerateFileName(sT_回转器.ti);
		fileSql f;
		string data((char*)&sT_回转器, sizeof(ST_回转器));

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
		ST_三相电路功率的测量 sT_三相电路功率的测量;
		memcpy(&sT_三相电路功率的测量, s_s.c_str(), sizeof(ST_三相电路功率的测量));
		string savePath = GenerateFileName(sT_三相电路功率的测量.ti);
		fileSql f;
		string data((char*)&sT_三相电路功率的测量, sizeof(ST_三相电路功率的测量));

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
		ST_负阻抗变换器 sT_负阻抗变换器;
		memcpy(&sT_负阻抗变换器, s_s.c_str(), sizeof(ST_负阻抗变换器));
		string savePath = GenerateFileName(sT_负阻抗变换器.ti);
		fileSql f;
		string data((char*)&sT_负阻抗变换器, sizeof(ST_负阻抗变换器));

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
		ST_RC网络的频率特性 sT_RC网络的频率特性;
		memcpy(&sT_RC网络的频率特性, s_s.c_str(), sizeof(ST_RC网络的频率特性));
		string savePath = GenerateFileName(sT_RC网络的频率特性.ti);
		fileSql f;
		string data((char*)&sT_RC网络的频率特性, sizeof(ST_RC网络的频率特性));

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
		ST_仪表量程的扩展 sT_仪表量程的扩展;
		memcpy(&sT_仪表量程的扩展, s_s.c_str(), sizeof(ST_仪表量程的扩展));
		string savePath = GenerateFileName(sT_仪表量程的扩展.ti);
		fileSql f;
		string data((char*)&sT_仪表量程的扩展, sizeof(ST_仪表量程的扩展));

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