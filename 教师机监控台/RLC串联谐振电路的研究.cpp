#include "RLC����г���·���о�.h"

#include "E:/c++/libfilesql/libfilesql/libfilesql.h"

using namespace ��ʦ�����̨;

void RLC����г���·���о�::SaveCorrectGrades() {
	fileSql f;
	ST_RLC����г���·���о� s;
	string data = f.ReadStruct(*fileName, sizeof(ST_RLC����г���·���о�));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_RLC����г���·���о�));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);
		s.score3 = Convert::ToInt32(textBoxTrial3Score->Text);
		s.score4 = Convert::ToInt32(textBoxTrial4Score->Text);
		s.score5 = Convert::ToInt32(textBoxTrial5Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_RLC����г���·���о�)))) {

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


void RLC����г���·���о�::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);
		int g4 = Convert::ToInt32(textBoxTrial4Score->Text);
		int g5 = Convert::ToInt32(textBoxTrial5Score->Text);

		labelTotalGrade->Text = (g1 + g2 + g3 + g4 + g5).ToString();
	}
	catch (Exception^e) {

	}
}

void RLC����г���·���о�::Print() {
	try {
		if (SelectedArea == "panel1") {

		}
		else {
			printDocument1->DefaultPageSettings->Landscape = true;

		}
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void RLC����г���·���о�::Priview()
{
	try {
		if (SelectedArea == "panel1") {
			
		}
		else {
			printDocument1->DefaultPageSettings->Landscape = true;
		
		}
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void RLC����г���·���о�::LoadRLC����г���·���о�Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_RLC����г���·���о� d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_RLC����г���·���о�));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_RLC����г���·���о�));

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
	textBoxTrial4Score->Text = d.score4.ToString();
	textBoxTrial5Score->Text = d.score5.ToString();

	labelTotalGrade->Text = ti.totalscore.ToString();

	string Name = string(BMPTEMP) + "RLC����г���·���о�";
	String^ ImageLocationTrial1 = gcnew String(string(Name + "Trial1.bmp").c_str());

	//��ɾ��ԭ���е��ļ�
	IO::File::Delete(ImageLocationTrial1);
	f.Writefile(T_to_string(ImageLocationTrial1), string(d.Trial1Bmp, sizeof(d.Trial1Bmp)));
	pictureBoxTrial1->ImageLocation = ImageLocationTrial1;

	textBox����->Text = gcnew String(d.summing_up);


	textBoxTrial2_F->Text = gcnew String(d.Trial2_F);
	textBoxTrial2_F->Text = gcnew String(d.Trial2_Uc);
	textBoxTrial2_F->Text = gcnew String(d.Trial2_UL);

	textBoxTrial5_F1->Text = gcnew String(d.Trial3_F1);
	textBoxTrial5_F2->Text = gcnew String(d.Trial3_F2);
	textBoxTrial5_F3->Text = gcnew String(d.Trial3_F3);
	textBoxTrial5_F4->Text = gcnew String(d.Trial3_F4);
	textBoxTrial5_F5->Text = gcnew String(d.Trial3_F5);
	textBoxTrial5_F6->Text = gcnew String(d.Trial3_F6);
	textBoxTrial5_F7->Text = gcnew String(d.Trial3_F7);
	textBoxTrial5_F8->Text = gcnew String(d.Trial3_F8);
	textBoxTrial5_F9->Text = gcnew String(d.Trial3_F9);
	textBoxTrial5_F10->Text = gcnew String(d.Trial3_F10);
	textBoxTrial5_F11->Text = gcnew String(d.Trial3_F11);
	textBoxTrial5_F12->Text = gcnew String(d.Trial3_F12);
	textBoxTrial5_F13->Text = gcnew String(d.Trial3_F13);
	textBoxTrial5_F14->Text = gcnew String(d.Trial3_F14);
	textBoxTrial5_F15->Text = gcnew String(d.Trial3_F15);
	textBoxTrial5_F16->Text = gcnew String(d.Trial3_F16);

	labelTrial3_U0_1->Text = gcnew String(d.Trial3_U0_1);
	labelTrial3_U0_2->Text = gcnew String(d.Trial3_U0_2);
	labelTrial3_U0_3->Text = gcnew String(d.Trial3_U0_3);
	labelTrial3_U0_4->Text = gcnew String(d.Trial3_U0_4);
	labelTrial3_U0_5->Text = gcnew String(d.Trial3_U0_5);
	labelTrial3_U0_6->Text = gcnew String(d.Trial3_U0_6);
	labelTrial3_U0_7->Text = gcnew String(d.Trial3_U0_7);
	labelTrial3_U0_8->Text = gcnew String(d.Trial3_U0_8);
	labelTrial3_U0_9->Text = gcnew String(d.Trial3_U0_9);
	labelTrial3_U0_10->Text = gcnew String(d.Trial3_U0_10);
	labelTrial3_U0_11->Text = gcnew String(d.Trial3_U0_11);
	labelTrial3_U0_12->Text = gcnew String(d.Trial3_U0_12);
	labelTrial3_U0_13->Text = gcnew String(d.Trial3_U0_13);
	labelTrial3_U0_14->Text = gcnew String(d.Trial3_U0_14);
	labelTrial3_U0_15->Text = gcnew String(d.Trial3_U0_15);
	labelTrial3_U0_16->Text = gcnew String(d.Trial3_U0_16);

	labelTrial3_UL_1->Text = gcnew String(d.Trial3_UL_1);
	labelTrial3_UL_2->Text = gcnew String(d.Trial3_UL_2);
	labelTrial3_UL_3->Text = gcnew String(d.Trial3_UL_3);
	labelTrial3_UL_4->Text = gcnew String(d.Trial3_UL_4);
	labelTrial3_UL_5->Text = gcnew String(d.Trial3_UL_5);
	labelTrial3_UL_6->Text = gcnew String(d.Trial3_UL_6);
	labelTrial3_UL_7->Text = gcnew String(d.Trial3_UL_7);
	labelTrial3_UL_8->Text = gcnew String(d.Trial3_UL_8);
	labelTrial3_UL_9->Text = gcnew String(d.Trial3_UL_9);
	labelTrial3_UL_10->Text = gcnew String(d.Trial3_UL_10);
	labelTrial3_UL_11->Text = gcnew String(d.Trial3_UL_11);
	labelTrial3_UL_12->Text = gcnew String(d.Trial3_UL_12);
	labelTrial3_UL_13->Text = gcnew String(d.Trial3_UL_13);
	labelTrial3_UL_14->Text = gcnew String(d.Trial3_UL_14);
	labelTrial3_UL_15->Text = gcnew String(d.Trial3_UL_15);
	labelTrial3_UL_16->Text = gcnew String(d.Trial3_UL_16);


	labelTrial3_Uc_1->Text = gcnew String(d.Trial3_Uc_1);
	labelTrial3_Uc_2->Text = gcnew String(d.Trial3_Uc_2);
	labelTrial3_Uc_3->Text = gcnew String(d.Trial3_Uc_3);
	labelTrial3_Uc_4->Text = gcnew String(d.Trial3_Uc_4);
	labelTrial3_Uc_5->Text = gcnew String(d.Trial3_Uc_5);
	labelTrial3_Uc_6->Text = gcnew String(d.Trial3_Uc_6);
	labelTrial3_Uc_7->Text = gcnew String(d.Trial3_Uc_7);
	labelTrial3_Uc_8->Text = gcnew String(d.Trial3_Uc_8);
	labelTrial3_Uc_9->Text = gcnew String(d.Trial3_Uc_9);
	labelTrial3_Uc_10->Text = gcnew String(d.Trial3_Uc_10);
	labelTrial3_Uc_11->Text = gcnew String(d.Trial3_Uc_11);
	labelTrial3_Uc_12->Text = gcnew String(d.Trial3_Uc_12);
	labelTrial3_Uc_13->Text = gcnew String(d.Trial3_Uc_13);
	labelTrial3_Uc_14->Text = gcnew String(d.Trial3_Uc_14);
	labelTrial3_Uc_15->Text = gcnew String(d.Trial3_Uc_15);
	labelTrial3_Uc_16->Text = gcnew String(d.Trial3_Uc_16);
	textBoxTrial3_Fo->Text = gcnew String(d.Trial3_Fo);
	textBoxTrial3_Q->Text = gcnew String(d.Trial3_Q);
	textBoxTrial3F2_F1->Text = gcnew String(d.Trial3F2_F1);

	textBoxTrial4_F->Text = gcnew String(d.Trial4_F);
	labelTrial4_Uc->Text = gcnew String(d.Trial4_Uc);
	labelTrial4_UL->Text = gcnew String(d.Trial4_UL);

	textBoxTrial5_F1->Text = gcnew String(d.Trial5_F1);
	textBoxTrial5_F2->Text = gcnew String(d.Trial5_F2);
	textBoxTrial5_F3->Text = gcnew String(d.Trial5_F3);
	textBoxTrial5_F4->Text = gcnew String(d.Trial5_F4);
	textBoxTrial5_F5->Text = gcnew String(d.Trial5_F5);
	textBoxTrial5_F6->Text = gcnew String(d.Trial5_F6);
	textBoxTrial5_F7->Text = gcnew String(d.Trial5_F7);
	textBoxTrial5_F8->Text = gcnew String(d.Trial5_F8);
	textBoxTrial5_F9->Text = gcnew String(d.Trial5_F9);
	textBoxTrial5_F10->Text = gcnew String(d.Trial5_F10);
	textBoxTrial5_F11->Text = gcnew String(d.Trial5_F11);
	textBoxTrial5_F12->Text = gcnew String(d.Trial5_F12);
	textBoxTrial5_F13->Text = gcnew String(d.Trial5_F13);
	textBoxTrial5_F14->Text = gcnew String(d.Trial5_F14);
	textBoxTrial5_F15->Text = gcnew String(d.Trial5_F15);
	textBoxTrial5_F16->Text = gcnew String(d.Trial5_F16);

	labelTrial5_U0_1->Text = gcnew String(d.Trial5_U0_1);
	labelTrial5_U0_2->Text = gcnew String(d.Trial5_U0_2);
	labelTrial5_U0_3->Text = gcnew String(d.Trial5_U0_3);
	labelTrial5_U0_4->Text = gcnew String(d.Trial5_U0_4);
	labelTrial5_U0_5->Text = gcnew String(d.Trial5_U0_5);
	labelTrial5_U0_6->Text = gcnew String(d.Trial5_U0_6);
	labelTrial5_U0_7->Text = gcnew String(d.Trial5_U0_7);
	labelTrial5_U0_8->Text = gcnew String(d.Trial5_U0_8);
	labelTrial5_U0_9->Text = gcnew String(d.Trial5_U0_9);
	labelTrial5_U0_10->Text = gcnew String(d.Trial5_U0_10);
	labelTrial5_U0_11->Text = gcnew String(d.Trial5_U0_11);
	labelTrial5_U0_12->Text = gcnew String(d.Trial5_U0_12);
	labelTrial5_U0_13->Text = gcnew String(d.Trial5_U0_13);
	labelTrial5_U0_14->Text = gcnew String(d.Trial5_U0_14);
	labelTrial5_U0_15->Text = gcnew String(d.Trial5_U0_15);
	labelTrial5_U0_16->Text = gcnew String(d.Trial5_U0_16);

	labelTrial5_UL_1->Text = gcnew String(d.Trial5_UL_1);
	labelTrial5_UL_2->Text = gcnew String(d.Trial5_UL_2);
	labelTrial5_UL_3->Text = gcnew String(d.Trial5_UL_3);
	labelTrial5_UL_4->Text = gcnew String(d.Trial5_UL_4);
	labelTrial5_UL_5->Text = gcnew String(d.Trial5_UL_5);
	labelTrial5_UL_6->Text = gcnew String(d.Trial5_UL_6);
	labelTrial5_UL_7->Text = gcnew String(d.Trial5_UL_7);
	labelTrial5_UL_8->Text = gcnew String(d.Trial5_UL_8);
	labelTrial5_UL_9->Text = gcnew String(d.Trial5_UL_9);
	labelTrial5_UL_10->Text = gcnew String(d.Trial5_UL_10);
	labelTrial5_UL_11->Text = gcnew String(d.Trial5_UL_11);
	labelTrial5_UL_12->Text = gcnew String(d.Trial5_UL_12);
	labelTrial5_UL_13->Text = gcnew String(d.Trial5_UL_13);
	labelTrial5_UL_14->Text = gcnew String(d.Trial5_UL_14);
	labelTrial5_UL_15->Text = gcnew String(d.Trial5_UL_15);
	labelTrial5_UL_16->Text = gcnew String(d.Trial5_UL_16);


	labelTrial5_Uc_1->Text = gcnew String(d.Trial5_Uc_1);
	labelTrial5_Uc_2->Text = gcnew String(d.Trial5_Uc_2);
	labelTrial5_Uc_3->Text = gcnew String(d.Trial5_Uc_3);
	labelTrial5_Uc_4->Text = gcnew String(d.Trial5_Uc_4);
	labelTrial5_Uc_5->Text = gcnew String(d.Trial5_Uc_5);
	labelTrial5_Uc_6->Text = gcnew String(d.Trial5_Uc_6);
	labelTrial5_Uc_7->Text = gcnew String(d.Trial5_Uc_7);
	labelTrial5_Uc_8->Text = gcnew String(d.Trial5_Uc_8);
	labelTrial5_Uc_9->Text = gcnew String(d.Trial5_Uc_9);
	labelTrial5_Uc_10->Text = gcnew String(d.Trial5_Uc_10);
	labelTrial5_Uc_11->Text = gcnew String(d.Trial5_Uc_11);
	labelTrial5_Uc_12->Text = gcnew String(d.Trial5_Uc_12);
	labelTrial5_Uc_13->Text = gcnew String(d.Trial5_Uc_13);
	labelTrial5_Uc_14->Text = gcnew String(d.Trial5_Uc_14);
	labelTrial5_Uc_15->Text = gcnew String(d.Trial5_Uc_15);
	labelTrial5_Uc_16->Text = gcnew String(d.Trial5_Uc_16);
	textBoxTrial5_Fo->Text = gcnew String(d.Trial5_Fo);
	textBoxTrial5_Q->Text = gcnew String(d.Trial5_Q);
	textBoxTrial5F2_F1->Text = gcnew String(d.Trial5F2_F1);
}