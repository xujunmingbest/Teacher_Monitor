#include "无线电源控制主界面.h"



namespace 教师机监控台{

	using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//这是保留两位小数的 格式化
String ^FormatTwoDecimal(String^ Num,float min,float max) {
	try {
		float t = Convert::ToSingle(Num);
		if (t < min) return min.ToString("F2");
		else if(t > max) return max.ToString("F2");
		else return t.ToString("F2");
	}
	catch (System::Exception ^ E) {
		return "输入有误";
	}
}

}