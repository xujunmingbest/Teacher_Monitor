#include "基尔霍夫定律.h"
using namespace 教师机监控台;

void 基尔霍夫定律::SaveCorrectGrades() {
	fileSql f;
	ST_基尔霍夫定律 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_基尔霍夫定律));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_基尔霍夫定律));
	try {
		s.ti.totalscore = Convert::ToInt32(textBoxscore->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_基尔霍夫定律)))) {

			MessageBox::Show("成绩保存成功");
		}
		else {
			MessageBox::Show("成绩保存失败");
		}
	}
	catch (Exception^e) {
		MessageBox::Show("成绩保存失败,有成绩没有打分");
	}
}



void 基尔霍夫定律::Load基尔霍夫定律Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_基尔霍夫定律 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_基尔霍夫定律));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_基尔霍夫定律));

	TrialInfo ti = d.ti;
	labelTrialName->Text = gcnew String(ti.TrialName);
	labelstuName1->Text = gcnew String(ti.stuName1);
	labelstuName2->Text = gcnew String(ti.stuName2);
	labelxuehao1->Text = gcnew String(ti.XueHao1);
	labelxuehao2->Text = gcnew String(ti.XueHao2);
	labelseriesnum->Text = gcnew String(ti.SeriaNumber);
	labelclass->Text = gcnew String(ti.Class);
	labellab->Text = gcnew String(ti.Lab);
	labelmajor->Text = gcnew String(ti.major);
	labeldate->Text = gcnew String(ti.date);
	textBoxteacher->Text = gcnew String(ti.teacher);

	textBoxscore->Text = ti.totalscore.ToString();
	labelmeaI1->Text   = gcnew String(d.测量I1 );   
	labelmeaI2->Text   = gcnew String(d.测量I2 );   
	labelmeaI3->Text   = gcnew String(d.测量I3 );   
	labelmeaU11->Text  = gcnew String(d.测量U11);   
	labelmeaU12->Text  = gcnew String(d.测量U12);   
	labelmeaUDE->Text  = gcnew String(d.测量UDE);   
	labelmeaUFA->Text  = gcnew String(d.测量UFA);   
	labelmeaUAB->Text  = gcnew String(d.测量UAB);   
	labelmeaUBC->Text  = gcnew String(d.测量UBC);   
	labelmeaUCD->Text  = gcnew String(d.测量UCD);   

	labelrelaI1->Text  = gcnew String(d.误差I1 );   
	labelrelaI2->Text  = gcnew String(d.误差I2 );   
	labelrelaI3->Text  = gcnew String(d.误差I3 );   
	labelrelaU11->Text = gcnew String(d.误差U11);   
	labelrelaU12->Text = gcnew String(d.误差U12);   
	labelrelaUDE->Text = gcnew String(d.误差UDE);   
	labelrelaUFA->Text = gcnew String(d.误差UFA);   
	labelrelaUAB->Text = gcnew String(d.误差UAB);   
	labelrelaUBC->Text = gcnew String(d.误差UBC);   
	labelrelaUCD->Text = gcnew String(d.误差UCD);   

	labelcalI1->Text  = gcnew String(d.计算I1 );   
	labelcalI2->Text  = gcnew String(d.计算I2 );   
	labelcalI3->Text  = gcnew String(d.计算I3 );   
	labelcalU11->Text = gcnew String(d.计算U11);   
	labelcalU12->Text = gcnew String(d.计算U12);   
	labelcalUDE->Text = gcnew String(d.计算UDE);   
	labelcalUFA->Text = gcnew String(d.计算UFA);   
	labelcalUAB->Text = gcnew String(d.计算UAB);   
	labelcalUBC->Text = gcnew String(d.计算UBC);   
	labelcalUCD->Text = gcnew String(d.计算UCD);   

    label结论->Text = gcnew String(d.summing_up);

}


