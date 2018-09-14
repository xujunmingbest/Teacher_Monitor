#include "电压源与电流源的等效变换.h"

using namespace 教师机监控台;

void 电压源与电流源的等效变换::SaveCorrectGrades() {
	fileSql f;
	ST_电压源与电流源的等效变换 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_电压源与电流源的等效变换));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_电压源与电流源的等效变换));
	try {
		s.Trial11Score = Convert::ToInt32(textBoxTrial11Score->Text);
		s.Trial12Score = Convert::ToInt32(textBoxTrial12Score->Text);
		s.Trial2Score = Convert::ToInt32(textBoxTrial2Score->Text);
		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_电压源与电流源的等效变换)))) {

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




void 电压源与电流源的等效变换::Load电压源与电流源的等效变换Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_电压源与电流源的等效变换 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_电压源与电流源的等效变换));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_电压源与电流源的等效变换));

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

	textBoxTrial11Score->Text = d.Trial11Score.ToString();
	textBoxTrial12Score->Text = d.Trial12Score.ToString();
	textBoxTrial2Score->Text = d.Trial2Score.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();

	textBoxTrial11UP1->Text = gcnew String(d.Trial11UP1);
	textBoxTrial11UP2->Text = gcnew String(d.Trial11UP2);
	textBoxTrial2Is->Text = gcnew String(d.Trial2Is);

	labelTrial11Load1->Text = gcnew String(d.Trial11Load1);
	labelTrial11Load2->Text = gcnew String(d.Trial11Load2);
	labelTrial11Load3->Text = gcnew String(d.Trial11Load3);
	labelTrial11Load4->Text = gcnew String(d.Trial11Load4);
	labelTrial11Load5->Text = gcnew String(d.Trial11Load5);
	labelTrial11Load6->Text = gcnew String(d.Trial11Load6);
	labelTrial11Load7->Text = gcnew String(d.Trial11Load7);
	labelTrial11Load8->Text = gcnew String(d.Trial11Load8);
	labelTrial11Load9->Text = gcnew String(d.Trial11Load9);
	labelTrial11Load10->Text = gcnew String(d.Trial11Load10);

	labelTrial11U1->Text = gcnew String(d.Trial11U1);
	labelTrial11U2->Text = gcnew String(d.Trial11U2);
	labelTrial11U3->Text = gcnew String(d.Trial11U3);
	labelTrial11U4->Text = gcnew String(d.Trial11U4);
	labelTrial11U5->Text = gcnew String(d.Trial11U5);
	labelTrial11U6->Text = gcnew String(d.Trial11U6);
	labelTrial11U7->Text = gcnew String(d.Trial11U7);
	labelTrial11U8->Text = gcnew String(d.Trial11U8);
	labelTrial11U9->Text = gcnew String(d.Trial11U9);
	labelTrial11U10->Text = gcnew String(d.Trial11U10);

	labelTrial11I1->Text = gcnew String(d.Trial11I1);
	labelTrial11I2->Text = gcnew String(d.Trial11I2);
	labelTrial11I3->Text = gcnew String(d.Trial11I3);
	labelTrial11I4->Text = gcnew String(d.Trial11I4);
	labelTrial11I5->Text = gcnew String(d.Trial11I5);
	labelTrial11I6->Text = gcnew String(d.Trial11I6);
	labelTrial11I7->Text = gcnew String(d.Trial11I7);
	labelTrial11I8->Text = gcnew String(d.Trial11I8);
	labelTrial11I9->Text = gcnew String(d.Trial11I9);
	labelTrial11I10->Text = gcnew String(d.Trial11I10);

	labelTrial12Load1->Text = gcnew String(d.Trial12Load1);
	labelTrial12Load2->Text = gcnew String(d.Trial12Load2);
	labelTrial12Load3->Text = gcnew String(d.Trial12Load3);
	labelTrial12Load4->Text = gcnew String(d.Trial12Load4);
	labelTrial12Load5->Text = gcnew String(d.Trial12Load5);
	labelTrial12Load6->Text = gcnew String(d.Trial12Load6);
	labelTrial12Load7->Text = gcnew String(d.Trial12Load7);
	labelTrial12Load8->Text = gcnew String(d.Trial12Load8);
	labelTrial12Load9->Text = gcnew String(d.Trial12Load9);
	labelTrial12Load10->Text = gcnew String(d.Trial12Load10);

	labelTrial12U1->Text = gcnew String(d.Trial12U1);
	labelTrial12U2->Text = gcnew String(d.Trial12U2);
	labelTrial12U3->Text = gcnew String(d.Trial12U3);
	labelTrial12U4->Text = gcnew String(d.Trial12U4);
	labelTrial12U5->Text = gcnew String(d.Trial12U5);
	labelTrial12U6->Text = gcnew String(d.Trial12U6);
	labelTrial12U7->Text = gcnew String(d.Trial12U7);
	labelTrial12U8->Text = gcnew String(d.Trial12U8);
	labelTrial12U9->Text = gcnew String(d.Trial12U9);
	labelTrial12U10->Text = gcnew String(d.Trial12U10);

	labelTrial12I1->Text = gcnew String(d.Trial12I1);
	labelTrial12I2->Text = gcnew String(d.Trial12I2);
	labelTrial12I3->Text = gcnew String(d.Trial12I3);
	labelTrial12I4->Text = gcnew String(d.Trial12I4);
	labelTrial12I5->Text = gcnew String(d.Trial12I5);
	labelTrial12I6->Text = gcnew String(d.Trial12I6);
	labelTrial12I7->Text = gcnew String(d.Trial12I7);
	labelTrial12I8->Text = gcnew String(d.Trial12I8);
	labelTrial12I9->Text = gcnew String(d.Trial12I9);
	labelTrial12I10->Text = gcnew String(d.Trial12I10);


	labelTrial2Load1->Text = gcnew String(d.Trial2Load1);
	labelTrial2Load2->Text = gcnew String(d.Trial2Load2);
	labelTrial2Load3->Text = gcnew String(d.Trial2Load3);
	labelTrial2Load4->Text = gcnew String(d.Trial2Load4);
	labelTrial2Load5->Text = gcnew String(d.Trial2Load5);
	labelTrial2Load6->Text = gcnew String(d.Trial2Load6);
	labelTrial2Load7->Text = gcnew String(d.Trial2Load7);
	labelTrial2Load8->Text = gcnew String(d.Trial2Load8);
	labelTrial2Load9->Text = gcnew String(d.Trial2Load9);
	labelTrial2Load10->Text = gcnew String(d.Trial2Load10);


	labelTrial2I1->Text = gcnew String(d.Trial2I1);
	labelTrial2I2->Text = gcnew String(d.Trial2I2);
	labelTrial2I3->Text = gcnew String(d.Trial2I3);
	labelTrial2I4->Text = gcnew String(d.Trial2I4);
	labelTrial2I5->Text = gcnew String(d.Trial2I5);
	labelTrial2I6->Text = gcnew String(d.Trial2I6);
	labelTrial2I7->Text = gcnew String(d.Trial2I7);
	labelTrial2I8->Text = gcnew String(d.Trial2I8);
	labelTrial2I9->Text = gcnew String(d.Trial2I9);
	labelTrial2I10->Text = gcnew String(d.Trial2I10);
	label结论->Text = gcnew String(d.summing_up);

}


void 电压源与电流源的等效变换::Print() {
	try {
		printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 电压源与电流源的等效变换::Priview()
{
	try {
		printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}

void 电压源与电流源的等效变换::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial11Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial12Score->Text);
		labelTotalGrade->Text = (g1 + g2 + g3).ToString();
	}
	catch (Exception^e) {

	}
}