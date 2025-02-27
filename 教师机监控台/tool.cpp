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


	using namespace System;
	using namespace System::IO;


	GradeRecvServ grs;
	LongConnectServ lcs;


	void SystemStart() {
		Directory::CreateDirectory(gcnew String(GRADESAVEPATH));
		Directory::CreateDirectory(gcnew String(STUINFOCSV));
		Directory::CreateDirectory(gcnew String(BMPTEMP));
		Directory::CreateDirectory(gcnew String(MONITORTEMP));
		LanMutex.Create(string("Lan"));
		CallTeacherQueue.Create(string("CallTeacherQueue"));
		if (!grs.open()) {
			MessageBox::Show("服务程序启动失败，程序退出");
		}
		if (!lcs.Open()) {
			MessageBox::Show("服务程序启动失败，程序退出");
		}
		cm.Create(string("LongConnectServ"));
		if (!mt.Open()) {
		MessageBox::Show("服务程序启动失败，程序退出");
		}
		lcs.GetStudents(STUINFOCSV);
	}


	void SystemShortDown();



	bool GetOneFolderFiles(string& Path, vector<string> &FData)
	{
		FData.clear();
		WIN32_FIND_DATA FindData;
		HANDLE hError;
		hError = FindFirstFile((Path + "/*.*").c_str(), &FindData);
		if (hError == INVALID_HANDLE_VALUE)
		{
			printf("搜索失败!");
			return false;
		}
		while (::FindNextFile(hError, &FindData))
		{
			// 过虑.和..
			if (memcmp(FindData.cFileName, ".", 1) == 0
				|| memcmp(FindData.cFileName, "..", 2) == 0)
			{  //
				continue;
			}
			// 构造完整路径
			if (FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			{//判断是否文件夹
				continue;
			}
			// 输出本级的文件
			string Char = Path +"\\" +FindData.cFileName;
			FData.push_back(Char);
		}
		return true;
	}
