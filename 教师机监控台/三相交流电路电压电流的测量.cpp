#include "三相交流电路电压电流的测量.h"


#include "E:/c++/libfilesql/libfilesql/libfilesql.h"

using namespace 教师机监控台;

void 三相交流电路电压电流的测量::SaveCorrectGrades() {
	fileSql f;
	ST_三相交流电路电压电流的测量 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_三相交流电路电压电流的测量));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_三相交流电路电压电流的测量));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_三相交流电路电压电流的测量)))) {

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


void 三相交流电路电压电流的测量::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);

		labelTotalGrade->Text = (g1 + g2).ToString();
	}
	catch (Exception^e) {

	}
}

void 三相交流电路电压电流的测量::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 三相交流电路电压电流的测量::Priview()
{
	try {
			//printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 三相交流电路电压电流的测量::Load三相交流电路电压电流的测量Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_三相交流电路电压电流的测量 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_三相交流电路电压电流的测量));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_三相交流电路电压电流的测量));

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

	labelTrial1_Line1_IA->Text = gcnew String(d.Trial1_Line1_IA);
	labelTrial1_Line2_IA->Text = gcnew String(d.Trial1_Line2_IA);
	labelTrial1_Line3_IA->Text = gcnew String(d.Trial1_Line3_IA);
	labelTrial1_Line4_IA->Text = gcnew String(d.Trial1_Line4_IA);
	labelTrial1_Line5_IA->Text = gcnew String(d.Trial1_Line5_IA);

	labelTrial1_Line1_IB->Text = gcnew String(d.Trial1_Line1_IB);
	labelTrial1_Line2_IB->Text = gcnew String(d.Trial1_Line2_IB);
	labelTrial1_Line3_IB->Text = gcnew String(d.Trial1_Line3_IB);
	labelTrial1_Line4_IB->Text = gcnew String(d.Trial1_Line4_IB);
	labelTrial1_Line5_IB->Text = gcnew String(d.Trial1_Line5_IB);

	labelTrial1_Line1_IC->Text = gcnew String(d.Trial1_Line1_IC);
	labelTrial1_Line2_IC->Text = gcnew String(d.Trial1_Line2_IC);
	labelTrial1_Line3_IC->Text = gcnew String(d.Trial1_Line3_IC);
	labelTrial1_Line4_IC->Text = gcnew String(d.Trial1_Line4_IC);
	labelTrial1_Line5_IC->Text = gcnew String(d.Trial1_Line5_IC);

	labelTrial1_Line1_UAB->Text = gcnew String(d.Trial1_Line1_UAB);
	labelTrial1_Line2_UAB->Text = gcnew String(d.Trial1_Line2_UAB);
	labelTrial1_Line3_UAB->Text = gcnew String(d.Trial1_Line3_UAB);
	labelTrial1_Line4_UAB->Text = gcnew String(d.Trial1_Line4_UAB);
	labelTrial1_Line5_UAB->Text = gcnew String(d.Trial1_Line5_UAB);

	labelTrial1_Line1_UBC->Text = gcnew String(d.Trial1_Line1_UBC);
	labelTrial1_Line2_UBC->Text = gcnew String(d.Trial1_Line2_UBC);
	labelTrial1_Line3_UBC->Text = gcnew String(d.Trial1_Line3_UBC);
	labelTrial1_Line4_UBC->Text = gcnew String(d.Trial1_Line4_UBC);
	labelTrial1_Line5_UBC->Text = gcnew String(d.Trial1_Line5_UBC);

	labelTrial1_Line1_UCA->Text = gcnew String(d.Trial1_Line1_UCA);
	labelTrial1_Line2_UCA->Text = gcnew String(d.Trial1_Line2_UCA);
	labelTrial1_Line3_UCA->Text = gcnew String(d.Trial1_Line3_UCA);
	labelTrial1_Line4_UCA->Text = gcnew String(d.Trial1_Line4_UCA);
	labelTrial1_Line5_UCA->Text = gcnew String(d.Trial1_Line5_UCA);

	labelTrial1_Line1_UAO->Text = gcnew String(d.Trial1_Line1_UAO);
	labelTrial1_Line2_UAO->Text = gcnew String(d.Trial1_Line2_UAO);
	labelTrial1_Line3_UAO->Text = gcnew String(d.Trial1_Line3_UAO);
	labelTrial1_Line4_UAO->Text = gcnew String(d.Trial1_Line4_UAO);
	labelTrial1_Line5_UAO->Text = gcnew String(d.Trial1_Line5_UAO);

	labelTrial1_Line1_UBO->Text = gcnew String(d.Trial1_Line1_UBO);
	labelTrial1_Line2_UBO->Text = gcnew String(d.Trial1_Line2_UBO);
	labelTrial1_Line3_UBO->Text = gcnew String(d.Trial1_Line3_UBO);
	labelTrial1_Line4_UBO->Text = gcnew String(d.Trial1_Line4_UBO);
	labelTrial1_Line5_UBO->Text = gcnew String(d.Trial1_Line5_UBO);

	labelTrial1_Line1_UCO->Text = gcnew String(d.Trial1_Line1_UCO);
	labelTrial1_Line2_UCO->Text = gcnew String(d.Trial1_Line2_UCO);
	labelTrial1_Line3_UCO->Text = gcnew String(d.Trial1_Line3_UCO);
	labelTrial1_Line4_UCO->Text = gcnew String(d.Trial1_Line4_UCO);
	labelTrial1_Line5_UCO->Text = gcnew String(d.Trial1_Line5_UCO);

	labelTrial1_Line1_IO->Text = gcnew String(d.Trial1_Line1_IO);
	labelTrial1_Line2_IO->Text = gcnew String(d.Trial1_Line2_IO);
	labelTrial1_Line3_IO->Text = gcnew String(d.Trial1_Line3_IO);
	labelTrial1_Line4_IO->Text = gcnew String(d.Trial1_Line4_IO);
	labelTrial1_Line5_IO->Text = gcnew String(d.Trial1_Line5_IO);

	labelTrial1_Line1_UNO->Text = gcnew String(d.lTrial1_Line1_UNO);
	labelTrial1_Line2_UNO->Text = gcnew String(d.lTrial1_Line2_UNO);
	labelTrial1_Line3_UNO->Text = gcnew String(d.lTrial1_Line3_UNO);
	labelTrial1_Line4_UNO->Text = gcnew String(d.lTrial1_Line4_UNO);
	labelTrial1_Line5_UNO->Text = gcnew String(d.lTrial1_Line5_UNO);

	labelTrial2_Line1_UAB->Text = gcnew String(d.Trial2_Line1_UAB);
	labelTrial2_Line2_UAB->Text = gcnew String(d.Trial2_Line2_UAB);

	labelTrial2_Line1_UBC->Text = gcnew String(d.Trial2_Line1_UBC);
	labelTrial2_Line2_UBC->Text = gcnew String(d.Trial2_Line2_UBC);

	labelTrial2_Line1_UCA->Text = gcnew String(d.Trial2_Line1_UCA);
	labelTrial2_Line2_UCA->Text = gcnew String(d.Trial2_Line2_UCA);

	labelTrial2_Line1_IA->Text = gcnew String(d.Trial2_Line1_IA);
	labelTrial2_Line2_IA->Text = gcnew String(d.Trial2_Line2_IA);

	labelTrial2_Line1_IB->Text = gcnew String(d.Trial2_Line1_IB);
	labelTrial2_Line2_IB->Text = gcnew String(d.Trial2_Line2_IB);

	labelTrial2_Line1_IC->Text = gcnew String(d.Trial2_Line1_IC);
	labelTrial2_Line2_IC->Text = gcnew String(d.Trial2_Line2_IC);

	labelTrial2_Line1_IAB->Text = gcnew String(d.Trial2_Line1_IAB);
	labelTrial2_Line2_IAB->Text = gcnew String(d.Trial2_Line2_IAB);

	labelTrial2_Line1_IBC->Text = gcnew String(d.Trial2_Line1_IBC);
	labelTrial2_Line2_IBC->Text = gcnew String(d.Trial2_Line2_IBC);

	labelTrial2_Line1_ICA->Text = gcnew String(d.Trial2_Line1_ICA);
	labelTrial2_Line2_ICA->Text = gcnew String(d.Trial2_Line2_ICA);
}