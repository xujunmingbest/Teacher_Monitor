#include "一阶电路的响应测试.h"

using namespace 教师机监控台;

void 一阶电路的响应测试::SaveCorrectGrades() {
	fileSql f;
	ST_一阶电路的响应测试 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_一阶电路的响应测试));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_一阶电路的响应测试));
	try {
		s.Trial1Score = Convert::ToInt32(textBoxTrial1Score->Text);
		s.Trial2Score = Convert::ToInt32(textBoxTrial2Score->Text);
		s.Trial3Score = Convert::ToInt32(textBoxTrial3Score->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_一阶电路的响应测试)))) {

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


void 一阶电路的响应测试::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);
		int g2 = Convert::ToInt32(textBoxTrial2Score->Text);
		int g3 = Convert::ToInt32(textBoxTrial3Score->Text);
		labelTotalGrade->Text = (g1 + g2 + g3).ToString();
	}
	catch (Exception^e) {

	}
}

void 一阶电路的响应测试::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 一阶电路的响应测试::Priview()
{
	try {

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}

void 一阶电路的响应测试::Load一阶电路的响应测试Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_一阶电路的响应测试 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_一阶电路的响应测试));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_一阶电路的响应测试));

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
	string Name = string(BMPTEMP) + "一阶电路的响应测试";
	String^ ImageLocationTrial1 = gcnew String(string(Name + "trial1.bmp").c_str());
	String^ ImageLocationTrial2 = gcnew String(string(Name + "trial2.bmp").c_str());
	String^ ImageLocationTrial3= gcnew String(string(Name + "trial3.bmp").c_str());
	//先删除原来有的文件
	IO::File::Delete(ImageLocationTrial1);
	IO::File::Delete(ImageLocationTrial2);
	IO::File::Delete(ImageLocationTrial3);
	f.Writefile(Name + "trial1.bmp", string(d.Trial1Bmp,sizeof(d.Trial1Bmp)));
	f.Writefile(Name + "trial2.bmp", string(d.Trial2Bmp, sizeof(d.Trial2Bmp)));
	f.Writefile(Name + "trial3.bmp", string(d.Trial3Bmp, sizeof(d.Trial3Bmp)));
	textBoxtrialτ->Text = gcnew String(d.τ);
	pictureBoxTrial1->ImageLocation= ImageLocationTrial1;
	pictureBoxTrial2->ImageLocation = ImageLocationTrial2;
	pictureBoxTrial3->ImageLocation = ImageLocationTrial3;

	label结论->Text = gcnew String(d.summing_up);
}