#include "负阻抗变换器.h"

using namespace 教师机监控台;

void 负阻抗变换器::SaveCorrectGrades() {
	fileSql f;
	ST_负阻抗变换器 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_负阻抗变换器));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_负阻抗变换器));
	try {
		s.score1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.score2 = Convert::ToInt32(textBoxTrial2Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_负阻抗变换器)))) {

			MessageBox::Show("成绩保存成功");
		}
		else {
			MessageBox::Show("成绩保存失败");
		}
	}
	catch (Exception^e) {
		MessageBox::Show("成绩保存失败,有成绩没有打分");
	}
}


void 负阻抗变换器::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		labelTotalGrade->Text = (g1 + g2 ).ToString();
	}
	catch (Exception^e) {

	}
}

void 负阻抗变换器::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 负阻抗变换器::Priview()
{
	try {

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 负阻抗变换器::Load负阻抗变换器Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_负阻抗变换器 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_负阻抗变换器));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_负阻抗变换器));

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
	labelTotalGrade->Text = ti.totalscore.ToString();


	labelTrial1_300_U1->Text = gcnew String(d.Trial1_300_U1);
	labelTrial1_300_I1->Text = gcnew String(d.Trial1_300_I1);
	textBoxTrial1_300_R_->Text = gcnew String(d.Trial1_300_R_);
	labelTrial1_600_U1->Text = gcnew String(d.Trial1_600_U1);
	labelTrial1_600_I1->Text = gcnew String(d.Trial1_600_I1);
	textBoxTrial1_600_R_->Text = gcnew String(d.Trial1_600_R_);

	string Name = string(MONITORTEMP) + "负阻抗变换器";
	String^ ImageLocation1 = gcnew String(string(Name + "1.bmp").c_str());
	String^ ImageLocation2 = gcnew String(string(Name + "2.bmp").c_str());
	//先删除原来有的文件
	IO::File::Delete(ImageLocation1);
	IO::File::Delete(ImageLocation2);
	f.Writefile(T_to_string(ImageLocation1), string(d.Trial2_Bmp_1, sizeof(d.Trial2_Bmp_1)));
	f.Writefile(T_to_string(ImageLocation2), string(d.Trial2_Bmp_2, sizeof(d.Trial2_Bmp_2)));

	pictureBox_1->ImageLocation = ImageLocation1;
	pictureBox_2->ImageLocation = ImageLocation2;


}
