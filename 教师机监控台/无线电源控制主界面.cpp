#include "���ߵ�Դ����������.h"



namespace ��ʦ�����̨{

	using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//���Ǳ�����λС���� ��ʽ��
String ^FormatTwoDecimal(String^ Num,float min,float max) {
	try {
		float t = Convert::ToSingle(Num);
		if (t < min) return min.ToString("F2");
		else if(t > max) return max.ToString("F2");
		else return t.ToString("F2");
	}
	catch (System::Exception ^ E) {
		return "��������";
	}
}

}