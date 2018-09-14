#include "回转器.h"


using namespace 教师机监控台;

void 回转器::SaveCorrectGrades() {
	fileSql f;
	ST_回转器 s;
	string data = f.ReadStruct(*fileName, sizeof(ST_回转器));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩保存失败");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_回转器));
	try {
		s.score1 = Convert::ToInt32(textBoxScore1->Text);
		s.score2 = Convert::ToInt32(textBoxScore3->Text);
		s.score3 = Convert::ToInt32(textBoxScore4->Text);

		s.ti.totalscore = Convert::ToInt32(labelTotalGrade->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_回转器)))) {

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


void 回转器::CalScores() {
	try {
		int g1 = Convert::ToInt32(textBoxScore1->Text);
		int g2 = Convert::ToInt32(textBoxScore3->Text);
		int g3 = Convert::ToInt32(textBoxScore4->Text);

		labelTotalGrade->Text = (g1 + g2 + g3).ToString();
	}
	catch (Exception^e) {

	}
}

void 回转器::Print() {
	try {
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}

void 回转器::Priview()
{
	try {
		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}

}


void 回转器::Load回转器Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_回转器 d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_回转器));
	if (data.length() == 0) {
		MessageBox::Show("学生成绩读取失败");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_回转器));

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

	textBoxScore1->Text = d.score1.ToString();
	textBoxScore3->Text = d.score2.ToString();
	textBoxScore4->Text = d.score3.ToString();
	labelTotalGrade->Text = ti.totalscore.ToString();

	fileSql f;
	string Name = string(BMPTEMP) + "回转器";
	String^ ImageLocationTrial1_U = gcnew String(string(Name + "Trial1_U.bmp").c_str());
	String^ ImageLocationTrial1_I = gcnew String(string(Name + "Trial1_I.bmp").c_str());

	//先删除原来有的文件
	IO::File::Delete(ImageLocationTrial1_U);
	IO::File::Delete(ImageLocationTrial1_I);

	f.Writefile(T_to_string(ImageLocationTrial1_U), string(d.Trial1_Bmp_U, sizeof(d.Trial1_Bmp_U)));
	f.Writefile(T_to_string(ImageLocationTrial1_I), string(d.Trial1_Bmp_I, sizeof(d.Trial1_Bmp_I)));

	pictureBoxTrial1_U->ImageLocation = ImageLocationTrial1_U;
	pictureBoxTrial1_I->ImageLocation = ImageLocationTrial1_I;

	labelTrial1_U1_line1->Text = gcnew String(d.Trial1_U1_line1);
	labelTrial1_U1_line2->Text = gcnew String(d.Trial1_U1_line2);
	labelTrial1_U1_line3->Text = gcnew String(d.Trial1_U1_line3);
	labelTrial1_U1_line4->Text = gcnew String(d.Trial1_U1_line4);
	labelTrial1_U1_line5->Text = gcnew String(d.Trial1_U1_line5);
	labelTrial1_U1_line6->Text = gcnew String(d.Trial1_U1_line6);
	labelTrial1_U1_line7->Text = gcnew String(d.Trial1_U1_line7);

	labelTrial1_U2_line1->Text = gcnew String(d.Trial1_U2_line1);
	labelTrial1_U2_line2->Text = gcnew String(d.Trial1_U2_line2);
	labelTrial1_U2_line3->Text = gcnew String(d.Trial1_U2_line3);
	labelTrial1_U2_line4->Text = gcnew String(d.Trial1_U2_line4);
	labelTrial1_U2_line5->Text = gcnew String(d.Trial1_U2_line5);
	labelTrial1_U2_line6->Text = gcnew String(d.Trial1_U2_line6);
	labelTrial1_U2_line7->Text = gcnew String(d.Trial1_U2_line7);

	labelTrial1_I1_line1->Text = gcnew String(d.Trial1_I1_line1);
	labelTrial1_I1_line2->Text = gcnew String(d.Trial1_I1_line2);
	labelTrial1_I1_line3->Text = gcnew String(d.Trial1_I1_line3);
	labelTrial1_I1_line4->Text = gcnew String(d.Trial1_I1_line4);
	labelTrial1_I1_line5->Text = gcnew String(d.Trial1_I1_line5);
	labelTrial1_I1_line6->Text = gcnew String(d.Trial1_I1_line6);
	labelTrial1_I1_line7->Text = gcnew String(d.Trial1_I1_line7);

	labelTrial1_I2_line1->Text = gcnew String(d.Trial1_I2_line1);
	labelTrial1_I2_line2->Text = gcnew String(d.Trial1_I2_line2);
	labelTrial1_I2_line3->Text = gcnew String(d.Trial1_I2_line3);
	labelTrial1_I2_line4->Text = gcnew String(d.Trial1_I2_line4);
	labelTrial1_I2_line5->Text = gcnew String(d.Trial1_I2_line5);
	labelTrial1_I2_line6->Text = gcnew String(d.Trial1_I2_line6);
	labelTrial1_I2_line7->Text = gcnew String(d.Trial1_I2_line7);

	textBoxTrial1_G1_line1->Text = gcnew String(d.Trial1_G1_line1);
	textBoxTrial1_G1_line2->Text = gcnew String(d.Trial1_G1_line2);
	textBoxTrial1_G1_line3->Text = gcnew String(d.Trial1_G1_line3);
	textBoxTrial1_G1_line4->Text = gcnew String(d.Trial1_G1_line4);
	textBoxTrial1_G1_line5->Text = gcnew String(d.Trial1_G1_line5);
	textBoxTrial1_G1_line6->Text = gcnew String(d.Trial1_G1_line6);
	textBoxTrial1_G1_line7->Text = gcnew String(d.Trial1_G1_line7);

	textBoxTrial1_G2_line1->Text = gcnew String(d.Trial1_G2_line1);
	textBoxTrial1_G2_line2->Text = gcnew String(d.Trial1_G2_line2);
	textBoxTrial1_G2_line3->Text = gcnew String(d.Trial1_G2_line3);
	textBoxTrial1_G2_line4->Text = gcnew String(d.Trial1_G2_line4);
	textBoxTrial1_G2_line5->Text = gcnew String(d.Trial1_G2_line5);
	textBoxTrial1_G2_line6->Text = gcnew String(d.Trial1_G2_line6);
	textBoxTrial1_G2_line7->Text = gcnew String(d.Trial1_G2_line7);

	textBoxTrial1_GAver_line1->Text = gcnew String(d.Trial1_GAver_line1);
	textBoxTrial1_GAver_line2->Text = gcnew String(d.Trial1_GAver_line2);
	textBoxTrial1_GAver_line3->Text = gcnew String(d.Trial1_GAver_line3);
	textBoxTrial1_GAver_line4->Text = gcnew String(d.Trial1_GAver_line4);
	textBoxTrial1_GAver_line5->Text = gcnew String(d.Trial1_GAver_line5);
	textBoxTrial1_GAver_line6->Text = gcnew String(d.Trial1_GAver_line6);
	textBoxTrial1_GAver_line7->Text = gcnew String(d.Trial1_GAver_line7);


	labelTrial2_F200_line1->Text = gcnew String(d.Trial2_F200_line1);
	labelTrial2_F200_line2->Text = gcnew String(d.Trial2_F200_line2);
	labelTrial2_F200_line3->Text = gcnew String(d.Trial2_F200_line3);
	labelTrial2_F200_line4->Text = gcnew String(d.Trial2_F200_line4);
	labelTrial2_F200_line5->Text = gcnew String(d.Trial2_F200_line5);
	labelTrial2_F200_line6->Text = gcnew String(d.Trial2_F200_line6);
	labelTrial2_F200_line7->Text = gcnew String(d.Trial2_F200_line7);

	labelTrial2_F400_line1->Text = gcnew String(d.Trial2_F400_line1);
	labelTrial2_F400_line2->Text = gcnew String(d.Trial2_F400_line2);
	labelTrial2_F400_line3->Text = gcnew String(d.Trial2_F400_line3);
	labelTrial2_F400_line4->Text = gcnew String(d.Trial2_F400_line4);
	labelTrial2_F400_line5->Text = gcnew String(d.Trial2_F400_line5);
	labelTrial2_F400_line6->Text = gcnew String(d.Trial2_F400_line6);
	labelTrial2_F400_line7->Text = gcnew String(d.Trial2_F400_line7);

	labelTrial2_F500_line1->Text = gcnew String(d.Trial2_F500_line1);
	labelTrial2_F500_line2->Text = gcnew String(d.Trial2_F500_line2);
	labelTrial2_F500_line3->Text = gcnew String(d.Trial2_F500_line3);
	labelTrial2_F500_line4->Text = gcnew String(d.Trial2_F500_line4);
	labelTrial2_F500_line5->Text = gcnew String(d.Trial2_F500_line5);
	labelTrial2_F500_line6->Text = gcnew String(d.Trial2_F500_line6);
	labelTrial2_F500_line7->Text = gcnew String(d.Trial2_F500_line7);

	labelTrial2_F700_line1->Text = gcnew String(d.Trial2_F700_line1);
	labelTrial2_F700_line2->Text = gcnew String(d.Trial2_F700_line2);
	labelTrial2_F700_line3->Text = gcnew String(d.Trial2_F700_line3);
	labelTrial2_F700_line4->Text = gcnew String(d.Trial2_F700_line4);
	labelTrial2_F700_line5->Text = gcnew String(d.Trial2_F700_line5);
	labelTrial2_F700_line6->Text = gcnew String(d.Trial2_F700_line6);
	labelTrial2_F700_line7->Text = gcnew String(d.Trial2_F700_line7);

	labelTrial2_F800_line1->Text = gcnew String(d.Trial2_F800_line1);
	labelTrial2_F800_line2->Text = gcnew String(d.Trial2_F800_line2);
	labelTrial2_F800_line3->Text = gcnew String(d.Trial2_F800_line3);
	labelTrial2_F800_line4->Text = gcnew String(d.Trial2_F800_line4);
	labelTrial2_F800_line5->Text = gcnew String(d.Trial2_F800_line5);
	labelTrial2_F800_line6->Text = gcnew String(d.Trial2_F800_line6);
	labelTrial2_F800_line7->Text = gcnew String(d.Trial2_F800_line7);


	labelTrial2_F900_line1->Text = gcnew String(d.Trial2_F900_line1);
	labelTrial2_F900_line2->Text = gcnew String(d.Trial2_F900_line2);
	labelTrial2_F900_line3->Text = gcnew String(d.Trial2_F900_line3);
	labelTrial2_F900_line4->Text = gcnew String(d.Trial2_F900_line4);
	labelTrial2_F900_line5->Text = gcnew String(d.Trial2_F900_line5);
	labelTrial2_F900_line6->Text = gcnew String(d.Trial2_F900_line6);
	labelTrial2_F900_line7->Text = gcnew String(d.Trial2_F900_line7);

	labelTrial2_F1000_line1->Text = gcnew String(d.Trial2_F1000_line1);
	labelTrial2_F1000_line2->Text = gcnew String(d.Trial2_F1000_line2);
	labelTrial2_F1000_line3->Text = gcnew String(d.Trial2_F1000_line3);
	labelTrial2_F1000_line4->Text = gcnew String(d.Trial2_F1000_line4);
	labelTrial2_F1000_line5->Text = gcnew String(d.Trial2_F1000_line5);
	labelTrial2_F1000_line6->Text = gcnew String(d.Trial2_F1000_line6);
	labelTrial2_F1000_line7->Text = gcnew String(d.Trial2_F1000_line7);

	labelTrial2_F1200_line1->Text = gcnew String(d.Trial2_F1200_line1);
	labelTrial2_F1200_line2->Text = gcnew String(d.Trial2_F1200_line2);
	labelTrial2_F1200_line3->Text = gcnew String(d.Trial2_F1200_line3);
	labelTrial2_F1200_line4->Text = gcnew String(d.Trial2_F1200_line4);
	labelTrial2_F1200_line5->Text = gcnew String(d.Trial2_F1200_line5);
	labelTrial2_F1200_line6->Text = gcnew String(d.Trial2_F1200_line6);
	labelTrial2_F1200_line7->Text = gcnew String(d.Trial2_F1200_line7);

	labelTrial2_F1300_line1->Text = gcnew String(d.Trial2_F1300_line1);
	labelTrial2_F1300_line2->Text = gcnew String(d.Trial2_F1300_line2);
	labelTrial2_F1300_line3->Text = gcnew String(d.Trial2_F1300_line3);
	labelTrial2_F1300_line4->Text = gcnew String(d.Trial2_F1300_line4);
	labelTrial2_F1300_line5->Text = gcnew String(d.Trial2_F1300_line5);
	labelTrial2_F1300_line6->Text = gcnew String(d.Trial2_F1300_line6);
	labelTrial2_F1300_line7->Text = gcnew String(d.Trial2_F1300_line7);

	labelTrial2_F1500_line1->Text = gcnew String(d.Trial2_F1500_line1);
	labelTrial2_F1500_line2->Text = gcnew String(d.Trial2_F1500_line2);
	labelTrial2_F1500_line3->Text = gcnew String(d.Trial2_F1500_line3);
	labelTrial2_F1500_line4->Text = gcnew String(d.Trial2_F1500_line4);
	labelTrial2_F1500_line5->Text = gcnew String(d.Trial2_F1500_line5);
	labelTrial2_F1500_line6->Text = gcnew String(d.Trial2_F1500_line6);
	labelTrial2_F1500_line7->Text = gcnew String(d.Trial2_F1500_line7);

	labelTrial2_F2000_line1->Text = gcnew String(d.Trial2_F2000_line1);
	labelTrial2_F2000_line2->Text = gcnew String(d.Trial2_F2000_line2);
	labelTrial2_F2000_line3->Text = gcnew String(d.Trial2_F2000_line3);
	labelTrial2_F2000_line4->Text = gcnew String(d.Trial2_F2000_line4);
	labelTrial2_F2000_line5->Text = gcnew String(d.Trial2_F2000_line5);
	labelTrial2_F2000_line6->Text = gcnew String(d.Trial2_F2000_line6);
	labelTrial2_F2000_line7->Text = gcnew String(d.Trial2_F2000_line7);

	labelTrial3_200->Text = gcnew String(d.Trial3_200);
	labelTrial3_400->Text = gcnew String(d.Trial3_400);
	labelTrial3_500->Text = gcnew String(d.Trial3_500);
	labelTrial3_700->Text = gcnew String(d.Trial3_700);
	labelTrial3_800->Text = gcnew String(d.Trial3_800);
	labelTrial3_900->Text = gcnew String(d.Trial3_900);
	labelTrial3_1000->Text = gcnew String(d.Trial3_1000);
	labelTrial3_1200->Text = gcnew String(d.Trial3_1200);
	labelTrial3_1300->Text = gcnew String(d.Trial3_1300);
	labelTrial3_1500->Text = gcnew String(d.Trial3_1500);
	labelTrial3_2000->Text = gcnew String(d.Trial3_2000);



}