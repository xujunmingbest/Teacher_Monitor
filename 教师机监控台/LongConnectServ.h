#pragma once
#include "E:/c++/libsocket/libsocket/libsocket.h"
#include "E:/clr中腾/电工电路试验台/电工电路试验台/Long_connection_control.h"
#include  <vector>
#include  "E:/c++/消息队列lib/消息队列lib/MsgQueue.h"
#pragma comment(lib,"E:/c++/消息队列lib/Release/消息队列lib.lib")
using namespace std;

extern MsgQueue<S_CallTeacher> CallTeacherQueue;
struct Students {
	string Class; //班级
	vector<string> fields; //字段
	vector<vector<string>> stus; //姓名
};


extern vector<Students> students;


using namespace System::Threading;
//队列互斥锁
//class QueueMutex {
//private:
//	HANDLE hMutex1;
//public:
//	bool Create(string &QueueName);
//	void Lock();
//	void UnLock();
//	~QueueMutex();
//};
extern QueueMutex cm;

struct TrialStatus_s {
	TrialStatus ts;
	SOCKET s;
};

extern map<string, TrialStatus_s> cominfo;
public ref class Tool {
public: static Mutex ^clrmutex = gcnew Mutex();
		static int openMonitorCount = 0;
public:
};

class LongConnectServ {
	CPP_Server cs;  //机台号码
public:
	//获取学生信息
	void GetStudents(string Path);
	static bool IsLoginLegal(TrialInfo &ti);


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

	static string GenerateReply(string &replyType, string &Reply);

	bool SendCmdCapture(SOCKET c);  //发送命令 获取客户端屏幕截图
	bool SendCmdStopTrial(SOCKET c);  //发送命令 获取客户端屏幕截图
	bool SendCmdRecoverTrial(SOCKET c); //发送命令 恢复实验
	bool SendCmdForceCommitTrial(SOCKET c);//发送命令 强制提交
	bool SendCmdGetNowTrial(SOCKET c);//发送命令  获取学生正在做的实验
};