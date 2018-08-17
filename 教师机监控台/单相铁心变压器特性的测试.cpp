#include "单相铁心变压器特性的测试.h"

using namespace 教师机监控台;

void 单相铁心变压器特性的测试::SaveCorrectGrades() {
	fileSql f;
	ST_单相铁心变压器特性的测试 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_单相铁心变压器特性的测试));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_单相铁心变压器特性的测试));
	try {
		s.Score2 = Convert::ToInt32(textBoxTrialScore1->Text);
		s.Score3 = Convert::ToInt32(textBoxTrialScore2->Text);


		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_单相铁心变压器特性的测试)))) {

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


void 单相铁心变压器特性的测试::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrialScore1->Text);
		int g2 = Convert::ToInt32(textBoxTrialScore2->Text);

		labelTotalGrade->Text = (g1 + g2 ).ToString();
	}
	catch (Exception^e) {

	}
}

void 单相铁心变压器特性的测试::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 单相铁心变压器特性的测试::Priview()
{
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;
		
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 单相铁心变压器特性的测试::Load单相铁心变压器特性的测试Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_单相铁心变压器特性的测试 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_单相铁心变压器特性的测试));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_单相铁心变压器特性的测试));

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

	 textBoxTrialScore1 ->Text = d.Score2.ToString();
	 textBoxTrialScore2->Text = d.Score3.ToString();
	 labelTotalGrade->Text = ti.totalscore.ToString();


	 labelTrial2_Line1_I1->Text = gcnew String(d.Trial2_Line1_I1);
	 labelTrial2_Line1_U1->Text = gcnew String(d.Trial2_Line1_U1);
	 labelTrial2_Line1_W->Text = gcnew String(d.Trial2_Line1_W);
	 labelTrial2_Line1_I2->Text = gcnew String(d.Trial2_Line1_I2);
	 labelTrial2_Line1_U2->Text = gcnew String(d.Trial2_Line1_U2);

	 labelTrial2_Line2_I1->Text = gcnew String(d.Trial2_Line2_I1);
	 labelTrial2_Line2_U1->Text = gcnew String(d.Trial2_Line2_U1);
	 labelTrial2_Line2_W->Text = gcnew String(d.Trial2_Line2_W);
	 labelTrial2_Line2_I2->Text = gcnew String(d.Trial2_Line2_I2);
	 labelTrial2_Line2_U2->Text = gcnew String(d.Trial2_Line2_U2);

	 labelTrial2_Line3_I1->Text = gcnew String(d.Trial2_Line3_I1);
	 labelTrial2_Line3_U1->Text = gcnew String(d.Trial2_Line3_U1);
	 labelTrial2_Line3_W->Text = gcnew String(d.Trial2_Line3_W);
	 labelTrial2_Line3_I2->Text = gcnew String(d.Trial2_Line3_I2);
	 labelTrial2_Line3_U2->Text = gcnew String(d.Trial2_Line3_U2);

	 labelTrial3_U1_1->Text = gcnew String(d.Trial3_U1_1);
	 labelTrial3_U1_2->Text = gcnew String(d.Trial3_U1_2);
	 labelTrial3_U1_3->Text = gcnew String(d.Trial3_U1_3);
	 labelTrial3_U1_4->Text = gcnew String(d.Trial3_U1_4);
	 labelTrial3_U1_5->Text = gcnew String(d.Trial3_U1_5);
	 labelTrial3_U1_6->Text = gcnew String(d.Trial3_U1_6);
	 labelTrial3_U1_7->Text = gcnew String(d.Trial3_U1_7);
	 labelTrial3_U1_8->Text = gcnew String(d.Trial3_U1_8);
	 labelTrial3_U1_9->Text = gcnew String(d.Trial3_U1_9);
	 labelTrial3_U1_10->Text = gcnew String(d.Trial3_U1_10);

	 labelTrial3_U20_1->Text = gcnew String(d.Trial3_U20_1);
	 labelTrial3_U20_2->Text = gcnew String(d.Trial3_U20_2);
	 labelTrial3_U20_3->Text = gcnew String(d.Trial3_U20_3);
	 labelTrial3_U20_4->Text = gcnew String(d.Trial3_U20_4);
	 labelTrial3_U20_5->Text = gcnew String(d.Trial3_U20_5);
	 labelTrial3_U20_6->Text = gcnew String(d.Trial3_U20_6);
	 labelTrial3_U20_7->Text = gcnew String(d.Trial3_U20_7);
	 labelTrial3_U20_8->Text = gcnew String(d.Trial3_U20_8);
	 labelTrial3_U20_9->Text = gcnew String(d.Trial3_U20_9);
	 labelTrial3_U20_10->Text = gcnew String(d.Trial3_U20_10);

	 labelTrial3_I10_1->Text = gcnew String(d.Trial3_I10_1);
	 labelTrial3_I10_2->Text = gcnew String(d.Trial3_I10_2);
	 labelTrial3_I10_3->Text = gcnew String(d.Trial3_I10_3);
	 labelTrial3_I10_4->Text = gcnew String(d.Trial3_I10_4);
	 labelTrial3_I10_5->Text = gcnew String(d.Trial3_I10_5);
	 labelTrial3_I10_6->Text = gcnew String(d.Trial3_I10_6);
	 labelTrial3_I10_7->Text = gcnew String(d.Trial3_I10_7);
	 labelTrial3_I10_8->Text = gcnew String(d.Trial3_I10_8);
	 labelTrial3_I10_9->Text = gcnew String(d.Trial3_I10_9);
	 labelTrial3_I10_10->Text = gcnew String(d.Trial3_I10_10);


	 textBox结论->Text = gcnew String(d.summing_up);
}