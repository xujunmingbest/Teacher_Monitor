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
	String^ ImageLocationTrial1 = gcnew String(string(Name + "trial1.bmp").c_str());
	String^ ImageLocationTrial2 = gcnew String(string(Name + "trial2.bmp").c_str());
	String^ ImageLocationTrial3= gcnew String(string(Name + "trial3.bmp").c_str());
	//��ɾ��ԭ���е��ļ�
	IO::File::Delete(ImageLocationTrial1);
	IO::File::Delete(ImageLocationTrial2);
	IO::File::Delete(ImageLocationTrial3);
	f.Writefile(Name + "trial1.bmp", string(d.Trial1Bmp,sizeof(d.Trial1Bmp)));
	f.Writefile(Name + "trial2.bmp", string(d.Trial2Bmp, sizeof(d.Trial2Bmp)));
	f.Writefile(Name + "trial3.bmp", string(d.Trial3Bmp, sizeof(d.Trial3Bmp)));
	textBoxtrial��->Text = gcnew String(d.��);
	pictureBoxTrial1->ImageLocation= ImageLocationTrial1;
	pictureBoxTrial2->ImageLocation = ImageLocationTrial2;
	pictureBoxTrial3->ImageLocation = ImageLocationTrial3;

	label����->Text = gcnew String(d.summing_up);
}