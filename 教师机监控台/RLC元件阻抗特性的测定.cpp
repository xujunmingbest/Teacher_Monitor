#include "RLCԪ���迹���ԵĲⶨ.h"
#include "E:/c++/libfilesql/libfilesql/libfilesql.h"

using namespace ��ʦ�����̨;

void RLCԪ���迹���ԵĲⶨ::SaveCorrectGrades() {
	fileSql f;
	ST_RLCԪ���迹���ԵĲⶨ s;
	string data = f.ReadStruct(*fileName, sizeof(ST_RLCԪ���迹���ԵĲⶨ));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_RLCԪ���迹���ԵĲⶨ));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);
		s.score3 = Convert::ToInt32(textBoxTrial3Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_RLCԪ���迹���ԵĲⶨ)))) {

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


void RLCԪ���迹���ԵĲⶨ::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);

		labelTotalGrade->Text = (g1 + g2 + g3 ).ToString();
	}
	catch (Exception^e) {

	}
}

void RLCԪ���迹���ԵĲⶨ::Print() {
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void RLCԪ���迹���ԵĲⶨ::Priview()
{
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void RLCԪ���迹���ԵĲⶨ::LoadRLCԪ���迹���ԵĲⶨData(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_RLCԪ���迹���ԵĲⶨ d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_RLCԪ���迹���ԵĲⶨ));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_RLCԪ���迹���ԵĲⶨ));

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

	string Name = string(BMPTEMP) + "RLCԪ���迹���ԵĲⶨ���";
	String^ ImageLocationTrial2_1 = gcnew String(string(Name + "Trial2_1.bmp").c_str());
	String^ ImageLocationTrial2_2 = gcnew String(string(Name + "Trial2_2.bmp").c_str());

	//��ɾ��ԭ���е��ļ�
	IO::File::Delete(ImageLocationTrial2_1);
	IO::File::Delete(ImageLocationTrial2_2);

	f.Writefile(T_to_string(ImageLocationTrial2_1), string(d.Trial2_1Bmp, sizeof(d.Trial2_1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial2_2), string(d.Trial2_2Bmp, sizeof(d.Trial2_2Bmp)));


	pictureBoxTrial2_1->ImageLocation = ImageLocationTrial2_1;
	pictureBoxTrial2_2->ImageLocation = ImageLocationTrial2_2;


	textBox����->Text = gcnew String(d.summing_up);
	labelTrial1_F->Text = gcnew String(d.Trial1_F);
	labelTrial1_R_Ur->Text = gcnew String(d.Trial1_R_Ur);
	labelTrial1_R_IR->Text = gcnew String(d.Trial1_R_IR);
	textBoxTrial1_R_R->Text = gcnew String(d.Trial1_R_R);
	labelTrial1_L_Ur->Text = gcnew String(d.Trial1_L_Ur);
	labelTrial1_L_IL->Text = gcnew String(d.Trial1_L_IL);
	textBoxTrial1_L_XL->Text = gcnew String(d.Trial1_L_XL);
	labelTrial1_C_Ur->Text = gcnew String(d.Trial1_C_Ur);
	labelTrial1_C_IC->Text = gcnew String(d.Trial1_C_IC);
	textBoxTrial1_C_XC->Text = gcnew String(d.Trial1_C_XC);

	labelTrial3_F->Text = gcnew String(d.Trial3_F);
	textBoxTrial3_n->Text = gcnew String(d.Trial3_n);
	textBoxTrial3_m->Text = gcnew String(d.Trial3_m);
	textBoxTrial3_��->Text = gcnew String(d.Trial3_��);


}