#include "������.h"


using namespace ��ʦ�����̨;

void ������::SaveCorrectGrades() {
	fileSql f;
	ST_������ s;
	string data = f.ReadStruct(*fileName, sizeof(ST_������));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_������));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score3 = Convert::ToInt32(textBoxTrial3Score->Text);
		s.score4 = Convert::ToInt32(textBoxTrial4Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_������)))) {

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


void ������::CalScores() {
	try {
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);
		int g4 = Convert::ToInt32(textBoxTrial4Score->Text);
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		labelTotalGrade->Text = (g1 + g3 + g4).ToString();
	}
	catch (Exception^e) {

	}
}

void ������::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void ������::Priview()
{
	try {
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void ������::Load������Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_������ d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_������));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_������));

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
	textBoxTrial3Score->Text = d.score3.ToString();
	textBoxTrial4Score->Text = d.score4.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();

	textBoxTrial1_1����->Text = gcnew String(d.Trial1_1����);
	textBoxTrial1_2����->Text = gcnew String(d.Trial1_2����);

	textBoxTrial3_Line1_1->Text = gcnew String(d.Trial3_Line1_1);
	textBoxTrial3_Line1_2->Text = gcnew String(d.Trial3_Line1_2);
	textBoxTrial3_Line1_3->Text = gcnew String(d.Trial3_Line1_3);
	textBoxTrial3_Line1_4->Text = gcnew String(d.Trial3_Line1_4);
	textBoxTrial3_Line1_5->Text = gcnew String(d.Trial3_Line1_5);
	textBoxTrial3_Line1_6->Text = gcnew String(d.Trial3_Line1_6);

	textBoxTrial3_Line2_1->Text = gcnew String(d.Trial3_Line2_1);
	textBoxTrial3_Line2_2->Text = gcnew String(d.Trial3_Line2_2);
	textBoxTrial3_Line2_3->Text = gcnew String(d.Trial3_Line2_3);
	textBoxTrial3_Line2_4->Text = gcnew String(d.Trial3_Line2_4);
	textBoxTrial3_Line2_5->Text = gcnew String(d.Trial3_Line2_5);
	textBoxTrial3_Line2_6->Text = gcnew String(d.Trial3_Line2_6);

	textBoxTrial4_Line1_1->Text = gcnew String(d.Trial4_Line1_1);
	textBoxTrial4_Line1_2->Text = gcnew String(d.Trial4_Line1_2);
	textBoxTrial4_Line1_3->Text = gcnew String(d.Trial4_Line1_3);
	textBoxTrial4_Line1_4->Text = gcnew String(d.Trial4_Line1_4);
	textBoxTrial4_Line1_5->Text = gcnew String(d.Trial4_Line1_5);
	textBoxTrial4_Line1_6->Text = gcnew String(d.Trial4_Line1_6);

	textBoxTrial4_Line2_1->Text = gcnew String(d.Trial4_Line2_1);
	textBoxTrial4_Line2_2->Text = gcnew String(d.Trial4_Line2_2);
	textBoxTrial4_Line2_3->Text = gcnew String(d.Trial4_Line2_3);
	textBoxTrial4_Line2_4->Text = gcnew String(d.Trial4_Line2_4);
	textBoxTrial4_Line2_5->Text = gcnew String(d.Trial4_Line2_5);
	textBoxTrial4_Line2_6->Text = gcnew String(d.Trial4_Line2_6);
}