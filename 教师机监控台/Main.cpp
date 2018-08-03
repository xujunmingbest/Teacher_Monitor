
#include <windows.h>
#include "Login.h"
#include "mainWnd.h"
#include <string>
#include "tool.h"
#include "成绩接收.h"
#include "ScreenCapture.h"
using namespace 教师机监控台;





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

