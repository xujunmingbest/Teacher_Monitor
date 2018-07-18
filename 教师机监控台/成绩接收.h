#pragma once


#include "E:/c++/libsocket/libsocket/libsocket.h"
#pragma comment(lib,"E:/c++/libsocket/Release/libsocket.lib")
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"
#pragma comment(lib,"E:/c++/libfilesql/Release/libfilesql.lib")


#include "E:/clr����/�繤��·����̨/�繤��·����̨/tool/gradeSubmit.h"


class RecvGradeProtocol :public protocolDemo {
public:
	virtual string GenerateErrRet(string &OriginHead, int errorCode) override;
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