#include "二端口网络的研究.h"

using namespace 教师机监控台;

void 二端口网络的研究::SaveCorrectGrades() {
	fileSql f;
	ST_二端口网络的研究 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_二端口网络的研究));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_二端口网络的研究));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_二端口网络的研究)))) {

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


void 二端口网络的研究::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		labelTotalGrade->Text = (g1 + g2).ToString();
	}
	catch (Exception^e) {

	}
}

void 二端口网络的研究::Print() {
	try {
		printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 二端口网络的研究::Priview()
{
	try {
		printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 二端口网络的研究::Load二端口网络的研究Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_二端口网络的研究 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_二端口网络的研究));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_二端口网络的研究));

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

	textBoxTrial1_1_U11->Text = gcnew String(d.Trial1_1_U11);
	textBoxTrial1_1_U21->Text = gcnew String(d.Trial1_1_U21);
	textBoxTrial2_1_U->Text = gcnew String(d.Trial2_1_U);

	labelTrial1_1_A1->Text = gcnew String(d.Trial1_1_A1);
	labelTrial1_1_B1->Text = gcnew String(d.Trial1_1_B1);
	labelTrial1_1_C1->Text = gcnew String(d.Trial1_1_C1);
	labelTrial1_1_D1->Text = gcnew String(d.Trial1_1_D1);
	labelTrial1_1_I110->Text = gcnew String(d.Trial1_1_I110);
	labelTrial1_1_I11S->Text = gcnew String(d.Trial1_1_I11S);
	labelTrial1_1_U110->Text = gcnew String(d.Trial1_1_U110);
	labelTrial1_1_U11S->Text = gcnew String(d.Trial1_1_U11S);
	labelTrial1_1_U120->Text = gcnew String(d.Trial1_1_U120);
	labelTrial1_1_U12S->Text = gcnew String(d.Trial1_1_U12S);

	labelTrial1_2_U210->Text = gcnew String(d.Trial1_2_U210);
	labelTrial1_2_U220->Text = gcnew String(d.Trial1_2_U220);
	labelTrial1_2_I210->Text = gcnew String(d.Trial1_2_I210);
	labelTrial1_2_A2->Text = gcnew String(d.Trial1_2_A2);
	labelTrial1_2_B2->Text = gcnew String(d.Trial1_2_B2);
	labelTrial1_2_U21S->Text = gcnew String(d.Trial1_2_U21S);
	labelTrial1_2_I21S->Text = gcnew String(d.Trial1_2_I21S);
	labelTrial1_2_I22S->Text = gcnew String(d.Trial1_2_I22S);
	labelTrial1_2_C2->Text = gcnew String(d.Trial1_2_C2);
	labelTrial1_2_D2->Text = gcnew String(d.Trial1_2_D2);

	labelTrial2_1_U10->Text = gcnew String(d.Trial2_1_U10);
	labelTrial2_1_I10->Text = gcnew String(d.Trial2_1_I10);
	labelTrial2_1_I110->Text = gcnew String(d.Trial2_1_I110);
	labelTrial2_1_U1S->Text = gcnew String(d.Trial2_1_U1S);
	labelTrial2_1_I1S->Text = gcnew String(d.Trial2_1_I1S);
	labelTrial2_1_R1S->Text = gcnew String(d.Trial2_1_R1S);
	labelTrial2_1_U20->Text = gcnew String(d.Trial2_1_U20);
	labelTrial2_1_I20->Text = gcnew String(d.Trial2_1_I20);
	labelTrial2_1_R20->Text = gcnew String(d.Trial2_1_R20);
	labelTrial2_1_U2S->Text = gcnew String(d.Trial2_1_U2S);
	labelTrial2_1_I2S->Text = gcnew String(d.Trial2_1_I2S);
	labelTrial2_1_R2S->Text = gcnew String(d.Trial2_1_R2S);
	labelTrial2_1_A->Text = gcnew String(d.Trial2_1_A);
	labelTrial2_1_B->Text = gcnew String(d.Trial2_1_B);
	labelTrial2_1_C->Text = gcnew String(d.Trial2_1_C);
	labelTrial2_1_D->Text = gcnew String(d.Trial2_1_D);

}