#pragma once

#include "E:/c++/libsocket/libsocket/libsocket.h"
#include "E:/clr����/�繤��·����̨/�繤��·����̨/tool/gradeSubmit.h"
#include "���ʵ�����.h"

using namespace System::Windows::Forms;
using namespace System::Diagnostics;
using namespace System;
using namespace System::Threading;

class monitorTrial {
	CPP_Server cs;
public:
	void Open();
	static void RecvGrade(SOCKET s);
	static Form^ FindFormByTrialCode(int TrialCode);
	void Close();

};

void ShowDialog(Object^f);

extern monitorTrial mt;