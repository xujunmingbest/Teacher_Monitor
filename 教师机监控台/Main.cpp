
#include <windows.h>
#include "Login.h"
#include "mainWnd.h"
#include <string>
#include "tool.h"
#include "�ɼ�����.h"
#include "ScreenCapture.h"
using namespace ��ʦ�����̨;
#pragma comment(lib,"E:/c++/libsocket/Release/libsocket.lib")





[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
void main(){
	SystemStart();

	bool l = false;
	Application::Run(gcnew Login(l));
	if (l) {
		Application::Run(gcnew mainWnd());
	}
	exit(-1);
}

