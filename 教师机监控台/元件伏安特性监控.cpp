#include "元件伏安特性监控.h"
#include "E:/clr中腾/电工电路试验台/电工电路试验台/tool/gradeSubmit.h"

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
	label线性U10->Text =gcnew String(data.线性U10);
	textBox线性结论->Text = gcnew String(data.线性summing_up);

	/*******白炽灯******/
	textBox白炽SU1->Text =  gcnew String(data.白炽SU1) ;
	textBox白炽SU2->Text =  gcnew String(data.白炽SU2) ;
	textBox白炽SU3->Text =  gcnew String(data.白炽SU3) ;
	textBox白炽SU4->Text =  gcnew String(data.白炽SU4) ;
	textBox白炽SU5->Text =  gcnew String(data.白炽SU5) ;
	textBox白炽SU6->Text =  gcnew String(data.白炽SU6) ;
	textBox白炽SU7->Text =  gcnew String(data.白炽SU7) ;
	textBox白炽SU8->Text =  gcnew String(data.白炽SU8) ;
	textBox白炽SU9->Text =  gcnew String(data.白炽SU9) ;
	textBox白炽SU10->Text = gcnew String(data.白炽SU10) ;

	label白炽I1->Text = gcnew String(data.白炽I1);
	label白炽I2->Text = gcnew String(data.白炽I2);
	label白炽I3->Text = gcnew String(data.白炽I3);
	label白炽I4->Text = gcnew String(data.白炽I4);
	label白炽I5->Text = gcnew String(data.白炽I5);
	label白炽I6->Text = gcnew String(data.白炽I6);
	label白炽I7->Text = gcnew String(data.白炽I7);
	label白炽I8->Text = gcnew String(data.白炽I8);
	label白炽I9->Text = gcnew String(data.白炽I9);
	label白炽I10->Text =gcnew String(data.白炽I10);


	label白炽U1->Text = gcnew String(data.白炽U1);
	label白炽U2->Text = gcnew String(data.白炽U2);
	label白炽U3->Text = gcnew String(data.白炽U3);
	label白炽U4->Text = gcnew String(data.白炽U4);
	label白炽U5->Text = gcnew String(data.白炽U5);
	label白炽U6->Text = gcnew String(data.白炽U6);
	label白炽U7->Text = gcnew String(data.白炽U7);
	label白炽U8->Text = gcnew String(data.白炽U8);
	label白炽U9->Text = gcnew String(data.白炽U9);
	label白炽U10->Text =gcnew String(data.白炽U10);
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
	textBox锗管ZSU10->Text =gcnew String(data.锗管ZSU10);

	label锗管ZI1->Text = gcnew String(data.锗管ZI1);
	label锗管ZI2->Text = gcnew String(data.锗管ZI2);
	label锗管ZI3->Text = gcnew String(data.锗管ZI3);
	label锗管ZI4->Text = gcnew String(data.锗管ZI4);
	label锗管ZI5->Text = gcnew String(data.锗管ZI5);
	label锗管ZI6->Text = gcnew String(data.锗管ZI6);
	label锗管ZI7->Text = gcnew String(data.锗管ZI7);
	label锗管ZI8->Text = gcnew String(data.锗管ZI8);
	label锗管ZI9->Text = gcnew String(data.锗管ZI9);
	label锗管ZI10->Text =gcnew String(data.锗管ZI10);


	label锗管ZU1->Text = gcnew String(data.锗管ZU1);
	label锗管ZU2->Text = gcnew String(data.锗管ZU2);
	label锗管ZU3->Text = gcnew String(data.锗管ZU3);
	label锗管ZU4->Text = gcnew String(data.锗管ZU4);
	label锗管ZU5->Text = gcnew String(data.锗管ZU5);
	label锗管ZU6->Text = gcnew String(data.锗管ZU6);
	label锗管ZU7->Text = gcnew String(data.锗管ZU7);
	label锗管ZU8->Text = gcnew String(data.锗管ZU8);
	label锗管ZU9->Text = gcnew String(data.锗管ZU9);
	label锗管ZU10->Text =gcnew String(data.锗管ZU10);

	textBox锗管FSU1->Text = gcnew String(data.锗管FSU1);
	textBox锗管FSU2->Text = gcnew String(data.锗管FSU2);
	textBox锗管FSU3->Text = gcnew String(data.锗管FSU3);
	textBox锗管FSU4->Text = gcnew String(data.锗管FSU4);
	textBox锗管FSU5->Text = gcnew String(data.锗管FSU5);
	textBox锗管FSU6->Text = gcnew String(data.锗管FSU6);
	textBox锗管FSU7->Text = gcnew String(data.锗管FSU7);
	textBox锗管FSU8->Text = gcnew String(data.锗管FSU8);
	textBox锗管FSU9->Text = gcnew String(data.锗管FSU9);
	textBox锗管FSU10->Text =gcnew String(data.锗管FSU10);


	label锗管FI1->Text =  gcnew String(data.锗管FI1);
	label锗管FI2->Text =  gcnew String(data.锗管FI2);
	label锗管FI3->Text =  gcnew String(data.锗管FI3);
	label锗管FI4->Text =  gcnew String(data.锗管FI4);
	label锗管FI5->Text =  gcnew String(data.锗管FI5);
	label锗管FI6->Text =  gcnew String(data.锗管FI6);
	label锗管FI7->Text =  gcnew String(data.锗管FI7);
	label锗管FI8->Text =  gcnew String(data.锗管FI8);
	label锗管FI9->Text =  gcnew String(data.锗管FI9);
	label锗管FI10->Text=  gcnew String(data.锗管FI10);


	label锗管FU1->Text =  gcnew String(data.锗管FU1);
	label锗管FU2->Text =  gcnew String(data.锗管FU2);
	label锗管FU3->Text =  gcnew String(data.锗管FU3);
	label锗管FU4->Text =  gcnew String(data.锗管FU4);
	label锗管FU5->Text =  gcnew String(data.锗管FU5);
	label锗管FU6->Text =  gcnew String(data.锗管FU6);
	label锗管FU7->Text =  gcnew String(data.锗管FU7);
	label锗管FU8->Text =  gcnew String(data.锗管FU8);
	label锗管FU9->Text =  gcnew String(data.锗管FU9);
	label锗管FU10->Text =gcnew String(data.锗管FU10);

	textBox锗管结论->Text = gcnew String(data.锗管summing_up);

	/**************s_硅管*****************/

	textBox硅管ZSU1->Text =  gcnew String(data.硅管ZSU1);
	textBox硅管ZSU2->Text =  gcnew String(data.硅管ZSU2);
	textBox硅管ZSU3->Text =  gcnew String(data.硅管ZSU3);
	textBox硅管ZSU4->Text =  gcnew String(data.硅管ZSU4);
	textBox硅管ZSU5->Text =  gcnew String(data.硅管ZSU5);
	textBox硅管ZSU6->Text =  gcnew String(data.硅管ZSU6);
	textBox硅管ZSU7->Text =  gcnew String(data.硅管ZSU7);
	textBox硅管ZSU8->Text =  gcnew String(data.硅管ZSU8);
	textBox硅管ZSU9->Text =  gcnew String(data.硅管ZSU9);
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
	label硅管ZI10->Text =gcnew String(data.硅管ZI10);


	label硅管ZU1->Text = gcnew String(data.硅管ZU1);
	label硅管ZU2->Text = gcnew String(data.硅管ZU2);
	label硅管ZU3->Text = gcnew String(data.硅管ZU3);
	label硅管ZU4->Text = gcnew String(data.硅管ZU4);
	label硅管ZU5->Text = gcnew String(data.硅管ZU5);
	label硅管ZU6->Text = gcnew String(data.硅管ZU6);
	label硅管ZU7->Text = gcnew String(data.硅管ZU7);
	label硅管ZU8->Text = gcnew String(data.硅管ZU8);
	label硅管ZU9->Text = gcnew String(data.硅管ZU9);
	label硅管ZU10->Text =gcnew String(data.硅管ZU10);

	textBox硅管FSU1->Text = gcnew String(data.硅管FSU1);
	textBox硅管FSU2->Text = gcnew String(data.硅管FSU2);
	textBox硅管FSU3->Text = gcnew String(data.硅管FSU3);
	textBox硅管FSU4->Text = gcnew String(data.硅管FSU4);
	textBox硅管FSU5->Text = gcnew String(data.硅管FSU5);
	textBox硅管FSU6->Text = gcnew String(data.硅管FSU6);
	textBox硅管FSU7->Text = gcnew String(data.硅管FSU7);
	textBox硅管FSU8->Text = gcnew String(data.硅管FSU8);
	textBox硅管FSU9->Text = gcnew String(data.硅管FSU9);
	textBox硅管FSU10->Text =gcnew String(data.硅管FSU10);

	label1硅管FI1->Text = gcnew String(data.硅管FI1);
	label1硅管FI2->Text = gcnew String(data.硅管FI2);
	label1硅管FI3->Text = gcnew String(data.硅管FI3);
	label1硅管FI4->Text = gcnew String(data.硅管FI4);
	label1硅管FI5->Text = gcnew String(data.硅管FI5);
	label1硅管FI6->Text = gcnew String(data.硅管FI6);
	label1硅管FI7->Text = gcnew String(data.硅管FI7);
	label1硅管FI8->Text = gcnew String(data.硅管FI8);
	label1硅管FI9->Text = gcnew String(data.硅管FI9);
	label1硅管FI10->Text =gcnew String(data.硅管FI10);


	label1硅管FU1->Text = gcnew String(data.硅管FU1);
	label1硅管FU2->Text = gcnew String(data.硅管FU2);
	label1硅管FU3->Text = gcnew String(data.硅管FU3);
	label1硅管FU4->Text = gcnew String(data.硅管FU4);
	label1硅管FU5->Text = gcnew String(data.硅管FU5);
	label1硅管FU6->Text = gcnew String(data.硅管FU6);
	label1硅管FU7->Text = gcnew String(data.硅管FU7);
	label1硅管FU8->Text = gcnew String(data.硅管FU8);
	label1硅管FU9->Text = gcnew String(data.硅管FU9);
	label1硅管FU10->Text =gcnew String(data.硅管FU10);

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
	textBox稳压ZSU10->Text =gcnew String(data.稳压ZSU10);

	label稳压ZI1->Text = gcnew String(data.稳压ZI1);
	label稳压ZI2->Text = gcnew String(data.稳压ZI2);
	label稳压ZI3->Text = gcnew String(data.稳压ZI3);
	label稳压ZI4->Text = gcnew String(data.稳压ZI4);
	label稳压ZI5->Text = gcnew String(data.稳压ZI5);
	label稳压ZI6->Text = gcnew String(data.稳压ZI6);
	label稳压ZI7->Text = gcnew String(data.稳压ZI7);
	label稳压ZI8->Text = gcnew String(data.稳压ZI8);
	label稳压ZI9->Text = gcnew String(data.稳压ZI9);
	label稳压ZI10->Text =gcnew String(data.稳压ZI10);


	label稳压ZU1->Text = gcnew String(data.稳压ZU1);
	label稳压ZU2->Text = gcnew String(data.稳压ZU2);
	label稳压ZU3->Text = gcnew String(data.稳压ZU3);
	label稳压ZU4->Text = gcnew String(data.稳压ZU4);
	label稳压ZU5->Text = gcnew String(data.稳压ZU5);
	label稳压ZU6->Text = gcnew String(data.稳压ZU6);
	label稳压ZU7->Text = gcnew String(data.稳压ZU7);
	label稳压ZU8->Text = gcnew String(data.稳压ZU8);
	label稳压ZU9->Text = gcnew String(data.稳压ZU9);
	label稳压ZU10->Text =gcnew String(data.稳压ZU10);

	textBox稳压FSU1->Text = gcnew String(data.稳压FSU1);
	textBox稳压FSU2->Text = gcnew String(data.稳压FSU2);
	textBox稳压FSU3->Text = gcnew String(data.稳压FSU3);
	textBox稳压FSU4->Text = gcnew String(data.稳压FSU4);
	textBox稳压FSU5->Text = gcnew String(data.稳压FSU5);
	textBox稳压FSU6->Text = gcnew String(data.稳压FSU6);
	textBox稳压FSU7->Text = gcnew String(data.稳压FSU7);
	textBox稳压FSU8->Text = gcnew String(data.稳压FSU8);
	textBox稳压FSU9->Text = gcnew String(data.稳压FSU9);
	textBox稳压FSU10->Text =gcnew String(data.稳压FSU10);

	label稳压FI1->Text = gcnew String(data.稳压FI1);
	label稳压FI2->Text = gcnew String(data.稳压FI2);
	label稳压FI3->Text = gcnew String(data.稳压FI3);
	label稳压FI4->Text = gcnew String(data.稳压FI4);
	label稳压FI5->Text = gcnew String(data.稳压FI5);
	label稳压FI6->Text = gcnew String(data.稳压FI6);
	label稳压FI7->Text = gcnew String(data.稳压FI7);
	label稳压FI8->Text = gcnew String(data.稳压FI8);
	label稳压FI9->Text = gcnew String(data.稳压FI9);
	label稳压FI10->Text =gcnew String(data.稳压FI10);


	label稳压FU1->Text = gcnew String(data.稳压ZU1);
	label稳压FU2->Text = gcnew String(data.稳压ZU2);
	label稳压FU3->Text = gcnew String(data.稳压ZU3);
	label稳压FU4->Text = gcnew String(data.稳压ZU4);
	label稳压FU5->Text = gcnew String(data.稳压ZU5);
	label稳压FU6->Text = gcnew String(data.稳压ZU6);
	label稳压FU7->Text = gcnew String(data.稳压ZU7);
	label稳压FU8->Text = gcnew String(data.稳压ZU8);
	label稳压FU9->Text = gcnew String(data.稳压ZU9);
	label稳压FU10->Text =gcnew String(data.稳压ZU10);

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
