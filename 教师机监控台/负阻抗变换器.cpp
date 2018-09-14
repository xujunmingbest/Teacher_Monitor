#include "���迹�任��.h"

using namespace ��ʦ�����̨;

void ���迹�任��::SaveCorrectGrades() {
	fileSql f;
	ST_���迹�任�� s;
	string data = f.ReadStruct(*fileName, sizeof(ST_���迹�任��));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_���迹�任��));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_���迹�任��)))) {

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


void ���迹�任��::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		labelTotalGrade->Text = (g1 + g2 ).ToString();
	}
	catch (Exception^e) {

	}
}

void ���迹�任��::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void ���迹�任��::Priview()
{
	try {

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void ���迹�任��::Load���迹�任��Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_���迹�任�� d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_���迹�任��));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_���迹�任��));

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

	string Name = string(MONITORTEMP) + "���迹�任��";
	String^ ImageLocation1 = gcnew String(string(Name + "1.bmp").c_str());
	String^ ImageLocation2 = gcnew String(string(Name + "2.bmp").c_str());
	//��ɾ��ԭ���е��ļ�
	IO::File::Delete(ImageLocation1);
	IO::File::Delete(ImageLocation2);
	f.Writefile(T_to_string(ImageLocation1), string(d.Trial2_Bmp_1, sizeof(d.Trial2_Bmp_1)));
	f.Writefile(T_to_string(ImageLocation2), string(d.Trial2_Bmp_2, sizeof(d.Trial2_Bmp_2)));

	pictureBox_1->ImageLocation = ImageLocation1;
	pictureBox_2->ImageLocation = ImageLocation2;
}

using namespace System::Windows::Forms::DataVisualization::Charting;
void ���迹�任��::chart_load() {
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
		s1->Name = "RL=300��";
		s2->Name = "RL=600��";
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