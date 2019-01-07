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
	/// 日光灯功率因数的提高 摘要
	/// </summary>
	public ref class 日光灯功率因数的提高 : public System::Windows::Forms::Form
	{
	public:
		日光灯功率因数的提高(void)
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
		~日光灯功率因数的提高()
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
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Label^  label34;


	private: System::Windows::Forms::Label^  label33;


	private: System::Windows::Forms::Label^  labelTrial2_UA_line2;

	private: System::Windows::Forms::Label^  labelTrial2_UA_line1;

	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  labelTrial2_UL_line2;

	private: System::Windows::Forms::Label^  labelTrial2_UL_line1;

	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  labelTrial2_U_line2;

	private: System::Windows::Forms::Label^  labelTrial2_U_line1;

	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  labelTrial2_I_line2;

	private: System::Windows::Forms::Label^  labelTrial2_I_line1;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  labelTrial2_P_line2;

	private: System::Windows::Forms::Label^  labelTrial2_P_line1;
	private: System::Windows::Forms::Label^  label13;

	private: System::Windows::Forms::Label^  label18;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::GroupBox^  groupBox8;


	private: System::Windows::Forms::Label^  labelTrial1_Mea_UC;
	private: System::Windows::Forms::Label^  labelTrial1_Mea_UR;
	private: System::Windows::Forms::Label^  labelTrial1_Mea_U;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  labelTrial1_F;

	private: System::Windows::Forms::Label^  labelTrial1_R_Ur;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox2;







	private: System::Windows::Forms::Label^  labelTrial3_mea_IC_line4;

	private: System::Windows::Forms::Label^  labelTrial3_mea_IC_line3;

	private: System::Windows::Forms::Label^  labelTrial3_mea_IC_line2;

	private: System::Windows::Forms::Label^  labelTrial3_mea_IC_line1;

	private: System::Windows::Forms::Label^  labelTrial3_mea_IL_line4;

	private: System::Windows::Forms::Label^  labelTrial3_mea_IL_line3;

	private: System::Windows::Forms::Label^  labelTrial3_mea_IL_line2;

	private: System::Windows::Forms::Label^  labelTrial3_mea_IL_line1;

	private: System::Windows::Forms::Label^  labelTrial3_mea_I_line4;

	private: System::Windows::Forms::Label^  labelTrial3_mea_I_line3;

	private: System::Windows::Forms::Label^  labelTrial3_mea_I_line2;

	private: System::Windows::Forms::Label^  labelTrial3_mea_I_line1;

	private: System::Windows::Forms::Label^  labelTrial3_mea_U_line4;

	private: System::Windows::Forms::Label^  labelTrial3_mea_U_line3;

	private: System::Windows::Forms::Label^  labelTrial3_mea_U_line2;

	private: System::Windows::Forms::Label^  labelTrial3_mea_P_line4;

	private: System::Windows::Forms::Label^  labelTrial3_mea_P_line3;

	private: System::Windows::Forms::Label^  labelTrial3_mea_P_line2;

	private: System::Windows::Forms::Label^  labelTrial3_mea_U_line1;

	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  labelTrial3_mea_P_line1;
	private: System::Windows::Forms::Label^  label54;

	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBoxTrial2Score;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBoxTrial1Score;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBoxTrial3Score;

	private: System::Windows::Forms::GroupBox^  groupBox14;
	private: System::Windows::Forms::Label^  labelTotalGrade;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button9;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Label^  textBoxTrial2_cos_line2;
private: System::Windows::Forms::Label^  textBoxTrial2_cos_line1;
private: System::Windows::Forms::Label^  textBoxTrial1_Cal_UU;
private: System::Windows::Forms::Label^  textBoxTrial1_Mea_DU;
private: System::Windows::Forms::Label^  textBoxTrial1_Cal_U;
private: System::Windows::Forms::Label^  textBoxTrial2_cos_cal_line2;
private: System::Windows::Forms::Label^  textBoxTrial2_cos_cal_line1;
private: System::Windows::Forms::Label^  textBoxTrial2_R_line2;
private: System::Windows::Forms::Label^  textBoxTrial2_R_line1;
private: System::Windows::Forms::Label^  textBoxTrial3_cal_cos_line4;
private: System::Windows::Forms::Label^  textBoxTrial3_cal_cos_line3;
private: System::Windows::Forms::Label^  textBoxTrial3_cal_cos_line2;
private: System::Windows::Forms::Label^  textBoxTrial3_cal_cos_line1;
private: System::Windows::Forms::Label^  textBoxTrial3_cal_I_line4;
private: System::Windows::Forms::Label^  textBoxTrial3_cal_I_line3;
private: System::Windows::Forms::Label^  textBoxTrial3_cal_I_line2;
private: System::Windows::Forms::Label^  textBoxTrial3_cal_I_line1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(日光灯功率因数的提高::typeid));
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial2_cos_cal_line2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_cos_cal_line1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_R_line2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_R_line1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_cos_line2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_cos_line1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UA_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UA_line1 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UL_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UL_line1 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_U_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_U_line1 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_I_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_I_line1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P_line1 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial1_Cal_UU = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_Mea_DU = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_Cal_U = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_Mea_UC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Mea_UR = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Mea_U = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_F = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_Ur = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial3_cal_cos_line4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_cal_cos_line3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_cal_cos_line2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_cal_cos_line1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_cal_I_line4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_cal_I_line3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_cal_I_line2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_cal_I_line1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3Score = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_mea_IC_line4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_IC_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_IC_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_IC_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_IL_line4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_IL_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_IL_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_IL_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_I_line4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_I_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_I_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_I_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_U_line4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_U_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_U_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_P_line4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_P_line3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_P_line2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_U_line1 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_P_line1 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox7->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox14->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(23, 16);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(646, 314);
			this->groupBox7->TabIndex = 201;
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_cos_cal_line2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_cos_cal_line1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_R_line2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_R_line1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_cos_line2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_cos_line1);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->textBoxTrial2Score);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->label33);
			this->groupBox1->Controls->Add(this->labelTrial2_UA_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_UA_line1);
			this->groupBox1->Controls->Add(this->label32);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_line1);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->labelTrial2_U_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_U_line1);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->labelTrial2_I_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_I_line1);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->labelTrial2_P_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_P_line1);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(23, 588);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 340);
			this->groupBox1->TabIndex = 203;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"日光灯功率因数的提高 实验内容2";
			// 
			// textBoxTrial2_cos_cal_line2
			// 
			this->textBoxTrial2_cos_cal_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_cos_cal_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_cos_cal_line2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_cos_cal_line2->Location = System::Drawing::Point(829, 215);
			this->textBoxTrial2_cos_cal_line2->Name = L"textBoxTrial2_cos_cal_line2";
			this->textBoxTrial2_cos_cal_line2->Size = System::Drawing::Size(82, 25);
			this->textBoxTrial2_cos_cal_line2->TabIndex = 228;
			// 
			// textBoxTrial2_cos_cal_line1
			// 
			this->textBoxTrial2_cos_cal_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_cos_cal_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_cos_cal_line1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_cos_cal_line1->Location = System::Drawing::Point(829, 139);
			this->textBoxTrial2_cos_cal_line1->Name = L"textBoxTrial2_cos_cal_line1";
			this->textBoxTrial2_cos_cal_line1->Size = System::Drawing::Size(82, 25);
			this->textBoxTrial2_cos_cal_line1->TabIndex = 227;
			// 
			// textBoxTrial2_R_line2
			// 
			this->textBoxTrial2_R_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_R_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_R_line2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_R_line2->Location = System::Drawing::Point(726, 215);
			this->textBoxTrial2_R_line2->Name = L"textBoxTrial2_R_line2";
			this->textBoxTrial2_R_line2->Size = System::Drawing::Size(82, 25);
			this->textBoxTrial2_R_line2->TabIndex = 226;
			// 
			// textBoxTrial2_R_line1
			// 
			this->textBoxTrial2_R_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_R_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_R_line1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_R_line1->Location = System::Drawing::Point(726, 139);
			this->textBoxTrial2_R_line1->Name = L"textBoxTrial2_R_line1";
			this->textBoxTrial2_R_line1->Size = System::Drawing::Size(82, 25);
			this->textBoxTrial2_R_line1->TabIndex = 225;
			// 
			// textBoxTrial2_cos_line2
			// 
			this->textBoxTrial2_cos_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_cos_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_cos_line2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_cos_line2->Location = System::Drawing::Point(268, 214);
			this->textBoxTrial2_cos_line2->Name = L"textBoxTrial2_cos_line2";
			this->textBoxTrial2_cos_line2->Size = System::Drawing::Size(82, 25);
			this->textBoxTrial2_cos_line2->TabIndex = 224;
			this->textBoxTrial2_cos_line2->Click += gcnew System::EventHandler(this, &日光灯功率因数的提高::textBoxTrial2_cos_line2_Click);
			// 
			// textBoxTrial2_cos_line1
			// 
			this->textBoxTrial2_cos_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_cos_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_cos_line1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_cos_line1->Location = System::Drawing::Point(268, 138);
			this->textBoxTrial2_cos_line1->Name = L"textBoxTrial2_cos_line1";
			this->textBoxTrial2_cos_line1->Size = System::Drawing::Size(82, 25);
			this->textBoxTrial2_cos_line1->TabIndex = 223;
			this->textBoxTrial2_cos_line1->Click += gcnew System::EventHandler(this, &日光灯功率因数的提高::textBoxTrial2_cos_line1_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(376, 296);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 20);
			this->label11->TabIndex = 222;
			this->label11->Text = L"请打分：";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(653, 296);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(129, 20);
			this->label12->TabIndex = 221;
			this->label12->Text = L"本项目总分30";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(478, 293);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 220;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &日光灯功率因数的提高::textBoxTrial2Score_TextChanged);
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(829, 99);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(82, 25);
			this->label34->TabIndex = 76;
			this->label34->Text = L"cosφ";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(726, 99);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(82, 25);
			this->label33->TabIndex = 73;
			this->label33->Text = L"R（Ω）";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UA_line2
			// 
			this->labelTrial2_UA_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UA_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_UA_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_UA_line2->Location = System::Drawing::Point(620, 215);
			this->labelTrial2_UA_line2->Name = L"labelTrial2_UA_line2";
			this->labelTrial2_UA_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_UA_line2->TabIndex = 70;
			// 
			// labelTrial2_UA_line1
			// 
			this->labelTrial2_UA_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UA_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_UA_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_UA_line1->Location = System::Drawing::Point(620, 139);
			this->labelTrial2_UA_line1->Name = L"labelTrial2_UA_line1";
			this->labelTrial2_UA_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_UA_line1->TabIndex = 68;
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(620, 99);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(82, 25);
			this->label32->TabIndex = 66;
			this->label32->Text = L"UA（v）";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UL_line2
			// 
			this->labelTrial2_UL_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_UL_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_UL_line2->Location = System::Drawing::Point(532, 215);
			this->labelTrial2_UL_line2->Name = L"labelTrial2_UL_line2";
			this->labelTrial2_UL_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_UL_line2->TabIndex = 65;
			// 
			// labelTrial2_UL_line1
			// 
			this->labelTrial2_UL_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_UL_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_UL_line1->Location = System::Drawing::Point(532, 139);
			this->labelTrial2_UL_line1->Name = L"labelTrial2_UL_line1";
			this->labelTrial2_UL_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_UL_line1->TabIndex = 63;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(532, 99);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(82, 25);
			this->label29->TabIndex = 61;
			this->label29->Text = L"UL（L）";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_U_line2
			// 
			this->labelTrial2_U_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_U_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_U_line2->Location = System::Drawing::Point(444, 215);
			this->labelTrial2_U_line2->Name = L"labelTrial2_U_line2";
			this->labelTrial2_U_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_U_line2->TabIndex = 60;
			// 
			// labelTrial2_U_line1
			// 
			this->labelTrial2_U_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_U_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_U_line1->Location = System::Drawing::Point(444, 139);
			this->labelTrial2_U_line1->Name = L"labelTrial2_U_line1";
			this->labelTrial2_U_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_U_line1->TabIndex = 58;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(444, 99);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(82, 25);
			this->label26->TabIndex = 56;
			this->label26->Text = L"U（v）";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_I_line2
			// 
			this->labelTrial2_I_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_I_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_I_line2->Location = System::Drawing::Point(356, 215);
			this->labelTrial2_I_line2->Name = L"labelTrial2_I_line2";
			this->labelTrial2_I_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_I_line2->TabIndex = 55;
			// 
			// labelTrial2_I_line1
			// 
			this->labelTrial2_I_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_I_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_I_line1->Location = System::Drawing::Point(356, 139);
			this->labelTrial2_I_line1->Name = L"labelTrial2_I_line1";
			this->labelTrial2_I_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_I_line1->TabIndex = 53;
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(356, 99);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(82, 25);
			this->label15->TabIndex = 51;
			this->label15->Text = L"I（A）";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(268, 99);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(82, 25);
			this->label25->TabIndex = 50;
			this->label25->Text = L"cosφ";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_P_line2
			// 
			this->labelTrial2_P_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P_line2->Location = System::Drawing::Point(171, 215);
			this->labelTrial2_P_line2->Name = L"labelTrial2_P_line2";
			this->labelTrial2_P_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_P_line2->TabIndex = 49;
			// 
			// labelTrial2_P_line1
			// 
			this->labelTrial2_P_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P_line1->Location = System::Drawing::Point(171, 139);
			this->labelTrial2_P_line1->Name = L"labelTrial2_P_line1";
			this->labelTrial2_P_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_P_line1->TabIndex = 41;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(47, 214);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(112, 25);
			this->label13->TabIndex = 39;
			this->label13->Text = L"正常工作值";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(726, 63);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(185, 25);
			this->label18->TabIndex = 10;
			this->label18->Text = L"计  算  值";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(171, 99);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(82, 25);
			this->label19->TabIndex = 7;
			this->label19->Text = L"P（W）";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(47, 138);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(112, 25);
			this->label20->TabIndex = 4;
			this->label20->Text = L"启辉值";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(47, 62);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(655, 25);
			this->label21->TabIndex = 2;
			this->label21->Text = L"测 量 值";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxTrial1_Cal_UU);
			this->groupBox8->Controls->Add(this->textBoxTrial1_Mea_DU);
			this->groupBox8->Controls->Add(this->textBoxTrial1_Cal_U);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->textBoxTrial1Score);
			this->groupBox8->Controls->Add(this->labelTrial1_Mea_UC);
			this->groupBox8->Controls->Add(this->labelTrial1_Mea_UR);
			this->groupBox8->Controls->Add(this->labelTrial1_Mea_U);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->button6);
			this->groupBox8->Controls->Add(this->button7);
			this->groupBox8->Controls->Add(this->button4);
			this->groupBox8->Controls->Add(this->labelTrial1_F);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(23, 336);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 230);
			this->groupBox8->TabIndex = 202;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"日光灯功率因数的提高 实验内容1";
			// 
			// textBoxTrial1_Cal_UU
			// 
			this->textBoxTrial1_Cal_UU->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_Cal_UU->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_Cal_UU->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_Cal_UU->Location = System::Drawing::Point(1059, 125);
			this->textBoxTrial1_Cal_UU->Name = L"textBoxTrial1_Cal_UU";
			this->textBoxTrial1_Cal_UU->Size = System::Drawing::Size(147, 25);
			this->textBoxTrial1_Cal_UU->TabIndex = 225;
			// 
			// textBoxTrial1_Mea_DU
			// 
			this->textBoxTrial1_Mea_DU->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_Mea_DU->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_Mea_DU->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_Mea_DU->Location = System::Drawing::Point(894, 125);
			this->textBoxTrial1_Mea_DU->Name = L"textBoxTrial1_Mea_DU";
			this->textBoxTrial1_Mea_DU->Size = System::Drawing::Size(147, 25);
			this->textBoxTrial1_Mea_DU->TabIndex = 224;
			// 
			// textBoxTrial1_Cal_U
			// 
			this->textBoxTrial1_Cal_U->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_Cal_U->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_Cal_U->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_Cal_U->Location = System::Drawing::Point(632, 125);
			this->textBoxTrial1_Cal_U->Name = L"textBoxTrial1_Cal_U";
			this->textBoxTrial1_Cal_U->Size = System::Drawing::Size(243, 25);
			this->textBoxTrial1_Cal_U->TabIndex = 223;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(323, 183);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(89, 20);
			this->label22->TabIndex = 222;
			this->label22->Text = L"请打分：";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->Location = System::Drawing::Point(600, 183);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(129, 20);
			this->label23->TabIndex = 221;
			this->label23->Text = L"本项目总分30";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(425, 180);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 220;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &日光灯功率因数的提高::textBoxTrial1Score_TextChanged);
			// 
			// labelTrial1_Mea_UC
			// 
			this->labelTrial1_Mea_UC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Mea_UC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Mea_UC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Mea_UC->Location = System::Drawing::Point(425, 125);
			this->labelTrial1_Mea_UC->Name = L"labelTrial1_Mea_UC";
			this->labelTrial1_Mea_UC->Size = System::Drawing::Size(145, 25);
			this->labelTrial1_Mea_UC->TabIndex = 43;
			// 
			// labelTrial1_Mea_UR
			// 
			this->labelTrial1_Mea_UR->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Mea_UR->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Mea_UR->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Mea_UR->Location = System::Drawing::Point(236, 125);
			this->labelTrial1_Mea_UR->Name = L"labelTrial1_Mea_UR";
			this->labelTrial1_Mea_UR->Size = System::Drawing::Size(145, 25);
			this->labelTrial1_Mea_UR->TabIndex = 41;
			// 
			// labelTrial1_Mea_U
			// 
			this->labelTrial1_Mea_U->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Mea_U->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Mea_U->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Mea_U->Location = System::Drawing::Point(49, 125);
			this->labelTrial1_Mea_U->Name = L"labelTrial1_Mea_U";
			this->labelTrial1_Mea_U->Size = System::Drawing::Size(145, 25);
			this->labelTrial1_Mea_U->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(1059, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 25);
			this->label6->TabIndex = 38;
			this->label6->Text = L"△U/U";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(894, 80);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 25);
			this->label7->TabIndex = 37;
			this->label7->Text = L"△U";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(632, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(243, 25);
			this->label5->TabIndex = 36;
			this->label5->Text = L"U′（UR，UC组成Rt △）";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(425, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 25);
			this->label2->TabIndex = 35;
			this->label2->Text = L"UC（v）";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(560, 761);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 31);
			this->button6->TabIndex = 34;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(560, 720);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(102, 31);
			this->button7->TabIndex = 33;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(560, 627);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 31);
			this->button4->TabIndex = 25;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_F
			// 
			this->labelTrial1_F->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_F->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_F->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_F->Location = System::Drawing::Point(632, 41);
			this->labelTrial1_F->Name = L"labelTrial1_F";
			this->labelTrial1_F->Size = System::Drawing::Size(574, 25);
			this->labelTrial1_F->TabIndex = 10;
			this->labelTrial1_F->Text = L"计  算  值";
			// 
			// labelTrial1_R_Ur
			// 
			this->labelTrial1_R_Ur->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur->Location = System::Drawing::Point(234, 82);
			this->labelTrial1_R_Ur->Name = L"labelTrial1_R_Ur";
			this->labelTrial1_R_Ur->Size = System::Drawing::Size(147, 25);
			this->labelTrial1_R_Ur->TabIndex = 7;
			this->labelTrial1_R_Ur->Text = L"UR（v）";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(49, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"U（v）";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(49, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(523, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"测 量 值";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_cos_line4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_cos_line3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_cos_line2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_cos_line1);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_I_line4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_I_line3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_I_line2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_I_line1);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->textBoxTrial3Score);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IC_line4);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IC_line3);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IC_line2);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IC_line1);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IL_line4);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IL_line3);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IL_line2);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IL_line1);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_I_line4);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_I_line3);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_I_line2);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_I_line1);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_U_line4);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_U_line3);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_U_line2);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_P_line4);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_P_line3);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_P_line2);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_U_line1);
			this->groupBox2->Controls->Add(this->label62);
			this->groupBox2->Controls->Add(this->label61);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label60);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label46);
			this->groupBox2->Controls->Add(this->label49);
			this->groupBox2->Controls->Add(this->label50);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_P_line1);
			this->groupBox2->Controls->Add(this->label54);
			this->groupBox2->Controls->Add(this->label55);
			this->groupBox2->Controls->Add(this->label56);
			this->groupBox2->Controls->Add(this->label57);
			this->groupBox2->Controls->Add(this->label58);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(23, 946);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 480);
			this->groupBox2->TabIndex = 204;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"日光灯功率因数的提高 实验内容3";
			// 
			// textBoxTrial3_cal_cos_line4
			// 
			this->textBoxTrial3_cal_cos_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_cal_cos_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_cal_cos_line4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_cal_cos_line4->Location = System::Drawing::Point(822, 354);
			this->textBoxTrial3_cal_cos_line4->Name = L"textBoxTrial3_cal_cos_line4";
			this->textBoxTrial3_cal_cos_line4->Size = System::Drawing::Size(127, 25);
			this->textBoxTrial3_cal_cos_line4->TabIndex = 230;
			// 
			// textBoxTrial3_cal_cos_line3
			// 
			this->textBoxTrial3_cal_cos_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_cal_cos_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_cal_cos_line3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_cal_cos_line3->Location = System::Drawing::Point(822, 273);
			this->textBoxTrial3_cal_cos_line3->Name = L"textBoxTrial3_cal_cos_line3";
			this->textBoxTrial3_cal_cos_line3->Size = System::Drawing::Size(127, 25);
			this->textBoxTrial3_cal_cos_line3->TabIndex = 229;
			// 
			// textBoxTrial3_cal_cos_line2
			// 
			this->textBoxTrial3_cal_cos_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_cal_cos_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_cal_cos_line2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_cal_cos_line2->Location = System::Drawing::Point(822, 194);
			this->textBoxTrial3_cal_cos_line2->Name = L"textBoxTrial3_cal_cos_line2";
			this->textBoxTrial3_cal_cos_line2->Size = System::Drawing::Size(127, 25);
			this->textBoxTrial3_cal_cos_line2->TabIndex = 228;
			// 
			// textBoxTrial3_cal_cos_line1
			// 
			this->textBoxTrial3_cal_cos_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_cal_cos_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_cal_cos_line1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_cal_cos_line1->Location = System::Drawing::Point(822, 114);
			this->textBoxTrial3_cal_cos_line1->Name = L"textBoxTrial3_cal_cos_line1";
			this->textBoxTrial3_cal_cos_line1->Size = System::Drawing::Size(127, 25);
			this->textBoxTrial3_cal_cos_line1->TabIndex = 227;
			// 
			// textBoxTrial3_cal_I_line4
			// 
			this->textBoxTrial3_cal_I_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_cal_I_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_cal_I_line4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_cal_I_line4->Location = System::Drawing::Point(703, 354);
			this->textBoxTrial3_cal_I_line4->Name = L"textBoxTrial3_cal_I_line4";
			this->textBoxTrial3_cal_I_line4->Size = System::Drawing::Size(113, 25);
			this->textBoxTrial3_cal_I_line4->TabIndex = 226;
			// 
			// textBoxTrial3_cal_I_line3
			// 
			this->textBoxTrial3_cal_I_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_cal_I_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_cal_I_line3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_cal_I_line3->Location = System::Drawing::Point(703, 273);
			this->textBoxTrial3_cal_I_line3->Name = L"textBoxTrial3_cal_I_line3";
			this->textBoxTrial3_cal_I_line3->Size = System::Drawing::Size(113, 25);
			this->textBoxTrial3_cal_I_line3->TabIndex = 225;
			// 
			// textBoxTrial3_cal_I_line2
			// 
			this->textBoxTrial3_cal_I_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_cal_I_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_cal_I_line2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_cal_I_line2->Location = System::Drawing::Point(703, 194);
			this->textBoxTrial3_cal_I_line2->Name = L"textBoxTrial3_cal_I_line2";
			this->textBoxTrial3_cal_I_line2->Size = System::Drawing::Size(113, 25);
			this->textBoxTrial3_cal_I_line2->TabIndex = 224;
			// 
			// textBoxTrial3_cal_I_line1
			// 
			this->textBoxTrial3_cal_I_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_cal_I_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_cal_I_line1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_cal_I_line1->Location = System::Drawing::Point(703, 114);
			this->textBoxTrial3_cal_I_line1->Name = L"textBoxTrial3_cal_I_line1";
			this->textBoxTrial3_cal_I_line1->Size = System::Drawing::Size(113, 25);
			this->textBoxTrial3_cal_I_line1->TabIndex = 223;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(376, 439);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(89, 20);
			this->label14->TabIndex = 222;
			this->label14->Text = L"请打分：";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(653, 439);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(129, 20);
			this->label16->TabIndex = 221;
			this->label16->Text = L"本项目总分30";
			// 
			// textBoxTrial3Score
			// 
			this->textBoxTrial3Score->Location = System::Drawing::Point(478, 436);
			this->textBoxTrial3Score->Name = L"textBoxTrial3Score";
			this->textBoxTrial3Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial3Score->TabIndex = 220;
			this->textBoxTrial3Score->TextChanged += gcnew System::EventHandler(this, &日光灯功率因数的提高::textBoxTrial3Score_TextChanged);
			// 
			// labelTrial3_mea_IC_line4
			// 
			this->labelTrial3_mea_IC_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IC_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IC_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IC_line4->Location = System::Drawing::Point(582, 355);
			this->labelTrial3_mea_IC_line4->Name = L"labelTrial3_mea_IC_line4";
			this->labelTrial3_mea_IC_line4->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_IC_line4->TabIndex = 119;
			// 
			// labelTrial3_mea_IC_line3
			// 
			this->labelTrial3_mea_IC_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IC_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IC_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IC_line3->Location = System::Drawing::Point(582, 274);
			this->labelTrial3_mea_IC_line3->Name = L"labelTrial3_mea_IC_line3";
			this->labelTrial3_mea_IC_line3->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_IC_line3->TabIndex = 117;
			// 
			// labelTrial3_mea_IC_line2
			// 
			this->labelTrial3_mea_IC_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IC_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IC_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IC_line2->Location = System::Drawing::Point(582, 195);
			this->labelTrial3_mea_IC_line2->Name = L"labelTrial3_mea_IC_line2";
			this->labelTrial3_mea_IC_line2->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_IC_line2->TabIndex = 115;
			// 
			// labelTrial3_mea_IC_line1
			// 
			this->labelTrial3_mea_IC_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IC_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IC_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IC_line1->Location = System::Drawing::Point(582, 115);
			this->labelTrial3_mea_IC_line1->Name = L"labelTrial3_mea_IC_line1";
			this->labelTrial3_mea_IC_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_IC_line1->TabIndex = 113;
			// 
			// labelTrial3_mea_IL_line4
			// 
			this->labelTrial3_mea_IL_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IL_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IL_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IL_line4->Location = System::Drawing::Point(471, 355);
			this->labelTrial3_mea_IL_line4->Name = L"labelTrial3_mea_IL_line4";
			this->labelTrial3_mea_IL_line4->Size = System::Drawing::Size(106, 25);
			this->labelTrial3_mea_IL_line4->TabIndex = 111;
			// 
			// labelTrial3_mea_IL_line3
			// 
			this->labelTrial3_mea_IL_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IL_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IL_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IL_line3->Location = System::Drawing::Point(471, 274);
			this->labelTrial3_mea_IL_line3->Name = L"labelTrial3_mea_IL_line3";
			this->labelTrial3_mea_IL_line3->Size = System::Drawing::Size(106, 25);
			this->labelTrial3_mea_IL_line3->TabIndex = 109;
			// 
			// labelTrial3_mea_IL_line2
			// 
			this->labelTrial3_mea_IL_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IL_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IL_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IL_line2->Location = System::Drawing::Point(471, 195);
			this->labelTrial3_mea_IL_line2->Name = L"labelTrial3_mea_IL_line2";
			this->labelTrial3_mea_IL_line2->Size = System::Drawing::Size(106, 25);
			this->labelTrial3_mea_IL_line2->TabIndex = 107;
			// 
			// labelTrial3_mea_IL_line1
			// 
			this->labelTrial3_mea_IL_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IL_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IL_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IL_line1->Location = System::Drawing::Point(471, 115);
			this->labelTrial3_mea_IL_line1->Name = L"labelTrial3_mea_IL_line1";
			this->labelTrial3_mea_IL_line1->Size = System::Drawing::Size(106, 25);
			this->labelTrial3_mea_IL_line1->TabIndex = 105;
			// 
			// labelTrial3_mea_I_line4
			// 
			this->labelTrial3_mea_I_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_I_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_I_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_I_line4->Location = System::Drawing::Point(366, 355);
			this->labelTrial3_mea_I_line4->Name = L"labelTrial3_mea_I_line4";
			this->labelTrial3_mea_I_line4->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_I_line4->TabIndex = 103;
			// 
			// labelTrial3_mea_I_line3
			// 
			this->labelTrial3_mea_I_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_I_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_I_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_I_line3->Location = System::Drawing::Point(366, 274);
			this->labelTrial3_mea_I_line3->Name = L"labelTrial3_mea_I_line3";
			this->labelTrial3_mea_I_line3->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_I_line3->TabIndex = 101;
			// 
			// labelTrial3_mea_I_line2
			// 
			this->labelTrial3_mea_I_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_I_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_I_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_I_line2->Location = System::Drawing::Point(366, 195);
			this->labelTrial3_mea_I_line2->Name = L"labelTrial3_mea_I_line2";
			this->labelTrial3_mea_I_line2->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_I_line2->TabIndex = 99;
			// 
			// labelTrial3_mea_I_line1
			// 
			this->labelTrial3_mea_I_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_I_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_I_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_I_line1->Location = System::Drawing::Point(366, 115);
			this->labelTrial3_mea_I_line1->Name = L"labelTrial3_mea_I_line1";
			this->labelTrial3_mea_I_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_I_line1->TabIndex = 97;
			// 
			// labelTrial3_mea_U_line4
			// 
			this->labelTrial3_mea_U_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_U_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_U_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_U_line4->Location = System::Drawing::Point(263, 355);
			this->labelTrial3_mea_U_line4->Name = L"labelTrial3_mea_U_line4";
			this->labelTrial3_mea_U_line4->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_U_line4->TabIndex = 95;
			// 
			// labelTrial3_mea_U_line3
			// 
			this->labelTrial3_mea_U_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_U_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_U_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_U_line3->Location = System::Drawing::Point(263, 274);
			this->labelTrial3_mea_U_line3->Name = L"labelTrial3_mea_U_line3";
			this->labelTrial3_mea_U_line3->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_U_line3->TabIndex = 93;
			// 
			// labelTrial3_mea_U_line2
			// 
			this->labelTrial3_mea_U_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_U_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_U_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_U_line2->Location = System::Drawing::Point(263, 195);
			this->labelTrial3_mea_U_line2->Name = L"labelTrial3_mea_U_line2";
			this->labelTrial3_mea_U_line2->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_U_line2->TabIndex = 91;
			// 
			// labelTrial3_mea_P_line4
			// 
			this->labelTrial3_mea_P_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_P_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_P_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_P_line4->Location = System::Drawing::Point(148, 354);
			this->labelTrial3_mea_P_line4->Name = L"labelTrial3_mea_P_line4";
			this->labelTrial3_mea_P_line4->Size = System::Drawing::Size(109, 25);
			this->labelTrial3_mea_P_line4->TabIndex = 89;
			// 
			// labelTrial3_mea_P_line3
			// 
			this->labelTrial3_mea_P_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_P_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_P_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_P_line3->Location = System::Drawing::Point(148, 275);
			this->labelTrial3_mea_P_line3->Name = L"labelTrial3_mea_P_line3";
			this->labelTrial3_mea_P_line3->Size = System::Drawing::Size(109, 25);
			this->labelTrial3_mea_P_line3->TabIndex = 87;
			// 
			// labelTrial3_mea_P_line2
			// 
			this->labelTrial3_mea_P_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_P_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_P_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_P_line2->Location = System::Drawing::Point(148, 195);
			this->labelTrial3_mea_P_line2->Name = L"labelTrial3_mea_P_line2";
			this->labelTrial3_mea_P_line2->Size = System::Drawing::Size(109, 25);
			this->labelTrial3_mea_P_line2->TabIndex = 85;
			// 
			// labelTrial3_mea_U_line1
			// 
			this->labelTrial3_mea_U_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_U_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_U_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_U_line1->Location = System::Drawing::Point(263, 115);
			this->labelTrial3_mea_U_line1->Name = L"labelTrial3_mea_U_line1";
			this->labelTrial3_mea_U_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_U_line1->TabIndex = 83;
			// 
			// label62
			// 
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label62->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label62->ForeColor = System::Drawing::Color::Black;
			this->label62->Location = System::Drawing::Point(24, 115);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(112, 25);
			this->label62->TabIndex = 81;
			this->label62->Text = L"无";
			// 
			// label61
			// 
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label61->ForeColor = System::Drawing::Color::Black;
			this->label61->Location = System::Drawing::Point(24, 354);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(112, 25);
			this->label61->TabIndex = 80;
			this->label61->Text = L"4.7uf";
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(24, 275);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 25);
			this->label1->TabIndex = 79;
			this->label1->Text = L"2.2uf";
			// 
			// label60
			// 
			this->label60->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label60->ForeColor = System::Drawing::Color::Black;
			this->label60->Location = System::Drawing::Point(148, 43);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(531, 25);
			this->label60->TabIndex = 78;
			this->label60->Text = L"测  量  数  值";
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(822, 79);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(127, 25);
			this->label8->TabIndex = 76;
			this->label8->Text = L"cosφ";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(703, 79);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 25);
			this->label9->TabIndex = 73;
			this->label9->Text = L"I′（A）";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(583, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 25);
			this->label10->TabIndex = 61;
			this->label10->Text = L"IC(A)";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(471, 79);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(106, 25);
			this->label46->TabIndex = 56;
			this->label46->Text = L"IL(A)";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(366, 79);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(99, 25);
			this->label49->TabIndex = 51;
			this->label49->Text = L"I（A）";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(263, 79);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(97, 25);
			this->label50->TabIndex = 50;
			this->label50->Text = L"U(v)";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_mea_P_line1
			// 
			this->labelTrial3_mea_P_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_P_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_P_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_P_line1->Location = System::Drawing::Point(148, 115);
			this->labelTrial3_mea_P_line1->Name = L"labelTrial3_mea_P_line1";
			this->labelTrial3_mea_P_line1->Size = System::Drawing::Size(109, 25);
			this->labelTrial3_mea_P_line1->TabIndex = 41;
			// 
			// label54
			// 
			this->label54->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label54->ForeColor = System::Drawing::Color::Black;
			this->label54->Location = System::Drawing::Point(24, 195);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(112, 25);
			this->label54->TabIndex = 39;
			this->label54->Text = L"1uf";
			// 
			// label55
			// 
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->ForeColor = System::Drawing::Color::Black;
			this->label55->Location = System::Drawing::Point(703, 43);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(246, 25);
			this->label55->TabIndex = 10;
			this->label55->Text = L"计  算  值";
			// 
			// label56
			// 
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label56->ForeColor = System::Drawing::Color::Black;
			this->label56->Location = System::Drawing::Point(148, 79);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(109, 25);
			this->label56->TabIndex = 7;
			this->label56->Text = L"P（W）";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label57
			// 
			this->label57->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->ForeColor = System::Drawing::Color::Black;
			this->label57->Location = System::Drawing::Point(24, 79);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(112, 25);
			this->label57->TabIndex = 4;
			this->label57->Text = L"（μF）";
			this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label58
			// 
			this->label58->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label58->ForeColor = System::Drawing::Color::Black;
			this->label58->Location = System::Drawing::Point(24, 42);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(112, 25);
			this->label58->TabIndex = 2;
			this->label58->Text = L"电容值";
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox14);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Location = System::Drawing::Point(32, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1350, 1523);
			this->panel1->TabIndex = 205;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(25, 1447);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(640, 73);
			this->groupBox14->TabIndex = 342;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"日光灯功率因数的提高 实验总分";
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(806, 1473);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 343;
			this->button2->Text = L"保存成绩";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &日光灯功率因数的提高::button2_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(913, 1473);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(101, 36);
			this->button9->TabIndex = 344;
			this->button9->Text = L"预览";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &日光灯功率因数的提高::button9_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &日光灯功率因数的提高::printDocument1_BeginPrint);
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &日光灯功率因数的提高::printDocument1_PrintPage);
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
			// 日光灯功率因数的提高
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1522, 786);
			this->Controls->Add(this->panel1);
			this->Name = L"日光灯功率因数的提高";
			this->Text = L"日光灯功率因数的提高";
			this->Load += gcnew System::EventHandler(this, &日光灯功率因数的提高::日光灯功率因数的提高_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion			 
		String ^SelectedArea = "";
		void  Priview();
		void Print();
	public:void Load日光灯功率因数的提高Data(string &filename);
		   string *fileName;
		   void SaveCorrectGrades();
		   void CalScores();
	private: System::Void 日光灯功率因数的提高_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void printPreviewDialog1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveCorrectGrades();
	}
private: System::Void textBoxTrial1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial3Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	Priview();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	Print();
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
private: System::Void textBoxTrial2_cos_line1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxTrial2_cos_line2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void printDocument1_BeginPrint(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
	SelectedArea = "panel1";
}
};
}
















