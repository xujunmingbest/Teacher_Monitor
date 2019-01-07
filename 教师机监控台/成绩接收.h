#pragma once


#include "E:/c++/libsocket/libsocket/libsocket.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
#pragma comment(lib,"E:/c++/libfilesql/Release/libfilesql.lib")


#include "E:/clr中腾/电工电路试验台/电工电路试验台/tool/gradeSubmit.h"


class RecvGradeProtocol :public protocolDemo {
public:
	virtual string GenerateErrRet(string &OriginHead, int errorCode) override;
};

public ref class m {
public: static System::Threading::Mutex ^mutex = gcnew System::Threading::Mutex;
};


class GradeRecvServ {
private:
	CPP_Server cs;
public:
	static string GenerateFileName(TrialInfo &ti);
	bool open();
	static void handle(SOCKET s);
	void close();





};