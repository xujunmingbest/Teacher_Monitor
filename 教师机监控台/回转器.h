#pragma once
#include "tool.h"
namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 回转器 摘要
	/// </summary>
	public ref class 回转器 : public System::Windows::Forms::Form
	{
	public:
		回转器(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~回转器()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox7;
	protected:
	private: System::Windows::Forms::Label^  labellab;
	private: System::Windows::Forms::Label^  labeldate;
	private: System::Windows::Forms::Label^  labelseriesnum;
	private: System::Windows::Forms::Label^  labelmajor;
	private: System::Windows::Forms::Label^  labelclass;
	private: System::Windows::Forms::Label^  labelxuehao2;
	private: System::Windows::Forms::Label^  labelxuehao1;
	private: System::Windows::Forms::Label^  labelstuName2;
	private: System::Windows::Forms::Label^  labelstuName1;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  labelTrialName;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::TextBox^  textBoxteacher;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line7;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line7;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line7;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line7;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line6;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line6;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line6;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line6;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line5;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line5;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line5;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line5;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line4;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line4;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line4;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line4;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line3;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line3;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line3;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line3;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line3;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line3;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line3;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line2;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line2;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line2;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line2;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line2;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line2;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line2;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line1;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_GAver_line1;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G2_line1;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line1;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line1;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line1;
	private: System::Windows::Forms::Label^  labelTrial1_F;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_G1_line1;
	private: System::Windows::Forms::Label^  labelTrial1_R_Ur;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F2000_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1500_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1300_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1200_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1000_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F900_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F800_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F700_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F500_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F400_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F200_line7;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F2000_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1500_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1300_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1200_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1000_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F900_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F800_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F700_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F500_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F400_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F200_line6;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F2000_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1500_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1300_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1200_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1000_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F900_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F800_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F700_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F500_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F400_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F200_line5;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F2000_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1500_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1300_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1200_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F1000_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F900_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F800_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F700_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F500_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F400_line4;
	private: System::Windows::Forms::Label^  labelTrial2_F1300_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F2000_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F1500_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F900_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F1200_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F1000_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F800_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F400_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F700_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F500_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F200_line3;
	private: System::Windows::Forms::Label^  labelTrial2_F1300_line2;
	private: System::Windows::Forms::Label^  labelTrial2_F2000_line2;
	private: System::Windows::Forms::Label^  labelTrial2_F1500_line2;
	private: System::Windows::Forms::Label^  labelTrial2_F1300_line1;
	private: System::Windows::Forms::Label^  labelTrial2_F2000_line1;
	private: System::Windows::Forms::Label^  labelTrial2_F1500_line1;
	private: System::Windows::Forms::Label^  labelTrial2_F900_line2;
	private: System::Windows::Forms::Label^  labelTrial2_F1200_line2;
	private: System::Windows::Forms::Label^  labelTrial2_F1000_line2;
	private: System::Windows::Forms::Label^  labelTrial2_F800_line2;
	private: System::Windows::Forms::Label^  labelTrial2_F900_line1;
	private: System::Windows::Forms::Label^  labelTrial2_F1200_line1;
	private: System::Windows::Forms::Label^  labelTrial2_F1000_line1;
	private: System::Windows::Forms::Label^  labelTrial2_F800_line1;
	private: System::Windows::Forms::Label^  labelTrial2_F400_line2;
	private: System::Windows::Forms::Label^  labelTrial2_F700_line2;
	private: System::Windows::Forms::Label^  labelTrial2_F500_line2;
	private: System::Windows::Forms::Label^  labelTrial2_F200_line2;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  labelTrial2_F400_line1;
	private: System::Windows::Forms::Label^  label98;
	private: System::Windows::Forms::Label^  label99;
	private: System::Windows::Forms::Label^  labelTrial2_F700_line1;
	private: System::Windows::Forms::Label^  labelTrial2_F500_line1;
	private: System::Windows::Forms::Label^  labelTrial2_F200_line1;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_F200_line4;
	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  labelTrial3_1300;
	private: System::Windows::Forms::Label^  labelTrial3_2000;
	private: System::Windows::Forms::Label^  labelTrial3_1500;
	private: System::Windows::Forms::Label^  labelTrial3_900;
	private: System::Windows::Forms::Label^  labelTrial3_1200;
	private: System::Windows::Forms::Label^  labelTrial3_1000;
	private: System::Windows::Forms::Label^  labelTrial3_800;
	private: System::Windows::Forms::Label^  label134;
	private: System::Windows::Forms::Label^  label135;
	private: System::Windows::Forms::Label^  label136;
	private: System::Windows::Forms::Label^  label137;
	private: System::Windows::Forms::Label^  label138;
	private: System::Windows::Forms::Label^  label139;
	private: System::Windows::Forms::Label^  label140;
	private: System::Windows::Forms::Label^  label141;
	private: System::Windows::Forms::Label^  label142;
	private: System::Windows::Forms::Label^  label143;
	private: System::Windows::Forms::Label^  labelTrial3_400;
	private: System::Windows::Forms::Label^  label146;
	private: System::Windows::Forms::Label^  labelTrial3_700;
	private: System::Windows::Forms::Label^  labelTrial3_500;
	private: System::Windows::Forms::Label^  labelTrial3_200;
	private: System::Windows::Forms::Label^  label150;
	private: System::Windows::Forms::Label^  label151;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBoxScore1;

private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TextBox^  textBoxScore3;

private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TextBox^  textBoxScore4;

private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Panel^  panel1;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(回转器::typeid));
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->labellab = (gcnew System::Windows::Forms::Label());
			this->labeldate = (gcnew System::Windows::Forms::Label());
			this->labelseriesnum = (gcnew System::Windows::Forms::Label());
			this->labelmajor = (gcnew System::Windows::Forms::Label());
			this->labelclass = (gcnew System::Windows::Forms::Label());
			this->labelxuehao2 = (gcnew System::Windows::Forms::Label());
			this->labelxuehao1 = (gcnew System::Windows::Forms::Label());
			this->labelstuName2 = (gcnew System::Windows::Forms::Label());
			this->labelstuName1 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->labelTrialName = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBoxteacher = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxScore1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U2_line7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line7 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1_line7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U1_line7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_G1_line7 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U2_line6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1_line6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U1_line6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_G1_line6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U2_line5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1_line5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U1_line5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_G1_line5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U2_line4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1_line4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U1_line4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_G1_line4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U2_line3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U1_line3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_G1_line3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U2_line2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U1_line2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_G1_line2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_U2_line1 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_GAver_line1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_G2_line1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_I2_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U1_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_F = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_G1_line1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_Ur = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBoxScore3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F2000_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1500_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1300_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1200_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1000_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F900_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F800_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F700_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F500_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F400_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F200_line7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F2000_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1500_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1300_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1200_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1000_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F900_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F800_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F700_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F500_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F400_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F200_line6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F2000_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1500_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1300_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1200_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1000_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F900_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F800_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F700_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F500_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F400_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F200_line5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F2000_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1500_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1300_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1200_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F1000_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F900_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F800_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F700_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F500_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_F400_line4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_F1300_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F2000_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1500_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F900_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1200_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1000_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F800_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F400_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F700_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F500_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F200_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1300_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F2000_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1500_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1300_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F2000_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1500_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F900_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1200_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1000_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F800_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F900_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1200_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F1000_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F800_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F400_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F700_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F500_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F200_line2 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F400_line1 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F700_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F500_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_F200_line1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_F200_line4 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxScore4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_1300 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_2000 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_1500 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_900 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_1200 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_1000 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_800 = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_400 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_700 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_500 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_200 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->labellab);
			this->groupBox7->Controls->Add(this->labeldate);
			this->groupBox7->Controls->Add(this->labelseriesnum);
			this->groupBox7->Controls->Add(this->labelmajor);
			this->groupBox7->Controls->Add(this->labelclass);
			this->groupBox7->Controls->Add(this->labelxuehao2);
			this->groupBox7->Controls->Add(this->labelxuehao1);
			this->groupBox7->Controls->Add(this->labelstuName2);
			this->groupBox7->Controls->Add(this->labelstuName1);
			this->groupBox7->Controls->Add(this->label30);
			this->groupBox7->Controls->Add(this->label28);
			this->groupBox7->Controls->Add(this->label43);
			this->groupBox7->Controls->Add(this->labelTrialName);
			this->groupBox7->Controls->Add(this->label42);
			this->groupBox7->Controls->Add(this->label35);
			this->groupBox7->Controls->Add(this->textBoxteacher);
			this->groupBox7->Controls->Add(this->label36);
			this->groupBox7->Controls->Add(this->label41);
			this->groupBox7->Controls->Add(this->label40);
			this->groupBox7->Controls->Add(this->label37);
			this->groupBox7->Controls->Add(this->label38);
			this->groupBox7->Controls->Add(this->label39);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox7->Location = System::Drawing::Point(23, 18);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(646, 314);
			this->groupBox7->TabIndex = 202;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"学生基础信息";
			// 
			// labellab
			// 
			this->labellab->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labellab->Location = System::Drawing::Point(127, 230);
			this->labellab->Name = L"labellab";
			this->labellab->Size = System::Drawing::Size(182, 28);
			this->labellab->TabIndex = 203;
			this->labellab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeldate
			// 
			this->labeldate->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeldate->Location = System::Drawing::Point(324, 178);
			this->labeldate->Name = L"labeldate";
			this->labeldate->Size = System::Drawing::Size(297, 28);
			this->labeldate->TabIndex = 202;
			this->labeldate->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelseriesnum
			// 
			this->labelseriesnum->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelseriesnum->Location = System::Drawing::Point(324, 145);
			this->labelseriesnum->Name = L"labelseriesnum";
			this->labelseriesnum->Size = System::Drawing::Size(297, 33);
			this->labelseriesnum->TabIndex = 201;
			this->labelseriesnum->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmajor
			// 
			this->labelmajor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmajor->Location = System::Drawing::Point(87, 182);
			this->labelmajor->Name = L"labelmajor";
			this->labelmajor->Size = System::Drawing::Size(144, 32);
			this->labelmajor->TabIndex = 200;
			this->labelmajor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelclass
			// 
			this->labelclass->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelclass->Location = System::Drawing::Point(87, 145);
			this->labelclass->Name = L"labelclass";
			this->labelclass->Size = System::Drawing::Size(144, 33);
			this->labelclass->TabIndex = 199;
			this->labelclass->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelxuehao2
			// 
			this->labelxuehao2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelxuehao2->Location = System::Drawing::Point(315, 96);
			this->labelxuehao2->Name = L"labelxuehao2";
			this->labelxuehao2->Size = System::Drawing::Size(144, 23);
			this->labelxuehao2->TabIndex = 198;
			this->labelxuehao2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelxuehao1
			// 
			this->labelxuehao1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelxuehao1->Location = System::Drawing::Point(315, 63);
			this->labelxuehao1->Name = L"labelxuehao1";
			this->labelxuehao1->Size = System::Drawing::Size(144, 23);
			this->labelxuehao1->TabIndex = 197;
			this->labelxuehao1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelstuName2
			// 
			this->labelstuName2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelstuName2->Location = System::Drawing::Point(87, 103);
			this->labelstuName2->Name = L"labelstuName2";
			this->labelstuName2->Size = System::Drawing::Size(144, 28);
			this->labelstuName2->TabIndex = 196;
			this->labelstuName2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelstuName1
			// 
			this->labelstuName1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelstuName1->Location = System::Drawing::Point(87, 63);
			this->labelstuName1->Name = L"labelstuName1";
			this->labelstuName1->Size = System::Drawing::Size(144, 25);
			this->labelstuName1->TabIndex = 195;
			this->labelstuName1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->Location = System::Drawing::Point(21, 26);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(93, 20);
			this->label30->TabIndex = 172;
			this->label30->Text = L"实验名称";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->Location = System::Drawing::Point(28, 149);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(51, 20);
			this->label28->TabIndex = 192;
			this->label28->Text = L"班级";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->Location = System::Drawing::Point(28, 238);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(72, 20);
			this->label43->TabIndex = 183;
			this->label43->Text = L"实验室";
			// 
			// labelTrialName
			// 
			this->labelTrialName->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrialName->Location = System::Drawing::Point(133, 26);
			this->labelTrialName->Name = L"labelTrialName";
			this->labelTrialName->Size = System::Drawing::Size(290, 23);
			this->labelTrialName->TabIndex = 191;
			this->labelTrialName->Text = L"元件伏安特性的测试";
			this->labelTrialName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label42->Location = System::Drawing::Point(28, 276);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(93, 20);
			this->label42->TabIndex = 185;
			this->label42->Text = L"指导老师";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->Location = System::Drawing::Point(28, 69);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(51, 20);
			this->label35->TabIndex = 173;
			this->label35->Text = L"姓名";
			// 
			// textBoxteacher
			// 
			this->textBoxteacher->Location = System::Drawing::Point(127, 271);
			this->textBoxteacher->Name = L"textBoxteacher";
			this->textBoxteacher->Size = System::Drawing::Size(184, 28);
			this->textBoxteacher->TabIndex = 186;
			this->textBoxteacher->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->Location = System::Drawing::Point(28, 111);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(51, 20);
			this->label36->TabIndex = 174;
			this->label36->Text = L"姓名";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label41->Location = System::Drawing::Point(28, 186);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(51, 20);
			this->label41->TabIndex = 181;
			this->label41->Text = L"专业";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label40->Location = System::Drawing::Point(258, 149);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(51, 20);
			this->label40->TabIndex = 187;
			this->label40->Text = L"编号";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->Location = System::Drawing::Point(258, 69);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(51, 20);
			this->label37->TabIndex = 177;
			this->label37->Text = L"学号";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->Location = System::Drawing::Point(258, 99);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(51, 20);
			this->label38->TabIndex = 178;
			this->label38->Text = L"学号";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->Location = System::Drawing::Point(258, 183);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(51, 20);
			this->label39->TabIndex = 189;
			this->label39->Text = L"时间";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->textBoxScore1);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line7);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line7);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line7);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line7);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line7);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line7);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line7);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line6);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line6);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line6);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line6);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line5);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line5);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line5);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line5);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line4);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line4);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line4);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line4);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line3);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line3);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line3);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line3);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line2);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line2);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line2);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line2);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line1);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->textBoxTrial1_GAver_line1);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G2_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_F);
			this->groupBox8->Controls->Add(this->textBoxTrial1_G1_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(23, 350);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 419);
			this->groupBox8->TabIndex = 203;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"回转器 实验内容1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(347, 387);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 20);
			this->label4->TabIndex = 225;
			this->label4->Text = L"请打分：";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(624, 387);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 20);
			this->label5->TabIndex = 224;
			this->label5->Text = L"本项目总分30";
			// 
			// textBoxScore1
			// 
			this->textBoxScore1->Location = System::Drawing::Point(449, 384);
			this->textBoxScore1->Name = L"textBoxScore1";
			this->textBoxScore1->Size = System::Drawing::Size(152, 30);
			this->textBoxScore1->TabIndex = 223;
			this->textBoxScore1->TextChanged += gcnew System::EventHandler(this, &回转器::textBoxScore1_TextChanged);
			// 
			// labelTrial1_U2_line7
			// 
			this->labelTrial1_U2_line7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line7->Location = System::Drawing::Point(248, 347);
			this->labelTrial1_U2_line7->Name = L"labelTrial1_U2_line7";
			this->labelTrial1_U2_line7->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line7->TabIndex = 142;
			// 
			// textBoxTrial1_GAver_line7
			// 
			this->textBoxTrial1_GAver_line7->Location = System::Drawing::Point(815, 347);
			this->textBoxTrial1_GAver_line7->Name = L"textBoxTrial1_GAver_line7";
			this->textBoxTrial1_GAver_line7->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line7->TabIndex = 141;
			// 
			// textBoxTrial1_G2_line7
			// 
			this->textBoxTrial1_G2_line7->Location = System::Drawing::Point(697, 347);
			this->textBoxTrial1_G2_line7->Name = L"textBoxTrial1_G2_line7";
			this->textBoxTrial1_G2_line7->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line7->TabIndex = 140;
			// 
			// labelTrial1_I2_line7
			// 
			this->labelTrial1_I2_line7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line7->Location = System::Drawing::Point(476, 347);
			this->labelTrial1_I2_line7->Name = L"labelTrial1_I2_line7";
			this->labelTrial1_I2_line7->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line7->TabIndex = 139;
			// 
			// labelTrial1_I1_line7
			// 
			this->labelTrial1_I1_line7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line7->Location = System::Drawing::Point(348, 347);
			this->labelTrial1_I1_line7->Name = L"labelTrial1_I1_line7";
			this->labelTrial1_I1_line7->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line7->TabIndex = 137;
			// 
			// labelTrial1_U1_line7
			// 
			this->labelTrial1_U1_line7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line7->Location = System::Drawing::Point(139, 347);
			this->labelTrial1_U1_line7->Name = L"labelTrial1_U1_line7";
			this->labelTrial1_U1_line7->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line7->TabIndex = 135;
			// 
			// textBoxTrial1_G1_line7
			// 
			this->textBoxTrial1_G1_line7->Location = System::Drawing::Point(579, 345);
			this->textBoxTrial1_G1_line7->Name = L"textBoxTrial1_G1_line7";
			this->textBoxTrial1_G1_line7->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line7->TabIndex = 133;
			// 
			// labelTrial1_U2_line6
			// 
			this->labelTrial1_U2_line6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line6->Location = System::Drawing::Point(248, 310);
			this->labelTrial1_U2_line6->Name = L"labelTrial1_U2_line6";
			this->labelTrial1_U2_line6->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line6->TabIndex = 131;
			// 
			// textBoxTrial1_GAver_line6
			// 
			this->textBoxTrial1_GAver_line6->Location = System::Drawing::Point(815, 310);
			this->textBoxTrial1_GAver_line6->Name = L"textBoxTrial1_GAver_line6";
			this->textBoxTrial1_GAver_line6->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line6->TabIndex = 130;
			// 
			// textBoxTrial1_G2_line6
			// 
			this->textBoxTrial1_G2_line6->Location = System::Drawing::Point(697, 310);
			this->textBoxTrial1_G2_line6->Name = L"textBoxTrial1_G2_line6";
			this->textBoxTrial1_G2_line6->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line6->TabIndex = 129;
			// 
			// labelTrial1_I2_line6
			// 
			this->labelTrial1_I2_line6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line6->Location = System::Drawing::Point(476, 310);
			this->labelTrial1_I2_line6->Name = L"labelTrial1_I2_line6";
			this->labelTrial1_I2_line6->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line6->TabIndex = 128;
			// 
			// labelTrial1_I1_line6
			// 
			this->labelTrial1_I1_line6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line6->Location = System::Drawing::Point(348, 310);
			this->labelTrial1_I1_line6->Name = L"labelTrial1_I1_line6";
			this->labelTrial1_I1_line6->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line6->TabIndex = 126;
			// 
			// labelTrial1_U1_line6
			// 
			this->labelTrial1_U1_line6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line6->Location = System::Drawing::Point(139, 310);
			this->labelTrial1_U1_line6->Name = L"labelTrial1_U1_line6";
			this->labelTrial1_U1_line6->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line6->TabIndex = 124;
			// 
			// textBoxTrial1_G1_line6
			// 
			this->textBoxTrial1_G1_line6->Location = System::Drawing::Point(579, 308);
			this->textBoxTrial1_G1_line6->Name = L"textBoxTrial1_G1_line6";
			this->textBoxTrial1_G1_line6->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line6->TabIndex = 122;
			// 
			// labelTrial1_U2_line5
			// 
			this->labelTrial1_U2_line5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line5->Location = System::Drawing::Point(248, 274);
			this->labelTrial1_U2_line5->Name = L"labelTrial1_U2_line5";
			this->labelTrial1_U2_line5->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line5->TabIndex = 120;
			// 
			// textBoxTrial1_GAver_line5
			// 
			this->textBoxTrial1_GAver_line5->Location = System::Drawing::Point(815, 274);
			this->textBoxTrial1_GAver_line5->Name = L"textBoxTrial1_GAver_line5";
			this->textBoxTrial1_GAver_line5->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line5->TabIndex = 119;
			// 
			// textBoxTrial1_G2_line5
			// 
			this->textBoxTrial1_G2_line5->Location = System::Drawing::Point(697, 274);
			this->textBoxTrial1_G2_line5->Name = L"textBoxTrial1_G2_line5";
			this->textBoxTrial1_G2_line5->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line5->TabIndex = 118;
			// 
			// labelTrial1_I2_line5
			// 
			this->labelTrial1_I2_line5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line5->Location = System::Drawing::Point(476, 274);
			this->labelTrial1_I2_line5->Name = L"labelTrial1_I2_line5";
			this->labelTrial1_I2_line5->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line5->TabIndex = 117;
			// 
			// labelTrial1_I1_line5
			// 
			this->labelTrial1_I1_line5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line5->Location = System::Drawing::Point(348, 274);
			this->labelTrial1_I1_line5->Name = L"labelTrial1_I1_line5";
			this->labelTrial1_I1_line5->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line5->TabIndex = 115;
			// 
			// labelTrial1_U1_line5
			// 
			this->labelTrial1_U1_line5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line5->Location = System::Drawing::Point(139, 274);
			this->labelTrial1_U1_line5->Name = L"labelTrial1_U1_line5";
			this->labelTrial1_U1_line5->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line5->TabIndex = 113;
			// 
			// textBoxTrial1_G1_line5
			// 
			this->textBoxTrial1_G1_line5->Location = System::Drawing::Point(579, 272);
			this->textBoxTrial1_G1_line5->Name = L"textBoxTrial1_G1_line5";
			this->textBoxTrial1_G1_line5->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line5->TabIndex = 111;
			// 
			// labelTrial1_U2_line4
			// 
			this->labelTrial1_U2_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line4->Location = System::Drawing::Point(248, 238);
			this->labelTrial1_U2_line4->Name = L"labelTrial1_U2_line4";
			this->labelTrial1_U2_line4->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line4->TabIndex = 109;
			// 
			// textBoxTrial1_GAver_line4
			// 
			this->textBoxTrial1_GAver_line4->Location = System::Drawing::Point(815, 238);
			this->textBoxTrial1_GAver_line4->Name = L"textBoxTrial1_GAver_line4";
			this->textBoxTrial1_GAver_line4->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line4->TabIndex = 108;
			// 
			// textBoxTrial1_G2_line4
			// 
			this->textBoxTrial1_G2_line4->Location = System::Drawing::Point(697, 238);
			this->textBoxTrial1_G2_line4->Name = L"textBoxTrial1_G2_line4";
			this->textBoxTrial1_G2_line4->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line4->TabIndex = 107;
			// 
			// labelTrial1_I2_line4
			// 
			this->labelTrial1_I2_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line4->Location = System::Drawing::Point(476, 238);
			this->labelTrial1_I2_line4->Name = L"labelTrial1_I2_line4";
			this->labelTrial1_I2_line4->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line4->TabIndex = 106;
			// 
			// labelTrial1_I1_line4
			// 
			this->labelTrial1_I1_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line4->Location = System::Drawing::Point(348, 238);
			this->labelTrial1_I1_line4->Name = L"labelTrial1_I1_line4";
			this->labelTrial1_I1_line4->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line4->TabIndex = 104;
			// 
			// labelTrial1_U1_line4
			// 
			this->labelTrial1_U1_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line4->Location = System::Drawing::Point(139, 238);
			this->labelTrial1_U1_line4->Name = L"labelTrial1_U1_line4";
			this->labelTrial1_U1_line4->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line4->TabIndex = 102;
			// 
			// textBoxTrial1_G1_line4
			// 
			this->textBoxTrial1_G1_line4->Location = System::Drawing::Point(579, 236);
			this->textBoxTrial1_G1_line4->Name = L"textBoxTrial1_G1_line4";
			this->textBoxTrial1_G1_line4->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line4->TabIndex = 100;
			// 
			// labelTrial1_U2_line3
			// 
			this->labelTrial1_U2_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line3->Location = System::Drawing::Point(248, 199);
			this->labelTrial1_U2_line3->Name = L"labelTrial1_U2_line3";
			this->labelTrial1_U2_line3->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line3->TabIndex = 98;
			// 
			// textBoxTrial1_GAver_line3
			// 
			this->textBoxTrial1_GAver_line3->Location = System::Drawing::Point(815, 199);
			this->textBoxTrial1_GAver_line3->Name = L"textBoxTrial1_GAver_line3";
			this->textBoxTrial1_GAver_line3->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line3->TabIndex = 97;
			// 
			// textBoxTrial1_G2_line3
			// 
			this->textBoxTrial1_G2_line3->Location = System::Drawing::Point(697, 199);
			this->textBoxTrial1_G2_line3->Name = L"textBoxTrial1_G2_line3";
			this->textBoxTrial1_G2_line3->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line3->TabIndex = 96;
			// 
			// labelTrial1_I2_line3
			// 
			this->labelTrial1_I2_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line3->Location = System::Drawing::Point(476, 199);
			this->labelTrial1_I2_line3->Name = L"labelTrial1_I2_line3";
			this->labelTrial1_I2_line3->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line3->TabIndex = 95;
			// 
			// labelTrial1_I1_line3
			// 
			this->labelTrial1_I1_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line3->Location = System::Drawing::Point(348, 199);
			this->labelTrial1_I1_line3->Name = L"labelTrial1_I1_line3";
			this->labelTrial1_I1_line3->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line3->TabIndex = 93;
			// 
			// labelTrial1_U1_line3
			// 
			this->labelTrial1_U1_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line3->Location = System::Drawing::Point(139, 199);
			this->labelTrial1_U1_line3->Name = L"labelTrial1_U1_line3";
			this->labelTrial1_U1_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line3->TabIndex = 91;
			// 
			// textBoxTrial1_G1_line3
			// 
			this->textBoxTrial1_G1_line3->Location = System::Drawing::Point(579, 197);
			this->textBoxTrial1_G1_line3->Name = L"textBoxTrial1_G1_line3";
			this->textBoxTrial1_G1_line3->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line3->TabIndex = 89;
			// 
			// labelTrial1_U2_line2
			// 
			this->labelTrial1_U2_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line2->Location = System::Drawing::Point(248, 162);
			this->labelTrial1_U2_line2->Name = L"labelTrial1_U2_line2";
			this->labelTrial1_U2_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line2->TabIndex = 87;
			// 
			// textBoxTrial1_GAver_line2
			// 
			this->textBoxTrial1_GAver_line2->Location = System::Drawing::Point(815, 162);
			this->textBoxTrial1_GAver_line2->Name = L"textBoxTrial1_GAver_line2";
			this->textBoxTrial1_GAver_line2->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line2->TabIndex = 86;
			// 
			// textBoxTrial1_G2_line2
			// 
			this->textBoxTrial1_G2_line2->Location = System::Drawing::Point(697, 162);
			this->textBoxTrial1_G2_line2->Name = L"textBoxTrial1_G2_line2";
			this->textBoxTrial1_G2_line2->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line2->TabIndex = 85;
			// 
			// labelTrial1_I2_line2
			// 
			this->labelTrial1_I2_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line2->Location = System::Drawing::Point(476, 162);
			this->labelTrial1_I2_line2->Name = L"labelTrial1_I2_line2";
			this->labelTrial1_I2_line2->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line2->TabIndex = 84;
			// 
			// labelTrial1_I1_line2
			// 
			this->labelTrial1_I1_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line2->Location = System::Drawing::Point(348, 162);
			this->labelTrial1_I1_line2->Name = L"labelTrial1_I1_line2";
			this->labelTrial1_I1_line2->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line2->TabIndex = 82;
			// 
			// labelTrial1_U1_line2
			// 
			this->labelTrial1_U1_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line2->Location = System::Drawing::Point(139, 162);
			this->labelTrial1_U1_line2->Name = L"labelTrial1_U1_line2";
			this->labelTrial1_U1_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line2->TabIndex = 80;
			// 
			// textBoxTrial1_G1_line2
			// 
			this->textBoxTrial1_G1_line2->Location = System::Drawing::Point(579, 160);
			this->textBoxTrial1_G1_line2->Name = L"textBoxTrial1_G1_line2";
			this->textBoxTrial1_G1_line2->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line2->TabIndex = 78;
			// 
			// labelTrial1_U2_line1
			// 
			this->labelTrial1_U2_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line1->Location = System::Drawing::Point(248, 120);
			this->labelTrial1_U2_line1->Name = L"labelTrial1_U2_line1";
			this->labelTrial1_U2_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial1_U2_line1->TabIndex = 76;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(815, 81);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(193, 25);
			this->label22->TabIndex = 75;
			this->label22->Text = L"G平均=( G\'+G\'\')/2";
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(697, 81);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(112, 25);
			this->label21->TabIndex = 74;
			this->label21->Text = L"G\'\'=I2/U1";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(579, 81);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(112, 25);
			this->label20->TabIndex = 73;
			this->label20->Text = L"G＇=I1/U2";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(476, 81);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(97, 25);
			this->label19->TabIndex = 72;
			this->label19->Text = L"I2(mA)";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(248, 81);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(82, 25);
			this->label18->TabIndex = 71;
			this->label18->Text = L"U2(v)";
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(16, 348);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(101, 25);
			this->label17->TabIndex = 70;
			this->label17->Text = L"5K";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(16, 310);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(101, 25);
			this->label14->TabIndex = 69;
			this->label14->Text = L"4K";
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(16, 275);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(101, 25);
			this->label15->TabIndex = 68;
			this->label15->Text = L"3K";
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(16, 237);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(101, 25);
			this->label16->TabIndex = 67;
			this->label16->Text = L"2K";
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(16, 200);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(101, 25);
			this->label13->TabIndex = 66;
			this->label13->Text = L"1.5K";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(16, 163);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 25);
			this->label12->TabIndex = 65;
			this->label12->Text = L"1K";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(16, 120);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 25);
			this->label11->TabIndex = 64;
			this->label11->Text = L"500";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(16, 39);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 67);
			this->label10->TabIndex = 63;
			this->label10->Text = L"RL（Ω）";
			// 
			// textBoxTrial1_GAver_line1
			// 
			this->textBoxTrial1_GAver_line1->Location = System::Drawing::Point(815, 120);
			this->textBoxTrial1_GAver_line1->Name = L"textBoxTrial1_GAver_line1";
			this->textBoxTrial1_GAver_line1->Size = System::Drawing::Size(193, 30);
			this->textBoxTrial1_GAver_line1->TabIndex = 62;
			// 
			// textBoxTrial1_G2_line1
			// 
			this->textBoxTrial1_G2_line1->Location = System::Drawing::Point(697, 120);
			this->textBoxTrial1_G2_line1->Name = L"textBoxTrial1_G2_line1";
			this->textBoxTrial1_G2_line1->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G2_line1->TabIndex = 61;
			// 
			// labelTrial1_I2_line1
			// 
			this->labelTrial1_I2_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line1->Location = System::Drawing::Point(476, 120);
			this->labelTrial1_I2_line1->Name = L"labelTrial1_I2_line1";
			this->labelTrial1_I2_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line1->TabIndex = 60;
			// 
			// labelTrial1_I1_line1
			// 
			this->labelTrial1_I1_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line1->Location = System::Drawing::Point(348, 120);
			this->labelTrial1_I1_line1->Name = L"labelTrial1_I1_line1";
			this->labelTrial1_I1_line1->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line1->TabIndex = 58;
			// 
			// labelTrial1_U1_line1
			// 
			this->labelTrial1_U1_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line1->Location = System::Drawing::Point(139, 120);
			this->labelTrial1_U1_line1->Name = L"labelTrial1_U1_line1";
			this->labelTrial1_U1_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial1_U1_line1->TabIndex = 56;
			// 
			// labelTrial1_F
			// 
			this->labelTrial1_F->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_F->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_F->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_F->Location = System::Drawing::Point(348, 39);
			this->labelTrial1_F->Name = L"labelTrial1_F";
			this->labelTrial1_F->Size = System::Drawing::Size(660, 25);
			this->labelTrial1_F->TabIndex = 50;
			this->labelTrial1_F->Text = L"计  算  值";
			this->labelTrial1_F->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_G1_line1
			// 
			this->textBoxTrial1_G1_line1->Location = System::Drawing::Point(579, 118);
			this->textBoxTrial1_G1_line1->Name = L"textBoxTrial1_G1_line1";
			this->textBoxTrial1_G1_line1->Size = System::Drawing::Size(112, 30);
			this->textBoxTrial1_G1_line1->TabIndex = 49;
			// 
			// labelTrial1_R_Ur
			// 
			this->labelTrial1_R_Ur->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur->Location = System::Drawing::Point(348, 81);
			this->labelTrial1_R_Ur->Name = L"labelTrial1_R_Ur";
			this->labelTrial1_R_Ur->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_R_Ur->TabIndex = 48;
			this->labelTrial1_R_Ur->Text = L"I1(mA)";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(139, 81);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 25);
			this->label8->TabIndex = 47;
			this->label8->Text = L"U1(v)";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(139, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(191, 25);
			this->label9->TabIndex = 46;
			this->label9->Text = L"测 量 值";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->textBoxScore3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F2000_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1500_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1300_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1200_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1000_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F900_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F800_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F700_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F500_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F400_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F200_line7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F2000_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1500_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1300_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1200_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1000_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F900_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F800_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F700_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F500_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F400_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F200_line6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F2000_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1500_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1300_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1200_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1000_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F900_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F800_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F700_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F500_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F400_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F200_line5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F2000_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1500_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1300_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1200_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1000_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F900_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F800_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F700_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F500_line4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F400_line4);
			this->groupBox1->Controls->Add(this->labelTrial2_F1300_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F2000_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F1500_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F900_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F1200_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F1000_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F800_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F400_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F700_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F500_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F200_line3);
			this->groupBox1->Controls->Add(this->labelTrial2_F1300_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F2000_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F1500_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F1300_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F2000_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F1500_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F900_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F1200_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F1000_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F800_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F900_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F1200_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F1000_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F800_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F400_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F700_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F500_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_F200_line2);
			this->groupBox1->Controls->Add(this->label60);
			this->groupBox1->Controls->Add(this->label59);
			this->groupBox1->Controls->Add(this->label58);
			this->groupBox1->Controls->Add(this->label57);
			this->groupBox1->Controls->Add(this->label56);
			this->groupBox1->Controls->Add(this->label55);
			this->groupBox1->Controls->Add(this->label51);
			this->groupBox1->Controls->Add(this->label52);
			this->groupBox1->Controls->Add(this->label53);
			this->groupBox1->Controls->Add(this->label54);
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->label49);
			this->groupBox1->Controls->Add(this->label48);
			this->groupBox1->Controls->Add(this->label47);
			this->groupBox1->Controls->Add(this->label46);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->labelTrial2_F400_line1);
			this->groupBox1->Controls->Add(this->label98);
			this->groupBox1->Controls->Add(this->label99);
			this->groupBox1->Controls->Add(this->labelTrial2_F700_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F500_line1);
			this->groupBox1->Controls->Add(this->labelTrial2_F200_line1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F200_line4);
			this->groupBox1->Controls->Add(this->label105);
			this->groupBox1->Controls->Add(this->label106);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(23, 786);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 488);
			this->groupBox1->TabIndex = 204;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"回转器 实验内容3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(365, 446);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 288;
			this->label1->Text = L"请打分：";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(642, 446);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(129, 20);
			this->label24->TabIndex = 287;
			this->label24->Text = L"本项目总分30";
			// 
			// textBoxScore3
			// 
			this->textBoxScore3->Location = System::Drawing::Point(467, 443);
			this->textBoxScore3->Name = L"textBoxScore3";
			this->textBoxScore3->Size = System::Drawing::Size(152, 30);
			this->textBoxScore3->TabIndex = 286;
			this->textBoxScore3->TextChanged += gcnew System::EventHandler(this, &回转器::textBoxScore3_TextChanged);
			// 
			// textBoxTrial2_F2000_line7
			// 
			this->textBoxTrial2_F2000_line7->Location = System::Drawing::Point(1140, 395);
			this->textBoxTrial2_F2000_line7->Name = L"textBoxTrial2_F2000_line7";
			this->textBoxTrial2_F2000_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F2000_line7->TabIndex = 285;
			// 
			// textBoxTrial2_F1500_line7
			// 
			this->textBoxTrial2_F1500_line7->Location = System::Drawing::Point(1044, 395);
			this->textBoxTrial2_F1500_line7->Name = L"textBoxTrial2_F1500_line7";
			this->textBoxTrial2_F1500_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1500_line7->TabIndex = 284;
			// 
			// textBoxTrial2_F1300_line7
			// 
			this->textBoxTrial2_F1300_line7->Location = System::Drawing::Point(949, 395);
			this->textBoxTrial2_F1300_line7->Name = L"textBoxTrial2_F1300_line7";
			this->textBoxTrial2_F1300_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1300_line7->TabIndex = 283;
			// 
			// textBoxTrial2_F1200_line7
			// 
			this->textBoxTrial2_F1200_line7->Location = System::Drawing::Point(853, 395);
			this->textBoxTrial2_F1200_line7->Name = L"textBoxTrial2_F1200_line7";
			this->textBoxTrial2_F1200_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1200_line7->TabIndex = 282;
			// 
			// textBoxTrial2_F1000_line7
			// 
			this->textBoxTrial2_F1000_line7->Location = System::Drawing::Point(759, 395);
			this->textBoxTrial2_F1000_line7->Name = L"textBoxTrial2_F1000_line7";
			this->textBoxTrial2_F1000_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1000_line7->TabIndex = 281;
			// 
			// textBoxTrial2_F900_line7
			// 
			this->textBoxTrial2_F900_line7->Location = System::Drawing::Point(663, 395);
			this->textBoxTrial2_F900_line7->Name = L"textBoxTrial2_F900_line7";
			this->textBoxTrial2_F900_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F900_line7->TabIndex = 280;
			// 
			// textBoxTrial2_F800_line7
			// 
			this->textBoxTrial2_F800_line7->Location = System::Drawing::Point(567, 395);
			this->textBoxTrial2_F800_line7->Name = L"textBoxTrial2_F800_line7";
			this->textBoxTrial2_F800_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F800_line7->TabIndex = 279;
			// 
			// textBoxTrial2_F700_line7
			// 
			this->textBoxTrial2_F700_line7->Location = System::Drawing::Point(467, 395);
			this->textBoxTrial2_F700_line7->Name = L"textBoxTrial2_F700_line7";
			this->textBoxTrial2_F700_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F700_line7->TabIndex = 278;
			// 
			// textBoxTrial2_F500_line7
			// 
			this->textBoxTrial2_F500_line7->Location = System::Drawing::Point(371, 395);
			this->textBoxTrial2_F500_line7->Name = L"textBoxTrial2_F500_line7";
			this->textBoxTrial2_F500_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F500_line7->TabIndex = 277;
			// 
			// textBoxTrial2_F400_line7
			// 
			this->textBoxTrial2_F400_line7->Location = System::Drawing::Point(275, 395);
			this->textBoxTrial2_F400_line7->Name = L"textBoxTrial2_F400_line7";
			this->textBoxTrial2_F400_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F400_line7->TabIndex = 276;
			// 
			// textBoxTrial2_F200_line7
			// 
			this->textBoxTrial2_F200_line7->Location = System::Drawing::Point(175, 395);
			this->textBoxTrial2_F200_line7->Name = L"textBoxTrial2_F200_line7";
			this->textBoxTrial2_F200_line7->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F200_line7->TabIndex = 275;
			// 
			// textBoxTrial2_F2000_line6
			// 
			this->textBoxTrial2_F2000_line6->Location = System::Drawing::Point(1140, 349);
			this->textBoxTrial2_F2000_line6->Name = L"textBoxTrial2_F2000_line6";
			this->textBoxTrial2_F2000_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F2000_line6->TabIndex = 274;
			// 
			// textBoxTrial2_F1500_line6
			// 
			this->textBoxTrial2_F1500_line6->Location = System::Drawing::Point(1044, 349);
			this->textBoxTrial2_F1500_line6->Name = L"textBoxTrial2_F1500_line6";
			this->textBoxTrial2_F1500_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1500_line6->TabIndex = 273;
			// 
			// textBoxTrial2_F1300_line6
			// 
			this->textBoxTrial2_F1300_line6->Location = System::Drawing::Point(949, 349);
			this->textBoxTrial2_F1300_line6->Name = L"textBoxTrial2_F1300_line6";
			this->textBoxTrial2_F1300_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1300_line6->TabIndex = 272;
			// 
			// textBoxTrial2_F1200_line6
			// 
			this->textBoxTrial2_F1200_line6->Location = System::Drawing::Point(853, 349);
			this->textBoxTrial2_F1200_line6->Name = L"textBoxTrial2_F1200_line6";
			this->textBoxTrial2_F1200_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1200_line6->TabIndex = 271;
			// 
			// textBoxTrial2_F1000_line6
			// 
			this->textBoxTrial2_F1000_line6->Location = System::Drawing::Point(759, 349);
			this->textBoxTrial2_F1000_line6->Name = L"textBoxTrial2_F1000_line6";
			this->textBoxTrial2_F1000_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1000_line6->TabIndex = 270;
			// 
			// textBoxTrial2_F900_line6
			// 
			this->textBoxTrial2_F900_line6->Location = System::Drawing::Point(663, 349);
			this->textBoxTrial2_F900_line6->Name = L"textBoxTrial2_F900_line6";
			this->textBoxTrial2_F900_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F900_line6->TabIndex = 269;
			// 
			// textBoxTrial2_F800_line6
			// 
			this->textBoxTrial2_F800_line6->Location = System::Drawing::Point(567, 349);
			this->textBoxTrial2_F800_line6->Name = L"textBoxTrial2_F800_line6";
			this->textBoxTrial2_F800_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F800_line6->TabIndex = 268;
			// 
			// textBoxTrial2_F700_line6
			// 
			this->textBoxTrial2_F700_line6->Location = System::Drawing::Point(467, 349);
			this->textBoxTrial2_F700_line6->Name = L"textBoxTrial2_F700_line6";
			this->textBoxTrial2_F700_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F700_line6->TabIndex = 267;
			// 
			// textBoxTrial2_F500_line6
			// 
			this->textBoxTrial2_F500_line6->Location = System::Drawing::Point(371, 349);
			this->textBoxTrial2_F500_line6->Name = L"textBoxTrial2_F500_line6";
			this->textBoxTrial2_F500_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F500_line6->TabIndex = 266;
			// 
			// textBoxTrial2_F400_line6
			// 
			this->textBoxTrial2_F400_line6->Location = System::Drawing::Point(275, 349);
			this->textBoxTrial2_F400_line6->Name = L"textBoxTrial2_F400_line6";
			this->textBoxTrial2_F400_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F400_line6->TabIndex = 265;
			// 
			// textBoxTrial2_F200_line6
			// 
			this->textBoxTrial2_F200_line6->Location = System::Drawing::Point(175, 349);
			this->textBoxTrial2_F200_line6->Name = L"textBoxTrial2_F200_line6";
			this->textBoxTrial2_F200_line6->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F200_line6->TabIndex = 264;
			// 
			// textBoxTrial2_F2000_line5
			// 
			this->textBoxTrial2_F2000_line5->Location = System::Drawing::Point(1140, 303);
			this->textBoxTrial2_F2000_line5->Name = L"textBoxTrial2_F2000_line5";
			this->textBoxTrial2_F2000_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F2000_line5->TabIndex = 263;
			// 
			// textBoxTrial2_F1500_line5
			// 
			this->textBoxTrial2_F1500_line5->Location = System::Drawing::Point(1044, 303);
			this->textBoxTrial2_F1500_line5->Name = L"textBoxTrial2_F1500_line5";
			this->textBoxTrial2_F1500_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1500_line5->TabIndex = 262;
			// 
			// textBoxTrial2_F1300_line5
			// 
			this->textBoxTrial2_F1300_line5->Location = System::Drawing::Point(949, 303);
			this->textBoxTrial2_F1300_line5->Name = L"textBoxTrial2_F1300_line5";
			this->textBoxTrial2_F1300_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1300_line5->TabIndex = 261;
			// 
			// textBoxTrial2_F1200_line5
			// 
			this->textBoxTrial2_F1200_line5->Location = System::Drawing::Point(853, 303);
			this->textBoxTrial2_F1200_line5->Name = L"textBoxTrial2_F1200_line5";
			this->textBoxTrial2_F1200_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1200_line5->TabIndex = 260;
			// 
			// textBoxTrial2_F1000_line5
			// 
			this->textBoxTrial2_F1000_line5->Location = System::Drawing::Point(759, 303);
			this->textBoxTrial2_F1000_line5->Name = L"textBoxTrial2_F1000_line5";
			this->textBoxTrial2_F1000_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1000_line5->TabIndex = 259;
			// 
			// textBoxTrial2_F900_line5
			// 
			this->textBoxTrial2_F900_line5->Location = System::Drawing::Point(663, 303);
			this->textBoxTrial2_F900_line5->Name = L"textBoxTrial2_F900_line5";
			this->textBoxTrial2_F900_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F900_line5->TabIndex = 258;
			// 
			// textBoxTrial2_F800_line5
			// 
			this->textBoxTrial2_F800_line5->Location = System::Drawing::Point(567, 303);
			this->textBoxTrial2_F800_line5->Name = L"textBoxTrial2_F800_line5";
			this->textBoxTrial2_F800_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F800_line5->TabIndex = 257;
			// 
			// textBoxTrial2_F700_line5
			// 
			this->textBoxTrial2_F700_line5->Location = System::Drawing::Point(467, 303);
			this->textBoxTrial2_F700_line5->Name = L"textBoxTrial2_F700_line5";
			this->textBoxTrial2_F700_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F700_line5->TabIndex = 256;
			// 
			// textBoxTrial2_F500_line5
			// 
			this->textBoxTrial2_F500_line5->Location = System::Drawing::Point(371, 303);
			this->textBoxTrial2_F500_line5->Name = L"textBoxTrial2_F500_line5";
			this->textBoxTrial2_F500_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F500_line5->TabIndex = 255;
			// 
			// textBoxTrial2_F400_line5
			// 
			this->textBoxTrial2_F400_line5->Location = System::Drawing::Point(275, 303);
			this->textBoxTrial2_F400_line5->Name = L"textBoxTrial2_F400_line5";
			this->textBoxTrial2_F400_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F400_line5->TabIndex = 254;
			// 
			// textBoxTrial2_F200_line5
			// 
			this->textBoxTrial2_F200_line5->Location = System::Drawing::Point(175, 303);
			this->textBoxTrial2_F200_line5->Name = L"textBoxTrial2_F200_line5";
			this->textBoxTrial2_F200_line5->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F200_line5->TabIndex = 253;
			// 
			// textBoxTrial2_F2000_line4
			// 
			this->textBoxTrial2_F2000_line4->Location = System::Drawing::Point(1140, 254);
			this->textBoxTrial2_F2000_line4->Name = L"textBoxTrial2_F2000_line4";
			this->textBoxTrial2_F2000_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F2000_line4->TabIndex = 252;
			// 
			// textBoxTrial2_F1500_line4
			// 
			this->textBoxTrial2_F1500_line4->Location = System::Drawing::Point(1044, 254);
			this->textBoxTrial2_F1500_line4->Name = L"textBoxTrial2_F1500_line4";
			this->textBoxTrial2_F1500_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1500_line4->TabIndex = 251;
			// 
			// textBoxTrial2_F1300_line4
			// 
			this->textBoxTrial2_F1300_line4->Location = System::Drawing::Point(949, 254);
			this->textBoxTrial2_F1300_line4->Name = L"textBoxTrial2_F1300_line4";
			this->textBoxTrial2_F1300_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1300_line4->TabIndex = 250;
			// 
			// textBoxTrial2_F1200_line4
			// 
			this->textBoxTrial2_F1200_line4->Location = System::Drawing::Point(853, 254);
			this->textBoxTrial2_F1200_line4->Name = L"textBoxTrial2_F1200_line4";
			this->textBoxTrial2_F1200_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1200_line4->TabIndex = 249;
			// 
			// textBoxTrial2_F1000_line4
			// 
			this->textBoxTrial2_F1000_line4->Location = System::Drawing::Point(759, 254);
			this->textBoxTrial2_F1000_line4->Name = L"textBoxTrial2_F1000_line4";
			this->textBoxTrial2_F1000_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F1000_line4->TabIndex = 248;
			// 
			// textBoxTrial2_F900_line4
			// 
			this->textBoxTrial2_F900_line4->Location = System::Drawing::Point(663, 254);
			this->textBoxTrial2_F900_line4->Name = L"textBoxTrial2_F900_line4";
			this->textBoxTrial2_F900_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F900_line4->TabIndex = 247;
			// 
			// textBoxTrial2_F800_line4
			// 
			this->textBoxTrial2_F800_line4->Location = System::Drawing::Point(567, 254);
			this->textBoxTrial2_F800_line4->Name = L"textBoxTrial2_F800_line4";
			this->textBoxTrial2_F800_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F800_line4->TabIndex = 246;
			// 
			// textBoxTrial2_F700_line4
			// 
			this->textBoxTrial2_F700_line4->Location = System::Drawing::Point(467, 254);
			this->textBoxTrial2_F700_line4->Name = L"textBoxTrial2_F700_line4";
			this->textBoxTrial2_F700_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F700_line4->TabIndex = 245;
			// 
			// textBoxTrial2_F500_line4
			// 
			this->textBoxTrial2_F500_line4->Location = System::Drawing::Point(371, 254);
			this->textBoxTrial2_F500_line4->Name = L"textBoxTrial2_F500_line4";
			this->textBoxTrial2_F500_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F500_line4->TabIndex = 244;
			// 
			// textBoxTrial2_F400_line4
			// 
			this->textBoxTrial2_F400_line4->Location = System::Drawing::Point(275, 254);
			this->textBoxTrial2_F400_line4->Name = L"textBoxTrial2_F400_line4";
			this->textBoxTrial2_F400_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F400_line4->TabIndex = 243;
			// 
			// labelTrial2_F1300_line3
			// 
			this->labelTrial2_F1300_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1300_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1300_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1300_line3->Location = System::Drawing::Point(947, 214);
			this->labelTrial2_F1300_line3->Name = L"labelTrial2_F1300_line3";
			this->labelTrial2_F1300_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1300_line3->TabIndex = 241;
			// 
			// labelTrial2_F2000_line3
			// 
			this->labelTrial2_F2000_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F2000_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F2000_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F2000_line3->Location = System::Drawing::Point(1140, 214);
			this->labelTrial2_F2000_line3->Name = L"labelTrial2_F2000_line3";
			this->labelTrial2_F2000_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F2000_line3->TabIndex = 240;
			// 
			// labelTrial2_F1500_line3
			// 
			this->labelTrial2_F1500_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1500_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1500_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1500_line3->Location = System::Drawing::Point(1044, 214);
			this->labelTrial2_F1500_line3->Name = L"labelTrial2_F1500_line3";
			this->labelTrial2_F1500_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1500_line3->TabIndex = 238;
			// 
			// labelTrial2_F900_line3
			// 
			this->labelTrial2_F900_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F900_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F900_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F900_line3->Location = System::Drawing::Point(660, 214);
			this->labelTrial2_F900_line3->Name = L"labelTrial2_F900_line3";
			this->labelTrial2_F900_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F900_line3->TabIndex = 235;
			// 
			// labelTrial2_F1200_line3
			// 
			this->labelTrial2_F1200_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1200_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1200_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1200_line3->Location = System::Drawing::Point(853, 214);
			this->labelTrial2_F1200_line3->Name = L"labelTrial2_F1200_line3";
			this->labelTrial2_F1200_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1200_line3->TabIndex = 234;
			// 
			// labelTrial2_F1000_line3
			// 
			this->labelTrial2_F1000_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1000_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1000_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1000_line3->Location = System::Drawing::Point(757, 214);
			this->labelTrial2_F1000_line3->Name = L"labelTrial2_F1000_line3";
			this->labelTrial2_F1000_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1000_line3->TabIndex = 232;
			// 
			// labelTrial2_F800_line3
			// 
			this->labelTrial2_F800_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F800_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F800_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F800_line3->Location = System::Drawing::Point(562, 214);
			this->labelTrial2_F800_line3->Name = L"labelTrial2_F800_line3";
			this->labelTrial2_F800_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F800_line3->TabIndex = 230;
			// 
			// labelTrial2_F400_line3
			// 
			this->labelTrial2_F400_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F400_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F400_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F400_line3->Location = System::Drawing::Point(275, 214);
			this->labelTrial2_F400_line3->Name = L"labelTrial2_F400_line3";
			this->labelTrial2_F400_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F400_line3->TabIndex = 227;
			// 
			// labelTrial2_F700_line3
			// 
			this->labelTrial2_F700_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F700_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F700_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F700_line3->Location = System::Drawing::Point(467, 214);
			this->labelTrial2_F700_line3->Name = L"labelTrial2_F700_line3";
			this->labelTrial2_F700_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F700_line3->TabIndex = 226;
			// 
			// labelTrial2_F500_line3
			// 
			this->labelTrial2_F500_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F500_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F500_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F500_line3->Location = System::Drawing::Point(371, 214);
			this->labelTrial2_F500_line3->Name = L"labelTrial2_F500_line3";
			this->labelTrial2_F500_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F500_line3->TabIndex = 224;
			// 
			// labelTrial2_F200_line3
			// 
			this->labelTrial2_F200_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F200_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F200_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F200_line3->Location = System::Drawing::Point(175, 214);
			this->labelTrial2_F200_line3->Name = L"labelTrial2_F200_line3";
			this->labelTrial2_F200_line3->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F200_line3->TabIndex = 222;
			// 
			// labelTrial2_F1300_line2
			// 
			this->labelTrial2_F1300_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1300_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1300_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1300_line2->Location = System::Drawing::Point(947, 172);
			this->labelTrial2_F1300_line2->Name = L"labelTrial2_F1300_line2";
			this->labelTrial2_F1300_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1300_line2->TabIndex = 219;
			// 
			// labelTrial2_F2000_line2
			// 
			this->labelTrial2_F2000_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F2000_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F2000_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F2000_line2->Location = System::Drawing::Point(1140, 172);
			this->labelTrial2_F2000_line2->Name = L"labelTrial2_F2000_line2";
			this->labelTrial2_F2000_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F2000_line2->TabIndex = 218;
			// 
			// labelTrial2_F1500_line2
			// 
			this->labelTrial2_F1500_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1500_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1500_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1500_line2->Location = System::Drawing::Point(1044, 172);
			this->labelTrial2_F1500_line2->Name = L"labelTrial2_F1500_line2";
			this->labelTrial2_F1500_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1500_line2->TabIndex = 216;
			// 
			// labelTrial2_F1300_line1
			// 
			this->labelTrial2_F1300_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1300_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1300_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1300_line1->Location = System::Drawing::Point(947, 131);
			this->labelTrial2_F1300_line1->Name = L"labelTrial2_F1300_line1";
			this->labelTrial2_F1300_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1300_line1->TabIndex = 213;
			// 
			// labelTrial2_F2000_line1
			// 
			this->labelTrial2_F2000_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F2000_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F2000_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F2000_line1->Location = System::Drawing::Point(1140, 131);
			this->labelTrial2_F2000_line1->Name = L"labelTrial2_F2000_line1";
			this->labelTrial2_F2000_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F2000_line1->TabIndex = 212;
			// 
			// labelTrial2_F1500_line1
			// 
			this->labelTrial2_F1500_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1500_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1500_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1500_line1->Location = System::Drawing::Point(1044, 131);
			this->labelTrial2_F1500_line1->Name = L"labelTrial2_F1500_line1";
			this->labelTrial2_F1500_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1500_line1->TabIndex = 210;
			// 
			// labelTrial2_F900_line2
			// 
			this->labelTrial2_F900_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F900_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F900_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F900_line2->Location = System::Drawing::Point(660, 172);
			this->labelTrial2_F900_line2->Name = L"labelTrial2_F900_line2";
			this->labelTrial2_F900_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F900_line2->TabIndex = 207;
			// 
			// labelTrial2_F1200_line2
			// 
			this->labelTrial2_F1200_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1200_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1200_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1200_line2->Location = System::Drawing::Point(853, 172);
			this->labelTrial2_F1200_line2->Name = L"labelTrial2_F1200_line2";
			this->labelTrial2_F1200_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1200_line2->TabIndex = 206;
			// 
			// labelTrial2_F1000_line2
			// 
			this->labelTrial2_F1000_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1000_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1000_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1000_line2->Location = System::Drawing::Point(757, 172);
			this->labelTrial2_F1000_line2->Name = L"labelTrial2_F1000_line2";
			this->labelTrial2_F1000_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1000_line2->TabIndex = 204;
			// 
			// labelTrial2_F800_line2
			// 
			this->labelTrial2_F800_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F800_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F800_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F800_line2->Location = System::Drawing::Point(562, 172);
			this->labelTrial2_F800_line2->Name = L"labelTrial2_F800_line2";
			this->labelTrial2_F800_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F800_line2->TabIndex = 202;
			// 
			// labelTrial2_F900_line1
			// 
			this->labelTrial2_F900_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F900_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F900_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F900_line1->Location = System::Drawing::Point(660, 131);
			this->labelTrial2_F900_line1->Name = L"labelTrial2_F900_line1";
			this->labelTrial2_F900_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F900_line1->TabIndex = 199;
			// 
			// labelTrial2_F1200_line1
			// 
			this->labelTrial2_F1200_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1200_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1200_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1200_line1->Location = System::Drawing::Point(853, 131);
			this->labelTrial2_F1200_line1->Name = L"labelTrial2_F1200_line1";
			this->labelTrial2_F1200_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1200_line1->TabIndex = 198;
			// 
			// labelTrial2_F1000_line1
			// 
			this->labelTrial2_F1000_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F1000_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F1000_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F1000_line1->Location = System::Drawing::Point(757, 131);
			this->labelTrial2_F1000_line1->Name = L"labelTrial2_F1000_line1";
			this->labelTrial2_F1000_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F1000_line1->TabIndex = 196;
			// 
			// labelTrial2_F800_line1
			// 
			this->labelTrial2_F800_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F800_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F800_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F800_line1->Location = System::Drawing::Point(562, 131);
			this->labelTrial2_F800_line1->Name = L"labelTrial2_F800_line1";
			this->labelTrial2_F800_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F800_line1->TabIndex = 194;
			// 
			// labelTrial2_F400_line2
			// 
			this->labelTrial2_F400_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F400_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F400_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F400_line2->Location = System::Drawing::Point(275, 172);
			this->labelTrial2_F400_line2->Name = L"labelTrial2_F400_line2";
			this->labelTrial2_F400_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F400_line2->TabIndex = 191;
			// 
			// labelTrial2_F700_line2
			// 
			this->labelTrial2_F700_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F700_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F700_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F700_line2->Location = System::Drawing::Point(467, 172);
			this->labelTrial2_F700_line2->Name = L"labelTrial2_F700_line2";
			this->labelTrial2_F700_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F700_line2->TabIndex = 188;
			// 
			// labelTrial2_F500_line2
			// 
			this->labelTrial2_F500_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F500_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F500_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F500_line2->Location = System::Drawing::Point(371, 172);
			this->labelTrial2_F500_line2->Name = L"labelTrial2_F500_line2";
			this->labelTrial2_F500_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F500_line2->TabIndex = 186;
			// 
			// labelTrial2_F200_line2
			// 
			this->labelTrial2_F200_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F200_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F200_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F200_line2->Location = System::Drawing::Point(175, 172);
			this->labelTrial2_F200_line2->Name = L"labelTrial2_F200_line2";
			this->labelTrial2_F200_line2->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F200_line2->TabIndex = 184;
			// 
			// label60
			// 
			this->label60->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label60->ForeColor = System::Drawing::Color::Black;
			this->label60->Location = System::Drawing::Point(21, 397);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(143, 25);
			this->label60->TabIndex = 181;
			this->label60->Text = L"△L= L\'-L";
			// 
			// label59
			// 
			this->label59->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(21, 349);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(143, 25);
			this->label59->TabIndex = 180;
			this->label59->Text = L"L=C/G2";
			// 
			// label58
			// 
			this->label58->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label58->ForeColor = System::Drawing::Color::Black;
			this->label58->Location = System::Drawing::Point(21, 307);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(143, 25);
			this->label58->TabIndex = 179;
			this->label58->Text = L"L\'=U1/2πfI1";
			// 
			// label57
			// 
			this->label57->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->ForeColor = System::Drawing::Color::Black;
			this->label57->Location = System::Drawing::Point(21, 256);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(143, 25);
			this->label57->TabIndex = 178;
			this->label57->Text = L"I1=UR/1K (mA)";
			// 
			// label56
			// 
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label56->ForeColor = System::Drawing::Color::Black;
			this->label56->Location = System::Drawing::Point(21, 214);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(147, 29);
			this->label56->TabIndex = 177;
			this->label56->Text = L"UR(v)";
			// 
			// label55
			// 
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->ForeColor = System::Drawing::Color::Black;
			this->label55->Location = System::Drawing::Point(21, 172);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(143, 25);
			this->label55->TabIndex = 176;
			this->label55->Text = L"U1 (v)";
			// 
			// label51
			// 
			this->label51->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->ForeColor = System::Drawing::Color::Black;
			this->label51->Location = System::Drawing::Point(1140, 45);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(90, 25);
			this->label51->TabIndex = 175;
			this->label51->Text = L"2000";
			// 
			// label52
			// 
			this->label52->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->ForeColor = System::Drawing::Color::Black;
			this->label52->Location = System::Drawing::Point(1044, 45);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(90, 25);
			this->label52->TabIndex = 174;
			this->label52->Text = L"1500";
			// 
			// label53
			// 
			this->label53->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->ForeColor = System::Drawing::Color::Black;
			this->label53->Location = System::Drawing::Point(948, 45);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(90, 25);
			this->label53->TabIndex = 173;
			this->label53->Text = L"1300";
			// 
			// label54
			// 
			this->label54->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label54->ForeColor = System::Drawing::Color::Black;
			this->label54->Location = System::Drawing::Point(852, 45);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(90, 25);
			this->label54->TabIndex = 172;
			this->label54->Text = L"1200";
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(755, 45);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(90, 25);
			this->label50->TabIndex = 171;
			this->label50->Text = L"1000";
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(659, 45);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(90, 25);
			this->label49->TabIndex = 170;
			this->label49->Text = L"900";
			// 
			// label48
			// 
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(563, 45);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(90, 25);
			this->label48->TabIndex = 169;
			this->label48->Text = L"800";
			// 
			// label47
			// 
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(467, 45);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(90, 25);
			this->label47->TabIndex = 168;
			this->label47->Text = L"700";
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(371, 45);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(90, 25);
			this->label46->TabIndex = 167;
			this->label46->Text = L"500";
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(275, 45);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(90, 25);
			this->label45->TabIndex = 166;
			this->label45->Text = L"400";
			// 
			// labelTrial2_F400_line1
			// 
			this->labelTrial2_F400_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F400_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F400_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F400_line1->Location = System::Drawing::Point(275, 131);
			this->labelTrial2_F400_line1->Name = L"labelTrial2_F400_line1";
			this->labelTrial2_F400_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F400_line1->TabIndex = 164;
			// 
			// label98
			// 
			this->label98->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label98->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label98->ForeColor = System::Drawing::Color::Black;
			this->label98->Location = System::Drawing::Point(21, 87);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(143, 25);
			this->label98->TabIndex = 158;
			this->label98->Text = L"参数";
			// 
			// label99
			// 
			this->label99->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label99->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label99->ForeColor = System::Drawing::Color::Black;
			this->label99->Location = System::Drawing::Point(21, 45);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(147, 25);
			this->label99->TabIndex = 157;
			this->label99->Text = L"频率";
			// 
			// labelTrial2_F700_line1
			// 
			this->labelTrial2_F700_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F700_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F700_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F700_line1->Location = System::Drawing::Point(467, 131);
			this->labelTrial2_F700_line1->Name = L"labelTrial2_F700_line1";
			this->labelTrial2_F700_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F700_line1->TabIndex = 154;
			// 
			// labelTrial2_F500_line1
			// 
			this->labelTrial2_F500_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F500_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F500_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F500_line1->Location = System::Drawing::Point(371, 131);
			this->labelTrial2_F500_line1->Name = L"labelTrial2_F500_line1";
			this->labelTrial2_F500_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F500_line1->TabIndex = 152;
			// 
			// labelTrial2_F200_line1
			// 
			this->labelTrial2_F200_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_F200_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_F200_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_F200_line1->Location = System::Drawing::Point(175, 131);
			this->labelTrial2_F200_line1->Name = L"labelTrial2_F200_line1";
			this->labelTrial2_F200_line1->Size = System::Drawing::Size(90, 25);
			this->labelTrial2_F200_line1->TabIndex = 150;
			// 
			// textBoxTrial2_F200_line4
			// 
			this->textBoxTrial2_F200_line4->Location = System::Drawing::Point(175, 254);
			this->textBoxTrial2_F200_line4->Name = L"textBoxTrial2_F200_line4";
			this->textBoxTrial2_F200_line4->Size = System::Drawing::Size(90, 30);
			this->textBoxTrial2_F200_line4->TabIndex = 147;
			// 
			// label105
			// 
			this->label105->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(179, 45);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(90, 25);
			this->label105->TabIndex = 145;
			this->label105->Text = L"200";
			// 
			// label106
			// 
			this->label106->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->ForeColor = System::Drawing::Color::Black;
			this->label106->Location = System::Drawing::Point(21, 131);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(143, 25);
			this->label106->TabIndex = 144;
			this->label106->Text = L"U（v）";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBoxScore4);
			this->groupBox2->Controls->Add(this->labelTrial3_1300);
			this->groupBox2->Controls->Add(this->labelTrial3_2000);
			this->groupBox2->Controls->Add(this->labelTrial3_1500);
			this->groupBox2->Controls->Add(this->labelTrial3_900);
			this->groupBox2->Controls->Add(this->labelTrial3_1200);
			this->groupBox2->Controls->Add(this->labelTrial3_1000);
			this->groupBox2->Controls->Add(this->labelTrial3_800);
			this->groupBox2->Controls->Add(this->label134);
			this->groupBox2->Controls->Add(this->label135);
			this->groupBox2->Controls->Add(this->label136);
			this->groupBox2->Controls->Add(this->label137);
			this->groupBox2->Controls->Add(this->label138);
			this->groupBox2->Controls->Add(this->label139);
			this->groupBox2->Controls->Add(this->label140);
			this->groupBox2->Controls->Add(this->label141);
			this->groupBox2->Controls->Add(this->label142);
			this->groupBox2->Controls->Add(this->label143);
			this->groupBox2->Controls->Add(this->labelTrial3_400);
			this->groupBox2->Controls->Add(this->label146);
			this->groupBox2->Controls->Add(this->labelTrial3_700);
			this->groupBox2->Controls->Add(this->labelTrial3_500);
			this->groupBox2->Controls->Add(this->labelTrial3_200);
			this->groupBox2->Controls->Add(this->label150);
			this->groupBox2->Controls->Add(this->label151);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(23, 1290);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 163);
			this->groupBox2->TabIndex = 287;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"回转器 实验内容4";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(367, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 225;
			this->label2->Text = L"请打分：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(644, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 20);
			this->label3->TabIndex = 224;
			this->label3->Text = L"本项目总分30";
			// 
			// textBoxScore4
			// 
			this->textBoxScore4->Location = System::Drawing::Point(469, 127);
			this->textBoxScore4->Name = L"textBoxScore4";
			this->textBoxScore4->Size = System::Drawing::Size(152, 30);
			this->textBoxScore4->TabIndex = 223;
			this->textBoxScore4->TextChanged += gcnew System::EventHandler(this, &回转器::textBoxScore4_TextChanged);
			// 
			// labelTrial3_1300
			// 
			this->labelTrial3_1300->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_1300->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_1300->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_1300->Location = System::Drawing::Point(947, 82);
			this->labelTrial3_1300->Name = L"labelTrial3_1300";
			this->labelTrial3_1300->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_1300->TabIndex = 213;
			// 
			// labelTrial3_2000
			// 
			this->labelTrial3_2000->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_2000->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_2000->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_2000->Location = System::Drawing::Point(1140, 82);
			this->labelTrial3_2000->Name = L"labelTrial3_2000";
			this->labelTrial3_2000->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_2000->TabIndex = 212;
			// 
			// labelTrial3_1500
			// 
			this->labelTrial3_1500->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_1500->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_1500->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_1500->Location = System::Drawing::Point(1044, 82);
			this->labelTrial3_1500->Name = L"labelTrial3_1500";
			this->labelTrial3_1500->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_1500->TabIndex = 210;
			// 
			// labelTrial3_900
			// 
			this->labelTrial3_900->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_900->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_900->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_900->Location = System::Drawing::Point(660, 82);
			this->labelTrial3_900->Name = L"labelTrial3_900";
			this->labelTrial3_900->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_900->TabIndex = 199;
			// 
			// labelTrial3_1200
			// 
			this->labelTrial3_1200->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_1200->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_1200->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_1200->Location = System::Drawing::Point(853, 82);
			this->labelTrial3_1200->Name = L"labelTrial3_1200";
			this->labelTrial3_1200->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_1200->TabIndex = 198;
			// 
			// labelTrial3_1000
			// 
			this->labelTrial3_1000->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_1000->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_1000->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_1000->Location = System::Drawing::Point(757, 82);
			this->labelTrial3_1000->Name = L"labelTrial3_1000";
			this->labelTrial3_1000->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_1000->TabIndex = 196;
			// 
			// labelTrial3_800
			// 
			this->labelTrial3_800->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_800->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_800->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_800->Location = System::Drawing::Point(562, 82);
			this->labelTrial3_800->Name = L"labelTrial3_800";
			this->labelTrial3_800->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_800->TabIndex = 194;
			// 
			// label134
			// 
			this->label134->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label134->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label134->ForeColor = System::Drawing::Color::Black;
			this->label134->Location = System::Drawing::Point(1140, 41);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(90, 25);
			this->label134->TabIndex = 175;
			this->label134->Text = L"2000";
			// 
			// label135
			// 
			this->label135->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label135->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label135->ForeColor = System::Drawing::Color::Black;
			this->label135->Location = System::Drawing::Point(1044, 41);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(90, 25);
			this->label135->TabIndex = 174;
			this->label135->Text = L"1500";
			// 
			// label136
			// 
			this->label136->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label136->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label136->ForeColor = System::Drawing::Color::Black;
			this->label136->Location = System::Drawing::Point(948, 41);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(90, 25);
			this->label136->TabIndex = 173;
			this->label136->Text = L"1300";
			// 
			// label137
			// 
			this->label137->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label137->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label137->ForeColor = System::Drawing::Color::Black;
			this->label137->Location = System::Drawing::Point(852, 41);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(90, 25);
			this->label137->TabIndex = 172;
			this->label137->Text = L"1200";
			// 
			// label138
			// 
			this->label138->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label138->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label138->ForeColor = System::Drawing::Color::Black;
			this->label138->Location = System::Drawing::Point(755, 41);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(90, 25);
			this->label138->TabIndex = 171;
			this->label138->Text = L"1000";
			// 
			// label139
			// 
			this->label139->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label139->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label139->ForeColor = System::Drawing::Color::Black;
			this->label139->Location = System::Drawing::Point(659, 41);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(90, 25);
			this->label139->TabIndex = 170;
			this->label139->Text = L"900";
			// 
			// label140
			// 
			this->label140->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label140->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label140->ForeColor = System::Drawing::Color::Black;
			this->label140->Location = System::Drawing::Point(563, 41);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(90, 25);
			this->label140->TabIndex = 169;
			this->label140->Text = L"800";
			// 
			// label141
			// 
			this->label141->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label141->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label141->ForeColor = System::Drawing::Color::Black;
			this->label141->Location = System::Drawing::Point(467, 41);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(90, 25);
			this->label141->TabIndex = 168;
			this->label141->Text = L"700";
			// 
			// label142
			// 
			this->label142->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label142->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label142->ForeColor = System::Drawing::Color::Black;
			this->label142->Location = System::Drawing::Point(371, 41);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(90, 25);
			this->label142->TabIndex = 167;
			this->label142->Text = L"500";
			// 
			// label143
			// 
			this->label143->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label143->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label143->ForeColor = System::Drawing::Color::Black;
			this->label143->Location = System::Drawing::Point(275, 41);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(90, 25);
			this->label143->TabIndex = 166;
			this->label143->Text = L"400";
			// 
			// labelTrial3_400
			// 
			this->labelTrial3_400->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_400->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_400->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_400->Location = System::Drawing::Point(275, 82);
			this->labelTrial3_400->Name = L"labelTrial3_400";
			this->labelTrial3_400->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_400->TabIndex = 164;
			// 
			// label146
			// 
			this->label146->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label146->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label146->ForeColor = System::Drawing::Color::Black;
			this->label146->Location = System::Drawing::Point(21, 41);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(147, 25);
			this->label146->TabIndex = 157;
			this->label146->Text = L"频率";
			// 
			// labelTrial3_700
			// 
			this->labelTrial3_700->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_700->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_700->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_700->Location = System::Drawing::Point(467, 82);
			this->labelTrial3_700->Name = L"labelTrial3_700";
			this->labelTrial3_700->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_700->TabIndex = 154;
			// 
			// labelTrial3_500
			// 
			this->labelTrial3_500->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_500->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_500->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_500->Location = System::Drawing::Point(371, 82);
			this->labelTrial3_500->Name = L"labelTrial3_500";
			this->labelTrial3_500->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_500->TabIndex = 152;
			// 
			// labelTrial3_200
			// 
			this->labelTrial3_200->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_200->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_200->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_200->Location = System::Drawing::Point(175, 82);
			this->labelTrial3_200->Name = L"labelTrial3_200";
			this->labelTrial3_200->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_200->TabIndex = 150;
			// 
			// label150
			// 
			this->label150->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label150->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label150->ForeColor = System::Drawing::Color::Black;
			this->label150->Location = System::Drawing::Point(179, 41);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(90, 25);
			this->label150->TabIndex = 145;
			this->label150->Text = L"200";
			// 
			// label151
			// 
			this->label151->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label151->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label151->ForeColor = System::Drawing::Color::Black;
			this->label151->Location = System::Drawing::Point(21, 82);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(143, 25);
			this->label151->TabIndex = 144;
			this->label151->Text = L"U1（v）";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &回转器::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(23, 1458);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(640, 73);
			this->groupBox14->TabIndex = 338;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"RLC串联谐振电路的研究 实验总分";
			// 
			// labelTotalGrade
			// 
			this->labelTotalGrade->AutoSize = true;
			this->labelTotalGrade->Location = System::Drawing::Point(279, 26);
			this->labelTotalGrade->Name = L"labelTotalGrade";
			this->labelTotalGrade->Size = System::Drawing::Size(19, 20);
			this->labelTotalGrade->TabIndex = 0;
			this->labelTotalGrade->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(804, 1484);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 339;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &回转器::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1024, 1484);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 341;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &回转器::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(911, 1484);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 340;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &回转器::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox14);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Location = System::Drawing::Point(59, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1347, 1531);
			this->panel1->TabIndex = 342;
			// 
			// 回转器
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1575, 698);
			this->Controls->Add(this->panel1);
			this->Name = L"回转器";
			this->Text = L"回转器";
			this->Load += gcnew System::EventHandler(this, &回转器::回转器_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String ^SelectedArea = "";
		void  Priview();
		void Print();
		public:void Load回转器Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
	private: System::Void 回转器_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
private: System::Void textBoxScore3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxScore1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxScore4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Bitmap ^ _NewBitmap;
	int x;
	int y;
	_NewBitmap = gcnew  Bitmap(panel1->Width, panel1->Height);
	panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));

	x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
	y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
	e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Priview();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Print();
}
};
}
