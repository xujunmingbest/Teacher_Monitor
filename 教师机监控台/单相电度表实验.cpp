#include "�����ȱ�ʵ��.h"

using namespace ��ʦ�����̨;

void �����ȱ�ʵ��::SaveCorrectGrades() {
	fileSql f;
	ST_�����ȱ�ʵ�� s;
	string data = f.ReadStruct(*fileName, sizeof(ST_�����ȱ�ʵ��));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_�����ȱ�ʵ��));
	try {
		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_�����ȱ�ʵ��)))) {

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


void �����ȱ�ʵ��::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);

		labelTotalGrade->Text = (g1).ToString();
	}
	catch (Exception^e) {

	}
}

void �����ȱ�ʵ��::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void �����ȱ�ʵ��::Priview()
{
	try {
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void �����ȱ�ʵ��::Load�����ȱ�ʵ��Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_�����ȱ�ʵ�� d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_�����ȱ�ʵ��));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_�����ȱ�ʵ��));

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

	textBoxTrial1Score->Text = ti.totalscore.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();
	textBoxTrial1_IN->Text = gcnew String(d.Trial1_IN);
	textBoxTrial1_N->Text = gcnew String(d.Trial1_N);
	textBoxTrial1_UN->Text = gcnew String(d.Trial1_UN);
	textBoxTrial1_accuracy->Text = gcnew String(d.Trial1_accuracy);
	labelTrial1_mea_V->Text = gcnew String(d.Trial1_mea_V);
	labelTrial1_mea_I->Text = gcnew String(d.Trial1_mea_I);
	labelTrial1_mea_P->Text = gcnew String(d.Trial1_mea_P);
	textBoxTrial1_mea_time->Text = gcnew String(d.Trial1_mea_time);
	textBoxTrial1_mea_n->Text = gcnew String(d.Trial1_mea_n);
	textBoxTrial1_cal_meaW->Text = gcnew String(d.Trial1_cal_meaW);
	textBoxTrial1_cal_calW->Text = gcnew String(d.Trial1_cal_calW);
	textBoxTrial1_cal_WW->Text = gcnew String(d.Trial1_cal_WW);
	textBoxTrial1_cal_N->Text = gcnew String(d.Trial1_cal_N);
}