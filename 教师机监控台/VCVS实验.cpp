#include "VCVS实验.h"

using namespace 教师机监控台;

void VCVS实验::SaveCorrectGrades() {
	fileSql f;
	ST_VCVS实验 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_VCVS实验));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_VCVS实验));
	try {
		s.scoretrial1_1 = Convert::ToInt32(textBoxTrial1_1Score->Text);
		s.scoretrial1_2 = Convert::ToInt32(textBoxTrial1_2Score->Text);
		s.scoretrial2_1 = Convert::ToInt32(textBoxTrial2_1Score->Text);
		s.scoretrial2_1 = Convert::ToInt32(textBoxTrial2_2Score->Text);
		s.scoretrial3_1 = Convert::ToInt32(textBoxTrial3_1Score->Text);
		s.scoretrial3_2 = Convert::ToInt32(textBoxTrial3_2Score->Text);
		s.scoretrial4_1 = Convert::ToInt32(textBoxTrial4_1Score->Text);
		s.scoretrial4_2 = Convert::ToInt32(textBoxTrial4_2Score->Text);


		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_VCVS实验)))) {

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


void VCVS实验::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1_1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial1_2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial2_1Score->Text);
		int g4 = Convert::ToInt32(textBoxTrial2_2Score->Text);
		int g5 = Convert::ToInt32(textBoxTrial3_1Score->Text);
		int g6 = Convert::ToInt32(textBoxTrial3_2Score->Text);
		int g7 = Convert::ToInt32(textBoxTrial4_1Score->Text);
		int g8 = Convert::ToInt32(textBoxTrial4_2Score->Text);
		labelTotalGrade->Text = ( g1 + g2 + g3 + g4 + g5 + g6 + g7 + g8 ).ToString();
	}
	catch (Exception^e) {

	}
}

void VCVS实验::Print() {
	try {
		printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void VCVS实验::Priview()
{
	try {
		printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void VCVS实验::LoadVCVS实验Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_VCVS实验 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_VCVS实验));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_VCVS实验));

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

	textBoxTrial1_1Score->Text = d.scoretrial1_1.ToString();
	textBoxTrial1_2Score->Text = d.scoretrial1_2.ToString();
	textBoxTrial2_1Score->Text = d.scoretrial2_1.ToString();
	textBoxTrial2_2Score->Text = d.scoretrial2_2.ToString();
	textBoxTrial3_1Score->Text = d.scoretrial3_1.ToString();
	textBoxTrial3_2Score->Text = d.scoretrial3_2.ToString();
	textBoxTrial4_1Score->Text = d.scoretrial4_1.ToString();
	textBoxTrial4_2Score->Text = d.scoretrial4_2.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();

	labeltrial1_1u->Text = gcnew String(d.trial1_1u);
	labeltrial1_1U1_1->Text = gcnew String(d.trial1_1U1_1);
	labeltrial1_1U1_2->Text = gcnew String(d.trial1_1U1_2);
	labeltrial1_1U1_3->Text = gcnew String(d.trial1_1U1_3);
	labeltrial1_1U1_4->Text = gcnew String(d.trial1_1U1_4);
	labeltrial1_1U1_5->Text = gcnew String(d.trial1_1U1_5);
	labeltrial1_1U1_6->Text = gcnew String(d.trial1_1U1_6);
	labeltrial1_1U1_7->Text = gcnew String(d.trial1_1U1_7);
	labeltrial1_1U1_8->Text = gcnew String(d.trial1_1U1_8);
	labeltrial1_1U1_9->Text = gcnew String(d.trial1_1U1_9);

	textBoxtrial3_2RL_1->Text = gcnew String(d.trial3_2RL_1);
	textBoxtrial3_2RL_2->Text = gcnew String(d.trial3_2RL_2);
	textBoxtrial3_2RL_3->Text = gcnew String(d.trial3_2RL_3);
	textBoxtrial3_2RL_4->Text = gcnew String(d.trial3_2RL_4);
	textBoxtrial3_2RL_5->Text = gcnew String(d.trial3_2RL_5);
	textBoxtrial3_2RL_6->Text = gcnew String(d.trial3_2RL_6);
	textBoxtrial3_2RL_7->Text = gcnew String(d.trial3_2RL_7);
	textBoxtrial3_2RL_8->Text = gcnew String(d.trial3_2RL_8);

	labeltrial2_1U1_1->Text = gcnew String(d.trial2_1U1_1);
	labeltrial2_1U1_2->Text = gcnew String(d.trial2_1U1_2);
	labeltrial2_1U1_3->Text = gcnew String(d.trial2_1U1_3);
	labeltrial2_1U1_4->Text = gcnew String(d.trial2_1U1_4);
	labeltrial2_1U1_5->Text = gcnew String(d.trial2_1U1_5);
	labeltrial2_1U1_6->Text = gcnew String(d.trial2_1U1_6);
	labeltrial2_1U1_7->Text = gcnew String(d.trial2_1U1_7);
	labeltrial2_1U1_8->Text = gcnew String(d.trial2_1U1_8);

	textBoxtrial2_2RL_1->Text = gcnew String(d.trial2_2RL_1);
	textBoxtrial2_2RL_2->Text = gcnew String(d.trial2_2RL_2);
	textBoxtrial2_2RL_3->Text = gcnew String(d.trial2_2RL_3);
	textBoxtrial2_2RL_4->Text = gcnew String(d.trial2_2RL_4);
	textBoxtrial2_2RL_5->Text = gcnew String(d.trial2_2RL_5);
	textBoxtrial2_2RL_6->Text = gcnew String(d.trial2_2RL_6);
	textBoxtrial2_2RL_7->Text = gcnew String(d.trial2_2RL_7);


	labeltrial1_1U2_1->Text = gcnew String(d.trial1_1U2_1);
	labeltrial1_1U2_2->Text = gcnew String(d.trial1_1U2_2);
	labeltrial1_1U2_3->Text = gcnew String(d.trial1_1U2_3);
	labeltrial1_1U2_4->Text = gcnew String(d.trial1_1U2_4);
	labeltrial1_1U2_5->Text = gcnew String(d.trial1_1U2_5);
	labeltrial1_1U2_6->Text = gcnew String(d.trial1_1U2_6);
	labeltrial1_1U2_7->Text = gcnew String(d.trial1_1U2_7);
	labeltrial1_1U2_8->Text = gcnew String(d.trial1_1U2_8);
	labeltrial1_1U2_9->Text = gcnew String(d.trial1_1U2_9);

	labeltrial1_2V2_1->Text = gcnew String(d.trial1_2V2_1);
	labeltrial1_2V2_2->Text = gcnew String(d.trial1_2V2_2);
	labeltrial1_2V2_3->Text = gcnew String(d.trial1_2V2_3);
	labeltrial1_2V2_4->Text = gcnew String(d.trial1_2V2_4);
	labeltrial1_2V2_5->Text = gcnew String(d.trial1_2V2_5);
	labeltrial1_2V2_6->Text = gcnew String(d.trial1_2V2_6);
	labeltrial1_2V2_7->Text = gcnew String(d.trial1_2V2_7);
	labeltrial1_2V2_8->Text = gcnew String(d.trial1_2V2_8);

	labeltrial1_2IL_1->Text = gcnew String(d.trial1_2IL_1);
	labeltrial1_2IL_2->Text = gcnew String(d.trial1_2IL_2);
	labeltrial1_2IL_3->Text = gcnew String(d.trial1_2IL_3);
	labeltrial1_2IL_4->Text = gcnew String(d.trial1_2IL_4);
	labeltrial1_2IL_5->Text = gcnew String(d.trial1_2IL_5);
	labeltrial1_2IL_6->Text = gcnew String(d.trial1_2IL_6);
	labeltrial1_2IL_7->Text = gcnew String(d.trial1_2IL_7);
	labeltrial1_2IL_8->Text = gcnew String(d.trial1_2IL_8);

	labeltrial2_1IL_1->Text = gcnew String(d.trial2_1IL_1);
	labeltrial2_1IL_2->Text = gcnew String(d.trial2_1IL_2);
	labeltrial2_1IL_3->Text = gcnew String(d.trial2_1IL_3);
	labeltrial2_1IL_4->Text = gcnew String(d.trial2_1IL_4);
	labeltrial2_1IL_5->Text = gcnew String(d.trial2_1IL_5);
	labeltrial2_1IL_6->Text = gcnew String(d.trial2_1IL_6);
	labeltrial2_1IL_7->Text = gcnew String(d.trial2_1IL_7);
	labeltrial2_1IL_8->Text = gcnew String(d.trial2_1IL_8);
    labeltrial2_1gm->Text = gcnew String(d.trial2_1gm);


	labeltrial2_2V2_1->Text = gcnew String(d.trial2_2V2_1);
	labeltrial2_2V2_2->Text = gcnew String(d.trial2_2V2_2);
	labeltrial2_2V2_3->Text = gcnew String(d.trial2_2V2_3);
	labeltrial2_2V2_4->Text = gcnew String(d.trial2_2V2_4);
	labeltrial2_2V2_5->Text = gcnew String(d.trial2_2V2_5);
	labeltrial2_2V2_6->Text = gcnew String(d.trial2_2V2_6);
	labeltrial2_2V2_7->Text = gcnew String(d.trial2_2V2_7);


	labeltrial3_1I1_1->Text = gcnew String(d.trial3_1I1_1);
	labeltrial3_1I1_2->Text = gcnew String(d.trial3_1I1_2);
	labeltrial3_1I1_3->Text = gcnew String(d.trial3_1I1_3);
	labeltrial3_1I1_4->Text = gcnew String(d.trial3_1I1_4);
	labeltrial3_1I1_5->Text = gcnew String(d.trial3_1I1_5);
	labeltrial3_1I1_6->Text = gcnew String(d.trial3_1I1_6);
	labeltrial3_1I1_7->Text = gcnew String(d.trial3_1I1_7);
	labeltrial3_1I1_8->Text = gcnew String(d.trial3_1I1_8);

	labeltrial3_1V2_1->Text = gcnew String(d.trial3_1V2_1);
	labeltrial3_1V2_2->Text = gcnew String(d.trial3_1V2_2);
	labeltrial3_1V2_3->Text = gcnew String(d.trial3_1V2_3);
	labeltrial3_1V2_4->Text = gcnew String(d.trial3_1V2_4);
	labeltrial3_1V2_5->Text = gcnew String(d.trial3_1V2_5);
	labeltrial3_1V2_6->Text = gcnew String(d.trial3_1V2_6);
	labeltrial3_1V2_7->Text = gcnew String(d.trial3_1V2_7);
	labeltrial3_1V2_8->Text = gcnew String(d.trial3_1V2_8);
	labeltrial3_1rm->Text = gcnew String(d.trial3_1rm);

	labeltrial3_2U2_1->Text = gcnew String(d.trial3_2U2_1);
	labeltrial3_2U2_2->Text = gcnew String(d.trial3_2U2_2);
	labeltrial3_2U2_3->Text = gcnew String(d.trial3_2U2_3);
	labeltrial3_2U2_4->Text = gcnew String(d.trial3_2U2_4);
	labeltrial3_2U2_5->Text = gcnew String(d.trial3_2U2_5);
	labeltrial3_2U2_6->Text = gcnew String(d.trial3_2U2_6);
	labeltrial3_2U2_7->Text = gcnew String(d.trial3_2U2_7);
	labeltrial3_2U2_8->Text = gcnew String(d.trial3_2U2_8);

	labeltrial3_2IL_1->Text = gcnew String(d.trial3_2IL_1);
	labeltrial3_2IL_2->Text = gcnew String(d.trial3_2IL_2);
	labeltrial3_2IL_3->Text = gcnew String(d.trial3_2IL_3);
	labeltrial3_2IL_4->Text = gcnew String(d.trial3_2IL_4);
	labeltrial3_2IL_5->Text = gcnew String(d.trial3_2IL_5);
	labeltrial3_2IL_6->Text = gcnew String(d.trial3_2IL_6);
	labeltrial3_2IL_7->Text = gcnew String(d.trial3_2IL_7);
	labeltrial3_2IL_8->Text = gcnew String(d.trial3_2IL_8);

	labeltrial4_1I1_1->Text = gcnew String(d.trial4_1I1_1);
	labeltrial4_1I1_2->Text = gcnew String(d.trial4_1I1_2);
	labeltrial4_1I1_3->Text = gcnew String(d.trial4_1I1_3);
	labeltrial4_1I1_4->Text = gcnew String(d.trial4_1I1_4);
	labeltrial4_1I1_5->Text = gcnew String(d.trial4_1I1_5);
	labeltrial4_1I1_6->Text = gcnew String(d.trial4_1I1_6);
	labeltrial4_1I1_7->Text = gcnew String(d.trial4_1I1_7);
	labeltrial4_1I1_8->Text = gcnew String(d.trial4_1I1_8);

	labeltrial4_1IL_1->Text = gcnew String(d.trial4_1IL_1);
	labeltrial4_1IL_2->Text = gcnew String(d.trial4_1IL_2);
	labeltrial4_1IL_3->Text = gcnew String(d.trial4_1IL_3);
	labeltrial4_1IL_4->Text = gcnew String(d.trial4_1IL_4);
	labeltrial4_1IL_5->Text = gcnew String(d.trial4_1IL_5);
	labeltrial4_1IL_6->Text = gcnew String(d.trial4_1IL_6);
	labeltrial4_1IL_7->Text = gcnew String(d.trial4_1IL_7);
	labeltrial4_1IL_8->Text = gcnew String(d.trial4_1IL_8);
	

	labeltrial4_2RL_1->Text = gcnew String(d.trial4_2RL_1);
	labeltrial4_2RL_2->Text = gcnew String(d.trial4_2RL_2);
	labeltrial4_2RL_3->Text = gcnew String(d.trial4_2RL_3);
	labeltrial4_2RL_4->Text = gcnew String(d.trial4_2RL_4);
	labeltrial4_2RL_5->Text = gcnew String(d.trial4_2RL_5);
	labeltrial4_2RL_6->Text = gcnew String(d.trial4_2RL_6);
	labeltrial4_2RL_7->Text = gcnew String(d.trial4_2RL_7);
	labeltrial4_2RL_8->Text = gcnew String(d.trial4_2RL_8);

	labeltrial4_2IL_1->Text = gcnew String(d.trial4_2IL_1);
	labeltrial4_2IL_2->Text = gcnew String(d.trial4_2IL_2);
	labeltrial4_2IL_3->Text = gcnew String(d.trial4_2IL_3);
	labeltrial4_2IL_4->Text = gcnew String(d.trial4_2IL_4);
	labeltrial4_2IL_5->Text = gcnew String(d.trial4_2IL_5);
	labeltrial4_2IL_6->Text = gcnew String(d.trial4_2IL_6);
	labeltrial4_2IL_7->Text = gcnew String(d.trial4_2IL_7);
	labeltrial4_2IL_8->Text = gcnew String(d.trial4_2IL_8);

	labeltrial4_2U2_1->Text = gcnew String(d.trial4_2U2_1);
	labeltrial4_2U2_2->Text = gcnew String(d.trial4_2U2_2);
	labeltrial4_2U2_3->Text = gcnew String(d.trial4_2U2_3);
	labeltrial4_2U2_4->Text = gcnew String(d.trial4_2U2_4);
	labeltrial4_2U2_5->Text = gcnew String(d.trial4_2U2_5);
	labeltrial4_2U2_6->Text = gcnew String(d.trial4_2U2_6);
	labeltrial4_2U2_7->Text = gcnew String(d.trial4_2U2_7);
	labeltrial4_2U2_8->Text = gcnew String(d.trial4_2U2_8);

	labeltrial4_1α->Text = gcnew String(d.trial4_1α);


}

