#include "��·״̬�켣�Ĺ۲�.h"

using namespace ��ʦ�����̨;

void ��·״̬�켣�Ĺ۲�::SaveCorrectGrades() {
	fileSql f;
	ST_��·״̬�켣�Ĺ۲� s;
	string data = f.ReadStruct(*fileName, sizeof(ST_��·״̬�켣�Ĺ۲�));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_��·״̬�켣�Ĺ۲�));
	try {
		s.ti.totalscore = Convert::ToInt32(textBoxTrial1Score->Text);



		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_��·״̬�켣�Ĺ۲�)))) {

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


void ��·״̬�켣�Ĺ۲�::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);

		labelTotalGrade->Text = (g1).ToString();
	}
	catch (Exception^e) {

	}
}

void ��·״̬�켣�Ĺ۲�::Print() {
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void ��·״̬�켣�Ĺ۲�::Priview()
{
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void ��·״̬�켣�Ĺ۲�::Load��·״̬�켣�Ĺ۲�Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_��·״̬�켣�Ĺ۲� d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_��·״̬�켣�Ĺ۲�));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_��·״̬�켣�Ĺ۲�));

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

	string Name = string(BMPTEMP) + "��·״̬�켣�Ĺ۲�";
	String^ ImageLocationTrial1 = gcnew String(string(Name + "Trial1.bmp").c_str());
	String^ ImageLocationTrial2 = gcnew String(string(Name + "Trial2.bmp").c_str());
	String^ ImageLocationTrial3 = gcnew String(string(Name + "Trial3.bmp").c_str());

	//��ɾ��ԭ���е��ļ�
	IO::File::Delete(ImageLocationTrial1);
	IO::File::Delete(ImageLocationTrial2);
	IO::File::Delete(ImageLocationTrial3);

	f.Writefile(T_to_string(ImageLocationTrial1), string(d.Trial1Bmp, sizeof(d.Trial1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial2), string(d.Trial2Bmp, sizeof(d.Trial2Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3), string(d.Trial3Bmp, sizeof(d.Trial3Bmp)));


	pictureBox1->ImageLocation = ImageLocationTrial1;
	pictureBox2->ImageLocation = ImageLocationTrial2;
	pictureBox3->ImageLocation = ImageLocationTrial3;

	label����->Text = gcnew String(d.summing_up);
}
