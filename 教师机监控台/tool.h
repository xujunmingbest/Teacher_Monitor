#pragma once
#include "Login.h"
#include <iostream>
#include <vector>
#include "成绩接收.h"
#include "LongConnectServ.h"
#include "monitorTrial.h"
#include <windows.h>

using namespace std;
using namespace 教师机监控台;

string T_to_string(String^in);
void GetLANIps();
extern vector<string> LANIps;

extern LongConnectServ lcs;


void SystemStart();
void SystemShortDown();

using namespace System::Windows::Forms;
using namespace System;
Form ^GetChildByName(String ^Name);



struct Students {
	string Class; //班级
	vector<string> fields; //字段
	vector<vector<string>> stus; //姓名
};

extern vector<Students> students;
void GetStudents();

bool GetOneFolderFiles(string& Path, vector<string> &FData);