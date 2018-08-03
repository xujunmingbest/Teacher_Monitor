#include "叠加原理.h"

using namespace 教师机监控台;

void 叠加原理::SaveCorrectGrades() {
	fileSql f;
	ST_叠加原理 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_叠加原理));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_叠加原理));
	try {
		s.Score1 = Convert::ToInt32(textBoxscore1->Text);
		s.Score2 = Convert::ToInt32(textBoxscore2->Text);
		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_叠加原理)))) {

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




void 叠加原理::Load叠加原理Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_叠加原理 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_叠加原理));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_叠加原理));

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

	textBoxscore1->Text = d.Score1.ToString();
	textBoxscore2->Text = d.Score2.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();

	labelLine1I1->Text = gcnew String(d.Line1I1);
	labelLine1I2->Text = gcnew String(d.Line1I2);
	labelLine1I3->Text = gcnew String(d.Line1I3);
	labelLine1U11->Text = gcnew String(d.Line1U11);
	labelLine1U12->Text = gcnew String(d.Line1U12);
	labelLine1UDE->Text = gcnew String(d.Line1UDE);
	labelLine1UFA->Text = gcnew String(d.Line1UFA);
	labelLine1UAB->Text = gcnew String(d.Line1UAB);
	labelLine1UBC->Text = gcnew String(d.Line1UBC);
	labelLine1UCD->Text = gcnew String(d.Line1UCD);

	labelLine2I1->Text = gcnew String(d.Line2I1);
	labelLine2I2->Text = gcnew String(d.Line2I2);
	labelLine2I3->Text = gcnew String(d.Line2I3);
	labelLine2U11->Text = gcnew String(d.Line2U11);
	labelLine2U12->Text = gcnew String(d.Line2U12);
	labelLine2UDE->Text = gcnew String(d.Line2UDE);
	labelLine2UFA->Text = gcnew String(d.Line2UFA);
	labelLine2UAB->Text = gcnew String(d.Line2UAB);
	labelLine2UBC->Text = gcnew String(d.Line2UBC);
	labelLine2UCD->Text = gcnew String(d.Line2UCD);

	labelLine3I1->Text = gcnew String(d.Line3I1);
	labelLine3I2->Text = gcnew String(d.Line3I2);
	labelLine3I3->Text = gcnew String(d.Line3I3);
	labelLine3U11->Text = gcnew String(d.Line3U11);
	labelLine3U12->Text = gcnew String(d.Line3U12);
	labelLine3UDE->Text = gcnew String(d.Line3UDE);
	labelLine3UFA->Text = gcnew String(d.Line3UFA);
	labelLine3UAB->Text = gcnew String(d.Line3UAB);
	labelLine3UBC->Text = gcnew String(d.Line3UBC);
	labelLine3UCD->Text = gcnew String(d.Line3UCD);

	labelLine4I1->Text = gcnew String(d.Line4I1);
	labelLine4I2->Text = gcnew String(d.Line4I2);
	labelLine4I3->Text = gcnew String(d.Line4I3);
	labelLine4U11->Text = gcnew String(d.Line4U11);
	labelLine4U12->Text = gcnew String(d.Line4U12);
	labelLine4UDE->Text = gcnew String(d.Line4UDE);
	labelLine4UFA->Text = gcnew String(d.Line4UFA);
	labelLine4UAB->Text = gcnew String(d.Line4UAB);
	labelLine4UBC->Text = gcnew String(d.Line4UBC);
	labelLine4UCD->Text = gcnew String(d.Line4UCD);

	labelLine5I1->Text = gcnew String(d.Line5I1);
	labelLine5I2->Text = gcnew String(d.Line5I2);
	labelLine5I3->Text = gcnew String(d.Line5I3);
	labelLine5U11->Text = gcnew String(d.Line5U11);
	labelLine5U12->Text = gcnew String(d.Line5U12);
	labelLine5UDE->Text = gcnew String(d.Line5UDE);
	labelLine5UFA->Text = gcnew String(d.Line5UFA);
	labelLine5UAB->Text = gcnew String(d.Line5UAB);
	labelLine5UBC->Text = gcnew String(d.Line5UBC);
	labelLine5UCD->Text = gcnew String(d.Line5UCD);


	labelLine6I1->Text = gcnew String(d.Line6I1);
	labelLine6I2->Text = gcnew String(d.Line6I2);
	labelLine6I3->Text = gcnew String(d.Line6I3);
	labelLine6U11->Text = gcnew String(d.Line6U11);
	labelLine6U12->Text = gcnew String(d.Line6U12);
	labelLine6UDE->Text = gcnew String(d.Line6UDE);
	labelLine6UFA->Text = gcnew String(d.Line6UFA);
	labelLine6UAB->Text = gcnew String(d.Line6UAB);
	labelLine6UBC->Text = gcnew String(d.Line6UBC);
	labelLine6UCD->Text = gcnew String(d.Line6UCD);


	labelLine7I1->Text = gcnew String(d.Line7I1);
	labelLine7I2->Text = gcnew String(d.Line7I2);
	labelLine7I3->Text = gcnew String(d.Line7I3);
	labelLine7U11->Text = gcnew String(d.Line7U11);
	labelLine7U12->Text = gcnew String(d.Line7U12);
	labelLine7UDE->Text = gcnew String(d.Line7UDE);
	labelLine7UFA->Text = gcnew String(d.Line7UFA);
	labelLine7UAB->Text = gcnew String(d.Line7UAB);
	labelLine7UBC->Text = gcnew String(d.Line7UBC);
	labelLine7UCD->Text = gcnew String(d.Line7UCD);


	labelLine8I1->Text = gcnew String(d.Line8I1);
	labelLine8I2->Text = gcnew String(d.Line8I2);
	labelLine8I3->Text = gcnew String(d.Line8I3);
	labelLine8U11->Text = gcnew String(d.Line8U11);
	labelLine8U12->Text = gcnew String(d.Line8U12);
	labelLine8UDE->Text = gcnew String(d.Line8UDE);
	labelLine8UFA->Text = gcnew String(d.Line8UFA);
	labelLine8UAB->Text = gcnew String(d.Line8UAB);
	labelLine8UBC->Text = gcnew String(d.Line8UBC);
	labelLine8UCD->Text = gcnew String(d.Line8UCD);
	label结论->Text = gcnew String(d.summing_up);

}


void 叠加原理::Print() {
	try {
		printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 叠加原理::Priview()
{
	try {
		printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}