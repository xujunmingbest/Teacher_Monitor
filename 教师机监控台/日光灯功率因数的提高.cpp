#include "日光灯功率因数的提高.h"


using namespace 教师机监控台;

void 日光灯功率因数的提高::SaveCorrectGrades() {
	fileSql f;
	ST_日光灯功率因数的提高 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_日光灯功率因数的提高));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_日光灯功率因数的提高));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);
		s.score3 = Convert::ToInt32(textBoxTrial3Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_日光灯功率因数的提高)))) {

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


void 日光灯功率因数的提高::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);

		labelTotalGrade->Text = (g1 + g2 + g3).ToString();
	}
	catch (Exception^e) {

	}
}

void 日光灯功率因数的提高::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 日光灯功率因数的提高::Priview()
{
	try {

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 日光灯功率因数的提高::Load日光灯功率因数的提高Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_日光灯功率因数的提高 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_日光灯功率因数的提高));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_日光灯功率因数的提高));

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

	labelTrial1_Mea_U->Text = gcnew String(d.Trial1_Mea_U);
	labelTrial1_Mea_UR->Text = gcnew String(d.Trial1_Mea_UR);
	labelTrial1_Mea_UC->Text = gcnew String(d.Trial1_Mea_UC);
	textBoxTrial1_Cal_U->Text = gcnew String(d.Trial1_Cal_U);
	textBoxTrial1_Mea_DU->Text = gcnew String(d.Trial1_Mea_DU);
	textBoxTrial1_Cal_UU->Text = gcnew String(d.Trial1_Cal_UU);

	labelTrial2_P_line1->Text = gcnew String(d.Trial2_P_line1);


	labelTrial2_P_line2->Text = gcnew String(d.Trial2_P_line2);
	textBoxTrial2_cos_line1->Text = gcnew String(d.Trial2_cos_line1);
	textBoxTrial2_cos_line2->Text = gcnew String(d.Trial2_cos_line2);
	labelTrial2_I_line1->Text = gcnew String(d.Trial2_I_line1);
	labelTrial2_I_line2->Text = gcnew String(d.Trial2_I_line2);
	labelTrial2_U_line1->Text = gcnew String(d.Trial2_U_line1);
	labelTrial2_U_line2->Text = gcnew String(d.Trial2_U_line2);
	labelTrial2_UL_line1->Text = gcnew String(d.Trial2_UL_line1);
	labelTrial2_UL_line2->Text = gcnew String(d.Trial2_UL_line2);
	labelTrial2_UA_line1->Text = gcnew String(d.Trial2_UA_line1);
	labelTrial2_UA_line2->Text = gcnew String(d.Trial2_UA_line2);
	textBoxTrial2_R_line1->Text = gcnew String(d.Trial2_R_line1);
	textBoxTrial2_R_line2->Text = gcnew String(d.Trial2_R_line2);
	textBoxTrial2_cos_cal_line1->Text = gcnew String(d.Trial2_cos_cal_line1);
	textBoxTrial2_cos_cal_line2->Text = gcnew String(d.Trial2_cos_cal_line2);
	labelTrial3_mea_P_line1->Text = gcnew String(d.Trial3_mea_P_line1);
	labelTrial3_mea_P_line2->Text = gcnew String(d.Trial3_mea_P_line2);
	labelTrial3_mea_P_line3->Text = gcnew String(d.Trial3_mea_P_line3);
	labelTrial3_mea_P_line4->Text = gcnew String(d.Trial3_mea_P_line4);
	labelTrial3_mea_U_line1->Text = gcnew String(d.Trial3_mea_U_line1);
	labelTrial3_mea_U_line2->Text = gcnew String(d.Trial3_mea_U_line2);
	labelTrial3_mea_U_line3->Text = gcnew String(d.Trial3_mea_U_line3);
	labelTrial3_mea_U_line4->Text = gcnew String(d.Trial3_mea_U_line4);
	labelTrial3_mea_I_line1->Text = gcnew String(d.Trial3_mea_I_line1);
	labelTrial3_mea_I_line2->Text = gcnew String(d.Trial3_mea_I_line2);
	labelTrial3_mea_I_line3->Text = gcnew String(d.Trial3_mea_I_line3);
	labelTrial3_mea_I_line4->Text = gcnew String(d.Trial3_mea_I_line4);
	labelTrial3_mea_IL_line1->Text = gcnew String(d.Trial3_mea_IL_line1);
	labelTrial3_mea_IL_line2->Text = gcnew String(d.Trial3_mea_IL_line2);
	labelTrial3_mea_IL_line3->Text = gcnew String(d.Trial3_mea_IL_line3);
	labelTrial3_mea_IL_line4->Text = gcnew String(d.Trial3_mea_IL_line4);
	labelTrial3_mea_IC_line1->Text = gcnew String(d.Trial3_mea_IC_line1);
	labelTrial3_mea_IC_line2->Text = gcnew String(d.Trial3_mea_IC_line2);
	labelTrial3_mea_IC_line3->Text = gcnew String(d.Trial3_mea_IC_line3);
	labelTrial3_mea_IC_line4->Text = gcnew String(d.Trial3_mea_IC_line4);
	textBoxTrial3_cal_I_line1->Text = gcnew String(d.Trial3_cal_I_line1);
	textBoxTrial3_cal_I_line2->Text = gcnew String(d.Trial3_cal_I_line2);
	textBoxTrial3_cal_I_line3->Text = gcnew String(d.Trial3_cal_I_line3);
	textBoxTrial3_cal_I_line4->Text = gcnew String(d.Trial3_cal_I_line4);
	textBoxTrial3_cal_cos_line1->Text = gcnew String(d.Trial3_cal_cos_line1);
	textBoxTrial3_cal_cos_line2->Text = gcnew String(d.Trial3_cal_cos_line2);
	textBoxTrial3_cal_cos_line3->Text = gcnew String(d.Trial3_cal_cos_line3);
	textBoxTrial3_cal_cos_line4->Text = gcnew String(d.Trial3_cal_cos_line4);
}