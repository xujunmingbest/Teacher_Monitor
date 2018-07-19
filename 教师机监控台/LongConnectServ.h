#pragma once
#include "E:/c++/libsocket/libsocket/libsocket.h"
#include "E:/clr����/�繤��·����̨/�繤��·����̨/Long_connection_control.h"
#include  <vector>
using namespace std;


//���л�����
class QueueMutex {
private:
	HANDLE hMutex1;
public:
	bool Create(string &QueueName);
	void Lock();
	void UnLock();
	~QueueMutex();
};
extern QueueMutex cm;

struct TrialStatus_s {
	TrialStatus ts;
	SOCKET s;
};

extern map<string, TrialStatus_s> cominfo;


class LongConnectServ {
	CPP_Server cs;  //��̨����
public:
	LongConnectServ();
	~LongConnectServ();
	static void Addcominfo(string &computer, TrialStatus_s &cs);
	static void DeleteCominfo(string &computer);
	static bool FindCominfo(string &computer, TrialStatus_s &cs);
	static void GetCominfos(vector<TrialStatus_s> &Cominfos);
	bool Open();
	static string GenerateCmd(string &cmd);
	void Close();
	static void SocketClose(SOCKET s,string &computerId);
	static void RecvFun(SOCKET s);

	bool SendCmdCapture(SOCKET c);  //�������� ��ȡ�ͻ�����Ļ��ͼ
	bool SendCmdStopTrial(SOCKET c);  //�������� ��ȡ�ͻ�����Ļ��ͼ
	bool SendCmdRecoverTrial(SOCKET c); //�������� �ָ�ʵ��
	bool SendCmdForceCommitTrial(SOCKET c);//�������� ǿ���ύ
	bool SendCmdGetNowTrial(SOCKET c);//��������  ��ȡѧ����������ʵ��
};