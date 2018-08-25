#include "基本电工仪表的使用与测量误差的计算.h"


using namespace 教师机监控台;

void 基本电工仪表的使用与测量误差的计算::SaveCorrectGrades() {
	fileSql f;
	ST_基本电工仪表的使用与测量误差的计算 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_基本电工仪表的使用与测量误差的计算));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_基本电工仪表的使用与测量误差的计算));
	try {

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_基本电工仪表的使用与测量误差的计算)))) {

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


void 基本电工仪表的使用与测量误差的计算::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);

		labelTotalGrade->Text = (g1).ToString();
	}
	catch (Exception^e) {

	}
}

void 基本电工仪表的使用与测量误差的计算::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 基本电工仪表的使用与测量误差的计算::Priview()
{
	try {
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 基本电工仪表的使用与测量误差的计算::Load基本电工仪表的使用与测量误差的计算Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_基本电工仪表的使用与测量误差的计算 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_基本电工仪表的使用与测量误差的计算));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_基本电工仪表的使用与测量误差的计算));

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

	textBoxTrial1Score->Text = d.ti.totalscore.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();

	labelTrial1_IA_5mA->Text = gcnew String(d.Trial1_IA_5mA);
	labelTrial1_IA_5V->Text = gcnew String(d.Trial1_IA_5V);
	labelTrial1_IA1_5mA->Text = gcnew String(d.Trial1_IA1_5mA);
	labelTrial1_IA1_5V->Text = gcnew String(d.Trial1_IA1_5V);
	textBoxTrial1_RB_5mA->Text = gcnew String(d.Trial1_RB_5mA);
	textBoxTrial1_RB_5V->Text = gcnew String(d.Trial1_RB_5V);
	textBoxTrial1_R1_5mA->Text = gcnew String(d.Trial1_R1_5mA);
	textBoxTrial1_R1_5V->Text = gcnew String(d.Trial1_R1_5V);
	textBoxTrial1_RA_5mA->Text = gcnew String(d.Trial1_RA_5mA);
	textBoxTrial1_RA_5V->Text = gcnew String(d.Trial1_RA_5V);

}