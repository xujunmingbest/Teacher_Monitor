#include "��������������Ĳ���.h"


using namespace ��ʦ�����̨;

void ��������������Ĳ���::SaveCorrectGrades() {
	fileSql f;
	ST_��������������Ĳ��� s;
	string data = f.ReadStruct(*fileName, sizeof(ST_��������������Ĳ���));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_��������������Ĳ���));
	try {
		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_��������������Ĳ���)))) {

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


void ��������������Ĳ���::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);

		labelTotalGrade->Text = (g1).ToString();
	}
	catch (Exception^e) {

	}
}

void ��������������Ĳ���::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void ��������������Ĳ���::Priview()
{
	try {
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void ��������������Ĳ���::Load��������������Ĳ���Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_��������������Ĳ��� d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_��������������Ĳ���));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_��������������Ĳ���));

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

	labelTotalGrade->Text = ti.totalscore.ToString();

	labelTrial2_U_1->Text = gcnew String(d.Trial2_U_1);
	labelTrial2_U_2->Text = gcnew String(d.Trial2_U_2);
	labelTrial2_U_3->Text = gcnew String(d.Trial2_U_3);
	labelTrial2_U_4->Text = gcnew String(d.Trial2_U_4);

	labelTrial2_UR_1->Text = gcnew String(d.Trial2_UR_1);
	labelTrial2_UR_2->Text = gcnew String(d.Trial2_UR_2);
	labelTrial2_UR_3->Text = gcnew String(d.Trial2_UR_3);
	labelTrial2_UR_4->Text = gcnew String(d.Trial2_UR_4);

	labelTrial2_UL_1->Text = gcnew String(d.Trial2_UL_1);
	labelTrial2_UL_2->Text = gcnew String(d.Trial2_UL_2);
	labelTrial2_UL_3->Text = gcnew String(d.Trial2_UL_3);
	labelTrial2_UL_4->Text = gcnew String(d.Trial2_UL_4);

	labelTrial2_UC_1->Text = gcnew String(d.Trial2_UC_1);
	labelTrial2_UC_2->Text = gcnew String(d.Trial2_UC_2);
	labelTrial2_UC_3->Text = gcnew String(d.Trial2_UC_3);
	labelTrial2_UC_4->Text = gcnew String(d.Trial2_UC_4);

	labelTrial2_I_1->Text = gcnew String(d.Trial2_I_1);
	labelTrial2_I_2->Text = gcnew String(d.Trial2_I_2);
	labelTrial2_I_3->Text = gcnew String(d.Trial2_I_3);
	labelTrial2_I_4->Text = gcnew String(d.Trial2_I_4);

	labelTrial2_P_1->Text = gcnew String(d.Trial2_P_1);
	labelTrial2_P_2->Text = gcnew String(d.Trial2_P_2);
	labelTrial2_P_3->Text = gcnew String(d.Trial2_P_3);
	labelTrial2_P_4->Text = gcnew String(d.Trial2_P_4);

	textBoxTrial2_��_1->Text = gcnew String(d.Trial2_��_1);
	textBoxTrial2_��_2->Text = gcnew String(d.Trial2_��_2);
	textBoxTrial2_��_3->Text = gcnew String(d.Trial2_��_3);
	textBoxTrial2_��_4->Text = gcnew String(d.Trial2_��_4);

	textBoxTrial2_Load_1->Text = gcnew String(d.Trial2_Load_1);
	textBoxTrial2_Load_2->Text = gcnew String(d.Trial2_Load_2);
	textBoxTrial2_Load_3->Text = gcnew String(d.Trial2_Load_3);
	textBoxTrial2_Load_4->Text = gcnew String(d.Trial2_Load_4);
}