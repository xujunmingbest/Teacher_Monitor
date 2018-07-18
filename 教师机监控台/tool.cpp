#include "tool.h"


string T_to_string(String^in)
{
	int len = in->Length * 2;
	char *buff = new char[len + 1];
	memset(buff, 0x00, len + 1);
	snprintf(buff, len + 1, "%s", in);
	string temp = buff;
	delete[] buff;
	return temp;
}


using namespace System::Net;
using namespace System::Net::NetworkInformation;
using namespace System::Threading;


QueueMutex LanMutex;

vector<string> LANIps;
void _myPing_PingCompleted(System::Object^ sender, PingCompletedEventArgs^ e)
{
	if (e->Reply->Status == IPStatus::Success)
	{
		Mutex ^mutex = gcnew Mutex;
		LanMutex.Lock();
		LANIps.push_back(T_to_string(e->Reply->Address->ToString()));
		LanMutex.UnLock();
		static int i = 0;
		Console::Write(i);
	}
}

String^ GetIpAddress()
{
	String^ hostName = Dns::GetHostName();   //获取本机名
	IPHostEntry^ localhost = Dns::GetHostByName(hostName);    //方法已过期，可以获取IPv4的地址
															  //IPHostEntry localhost = Dns.GetHostEntry(hostName);   //获取IPv6地址
	IPAddress ^localaddr = localhost->AddressList[0];
	return localaddr->ToString();
}

void GetLANIps() {
	String ^MyIp = GetIpAddress();
	String ^IpDuan =  MyIp->Remove(MyIp->LastIndexOf('.'));
	LANIps.clear();
	LANIps.push_back("127.0.0.1");
	for (int i = 1; i <= 255; i++)
	{
		Ping^ myPing = gcnew Ping();
		myPing->PingCompleted += gcnew PingCompletedEventHandler(_myPing_PingCompleted);
		String ^ pingIP = IpDuan + "." + i.ToString();
		myPing->SendAsync(pingIP, 1000, nullptr);
	}
}

bool QueueMutex::Create(string &QueueName) {
	hMutex1 = CreateMutex(NULL, FALSE, (QueueName + "MUTEX").c_str());
	if (GetLastError() == ERROR_ALREADY_EXISTS)
	{
		return false;
	}
	return true;
}

	void QueueMutex::Lock() {
		WaitForSingleObject(hMutex1, INFINITE);
	}
	void QueueMutex::UnLock() {
		ReleaseMutex(hMutex1);
	}

	QueueMutex::~QueueMutex() {
		CloseHandle(hMutex1);
		hMutex1 = NULL;
	}


	using namespace System;
	using namespace System::IO;


	GradeRecvServ grs;
	LongConnectServ lcs;

	void SystemStart() {
		Directory::CreateDirectory(gcnew String(GRADESAVEPATH));
		LanMutex.Create(string("Lan"));
		grs.open();
		lcs.Open();
		cm.Create(string("LongConnectServ"));
		mt.Open();
	}
	void SystemShortDown();



