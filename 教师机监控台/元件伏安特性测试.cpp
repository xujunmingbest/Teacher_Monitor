#include "元件伏安特性测试.h"

using namespace 教师机监控台;

void 元件伏安特性测试::SaveCorrectGrades() {
	fileSql f;
	ST_元件伏安特性测试 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_元件伏安特性测试));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_元件伏安特性测试));
	try {
		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;
		s.线性score = Convert::ToUInt32(textBox1->Text);
		s.白炽score = Convert::ToUInt32(textBox2->Text);
		s.锗管score = Convert::ToUInt32(textBox3->Text);
		s.硅管score = Convert::ToUInt32(textBox4->Text);
		s.稳压score = Convert::ToUInt32(textBox5->Text);


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_元件伏安特性测试)))) {

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

void 元件伏安特性测试::Load元件伏安特性测试Data(string &filename) {

	fileSql f;
	ST_元件伏安特性测试 s;
	string path = filename;

	string data = f.ReadStruct(path,sizeof(ST_元件伏安特性测试));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_元件伏安特性测试));

	/*************加载学生信息************/
	textBox1->Text = s.线性score.ToString();
	textBox2->Text = s.白炽score.ToString();
	textBox3->Text = s.锗管score.ToString();
	textBox4->Text = s.硅管score.ToString();
	textBox5->Text = s.稳压score.ToString();
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

	label线性SU1->Text   = gcnew String( s.线性SU1 );
	label线性SU2->Text   = gcnew String( s.线性SU2 ); 
	label线性SU3->Text   = gcnew String( s.线性SU3 );
	label线性SU4->Text   = gcnew String( s.线性SU4 );
	label线性SU5->Text   = gcnew String( s.线性SU5 );
	label线性SU6->Text   = gcnew String( s.线性SU6 );
	label线性SU7->Text   = gcnew String( s.线性SU7 );
	label线性SU8->Text   = gcnew String( s.线性SU8 );
	label线性SU9->Text   = gcnew String( s.线性SU9 );
	label线性SU10->Text  = gcnew String(  s.线性SU10 );

	label线性I1->Text  = gcnew String( s.线性I1); 
	label线性I2->Text  = gcnew String( s.线性I2); 
	label线性I3->Text  = gcnew String( s.线性I3); 
	label线性I4->Text  = gcnew String( s.线性I4); 
	label线性I5->Text  = gcnew String( s.线性I5); 
	label线性I6->Text  = gcnew String( s.线性I6); 
	label线性I7->Text  = gcnew String( s.线性I7); 
	label线性I8->Text  = gcnew String( s.线性I8); 
	label线性I9->Text  = gcnew String( s.线性I9); 
	label线性I10->Text = gcnew String( s.线性I10); 

	label线性U1->Text  = gcnew String(   s.线性U1);
	label线性U2->Text  = gcnew String(   s.线性U2);
	label线性U3->Text  = gcnew String(   s.线性U3);
	label线性U4->Text  = gcnew String(   s.线性U4);
	label线性U5->Text  = gcnew String(   s.线性U5);
	label线性U6->Text  = gcnew String(   s.线性U6);
	label线性U7->Text  = gcnew String(   s.线性U7);
	label线性U8->Text  = gcnew String(   s.线性U8);
	label线性U9->Text  = gcnew String(   s.线性U9);
	label线性U10->Text = gcnew String(   s.线性U10);
	label线性结论->Text = gcnew  String( s.线性summing_up);
	/*******白炽灯******/
	label白炽SU1->Text = gcnew String(   s.白炽SU1); 
	label白炽SU2->Text = gcnew String(   s.白炽SU2); 
	label白炽SU3->Text = gcnew String(   s.白炽SU3); 
	label白炽SU4->Text = gcnew String(   s.白炽SU4); 
	label白炽SU5->Text = gcnew String(   s.白炽SU5); 
	label白炽SU6->Text = gcnew String(   s.白炽SU6); 
	label白炽SU7->Text = gcnew String(   s.白炽SU7); 
	label白炽SU8->Text = gcnew String(   s.白炽SU8); 
	label白炽SU9->Text = gcnew String(   s.白炽SU9); 
	label白炽SU10->Text= gcnew String(  s.白炽SU10); 

	label白炽I1->Text = gcnew String( s.白炽I1);
	label白炽I2->Text = gcnew String( s.白炽I2);
	label白炽I3->Text = gcnew String( s.白炽I3);
	label白炽I4->Text = gcnew String( s.白炽I4);
	label白炽I5->Text = gcnew String( s.白炽I5);
	label白炽I6->Text = gcnew String( s.白炽I6);
	label白炽I7->Text = gcnew String( s.白炽I7);
	label白炽I8->Text = gcnew String( s.白炽I8);
	label白炽I9->Text = gcnew String( s.白炽I9);
	label白炽I10->Text= gcnew String( s.白炽I10);

	label白炽U1->Text = gcnew String( s.白炽U1); 
	label白炽U2->Text = gcnew String( s.白炽U2); 
	label白炽U3->Text = gcnew String( s.白炽U3); 
	label白炽U4->Text = gcnew String( s.白炽U4); 
	label白炽U5->Text = gcnew String( s.白炽U5); 
	label白炽U6->Text = gcnew String( s.白炽U6); 
	label白炽U7->Text = gcnew String( s.白炽U7); 
	label白炽U8->Text = gcnew String( s.白炽U8); 
	label白炽U9->Text = gcnew String( s.白炽U9); 
	label白炽U10->Text= gcnew String(s.白炽U10);

	label白炽结论->Text = gcnew String(s.白炽summing_up);

	/**************s_锗管*****************/

	label锗管ZSU1->Text = gcnew String(s.锗管ZSU1);
    label锗管ZSU2->Text = gcnew String(s.锗管ZSU2) ;    
    label锗管ZSU3->Text = gcnew String(s.锗管ZSU3) ;
    label锗管ZSU4->Text = gcnew String(s.锗管ZSU4) ;
    label锗管ZSU5->Text = gcnew String(s.锗管ZSU5) ;
    label锗管ZSU6->Text = gcnew String(s.锗管ZSU6) ;
    label锗管ZSU7->Text = gcnew String(s.锗管ZSU7) ;
    label锗管ZSU8->Text = gcnew String(s.锗管ZSU8) ;
    label锗管ZSU9->Text = gcnew String(s.锗管ZSU9) ;
    label锗管ZSU10->Text =gcnew String( s.锗管ZSU10);
	 label锗管FSU1->Text = gcnew String(s.锗管FSU1 ); 
	 label锗管FSU2->Text = gcnew String(s.锗管FSU2 ); 
	 label锗管FSU3->Text = gcnew String(s.锗管FSU3 ); 
	 label锗管FSU4->Text = gcnew String(s.锗管FSU4 ); 
	 label锗管FSU5->Text = gcnew String(s.锗管FSU5 ); 
	 label锗管FSU6->Text = gcnew String(s.锗管FSU6 ); 
	 label锗管FSU7->Text = gcnew String(s.锗管FSU7 ); 
	 label锗管FSU8->Text = gcnew String(s.锗管FSU8 ); 
	 label锗管FSU9->Text = gcnew String(s.锗管FSU9 ); 
	label锗管FSU10->Text = gcnew String(s.锗管FSU10); 

	 label锗管ZU1->Text  = gcnew String(s.锗管ZU1 ) ;
	 label锗管ZU2->Text  = gcnew String(s.锗管ZU2 ) ;
	 label锗管ZU3->Text  = gcnew String(s.锗管ZU3 ) ;
	 label锗管ZU4->Text  = gcnew String(s.锗管ZU4 ) ;
	 label锗管ZU5->Text  = gcnew String(s.锗管ZU5 ) ;
	 label锗管ZU6->Text  = gcnew String(s.锗管ZU6 ) ;
	 label锗管ZU7->Text  = gcnew String(s.锗管ZU7 ) ;
	 label锗管ZU8->Text  = gcnew String(s.锗管ZU8 ) ;
	 label锗管ZU9->Text  = gcnew String(s.锗管ZU9 ) ;
	 label锗管ZU10->Text = gcnew String(s.锗管ZU10) ;
	 label锗管FU1->Text  = gcnew String(s.锗管FU1 ) ;
	 label锗管FU2->Text  = gcnew String(s.锗管FU2 ) ;
	 label锗管FU3->Text  = gcnew String(s.锗管FU3 ) ;
	 label锗管FU4->Text  = gcnew String(s.锗管FU4 ) ;
	 label锗管FU5->Text  = gcnew String(s.锗管FU5 ) ;
	 label锗管FU6->Text  = gcnew String(s.锗管FU6 ) ;
	 label锗管FU7->Text  = gcnew String(s.锗管FU7 ) ;
	 label锗管FU8->Text  = gcnew String(s.锗管FU8 ) ;
	 label锗管FU9->Text  = gcnew String(s.锗管FU9 ) ;
	 label锗管FU10->Text = gcnew String(s.锗管FU10) ;

	label锗管ZI1->Text  = gcnew String(s.锗管ZI1    );
	label锗管ZI2->Text  = gcnew String(s.锗管ZI2    );
	label锗管ZI3->Text  = gcnew String(s.锗管ZI3    );
	label锗管ZI4->Text  = gcnew String(s.锗管ZI4    );
	label锗管ZI5->Text  = gcnew String(s.锗管ZI5    );
	label锗管ZI6->Text  = gcnew String(s.锗管ZI6    );
	label锗管ZI7->Text  = gcnew String(s.锗管ZI7    );
	label锗管ZI8->Text  = gcnew String(s.锗管ZI8    );
	label锗管ZI9->Text  = gcnew String(s.锗管ZI9    );
	label锗管ZI10->Text = gcnew String(s.锗管ZI10   );
	label锗管FI1->Text  = gcnew String(s.锗管FI1    );
	label锗管FI2->Text  = gcnew String(s.锗管FI2    );
	label锗管FI3->Text  = gcnew String(s.锗管FI3    );
	label锗管FI4->Text  = gcnew String(s.锗管FI4    );
	label锗管FI5->Text  = gcnew String(s.锗管FI5    );
	label锗管FI6->Text  = gcnew String(s.锗管FI6    );
	label锗管FI7->Text  = gcnew String(s.锗管FI7    );
	label锗管FI8->Text  = gcnew String(s.锗管FI8    );
	label锗管FI9->Text  = gcnew String(s.锗管FI9    );
	label锗管FI10->Text = gcnew String(s.锗管FI10   );

	label锗管结论->Text =gcnew String( s.锗管summing_up );

	/**************s_硅管*****************/

	label硅管ZSU1->Text  = gcnew String(s.硅管ZSU1   );
	label硅管ZSU2->Text  = gcnew String(s.硅管ZSU2   );
	label硅管ZSU3->Text  = gcnew String(s.硅管ZSU3   );
	label硅管ZSU4->Text  = gcnew String(s.硅管ZSU4   );
	label硅管ZSU5->Text  = gcnew String(s.硅管ZSU5   );
	label硅管ZSU6->Text  = gcnew String(s.硅管ZSU6   );
	label硅管ZSU7->Text  = gcnew String(s.硅管ZSU7   );
	label硅管ZSU8->Text  = gcnew String(s.硅管ZSU8   );
	label硅管ZSU9->Text  = gcnew String(s.硅管ZSU9   );
	label硅管ZSU10->Text = gcnew String(s.硅管ZSU10  );
	label硅管FSU1->Text  = gcnew String(s.硅管FSU1   );
	label硅管FSU2->Text  = gcnew String(s.硅管FSU2   );
	label硅管FSU3->Text  = gcnew String(s.硅管FSU3   );
	label硅管FSU4->Text  = gcnew String(s.硅管FSU4   );
	label硅管FSU5->Text  = gcnew String(s.硅管FSU5   );
	label硅管FSU6->Text  = gcnew String(s.硅管FSU6   );
	label硅管FSU7->Text  = gcnew String(s.硅管FSU7   );
	label硅管FSU8->Text  = gcnew String(s.硅管FSU8   );
	label硅管FSU9->Text  = gcnew String(s.硅管FSU9   );
	label硅管FSU10->Text = gcnew String(s.硅管FSU10  );

	label硅管ZU1->Text    = gcnew String(s.硅管ZU1 );
	label硅管ZU2->Text    = gcnew String(s.硅管ZU2 );
	label硅管ZU3->Text    = gcnew String(s.硅管ZU3 );
	label硅管ZU4->Text    = gcnew String(s.硅管ZU4 );
	label硅管ZU5->Text    = gcnew String(s.硅管ZU5 );
	label硅管ZU6->Text    = gcnew String(s.硅管ZU6 );
	label硅管ZU7->Text    = gcnew String(s.硅管ZU7 );
	label硅管ZU8->Text    = gcnew String(s.硅管ZU8 );
	label硅管ZU9->Text    = gcnew String(s.硅管ZU9 );
	label硅管ZU10->Text   = gcnew String(s.硅管ZU10);
	label1硅管FU1->Text   = gcnew String(s.硅管FU1 );
	label1硅管FU2->Text   = gcnew String(s.硅管FU2 );
	label1硅管FU3->Text   = gcnew String(s.硅管FU3 );
	label1硅管FU4->Text   = gcnew String(s.硅管FU4 );
	label1硅管FU5->Text   = gcnew String(s.硅管FU5 );
	label1硅管FU6->Text   = gcnew String(s.硅管FU6 );
	label1硅管FU7->Text   = gcnew String(s.硅管FU7 );
	label1硅管FU8->Text   = gcnew String(s.硅管FU8 );
	label1硅管FU9->Text   = gcnew String(s.硅管FU9 );
	label1硅管FU10->Text  = gcnew String(s.硅管FU10);


	label硅管ZI1->Text  = gcnew String( s.硅管ZI1 );
	label硅管ZI2->Text  = gcnew String( s.硅管ZI2 );
	label硅管ZI3->Text  = gcnew String( s.硅管ZI3 );
	label硅管ZI4->Text  = gcnew String( s.硅管ZI4 );
	label硅管ZI5->Text  = gcnew String( s.硅管ZI5 );
	label硅管ZI6->Text  = gcnew String( s.硅管ZI6 );
	label硅管ZI7->Text  = gcnew String( s.硅管ZI7 );
	label硅管ZI8->Text  = gcnew String( s.硅管ZI8 );
	label硅管ZI9->Text  = gcnew String( s.硅管ZI9 );
	label硅管ZI10->Text = gcnew String( s.硅管ZI10);
	label1硅管FI1->Text = gcnew String( s.硅管FI1 );
	label1硅管FI2->Text = gcnew String( s.硅管FI2 );
	label1硅管FI3->Text = gcnew String( s.硅管FI3 );
	label1硅管FI4->Text = gcnew String( s.硅管FI4 );
	label1硅管FI5->Text = gcnew String( s.硅管FI5 );
	label1硅管FI6->Text = gcnew String( s.硅管FI6 );
	label1硅管FI7->Text = gcnew String( s.硅管FI7 );
	label1硅管FI8->Text = gcnew String( s.硅管FI8 );
	label1硅管FI9->Text = gcnew String( s.硅管FI9 );
	label1硅管FI10->Text = gcnew String( s.硅管FI10);

    label硅管结论->Text = gcnew String(s.硅管summing_up);


	/**************s_稳压*****************/
	label稳压ZSU1->Text  = gcnew String(s.稳压ZSU1  );
	label稳压ZSU2->Text  = gcnew String(s.稳压ZSU2  );
	label稳压ZSU3->Text  = gcnew String(s.稳压ZSU3  );
	label稳压ZSU4->Text  = gcnew String(s.稳压ZSU4  );
	label稳压ZSU5->Text  = gcnew String(s.稳压ZSU5  );
	label稳压ZSU6->Text  = gcnew String(s.稳压ZSU6  );
	label稳压ZSU7->Text  = gcnew String(s.稳压ZSU7  );
	label稳压ZSU8->Text  = gcnew String(s.稳压ZSU8  );
	label稳压ZSU9->Text  = gcnew String(s.稳压ZSU9  );
	label稳压ZSU10->Text = gcnew String(s.稳压ZSU10 );
	label稳压FSU1->Text  = gcnew String(s.稳压FSU1  );
	label稳压FSU2->Text  = gcnew String(s.稳压FSU2  );
	label稳压FSU3->Text  = gcnew String(s.稳压FSU3  );
	label稳压FSU4->Text  = gcnew String(s.稳压FSU4  );
	label稳压FSU5->Text  = gcnew String(s.稳压FSU5  );
	label稳压FSU6->Text  = gcnew String(s.稳压FSU6  );
	label稳压FSU7->Text  = gcnew String(s.稳压FSU7  );
	label稳压FSU8->Text  = gcnew String(s.稳压FSU8  );
	label稳压FSU9->Text  = gcnew String(s.稳压FSU9  );
	label稳压FSU10->Text = gcnew String(s.稳压FSU10 );

	label稳压ZU1->Text  = gcnew String(s.稳压ZU1    );
	label稳压ZU2->Text  = gcnew String(s.稳压ZU2    );
	label稳压ZU3->Text  = gcnew String(s.稳压ZU3    );
	label稳压ZU4->Text  = gcnew String(s.稳压ZU4    );
	label稳压ZU5->Text  = gcnew String(s.稳压ZU5    );
	label稳压ZU6->Text  = gcnew String(s.稳压ZU6    );
	label稳压ZU7->Text  = gcnew String(s.稳压ZU7    );
	label稳压ZU8->Text  = gcnew String(s.稳压ZU8    );
	label稳压ZU9->Text  = gcnew String(s.稳压ZU9    );
	label稳压ZU10->Text = gcnew String(s.稳压ZU10   );
	label稳压FU1->Text  = gcnew String(s.稳压FU1    );
	label稳压FU2->Text  = gcnew String(s.稳压FU2    );
	label稳压FU3->Text  = gcnew String(s.稳压FU3    );
	label稳压FU4->Text  = gcnew String(s.稳压FU4    );
	label稳压FU5->Text  = gcnew String(s.稳压FU5    );
	label稳压FU6->Text  = gcnew String(s.稳压FU6    );
	label稳压FU7->Text  = gcnew String(s.稳压FU7    );
	label稳压FU8->Text  = gcnew String(s.稳压FU8    );
	label稳压FU9->Text  = gcnew String(s.稳压FU9    );
	label稳压FU10->Text = gcnew String(s.稳压FU10   );

	label稳压ZI1->Text  = gcnew String(s.稳压ZI1    );
	label稳压ZI2->Text  = gcnew String(s.稳压ZI2    );
	label稳压ZI3->Text  = gcnew String(s.稳压ZI3    );
	label稳压ZI4->Text  = gcnew String(s.稳压ZI4    );
	label稳压ZI5->Text  = gcnew String(s.稳压ZI5    );
	label稳压ZI6->Text  = gcnew String(s.稳压ZI6    );
	label稳压ZI7->Text  = gcnew String(s.稳压ZI7    );
	label稳压ZI8->Text  = gcnew String(s.稳压ZI8    );
	label稳压ZI9->Text  = gcnew String(s.稳压ZI9    );
	label稳压ZI10->Text = gcnew String(s.稳压ZI10   );
	label稳压FI1->Text  = gcnew String(s.稳压FI1    );
	label稳压FI2->Text  = gcnew String(s.稳压FI2    );
	label稳压FI3->Text  = gcnew String(s.稳压FI3    );
	label稳压FI4->Text  = gcnew String(s.稳压FI4    );
	label稳压FI5->Text  = gcnew String(s.稳压FI5    );
	label稳压FI6->Text  = gcnew String(s.稳压FI6    );
	label稳压FI7->Text  = gcnew String(s.稳压FI7    );
	label稳压FI8->Text  = gcnew String(s.稳压FI8    );
	label稳压FI9->Text  = gcnew String(s.稳压FI9    );
	label稳压FI10->Text = gcnew String(s.稳压FI10   );

	label稳压结论->Text = gcnew String(s.稳压summing_up);
}

using namespace System::Windows::Forms::DataVisualization::Charting;


void 元件伏安特性测试::chart线性_load() {
	Series ^s = chart线性->Series[0];
	chart线性->Titles->Add("  线性电阻器伏安特性");
	ChartArea ^ c = chart线性->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压V";
	c->AxisY->Title = "电流mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;
	
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
s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}
void 元件伏安特性测试::chart白炽_load() {
	Series ^s = chart白炽->Series[0];
	chart白炽->Titles->Add("  白炽灯泡伏安特性");
	ChartArea ^ c = chart白炽->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压V";
	c->AxisY->Title = "电流mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

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
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}

void 元件伏安特性测试::chart稳压_load() {
	Series ^s = chart稳压->Series[0];
	chart稳压->Titles->Add("  稳压二极管伏安特性");
	ChartArea ^ c = chart稳压->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压V";
	c->AxisY->Title = "电流mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

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
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}
void 元件伏安特性测试::chart锗管_load() {
	Series ^s = chart锗管->Series[0];
	chart锗管->Titles->Add("  锗管2AP9伏安特性");
	ChartArea ^ c = chart锗管->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压V";
	c->AxisY->Title = "电流mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

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
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}
void 元件伏安特性测试::chart硅管_load() {
	Series ^s = chart硅管->Series[0];
	chart硅管->Titles->Add("  硅管2CP19伏安特性");
	ChartArea ^ c = chart硅管->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "电压V";
	c->AxisY->Title = "电流mA";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

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
	s->Sort(System::Windows::Forms::DataVisualization::Charting::PointSortOrder::Descending, "X");
	s->MarkerStyle = MarkerStyle::Circle;  //获取标记样式
}


void 元件伏安特性测试::GenerateTotalGrades() {
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

Bitmap^ 元件伏安特性测试::PrintLoad() {
	GroupBox^ g = groupBox1;

	if (NowPrint == "线性") {
		g = groupBox线性;
		NowPrint = "白炽";
	}
	else if(NowPrint == "白炽"){
		g = groupBox白炽;
		NowPrint = "锗管";
	}
	else if (NowPrint == "锗管") {
		g = groupBox锗管;
		NowPrint = "硅管";
	}
	else if (NowPrint == "硅管") {
		g = groupBox硅管;
		NowPrint = "稳压";
	}
	else if (NowPrint == "稳压") {
		g = groupBox稳压;
	}
	Bitmap ^_NewBitmap = gcnew Bitmap(g->Width, g->Height);
	g->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, g->Width, g->Height));
	return _NewBitmap;
}


void 元件伏安特性测试::Print() {
	try {
		printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 元件伏安特性测试::Priview()
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
