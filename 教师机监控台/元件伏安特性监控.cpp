#include "Ԫ���������Լ��.h"
#include "E:/clr����/�繤��·����̨/�繤��·����̨/tool/gradeSubmit.h"

using namespace ��ʦ�����̨;
using namespace System::Windows::Forms::DataVisualization::Charting;

void Ԫ���������Լ��::This_Load(ST_Ԫ���������Բ��� &data) {
	/********ͼ���ʼ��*******/

	textBoxSU1->Text = gcnew String(data.����SU1);
	textBoxSU2->Text = gcnew String(data.����SU2);
	textBoxSU3->Text = gcnew String(data.����SU3);
	textBoxSU4->Text = gcnew String(data.����SU4);
	textBoxSU5->Text = gcnew String(data.����SU5);
	textBoxSU6->Text = gcnew String(data.����SU6);
	textBoxSU7->Text = gcnew String(data.����SU7);
	textBoxSU8->Text = gcnew String(data.����SU8);
	textBoxSU9->Text = gcnew String(data.����SU9);
	textBoxSU10->Text = gcnew String(data.����SU10);

	label����I1->Text = gcnew String(data.����I1);
	label����I2->Text = gcnew String(data.����I2);
	label����I3->Text = gcnew String(data.����I3);
	label����I4->Text = gcnew String(data.����I4);
	label����I5->Text = gcnew String(data.����I5);
	label����I6->Text = gcnew String(data.����I6);
	label����I7->Text = gcnew String(data.����I7);
	label����I8->Text = gcnew String(data.����I8);
	label����I9->Text = gcnew String(data.����I9);
	label����I10->Text = gcnew String(data.����I10);


	label����U1->Text = gcnew String(data.����U1);
	label����U2->Text = gcnew String(data.����U2);
	label����U3->Text = gcnew String(data.����U3);
	label����U4->Text = gcnew String(data.����U4);
	label����U5->Text = gcnew String(data.����U5);
	label����U6->Text = gcnew String(data.����U6);
	label����U7->Text = gcnew String(data.����U7);
	label����U8->Text = gcnew String(data.����U8);
	label����U9->Text = gcnew String(data.����U9);
	label����U10->Text =gcnew String(data.����U10);
	textBox���Խ���->Text = gcnew String(data.����summing_up);

	/*******�׳��******/
	textBox�׳�SU1->Text =  gcnew String(data.�׳�SU1) ;
	textBox�׳�SU2->Text =  gcnew String(data.�׳�SU2) ;
	textBox�׳�SU3->Text =  gcnew String(data.�׳�SU3) ;
	textBox�׳�SU4->Text =  gcnew String(data.�׳�SU4) ;
	textBox�׳�SU5->Text =  gcnew String(data.�׳�SU5) ;
	textBox�׳�SU6->Text =  gcnew String(data.�׳�SU6) ;
	textBox�׳�SU7->Text =  gcnew String(data.�׳�SU7) ;
	textBox�׳�SU8->Text =  gcnew String(data.�׳�SU8) ;
	textBox�׳�SU9->Text =  gcnew String(data.�׳�SU9) ;
	textBox�׳�SU10->Text = gcnew String(data.�׳�SU10) ;

	label�׳�I1->Text = gcnew String(data.�׳�I1);
	label�׳�I2->Text = gcnew String(data.�׳�I2);
	label�׳�I3->Text = gcnew String(data.�׳�I3);
	label�׳�I4->Text = gcnew String(data.�׳�I4);
	label�׳�I5->Text = gcnew String(data.�׳�I5);
	label�׳�I6->Text = gcnew String(data.�׳�I6);
	label�׳�I7->Text = gcnew String(data.�׳�I7);
	label�׳�I8->Text = gcnew String(data.�׳�I8);
	label�׳�I9->Text = gcnew String(data.�׳�I9);
	label�׳�I10->Text =gcnew String(data.�׳�I10);


	label�׳�U1->Text = gcnew String(data.�׳�U1);
	label�׳�U2->Text = gcnew String(data.�׳�U2);
	label�׳�U3->Text = gcnew String(data.�׳�U3);
	label�׳�U4->Text = gcnew String(data.�׳�U4);
	label�׳�U5->Text = gcnew String(data.�׳�U5);
	label�׳�U6->Text = gcnew String(data.�׳�U6);
	label�׳�U7->Text = gcnew String(data.�׳�U7);
	label�׳�U8->Text = gcnew String(data.�׳�U8);
	label�׳�U9->Text = gcnew String(data.�׳�U9);
	label�׳�U10->Text =gcnew String(data.�׳�U10);
	textBox�׳����->Text = gcnew String(data.����summing_up);

	/**************s_���*****************/

	textBox���ZSU1->Text = gcnew String(data.���ZSU1);
	textBox���ZSU2->Text = gcnew String(data.���ZSU2);
	textBox���ZSU3->Text = gcnew String(data.���ZSU3);
	textBox���ZSU4->Text = gcnew String(data.���ZSU4);
	textBox���ZSU5->Text = gcnew String(data.���ZSU5);
	textBox���ZSU6->Text = gcnew String(data.���ZSU6);
	textBox���ZSU7->Text = gcnew String(data.���ZSU7);
	textBox���ZSU8->Text = gcnew String(data.���ZSU8);
	textBox���ZSU9->Text = gcnew String(data.���ZSU9);
	textBox���ZSU10->Text =gcnew String(data.���ZSU10);

	label���ZI1->Text = gcnew String(data.���ZI1);
	label���ZI2->Text = gcnew String(data.���ZI2);
	label���ZI3->Text = gcnew String(data.���ZI3);
	label���ZI4->Text = gcnew String(data.���ZI4);
	label���ZI5->Text = gcnew String(data.���ZI5);
	label���ZI6->Text = gcnew String(data.���ZI6);
	label���ZI7->Text = gcnew String(data.���ZI7);
	label���ZI8->Text = gcnew String(data.���ZI8);
	label���ZI9->Text = gcnew String(data.���ZI9);
	label���ZI10->Text =gcnew String(data.���ZI10);


	label���ZU1->Text = gcnew String(data.���ZU1);
	label���ZU2->Text = gcnew String(data.���ZU2);
	label���ZU3->Text = gcnew String(data.���ZU3);
	label���ZU4->Text = gcnew String(data.���ZU4);
	label���ZU5->Text = gcnew String(data.���ZU5);
	label���ZU6->Text = gcnew String(data.���ZU6);
	label���ZU7->Text = gcnew String(data.���ZU7);
	label���ZU8->Text = gcnew String(data.���ZU8);
	label���ZU9->Text = gcnew String(data.���ZU9);
	label���ZU10->Text =gcnew String(data.���ZU10);

	textBox���FSU1->Text = gcnew String(data.���FSU1);
	textBox���FSU2->Text = gcnew String(data.���FSU2);
	textBox���FSU3->Text = gcnew String(data.���FSU3);
	textBox���FSU4->Text = gcnew String(data.���FSU4);
	textBox���FSU5->Text = gcnew String(data.���FSU5);
	textBox���FSU6->Text = gcnew String(data.���FSU6);
	textBox���FSU7->Text = gcnew String(data.���FSU7);
	textBox���FSU8->Text = gcnew String(data.���FSU8);
	textBox���FSU9->Text = gcnew String(data.���FSU9);
	textBox���FSU10->Text =gcnew String(data.���FSU10);


	label���FI1->Text =  gcnew String(data.���FI1);
	label���FI2->Text =  gcnew String(data.���FI2);
	label���FI3->Text =  gcnew String(data.���FI3);
	label���FI4->Text =  gcnew String(data.���FI4);
	label���FI5->Text =  gcnew String(data.���FI5);
	label���FI6->Text =  gcnew String(data.���FI6);
	label���FI7->Text =  gcnew String(data.���FI7);
	label���FI8->Text =  gcnew String(data.���FI8);
	label���FI9->Text =  gcnew String(data.���FI9);
	label���FI10->Text=  gcnew String(data.���FI10);


	label���FU1->Text =  gcnew String(data.���FU1);
	label���FU2->Text =  gcnew String(data.���FU2);
	label���FU3->Text =  gcnew String(data.���FU3);
	label���FU4->Text =  gcnew String(data.���FU4);
	label���FU5->Text =  gcnew String(data.���FU5);
	label���FU6->Text =  gcnew String(data.���FU6);
	label���FU7->Text =  gcnew String(data.���FU7);
	label���FU8->Text =  gcnew String(data.���FU8);
	label���FU9->Text =  gcnew String(data.���FU9);
	label���FU10->Text =gcnew String(data.���FU10);

	textBox��ܽ���->Text = gcnew String(data.���summing_up);

	/**************s_���*****************/

	textBox���ZSU1->Text =  gcnew String(data.���ZSU1);
	textBox���ZSU2->Text =  gcnew String(data.���ZSU2);
	textBox���ZSU3->Text =  gcnew String(data.���ZSU3);
	textBox���ZSU4->Text =  gcnew String(data.���ZSU4);
	textBox���ZSU5->Text =  gcnew String(data.���ZSU5);
	textBox���ZSU6->Text =  gcnew String(data.���ZSU6);
	textBox���ZSU7->Text =  gcnew String(data.���ZSU7);
	textBox���ZSU8->Text =  gcnew String(data.���ZSU8);
	textBox���ZSU9->Text =  gcnew String(data.���ZSU9);
	textBox���ZSU10->Text = gcnew String(data.���ZSU10);

	label���ZI1->Text = gcnew String(data.���ZI1);
	label���ZI2->Text = gcnew String(data.���ZI2);
	label���ZI3->Text = gcnew String(data.���ZI3);
	label���ZI4->Text = gcnew String(data.���ZI4);
	label���ZI5->Text = gcnew String(data.���ZI5);
	label���ZI6->Text = gcnew String(data.���ZI6);
	label���ZI7->Text = gcnew String(data.���ZI7);
	label���ZI8->Text = gcnew String(data.���ZI8);
	label���ZI9->Text = gcnew String(data.���ZI9);
	label���ZI10->Text =gcnew String(data.���ZI10);


	label���ZU1->Text = gcnew String(data.���ZU1);
	label���ZU2->Text = gcnew String(data.���ZU2);
	label���ZU3->Text = gcnew String(data.���ZU3);
	label���ZU4->Text = gcnew String(data.���ZU4);
	label���ZU5->Text = gcnew String(data.���ZU5);
	label���ZU6->Text = gcnew String(data.���ZU6);
	label���ZU7->Text = gcnew String(data.���ZU7);
	label���ZU8->Text = gcnew String(data.���ZU8);
	label���ZU9->Text = gcnew String(data.���ZU9);
	label���ZU10->Text =gcnew String(data.���ZU10);

	textBox���FSU1->Text = gcnew String(data.���FSU1);
	textBox���FSU2->Text = gcnew String(data.���FSU2);
	textBox���FSU3->Text = gcnew String(data.���FSU3);
	textBox���FSU4->Text = gcnew String(data.���FSU4);
	textBox���FSU5->Text = gcnew String(data.���FSU5);
	textBox���FSU6->Text = gcnew String(data.���FSU6);
	textBox���FSU7->Text = gcnew String(data.���FSU7);
	textBox���FSU8->Text = gcnew String(data.���FSU8);
	textBox���FSU9->Text = gcnew String(data.���FSU9);
	textBox���FSU10->Text =gcnew String(data.���FSU10);

	label1���FI1->Text = gcnew String(data.���FI1);
	label1���FI2->Text = gcnew String(data.���FI2);
	label1���FI3->Text = gcnew String(data.���FI3);
	label1���FI4->Text = gcnew String(data.���FI4);
	label1���FI5->Text = gcnew String(data.���FI5);
	label1���FI6->Text = gcnew String(data.���FI6);
	label1���FI7->Text = gcnew String(data.���FI7);
	label1���FI8->Text = gcnew String(data.���FI8);
	label1���FI9->Text = gcnew String(data.���FI9);
	label1���FI10->Text =gcnew String(data.���FI10);


	label1���FU1->Text = gcnew String(data.���FU1);
	label1���FU2->Text = gcnew String(data.���FU2);
	label1���FU3->Text = gcnew String(data.���FU3);
	label1���FU4->Text = gcnew String(data.���FU4);
	label1���FU5->Text = gcnew String(data.���FU5);
	label1���FU6->Text = gcnew String(data.���FU6);
	label1���FU7->Text = gcnew String(data.���FU7);
	label1���FU8->Text = gcnew String(data.���FU8);
	label1���FU9->Text = gcnew String(data.���FU9);
	label1���FU10->Text =gcnew String(data.���FU10);

	textBox��ܽ���->Text = gcnew String(data.���summing_up);



	/**************s_��ѹ*****************/

	textBox��ѹZSU1->Text = gcnew String(data.��ѹZSU1);
	textBox��ѹZSU2->Text = gcnew String(data.��ѹZSU2);
	textBox��ѹZSU3->Text = gcnew String(data.��ѹZSU3);
	textBox��ѹZSU4->Text = gcnew String(data.��ѹZSU4);
	textBox��ѹZSU5->Text = gcnew String(data.��ѹZSU5);
	textBox��ѹZSU6->Text = gcnew String(data.��ѹZSU6);
	textBox��ѹZSU7->Text = gcnew String(data.��ѹZSU7);
	textBox��ѹZSU8->Text = gcnew String(data.��ѹZSU8);
	textBox��ѹZSU9->Text = gcnew String(data.��ѹZSU9);
	textBox��ѹZSU10->Text =gcnew String(data.��ѹZSU10);

	label��ѹZI1->Text = gcnew String(data.��ѹZI1);
	label��ѹZI2->Text = gcnew String(data.��ѹZI2);
	label��ѹZI3->Text = gcnew String(data.��ѹZI3);
	label��ѹZI4->Text = gcnew String(data.��ѹZI4);
	label��ѹZI5->Text = gcnew String(data.��ѹZI5);
	label��ѹZI6->Text = gcnew String(data.��ѹZI6);
	label��ѹZI7->Text = gcnew String(data.��ѹZI7);
	label��ѹZI8->Text = gcnew String(data.��ѹZI8);
	label��ѹZI9->Text = gcnew String(data.��ѹZI9);
	label��ѹZI10->Text =gcnew String(data.��ѹZI10);


	label��ѹZU1->Text = gcnew String(data.��ѹZU1);
	label��ѹZU2->Text = gcnew String(data.��ѹZU2);
	label��ѹZU3->Text = gcnew String(data.��ѹZU3);
	label��ѹZU4->Text = gcnew String(data.��ѹZU4);
	label��ѹZU5->Text = gcnew String(data.��ѹZU5);
	label��ѹZU6->Text = gcnew String(data.��ѹZU6);
	label��ѹZU7->Text = gcnew String(data.��ѹZU7);
	label��ѹZU8->Text = gcnew String(data.��ѹZU8);
	label��ѹZU9->Text = gcnew String(data.��ѹZU9);
	label��ѹZU10->Text =gcnew String(data.��ѹZU10);

	textBox��ѹFSU1->Text = gcnew String(data.��ѹFSU1);
	textBox��ѹFSU2->Text = gcnew String(data.��ѹFSU2);
	textBox��ѹFSU3->Text = gcnew String(data.��ѹFSU3);
	textBox��ѹFSU4->Text = gcnew String(data.��ѹFSU4);
	textBox��ѹFSU5->Text = gcnew String(data.��ѹFSU5);
	textBox��ѹFSU6->Text = gcnew String(data.��ѹFSU6);
	textBox��ѹFSU7->Text = gcnew String(data.��ѹFSU7);
	textBox��ѹFSU8->Text = gcnew String(data.��ѹFSU8);
	textBox��ѹFSU9->Text = gcnew String(data.��ѹFSU9);
	textBox��ѹFSU10->Text =gcnew String(data.��ѹFSU10);

	label��ѹFI1->Text = gcnew String(data.��ѹFI1);
	label��ѹFI2->Text = gcnew String(data.��ѹFI2);
	label��ѹFI3->Text = gcnew String(data.��ѹFI3);
	label��ѹFI4->Text = gcnew String(data.��ѹFI4);
	label��ѹFI5->Text = gcnew String(data.��ѹFI5);
	label��ѹFI6->Text = gcnew String(data.��ѹFI6);
	label��ѹFI7->Text = gcnew String(data.��ѹFI7);
	label��ѹFI8->Text = gcnew String(data.��ѹFI8);
	label��ѹFI9->Text = gcnew String(data.��ѹFI9);
	label��ѹFI10->Text =gcnew String(data.��ѹFI10);


	label��ѹFU1->Text = gcnew String(data.��ѹZU1);
	label��ѹFU2->Text = gcnew String(data.��ѹZU2);
	label��ѹFU3->Text = gcnew String(data.��ѹZU3);
	label��ѹFU4->Text = gcnew String(data.��ѹZU4);
	label��ѹFU5->Text = gcnew String(data.��ѹZU5);
	label��ѹFU6->Text = gcnew String(data.��ѹZU6);
	label��ѹFU7->Text = gcnew String(data.��ѹZU7);
	label��ѹFU8->Text = gcnew String(data.��ѹZU8);
	label��ѹFU9->Text = gcnew String(data.��ѹZU9);
	label��ѹFU10->Text =gcnew String(data.��ѹZU10);

	textBox��ѹ����->Text = gcnew String(data.��ѹsumming_up);

	/*******ͼ������******/
	Loadchart����();
	Loadchart�׳�();
	Loadchart���();
	Loadchart���();
	Loadchart��ѹ();
}



void Ԫ���������Լ��::chart����Init() {
	Series ^s = chart����->Series[0];
	chart����->Titles->Add("  ���Ե�������������");
	ChartArea ^ c = chart����->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹ";
	c->AxisY->Title = "����";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void Ԫ���������Լ��::Loadchart����() {
	Series ^s = chart����->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label����U1->Text), Convert::ToSingle(label����I1->Text));
		s->Points->AddXY(Convert::ToSingle(label����U2->Text), Convert::ToSingle(label����I2->Text));
		s->Points->AddXY(Convert::ToSingle(label����U3->Text), Convert::ToSingle(label����I3->Text));
		s->Points->AddXY(Convert::ToSingle(label����U4->Text), Convert::ToSingle(label����I4->Text));
		s->Points->AddXY(Convert::ToSingle(label����U5->Text), Convert::ToSingle(label����I5->Text));
		s->Points->AddXY(Convert::ToSingle(label����U6->Text), Convert::ToSingle(label����I6->Text));
		s->Points->AddXY(Convert::ToSingle(label����U7->Text), Convert::ToSingle(label����I7->Text));
		s->Points->AddXY(Convert::ToSingle(label����U8->Text), Convert::ToSingle(label����I8->Text));
		s->Points->AddXY(Convert::ToSingle(label����U9->Text), Convert::ToSingle(label����I9->Text));
		s->Points->AddXY(Convert::ToSingle(label����U10->Text), Convert::ToSingle(label����I10->Text));
	}
	catch (System::Exception^ E) {

	}

}

void Ԫ���������Լ��::chart�׳�Init() {
	Series ^s = chart�׳�->Series[0];
	chart�׳�->Titles->Add("  �׳�Ʒ�������");
	ChartArea ^ c = chart�׳�->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹ(V)";
	c->AxisY->Title = "����(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}

void Ԫ���������Լ��::Loadchart�׳�() {
	Series ^s = chart�׳�->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label�׳�U1->Text), Convert::ToSingle(label�׳�I1->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U2->Text), Convert::ToSingle(label�׳�I2->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U3->Text), Convert::ToSingle(label�׳�I3->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U4->Text), Convert::ToSingle(label�׳�I4->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U5->Text), Convert::ToSingle(label�׳�I5->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U6->Text), Convert::ToSingle(label�׳�I6->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U7->Text), Convert::ToSingle(label�׳�I7->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U8->Text), Convert::ToSingle(label�׳�I8->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U9->Text), Convert::ToSingle(label�׳�I9->Text));
		s->Points->AddXY(Convert::ToSingle(label�׳�U10->Text), Convert::ToSingle(label�׳�I10->Text));
	}
	catch (System::Exception^ E) {

	}


}
void Ԫ���������Լ��::chart���Init() {
	Series ^s = chart���->Series[0];
	chart���->Titles->Add("  ���2AP9��������");
	ChartArea ^ c = chart���->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹ(V)";
	c->AxisY->Title = "����(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}
void Ԫ���������Լ��::Loadchart���() {
	Series ^s = chart���->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label���ZU1->Text), Convert::ToSingle(label���ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU2->Text), Convert::ToSingle(label���ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU3->Text), Convert::ToSingle(label���ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU4->Text), Convert::ToSingle(label���ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU5->Text), Convert::ToSingle(label���ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU6->Text), Convert::ToSingle(label���ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU7->Text), Convert::ToSingle(label���ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU8->Text), Convert::ToSingle(label���ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU9->Text), Convert::ToSingle(label���ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU10->Text), Convert::ToSingle(label���ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU1->Text), Convert::ToSingle(label���FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU2->Text), Convert::ToSingle(label���FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU3->Text), Convert::ToSingle(label���FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU4->Text), Convert::ToSingle(label���FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU5->Text), Convert::ToSingle(label���FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU6->Text), Convert::ToSingle(label���FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU7->Text), Convert::ToSingle(label���FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU8->Text), Convert::ToSingle(label���FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU9->Text), Convert::ToSingle(label���FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label���FU10->Text), Convert::ToSingle(label���FI10->Text));
	}
	catch (System::Exception^ E) {

	}
}
void Ԫ���������Լ��::chart���Init() {
	Series ^s = chart���->Series[0];
	chart���->Titles->Add("  ���2CP15��������");
	ChartArea ^ c = chart���->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹ(V)";
	c->AxisY->Title = "����(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}
void Ԫ���������Լ��::Loadchart���() {
	Series ^s = chart���->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label���ZU1->Text), Convert::ToSingle(label���ZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU2->Text), Convert::ToSingle(label���ZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU3->Text), Convert::ToSingle(label���ZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU4->Text), Convert::ToSingle(label���ZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU5->Text), Convert::ToSingle(label���ZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU6->Text), Convert::ToSingle(label���ZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU7->Text), Convert::ToSingle(label���ZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU8->Text), Convert::ToSingle(label���ZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU9->Text), Convert::ToSingle(label���ZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label���ZU10->Text), Convert::ToSingle(label���ZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU1->Text), Convert::ToSingle(label1���FI1->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU2->Text), Convert::ToSingle(label1���FI2->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU3->Text), Convert::ToSingle(label1���FI3->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU4->Text), Convert::ToSingle(label1���FI4->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU5->Text), Convert::ToSingle(label1���FI5->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU6->Text), Convert::ToSingle(label1���FI6->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU7->Text), Convert::ToSingle(label1���FI7->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU8->Text), Convert::ToSingle(label1���FI8->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU9->Text), Convert::ToSingle(label1���FI9->Text));
		s->Points->AddXY(Convert::ToSingle(label1���FU10->Text), Convert::ToSingle(label1���FI10->Text));
	}
	catch (System::Exception^ E) {

	}


}
void Ԫ���������Լ��::chart��ѹInit() {
	Series ^s = chart��ѹ->Series[0];
	chart��ѹ->Titles->Add("  ��ѹ�����ܷ�������");
	ChartArea ^ c = chart��ѹ->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹ(V)";
	c->AxisY->Title = "����(mA)";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	s->Points->AddXY(0, 0);
}


void Ԫ���������Լ��::Loadchart��ѹ() {
	Series ^s = chart��ѹ->Series[0];
	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(label��ѹZU1->Text), Convert::ToSingle(label��ѹZI1->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU2->Text), Convert::ToSingle(label��ѹZI2->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU3->Text), Convert::ToSingle(label��ѹZI3->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU4->Text), Convert::ToSingle(label��ѹZI4->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU5->Text), Convert::ToSingle(label��ѹZI5->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU6->Text), Convert::ToSingle(label��ѹZI6->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU7->Text), Convert::ToSingle(label��ѹZI7->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU8->Text), Convert::ToSingle(label��ѹZI8->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU9->Text), Convert::ToSingle(label��ѹZI9->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹZU10->Text), Convert::ToSingle(label��ѹZI10->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU1->Text), Convert::ToSingle(label��ѹFI1->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU2->Text), Convert::ToSingle(label��ѹFI2->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU3->Text), Convert::ToSingle(label��ѹFI3->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU4->Text), Convert::ToSingle(label��ѹFI4->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU5->Text), Convert::ToSingle(label��ѹFI5->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU6->Text), Convert::ToSingle(label��ѹFI6->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU7->Text), Convert::ToSingle(label��ѹFI7->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU8->Text), Convert::ToSingle(label��ѹFI8->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU9->Text), Convert::ToSingle(label��ѹFI9->Text));
		s->Points->AddXY(Convert::ToSingle(label��ѹFU10->Text), Convert::ToSingle(label��ѹFI10->Text));
	}
	catch (System::Exception^ E) {

	}
}
