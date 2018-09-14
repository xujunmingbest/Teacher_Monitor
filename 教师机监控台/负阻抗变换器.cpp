#include "负阻抗变换器.h"

using namespace 教师机监控台;

void 负阻抗变换器::SaveCorrectGrades() {
	fileSql f;
	ST_负阻抗变换器 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_负阻抗变换器));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_负阻抗变换器));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_负阻抗变换器)))) {

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


void 负阻抗变换器::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		labelTotalGrade->Text = (g1 + g2 ).ToString();
	}
	catch (Exception^e) {

	}
}

void 负阻抗变换器::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 负阻抗变换器::Priview()
{
	try {

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 负阻抗变换器::Load负阻抗变换器Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_负阻抗变换器 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_负阻抗变换器));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_负阻抗变换器));

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



	labelTrial1_300_U1_1->Text = gcnew String(d.Trial1_300_U1_1);
	labelTrial1_300_U1_2->Text = gcnew String(d.Trial1_300_U1_2);
	labelTrial1_300_U1_3->Text = gcnew String(d.Trial1_300_U1_3);
	labelTrial1_300_U1_4->Text = gcnew String(d.Trial1_300_U1_4);
	labelTrial1_300_U1_5->Text = gcnew String(d.Trial1_300_U1_5);
	labelTrial1_300_U1_6->Text = gcnew String(d.Trial1_300_U1_6);

	labelTrial1_300_I1_1->Text = gcnew String(d.Trial1_300_I1_1);
	labelTrial1_300_I1_2->Text = gcnew String(d.Trial1_300_I1_2);
	labelTrial1_300_I1_3->Text = gcnew String(d.Trial1_300_I1_3);
	labelTrial1_300_I1_4->Text = gcnew String(d.Trial1_300_I1_4);
	labelTrial1_300_I1_5->Text = gcnew String(d.Trial1_300_I1_5);
	labelTrial1_300_I1_6->Text = gcnew String(d.Trial1_300_I1_6);

	textBoxTrial1_300_R_1->Text = gcnew String(d.Trial1_300_R_1);
	textBoxTrial1_300_R_2->Text = gcnew String(d.Trial1_300_R_2);
	textBoxTrial1_300_R_3->Text = gcnew String(d.Trial1_300_R_3);
	textBoxTrial1_300_R_4->Text = gcnew String(d.Trial1_300_R_4);
	textBoxTrial1_300_R_5->Text = gcnew String(d.Trial1_300_R_5);
	textBoxTrial1_300_R_6->Text = gcnew String(d.Trial1_300_R_6);

	labelTrial1_600_U1_1->Text = gcnew String(d.Trial1_600_U1_1);
	labelTrial1_600_U1_2->Text = gcnew String(d.Trial1_600_U1_2);
	labelTrial1_600_U1_3->Text = gcnew String(d.Trial1_600_U1_3);
	labelTrial1_600_U1_4->Text = gcnew String(d.Trial1_600_U1_4);
	labelTrial1_600_U1_5->Text = gcnew String(d.Trial1_600_U1_5);
	labelTrial1_600_U1_6->Text = gcnew String(d.Trial1_600_U1_6);

	labelTrial1_600_I1_1->Text = gcnew String(d.Trial1_600_I1_1);
	labelTrial1_600_I1_2->Text = gcnew String(d.Trial1_600_I1_2);
	labelTrial1_600_I1_3->Text = gcnew String(d.Trial1_600_I1_3);
	labelTrial1_600_I1_4->Text = gcnew String(d.Trial1_600_I1_4);
	labelTrial1_600_I1_5->Text = gcnew String(d.Trial1_600_I1_5);
	labelTrial1_600_I1_6->Text = gcnew String(d.Trial1_600_I1_6);

	textBoxTrial1_600_R_1->Text = gcnew String(d.Trial1_600_R_1);
	textBoxTrial1_600_R_2->Text = gcnew String(d.Trial1_600_R_2);
	textBoxTrial1_600_R_3->Text = gcnew String(d.Trial1_600_R_3);
	textBoxTrial1_600_R_4->Text = gcnew String(d.Trial1_600_R_4);
	textBoxTrial1_600_R_5->Text = gcnew String(d.Trial1_600_R_5);
	textBoxTrial1_600_R_6->Text = gcnew String(d.Trial1_600_R_6);

	string Name = string(MONITORTEMP) + "负阻抗变换器";
	String^ ImageLocation1 = gcnew String(string(Name + "1.bmp").c_str());
	String^ ImageLocation2 = gcnew String(string(Name + "2.bmp").c_str());
	//先删除原来有的文件
	IO::File::Delete(ImageLocation1);
	IO::File::Delete(ImageLocation2);
	f.Writefile(T_to_string(ImageLocation1), string(d.Trial2_Bmp_1, sizeof(d.Trial2_Bmp_1)));
	f.Writefile(T_to_string(ImageLocation2), string(d.Trial2_Bmp_2, sizeof(d.Trial2_Bmp_2)));

	pictureBox_1->ImageLocation = ImageLocation1;
	pictureBox_2->ImageLocation = ImageLocation2;
}

using namespace System::Windows::Forms::DataVisualization::Charting;
void 负阻抗变换器::chart_load() {
	Series ^s1 = chartTrial1->Series[0];
	Series ^s2 = chartTrial1->Series[1];
	ChartArea ^ c = chartTrial1->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "I1(mA)";
	c->AxisY->Title = "U1(V)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s1->ChartType = SeriesChartType::Line;
	//s1->IsVisibleInLegend = false;
	s2->ChartType = SeriesChartType::Line;
	//s2->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s1->Points->Clear();
	s2->Points->Clear();
	try {
		s1->Name = "RL=300Ω";
		s2->Name = "RL=600Ω";
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_1->Text), Convert::ToSingle(labelTrial1_300_U1_1->Text));
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_2->Text), Convert::ToSingle(labelTrial1_300_U1_2->Text));
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_3->Text), Convert::ToSingle(labelTrial1_300_U1_3->Text));
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_4->Text), Convert::ToSingle(labelTrial1_300_U1_4->Text));
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_5->Text), Convert::ToSingle(labelTrial1_300_U1_5->Text));
		s1->Points->AddXY(Convert::ToSingle(labelTrial1_300_I1_6->Text), Convert::ToSingle(labelTrial1_300_U1_6->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_1->Text), Convert::ToSingle(labelTrial1_600_U1_1->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_2->Text), Convert::ToSingle(labelTrial1_600_U1_2->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_3->Text), Convert::ToSingle(labelTrial1_600_U1_3->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_4->Text), Convert::ToSingle(labelTrial1_600_U1_4->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_5->Text), Convert::ToSingle(labelTrial1_600_U1_5->Text));
		s2->Points->AddXY(Convert::ToSingle(labelTrial1_600_I1_6->Text), Convert::ToSingle(labelTrial1_600_U1_6->Text));
	}
	catch (System::Exception^ E) {

	}

}