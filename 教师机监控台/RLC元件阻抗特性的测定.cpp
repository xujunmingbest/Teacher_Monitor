#include "RLC元件阻抗特性的测定.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"

using namespace 教师机监控台;

void RLC元件阻抗特性的测定::SaveCorrectGrades() {
	fileSql f;
	ST_RLC元件阻抗特性的测定 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_RLC元件阻抗特性的测定));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_RLC元件阻抗特性的测定));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);
		s.score3 = Convert::ToInt32(textBoxTrial3Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_RLC元件阻抗特性的测定)))) {

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


void RLC元件阻抗特性的测定::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);

		labelTotalGrade->Text = (g1 + g2 + g3 ).ToString();
	}
	catch (Exception^e) {

	}
}

void RLC元件阻抗特性的测定::Print() {
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void RLC元件阻抗特性的测定::Priview()
{
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void RLC元件阻抗特性的测定::LoadRLC元件阻抗特性的测定Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_RLC元件阻抗特性的测定 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_RLC元件阻抗特性的测定));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_RLC元件阻抗特性的测定));

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
	textBoxTrial3Score->Text = d.score3.ToString();
	
	labelTotalGrade->Text = ti.totalscore.ToString();

	string Name = string(BMPTEMP) + "RLC元件阻抗特性的测定监控";
	String^ ImageLocationTrial2_1 = gcnew String(string(Name + "Trial2_1.bmp").c_str());
	String^ ImageLocationTrial2_2 = gcnew String(string(Name + "Trial2_2.bmp").c_str());
	String^ ImageLocationTrial3_1 = gcnew String(string(Name + "Trial3_1.bmp").c_str());
	String^ ImageLocationTrial3_2 = gcnew String(string(Name + "Trial3_2.bmp").c_str());
	String^ ImageLocationTrial3_3 = gcnew String(string(Name + "Trial3_3.bmp").c_str());
	String^ ImageLocationTrial3_4 = gcnew String(string(Name + "Trial3_4.bmp").c_str());
	String^ ImageLocationTrial3_5 = gcnew String(string(Name + "Trial3_5.bmp").c_str());
	String^ ImageLocationTrial3_6 = gcnew String(string(Name + "Trial3_6.bmp").c_str());

	//先删除原来有的文件
	IO::File::Delete(ImageLocationTrial2_1);
	IO::File::Delete(ImageLocationTrial2_2);
	IO::File::Delete(ImageLocationTrial3_1);
	IO::File::Delete(ImageLocationTrial3_2);
	IO::File::Delete(ImageLocationTrial3_3);
	IO::File::Delete(ImageLocationTrial3_4);
	IO::File::Delete(ImageLocationTrial3_5);
	IO::File::Delete(ImageLocationTrial3_6);

	f.Writefile(T_to_string(ImageLocationTrial2_1), string(d.Trial2_1Bmp, sizeof(d.Trial2_1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial2_2), string(d.Trial2_2Bmp, sizeof(d.Trial2_2Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_1), string(d.Trial3_1Bmp, sizeof(d.Trial3_1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_2), string(d.Trial3_2Bmp, sizeof(d.Trial3_2Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_3), string(d.Trial3_1Bmp, sizeof(d.Trial3_3Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_4), string(d.Trial3_2Bmp, sizeof(d.Trial3_4Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_5), string(d.Trial3_1Bmp, sizeof(d.Trial3_5Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_6), string(d.Trial3_2Bmp, sizeof(d.Trial3_6Bmp)));

	pictureBoxTrial2_1->ImageLocation = ImageLocationTrial2_1;
	pictureBoxTrial2_2->ImageLocation = ImageLocationTrial2_2;
	pictureBoxTrial3_1->ImageLocation = ImageLocationTrial3_1;
	pictureBoxTrial3_2->ImageLocation = ImageLocationTrial3_2;
	pictureBoxTrial3_3->ImageLocation = ImageLocationTrial3_3;
	pictureBoxTrial3_4->ImageLocation = ImageLocationTrial3_4;
	pictureBoxTrial3_5->ImageLocation = ImageLocationTrial3_5;
	pictureBoxTrial3_6->ImageLocation = ImageLocationTrial3_6;


	textBox结论->Text = gcnew String(d.summing_up);
	textBoxTrial1_F_1->Text = gcnew String(d.Trial1_F_1);
	textBoxTrial1_F_2->Text = gcnew String(d.Trial1_F_2);
	textBoxTrial1_F_3->Text = gcnew String(d.Trial1_F_3);
	textBoxTrial1_F_4->Text = gcnew String(d.Trial1_F_4);
	textBoxTrial1_F_5->Text = gcnew String(d.Trial1_F_5);
	textBoxTrial1_F_6->Text = gcnew String(d.Trial1_F_6);

	labelTrial1_R_Ur1->Text = gcnew String(d.Trial1_R_Ur1);
	labelTrial1_R_Ur2->Text = gcnew String(d.Trial1_R_Ur2);
	labelTrial1_R_Ur3->Text = gcnew String(d.Trial1_R_Ur3);
	labelTrial1_R_Ur4->Text = gcnew String(d.Trial1_R_Ur4);
	labelTrial1_R_Ur5->Text = gcnew String(d.Trial1_R_Ur5);
	labelTrial1_R_Ur6->Text = gcnew String(d.Trial1_R_Ur6);

	labelTrial1_R_Ur1->Text = gcnew String(d.Trial1_R_Ur1);
	labelTrial1_R_Ur2->Text = gcnew String(d.Trial1_R_Ur2);
	labelTrial1_R_Ur3->Text = gcnew String(d.Trial1_R_Ur3);
	labelTrial1_R_Ur4->Text = gcnew String(d.Trial1_R_Ur4);
	labelTrial1_R_Ur5->Text = gcnew String(d.Trial1_R_Ur5);
	labelTrial1_R_Ur6->Text = gcnew String(d.Trial1_R_Ur6);

	labelTrial1_R_IR1->Text = gcnew String(d.Trial1_R_IR1);
	labelTrial1_R_IR2->Text = gcnew String(d.Trial1_R_IR2);
	labelTrial1_R_IR3->Text = gcnew String(d.Trial1_R_IR3);
	labelTrial1_R_IR4->Text = gcnew String(d.Trial1_R_IR4);
	labelTrial1_R_IR5->Text = gcnew String(d.Trial1_R_IR5);
	labelTrial1_R_IR6->Text = gcnew String(d.Trial1_R_IR6);

	textBoxTrial1_R_R1->Text = gcnew String(d.Trial1_R_R1);
	textBoxTrial1_R_R2->Text = gcnew String(d.Trial1_R_R2);
	textBoxTrial1_R_R3->Text = gcnew String(d.Trial1_R_R3);
	textBoxTrial1_R_R4->Text = gcnew String(d.Trial1_R_R4);
	textBoxTrial1_R_R5->Text = gcnew String(d.Trial1_R_R5);
	textBoxTrial1_R_R6->Text = gcnew String(d.Trial1_R_R6);

	labelTrial1_L_Ur1->Text = gcnew String(d.Trial1_L_Ur1);
	labelTrial1_L_Ur2->Text = gcnew String(d.Trial1_L_Ur2);
	labelTrial1_L_Ur3->Text = gcnew String(d.Trial1_L_Ur3);
	labelTrial1_L_Ur4->Text = gcnew String(d.Trial1_L_Ur4);
	labelTrial1_L_Ur5->Text = gcnew String(d.Trial1_L_Ur5);
	labelTrial1_L_Ur6->Text = gcnew String(d.Trial1_L_Ur6);

	labelTrial1_L_IL1->Text = gcnew String(d.Trial1_L_IL1);
	labelTrial1_L_IL2->Text = gcnew String(d.Trial1_L_IL2);
	labelTrial1_L_IL3->Text = gcnew String(d.Trial1_L_IL3);
	labelTrial1_L_IL4->Text = gcnew String(d.Trial1_L_IL4);
	labelTrial1_L_IL5->Text = gcnew String(d.Trial1_L_IL5);
	labelTrial1_L_IL6->Text = gcnew String(d.Trial1_L_IL6);

	textBoxTrial1_L_XL1->Text = gcnew String(d.Trial1_L_XL1);
	textBoxTrial1_L_XL2->Text = gcnew String(d.Trial1_L_XL2);
	textBoxTrial1_L_XL3->Text = gcnew String(d.Trial1_L_XL3);
	textBoxTrial1_L_XL4->Text = gcnew String(d.Trial1_L_XL4);
	textBoxTrial1_L_XL5->Text = gcnew String(d.Trial1_L_XL5);
	textBoxTrial1_L_XL6->Text = gcnew String(d.Trial1_L_XL6);


	labelTrial1_C_Ur1->Text = gcnew String(d.Trial1_C_Ur1);
	labelTrial1_C_Ur2->Text = gcnew String(d.Trial1_C_Ur2);
	labelTrial1_C_Ur3->Text = gcnew String(d.Trial1_C_Ur3);
	labelTrial1_C_Ur4->Text = gcnew String(d.Trial1_C_Ur4);
	labelTrial1_C_Ur5->Text = gcnew String(d.Trial1_C_Ur5);
	labelTrial1_C_Ur6->Text = gcnew String(d.Trial1_C_Ur6);

	labelTrial1_C_IC1->Text = gcnew String(d.Trial1_C_IC1);
	labelTrial1_C_IC2->Text = gcnew String(d.Trial1_C_IC2);
	labelTrial1_C_IC3->Text = gcnew String(d.Trial1_C_IC3);
	labelTrial1_C_IC4->Text = gcnew String(d.Trial1_C_IC4);
	labelTrial1_C_IC5->Text = gcnew String(d.Trial1_C_IC5);
	labelTrial1_C_IC6->Text = gcnew String(d.Trial1_C_IC6);
	textBoxTrial1_C_XC1->Text = gcnew String(d.Trial1_C_XC1);
	textBoxTrial1_C_XC2->Text = gcnew String(d.Trial1_C_XC2);
	textBoxTrial1_C_XC3->Text = gcnew String(d.Trial1_C_XC3);
	textBoxTrial1_C_XC4->Text = gcnew String(d.Trial1_C_XC4);
	textBoxTrial1_C_XC5->Text = gcnew String(d.Trial1_C_XC5);
	textBoxTrial1_C_XC6->Text = gcnew String(d.Trial1_C_XC6);

	textBoxTrial3_F_1->Text = gcnew String(d.Trial3_F_1);
	textBoxTrial3_F_2->Text = gcnew String(d.Trial3_F_2);
	textBoxTrial3_F_3->Text = gcnew String(d.Trial3_F_3);
	textBoxTrial3_F_3->Text = gcnew String(d.Trial3_F_4);
	textBoxTrial3_F_4->Text = gcnew String(d.Trial3_F_5);
	textBoxTrial3_F_5->Text = gcnew String(d.Trial3_F_6);

	textBoxTrial3_n1->Text = gcnew String(d.Trial3_n1);
	textBoxTrial3_n2->Text = gcnew String(d.Trial3_n2);
	textBoxTrial3_n3->Text = gcnew String(d.Trial3_n3);
	textBoxTrial3_n4->Text = gcnew String(d.Trial3_n4);
	textBoxTrial3_n5->Text = gcnew String(d.Trial3_n5);
	textBoxTrial3_n6->Text = gcnew String(d.Trial3_n6);


	textBoxTrial3_m1->Text = gcnew String(d.Trial3_m1);
	textBoxTrial3_m2->Text = gcnew String(d.Trial3_m2);
	textBoxTrial3_m3->Text = gcnew String(d.Trial3_m3);
	textBoxTrial3_m4->Text = gcnew String(d.Trial3_m4);
	textBoxTrial3_m5->Text = gcnew String(d.Trial3_m5);
	textBoxTrial3_m6->Text = gcnew String(d.Trial3_m6);
	textBoxTrial3_φ1->Text = gcnew String(d.Trial3_φ1);
	textBoxTrial3_φ2->Text = gcnew String(d.Trial3_φ2);
	textBoxTrial3_φ3->Text = gcnew String(d.Trial3_φ3);
	textBoxTrial3_φ4->Text = gcnew String(d.Trial3_φ4);
	textBoxTrial3_φ5->Text = gcnew String(d.Trial3_φ5);
	textBoxTrial3_φ6->Text = gcnew String(d.Trial3_φ6);


}

using namespace System::Windows::Forms::DataVisualization::Charting;

void RLC元件阻抗特性的测定::chartTrial3oad() {
	Series ^s = chartTrial3->Series[0];
	ChartArea ^ c = chartTrial3->ChartAreas[0];
	c->AxisX->Interval = 2;
	c->AxisY->Interval = 2;
	c->AxisX->ScrollBar->IsPositionedInside = true;
	c->AxisX->ScrollBar->Enabled = true;
	c->AxisX->Title = "频率V";
	c->AxisY->Title = "阻抗角φ";
	c->AxisY->TextOrientation = TextOrientation::Horizontal;
	s->ChartType = SeriesChartType::Line;
	s->IsVisibleInLegend = false;
	c->AxisX->LabelStyle->Format = "N1";
	c->AxisX->MajorGrid->LineColor = Color::Transparent;
	c->AxisY->MajorGrid->LineColor = Color::Transparent;

	s->Points->Clear();
	try {
		s->Name = "";
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_1->Text), Convert::ToSingle(textBoxTrial3_φ1->Text));
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_2->Text), Convert::ToSingle(textBoxTrial3_φ2->Text));
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_3->Text), Convert::ToSingle(textBoxTrial3_φ3->Text));
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_4->Text), Convert::ToSingle(textBoxTrial3_φ4->Text));
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_5->Text), Convert::ToSingle(textBoxTrial3_φ5->Text));
		s->Points->AddXY(Convert::ToSingle(textBoxTrial3_F_6->Text), Convert::ToSingle(textBoxTrial3_φ6->Text));
	}
	catch (System::Exception^ E) {

	}

}