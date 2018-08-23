#include "仪表量程的扩展.h"


using namespace 教师机监控台;

void 仪表量程的扩展::SaveCorrectGrades() {
	fileSql f;
	ST_仪表量程的扩展 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_仪表量程的扩展));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_仪表量程的扩展));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);
		s.score3 = Convert::ToInt32(textBoxTrial3Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_仪表量程的扩展)))) {

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


void 仪表量程的扩展::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);
		labelTotalGrade->Text = (g1 + g2 + g3).ToString();
	}
	catch (Exception^e) {

	}
}

void 仪表量程的扩展::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 仪表量程的扩展::Priview()
{
	try {
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 仪表量程的扩展::Load仪表量程的扩展Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_仪表量程的扩展 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_仪表量程的扩展));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_仪表量程的扩展));

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
	textBoxTrial3Score->Text = d.score3.ToString();

	labelTotalGrade->Text = ti.totalscore.ToString();

	textBoxTrial1_1->Text = gcnew String(d.Trial1_1);
	textBoxTrial1_2->Text = gcnew String(d.Trial1_2);
	textBoxTrial1_3->Text = gcnew String(d.Trial1_3);
	textBoxTrial1_4->Text = gcnew String(d.Trial1_4);
	textBoxTrial1_5->Text = gcnew String(d.Trial1_5);
	textBoxTrial1_6->Text = gcnew String(d.Trial1_6);

	textBoxTrial2_1->Text = gcnew String(d.Trial2_1);
	textBoxTrial2_2->Text = gcnew String(d.Trial2_2);
	textBoxTrial2_3->Text = gcnew String(d.Trial2_3);
	textBoxTrial2_4->Text = gcnew String(d.Trial2_4);
	textBoxTrial2_5->Text = gcnew String(d.Trial2_5);
	textBoxTrial2_6->Text = gcnew String(d.Trial2_6);

	textBoxTrial3_1->Text = gcnew String(d.Trial3_1);
	textBoxTrial3_2->Text = gcnew String(d.Trial3_2);
	textBoxTrial3_3->Text = gcnew String(d.Trial3_3);
	textBoxTrial3_4->Text = gcnew String(d.Trial3_4);
	textBoxTrial3_5->Text = gcnew String(d.Trial3_5);
	textBoxTrial3_6->Text = gcnew String(d.Trial3_6);
}