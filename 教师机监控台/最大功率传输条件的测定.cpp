#include "最大功率传输条件的测定.h"

using namespace 教师机监控台;

void 最大功率传输条件的测定::SaveCorrectGrades() {
	fileSql f;
	ST_最大功率传输条件的测定 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_最大功率传输条件的测定));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_最大功率传输条件的测定));
	try {
		s.trial1Score = Convert::ToInt32(textBoxScore1->Text);
		s.trial2Score = Convert::ToInt32(textBoxScore2->Text);



		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_最大功率传输条件的测定)))) {

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


void 最大功率传输条件的测定::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxScore1->Text);
		int g2 = Convert::ToInt32(textBoxScore2->Text);

		labelTotalGrade->Text = (g1 + g2).ToString();
	}
	catch (Exception^e) {

	}
}

void 最大功率传输条件的测定::Print() {
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 最大功率传输条件的测定::Priview()
{
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}



void 最大功率传输条件的测定::Load最大功率传输条件的测定Data(string &filename) {

	fileName = &filename;
	fileSql f;
	ST_最大功率传输条件的测定 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_最大功率传输条件的测定));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_最大功率传输条件的测定));

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

	textBoxScore1->Text = d.trial1Score.ToString();
	textBoxScore2->Text = d.trial2Score.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();


	labelTrial1_RL2->Text = gcnew String(d.Trial1_RL2);
	labelTrial1_RL3->Text = gcnew String(d.Trial1_RL3);
	labelTrial1_RL4->Text = gcnew String(d.Trial1_RL4);
	labelTrial1_RL5->Text = gcnew String(d.Trial1_RL5);
	labelTrial1_RL6->Text = gcnew String(d.Trial1_RL6);
	labelTrial1_RL7->Text = gcnew String(d.Trial1_RL7);
	labelTrial1_RL8->Text = gcnew String(d.Trial1_RL8);

	labelTrial1_IUL1->Text = gcnew String(d.Trial1_IUL1);
	labelTrial1_IUL2->Text = gcnew String(d.Trial1_IUL2);
	labelTrial1_IUL3->Text = gcnew String(d.Trial1_IUL3);
	labelTrial1_IUL4->Text = gcnew String(d.Trial1_IUL4);
	labelTrial1_IUL5->Text = gcnew String(d.Trial1_IUL5);
	labelTrial1_IUL6->Text = gcnew String(d.Trial1_IUL6);
	labelTrial1_IUL7->Text = gcnew String(d.Trial1_IUL7);
	labelTrial1_IUL8->Text = gcnew String(d.Trial1_IUL8);
	labelTrial1_IUL9->Text = gcnew String(d.Trial1_IUL9);

	labelTrial1_I1->Text = gcnew String(d.Trial1_I1);
	labelTrial1_I2->Text = gcnew String(d.Trial1_I2);
	labelTrial1_I3->Text = gcnew String(d.Trial1_I3);
	labelTrial1_I4->Text = gcnew String(d.Trial1_I4);
	labelTrial1_I5->Text = gcnew String(d.Trial1_I5);
	labelTrial1_I6->Text = gcnew String(d.Trial1_I6);
	labelTrial1_I7->Text = gcnew String(d.Trial1_I7);
	labelTrial1_I8->Text = gcnew String(d.Trial1_I8);
	labelTrial1_I9->Text = gcnew String(d.Trial1_I9);

	labelTrial1_PL1->Text = gcnew String(d.Trial1_PL1);
	labelTrial1_PL2->Text = gcnew String(d.Trial1_PL2);
	labelTrial1_PL3->Text = gcnew String(d.Trial1_PL3);
	labelTrial1_PL4->Text = gcnew String(d.Trial1_PL4);
	labelTrial1_PL5->Text = gcnew String(d.Trial1_PL5);
	labelTrial1_PL6->Text = gcnew String(d.Trial1_PL6);
	labelTrial1_PL7->Text = gcnew String(d.Trial1_PL7);
	labelTrial1_PL8->Text = gcnew String(d.Trial1_PL8);
	labelTrial1_PL9->Text = gcnew String(d.Trial1_PL9);


	labelTrial1_Uo1->Text = gcnew String(d.Trial1_Uo1);
	labelTrial1_Uo2->Text = gcnew String(d.Trial1_Uo2);
	labelTrial1_Uo3->Text = gcnew String(d.Trial1_Uo3);
	labelTrial1_Uo4->Text = gcnew String(d.Trial1_Uo4);
	labelTrial1_Uo5->Text = gcnew String(d.Trial1_Uo5);
	labelTrial1_Uo6->Text = gcnew String(d.Trial1_Uo6);
	labelTrial1_Uo7->Text = gcnew String(d.Trial1_Uo7);
	labelTrial1_Uo8->Text = gcnew String(d.Trial1_Uo8);
	labelTrial1_Uo9->Text = gcnew String(d.Trial1_Uo9);


	labelTrial1_Po1->Text = gcnew String(d.trial1_Po1);
	labelTrial1_Po2->Text = gcnew String(d.trial1_Po2);
	labelTrial1_Po3->Text = gcnew String(d.trial1_Po3);
	labelTrial1_Po4->Text = gcnew String(d.trial1_Po4);
	labelTrial1_Po5->Text = gcnew String(d.trial1_Po5);
	labelTrial1_Po6->Text = gcnew String(d.trial1_Po6);
	labelTrial1_Po7->Text = gcnew String(d.trial1_Po7);
	labelTrial1_Po8->Text = gcnew String(d.trial1_Po8);
	labelTrial1_Po9->Text = gcnew String(d.trial1_Po9);


	labelTrial2_RL2->Text = gcnew String(d.Trial2_RL2);
	labelTrial2_RL3->Text = gcnew String(d.Trial2_RL3);
	labelTrial2_RL4->Text = gcnew String(d.Trial2_RL4);
	labelTrial2_RL5->Text = gcnew String(d.Trial2_RL5);
	labelTrial2_RL6->Text = gcnew String(d.Trial2_RL6);
	labelTrial2_RL7->Text = gcnew String(d.Trial2_RL7);
	labelTrial2_RL8->Text = gcnew String(d.Trial2_RL8);

	labeltrial2_UL1->Text = gcnew String(d.Trial2_UL1);
	labeltrial2_UL2->Text = gcnew String(d.Trial2_UL2);
	labeltrial2_UL3->Text = gcnew String(d.Trial2_UL3);
	labeltrial2_UL4->Text = gcnew String(d.Trial2_UL4);
	labeltrial2_UL5->Text = gcnew String(d.Trial2_UL5);
	labeltrial2_UL6->Text = gcnew String(d.Trial2_UL6);
	labeltrial2_UL7->Text = gcnew String(d.Trial2_UL7);
	labeltrial2_UL8->Text = gcnew String(d.Trial2_UL8);
	labeltrial2_UL9->Text = gcnew String(d.Trial2_UL9);

	labeltrial2_I1->Text = gcnew String(d.Trial2_I1);
	labeltrial2_I2->Text = gcnew String(d.Trial2_I2);
	labeltrial2_I3->Text = gcnew String(d.Trial2_I3);
	labeltrial2_I4->Text = gcnew String(d.Trial2_I4);
	labeltrial2_I5->Text = gcnew String(d.Trial2_I5);
	labeltrial2_I6->Text = gcnew String(d.Trial2_I6);
	labeltrial2_I7->Text = gcnew String(d.Trial2_I7);
	labeltrial2_I8->Text = gcnew String(d.Trial2_I8);
	labeltrial2_I9->Text = gcnew String(d.Trial2_I9);


	labelTrial2_PL1->Text = gcnew String(d.Trial2_PL1);
	labelTrial2_PL2->Text = gcnew String(d.Trial2_PL2);
	labelTrial2_PL3->Text = gcnew String(d.Trial2_PL3);
	labelTrial2_PL4->Text = gcnew String(d.Trial2_PL4);
	labelTrial2_PL5->Text = gcnew String(d.Trial2_PL5);
	labelTrial2_PL6->Text = gcnew String(d.Trial2_PL6);
	labelTrial2_PL7->Text = gcnew String(d.Trial2_PL7);
	labelTrial2_PL8->Text = gcnew String(d.Trial2_PL8);
	labelTrial2_PL9->Text = gcnew String(d.Trial2_PL9);


	labelTrial2_Uo1->Text = gcnew String(d.Trial2_Uo1);
	labelTrial2_Uo2->Text = gcnew String(d.Trial2_Uo2);
	labelTrial2_Uo3->Text = gcnew String(d.Trial2_Uo3);
	labelTrial2_Uo4->Text = gcnew String(d.Trial2_Uo4);
	labelTrial2_Uo5->Text = gcnew String(d.Trial2_Uo5);
	labelTrial2_Uo6->Text = gcnew String(d.Trial2_Uo6);
	labelTrial2_Uo7->Text = gcnew String(d.Trial2_Uo7);
	labelTrial2_Uo8->Text = gcnew String(d.Trial2_Uo8);
	labelTrial2_Uo9->Text = gcnew String(d.Trial2_Uo9);


	labelTrial2_Po1->Text = gcnew String(d.trial2_Po1);
	labelTrial2_Po2->Text = gcnew String(d.trial2_Po2);
	labelTrial2_Po3->Text = gcnew String(d.trial2_Po3);
	labelTrial2_Po4->Text = gcnew String(d.trial2_Po4);
	labelTrial2_Po5->Text = gcnew String(d.trial2_Po5);
	labelTrial2_Po6->Text = gcnew String(d.trial2_Po6);
	labelTrial2_Po7->Text = gcnew String(d.trial2_Po7);
	labelTrial2_Po8->Text = gcnew String(d.trial2_Po8);
	labelTrial2_Po9->Text = gcnew String(d.trial2_Po9);

	label结论->Text = gcnew String(d.summing_up);

}