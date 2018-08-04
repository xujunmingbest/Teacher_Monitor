#include "电路状态轨迹的观测.h"

using namespace 教师机监控台;

void 电路状态轨迹的观测::SaveCorrectGrades() {
	fileSql f;
	ST_电路状态轨迹的观测 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_电路状态轨迹的观测));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_电路状态轨迹的观测));
	try {
		s.ti.totalscore = Convert::ToInt32(textBoxTrial1Score->Text);



		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_电路状态轨迹的观测)))) {

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


void 电路状态轨迹的观测::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxTrial1Score->Text);

		labelTotalGrade->Text = (g1).ToString();
	}
	catch (Exception^e) {

	}
}

void 电路状态轨迹的观测::Print() {
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 电路状态轨迹的观测::Priview()
{
	try {
		//printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 电路状态轨迹的观测::Load电路状态轨迹的观测Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_电路状态轨迹的观测 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_电路状态轨迹的观测));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_电路状态轨迹的观测));

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

	string Name = string(BMPTEMP) + "电路状态轨迹的观测";
	String^ ImageLocationTrial1 = gcnew String(string(Name + "Trial1.bmp").c_str());
	String^ ImageLocationTrial2 = gcnew String(string(Name + "Trial2.bmp").c_str());
	String^ ImageLocationTrial3 = gcnew String(string(Name + "Trial3.bmp").c_str());

	//先删除原来有的文件
	IO::File::Delete(ImageLocationTrial1);
	IO::File::Delete(ImageLocationTrial2);
	IO::File::Delete(ImageLocationTrial3);

	f.Writefile(T_to_string(ImageLocationTrial1), string(d.Trial1Bmp, sizeof(d.Trial1Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial2), string(d.Trial2Bmp, sizeof(d.Trial2Bmp)));
	f.Writefile(T_to_string(ImageLocationTrial3), string(d.Trial3Bmp, sizeof(d.Trial3Bmp)));


	pictureBox1->ImageLocation = ImageLocationTrial1;
	pictureBox2->ImageLocation = ImageLocationTrial2;
	pictureBox3->ImageLocation = ImageLocationTrial3;

	label结论->Text = gcnew String(d.summing_up);
}
