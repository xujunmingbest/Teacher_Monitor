#include "Ԫ���������Բ���.h"

using namespace ��ʦ�����̨;

void Ԫ���������Բ���::SaveCorrectGrades() {
	fileSql f;
	ST_Ԫ���������Բ��� s;
	string data = f.ReadStruct(*fileName, sizeof(ST_Ԫ���������Բ���));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_Ԫ���������Բ���));
	try {
		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;
		s.����score = Convert::ToUInt32(textBox1->Text);
		s.�׳�score = Convert::ToUInt32(textBox2->Text);
		s.���score = Convert::ToUInt32(textBox3->Text);
		s.���score = Convert::ToUInt32(textBox4->Text);
		s.��ѹscore = Convert::ToUInt32(textBox5->Text);


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_Ԫ���������Բ���)))) {

			MessageBox::Show("�ɼ�����ɹ�");
		}
		else {
			MessageBox::Show("�ɼ�����ʧ��");
		}
	}
	catch (Exception^e) {
		MessageBox::Show("�ɼ�����ʧ��,�гɼ�û�д��");
	}
}

void Ԫ���������Բ���::LoadԪ���������Բ���Data(string &filename) {

	fileSql f;
	ST_Ԫ���������Բ��� s;
	string path = filename;

	string data = f.ReadStruct(path,sizeof(ST_Ԫ���������Բ���));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_Ԫ���������Բ���));

	/*************����ѧ����Ϣ************/
	textBox1->Text = s.����score.ToString();
	textBox2->Text = s.�׳�score.ToString();
	textBox3->Text = s.���score.ToString();
	textBox4->Text = s.���score.ToString();
	textBox5->Text = s.��ѹscore.ToString();
	labelTotalGrade->Text = s.ti.totalscore.ToString();

	TrialInfo ti = s.ti;
	labelTrialName->Text = gcnew String(ti.TrialName);
	labelstuName1->Text = gcnew String(ti.stuName1);
	labelstuName2->Text = gcnew String(ti.stuName2);
	labelxuehao1 ->Text = gcnew String(ti.XueHao1);
	labelxuehao2->Text = gcnew String(ti.XueHao2);
	labelseriesnum->Text = gcnew String(ti.SeriaNumber);
	labelclass->Text = gcnew String(ti.Class);
	labellab->Text = gcnew String(ti.Lab);
	labelmajor->Text = gcnew String(ti.major);
	labeldate->Text = gcnew String(ti.date);
	textBoxteacher->Text = gcnew String(ti.teacher);

	label����SU1->Text   = gcnew String( s.����SU1 );
	label����SU2->Text   = gcnew String( s.����SU2 ); 
	label����SU3->Text   = gcnew String( s.����SU3 );
	label����SU4->Text   = gcnew String( s.����SU4 );
	label����SU5->Text   = gcnew String( s.����SU5 );
	label����SU6->Text   = gcnew String( s.����SU6 );
	label����SU7->Text   = gcnew String( s.����SU7 );
	label����SU8->Text   = gcnew String( s.����SU8 );
	label����SU9->Text   = gcnew String( s.����SU9 );
	label����SU10->Text  = gcnew String(  s.����SU10 );

	label����I1->Text  = gcnew String( s.����I1); 
	label����I2->Text  = gcnew String( s.����I2); 
	label����I3->Text  = gcnew String( s.����I3); 
	label����I4->Text  = gcnew String( s.����I4); 
	label����I5->Text  = gcnew String( s.����I5); 
	label����I6->Text  = gcnew String( s.����I6); 
	label����I7->Text  = gcnew String( s.����I7); 
	label����I8->Text  = gcnew String( s.����I8); 
	label����I9->Text  = gcnew String( s.����I9); 
	label����I10->Text = gcnew String( s.����I10); 

	label����U1->Text  = gcnew String(   s.����U1);
	label����U2->Text  = gcnew String(   s.����U2);
	label����U3->Text  = gcnew String(   s.����U3);
	label����U4->Text  = gcnew String(   s.����U4);
	label����U5->Text  = gcnew String(   s.����U5);
	label����U6->Text  = gcnew String(   s.����U6);
	label����U7->Text  = gcnew String(   s.����U7);
	label����U8->Text  = gcnew String(   s.����U8);
	label����U9->Text  = gcnew String(   s.����U9);
	label����U10->Text = gcnew String(   s.����U10);
	label���Խ���->Text = gcnew  String( s.����summing_up);
	/*******�׳��******/
	label�׳�SU1->Text = gcnew String(   s.�׳�SU1); 
	label�׳�SU2->Text = gcnew String(   s.�׳�SU2); 
	label�׳�SU3->Text = gcnew String(   s.�׳�SU3); 
	label�׳�SU4->Text = gcnew String(   s.�׳�SU4); 
	label�׳�SU5->Text = gcnew String(   s.�׳�SU5); 
	label�׳�SU6->Text = gcnew String(   s.�׳�SU6); 
	label�׳�SU7->Text = gcnew String(   s.�׳�SU7); 
	label�׳�SU8->Text = gcnew String(   s.�׳�SU8); 
	label�׳�SU9->Text = gcnew String(   s.�׳�SU9); 
	label�׳�SU10->Text= gcnew String(  s.�׳�SU10); 

	label�׳�I1->Text = gcnew String( s.�׳�I1);
	label�׳�I2->Text = gcnew String( s.�׳�I2);
	label�׳�I3->Text = gcnew String( s.�׳�I3);
	label�׳�I4->Text = gcnew String( s.�׳�I4);
	label�׳�I5->Text = gcnew String( s.�׳�I5);
	label�׳�I6->Text = gcnew String( s.�׳�I6);
	label�׳�I7->Text = gcnew String( s.�׳�I7);
	label�׳�I8->Text = gcnew String( s.�׳�I8);
	label�׳�I9->Text = gcnew String( s.�׳�I9);
	label�׳�I10->Text= gcnew String( s.�׳�I10);

	label�׳�U1->Text = gcnew String( s.�׳�U1); 
	label�׳�U2->Text = gcnew String( s.�׳�U2); 
	label�׳�U3->Text = gcnew String( s.�׳�U3); 
	label�׳�U4->Text = gcnew String( s.�׳�U4); 
	label�׳�U5->Text = gcnew String( s.�׳�U5); 
	label�׳�U6->Text = gcnew String( s.�׳�U6); 
	label�׳�U7->Text = gcnew String( s.�׳�U7); 
	label�׳�U8->Text = gcnew String( s.�׳�U8); 
	label�׳�U9->Text = gcnew String( s.�׳�U9); 
	label�׳�U10->Text= gcnew String(s.�׳�U10);

	label�׳����->Text = gcnew String(s.�׳�summing_up);

	/**************s_���*****************/

	label���ZSU1->Text = gcnew String(s.���ZSU1);
    label���ZSU2->Text = gcnew String(s.���ZSU2) ;    
    label���ZSU3->Text = gcnew String(s.���ZSU3) ;
    label���ZSU4->Text = gcnew String(s.���ZSU4) ;
    label���ZSU5->Text = gcnew String(s.���ZSU5) ;
    label���ZSU6->Text = gcnew String(s.���ZSU6) ;
    label���ZSU7->Text = gcnew String(s.���ZSU7) ;
    label���ZSU8->Text = gcnew String(s.���ZSU8) ;
    label���ZSU9->Text = gcnew String(s.���ZSU9) ;
    label���ZSU10->Text =gcnew String( s.���ZSU10);
	 label���FSU1->Text = gcnew String(s.���FSU1 ); 
	 label���FSU2->Text = gcnew String(s.���FSU2 ); 
	 label���FSU3->Text = gcnew String(s.���FSU3 ); 
	 label���FSU4->Text = gcnew String(s.���FSU4 ); 
	 label���FSU5->Text = gcnew String(s.���FSU5 ); 
	 label���FSU6->Text = gcnew String(s.���FSU6 ); 
	 label���FSU7->Text = gcnew String(s.���FSU7 ); 
	 label���FSU8->Text = gcnew String(s.���FSU8 ); 
	 label���FSU9->Text = gcnew String(s.���FSU9 ); 
	label���FSU10->Text = gcnew String(s.���FSU10); 

	 label���ZU1->Text  = gcnew String(s.���ZU1 ) ;
	 label���ZU2->Text  = gcnew String(s.���ZU2 ) ;
	 label���ZU3->Text  = gcnew String(s.���ZU3 ) ;
	 label���ZU4->Text  = gcnew String(s.���ZU4 ) ;
	 label���ZU5->Text  = gcnew String(s.���ZU5 ) ;
	 label���ZU6->Text  = gcnew String(s.���ZU6 ) ;
	 label���ZU7->Text  = gcnew String(s.���ZU7 ) ;
	 label���ZU8->Text  = gcnew String(s.���ZU8 ) ;
	 label���ZU9->Text  = gcnew String(s.���ZU9 ) ;
	 label���ZU10->Text = gcnew String(s.���ZU10) ;
	 label���FU1->Text  = gcnew String(s.���FU1 ) ;
	 label���FU2->Text  = gcnew String(s.���FU2 ) ;
	 label���FU3->Text  = gcnew String(s.���FU3 ) ;
	 label���FU4->Text  = gcnew String(s.���FU4 ) ;
	 label���FU5->Text  = gcnew String(s.���FU5 ) ;
	 label���FU6->Text  = gcnew String(s.���FU6 ) ;
	 label���FU7->Text  = gcnew String(s.���FU7 ) ;
	 label���FU8->Text  = gcnew String(s.���FU8 ) ;
	 label���FU9->Text  = gcnew String(s.���FU9 ) ;
	 label���FU10->Text = gcnew String(s.���FU10) ;

	label���ZI1->Text  = gcnew String(s.���ZI1    );
	label���ZI2->Text  = gcnew String(s.���ZI2    );
	label���ZI3->Text  = gcnew String(s.���ZI3    );
	label���ZI4->Text  = gcnew String(s.���ZI4    );
	label���ZI5->Text  = gcnew String(s.���ZI5    );
	label���ZI6->Text  = gcnew String(s.���ZI6    );
	label���ZI7->Text  = gcnew String(s.���ZI7    );
	label���ZI8->Text  = gcnew String(s.���ZI8    );
	label���ZI9->Text  = gcnew String(s.���ZI9    );
	label���ZI10->Text = gcnew String(s.���ZI10   );
	label���FI1->Text  = gcnew String(s.���FI1    );
	label���FI2->Text  = gcnew String(s.���FI2    );
	label���FI3->Text  = gcnew String(s.���FI3    );
	label���FI4->Text  = gcnew String(s.���FI4    );
	label���FI5->Text  = gcnew String(s.���FI5    );
	label���FI6->Text  = gcnew String(s.���FI6    );
	label���FI7->Text  = gcnew String(s.���FI7    );
	label���FI8->Text  = gcnew String(s.���FI8    );
	label���FI9->Text  = gcnew String(s.���FI9    );
	label���FI10->Text = gcnew String(s.���FI10   );

	label��ܽ���->Text =gcnew String( s.���summing_up );

	/**************s_���*****************/

	label���ZSU1->Text  = gcnew String(s.���ZSU1   );
	label���ZSU2->Text  = gcnew String(s.���ZSU2   );
	label���ZSU3->Text  = gcnew String(s.���ZSU3   );
	label���ZSU4->Text  = gcnew String(s.���ZSU4   );
	label���ZSU5->Text  = gcnew String(s.���ZSU5   );
	label���ZSU6->Text  = gcnew String(s.���ZSU6   );
	label���ZSU7->Text  = gcnew String(s.���ZSU7   );
	label���ZSU8->Text  = gcnew String(s.���ZSU8   );
	label���ZSU9->Text  = gcnew String(s.���ZSU9   );
	label���ZSU10->Text = gcnew String(s.���ZSU10  );
	label���FSU1->Text  = gcnew String(s.���FSU1   );
	label���FSU2->Text  = gcnew String(s.���FSU2   );
	label���FSU3->Text  = gcnew String(s.���FSU3   );
	label���FSU4->Text  = gcnew String(s.���FSU4   );
	label���FSU5->Text  = gcnew String(s.���FSU5   );
	label���FSU6->Text  = gcnew String(s.���FSU6   );
	label���FSU7->Text  = gcnew String(s.���FSU7   );
	label���FSU8->Text  = gcnew String(s.���FSU8   );
	label���FSU9->Text  = gcnew String(s.���FSU9   );
	label���FSU10->Text = gcnew String(s.���FSU10  );

	label���ZU1->Text    = gcnew String(s.���ZU1 );
	label���ZU2->Text    = gcnew String(s.���ZU2 );
	label���ZU3->Text    = gcnew String(s.���ZU3 );
	label���ZU4->Text    = gcnew String(s.���ZU4 );
	label���ZU5->Text    = gcnew String(s.���ZU5 );
	label���ZU6->Text    = gcnew String(s.���ZU6 );
	label���ZU7->Text    = gcnew String(s.���ZU7 );
	label���ZU8->Text    = gcnew String(s.���ZU8 );
	label���ZU9->Text    = gcnew String(s.���ZU9 );
	label���ZU10->Text   = gcnew String(s.���ZU10);
	label1���FU1->Text   = gcnew String(s.���FU1 );
	label1���FU2->Text   = gcnew String(s.���FU2 );
	label1���FU3->Text   = gcnew String(s.���FU3 );
	label1���FU4->Text   = gcnew String(s.���FU4 );
	label1���FU5->Text   = gcnew String(s.���FU5 );
	label1���FU6->Text   = gcnew String(s.���FU6 );
	label1���FU7->Text   = gcnew String(s.���FU7 );
	label1���FU8->Text   = gcnew String(s.���FU8 );
	label1���FU9->Text   = gcnew String(s.���FU9 );
	label1���FU10->Text  = gcnew String(s.���FU10);


	label���ZI1->Text  = gcnew String( s.���ZI1 );
	label���ZI2->Text  = gcnew String( s.���ZI2 );
	label���ZI3->Text  = gcnew String( s.���ZI3 );
	label���ZI4->Text  = gcnew String( s.���ZI4 );
	label���ZI5->Text  = gcnew String( s.���ZI5 );
	label���ZI6->Text  = gcnew String( s.���ZI6 );
	label���ZI7->Text  = gcnew String( s.���ZI7 );
	label���ZI8->Text  = gcnew String( s.���ZI8 );
	label���ZI9->Text  = gcnew String( s.���ZI9 );
	label���ZI10->Text = gcnew String( s.���ZI10);
	label1���FI1->Text = gcnew String( s.���FI1 );
	label1���FI2->Text = gcnew String( s.���FI2 );
	label1���FI3->Text = gcnew String( s.���FI3 );
	label1���FI4->Text = gcnew String( s.���FI4 );
	label1���FI5->Text = gcnew String( s.���FI5 );
	label1���FI6->Text = gcnew String( s.���FI6 );
	label1���FI7->Text = gcnew String( s.���FI7 );
	label1���FI8->Text = gcnew String( s.���FI8 );
	label1���FI9->Text = gcnew String( s.���FI9 );
	label1���FI10->Text = gcnew String( s.���FI10);

    label��ܽ���->Text = gcnew String(s.���summing_up);


	/**************s_��ѹ*****************/
	label��ѹZSU1->Text  = gcnew String(s.��ѹZSU1  );
	label��ѹZSU2->Text  = gcnew String(s.��ѹZSU2  );
	label��ѹZSU3->Text  = gcnew String(s.��ѹZSU3  );
	label��ѹZSU4->Text  = gcnew String(s.��ѹZSU4  );
	label��ѹZSU5->Text  = gcnew String(s.��ѹZSU5  );
	label��ѹZSU6->Text  = gcnew String(s.��ѹZSU6  );
	label��ѹZSU7->Text  = gcnew String(s.��ѹZSU7  );
	label��ѹZSU8->Text  = gcnew String(s.��ѹZSU8  );
	label��ѹZSU9->Text  = gcnew String(s.��ѹZSU9  );
	label��ѹZSU10->Text = gcnew String(s.��ѹZSU10 );
	label��ѹFSU1->Text  = gcnew String(s.��ѹFSU1  );
	label��ѹFSU2->Text  = gcnew String(s.��ѹFSU2  );
	label��ѹFSU3->Text  = gcnew String(s.��ѹFSU3  );
	label��ѹFSU4->Text  = gcnew String(s.��ѹFSU4  );
	label��ѹFSU5->Text  = gcnew String(s.��ѹFSU5  );
	label��ѹFSU6->Text  = gcnew String(s.��ѹFSU6  );
	label��ѹFSU7->Text  = gcnew String(s.��ѹFSU7  );
	label��ѹFSU8->Text  = gcnew String(s.��ѹFSU8  );
	label��ѹFSU9->Text  = gcnew String(s.��ѹFSU9  );
	label��ѹFSU10->Text = gcnew String(s.��ѹFSU10 );

	label��ѹZU1->Text  = gcnew String(s.��ѹZU1    );
	label��ѹZU2->Text  = gcnew String(s.��ѹZU2    );
	label��ѹZU3->Text  = gcnew String(s.��ѹZU3    );
	label��ѹZU4->Text  = gcnew String(s.��ѹZU4    );
	label��ѹZU5->Text  = gcnew String(s.��ѹZU5    );
	label��ѹZU6->Text  = gcnew String(s.��ѹZU6    );
	label��ѹZU7->Text  = gcnew String(s.��ѹZU7    );
	label��ѹZU8->Text  = gcnew String(s.��ѹZU8    );
	label��ѹZU9->Text  = gcnew String(s.��ѹZU9    );
	label��ѹZU10->Text = gcnew String(s.��ѹZU10   );
	label��ѹFU1->Text  = gcnew String(s.��ѹFU1    );
	label��ѹFU2->Text  = gcnew String(s.��ѹFU2    );
	label��ѹFU3->Text  = gcnew String(s.��ѹFU3    );
	label��ѹFU4->Text  = gcnew String(s.��ѹFU4    );
	label��ѹFU5->Text  = gcnew String(s.��ѹFU5    );
	label��ѹFU6->Text  = gcnew String(s.��ѹFU6    );
	label��ѹFU7->Text  = gcnew String(s.��ѹFU7    );
	label��ѹFU8->Text  = gcnew String(s.��ѹFU8    );
	label��ѹFU9->Text  = gcnew String(s.��ѹFU9    );
	label��ѹFU10->Text = gcnew String(s.��ѹFU10   );

	label��ѹZI1->Text  = gcnew String(s.��ѹZI1    );
	label��ѹZI2->Text  = gcnew String(s.��ѹZI2    );
	label��ѹZI3->Text  = gcnew String(s.��ѹZI3    );
	label��ѹZI4->Text  = gcnew String(s.��ѹZI4    );
	label��ѹZI5->Text  = gcnew String(s.��ѹZI5    );
	label��ѹZI6->Text  = gcnew String(s.��ѹZI6    );
	label��ѹZI7->Text  = gcnew String(s.��ѹZI7    );
	label��ѹZI8->Text  = gcnew String(s.��ѹZI8    );
	label��ѹZI9->Text  = gcnew String(s.��ѹZI9    );
	label��ѹZI10->Text = gcnew String(s.��ѹZI10   );
	label��ѹFI1->Text  = gcnew String(s.��ѹFI1    );
	label��ѹFI2->Text  = gcnew String(s.��ѹFI2    );
	label��ѹFI3->Text  = gcnew String(s.��ѹFI3    );
	label��ѹFI4->Text  = gcnew String(s.��ѹFI4    );
	label��ѹFI5->Text  = gcnew String(s.��ѹFI5    );
	label��ѹFI6->Text  = gcnew String(s.��ѹFI6    );
	label��ѹFI7->Text  = gcnew String(s.��ѹFI7    );
	label��ѹFI8->Text  = gcnew String(s.��ѹFI8    );
	label��ѹFI9->Text  = gcnew String(s.��ѹFI9    );
	label��ѹFI10->Text = gcnew String(s.��ѹFI10   );

	label��ѹ����->Text = gcnew String(s.��ѹsumming_up);
}

using namespace System::Windows::Forms::DataVisualization::Charting;


void Ԫ���������Բ���::chart����_load() {
	Series ^s = chart����->Series[0];
	chart����->Titles->Add("  ���Ե�������������");
	ChartArea ^ c = chart����->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹV";
	c->AxisY->Title = "����mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	
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
s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}
void Ԫ���������Բ���::chart�׳�_load() {
	Series ^s = chart�׳�->Series[0];
	chart�׳�->Titles->Add("  �׳���ݷ�������");
	ChartArea ^ c = chart�׳�->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹV";
	c->AxisY->Title = "����mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

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
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}

void Ԫ���������Բ���::chart��ѹ_load() {
	Series ^s = chart��ѹ->Series[0];
	chart��ѹ->Titles->Add("  ��ѹ�����ܷ�������");
	ChartArea ^ c = chart��ѹ->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹV";
	c->AxisY->Title = "����mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

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
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}
void Ԫ���������Բ���::chart���_load() {
	Series ^s = chart���->Series[0];
	chart���->Titles->Add("  ���2AP9��������");
	ChartArea ^ c = chart���->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹV";
	c->AxisY->Title = "����mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

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
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}
void Ԫ���������Բ���::chart���_load() {
	Series ^s = chart���->Series[0];
	chart���->Titles->Add("  ���2CP19��������");
	ChartArea ^ c = chart���->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "��ѹV";
	c->AxisY->Title = "����mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

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
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //��ȡ�����ʽ
}


void Ԫ���������Բ���::GenerateTotalGrades() {
	try {
		uint g1 =  Convert::ToUInt32(textBox1->Text);
		uint g2 = Convert::ToUInt32(textBox2->Text);
		uint g3 = Convert::ToUInt32(textBox3->Text);
		uint g4 = Convert::ToUInt32(textBox4->Text);
		uint g5 = Convert::ToUInt32(textBox5->Text);

		labelTotalGrade->Text = (g1 + g2 + g3 + g4 + g5).ToString();
	}
	catch (System::Exception ^ e) {

	}


}

Bitmap^ Ԫ���������Բ���::PrintLoad() {
	GroupBox^ g = groupBox1;

	if (NowPrint == "����") {
		g = groupBox����;
		NowPrint = "�׳�";
	}
	else if(NowPrint == "�׳�"){
		g = groupBox�׳�;
		NowPrint = "���";
	}
	else if (NowPrint == "���") {
		g = groupBox���;
		NowPrint = "���";
	}
	else if (NowPrint == "���") {
		g = groupBox���;
		NowPrint = "��ѹ";
	}
	else if (NowPrint == "��ѹ") {
		g = groupBox��ѹ;
	}
	Bitmap ^_NewBitmap = gcnew Bitmap(g->Width, g->Height);
	g->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, g->Width, g->Height));
	return _NewBitmap;
}


void Ԫ���������Բ���::Print() {
	try {
		printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void Ԫ���������Բ���::Priview()
{
	try {
		printDocument1->DefaultPageSettings->Landscape = true;
		printPreviewDialog1->VerticalScroll->Enabled = true;
		printPreviewDialog1->AutoScroll = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}
