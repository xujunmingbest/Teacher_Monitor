#include "һ�׵�·����Ӧ����.h"

using namespace ��ʦ�����̨;

void һ�׵�·����Ӧ����::SaveCorrectGrades() {
	fileSql f;
	ST_һ�׵�·����Ӧ���� s;
	string data = f.ReadStruct(*fileName, sizeof(ST_һ�׵�·����Ӧ����));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_һ�׵�·����Ӧ����));
	try {
		s.Trial1Score = Convert::ToInt32(textBoxTrial1Score->Text);
		s.Trial2Score = Convert::ToInt32(textBoxTrial2Score->Text);
		s.Trial3Score = Convert::ToInt32(textBoxTrial3Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_һ�׵�·����Ӧ����)))) {

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


void һ�׵�·����Ӧ����::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);
		labelTotalGrade->Text = (g1 + g2 + g3).ToString();
	}
	catch (Exception^e) {

	}
}

void һ�׵�·����Ӧ����::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void һ�׵�·����Ӧ����::Priview()
{
	try {

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}

void һ�׵�·����Ӧ����::Loadһ�׵�·����Ӧ����Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_һ�׵�·����Ӧ���� d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_һ�׵�·����Ӧ����));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_һ�׵�·����Ӧ����));

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

	textBoxTrial1Score->Text = d.Trial1Score.ToString();
	textBoxTrial2Score->Text = d.Trial2Score.ToString();
	textBoxTrial3Score->Text = d.Trial3Score.ToString();

	labelTotalGrade->Text = ti.totalscore.ToString();
	string Name = string(BMPTEMP) + "һ�׵�·����Ӧ����";
	String^ ImageLocationTrial1_in = gcnew String(string(Name + "trial1_in.bmp").c_str());
	String^ ImageLocationTrial1_out = gcnew String(string(Name + "trial1_out.bmp").c_str());
	String^ ImageLocationTrial2_in = gcnew String(string(Name + "trial2_in.bmp").c_str());
	String^ ImageLocationTrial2_out = gcnew String(string(Name + "trial2_out.bmp").c_str());
	String^ ImageLocationTrial3_in = gcnew String(string(Name + "trial3_in.bmp").c_str());
	String^ ImageLocationTrial3_out = gcnew String(string(Name + "trial3_out.bmp").c_str());
	//��ɾ��ԭ���е��ļ�
	IO::File::Delete(ImageLocationTrial1_in);
	IO::File::Delete(ImageLocationTrial1_out);
	IO::File::Delete(ImageLocationTrial2_in);
	IO::File::Delete(ImageLocationTrial2_out);
	IO::File::Delete(ImageLocationTrial3_in);
	IO::File::Delete(ImageLocationTrial3_out);
	f.Writefile(T_to_string(ImageLocationTrial1_in), string(d.Trial1Bmp_in, sizeof(d.Trial1Bmp_in)));
	f.Writefile(T_to_string(ImageLocationTrial1_out), string(d.Trial1Bmp_out, sizeof(d.Trial1Bmp_out)));
	f.Writefile(T_to_string(ImageLocationTrial2_in), string(d.Trial2Bmp_in, sizeof(d.Trial2Bmp_in)));
	f.Writefile(T_to_string(ImageLocationTrial2_out), string(d.Trial2Bmp_out, sizeof(d.Trial2Bmp_out)));
	f.Writefile(T_to_string(ImageLocationTrial3_in), string(d.Trial3Bmp_in, sizeof(d.Trial3Bmp_in)));
	f.Writefile(T_to_string(ImageLocationTrial3_out), string(d.Trial3Bmp_out, sizeof(d.Trial3Bmp_out)));

	textBoxtrial��->Text = gcnew String(d.��);
	pictureBoxTrial1_in->ImageLocation = ImageLocationTrial1_in;
	pictureBoxTrial1_out->ImageLocation = ImageLocationTrial1_out;
	pictureBoxTrial2_in->ImageLocation = ImageLocationTrial2_in;
	pictureBoxTrial2_out->ImageLocation = ImageLocationTrial2_out;
	pictureBoxTrial3_in->ImageLocation = ImageLocationTrial3_in;
	pictureBoxTrial3_out->ImageLocation = ImageLocationTrial3_out;

	label����->Text = gcnew String(d.summing_up);
}