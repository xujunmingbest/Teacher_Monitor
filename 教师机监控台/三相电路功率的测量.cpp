#include "�����·���ʵĲ���.h"

using namespace ��ʦ�����̨;

void �����·���ʵĲ���::SaveCorrectGrades() {
	fileSql f;
	ST_�����·���ʵĲ��� s;
	string data = f.ReadStruct(*fileName, sizeof(ST_�����·���ʵĲ���));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_�����·���ʵĲ���));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);
		s.score3 = Convert::ToInt32(textBoxTrial3Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_�����·���ʵĲ���)))) {

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


void �����·���ʵĲ���::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);
		labelTotalGrade->Text = (g1 + g2 + g3 ).ToString();
	}
	catch (Exception^e) {

	}
}

void �����·���ʵĲ���::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void �����·���ʵĲ���::Priview()
{
	try {

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void �����·���ʵĲ���::Load�����·���ʵĲ���Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_�����·���ʵĲ��� d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_�����·���ʵĲ���));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_�����·���ʵĲ���));

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