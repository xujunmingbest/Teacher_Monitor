#include "二阶动态电路响应的研究.h"

using namespace 教师机监控台;

void 二阶动态电路响应的研究::SaveCorrectGrades() {
	fileSql f;
	ST_二阶动态电路响应的研究 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_二阶动态电路响应的研究));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_二阶动态电路响应的研究));
	try {

		s.ScoreTrial1 = Convert::ToInt32(textBoxTrial1Score->Text);
		s.ScoreTrial2 = Convert::ToInt32(textBoxTrial2Score->Text);
		s.ScoreTrial3 = Convert::ToInt32(textBoxTrial3Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_二阶动态电路响应的研究)))) {

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


void 二阶动态电路响应的研究::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);
		labelTotalGrade->Text = (g1 + g2 + g3).ToString();
	}
	catch (Exception^e) {

	}
}

void 二阶动态电路响应的研究::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 二阶动态电路响应的研究::Priview()
{
	try {

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 二阶动态电路响应的研究::Load一阶电路的响应测试Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_二阶动态电路响应的研究 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_二阶动态电路响应的研究));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_二阶动态电路响应的研究));

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

	textBoxTrial1Score->Text = d.ScoreTrial1.ToString();
	textBoxTrial2Score->Text = d.ScoreTrial2.ToString();
	textBoxTrial3Score->Text = d.ScoreTrial3.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();

	string Name = string(BMPTEMP) + "二阶动态电路响应的研究";
	String^ ImageLocationTrial1_1 = gcnew String(string(Name + "Trial1_1.bmp").c_str());
	String^ ImageLocationTrial1_2 = gcnew String(string(Name + "Trial1_2.bmp").c_str());
	String^ ImageLocationTrial1_3 = gcnew String(string(Name + "Trial1_3.bmp").c_str());
	String^ ImageLocationTrial2_1 = gcnew String(string(Name + "Trial2_1.bmp").c_str());
	String^ ImageLocationTrial3_1 = gcnew String(string(Name + "Trial3_1.bmp").c_str());
	String^ ImageLocationTrial3_2 = gcnew String(string(Name + "Trial3_2.bmp").c_str());
	String^ ImageLocationTrial3_3 = gcnew String(string(Name + "Trial3_3.bmp").c_str());
	String^ ImageLocationTrial3_4 = gcnew String(string(Name + "Trial3_4.bmp").c_str());
	//先删除原来有的文件
	IO::File::Delete(ImageLocationTrial1_1);
	IO::File::Delete(ImageLocationTrial1_2);
	IO::File::Delete(ImageLocationTrial1_3);
	IO::File::Delete(ImageLocationTrial2_1);
	IO::File::Delete(ImageLocationTrial3_1);
	IO::File::Delete(ImageLocationTrial3_2);
	IO::File::Delete(ImageLocationTrial3_3);
	IO::File::Delete(ImageLocationTrial3_4);
	f.Writefile(T_to_string(ImageLocationTrial1_1), string(d.Trial1_1Bmp, sizeof(d.Trial1_1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial1_2), string(d.Trial1_2Bmp, sizeof(d.Trial1_2Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial1_3), string(d.Trial1_3Bmp, sizeof(d.Trial1_3Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial2_1), string(d.Trial2_1Bmp, sizeof(d.Trial2_1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_1), string(d.Trial3_1Bmp, sizeof(d.Trial3_1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_2), string(d.Trial3_2Bmp, sizeof(d.Trial3_2Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_3), string(d.Trial3_3Bmp, sizeof(d.Trial3_3Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3_4), string(d.Trial3_4Bmp, sizeof(d.Trial3_4Bmp)));

	pictureBoxTrial1_1->ImageLocation = ImageLocationTrial1_1;
	pictureBoxTrial1_2->ImageLocation = ImageLocationTrial1_2;
	pictureBoxTrial1_3->ImageLocation = ImageLocationTrial1_3;
	pictureBoxTrial2_1->ImageLocation = ImageLocationTrial2_1;
	pictureBoxTrial3_1->ImageLocation = ImageLocationTrial3_1;
	pictureBoxTrial3_2->ImageLocation = ImageLocationTrial3_2;
	pictureBoxTrial3_3->ImageLocation = ImageLocationTrial3_3;
	pictureBoxTrial3_4->ImageLocation = ImageLocationTrial3_4;

	textBoxtrial2_α->Text = gcnew String(d.trial2_α);
	textBoxtrial2_w->Text = gcnew String(d.trial2_w);
	textBoxTrial3_1α->Text = gcnew String(d.trial3_1α);
	textBoxTrial3_1w->Text = gcnew String(d.trial3_1w);
	textBoxTrial3_2α->Text = gcnew String(d.trial3_2α);
	textBoxTrial3_2w->Text = gcnew String(d.trial3_2w);
	textBoxTrial3_3α->Text = gcnew String(d.trial3_3α);
	textBoxTrial3_3w->Text = gcnew String(d.trial3_3w);
	textBoxTrial3_4α->Text = gcnew String(d.trial3_4α);
	textBoxTrial3_4w->Text = gcnew String(d.trial3_4w);

	label结论->Text = gcnew String(d.summing_up);
}

