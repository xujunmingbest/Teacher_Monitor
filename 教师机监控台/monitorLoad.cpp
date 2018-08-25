#include "监控实验汇总.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"

using namespace 教师机监控台;


using namespace System::Windows::Forms::DataVisualization::Charting;

void 元件伏安特性监控::This_Load(ST_元件伏安特性测试 &data) {
	/********图标初始化*******/

	textBoxSU1->Text = gcnew String(data.线性SU1);
	textBoxSU2->Text = gcnew String(data.线性SU2);
	textBoxSU3->Text = gcnew String(data.线性SU3);
	textBoxSU4->Text = gcnew String(data.线性SU4);
	textBoxSU5->Text = gcnew String(data.线性SU5);
	textBoxSU6->Text = gcnew String(data.线性SU6);
	textBoxSU7->Text = gcnew String(data.线性SU7);
	textBoxSU8->Text = gcnew String(data.线性SU8);
	textBoxSU9->Text = gcnew String(data.线性SU9);
	textBoxSU10->Text = gcnew String(data.线性SU10);

	label线性I1->Text = gcnew String(data.线性I1);
	label线性I2->Text = gcnew String(data.线性I2);
	label线性I3->Text = gcnew String(data.线性I3);
	label线性I4->Text = gcnew String(data.线性I4);
	label线性I5->Text = gcnew String(data.线性I5);
	label线性I6->Text = gcnew String(data.线性I6);
	label线性I7->Text = gcnew String(data.线性I7);
	label线性I8->Text = gcnew String(data.线性I8);
	label线性I9->Text = gcnew String(data.线性I9);
	label线性I10->Text = gcnew String(data.线性I10);


	label线性U1->Text = gcnew String(data.线性U1);
	label线性U2->Text = gcnew String(data.线性U2);
	label线性U3->Text = gcnew String(data.线性U3);
	label线性U4->Text = gcnew String(data.线性U4);
	label线性U5->Text = gcnew String(data.线性U5);
	label线性U6->Text = gcnew String(data.线性U6);
	label线性U7->Text = gcnew String(data.线性U7);
	label线性U8->Text = gcnew String(data.线性U8);
	label线性U9->Text = gcnew String(data.线性U9);
	label线性U10->Text = gcnew String(data.线性U10);
	textBox线性结论->Text = gcnew String(data.线性summing_up);

	/*******白炽灯******/
	textBox白炽SU1->Text = gcnew String(data.白炽SU1);
	textBox白炽SU2->Text = gcnew String(data.白炽SU2);
	textBox白炽SU3->Text = gcnew String(data.白炽SU3);
	textBox白炽SU4->Text = gcnew String(data.白炽SU4);
	textBox白炽SU5->Text = gcnew String(data.白炽SU5);
	textBox白炽SU6->Text = gcnew String(data.白炽SU6);
	textBox白炽SU7->Text = gcnew String(data.白炽SU7);
	textBox白炽SU8->Text = gcnew String(data.白炽SU8);
	textBox白炽SU9->Text = gcnew String(data.白炽SU9);
	textBox白炽SU10->Text = gcnew String(data.白炽SU10);

	label白炽I1->Text = gcnew String(data.白炽I1);
	label白炽I2->Text = gcnew String(data.白炽I2);
	label白炽I3->Text = gcnew String(data.白炽I3);
	label白炽I4->Text = gcnew String(data.白炽I4);
	label白炽I5->Text = gcnew String(data.白炽I5);
	label白炽I6->Text = gcnew String(data.白炽I6);
	label白炽I7->Text = gcnew String(data.白炽I7);
	label白炽I8->Text = gcnew String(data.白炽I8);
	label白炽I9->Text = gcnew String(data.白炽I9);
	label白炽I10->Text = gcnew String(data.白炽I10);


	label白炽U1->Text = gcnew String(data.白炽U1);
	label白炽U2->Text = gcnew String(data.白炽U2);
	label白炽U3->Text = gcnew String(data.白炽U3);
	label白炽U4->Text = gcnew String(data.白炽U4);
	label白炽U5->Text = gcnew String(data.白炽U5);
	label白炽U6->Text = gcnew String(data.白炽U6);
	label白炽U7->Text = gcnew String(data.白炽U7);
	label白炽U8->Text = gcnew String(data.白炽U8);
	label白炽U9->Text = gcnew String(data.白炽U9);
	label白炽U10->Text = gcnew String(data.白炽U10);
	textBox白炽结论->Text = gcnew String(data.线性summing_up);

	/**************s_锗管*****************/

	textBox锗管ZSU1->Text = gcnew String(data.锗管ZSU1);
	textBox锗管ZSU2->Text = gcnew String(data.锗管ZSU2);
	textBox锗管ZSU3->Text = gcnew String(data.锗管ZSU3);
	textBox锗管ZSU4->Text = gcnew String(data.锗管ZSU4);
	textBox锗管ZSU5->Text = gcnew String(data.锗管ZSU5);
	textBox锗管ZSU6->Text = gcnew String(data.锗管ZSU6);
	textBox锗管ZSU7->Text = gcnew String(data.锗管ZSU7);
	textBox锗管ZSU8->Text = gcnew String(data.锗管ZSU8);
	textBox锗管ZSU9->Text = gcnew String(data.锗管ZSU9);
	textBox锗管ZSU10->Text = gcnew String(data.锗管ZSU10);

	label锗管ZI1->Text = gcnew String(data.锗管ZI1);
	label锗管ZI2->Text = gcnew String(data.锗管ZI2);
	label锗管ZI3->Text = gcnew String(data.锗管ZI3);
	label锗管ZI4->Text = gcnew String(data.锗管ZI4);
	label锗管ZI5->Text = gcnew String(data.锗管ZI5);
	label锗管ZI6->Text = gcnew String(data.锗管ZI6);
	label锗管ZI7->Text = gcnew String(data.锗管ZI7);
	label锗管ZI8->Text = gcnew String(data.锗管ZI8);
	label锗管ZI9->Text = gcnew String(data.锗管ZI9);
	label锗管ZI10->Text = gcnew String(data.锗管ZI10);


	label锗管ZU1->Text = gcnew String(data.锗管ZU1);
	label锗管ZU2->Text = gcnew String(data.锗管ZU2);
	label锗管ZU3->Text = gcnew String(data.锗管ZU3);
	label锗管ZU4->Text = gcnew String(data.锗管ZU4);
	label锗管ZU5->Text = gcnew String(data.锗管ZU5);
	label锗管ZU6->Text = gcnew String(data.锗管ZU6);
	label锗管ZU7->Text = gcnew String(data.锗管ZU7);
	label锗管ZU8->Text = gcnew String(data.锗管ZU8);
	label锗管ZU9->Text = gcnew String(data.锗管ZU9);
	label锗管ZU10->Text = gcnew String(data.锗管ZU10);

	textBox锗管FSU1->Text = gcnew String(data.锗管FSU1);
	textBox锗管FSU2->Text = gcnew String(data.锗管FSU2);
	textBox锗管FSU3->Text = gcnew String(data.锗管FSU3);
	textBox锗管FSU4->Text = gcnew String(data.锗管FSU4);
	textBox锗管FSU5->Text = gcnew String(data.锗管FSU5);
	textBox锗管FSU6->Text = gcnew String(data.锗管FSU6);
	textBox锗管FSU7->Text = gcnew String(data.锗管FSU7);
	textBox锗管FSU8->Text = gcnew String(data.锗管FSU8);
	textBox锗管FSU9->Text = gcnew String(data.锗管FSU9);
	textBox锗管FSU10->Text = gcnew String(data.锗管FSU10);


	label锗管FI1->Text = gcnew String(data.锗管FI1);
	label锗管FI2->Text = gcnew String(data.锗管FI2);
	label锗管FI3->Text = gcnew String(data.锗管FI3);
	label锗管FI4->Text = gcnew String(data.锗管FI4);
	label锗管FI5->Text = gcnew String(data.锗管FI5);
	label锗管FI6->Text = gcnew String(data.锗管FI6);
	label锗管FI7->Text = gcnew String(data.锗管FI7);
	label锗管FI8->Text = gcnew String(data.锗管FI8);
	label锗管FI9->Text = gcnew String(data.锗管FI9);
	label锗管FI10->Text = gcnew String(data.锗管FI10);


	label锗管FU1->Text = gcnew String(data.锗管FU1);
	label锗管FU2->Text = gcnew String(data.锗管FU2);
	label锗管FU3->Text = gcnew String(data.锗管FU3);
	label锗管FU4->Text = gcnew String(data.锗管FU4);
	label锗管FU5->Text = gcnew String(data.锗管FU5);
	label锗管FU6->Text = gcnew String(data.锗管FU6);
	label锗管FU7->Text = gcnew String(data.锗管FU7);
	label锗管FU8->Text = gcnew String(data.锗管FU8);
	label锗管FU9->Text = gcnew String(data.锗管FU9);
	label锗管FU10->Text = gcnew String(data.锗管FU10);

	textBox锗管结论->Text = gcnew String(data.锗管summing_up);

	/**************s_硅管*****************/

	textBox硅管ZSU1->Text = gcnew String(data.硅管ZSU1);
	textBox硅管ZSU2->Text = gcnew String(data.硅管ZSU2);
	textBox硅管ZSU3->Text = gcnew String(data.硅管ZSU3);
	textBox硅管ZSU4->Text = gcnew String(data.硅管ZSU4);
	textBox硅管ZSU5->Text = gcnew String(data.硅管ZSU5);
	textBox硅管ZSU6->Text = gcnew String(data.硅管ZSU6);
	textBox硅管ZSU7->Text = gcnew String(data.硅管ZSU7);
	textBox硅管ZSU8->Text = gcnew String(data.硅管ZSU8);
	textBox硅管ZSU9->Text = gcnew String(data.硅管ZSU9);
	textBox硅管ZSU10->Text = gcnew String(data.硅管ZSU10);

	label硅管ZI1->Text = gcnew String(data.硅管ZI1);
	label硅管ZI2->Text = gcnew String(data.硅管ZI2);
	label硅管ZI3->Text = gcnew String(data.硅管ZI3);
	label硅管ZI4->Text = gcnew String(data.硅管ZI4);
	label硅管ZI5->Text = gcnew String(data.硅管ZI5);
	label硅管ZI6->Text = gcnew String(data.硅管ZI6);
	label硅管ZI7->Text = gcnew String(data.硅管ZI7);
	label硅管ZI8->Text = gcnew String(data.硅管ZI8);
	label硅管ZI9->Text = gcnew String(data.硅管ZI9);
	label硅管ZI10->Text = gcnew String(data.硅管ZI10);


	label硅管ZU1->Text = gcnew String(data.硅管ZU1);
	label硅管ZU2->Text = gcnew String(data.硅管ZU2);
	label硅管ZU3->Text = gcnew String(data.硅管ZU3);
	label硅管ZU4->Text = gcnew String(data.硅管ZU4);
	label硅管ZU5->Text = gcnew String(data.硅管ZU5);
	label硅管ZU6->Text = gcnew String(data.硅管ZU6);
	label硅管ZU7->Text = gcnew String(data.硅管ZU7);
	label硅管ZU8->Text = gcnew String(data.硅管ZU8);
	label硅管ZU9->Text = gcnew String(data.硅管ZU9);
	label硅管ZU10->Text = gcnew String(data.硅管ZU10);

	textBox硅管FSU1->Text = gcnew String(data.硅管FSU1);
	textBox硅管FSU2->Text = gcnew String(data.硅管FSU2);
	textBox硅管FSU3->Text = gcnew String(data.硅管FSU3);
	textBox硅管FSU4->Text = gcnew String(data.硅管FSU4);
	textBox硅管FSU5->Text = gcnew String(data.硅管FSU5);
	textBox硅管FSU6->Text = gcnew String(data.硅管FSU6);
	textBox硅管FSU7->Text = gcnew String(data.硅管FSU7);
	textBox硅管FSU8->Text = gcnew String(data.硅管FSU8);
	textBox硅管FSU9->Text = gcnew String(data.硅管FSU9);
	textBox硅管FSU10->Text = gcnew String(data.硅管FSU10);

	label1硅管FI1->Text = gcnew String(data.硅管FI1);
	label1硅管FI2->Text = gcnew String(data.硅管FI2);
	label1硅管FI3->Text = gcnew String(data.硅管FI3);
	label1硅管FI4->Text = gcnew String(data.硅管FI4);
	label1硅管FI5->Text = gcnew String(data.硅管FI5);
	label1硅管FI6->Text = gcnew String(data.硅管FI6);
	label1硅管FI7->Text = gcnew String(data.硅管FI7);
	label1硅管FI8->Text = gcnew String(data.硅管FI8);
	label1硅管FI9->Text = gcnew String(data.硅管FI9);
	label1硅管FI10->Text = gcnew String(data.硅管FI10);


	label1硅管FU1->Text = gcnew String(data.硅管FU1);
	label1硅管FU2->Text = gcnew String(data.硅管FU2);
	label1硅管FU3->Text = gcnew String(data.硅管FU3);
	label1硅管FU4->Text = gcnew String(data.硅管FU4);
	label1硅管FU5->Text = gcnew String(data.硅管FU5);
	label1硅管FU6->Text = gcnew String(data.硅管FU6);
	label1硅管FU7->Text = gcnew String(data.硅管FU7);
	label1硅管FU8->Text = gcnew String(data.硅管FU8);
	label1硅管FU9->Text = gcnew String(data.硅管FU9);
	label1硅管FU10->Text = gcnew String(data.硅管FU10);

	textBox硅管结论->Text = gcnew String(data.硅管summing_up);



	/**************s_稳压*****************/

	textBox稳压ZSU1->Text = gcnew String(data.稳压ZSU1);
	textBox稳压ZSU2->Text = gcnew String(data.稳压ZSU2);
	textBox稳压ZSU3->Text = gcnew String(data.稳压ZSU3);
	textBox稳压ZSU4->Text = gcnew String(data.稳压ZSU4);
	textBox稳压ZSU5->Text = gcnew String(data.稳压ZSU5);
	textBox稳压ZSU6->Text = gcnew String(data.稳压ZSU6);
	textBox稳压ZSU7->Text = gcnew String(data.稳压ZSU7);
	textBox稳压ZSU8->Text = gcnew String(data.稳压ZSU8);
	textBox稳压ZSU9->Text = gcnew String(data.稳压ZSU9);
	textBox稳压ZSU10->Text = gcnew String(data.稳压ZSU10);

	label稳压ZI1->Text = gcnew String(data.稳压ZI1);
	label稳压ZI2->Text = gcnew String(data.稳压ZI2);
	label稳压ZI3->Text = gcnew String(data.稳压ZI3);
	label稳压ZI4->Text = gcnew String(data.稳压ZI4);
	label稳压ZI5->Text = gcnew String(data.稳压ZI5);
	label稳压ZI6->Text = gcnew String(data.稳压ZI6);
	label稳压ZI7->Text = gcnew String(data.稳压ZI7);
	label稳压ZI8->Text = gcnew String(data.稳压ZI8);
	label稳压ZI9->Text = gcnew String(data.稳压ZI9);
	label稳压ZI10->Text = gcnew String(data.稳压ZI10);


	label稳压ZU1->Text = gcnew String(data.稳压ZU1);
	label稳压ZU2->Text = gcnew String(data.稳压ZU2);
	label稳压ZU3->Text = gcnew String(data.稳压ZU3);
	label稳压ZU4->Text = gcnew String(data.稳压ZU4);
	label稳压ZU5->Text = gcnew String(data.稳压ZU5);
	label稳压ZU6->Text = gcnew String(data.稳压ZU6);
	label稳压ZU7->Text = gcnew String(data.稳压ZU7);
	label稳压ZU8->Text = gcnew String(data.稳压ZU8);
	label稳压ZU9->Text = gcnew String(data.稳压ZU9);
	label稳压ZU10->Text = gcnew String(data.稳压ZU10);

	textBox稳压FSU1->Text = gcnew String(data.稳压FSU1);
	textBox稳压FSU2->Text = gcnew String(data.稳压FSU2);
	textBox稳压FSU3->Text = gcnew String(data.稳压FSU3);
	textBox稳压FSU4->Text = gcnew String(data.稳压FSU4);
	textBox稳压FSU5->Text = gcnew String(data.稳压FSU5);
	textBox稳压FSU6->Text = gcnew String(data.稳压FSU6);
	textBox稳压FSU7->Text = gcnew String(data.稳压FSU7);
	textBox稳压FSU8->Text = gcnew String(data.稳压FSU8);
	textBox稳压FSU9->Text = gcnew String(data.稳压FSU9);
	textBox稳压FSU10->Text = gcnew String(data.稳压FSU10);

	label稳压FI1->Text = gcnew String(data.稳压FI1);
	label稳压FI2->Text = gcnew String(data.稳压FI2);
	label稳压FI3->Text = gcnew String(data.稳压FI3);
	label稳压FI4->Text = gcnew String(data.稳压FI4);
	label稳压FI5->Text = gcnew String(data.稳压FI5);
	label稳压FI6->Text = gcnew String(data.稳压FI6);
	label稳压FI7->Text = gcnew String(data.稳压FI7);
	label稳压FI8->Text = gcnew String(data.稳压FI8);
	label稳压FI9->Text = gcnew String(data.稳压FI9);
	label稳压FI10->Text = gcnew String(data.稳压FI10);


	label稳压FU1->Text = gcnew String(data.稳压ZU1);
	label稳压FU2->Text = gcnew String(data.稳压ZU2);
	label稳压FU3->Text = gcnew String(data.稳压ZU3);
	label稳压FU4->Text = gcnew String(data.稳压ZU4);
	label稳压FU5->Text = gcnew String(data.稳压ZU5);
	label稳压FU6->Text = gcnew String(data.稳压ZU6);
	label稳压FU7->Text = gcnew String(data.稳压ZU7);
	label稳压FU8->Text = gcnew String(data.稳压ZU8);
	label稳压FU9->Text = gcnew String(data.稳压ZU9);
	label稳压FU10->Text = gcnew String(data.稳压ZU10);

	textBox稳压结论->Text = gcnew String(data.稳压summing_up);

	/*******图表生成******/
	Loadchart线性();
	Loadchart白炽();
	Loadchart锗管();
	Loadchart硅管();
	Loadchart稳压();
}



void 元件伏安特性监控::chart线性Init() {
	Series ^s = chart线性->Series[0];
	chart线性->Titles->Add("  线性电阻器伏安特性");
	ChartArea ^ c = chart线性->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压";
	c->AxisY->Title = "电流";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void 元件伏安特性监控::Loadchart线性() {
	Series ^s = chart线性->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label线性U1->Text), Convert::ToSingle(label线性I1->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U2->Text), Convert::ToSingle(label线性I2->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U3->Text), Convert::ToSingle(label线性I3->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U4->Text), Convert::ToSingle(label线性I4->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U5->Text), Convert::ToSingle(label线性I5->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U6->Text), Convert::ToSingle(label线性I6->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U7->Text), Convert::ToSingle(label线性I7->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U8->Text), Convert::ToSingle(label线性I8->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U9->Text), Convert::ToSingle(label线性I9->Text));
		s->Points->AddXY(Convert::ToSingle(label线性U10->Text), Convert::ToSingle(label线性I10->Text));
	}
	catch (System::Exception^ E) {

	}

}

void 元件伏安特性监控::chart白炽Init() {
	Series ^s = chart白炽->Series[0];
	chart白炽->Titles->Add("  白炽灯伏安特性");
	ChartArea ^ c = chart白炽->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压(V)";
	c->AxisY->Title = "电流(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void 元件伏安特性监控::Loadchart白炽() {
	Series ^s = chart白炽->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label白炽U1->Text), Convert::ToSingle(label白炽I1->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U2->Text), Convert::ToSingle(label白炽I2->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U3->Text), Convert::ToSingle(label白炽I3->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U4->Text), Convert::ToSingle(label白炽I4->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U5->Text), Convert::ToSingle(label白炽I5->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U6->Text), Convert::ToSingle(label白炽I6->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U7->Text), Convert::ToSingle(label白炽I7->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U8->Text), Convert::ToSingle(label白炽I8->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U9->Text), Convert::ToSingle(label白炽I9->Text));
		s->Points->AddXY(Convert::ToSingle(label白炽U10->Text), Convert::ToSingle(label白炽I10->Text));
	}
	catch (System::Exception^ E) {

	}


}
void 元件伏安特性监控::chart锗管Init() {
	Series ^s = chart锗管->Series[0];
	chart锗管->Titles->Add("  锗管2AP9伏安特性");
	ChartArea ^ c = chart锗管->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压(V)";
	c->AxisY->Title = "电流(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}
void 元件伏安特性监控::Loadchart锗管() {
	Series ^s = chart锗管->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label锗管ZU1->Text), Convert::ToSingle(label锗管ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU2->Text), Convert::ToSingle(label锗管ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU3->Text), Convert::ToSingle(label锗管ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU4->Text), Convert::ToSingle(label锗管ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU5->Text), Convert::ToSingle(label锗管ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU6->Text), Convert::ToSingle(label锗管ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU7->Text), Convert::ToSingle(label锗管ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU8->Text), Convert::ToSingle(label锗管ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU9->Text), Convert::ToSingle(label锗管ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管ZU10->Text), Convert::ToSingle(label锗管ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU1->Text), Convert::ToSingle(label锗管FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU2->Text), Convert::ToSingle(label锗管FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU3->Text), Convert::ToSingle(label锗管FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU4->Text), Convert::ToSingle(label锗管FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU5->Text), Convert::ToSingle(label锗管FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU6->Text), Convert::ToSingle(label锗管FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU7->Text), Convert::ToSingle(label锗管FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU8->Text), Convert::ToSingle(label锗管FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU9->Text), Convert::ToSingle(label锗管FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label锗管FU10->Text), Convert::ToSingle(label锗管FI10->Text));
	}
	catch (System::Exception^ E) {

	}
}
void 元件伏安特性监控::chart硅管Init() {
	Series ^s = chart硅管->Series[0];
	chart硅管->Titles->Add("  硅管2CP15伏安特性");
	ChartArea ^ c = chart硅管->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压(V)";
	c->AxisY->Title = "电流(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}
void 元件伏安特性监控::Loadchart硅管() {
	Series ^s = chart硅管->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label硅管ZU1->Text), Convert::ToSingle(label硅管ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU2->Text), Convert::ToSingle(label硅管ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU3->Text), Convert::ToSingle(label硅管ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU4->Text), Convert::ToSingle(label硅管ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU5->Text), Convert::ToSingle(label硅管ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU6->Text), Convert::ToSingle(label硅管ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU7->Text), Convert::ToSingle(label硅管ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU8->Text), Convert::ToSingle(label硅管ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU9->Text), Convert::ToSingle(label硅管ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label硅管ZU10->Text), Convert::ToSingle(label硅管ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU1->Text), Convert::ToSingle(label1硅管FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU2->Text), Convert::ToSingle(label1硅管FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU3->Text), Convert::ToSingle(label1硅管FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU4->Text), Convert::ToSingle(label1硅管FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU5->Text), Convert::ToSingle(label1硅管FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU6->Text), Convert::ToSingle(label1硅管FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU7->Text), Convert::ToSingle(label1硅管FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU8->Text), Convert::ToSingle(label1硅管FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU9->Text), Convert::ToSingle(label1硅管FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label1硅管FU10->Text), Convert::ToSingle(label1硅管FI10->Text));
	}
	catch (System::Exception^ E) {

	}


}
void 元件伏安特性监控::chart稳压Init() {
	Series ^s = chart稳压->Series[0];
	chart稳压->Titles->Add("  稳压二极管伏安特性");
	ChartArea ^ c = chart稳压->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压(V)";
	c->AxisY->Title = "电流(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}


void 元件伏安特性监控::Loadchart稳压() {
	Series ^s = chart稳压->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label稳压ZU1->Text), Convert::ToSingle(label稳压ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU2->Text), Convert::ToSingle(label稳压ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU3->Text), Convert::ToSingle(label稳压ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU4->Text), Convert::ToSingle(label稳压ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU5->Text), Convert::ToSingle(label稳压ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU6->Text), Convert::ToSingle(label稳压ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU7->Text), Convert::ToSingle(label稳压ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU8->Text), Convert::ToSingle(label稳压ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU9->Text), Convert::ToSingle(label稳压ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压ZU10->Text), Convert::ToSingle(label稳压ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU1->Text), Convert::ToSingle(label稳压FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU2->Text), Convert::ToSingle(label稳压FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU3->Text), Convert::ToSingle(label稳压FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU4->Text), Convert::ToSingle(label稳压FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU5->Text), Convert::ToSingle(label稳压FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU6->Text), Convert::ToSingle(label稳压FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU7->Text), Convert::ToSingle(label稳压FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU8->Text), Convert::ToSingle(label稳压FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU9->Text), Convert::ToSingle(label稳压FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label稳压FU10->Text), Convert::ToSingle(label稳压FI10->Text));
	}
	catch (System::Exception^ E) {

	}
}




void 基尔霍夫定律监控::LoadData(ST_基尔霍夫定律 &data) {
	labelmeaI1  ->Text = gcnew String( data.测量I1 );   
	labelmeaI2  ->Text = gcnew String( data.测量I2 );   
	labelmeaI3  ->Text = gcnew String( data.测量I3 );   
	labelmeaU11 ->Text = gcnew String( data.测量U11);   
	labelmeaU12 ->Text = gcnew String( data.测量U12);   
	labelmeaUDE ->Text = gcnew String( data.测量UDE);   
	labelmeaUFA ->Text = gcnew String( data.测量UFA);   
	labelmeaUAB ->Text = gcnew String( data.测量UAB);   
	labelmeaUBC ->Text = gcnew String( data.测量UBC);   
	labelmeaUCD ->Text = gcnew String( data.测量UCD);   

	labelrelaI1 ->Text =   gcnew String(data.误差I1 );  
	labelrelaI2 ->Text =   gcnew String(data.误差I2 );  
	labelrelaI3 ->Text =   gcnew String(data.误差I3 );  
	labelrelaU11 ->Text =   gcnew String(data.误差U11);  
	labelrelaU12 ->Text =   gcnew String(data.误差U12);  
	labelrelaUDE ->Text =   gcnew String(data.误差UDE);  
	labelrelaUFA ->Text =   gcnew String(data.误差UFA);  
	labelrelaUAB ->Text =   gcnew String(data.误差UAB);  
	labelrelaUBC ->Text =   gcnew String(data.误差UBC);  
	labelrelaUCD ->Text =   gcnew String(data.误差UCD);  

	textBoxcalI1 ->Text = gcnew String(data.计算I1 ); 
	textBoxcalI2 ->Text = gcnew String(data.计算I2 ); 
	textBoxcalI3 ->Text = gcnew String(data.计算I3 ); 
	textBoxcalU11->Text = gcnew String(data.计算U11); 
	textBoxcalU12->Text = gcnew String(data.计算U12); 
	textBoxcalUDE->Text = gcnew String(data.计算UDE); 
	textBoxcalUFA->Text = gcnew String(data.计算UFA); 
	textBoxcalUAB->Text = gcnew String(data.计算UAB); 
	textBoxcalUBC->Text = gcnew String(data.计算UBC); 
	textBoxcalUCD->Text = gcnew String(data.计算UCD); 
	textBox结论->Text = gcnew String(data.summing_up);


}

void 叠加原理监控::LoadData(ST_叠加原理 &data) {
	labelLine1I1->Text = gcnew String(data.Line1I1);
	labelLine1I2->Text = gcnew String(data.Line1I2);
	labelLine1I3->Text = gcnew String(data.Line1I3);
	labelLine1U11->Text = gcnew String(data.Line1U11);
	labelLine1U12->Text = gcnew String(data.Line1U12);
	labelLine1UDE->Text = gcnew String(data.Line1UDE);
	labelLine1UFA->Text = gcnew String(data.Line1UFA);
	labelLine1UAB->Text = gcnew String(data.Line1UAB);
	labelLine1UBC->Text = gcnew String(data.Line1UBC);
	labelLine1UCD->Text = gcnew String(data.Line1UCD);

	labelLine2I1->Text = gcnew String(data.Line2I1);
	labelLine2I2->Text = gcnew String(data.Line2I2);
	labelLine2I3->Text = gcnew String(data.Line2I3);
	labelLine2U11->Text = gcnew String(data.Line2U11);
	labelLine2U12->Text = gcnew String(data.Line2U12);
	labelLine2UDE->Text = gcnew String(data.Line2UDE);
	labelLine2UFA->Text = gcnew String(data.Line2UFA);
	labelLine2UAB->Text = gcnew String(data.Line2UAB);
	labelLine2UBC->Text = gcnew String(data.Line2UBC);
	labelLine2UCD->Text = gcnew String(data.Line2UCD);

	labelLine3I1->Text = gcnew String(data.Line3I1);
	labelLine3I2->Text = gcnew String(data.Line3I2);
	labelLine3I3->Text = gcnew String(data.Line3I3);
	labelLine3U11->Text = gcnew String(data.Line3U11);
	labelLine3U12->Text = gcnew String(data.Line3U12);
	labelLine3UDE->Text = gcnew String(data.Line3UDE);
	labelLine3UFA->Text = gcnew String(data.Line3UFA);
	labelLine3UAB->Text = gcnew String(data.Line3UAB);
	labelLine3UBC->Text = gcnew String(data.Line3UBC);
	labelLine3UCD->Text = gcnew String(data.Line3UCD);

	labelLine4I1->Text = gcnew String(data.Line4I1);
	labelLine4I2->Text = gcnew String(data.Line4I2);
	labelLine4I3->Text = gcnew String(data.Line4I3);
	labelLine4U11->Text = gcnew String(data.Line4U11);
	labelLine4U12->Text = gcnew String(data.Line4U12);
	labelLine4UDE->Text = gcnew String(data.Line4UDE);
	labelLine4UFA->Text = gcnew String(data.Line4UFA);
	labelLine4UAB->Text = gcnew String(data.Line4UAB);
	labelLine4UBC->Text = gcnew String(data.Line4UBC);
	labelLine4UCD->Text = gcnew String(data.Line4UCD);

	labelLine5I1->Text = gcnew String(data.Line5I1);
	labelLine5I2->Text = gcnew String(data.Line5I2);
	labelLine5I3->Text = gcnew String(data.Line5I3);
	labelLine5U11->Text = gcnew String(data.Line5U11);
	labelLine5U12->Text = gcnew String(data.Line5U12);
	labelLine5UDE->Text = gcnew String(data.Line5UDE);
	labelLine5UFA->Text = gcnew String(data.Line5UFA);
	labelLine5UAB->Text = gcnew String(data.Line5UAB);
	labelLine5UBC->Text = gcnew String(data.Line5UBC);
	labelLine5UCD->Text = gcnew String(data.Line5UCD);

	labelLine6I1->Text = gcnew String(data.Line6I1);
	labelLine6I2->Text = gcnew String(data.Line6I2);
	labelLine6I3->Text = gcnew String(data.Line6I3);
	labelLine6U11->Text = gcnew String(data.Line6U11);
	labelLine6U12->Text = gcnew String(data.Line6U12);
	labelLine6UDE->Text = gcnew String(data.Line6UDE);
	labelLine6UFA->Text = gcnew String(data.Line6UFA);
	labelLine6UAB->Text = gcnew String(data.Line6UAB);
	labelLine6UBC->Text = gcnew String(data.Line6UBC);
	labelLine6UCD->Text = gcnew String(data.Line6UCD);

	labelLine7I1->Text = gcnew String(data.Line7I1);
	labelLine7I2->Text = gcnew String(data.Line7I2);
	labelLine7I3->Text = gcnew String(data.Line7I3);
	labelLine7U11->Text = gcnew String(data.Line7U11);
	labelLine7U12->Text = gcnew String(data.Line7U12);
	labelLine7UDE->Text = gcnew String(data.Line7UDE);
	labelLine7UFA->Text = gcnew String(data.Line7UFA);
	labelLine7UAB->Text = gcnew String(data.Line7UAB);
	labelLine7UBC->Text = gcnew String(data.Line7UBC);
	labelLine7UCD->Text = gcnew String(data.Line7UCD);

	labelLine8I1->Text = gcnew String(data.Line8I1);
	labelLine8I2->Text = gcnew String(data.Line8I2);
	labelLine8I3->Text = gcnew String(data.Line8I3);
	labelLine8U11->Text = gcnew String(data.Line8U11);
	labelLine8U12->Text = gcnew String(data.Line8U12);
	labelLine8UDE->Text = gcnew String(data.Line8UDE);
	labelLine8UFA->Text = gcnew String(data.Line8UFA);
	labelLine8UAB->Text = gcnew String(data.Line8UAB);
	labelLine8UBC->Text = gcnew String(data.Line8UBC);
	labelLine8UCD->Text = gcnew String(data.Line8UCD);

	textBox结论->Text = gcnew String(data.summing_up);
}


void 戴维南定理监控::LoadData(ST_戴维南定理 &d) {


	   labelMethod1Isc->Text=gcnew String( d.Method1Isc);
	  textBoxMethod1Ro->Text=gcnew String( d.Method1Ro );
	   labelMethod1Uoc->Text=gcnew String( d.Method1Uoc);
	  labelMethod2I1->Text= gcnew String( d.Method2I1) ;
	  labelMethod2I2->Text= gcnew String( d.Method2I2) ;
	  labelMethod2I3->Text= gcnew String( d.Method2I3) ;
	  labelMethod2I4->Text= gcnew String( d.Method2I4) ;
	  labelMethod2I5->Text= gcnew String( d.Method2I5) ;
	  labelMethod2I6->Text= gcnew String( d.Method2I6) ;
	  labelMethod2I7->Text= gcnew String( d.Method2I7) ;
	  labelMethod2I8->Text= gcnew String( d.Method2I8) ;
	  labelMethod2I9->Text= gcnew String( d.Method2I9) ;
	   labelMethod2I10->Text=   gcnew String(d.Method2I10);
	   textBoxMethod2RL1->Text= gcnew String(d.Method2RL1);
	   textBoxMethod2RL2->Text= gcnew String(d.Method2RL2);
	   textBoxMethod2RL3->Text= gcnew String(d.Method2RL3);
	   textBoxMethod2RL4->Text= gcnew String(d.Method2RL4);
	   textBoxMethod2RL5->Text= gcnew String(d.Method2RL5);
	   textBoxMethod2RL6->Text= gcnew String(d.Method2RL6);
	   textBoxMethod2RL7->Text= gcnew String(d.Method2RL7);
	   textBoxMethod2RL8->Text= gcnew String(d.Method2RL8);
	   textBoxMethod2RL9->Text= gcnew String(d.Method2RL9);
	  textBoxMethod2RL10->Text= gcnew String(d.Method2RL10);

	 textBoxMethod3Ro->Text = gcnew String(d.Method3ro ); 
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
	textBoxMethod6RL1->Text = gcnew String(d.Method6RL1);
	textBoxMethod6RL2->Text = gcnew String(d.Method6RL2);
	textBoxMethod6RL3->Text = gcnew String(d.Method6RL3);
	textBoxMethod6RL4->Text = gcnew String(d.Method6RL4);
	textBoxMethod6RL5->Text = gcnew String(d.Method6RL5);
	textBoxMethod6RL6->Text = gcnew String(d.Method6RL6);
	textBoxMethod6RL7->Text = gcnew String(d.Method6RL7);
	textBoxMethod6RL8->Text = gcnew String(d.Method6RL8);
	textBoxMethod6RL9->Text = gcnew String(d.Method6RL9);
	textBoxMethod6RL10->Text = gcnew String(d.Method6RL10);

	textBox结论->Text = gcnew String(d.summing_up);
}

void 电压源与电流源的等效变换监控::LoadData(ST_电压源与电流源的等效变换 &d) {

	textBox结论->Text = gcnew String(d.summing_up);
	textBoxTrial11Load1->Text = gcnew String(d.Trial11Load1);
	textBoxTrial11Load2->Text = gcnew String(d.Trial11Load2);
	textBoxTrial11Load3->Text = gcnew String(d.Trial11Load3);
	textBoxTrial11Load4->Text = gcnew String(d.Trial11Load4);
	textBoxTrial11Load5->Text = gcnew String(d.Trial11Load5);
	textBoxTrial11Load6->Text = gcnew String(d.Trial11Load6);
	textBoxTrial11Load7->Text = gcnew String(d.Trial11Load7);
	textBoxTrial11Load8->Text = gcnew String(d.Trial11Load8);
	textBoxTrial11Load9->Text = gcnew String(d.Trial11Load9);
	textBoxTrial11Load10->Text = gcnew String(d.Trial11Load10);

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

	textBoxTrial12Load1->Text = gcnew String(d.Trial12Load1);
	textBoxTrial12Load2->Text = gcnew String(d.Trial12Load2);
	textBoxTrial12Load3->Text = gcnew String(d.Trial12Load3);
	textBoxTrial12Load4->Text = gcnew String(d.Trial12Load4);
	textBoxTrial12Load5->Text = gcnew String(d.Trial12Load5);
	textBoxTrial12Load6->Text = gcnew String(d.Trial12Load6);
	textBoxTrial12Load7->Text = gcnew String(d.Trial12Load7);
	textBoxTrial12Load8->Text = gcnew String(d.Trial12Load8);
	textBoxTrial12Load9->Text = gcnew String(d.Trial12Load9);
	textBoxTrial12Load10->Text = gcnew String(d.Trial12Load10);

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


	textBoxTrial2Load1->Text = gcnew String(d.Trial2Load1);
	textBoxTrial2Load2->Text = gcnew String(d.Trial2Load2);
	textBoxTrial2Load3->Text = gcnew String(d.Trial2Load3);
	textBoxTrial2Load4->Text = gcnew String(d.Trial2Load4);
	textBoxTrial2Load5->Text = gcnew String(d.Trial2Load5);
	textBoxTrial2Load6->Text = gcnew String(d.Trial2Load6);
	textBoxTrial2Load7->Text = gcnew String(d.Trial2Load7);
	textBoxTrial2Load8->Text = gcnew String(d.Trial2Load8);
	textBoxTrial2Load9->Text = gcnew String(d.Trial2Load9);
	textBoxTrial2Load10->Text = gcnew String(d.Trial2Load10);


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
}

void 一阶电路的响应测试监控::LoadData(ST_一阶电路的响应测试 &d) {
	//读取数据 删除图片 保存图片 显示图片 
	fileSql f;
	string Name = string(MONITORTEMP) + "一阶电路的响应测试";
	String^ ImageLocationTrial1 = gcnew String(string(Name + "trial1.bmp").c_str());
	String^ ImageLocationTrial2 = gcnew String(string(Name + "trial2.bmp").c_str());
	String^ ImageLocationTrial3 = gcnew String(string(Name + "trial3.bmp").c_str());
	//先删除原来有的文件
	IO::File::Delete(ImageLocationTrial1);
	IO::File::Delete(ImageLocationTrial2);
	IO::File::Delete(ImageLocationTrial3);
	f.Writefile(Name + "trial1.bmp", string(d.Trial1Bmp, sizeof(d.Trial1Bmp)));
	f.Writefile(Name + "trial2.bmp", string(d.Trial2Bmp, sizeof(d.Trial2Bmp)));
	f.Writefile(Name + "trial3.bmp", string(d.Trial3Bmp, sizeof(d.Trial3Bmp)));
	textBoxtrialτ->Text = gcnew String(d.τ);
	pictureBoxTrial1->ImageLocation = ImageLocationTrial1;
	pictureBoxTrial2->ImageLocation = ImageLocationTrial2;
	pictureBoxTrial3->ImageLocation = ImageLocationTrial3;
	textBox结论->Text = gcnew String(d.summing_up);

}
string T_to_string(String^in);

void 二阶动态电路响应的研究监控::LoadData(ST_二阶动态电路响应的研究 &d) {
	//读取数据 删除图片 保存图片 显示图片 
	fileSql f;
	string Name = string(BMPTEMP) + "二阶动态电路响应的研究";
	String^ ImageLocationTrial1_1 = gcnew String(string(Name + "Trial1_1.bmp").c_str());
	String^ ImageLocationTrial1_2 = gcnew String(string(Name + "Trial1_2.bmp").c_str());
	String^ ImageLocationTrial1_3 = gcnew String(string(Name + "Trial1_3.bmp").c_str());
	String^ ImageLocationTrial2_1 = gcnew String(string(Name + "Trial2_1.bmp").c_str());
	String^ ImageLocationTrial3_1 = gcnew String(string(Name + "Trial3_1.bmp").c_str());
	String^ ImageLocationTrial3_2 = gcnew String(string(Name + "Trial3_2.bmp").c_str());
	String^ ImageLocationTrial3_3 = gcnew String(string(Name + "Trial3_3.bmp").c_str());
	String^ ImageLocationTrial3_4 = gcnew String(string(Name + "Trial3_4.bmp").c_str());
	//先删除原来有的文件
	IO::File::Delete(ImageLocationTrial1_1);
	IO::File::Delete(ImageLocationTrial1_2);
	IO::File::Delete(ImageLocationTrial1_3);
	IO::File::Delete(ImageLocationTrial2_1);
	IO::File::Delete(ImageLocationTrial3_1);
	IO::File::Delete(ImageLocationTrial3_2);
	IO::File::Delete(ImageLocationTrial3_3);
	IO::File::Delete(ImageLocationTrial3_4);
	f.Writefile(T_to_string(ImageLocationTrial1_1), string(d.Trial1_1Bmp, sizeof(d.Trial1_1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial1_2), string(d.Trial1_2Bmp, sizeof(d.Trial1_2Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial1_3), string(d.Trial1_3Bmp, sizeof(d.Trial1_3Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial2_1), string(d.Trial2_1Bmp, sizeof(d.Trial2_1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_1), string(d.Trial3_1Bmp, sizeof(d.Trial3_1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_2), string(d.Trial3_2Bmp, sizeof(d.Trial3_2Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_3), string(d.Trial3_3Bmp, sizeof(d.Trial3_3Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_4), string(d.Trial3_4Bmp, sizeof(d.Trial3_4Bmp)));

	pictureBoxTrial1_1->ImageLocation = ImageLocationTrial1_1;
	pictureBoxTrial1_2->ImageLocation = ImageLocationTrial1_2;
	pictureBoxTrial1_3->ImageLocation = ImageLocationTrial1_3;
	pictureBoxTrial2_1->ImageLocation = ImageLocationTrial2_1;
	pictureBoxTrial3_1->ImageLocation = ImageLocationTrial3_1;
	pictureBoxTrial3_2->ImageLocation = ImageLocationTrial3_2;
	pictureBoxTrial3_3->ImageLocation = ImageLocationTrial3_3;
	pictureBoxTrial3_4->ImageLocation = ImageLocationTrial3_4;

	textBoxtrial2_α->Text = gcnew String(d.trial2_α);
	textBoxtrial2_w->Text = gcnew String(d.trial2_w);
	textBoxTrial3_1α->Text = gcnew String(d.trial3_1α);
	textBoxTrial3_1w->Text = gcnew String(d.trial3_1w);
	textBoxTrial3_2α->Text = gcnew String(d.trial3_2α);
	textBoxTrial3_2w->Text = gcnew String(d.trial3_2w);
	textBoxTrial3_3α->Text = gcnew String(d.trial3_3α);
	textBoxTrial3_3w->Text = gcnew String(d.trial3_3w);
	textBoxTrial3_4α->Text = gcnew String(d.trial3_4α);
	textBoxTrial3_4w->Text = gcnew String(d.trial3_4w);

	textBox结论->Text = gcnew String(d.summing_up);
}

void VCVS实验监控::LoadData(ST_VCVS实验 &d) {
	 textBoxtrial1_1u->Text =  gcnew String( d.trial1_1u );
	 labeltrial1_1U2_1->Text = gcnew String(  d.trial1_1U2_1);
	 labeltrial1_1U2_2->Text = gcnew String(  d.trial1_1U2_2);
	 labeltrial1_1U2_3->Text = gcnew String(  d.trial1_1U2_3);
	 labeltrial1_1U2_4->Text = gcnew String(  d.trial1_1U2_4);
	 labeltrial1_1U2_5->Text = gcnew String(  d.trial1_1U2_5);
	 labeltrial1_1U2_6->Text = gcnew String(  d.trial1_1U2_6);
	 labeltrial1_1U2_7->Text = gcnew String(  d.trial1_1U2_7);
	 labeltrial1_1U2_8->Text = gcnew String(  d.trial1_1U2_8);
	 labeltrial1_1U2_9->Text = gcnew String(  d.trial1_1U2_9);

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
	 textBoxtrial2_1gm->Text = gcnew String(d.trial2_1gm);


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
	textBoxtrial3_1rm->Text = gcnew String(d.trial3_1rm );

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


}


void 二端口网络的研究监控::LoadData(ST_二端口网络的研究 &d) {
	textBoxTrial1_1_A1->Text = gcnew String(d.Trial1_1_A1);
	textBoxTrial1_1_B1->Text = gcnew String(d.Trial1_1_B1);
	textBoxTrial1_1_C1->Text = gcnew String(d.Trial1_1_C1);
	textBoxTrial1_1_D1->Text = gcnew String(d.Trial1_1_D1);
	labelTrial1_1_I110->Text = gcnew String(d.Trial1_1_I110);
	labelTrial1_1_I11S->Text = gcnew String(d.Trial1_1_I11S);
	labelTrial1_1_U110->Text = gcnew String(d.Trial1_1_U110);
	labelTrial1_1_U11S->Text = gcnew String(d.Trial1_1_U11S);
	labelTrial1_1_U120->Text = gcnew String(d.Trial1_1_U120);
	labelTrial1_1_U12S->Text = gcnew String(d.Trial1_1_U12S);

	labelTrial1_2_U210->Text = gcnew String(d.Trial1_2_U210);
	labelTrial1_2_U220->Text = gcnew String(d.Trial1_2_U220);
	labelTrial1_2_I210->Text = gcnew String(d.Trial1_2_I210);
	textBoxTrial1_2_A2->Text = gcnew String(d.Trial1_2_A2 );
	textBoxTrial1_2_B2->Text = gcnew String(d.Trial1_2_B2 );
	labelTrial1_2_U21S->Text = gcnew String(d.Trial1_2_U21S);
	labelTrial1_2_I21S->Text = gcnew String(d.Trial1_2_I21S);
	labelTrial1_2_I22S->Text = gcnew String(d.Trial1_2_I22S);
	textBoxTrial1_2_C2->Text = gcnew String(d.Trial1_2_C2 );
	textBoxTrial1_2_D2->Text = gcnew String(d.Trial1_2_D2 );

	labelTrial2_1_U10->Text = gcnew String( d.Trial2_1_U10);
	labelTrial2_1_I10->Text = gcnew String( d.Trial2_1_I10);
	labelTrial2_1_I110->Text = gcnew String( d.Trial2_1_I110);
	labelTrial2_1_U1S->Text = gcnew String( d.Trial2_1_U1S);
	labelTrial2_1_I1S->Text = gcnew String( d.Trial2_1_I1S);
	labelTrial2_1_R1S->Text = gcnew String( d.Trial2_1_R1S);
	labelTrial2_1_U20->Text = gcnew String( d.Trial2_1_U20);
	labelTrial2_1_I20->Text = gcnew String( d.Trial2_1_I20);
	labelTrial2_1_R20->Text = gcnew String( d.Trial2_1_R20);
	labelTrial2_1_U2S->Text = gcnew String( d.Trial2_1_U2S);
	labelTrial2_1_I2S->Text = gcnew String( d.Trial2_1_I2S);
	labelTrial2_1_R2S->Text = gcnew String( d.Trial2_1_R2S);
	textBoxTrial2_1_A->Text = gcnew String( d.Trial2_1_A);
	textBoxTrial2_1_B->Text = gcnew String( d.Trial2_1_B);
	textBoxTrial2_1_C->Text = gcnew String( d.Trial2_1_C);
	textBoxTrial2_1_D->Text = gcnew String( d.Trial2_1_D);

}

void 最大功率传输条件的测定监控::LoadData(ST_最大功率传输条件的测定 &d) {
	textBoxTrial1_RL2->Text = gcnew String(d.Trial1_RL2);
	textBoxTrial1_RL3->Text = gcnew String(d.Trial1_RL3);
	textBoxTrial1_RL4->Text = gcnew String(d.Trial1_RL4);
	textBoxTrial1_RL5->Text = gcnew String(d.Trial1_RL5);
	textBoxTrial1_RL6->Text = gcnew String(d.Trial1_RL6);
	textBoxTrial1_RL7->Text = gcnew String(d.Trial1_RL7);
	textBoxTrial1_RL8->Text = gcnew String(d.Trial1_RL8);

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

	textBoxTrial1_PL1->Text = gcnew String(d.Trial1_PL1);
	textBoxTrial1_PL2->Text = gcnew String(d.Trial1_PL2);
	textBoxTrial1_PL3->Text = gcnew String(d.Trial1_PL3);
	textBoxTrial1_PL4->Text = gcnew String(d.Trial1_PL4);
	textBoxTrial1_PL5->Text = gcnew String(d.Trial1_PL5);
	textBoxTrial1_PL6->Text = gcnew String(d.Trial1_PL6);
	textBoxTrial1_PL7->Text = gcnew String(d.Trial1_PL7);
	textBoxTrial1_PL8->Text = gcnew String(d.Trial1_PL8);
	textBoxTrial1_PL9->Text = gcnew String(d.Trial1_PL9);


	labelTrial1_Uo1->Text = gcnew String(d.Trial1_Uo1);
	labelTrial1_Uo2->Text = gcnew String(d.Trial1_Uo2);
	labelTrial1_Uo3->Text = gcnew String(d.Trial1_Uo3);
	labelTrial1_Uo4->Text = gcnew String(d.Trial1_Uo4);
	labelTrial1_Uo5->Text = gcnew String(d.Trial1_Uo5);
	labelTrial1_Uo6->Text = gcnew String(d.Trial1_Uo6);
	labelTrial1_Uo7->Text = gcnew String(d.Trial1_Uo7);
	labelTrial1_Uo8->Text = gcnew String(d.Trial1_Uo8);
	labelTrial1_Uo9->Text = gcnew String(d.Trial1_Uo9);


	textBoxtrial1_Po1->Text = gcnew String( d.trial1_Po1);
	textBoxtrial1_Po2->Text = gcnew String( d.trial1_Po2);
	textBoxtrial1_Po3->Text = gcnew String( d.trial1_Po3);
	textBoxtrial1_Po4->Text = gcnew String( d.trial1_Po4);
	textBoxtrial1_Po5->Text = gcnew String( d.trial1_Po5);
	textBoxtrial1_Po6->Text = gcnew String( d.trial1_Po6);
	textBoxtrial1_Po7->Text = gcnew String( d.trial1_Po7);
	textBoxtrial1_Po8->Text = gcnew String( d.trial1_Po8);
	textBoxtrial1_Po9->Text = gcnew String( d.trial1_Po9);


	textBoxtrial2_RL2->Text = gcnew String( d.Trial2_RL2);
	textBoxtrial2_RL3->Text = gcnew String( d.Trial2_RL3);
	textBoxtrial2_RL4->Text = gcnew String( d.Trial2_RL4);
	textBoxtrial2_RL5->Text = gcnew String( d.Trial2_RL5);
	textBoxtrial2_RL6->Text = gcnew String( d.Trial2_RL6);
	textBoxtrial2_RL7->Text = gcnew String( d.Trial2_RL7);
	textBoxtrial2_RL8->Text = gcnew String( d.Trial2_RL8);

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


	textBoxTrial2_PL1->Text = gcnew String(d.Trial2_PL1);
	textBoxTrial2_PL2->Text = gcnew String(d.Trial2_PL2);
	textBoxTrial2_PL3->Text = gcnew String(d.Trial2_PL3);
	textBoxTrial2_PL4->Text = gcnew String(d.Trial2_PL4);
	textBoxTrial2_PL5->Text = gcnew String(d.Trial2_PL5);
	textBoxTrial2_PL6->Text = gcnew String(d.Trial2_PL6);
	textBoxTrial2_PL7->Text = gcnew String(d.Trial2_PL7);
	textBoxTrial2_PL8->Text = gcnew String(d.Trial2_PL8);
	textBoxTrial2_PL9->Text = gcnew String(d.Trial2_PL9);


	labelTrial2_Uo1->Text = gcnew String(d.Trial2_Uo1);
	labelTrial2_Uo2->Text = gcnew String(d.Trial2_Uo2);
	labelTrial2_Uo3->Text = gcnew String(d.Trial2_Uo3);
	labelTrial2_Uo4->Text = gcnew String(d.Trial2_Uo4);
	labelTrial2_Uo5->Text = gcnew String(d.Trial2_Uo5);
	labelTrial2_Uo6->Text = gcnew String(d.Trial2_Uo6);
	labelTrial2_Uo7->Text = gcnew String(d.Trial2_Uo7);
	labelTrial2_Uo8->Text = gcnew String(d.Trial2_Uo8); 
	labelTrial2_Uo9->Text = gcnew String(d.Trial2_Uo9);


	textBoxTrial2_Po1->Text = gcnew String(d.trial2_Po1);
	textBoxTrial2_Po2->Text = gcnew String(d.trial2_Po2);
	textBoxTrial2_Po3->Text = gcnew String(d.trial2_Po3);
	textBoxTrial2_Po4->Text = gcnew String(d.trial2_Po4);
	textBoxTrial2_Po5->Text = gcnew String(d.trial2_Po5);
	textBoxTrial2_Po6->Text = gcnew String(d.trial2_Po6);
	textBoxTrial2_Po7->Text = gcnew String(d.trial2_Po7);
	textBoxTrial2_Po8->Text = gcnew String(d.trial2_Po8);
	textBoxTrial2_Po9->Text = gcnew String(d.trial2_Po9);

	 textBox结论->Text = gcnew String(d.summing_up);

}

void 电路状态轨迹的观测监控::LoadData(ST_电路状态轨迹的观测 &d) {
	fileSql f;
	string Name = string(BMPTEMP) + "最大功率传输条件的测定";
	String^ ImageLocationTrial1 = gcnew String(string(Name + "Trial1.bmp").c_str());
	String^ ImageLocationTrial2 = gcnew String(string(Name + "Trial2.bmp").c_str());
	String^ ImageLocationTrial3 = gcnew String(string(Name + "Trial3.bmp").c_str());
	//先删除原来有的文件
	IO::File::Delete(ImageLocationTrial1);
	IO::File::Delete(ImageLocationTrial2);
	IO::File::Delete(ImageLocationTrial3);

	f.Writefile(T_to_string(ImageLocationTrial1), string(d.Trial1Bmp, sizeof(d.Trial1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial2), string(d.Trial2Bmp, sizeof(d.Trial2Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3), string(d.Trial3Bmp, sizeof(d.Trial3Bmp)));


	pictureBox1->ImageLocation = ImageLocationTrial1;
	pictureBox2->ImageLocation = ImageLocationTrial2;
	pictureBox3->ImageLocation = ImageLocationTrial3;

	textBox结论->Text = gcnew String(d.summing_up);
}


void RLC元件阻抗特性的测定监控::LoadData(ST_RLC元件阻抗特性的测定 &d) {
	fileSql f;
	string Name = string(BMPTEMP) + "RLC元件阻抗特性的测定监控";
	String^ ImageLocationTrial2_1 = gcnew String(string(Name + "Trial2_1.bmp").c_str());
	String^ ImageLocationTrial2_2 = gcnew String(string(Name + "Trial2_2.bmp").c_str());

	//先删除原来有的文件
	IO::File::Delete(ImageLocationTrial2_1);
	IO::File::Delete(ImageLocationTrial2_2);

	f.Writefile(T_to_string(ImageLocationTrial2_1), string(d.Trial2_1Bmp, sizeof(d.Trial2_1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial2_2), string(d.Trial2_2Bmp, sizeof(d.Trial2_2Bmp)));


	pictureBoxTrial2_1->ImageLocation = ImageLocationTrial2_1;
	pictureBoxTrial2_2->ImageLocation = ImageLocationTrial2_2;


	textBox结论->Text = gcnew String(d.summing_up);
	labelTrial1_F->Text =gcnew String( d.Trial1_F);
	labelTrial1_R_Ur->Text = gcnew String(d.Trial1_R_Ur);
	labelTrial1_R_IR->Text = gcnew String(d.Trial1_R_IR);
	textBoxTrial1_R_R->Text = gcnew String(d.Trial1_R_R);
	labelTrial1_L_Ur->Text = gcnew String(d.Trial1_L_Ur );
	labelTrial1_L_IL->Text = gcnew String(d.Trial1_L_IL);
	textBoxTrial1_L_XL->Text = gcnew String(d.Trial1_L_XL);
	labelTrial1_C_Ur->Text = gcnew String(d.Trial1_C_Ur);
	labelTrial1_C_IC->Text = gcnew String(d.Trial1_C_IC);
	textBoxTrial1_C_XC->Text = gcnew String(d.Trial1_C_XC);
	
	labelTrial3_F->Text   = gcnew String(d.Trial3_F);
	textBoxTrial3_n->Text = gcnew String(d.Trial3_n);
	textBoxTrial3_m->Text = gcnew String(d.Trial3_m);
	textBoxTrial3_φ->Text = gcnew String(d.Trial3_φ);
}


void RLC串联谐振电路的研究监控::LoadData(ST_RLC串联谐振电路的研究 &d) {
	fileSql f;
	string Name = string(BMPTEMP) + "RLC串联谐振电路的研究监控";
	String^ ImageLocationTrial1 = gcnew String(string(Name + "Trial1.bmp").c_str());

	IO::File::Delete(ImageLocationTrial1);
	f.Writefile(T_to_string(ImageLocationTrial1), string(d.Trial1Bmp, sizeof(d.Trial1Bmp)));


	textBox结论->Text = gcnew String(d.summing_up);

	textBoxTrial2_F->Text = gcnew String(d.Trial2_F) ;
	textBoxTrial2_F->Text = gcnew String(d.Trial2_Uc);
	textBoxTrial2_F->Text = gcnew String(d.Trial2_UL);

	textBoxTrial5_F1->Text = gcnew String(d.Trial3_F1);
	textBoxTrial5_F2->Text = gcnew String(d.Trial3_F2);
	textBoxTrial5_F3->Text = gcnew String(d.Trial3_F3);
	textBoxTrial5_F4->Text = gcnew String(d.Trial3_F4);
	textBoxTrial5_F5->Text = gcnew String(d.Trial3_F5);
	textBoxTrial5_F6->Text = gcnew String(d.Trial3_F6);
	textBoxTrial5_F7->Text = gcnew String(d.Trial3_F7);
	textBoxTrial5_F8->Text = gcnew String(d.Trial3_F8);
	textBoxTrial5_F9->Text = gcnew String(d.Trial3_F9);
	textBoxTrial5_F10->Text = gcnew String(d.Trial3_F10);
	textBoxTrial5_F11->Text = gcnew String(d.Trial3_F11);
	textBoxTrial5_F12->Text = gcnew String(d.Trial3_F12);
	textBoxTrial5_F13->Text = gcnew String(d.Trial3_F13);
	textBoxTrial5_F14->Text = gcnew String(d.Trial3_F14);
	textBoxTrial5_F15->Text = gcnew String(d.Trial3_F15);
	textBoxTrial5_F16->Text = gcnew String(d.Trial3_F16);

	labelTrial3_U0_1->Text = gcnew String(d.Trial3_U0_1 );
	labelTrial3_U0_2->Text = gcnew String(d.Trial3_U0_2 );
	labelTrial3_U0_3->Text = gcnew String(d.Trial3_U0_3 );
	labelTrial3_U0_4->Text = gcnew String(d.Trial3_U0_4 );
	labelTrial3_U0_5->Text = gcnew String(d.Trial3_U0_5 );
	labelTrial3_U0_6->Text = gcnew String(d.Trial3_U0_6 );
	labelTrial3_U0_7->Text = gcnew String(d.Trial3_U0_7 );
	labelTrial3_U0_8->Text = gcnew String(d.Trial3_U0_8 );
	labelTrial3_U0_9->Text = gcnew String(d.Trial3_U0_9 );
	labelTrial3_U0_10->Text = gcnew String(d.Trial3_U0_10);
	labelTrial3_U0_11->Text = gcnew String(d.Trial3_U0_11);
	labelTrial3_U0_12->Text = gcnew String(d.Trial3_U0_12);
	labelTrial3_U0_13->Text = gcnew String(d.Trial3_U0_13);
	labelTrial3_U0_14->Text = gcnew String(d.Trial3_U0_14);
	labelTrial3_U0_15->Text = gcnew String(d.Trial3_U0_15);
	labelTrial3_U0_16->Text = gcnew String(d.Trial3_U0_16);

	labelTrial3_UL_1->Text = gcnew String(d.Trial3_UL_1 );
	labelTrial3_UL_2->Text = gcnew String(d.Trial3_UL_2 );
	labelTrial3_UL_3->Text = gcnew String(d.Trial3_UL_3 );
	labelTrial3_UL_4->Text = gcnew String(d.Trial3_UL_4 );
	labelTrial3_UL_5->Text = gcnew String(d.Trial3_UL_5 );
	labelTrial3_UL_6->Text = gcnew String(d.Trial3_UL_6 );
	labelTrial3_UL_7->Text = gcnew String(d.Trial3_UL_7 );
	labelTrial3_UL_8->Text = gcnew String(d.Trial3_UL_8 );
	labelTrial3_UL_9->Text = gcnew String(d.Trial3_UL_9 );
	labelTrial3_UL_10->Text = gcnew String(d.Trial3_UL_10);
	labelTrial3_UL_11->Text = gcnew String(d.Trial3_UL_11);
	labelTrial3_UL_12->Text = gcnew String(d.Trial3_UL_12);
	labelTrial3_UL_13->Text = gcnew String(d.Trial3_UL_13);
	labelTrial3_UL_14->Text = gcnew String(d.Trial3_UL_14);
	labelTrial3_UL_15->Text = gcnew String(d.Trial3_UL_15);
	labelTrial3_UL_16->Text = gcnew String(d.Trial3_UL_16);


	labelTrial3_Uc_1->Text = gcnew String(d.Trial3_Uc_1 );
	labelTrial3_Uc_2->Text = gcnew String(d.Trial3_Uc_2 );
	labelTrial3_Uc_3->Text = gcnew String(d.Trial3_Uc_3 );
	labelTrial3_Uc_4->Text = gcnew String(d.Trial3_Uc_4 );
	labelTrial3_Uc_5->Text = gcnew String(d.Trial3_Uc_5 );
	labelTrial3_Uc_6->Text = gcnew String(d.Trial3_Uc_6 );
	labelTrial3_Uc_7->Text = gcnew String(d.Trial3_Uc_7 );
	labelTrial3_Uc_8->Text = gcnew String(d.Trial3_Uc_8 );
	labelTrial3_Uc_9->Text = gcnew String(d.Trial3_Uc_9 );
	labelTrial3_Uc_10->Text = gcnew String(d.Trial3_Uc_10);
	labelTrial3_Uc_11->Text = gcnew String(d.Trial3_Uc_11);
	labelTrial3_Uc_12->Text = gcnew String(d.Trial3_Uc_12);
	labelTrial3_Uc_13->Text = gcnew String(d.Trial3_Uc_13);
	labelTrial3_Uc_14->Text = gcnew String(d.Trial3_Uc_14);
	labelTrial3_Uc_15->Text = gcnew String(d.Trial3_Uc_15);
	labelTrial3_Uc_16->Text = gcnew String(d.Trial3_Uc_16);
	textBoxTrial3_Fo->Text = gcnew String(d.Trial3_Fo);
	textBoxTrial3_Q->Text = gcnew String(d.Trial3_Q);
	textBoxTrial3F2_F1->Text = gcnew String(d.Trial3F2_F1);

	textBoxTrial4_F->Text= gcnew String(d.Trial4_F );
	labelTrial4_Uc ->Text= gcnew String(d.Trial4_Uc);
	labelTrial4_UL ->Text= gcnew String(d.Trial4_UL);

	textBoxTrial5_F1->Text = gcnew String( d.Trial5_F1 );
	textBoxTrial5_F2->Text = gcnew String( d.Trial5_F2 );
	textBoxTrial5_F3->Text = gcnew String( d.Trial5_F3 );
	textBoxTrial5_F4->Text = gcnew String( d.Trial5_F4 );
	textBoxTrial5_F5->Text = gcnew String( d.Trial5_F5 );
	textBoxTrial5_F6->Text = gcnew String( d.Trial5_F6 );
	textBoxTrial5_F7->Text = gcnew String( d.Trial5_F7 );
	textBoxTrial5_F8->Text = gcnew String( d.Trial5_F8 );
	textBoxTrial5_F9->Text = gcnew String( d.Trial5_F9 );
	textBoxTrial5_F10->Text = gcnew String( d.Trial5_F10);
	textBoxTrial5_F11->Text = gcnew String( d.Trial5_F11);
	textBoxTrial5_F12->Text = gcnew String( d.Trial5_F12);
	textBoxTrial5_F13->Text = gcnew String( d.Trial5_F13);
	textBoxTrial5_F14->Text = gcnew String( d.Trial5_F14);
	textBoxTrial5_F15->Text = gcnew String( d.Trial5_F15);
	textBoxTrial5_F16->Text = gcnew String( d.Trial5_F16);

	labelTrial5_U0_1->Text = gcnew String(d.Trial5_U0_1 );
	labelTrial5_U0_2->Text = gcnew String(d.Trial5_U0_2 );
	labelTrial5_U0_3->Text = gcnew String(d.Trial5_U0_3 );
	labelTrial5_U0_4->Text = gcnew String(d.Trial5_U0_4 );
	labelTrial5_U0_5->Text = gcnew String(d.Trial5_U0_5 );
	labelTrial5_U0_6->Text = gcnew String(d.Trial5_U0_6 );
	labelTrial5_U0_7->Text = gcnew String(d.Trial5_U0_7 );
	labelTrial5_U0_8->Text = gcnew String(d.Trial5_U0_8 );
	labelTrial5_U0_9->Text = gcnew String(d.Trial5_U0_9 );
	labelTrial5_U0_10->Text = gcnew String(d.Trial5_U0_10);
	labelTrial5_U0_11->Text = gcnew String(d.Trial5_U0_11);
	labelTrial5_U0_12->Text = gcnew String(d.Trial5_U0_12);
	labelTrial5_U0_13->Text = gcnew String(d.Trial5_U0_13);
	labelTrial5_U0_14->Text = gcnew String(d.Trial5_U0_14);
	labelTrial5_U0_15->Text = gcnew String(d.Trial5_U0_15);
	labelTrial5_U0_16->Text = gcnew String(d.Trial5_U0_16);

	labelTrial5_UL_1->Text = gcnew String(d.Trial5_UL_1 );
	labelTrial5_UL_2->Text = gcnew String(d.Trial5_UL_2 );
	labelTrial5_UL_3->Text = gcnew String(d.Trial5_UL_3 );
	labelTrial5_UL_4->Text = gcnew String(d.Trial5_UL_4 );
	labelTrial5_UL_5->Text = gcnew String(d.Trial5_UL_5 );
	labelTrial5_UL_6->Text = gcnew String(d.Trial5_UL_6 );
	labelTrial5_UL_7->Text = gcnew String(d.Trial5_UL_7 );
	labelTrial5_UL_8->Text = gcnew String(d.Trial5_UL_8 );
	labelTrial5_UL_9->Text = gcnew String(d.Trial5_UL_9 );
	labelTrial5_UL_10->Text = gcnew String(d.Trial5_UL_10);
	labelTrial5_UL_11->Text = gcnew String(d.Trial5_UL_11);
	labelTrial5_UL_12->Text = gcnew String(d.Trial5_UL_12);
	labelTrial5_UL_13->Text = gcnew String(d.Trial5_UL_13);
	labelTrial5_UL_14->Text = gcnew String(d.Trial5_UL_14);
	labelTrial5_UL_15->Text = gcnew String(d.Trial5_UL_15);
	labelTrial5_UL_16->Text = gcnew String(d.Trial5_UL_16);


	labelTrial5_Uc_1->Text = gcnew String(d.Trial5_Uc_1 );
	labelTrial5_Uc_2->Text = gcnew String(d.Trial5_Uc_2 );
	labelTrial5_Uc_3->Text = gcnew String(d.Trial5_Uc_3 );
	labelTrial5_Uc_4->Text = gcnew String(d.Trial5_Uc_4 );
	labelTrial5_Uc_5->Text = gcnew String(d.Trial5_Uc_5 );
	labelTrial5_Uc_6->Text = gcnew String(d.Trial5_Uc_6 );
	labelTrial5_Uc_7->Text = gcnew String(d.Trial5_Uc_7 );
	labelTrial5_Uc_8->Text = gcnew String(d.Trial5_Uc_8 );
	labelTrial5_Uc_9->Text = gcnew String(d.Trial5_Uc_9 );
	labelTrial5_Uc_10->Text = gcnew String(d.Trial5_Uc_10);
	labelTrial5_Uc_11->Text = gcnew String(d.Trial5_Uc_11);
	labelTrial5_Uc_12->Text = gcnew String(d.Trial5_Uc_12);
	labelTrial5_Uc_13->Text = gcnew String(d.Trial5_Uc_13);
	labelTrial5_Uc_14->Text = gcnew String(d.Trial5_Uc_14);
	labelTrial5_Uc_15->Text = gcnew String(d.Trial5_Uc_15);
	labelTrial5_Uc_16->Text = gcnew String(d.Trial5_Uc_16);
	textBoxTrial5_Fo->Text = gcnew String(d.Trial5_Fo);
	textBoxTrial5_Q->Text = gcnew String(d.Trial5_Q);
	textBoxTrial5F2_F1->Text = gcnew String(d.Trial5F2_F1);  
}

void 单相铁心变压器特性的测试监控::LoadData(ST_单相铁心变压器特性的测试 &d) {
	 labelTrial2_Line1_I1->Text = gcnew String( d.Trial2_Line1_I1);
	 labelTrial2_Line1_U1->Text = gcnew String( d.Trial2_Line1_U1);
	 labelTrial2_Line1_W-> Text = gcnew String( d.Trial2_Line1_W );
	 labelTrial2_Line1_I2->Text = gcnew String( d.Trial2_Line1_I2);
	 labelTrial2_Line1_U2->Text = gcnew String( d.Trial2_Line1_U2);

	labelTrial2_Line2_I1->Text = gcnew String(d.Trial2_Line2_I1);   
	labelTrial2_Line2_U1->Text = gcnew String(d.Trial2_Line2_U1);   
	 labelTrial2_Line2_W->Text = gcnew String(d.Trial2_Line2_W );   
	labelTrial2_Line2_I2->Text = gcnew String(d.Trial2_Line2_I2);   
	labelTrial2_Line2_U2->Text = gcnew String(d.Trial2_Line2_U2);   

	labelTrial2_Line3_I1->Text = gcnew String(d.Trial2_Line3_I1);
	labelTrial2_Line3_U1->Text = gcnew String(d.Trial2_Line3_U1);
	labelTrial2_Line3_W->Text  = gcnew String(d.Trial2_Line3_W );
	labelTrial2_Line3_I2->Text = gcnew String(d.Trial2_Line3_I2);
	labelTrial2_Line3_U2->Text = gcnew String(d.Trial2_Line3_U2);

	labelTrial3_U1_1->Text  = gcnew String(d.Trial3_U1_1 );
	labelTrial3_U1_2->Text  = gcnew String(d.Trial3_U1_2 );
	labelTrial3_U1_3->Text  = gcnew String(d.Trial3_U1_3 );
	labelTrial3_U1_4->Text  = gcnew String(d.Trial3_U1_4 );
	labelTrial3_U1_5->Text  = gcnew String(d.Trial3_U1_5 );
	labelTrial3_U1_6->Text  = gcnew String(d.Trial3_U1_6 );
	labelTrial3_U1_7->Text  = gcnew String(d.Trial3_U1_7 );
	labelTrial3_U1_8->Text  = gcnew String(d.Trial3_U1_8 );
	labelTrial3_U1_9->Text  = gcnew String(d.Trial3_U1_9 );
	labelTrial3_U1_10->Text = gcnew String(d.Trial3_U1_10);

	labelTrial3_U20_1->Text  = gcnew String(d.Trial3_U20_1 );
	labelTrial3_U20_2->Text  = gcnew String(d.Trial3_U20_2 );
	labelTrial3_U20_3->Text  = gcnew String(d.Trial3_U20_3 );
	labelTrial3_U20_4->Text  = gcnew String(d.Trial3_U20_4 );
	labelTrial3_U20_5->Text  = gcnew String(d.Trial3_U20_5 );
	labelTrial3_U20_6->Text  = gcnew String(d.Trial3_U20_6 );
	labelTrial3_U20_7->Text  = gcnew String(d.Trial3_U20_7 );
	labelTrial3_U20_8->Text  = gcnew String(d.Trial3_U20_8 );
	labelTrial3_U20_9->Text  = gcnew String(d.Trial3_U20_9 );
	labelTrial3_U20_10->Text = gcnew String(d.Trial3_U20_10);

	labelTrial3_I10_1->Text  = gcnew String(d.Trial3_I10_1 );
	labelTrial3_I10_2->Text  = gcnew String(d.Trial3_I10_2 );
	labelTrial3_I10_3->Text  = gcnew String(d.Trial3_I10_3 );
	labelTrial3_I10_4->Text  = gcnew String(d.Trial3_I10_4 );
	labelTrial3_I10_5->Text  = gcnew String(d.Trial3_I10_5 );
	labelTrial3_I10_6->Text  = gcnew String(d.Trial3_I10_6 );
	labelTrial3_I10_7->Text  = gcnew String(d.Trial3_I10_7 );
	labelTrial3_I10_8->Text  = gcnew String(d.Trial3_I10_8 );
	labelTrial3_I10_9->Text  = gcnew String(d.Trial3_I10_9 );
	labelTrial3_I10_10->Text = gcnew String(d.Trial3_I10_10);


	textBox结论->Text = gcnew String(d.summing_up);


}
 
void 单相电度表实验监控::LoadData(ST_单相电度表实验 &d) {

	textBoxTrial1_IN->Text = gcnew String(d.Trial1_IN);
	textBoxTrial1_N->Text = gcnew String(d.Trial1_N);
	textBoxTrial1_UN->Text = gcnew String(d.Trial1_UN);
	textBoxTrial1_accuracy->Text = gcnew String( d.Trial1_accuracy);
	labelTrial1_mea_V->Text = gcnew String(d.Trial1_mea_V);
	labelTrial1_mea_I->Text = gcnew String(d.Trial1_mea_I);
	labelTrial1_mea_P->Text = gcnew String(d.Trial1_mea_P);
	textBoxTrial1_mea_time->Text = gcnew String(d.Trial1_mea_time);
	textBoxTrial1_mea_n->Text  = gcnew String(d.Trial1_mea_n);
	textBoxTrial1_cal_meaW->Text  = gcnew String(d.Trial1_cal_meaW);
	textBoxTrial1_cal_calW->Text = gcnew String(d.Trial1_cal_calW);
	textBoxTrial1_cal_WW->Text = gcnew String(d.Trial1_cal_WW);
	textBoxTrial1_cal_N->Text = gcnew String( d.Trial1_cal_N);
}

void 三相交流电路电压电流的测量监控::LoadData(ST_三相交流电路电压电流的测量 &d) {

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


void 日光灯功率因数的提高监控::LoadData(ST_日光灯功率因数的提高 &d) {

	labelTrial1_Mea_U->Text= gcnew String(d.Trial1_Mea_U); 
	 labelTrial1_Mea_UR->Text = gcnew String(d.Trial1_Mea_UR);
	 labelTrial1_Mea_UC->Text= gcnew String(d.Trial1_Mea_UC);
	textBoxTrial1_Cal_U->Text= gcnew String(d.Trial1_Cal_U); 
	 textBoxTrial1_Mea_DU->Text= gcnew String(d.Trial1_Mea_DU);
	 textBoxTrial1_Cal_UU->Text = gcnew String(d.Trial1_Cal_UU);

	labelTrial2_P_line1->Text = gcnew String(d.Trial2_P_line1);


	labelTrial2_P_line2->Text = gcnew String(d.Trial2_P_line2);
	textBoxTrial2_cos_line1->Text = gcnew String(d.Trial2_cos_line1);
	textBoxTrial2_cos_line2->Text = gcnew String(d.Trial2_cos_line2);
	labelTrial2_I_line1->Text = gcnew String(d.Trial2_I_line1 );
	labelTrial2_I_line2->Text = gcnew String(d.Trial2_I_line2 );
	labelTrial2_U_line1->Text = gcnew String(d.Trial2_U_line1 );
	labelTrial2_U_line2->Text = gcnew String(d.Trial2_U_line2 );
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

void 回转器监控::LoadData(ST_回转器 &d) {

	labelTrial1_U1_line1->Text = gcnew String(d.Trial1_U1_line1);
	labelTrial1_U1_line2->Text = gcnew String(d.Trial1_U1_line2);
	labelTrial1_U1_line3->Text = gcnew String(d.Trial1_U1_line3);
	labelTrial1_U1_line4->Text = gcnew String(d.Trial1_U1_line4);
	labelTrial1_U1_line5->Text = gcnew String(d.Trial1_U1_line5);
	labelTrial1_U1_line6->Text = gcnew String(d.Trial1_U1_line6);
	labelTrial1_U1_line7->Text = gcnew String(d.Trial1_U1_line7);

	labelTrial1_U2_line1->Text = gcnew String(d.Trial1_U2_line1);
	labelTrial1_U2_line2->Text = gcnew String(d.Trial1_U2_line2);
	labelTrial1_U2_line3->Text = gcnew String(d.Trial1_U2_line3);
	labelTrial1_U2_line4->Text = gcnew String(d.Trial1_U2_line4);
	labelTrial1_U2_line5->Text = gcnew String(d.Trial1_U2_line5);
	labelTrial1_U2_line6->Text = gcnew String(d.Trial1_U2_line6);
	labelTrial1_U2_line7->Text = gcnew String(d.Trial1_U2_line7);

	labelTrial1_I1_line1->Text = gcnew String(d.Trial1_I1_line1);
	labelTrial1_I1_line2->Text = gcnew String(d.Trial1_I1_line2);
	labelTrial1_I1_line3->Text = gcnew String(d.Trial1_I1_line3);
	labelTrial1_I1_line4->Text = gcnew String(d.Trial1_I1_line4);
	labelTrial1_I1_line5->Text = gcnew String(d.Trial1_I1_line5);
	labelTrial1_I1_line6->Text = gcnew String(d.Trial1_I1_line6);
	labelTrial1_I1_line7->Text = gcnew String(d.Trial1_I1_line7);

	labelTrial1_I2_line1->Text = gcnew String(d.Trial1_I2_line1);
	labelTrial1_I2_line2->Text = gcnew String(d.Trial1_I2_line2);
	labelTrial1_I2_line3->Text = gcnew String(d.Trial1_I2_line3);
	labelTrial1_I2_line4->Text = gcnew String(d.Trial1_I2_line4);
	labelTrial1_I2_line5->Text = gcnew String(d.Trial1_I2_line5);
	labelTrial1_I2_line6->Text = gcnew String(d.Trial1_I2_line6);
	labelTrial1_I2_line7->Text = gcnew String(d.Trial1_I2_line7);

	textBoxTrial1_G1_line1->Text = gcnew String(d.Trial1_G1_line1);
	textBoxTrial1_G1_line2->Text = gcnew String(d.Trial1_G1_line2);
	textBoxTrial1_G1_line3->Text = gcnew String(d.Trial1_G1_line3);
	textBoxTrial1_G1_line4->Text = gcnew String(d.Trial1_G1_line4);
	textBoxTrial1_G1_line5->Text = gcnew String(d.Trial1_G1_line5);
	textBoxTrial1_G1_line6->Text = gcnew String(d.Trial1_G1_line6);
	textBoxTrial1_G1_line7->Text = gcnew String(d.Trial1_G1_line7);

	textBoxTrial1_G2_line1->Text = gcnew String(d.Trial1_G2_line1);
	textBoxTrial1_G2_line2->Text = gcnew String(d.Trial1_G2_line2);
	textBoxTrial1_G2_line3->Text = gcnew String(d.Trial1_G2_line3);
	textBoxTrial1_G2_line4->Text = gcnew String(d.Trial1_G2_line4);
	textBoxTrial1_G2_line5->Text = gcnew String(d.Trial1_G2_line5);
	textBoxTrial1_G2_line6->Text = gcnew String(d.Trial1_G2_line6);
	textBoxTrial1_G2_line7->Text = gcnew String(d.Trial1_G2_line7);

	textBoxTrial1_GAver_line1->Text = gcnew String(d.Trial1_GAver_line1);
	textBoxTrial1_GAver_line2->Text = gcnew String(d.Trial1_GAver_line2);
	textBoxTrial1_GAver_line3->Text = gcnew String(d.Trial1_GAver_line3);
	textBoxTrial1_GAver_line4->Text = gcnew String(d.Trial1_GAver_line4);
	textBoxTrial1_GAver_line5->Text = gcnew String(d.Trial1_GAver_line5);
	textBoxTrial1_GAver_line6->Text = gcnew String(d.Trial1_GAver_line6);
	textBoxTrial1_GAver_line7->Text = gcnew String(d.Trial1_GAver_line7);


	labelTrial2_F200_line1->Text = gcnew String(d.Trial2_F200_line1);
	labelTrial2_F200_line2->Text = gcnew String(d.Trial2_F200_line2);
	labelTrial2_F200_line3->Text = gcnew String(d.Trial2_F200_line3);
	textBoxTrial2_F200_line4->Text = gcnew String(d.Trial2_F200_line4);
	textBoxTrial2_F200_line5->Text = gcnew String(d.Trial2_F200_line5);
	textBoxTrial2_F200_line6->Text = gcnew String(d.Trial2_F200_line6);
	textBoxTrial2_F200_line7->Text = gcnew String(d.Trial2_F200_line7);

	labelTrial2_F400_line1->Text = gcnew String(d.Trial2_F400_line1); 
	labelTrial2_F400_line2->Text = gcnew String(d.Trial2_F400_line2); 
	labelTrial2_F400_line3->Text = gcnew String(d.Trial2_F400_line3); 
	textBoxTrial2_F400_line4->Text = gcnew String(d.Trial2_F400_line4); 
	textBoxTrial2_F400_line5->Text = gcnew String(d.Trial2_F400_line5); 
	textBoxTrial2_F400_line6->Text = gcnew String(d.Trial2_F400_line6); 
	textBoxTrial2_F400_line7->Text = gcnew String(d.Trial2_F400_line7); 

	labelTrial2_F500_line1->Text = gcnew String(d.Trial2_F500_line1); 
	labelTrial2_F500_line2->Text = gcnew String(d.Trial2_F500_line2); 
	labelTrial2_F500_line3->Text = gcnew String(d.Trial2_F500_line3); 
	textBoxTrial2_F500_line4->Text = gcnew String(d.Trial2_F500_line4);
	textBoxTrial2_F500_line5->Text = gcnew String(d.Trial2_F500_line5);
	textBoxTrial2_F500_line6->Text = gcnew String(d.Trial2_F500_line6); 
	textBoxTrial2_F500_line7->Text = gcnew String(d.Trial2_F500_line7);

	labelTrial2_F700_line1->Text = gcnew String(d.Trial2_F700_line1); 
	labelTrial2_F700_line2->Text = gcnew String(d.Trial2_F700_line2); 
	labelTrial2_F700_line3->Text = gcnew String(d.Trial2_F700_line3); 
	textBoxTrial2_F700_line4->Text = gcnew String(d.Trial2_F700_line4); 
	textBoxTrial2_F700_line5->Text = gcnew String(d.Trial2_F700_line5); 
	textBoxTrial2_F700_line6->Text = gcnew String(d.Trial2_F700_line6); 
	textBoxTrial2_F700_line7->Text = gcnew String(d.Trial2_F700_line7); 

	labelTrial2_F800_line1->Text= gcnew String(d.Trial2_F800_line1); 
	labelTrial2_F800_line2->Text= gcnew String(d.Trial2_F800_line2); 
	labelTrial2_F800_line3->Text= gcnew String(d.Trial2_F800_line3); 
	textBoxTrial2_F800_line4->Text = gcnew String(d.Trial2_F800_line4); 
	textBoxTrial2_F800_line5->Text = gcnew String(d.Trial2_F800_line5); 
	textBoxTrial2_F800_line6->Text = gcnew String(d.Trial2_F800_line6); 
	textBoxTrial2_F800_line7->Text = gcnew String(d.Trial2_F800_line7); 


	labelTrial2_F900_line1->Text = gcnew String(d.Trial2_F900_line1);
	labelTrial2_F900_line2->Text = gcnew String(d.Trial2_F900_line2);
	labelTrial2_F900_line3->Text = gcnew String(d.Trial2_F900_line3);
	textBoxTrial2_F900_line4->Text = gcnew String(d.Trial2_F900_line4);
	textBoxTrial2_F900_line5->Text = gcnew String(d.Trial2_F900_line5);
	textBoxTrial2_F900_line6->Text = gcnew String(d.Trial2_F900_line6);
	textBoxTrial2_F900_line7->Text = gcnew String(d.Trial2_F900_line7);

	labelTrial2_F1000_line1->Text = gcnew String(d.Trial2_F1000_line1);
	labelTrial2_F1000_line2->Text = gcnew String(d.Trial2_F1000_line2);
	labelTrial2_F1000_line3->Text = gcnew String(d.Trial2_F1000_line3);
	textBoxTrial2_F1000_line4->Text = gcnew String(d.Trial2_F1000_line4);
	textBoxTrial2_F1000_line5->Text = gcnew String(d.Trial2_F1000_line5);
	textBoxTrial2_F1000_line6->Text = gcnew String(d.Trial2_F1000_line6);
	textBoxTrial2_F1000_line7->Text = gcnew String(d.Trial2_F1000_line7);

	labelTrial2_F1200_line1->Text = gcnew String(d.Trial2_F1200_line1); 
	labelTrial2_F1200_line2->Text = gcnew String(d.Trial2_F1200_line2); 
	labelTrial2_F1200_line3->Text = gcnew String(d.Trial2_F1200_line3); 
	textBoxTrial2_F1200_line4->Text = gcnew String(d.Trial2_F1200_line4);
	textBoxTrial2_F1200_line5->Text = gcnew String(d.Trial2_F1200_line5);
	textBoxTrial2_F1200_line6->Text = gcnew String(d.Trial2_F1200_line6);
	textBoxTrial2_F1200_line7->Text = gcnew String(d.Trial2_F1200_line7);

	labelTrial2_F1300_line1->Text = gcnew String(d.Trial2_F1300_line1); 
	labelTrial2_F1300_line2->Text = gcnew String(d.Trial2_F1300_line2); 
	labelTrial2_F1300_line3->Text = gcnew String(d.Trial2_F1300_line3); 
	textBoxTrial2_F1300_line4->Text = gcnew String(d.Trial2_F1300_line4);
	textBoxTrial2_F1300_line5->Text = gcnew String(d.Trial2_F1300_line5);
	textBoxTrial2_F1300_line6->Text = gcnew String(d.Trial2_F1300_line6);
	textBoxTrial2_F1300_line7->Text = gcnew String(d.Trial2_F1300_line7);

	labelTrial2_F1500_line1->Text = gcnew String(d.Trial2_F1500_line1) ;
	labelTrial2_F1500_line2->Text = gcnew String(d.Trial2_F1500_line2) ;
	labelTrial2_F1500_line3->Text = gcnew String(d.Trial2_F1500_line3) ;
	textBoxTrial2_F1500_line4->Text = gcnew String(d.Trial2_F1500_line4) ;
	textBoxTrial2_F1500_line5->Text = gcnew String(d.Trial2_F1500_line5) ;
	textBoxTrial2_F1500_line6->Text = gcnew String(d.Trial2_F1500_line6) ;
	textBoxTrial2_F1500_line7->Text = gcnew String(d.Trial2_F1500_line7) ;

	labelTrial2_F2000_line1->Text = gcnew String(d.Trial2_F2000_line1) ;
	labelTrial2_F2000_line2->Text = gcnew String(d.Trial2_F2000_line2) ;
	labelTrial2_F2000_line3->Text = gcnew String(d.Trial2_F2000_line3) ;
	textBoxTrial2_F2000_line4->Text = gcnew String(d.Trial2_F2000_line4) ;
	textBoxTrial2_F2000_line5->Text = gcnew String(d.Trial2_F2000_line5) ;
	textBoxTrial2_F2000_line6->Text = gcnew String(d.Trial2_F2000_line6) ;
	textBoxTrial2_F2000_line7->Text = gcnew String(d.Trial2_F2000_line7) ;

	labelTrial3_200->Text = gcnew String(d.Trial3_200); 
	labelTrial3_400->Text = gcnew String(d.Trial3_400); 
	labelTrial3_500->Text = gcnew String(d.Trial3_500); 
	labelTrial3_700->Text = gcnew String(d.Trial3_700); 
	labelTrial3_800->Text = gcnew String(d.Trial3_800); 
	labelTrial3_900->Text = gcnew String(d.Trial3_900); 
	labelTrial3_1000->Text = gcnew String(d.Trial3_1000);
	labelTrial3_1200->Text = gcnew String(d.Trial3_1200);
	labelTrial3_1300->Text = gcnew String(d.Trial3_1300);
	labelTrial3_1500->Text = gcnew String(d.Trial3_1500);
	labelTrial3_2000->Text = gcnew String(d.Trial3_2000);




}


void 三相电路功率的测量监控::LoadData(ST_三相电路功率的测量 &d) {


	labelTrial1_PA_1->Text = gcnew String(d.Trial1_PA_1);
	labelTrial1_PA_2->Text = gcnew String(d.Trial1_PA_2);
	labelTrial1_PB_1->Text = gcnew String(d.Trial1_PB_1);
	labelTrial1_PB_2->Text = gcnew String(d.Trial1_PB_2);
	labelTrial1_PC_1->Text = gcnew String(d.Trial1_PC_1);
	labelTrial1_PC_2->Text = gcnew String(d.Trial1_PC_2);
	textBoxTrial1_P_1->Text = gcnew String(d.Trial1_P_1);
	textBoxTrial1_P_2->Text = gcnew String(d.Trial1_P_2);

	labelTrial2_P1_1->Text = gcnew String(d.Trial2_P1_1);
	labelTrial2_P1_2->Text = gcnew String(d.Trial2_P1_2);
	labelTrial2_P1_3->Text = gcnew String(d.Trial2_P1_3);
	labelTrial2_P1_4->Text = gcnew String(d.Trial2_P1_4);
	labelTrial2_P2_1->Text = gcnew String(d.Trial2_P2_1);
	labelTrial2_P2_2->Text = gcnew String(d.Trial2_P2_2);
	labelTrial2_P2_3->Text = gcnew String(d.Trial2_P2_3);
	labelTrial2_P2_4->Text = gcnew String(d.Trial2_P2_4);
	textBoxTrial2_P_1->Text = gcnew String(d.Trial2_P_1);
	textBoxTrial2_P_2->Text = gcnew String(d.Trial2_P_2);
	textBoxTrial2_P_3->Text = gcnew String(d.Trial2_P_3);
	textBoxTrial2_P_4->Text = gcnew String(d.Trial2_P_4);


	labelTrial3_U_1->Text = gcnew String(d.Trial3_U_1);  
	labelTrial3_U_2->Text = gcnew String(d.Trial3_U_2);  
	labelTrial3_U_3->Text = gcnew String(d.Trial3_U_3);  
	labelTrial3_I_1->Text = gcnew String(d.Trial3_I_1);  
	labelTrial3_I_2->Text = gcnew String(d.Trial3_I_2);  
	labelTrial3_I_3->Text = gcnew String(d.Trial3_I_3);  
	labelTrial3_Q_1->Text = gcnew String(d.Trial3_Q_1);  
	labelTrial3_Q_2->Text = gcnew String(d.Trial3_Q_2);  
	labelTrial3_Q_3->Text = gcnew String(d.Trial3_Q_3);  
	textBoxTrial3_QQ_1->Text = gcnew String(d.Trial3_QQ_1);
	textBoxTrial3_QQ_2->Text = gcnew String(d.Trial3_QQ_2);
	textBoxTrial3_QQ_3->Text = gcnew String(d.Trial3_QQ_3);
}

void 负阻抗变换器监控::LoadData(ST_负阻抗变换器 &d) {



	labelTrial1_300_U1->Text  = gcnew String(d.Trial1_300_U1); 
	labelTrial1_300_I1->Text = gcnew String( d.Trial1_300_I1);  
	textBoxTrial1_300_R_->Text  = gcnew String(d.Trial1_300_R_); 
	labelTrial1_600_U1->Text  = gcnew String(d.Trial1_600_U1); 
	labelTrial1_600_I1->Text  = gcnew String(d.Trial1_600_I1); 
	textBoxTrial1_600_R_->Text = gcnew String( d.Trial1_600_R_); 

	string Name = string(MONITORTEMP) + "负阻抗变换器";
	String^ ImageLocation1 = gcnew String(string(Name + "1.bmp").c_str());
	String^ ImageLocation2 = gcnew String(string(Name + "2.bmp").c_str());
	//先删除原来有的文件
	IO::File::Delete(ImageLocation1);
	IO::File::Delete(ImageLocation2);
	fileSql f;
	f.Writefile(T_to_string(ImageLocation1), string(d.Trial2_Bmp_1, sizeof(d.Trial2_Bmp_1)));
	f.Writefile(T_to_string(ImageLocation2), string(d.Trial2_Bmp_2, sizeof(d.Trial2_Bmp_2)));

	pictureBox_1->ImageLocation = ImageLocation1;
	pictureBox_2->ImageLocation = ImageLocation2;
}


void RC网络的频率特性监控::LoadData(ST_RC网络的频率特性 &d) {

	textBoxTrial1_F1->Text = gcnew String(d.Trial1_F1);
	textBoxTrial1_F2->Text = gcnew String(d.Trial1_F2);
	textBoxTrial1_F3->Text = gcnew String(d.Trial1_F3);
	textBoxTrial1_F4->Text = gcnew String(d.Trial1_F4);
	textBoxTrial1_F5->Text = gcnew String(d.Trial1_F5);
	textBoxTrial1_F6->Text = gcnew String(d.Trial1_F6);
	textBoxTrial1_F7->Text = gcnew String(d.Trial1_F7);
	textBoxTrial1_F8->Text = gcnew String(d.Trial1_F8);

	labelTrial1_Uo1_1->Text = gcnew String(d.Trial1_Uo1_1);
	labelTrial1_Uo1_2->Text = gcnew String(d.Trial1_Uo1_2);
	labelTrial1_Uo1_3->Text = gcnew String(d.Trial1_Uo1_3);
	labelTrial1_Uo1_4->Text = gcnew String(d.Trial1_Uo1_4);
	labelTrial1_Uo1_5->Text = gcnew String(d.Trial1_Uo1_5);
	labelTrial1_Uo1_6->Text = gcnew String(d.Trial1_Uo1_6);
	labelTrial1_Uo1_7->Text = gcnew String(d.Trial1_Uo1_7);
	labelTrial1_Uo1_8->Text = gcnew String(d.Trial1_Uo1_8);

	labelTrial1_Uo2_1->Text = gcnew String(d.Trial1_Uo2_1);
	labelTrial1_Uo2_2->Text = gcnew String(d.Trial1_Uo2_2);
	labelTrial1_Uo2_3->Text = gcnew String(d.Trial1_Uo2_3);
	labelTrial1_Uo2_4->Text = gcnew String(d.Trial1_Uo2_4);
	labelTrial1_Uo2_5->Text = gcnew String(d.Trial1_Uo2_5);
	labelTrial1_Uo2_6->Text = gcnew String(d.Trial1_Uo2_6);
	labelTrial1_Uo2_7->Text = gcnew String(d.Trial1_Uo2_7);
	labelTrial1_Uo2_8->Text = gcnew String(d.Trial1_Uo2_8);

	textBoxTrial2_F1->Text = gcnew String(d.Trial2_F1);
	textBoxTrial2_F2->Text = gcnew String(d.Trial2_F2);
	textBoxTrial2_F3->Text = gcnew String(d.Trial2_F3);
	textBoxTrial2_F4->Text = gcnew String(d.Trial2_F4);
	textBoxTrial2_F5->Text = gcnew String(d.Trial2_F5);
	textBoxTrial2_F6->Text = gcnew String(d.Trial2_F6);
	textBoxTrial2_F7->Text = gcnew String(d.Trial2_F7);
	textBoxTrial2_F8->Text = gcnew String(d.Trial2_F8);

	textBoxTrial2_T1->Text = gcnew String(d.Trial2_T1);
	textBoxTrial2_T2->Text = gcnew String(d.Trial2_T2);
	textBoxTrial2_T3->Text = gcnew String(d.Trial2_T3);
	textBoxTrial2_T4->Text = gcnew String(d.Trial2_T4);
	textBoxTrial2_T5->Text = gcnew String(d.Trial2_T5);
	textBoxTrial2_T6->Text = gcnew String(d.Trial2_T6);
	textBoxTrial2_T7->Text = gcnew String(d.Trial2_T7);
	textBoxTrial2_T8->Text = gcnew String(d.Trial2_T8);

	textBoxTrial2_τ1->Text = gcnew String(d.Trial2_τ1);
	textBoxTrial2_τ2->Text = gcnew String(d.Trial2_τ2);
	textBoxTrial2_τ3->Text = gcnew String(d.Trial2_τ3);
	textBoxTrial2_τ4->Text = gcnew String(d.Trial2_τ4);
	textBoxTrial2_τ5->Text = gcnew String(d.Trial2_τ5);
	textBoxTrial2_τ6->Text = gcnew String(d.Trial2_τ6);
	textBoxTrial2_τ7->Text = gcnew String(d.Trial2_τ7);
	textBoxTrial2_τ8->Text = gcnew String(d.Trial2_τ8);

	textBoxTrial2_φ1->Text = gcnew String(d.Trial2_φ1);
	textBoxTrial2_φ2->Text = gcnew String(d.Trial2_φ2);
	textBoxTrial2_φ3->Text = gcnew String(d.Trial2_φ3);
	textBoxTrial2_φ4->Text = gcnew String(d.Trial2_φ4);
	textBoxTrial2_φ5->Text = gcnew String(d.Trial2_φ5);
	textBoxTrial2_φ6->Text = gcnew String(d.Trial2_φ6);
	textBoxTrial2_φ7->Text = gcnew String(d.Trial2_φ7);
	textBoxTrial2_φ8->Text = gcnew String(d.Trial2_φ8);

	textBoxTrial2_τ2_1->Text = gcnew String(d.Trial2_τ2_1);
	textBoxTrial2_τ2_2->Text = gcnew String(d.Trial2_τ2_2);
	textBoxTrial2_τ2_3->Text = gcnew String(d.Trial2_τ2_3);
	textBoxTrial2_τ2_4->Text = gcnew String(d.Trial2_τ2_4);
	textBoxTrial2_τ2_5->Text = gcnew String(d.Trial2_τ2_5);
	textBoxTrial2_τ2_6->Text = gcnew String(d.Trial2_τ2_6);
	textBoxTrial2_τ2_7->Text = gcnew String(d.Trial2_τ2_7);
	textBoxTrial2_τ2_8->Text = gcnew String(d.Trial2_τ2_8);

	textBoxTrial2_φ2_1->Text = gcnew String(d.Trial2_φ2_1);
	textBoxTrial2_φ2_2->Text = gcnew String(d.Trial2_φ2_2);
	textBoxTrial2_φ2_3->Text = gcnew String(d.Trial2_φ2_3);
	textBoxTrial2_φ2_4->Text = gcnew String(d.Trial2_φ2_4);
	textBoxTrial2_φ2_5->Text = gcnew String(d.Trial2_φ2_5);
	textBoxTrial2_φ2_6->Text = gcnew String(d.Trial2_φ2_6);
	textBoxTrial2_φ2_7->Text = gcnew String(d.Trial2_φ2_7);
	textBoxTrial2_φ2_8->Text = gcnew String(d.Trial2_φ2_8);

	textBox结论->Text = gcnew String(d.summing_up);
}

void 仪表量程的扩展监控::LoadData(ST_仪表量程的扩展 &d) {

	textBoxTrial1_1->Text = gcnew String(d.Trial1_1);
	textBoxTrial1_2->Text = gcnew String(d.Trial1_2);
	textBoxTrial1_3->Text = gcnew String(d.Trial1_3);
	textBoxTrial1_4->Text = gcnew String(d.Trial1_4);
	textBoxTrial1_5->Text = gcnew String(d.Trial1_5);
	textBoxTrial1_6->Text = gcnew String(d.Trial1_6);

	textBoxTrial2_1->Text = gcnew String(d.Trial2_1);
	textBoxTrial2_2->Text = gcnew String(d.Trial2_2);
	textBoxTrial2_3->Text = gcnew String(d.Trial2_3);
	textBoxTrial2_4->Text = gcnew String(d.Trial2_4);
	textBoxTrial2_5->Text = gcnew String(d.Trial2_5);
	textBoxTrial2_6->Text = gcnew String(d.Trial2_6);

	textBoxTrial3_1->Text = gcnew String(d.Trial3_1);
	textBoxTrial3_2->Text = gcnew String(d.Trial3_2);
	textBoxTrial3_3->Text = gcnew String(d.Trial3_3);
	textBoxTrial3_4->Text = gcnew String(d.Trial3_4);
	textBoxTrial3_5->Text = gcnew String(d.Trial3_5);
	textBoxTrial3_6->Text = gcnew String(d.Trial3_6);
}

void 基本电工仪表的使用与测量误差的计算监控::LoadData(ST_基本电工仪表的使用与测量误差的计算 &d) {

	labelTrial1_IA_5mA->Text = gcnew String(d.Trial1_IA_5mA);
	labelTrial1_IA_5V->Text = gcnew String(d.Trial1_IA_5V);
	labelTrial1_IA1_5mA->Text  = gcnew String(d.Trial1_IA1_5mA);
	labelTrial1_IA1_5V->Text = gcnew String(d.Trial1_IA1_5V);
	textBoxTrial1_RB_5mA->Text = gcnew String(d.Trial1_RB_5mA);
	textBoxTrial1_RB_5V->Text = gcnew String(d.Trial1_RB_5V);
	textBoxTrial1_R1_5mA->Text = gcnew String(d.Trial1_R1_5mA);
	textBoxTrial1_R1_5V->Text = gcnew String(d.Trial1_R1_5V);
	textBoxTrial1_RA_5mA->Text = gcnew String(d.Trial1_RA_5mA);
	textBoxTrial1_RA_5V->Text = gcnew String(d.Trial1_RA_5V);
}
void 功率因数及相序的测量监控::LoadData(ST_功率因数及相序的测量 &d) {
	 labelTrial2_U_1->Text = gcnew String(d.Trial2_U_1);
	 labelTrial2_U_2->Text = gcnew String(d.Trial2_U_2);
	 labelTrial2_U_3->Text = gcnew String(d.Trial2_U_3);
	 labelTrial2_U_4->Text = gcnew String(d.Trial2_U_4);

	labelTrial2_UR_1->Text = gcnew String(d.Trial2_UR_1);
	labelTrial2_UR_2->Text = gcnew String(d.Trial2_UR_2);
	labelTrial2_UR_3->Text = gcnew String(d.Trial2_UR_3);
	labelTrial2_UR_4->Text = gcnew String(d.Trial2_UR_4);

	labelTrial2_UL_1->Text = gcnew String(d.Trial2_UL_1);
	labelTrial2_UL_2->Text = gcnew String(d.Trial2_UL_2);
	labelTrial2_UL_3->Text = gcnew String(d.Trial2_UL_3);
	labelTrial2_UL_4->Text = gcnew String(d.Trial2_UL_4);

	labelTrial2_UC_1->Text = gcnew String(d.Trial2_UC_1);
	labelTrial2_UC_2->Text = gcnew String(d.Trial2_UC_2);
	labelTrial2_UC_3->Text = gcnew String(d.Trial2_UC_3);
	labelTrial2_UC_4->Text = gcnew String(d.Trial2_UC_4);

	labelTrial2_I_1->Text = gcnew String(d.Trial2_I_1);
	labelTrial2_I_2->Text = gcnew String(d.Trial2_I_2);
	labelTrial2_I_3->Text = gcnew String(d.Trial2_I_3);
	labelTrial2_I_4->Text = gcnew String(d.Trial2_I_4);

	 labelTrial2_P_1->Text = gcnew String(d.Trial2_P_1);
	 labelTrial2_P_2->Text = gcnew String(d.Trial2_P_2);
	 labelTrial2_P_3->Text = gcnew String(d.Trial2_P_3);
	 labelTrial2_P_4->Text = gcnew String(d.Trial2_P_4);

	textBoxTrial2_φ_1->Text = gcnew String(d.Trial2_φ_1);
	textBoxTrial2_φ_2->Text = gcnew String(d.Trial2_φ_2);
	textBoxTrial2_φ_3->Text = gcnew String(d.Trial2_φ_3);
	textBoxTrial2_φ_4->Text = gcnew String(d.Trial2_φ_4);

	textBoxTrial2_Load_1->Text = gcnew String(d.Trial2_Load_1);
	textBoxTrial2_Load_2->Text = gcnew String(d.Trial2_Load_2);
	textBoxTrial2_Load_3->Text = gcnew String(d.Trial2_Load_3);
	textBoxTrial2_Load_4->Text = gcnew String(d.Trial2_Load_4);

}