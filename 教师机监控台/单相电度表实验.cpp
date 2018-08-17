#include "单相电度表实验.h"

using namespace 教师机监控台;

void 单相电度表实验::SaveCorrectGrades() {
	fileSql f;
	ST_单相电度表实验 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_单相电度表实验));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_单相电度表实验));
	try {
		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_单相电度表实验)))) {

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


void 单相电度表实验::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);

		labelTotalGrade->Text = (g1).ToString();
	}
	catch (Exception^e) {

	}
}

void 单相电度表实验::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 单相电度表实验::Priview()
{
	try {
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 单相电度表实验::Load单相电度表实验Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_单相电度表实验 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_单相电度表实验));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_单相电度表实验));

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

	textBoxTrial1Score->Text = ti.totalscore.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();
	textBoxTrial1_IN->Text = gcnew String(d.Trial1_IN);
	textBoxTrial1_N->Text = gcnew String(d.Trial1_N);
	textBoxTrial1_UN->Text = gcnew String(d.Trial1_UN);
	textBoxTrial1_accuracy->Text = gcnew String(d.Trial1_accuracy);
	labelTrial1_mea_V->Text = gcnew String(d.Trial1_mea_V);
	labelTrial1_mea_I->Text = gcnew String(d.Trial1_mea_I);
	labelTrial1_mea_P->Text = gcnew String(d.Trial1_mea_P);
	textBoxTrial1_mea_time->Text = gcnew String(d.Trial1_mea_time);
	textBoxTrial1_mea_n->Text = gcnew String(d.Trial1_mea_n);
	textBoxTrial1_cal_meaW->Text = gcnew String(d.Trial1_cal_meaW);
	textBoxTrial1_cal_calW->Text = gcnew String(d.Trial1_cal_calW);
	textBoxTrial1_cal_WW->Text = gcnew String(d.Trial1_cal_WW);
	textBoxTrial1_cal_N->Text = gcnew String(d.Trial1_cal_N);
}