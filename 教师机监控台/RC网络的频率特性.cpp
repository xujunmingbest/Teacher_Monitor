#include "RC网络的频率特性.h"

using namespace 教师机监控台;

void RC网络的频率特性::SaveCorrectGrades() {
	fileSql f;
	ST_RC网络的频率特性 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_RC网络的频率特性));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_RC网络的频率特性));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_RC网络的频率特性)))) {

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


void RC网络的频率特性::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);

		labelTotalGrade->Text = (g1 + g2).ToString();
	}
	catch (Exception^e) {

	}
}

void RC网络的频率特性::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void RC网络的频率特性::Priview()
{
	try {
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void RC网络的频率特性::LoadRC网络的频率特性Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_RC网络的频率特性 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_RC网络的频率特性));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_RC网络的频率特性));

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

	textBoxTrial1Score->Text = d.score1.ToString();
	textBoxTrial2Score->Text = d.score2.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();

	textBoxTrial1_F1->Text = gcnew String(d.Trial1_F1);
	textBoxTrial1_F2->Text = gcnew String(d.Trial1_F2);
	textBoxTrial1_F3->Text = gcnew String(d.Trial1_F3);
	textBoxTrial1_F4->Text = gcnew String(d.Trial1_F4);
	textBoxTrial1_F5->Text = gcnew String(d.Trial1_F5);
	textBoxTrial1_F6->Text = gcnew String(d.Trial1_F6);
	textBoxTrial1_F7->Text = gcnew String(d.Trial1_F7);
	textBoxTrial1_F8->Text = gcnew String(d.Trial1_F8);

	labelTrial1_Uo1_1->Text = gcnew String(d.Trial1_Uo1_1);
	labelTrial1_Uo1_2->Text = gcnew String(d.Trial1_Uo1_2);
	labelTrial1_Uo1_3->Text = gcnew String(d.Trial1_Uo1_3);
	labelTrial1_Uo1_4->Text = gcnew String(d.Trial1_Uo1_4);
	labelTrial1_Uo1_5->Text = gcnew String(d.Trial1_Uo1_5);
	labelTrial1_Uo1_6->Text = gcnew String(d.Trial1_Uo1_6);
	labelTrial1_Uo1_7->Text = gcnew String(d.Trial1_Uo1_7);
	labelTrial1_Uo1_8->Text = gcnew String(d.Trial1_Uo1_8);

	labelTrial1_Uo2_1->Text = gcnew String(d.Trial1_Uo2_1);
	labelTrial1_Uo2_2->Text = gcnew String(d.Trial1_Uo2_2);
	labelTrial1_Uo2_3->Text = gcnew String(d.Trial1_Uo2_3);
	labelTrial1_Uo2_4->Text = gcnew String(d.Trial1_Uo2_4);
	labelTrial1_Uo2_5->Text = gcnew String(d.Trial1_Uo2_5);
	labelTrial1_Uo2_6->Text = gcnew String(d.Trial1_Uo2_6);
	labelTrial1_Uo2_7->Text = gcnew String(d.Trial1_Uo2_7);
	labelTrial1_Uo2_8->Text = gcnew String(d.Trial1_Uo2_8);

	textBoxTrial2_F1->Text = gcnew String(d.Trial2_F1);
	textBoxTrial2_F2->Text = gcnew String(d.Trial2_F2);
	textBoxTrial2_F3->Text = gcnew String(d.Trial2_F3);
	textBoxTrial2_F4->Text = gcnew String(d.Trial2_F4);
	textBoxTrial2_F5->Text = gcnew String(d.Trial2_F5);
	textBoxTrial2_F6->Text = gcnew String(d.Trial2_F6);
	textBoxTrial2_F7->Text = gcnew String(d.Trial2_F7);
	textBoxTrial2_F8->Text = gcnew String(d.Trial2_F8);

	textBoxTrial2_T1->Text = gcnew String(d.Trial2_T1);
	textBoxTrial2_T2->Text = gcnew String(d.Trial2_T2);
	textBoxTrial2_T3->Text = gcnew String(d.Trial2_T3);
	textBoxTrial2_T4->Text = gcnew String(d.Trial2_T4);
	textBoxTrial2_T5->Text = gcnew String(d.Trial2_T5);
	textBoxTrial2_T6->Text = gcnew String(d.Trial2_T6);
	textBoxTrial2_T7->Text = gcnew String(d.Trial2_T7);
	textBoxTrial2_T8->Text = gcnew String(d.Trial2_T8);

	textBoxTrial2_τ1->Text = gcnew String(d.Trial2_τ1);
	textBoxTrial2_τ2->Text = gcnew String(d.Trial2_τ2);
	textBoxTrial2_τ3->Text = gcnew String(d.Trial2_τ3);
	textBoxTrial2_τ4->Text = gcnew String(d.Trial2_τ4);
	textBoxTrial2_τ5->Text = gcnew String(d.Trial2_τ5);
	textBoxTrial2_τ6->Text = gcnew String(d.Trial2_τ6);
	textBoxTrial2_τ7->Text = gcnew String(d.Trial2_τ7);
	textBoxTrial2_τ8->Text = gcnew String(d.Trial2_τ8);

	textBoxTrial2_φ1->Text = gcnew String(d.Trial2_φ1);
	textBoxTrial2_φ2->Text = gcnew String(d.Trial2_φ2);
	textBoxTrial2_φ3->Text = gcnew String(d.Trial2_φ3);
	textBoxTrial2_φ4->Text = gcnew String(d.Trial2_φ4);
	textBoxTrial2_φ5->Text = gcnew String(d.Trial2_φ5);
	textBoxTrial2_φ6->Text = gcnew String(d.Trial2_φ6);
	textBoxTrial2_φ7->Text = gcnew String(d.Trial2_φ7);
	textBoxTrial2_φ8->Text = gcnew String(d.Trial2_φ8);

	textBoxTrial2_τ2_1->Text = gcnew String(d.Trial2_τ2_1);
	textBoxTrial2_τ2_2->Text = gcnew String(d.Trial2_τ2_2);
	textBoxTrial2_τ2_3->Text = gcnew String(d.Trial2_τ2_3);
	textBoxTrial2_τ2_4->Text = gcnew String(d.Trial2_τ2_4);
	textBoxTrial2_τ2_5->Text = gcnew String(d.Trial2_τ2_5);
	textBoxTrial2_τ2_6->Text = gcnew String(d.Trial2_τ2_6);
	textBoxTrial2_τ2_7->Text = gcnew String(d.Trial2_τ2_7);
	textBoxTrial2_τ2_8->Text = gcnew String(d.Trial2_τ2_8);

	textBoxTrial2_φ2_1->Text = gcnew String(d.Trial2_φ2_1);
	textBoxTrial2_φ2_2->Text = gcnew String(d.Trial2_φ2_2);
	textBoxTrial2_φ2_3->Text = gcnew String(d.Trial2_φ2_3);
	textBoxTrial2_φ2_4->Text = gcnew String(d.Trial2_φ2_4);
	textBoxTrial2_φ2_5->Text = gcnew String(d.Trial2_φ2_5);
	textBoxTrial2_φ2_6->Text = gcnew String(d.Trial2_φ2_6);
	textBoxTrial2_φ2_7->Text = gcnew String(d.Trial2_φ2_7);
	textBoxTrial2_φ2_8->Text = gcnew String(d.Trial2_φ2_8);

	label结论->Text = gcnew String(d.summing_up);


}