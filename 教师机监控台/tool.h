#pragma once
#include "Login.h"
#include <iostream>
#include <vector>
#include "�ɼ�����.h"
#include "LongConnectServ.h"
#include "monitorTrial.h"
#include <windows.h>

using namespace std;
using namespace ��ʦ�����̨;

string T_to_string(String^in);
void GetLANIps();
extern vector<string> LANIps;

extern LongConnectServ lcs;


void SystemStart();
void SystemShortDown();

using namespace System::Windows::Forms;
using namespace System;
Form ^GetChildByName(String ^Name);

template<class T>
class LocalPointer {
public:
	T*data;
	LocalPointer() {
		data = new T;
	}
    ~LocalPointer() {
		delete data;
	}
};

bool GetOneFolderFiles(string& Path, vector<string> &FData);