#include "戴维南定理.h"

using namespace 教师机监控台; 

void 戴维南定理::SaveCorrectGrades() {
	fileSql f;
	ST_戴维南定理 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_戴维南定理));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_戴维南定理));
	try {
		s.scoreMethod1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.scoreMethod2 = Convert::ToInt32(textBoxTrial2Score->Text);
		s.scoreMethod3 = Convert::ToInt32(textBoxTrial3Score->Text);
		s.scoreMethod4 = Convert::ToInt32(textBoxTrial4Score->Text);
		s.scoreMethod5 = Convert::ToInt32(textBoxTrial5Score->Text);
		s.scoreMethod6 = Convert::ToInt32(textBoxTrial6Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_戴维南定理)))) {

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


void 戴维南定理::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);
		int g4 = Convert::ToInt32(textBoxTrial4Score->Text);
		int g5 = Convert::ToInt32(textBoxTrial5Score->Text);
		int g6 = Convert::ToInt32(textBoxTrial6Score->Text);
		labelTotalGrade->Text = (g1 + g2 + g3 + g4 + g5 + g6).ToString();
	}
	catch (Exception^e) {

	}
}

void 戴维南定理::Print() {
	try {
		printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 戴维南定理::Priview()
{
	try {
		printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 戴维南定理::Load戴维南定理Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_戴维南定理 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_戴维南定理));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_戴维南定理));

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

	textBoxTrial1Score->Text = d.scoreMethod1.ToString();
	textBoxTrial2Score->Text = d.scoreMethod2.ToString();
	textBoxTrial3Score->Text = d.scoreMethod3.ToString();
	textBoxTrial4Score->Text = d.scoreMethod4.ToString();
	textBoxTrial5Score->Text = d.scoreMethod5.ToString();
	textBoxTrial6Score->Text = d.scoreMethod6.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();


	labelMethod1Uoc->Text = gcnew String(d.Method1Us);
	textBoxMethod1I->Text = gcnew String(d.Method1I);
	textBoxMethod2Ro->Text = gcnew String(d.Method2Ro);
	textBoxMethod2Ro->Text = gcnew String(d.Method3Uoc);
	textBoxMethod2Ro->Text = gcnew String(d.Method3Ro);
	textBoxMethod4Uoc->Text = gcnew String(d.Method4Uoc);
	textBoxMethod5R0->Text = gcnew String(d.Method5R0);
	labelMethod1Isc->Text = gcnew String(d.Method1Isc);
	//textBoxMethod1Ro->Text = gcnew String(d.Method1Ro);
	labelMethod1Uoc->Text = gcnew String(d.Method1Uoc);
	labelMethod2I1->Text = gcnew String(d.Method2I1);
	labelMethod2I2->Text = gcnew String(d.Method2I2);
	labelMethod2I3->Text = gcnew String(d.Method2I3);
	labelMethod2I4->Text = gcnew String(d.Method2I4);
	labelMethod2I5->Text = gcnew String(d.Method2I5);
	labelMethod2I6->Text = gcnew String(d.Method2I6);
	labelMethod2I7->Text = gcnew String(d.Method2I7);
	labelMethod2I8->Text = gcnew String(d.Method2I8);
	labelMethod2I9->Text = gcnew String(d.Method2I9);
	labelMethod2I10->Text = gcnew String(d.Method2I10);
	labelMethod2RL1->Text = gcnew String(d.Method2RL1);
	labelMethod2RL2->Text = gcnew String(d.Method2RL2);
	labelMethod2RL3->Text = gcnew String(d.Method2RL3);
	labelMethod2RL4->Text = gcnew String(d.Method2RL4);
	labelMethod2RL5->Text = gcnew String(d.Method2RL5);
	labelMethod2RL6->Text = gcnew String(d.Method2RL6);
	labelMethod2RL7->Text = gcnew String(d.Method2RL7);
	labelMethod2RL8->Text = gcnew String(d.Method2RL8);
	labelMethod2RL9->Text = gcnew String(d.Method2RL9);
	labelMethod2RL10->Text = gcnew String(d.Method2RL10);

	textBoxMethod3Ro->Text = gcnew String(d.Method3Ro);
	textBoxMethod3Uoc->Text = gcnew String(d.Method3Uoc);

	labelMethod6I1->Text = gcnew String(d.Method6I1);
	labelMethod6I2->Text = gcnew String(d.Method6I2);
	labelMethod6I3->Text = gcnew String(d.Method6I3);
	labelMethod6I4->Text = gcnew String(d.Method6I4);
	labelMethod6I5->Text = gcnew String(d.Method6I5);
	labelMethod6I6->Text = gcnew String(d.Method6I6);
	labelMethod6I7->Text = gcnew String(d.Method6I7);
	labelMethod6I8->Text = gcnew String(d.Method6I8);
	labelMethod6I9->Text = gcnew String(d.Method6I9);
	labelMethod6I10->Text = gcnew String(d.Method6I10);
	labelMethod6RL1->Text = gcnew String(d.Method6RL1);
	labelMethod6RL2->Text = gcnew String(d.Method6RL2);
	labelMethod6RL3->Text = gcnew String(d.Method6RL3);
	labelMethod6RL4->Text = gcnew String(d.Method6RL4);
	labelMethod6RL5->Text = gcnew String(d.Method6RL5);
	labelMethod6RL6->Text = gcnew String(d.Method6RL6);
	labelMethod6RL7->Text = gcnew String(d.Method6RL7);
	labelMethod6RL8->Text = gcnew String(d.Method6RL8);
	labelMethod6RL9->Text = gcnew String(d.Method6RL9);
	labelMethod6RL10->Text = gcnew String(d.Method6RL10);

	label结论->Text = gcnew String(d.summing_up);
}

using namespace System::Windows::Forms::DataVisualization::Charting;

void 戴维南定理::chartTrial2_load() {
	Series ^s = chartTrial2->Series[0];
	textBoxMethod2Ro->Text;

	ChartArea ^ c = chartTrial2->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电流mA";
	c->AxisY->Title = "电压V";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labelMethod2I1->Text), Convert::ToSingle(labelMethod2URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I2->Text), Convert::ToSingle(labelMethod2URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I3->Text), Convert::ToSingle(labelMethod2URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I4->Text), Convert::ToSingle(labelMethod2URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I5->Text), Convert::ToSingle(labelMethod2URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I6->Text), Convert::ToSingle(labelMethod2URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I7->Text), Convert::ToSingle(labelMethod2URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I8->Text), Convert::ToSingle(labelMethod2URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I9->Text), Convert::ToSingle(labelMethod2URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod2I10->Text), Convert::ToSingle(labelMethod2URL1->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}


void 戴维南定理::chartTrial6_load() {
	Series ^s = chartTrial6->Series[0];
	ChartArea ^ c = chartTrial6->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电流mA";
	c->AxisY->Title = "电压V";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(labelMethod6I1->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I2->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I3->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I4->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I5->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I6->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I7->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I8->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I9->Text), Convert::ToSingle(labelMethod6URL1->Text));
		s->Points->AddXY(Convert::ToSingle(labelMethod6I10->Text), Convert::ToSingle(labelMethod6URL1->Text));
	}
	catch (System::Exception^ E) {

	}
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}