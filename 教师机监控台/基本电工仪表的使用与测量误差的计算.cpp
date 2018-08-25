#include "�����繤�Ǳ��ʹ����������ļ���.h"


using namespace ��ʦ�����̨;

void �����繤�Ǳ��ʹ����������ļ���::SaveCorrectGrades() {
	fileSql f;
	ST_�����繤�Ǳ��ʹ����������ļ��� s;
	string data = f.ReadStruct(*fileName, sizeof(ST_�����繤�Ǳ��ʹ����������ļ���));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_�����繤�Ǳ��ʹ����������ļ���));
	try {

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_�����繤�Ǳ��ʹ����������ļ���)))) {

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


void �����繤�Ǳ��ʹ����������ļ���::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);

		labelTotalGrade->Text = (g1).ToString();
	}
	catch (Exception^e) {

	}
}

void �����繤�Ǳ��ʹ����������ļ���::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void �����繤�Ǳ��ʹ����������ļ���::Priview()
{
	try {
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void �����繤�Ǳ��ʹ����������ļ���::Load�����繤�Ǳ��ʹ����������ļ���Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_�����繤�Ǳ��ʹ����������ļ��� d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_�����繤�Ǳ��ʹ����������ļ���));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_�����繤�Ǳ��ʹ����������ļ���));

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

	textBoxTrial1Score->Text = d.ti.totalscore.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();

	labelTrial1_IA_5mA->Text = gcnew String(d.Trial1_IA_5mA);
	labelTrial1_IA_5V->Text = gcnew String(d.Trial1_IA_5V);
	labelTrial1_IA1_5mA->Text = gcnew String(d.Trial1_IA1_5mA);
	labelTrial1_IA1_5V->Text = gcnew String(d.Trial1_IA1_5V);
	textBoxTrial1_RB_5mA->Text = gcnew String(d.Trial1_RB_5mA);
	textBoxTrial1_RB_5V->Text = gcnew String(d.Trial1_RB_5V);
	textBoxTrial1_R1_5mA->Text = gcnew String(d.Trial1_R1_5mA);
	textBoxTrial1_R1_5V->Text = gcnew String(d.Trial1_R1_5V);
	textBoxTrial1_RA_5mA->Text = gcnew String(d.Trial1_RA_5mA);
	textBoxTrial1_RA_5V->Text = gcnew String(d.Trial1_RA_5V);

}