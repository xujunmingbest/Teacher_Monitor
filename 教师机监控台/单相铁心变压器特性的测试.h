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
	/// 单相铁心变压器特性的测试 摘要
	/// </summary>
	public ref class 单相铁心变压器特性的测试 : public System::Windows::Forms::Form
	{
	public:
		单相铁心变压器特性的测试(void)
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
		~单相铁心变压器特性的测试()
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
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  labelTrial3_I10_10;
	private: System::Windows::Forms::Label^  labelTrial3_U20_10;
	private: System::Windows::Forms::Label^  labelTrial3_U1_10;
	private: System::Windows::Forms::Label^  labelTrial3_I10_9;
	private: System::Windows::Forms::Label^  labelTrial3_I10_8;
	private: System::Windows::Forms::Label^  labelTrial3_I10_7;
	private: System::Windows::Forms::Label^  labelTrial3_I10_6;
	private: System::Windows::Forms::Label^  labelTrial3_U20_9;
	private: System::Windows::Forms::Label^  labelTrial3_U20_8;
	private: System::Windows::Forms::Label^  labelTrial3_U20_7;
	private: System::Windows::Forms::Label^  labelTrial3_U20_6;
	private: System::Windows::Forms::Label^  labelTrial3_U1_9;
	private: System::Windows::Forms::Label^  labelTrial3_U1_8;
	private: System::Windows::Forms::Label^  labelTrial3_U1_7;
	private: System::Windows::Forms::Label^  labelTrial3_U1_6;
	private: System::Windows::Forms::Label^  labelTrial3_I10_5;
	private: System::Windows::Forms::Label^  labelTrial3_I10_4;
	private: System::Windows::Forms::Label^  labelTrial3_I10_3;
	private: System::Windows::Forms::Label^  labelTrial3_I10_2;
	private: System::Windows::Forms::Label^  labelTrial3_I10_1;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  labelTrial3_U20_5;
	private: System::Windows::Forms::Label^  labelTrial3_U20_4;
	private: System::Windows::Forms::Label^  labelTrial3_U20_3;
	private: System::Windows::Forms::Label^  labelTrial3_U20_2;
	private: System::Windows::Forms::Label^  labelTrial3_U20_1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelTrial3_U1_5;
	private: System::Windows::Forms::Label^  labelTrial3_U1_4;
	private: System::Windows::Forms::Label^  labelTrial3_U1_3;
	private: System::Windows::Forms::Label^  labelTrial3_U1_2;
	private: System::Windows::Forms::Label^  labelTrial3_U1_1;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  labelTrial2_Line3_U2;
	private: System::Windows::Forms::Label^  labelTrial2_Line3_I2;
	private: System::Windows::Forms::Label^  labelTrial2_Line3_W;
	private: System::Windows::Forms::Label^  labelTrial2_Line3_U1;
	private: System::Windows::Forms::Label^  labelTrial2_Line3_I1;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_U2;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_I2;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_W;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_U1;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_I1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_U2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_I2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_W;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_U1;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_I1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox结论;
	private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  textBoxTrialScore2;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  textBoxTrialScore1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(单相铁心变压器特性的测试::typeid));
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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrialScore2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_I10_10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I10_1 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U20_1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U1_1 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrialScore1 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_Line3_U2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line3_I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line3_W = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line3_U1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line3_I1 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_U2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_W = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_U1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_I1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_U2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_I2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_W = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_U1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_I1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox7->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(10, 20);
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
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBoxTrialScore2);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_10);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_10);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_10);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_9);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_8);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_7);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_6);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_9);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_8);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_7);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_6);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_9);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_8);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_7);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_6);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_5);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_4);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_3);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_2);
			this->groupBox3->Controls->Add(this->labelTrial3_I10_1);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_5);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_4);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_3);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_2);
			this->groupBox3->Controls->Add(this->labelTrial3_U20_1);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_5);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_4);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_3);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_2);
			this->groupBox3->Controls->Add(this->labelTrial3_U1_1);
			this->groupBox3->Controls->Add(this->label45);
			this->groupBox3->Controls->Add(this->label50);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(10, 809);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1407, 296);
			this->groupBox3->TabIndex = 249;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"实验内容三";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &单相铁心变压器特性的测试::groupBox3_Enter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(375, 259);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 20);
			this->label6->TabIndex = 278;
			this->label6->Text = L"请打分：";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(652, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 20);
			this->label8->TabIndex = 277;
			this->label8->Text = L"本项目总分30";
			// 
			// textBoxTrialScore2
			// 
			this->textBoxTrialScore2->Location = System::Drawing::Point(477, 256);
			this->textBoxTrialScore2->Name = L"textBoxTrialScore2";
			this->textBoxTrialScore2->Size = System::Drawing::Size(152, 30);
			this->textBoxTrialScore2->TabIndex = 276;
			this->textBoxTrialScore2->TextChanged += gcnew System::EventHandler(this, &单相铁心变压器特性的测试::textBoxTrialScore2_TextChanged);
			// 
			// labelTrial3_I10_10
			// 
			this->labelTrial3_I10_10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_10->Location = System::Drawing::Point(1167, 205);
			this->labelTrial3_I10_10->Name = L"labelTrial3_I10_10";
			this->labelTrial3_I10_10->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_10->TabIndex = 275;
			this->labelTrial3_I10_10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_10
			// 
			this->labelTrial3_U20_10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_10->Location = System::Drawing::Point(1167, 162);
			this->labelTrial3_U20_10->Name = L"labelTrial3_U20_10";
			this->labelTrial3_U20_10->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_10->TabIndex = 273;
			this->labelTrial3_U20_10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_10
			// 
			this->labelTrial3_U1_10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_10->Location = System::Drawing::Point(1167, 114);
			this->labelTrial3_U1_10->Name = L"labelTrial3_U1_10";
			this->labelTrial3_U1_10->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_10->TabIndex = 271;
			this->labelTrial3_U1_10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_9
			// 
			this->labelTrial3_I10_9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_9->Location = System::Drawing::Point(1068, 205);
			this->labelTrial3_I10_9->Name = L"labelTrial3_I10_9";
			this->labelTrial3_I10_9->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_9->TabIndex = 267;
			this->labelTrial3_I10_9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_8
			// 
			this->labelTrial3_I10_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_8->Location = System::Drawing::Point(955, 205);
			this->labelTrial3_I10_8->Name = L"labelTrial3_I10_8";
			this->labelTrial3_I10_8->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_8->TabIndex = 266;
			this->labelTrial3_I10_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_7
			// 
			this->labelTrial3_I10_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_7->Location = System::Drawing::Point(838, 206);
			this->labelTrial3_I10_7->Name = L"labelTrial3_I10_7";
			this->labelTrial3_I10_7->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_7->TabIndex = 265;
			this->labelTrial3_I10_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_6
			// 
			this->labelTrial3_I10_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_6->Location = System::Drawing::Point(727, 206);
			this->labelTrial3_I10_6->Name = L"labelTrial3_I10_6";
			this->labelTrial3_I10_6->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_6->TabIndex = 263;
			this->labelTrial3_I10_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_9
			// 
			this->labelTrial3_U20_9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_9->Location = System::Drawing::Point(1068, 162);
			this->labelTrial3_U20_9->Name = L"labelTrial3_U20_9";
			this->labelTrial3_U20_9->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_9->TabIndex = 259;
			this->labelTrial3_U20_9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_8
			// 
			this->labelTrial3_U20_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_8->Location = System::Drawing::Point(955, 162);
			this->labelTrial3_U20_8->Name = L"labelTrial3_U20_8";
			this->labelTrial3_U20_8->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_8->TabIndex = 258;
			this->labelTrial3_U20_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_7
			// 
			this->labelTrial3_U20_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_7->Location = System::Drawing::Point(838, 163);
			this->labelTrial3_U20_7->Name = L"labelTrial3_U20_7";
			this->labelTrial3_U20_7->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_7->TabIndex = 257;
			this->labelTrial3_U20_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_6
			// 
			this->labelTrial3_U20_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_6->Location = System::Drawing::Point(727, 163);
			this->labelTrial3_U20_6->Name = L"labelTrial3_U20_6";
			this->labelTrial3_U20_6->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_6->TabIndex = 255;
			this->labelTrial3_U20_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_9
			// 
			this->labelTrial3_U1_9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_9->Location = System::Drawing::Point(1068, 114);
			this->labelTrial3_U1_9->Name = L"labelTrial3_U1_9";
			this->labelTrial3_U1_9->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_9->TabIndex = 251;
			this->labelTrial3_U1_9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_8
			// 
			this->labelTrial3_U1_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_8->Location = System::Drawing::Point(955, 114);
			this->labelTrial3_U1_8->Name = L"labelTrial3_U1_8";
			this->labelTrial3_U1_8->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_8->TabIndex = 250;
			this->labelTrial3_U1_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_7
			// 
			this->labelTrial3_U1_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_7->Location = System::Drawing::Point(838, 115);
			this->labelTrial3_U1_7->Name = L"labelTrial3_U1_7";
			this->labelTrial3_U1_7->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_7->TabIndex = 249;
			this->labelTrial3_U1_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_6
			// 
			this->labelTrial3_U1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_6->Location = System::Drawing::Point(727, 115);
			this->labelTrial3_U1_6->Name = L"labelTrial3_U1_6";
			this->labelTrial3_U1_6->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_6->TabIndex = 247;
			this->labelTrial3_U1_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_5
			// 
			this->labelTrial3_I10_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_5->Location = System::Drawing::Point(628, 206);
			this->labelTrial3_I10_5->Name = L"labelTrial3_I10_5";
			this->labelTrial3_I10_5->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_5->TabIndex = 243;
			this->labelTrial3_I10_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_4
			// 
			this->labelTrial3_I10_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_4->Location = System::Drawing::Point(515, 206);
			this->labelTrial3_I10_4->Name = L"labelTrial3_I10_4";
			this->labelTrial3_I10_4->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_4->TabIndex = 242;
			this->labelTrial3_I10_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_3
			// 
			this->labelTrial3_I10_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_3->Location = System::Drawing::Point(398, 207);
			this->labelTrial3_I10_3->Name = L"labelTrial3_I10_3";
			this->labelTrial3_I10_3->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_3->TabIndex = 241;
			this->labelTrial3_I10_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_2
			// 
			this->labelTrial3_I10_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_2->Location = System::Drawing::Point(287, 207);
			this->labelTrial3_I10_2->Name = L"labelTrial3_I10_2";
			this->labelTrial3_I10_2->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_2->TabIndex = 239;
			this->labelTrial3_I10_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_I10_1
			// 
			this->labelTrial3_I10_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I10_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I10_1->Location = System::Drawing::Point(173, 207);
			this->labelTrial3_I10_1->Name = L"labelTrial3_I10_1";
			this->labelTrial3_I10_1->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_I10_1->TabIndex = 237;
			this->labelTrial3_I10_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(10, 207);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(157, 30);
			this->label31->TabIndex = 236;
			this->label31->Text = L"I10";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_5
			// 
			this->labelTrial3_U20_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_5->Location = System::Drawing::Point(628, 163);
			this->labelTrial3_U20_5->Name = L"labelTrial3_U20_5";
			this->labelTrial3_U20_5->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_5->TabIndex = 232;
			this->labelTrial3_U20_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_4
			// 
			this->labelTrial3_U20_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_4->Location = System::Drawing::Point(515, 163);
			this->labelTrial3_U20_4->Name = L"labelTrial3_U20_4";
			this->labelTrial3_U20_4->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_4->TabIndex = 231;
			this->labelTrial3_U20_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_3
			// 
			this->labelTrial3_U20_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_3->Location = System::Drawing::Point(398, 164);
			this->labelTrial3_U20_3->Name = L"labelTrial3_U20_3";
			this->labelTrial3_U20_3->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_3->TabIndex = 230;
			this->labelTrial3_U20_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_2
			// 
			this->labelTrial3_U20_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_2->Location = System::Drawing::Point(287, 164);
			this->labelTrial3_U20_2->Name = L"labelTrial3_U20_2";
			this->labelTrial3_U20_2->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_2->TabIndex = 228;
			this->labelTrial3_U20_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U20_1
			// 
			this->labelTrial3_U20_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U20_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U20_1->Location = System::Drawing::Point(173, 164);
			this->labelTrial3_U20_1->Name = L"labelTrial3_U20_1";
			this->labelTrial3_U20_1->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U20_1->TabIndex = 226;
			this->labelTrial3_U20_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(10, 164);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 30);
			this->label1->TabIndex = 225;
			this->label1->Text = L"U20";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_5
			// 
			this->labelTrial3_U1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_5->Location = System::Drawing::Point(628, 115);
			this->labelTrial3_U1_5->Name = L"labelTrial3_U1_5";
			this->labelTrial3_U1_5->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_5->TabIndex = 221;
			this->labelTrial3_U1_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_4
			// 
			this->labelTrial3_U1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_4->Location = System::Drawing::Point(515, 115);
			this->labelTrial3_U1_4->Name = L"labelTrial3_U1_4";
			this->labelTrial3_U1_4->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_4->TabIndex = 219;
			this->labelTrial3_U1_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_3
			// 
			this->labelTrial3_U1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_3->Location = System::Drawing::Point(398, 116);
			this->labelTrial3_U1_3->Name = L"labelTrial3_U1_3";
			this->labelTrial3_U1_3->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_3->TabIndex = 217;
			this->labelTrial3_U1_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_2
			// 
			this->labelTrial3_U1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_2->Location = System::Drawing::Point(287, 116);
			this->labelTrial3_U1_2->Name = L"labelTrial3_U1_2";
			this->labelTrial3_U1_2->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_2->TabIndex = 215;
			this->labelTrial3_U1_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial3_U1_1
			// 
			this->labelTrial3_U1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U1_1->Location = System::Drawing::Point(173, 116);
			this->labelTrial3_U1_1->Name = L"labelTrial3_U1_1";
			this->labelTrial3_U1_1->Size = System::Drawing::Size(93, 30);
			this->labelTrial3_U1_1->TabIndex = 213;
			this->labelTrial3_U1_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(10, 116);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(157, 30);
			this->label45->TabIndex = 212;
			this->label45->Text = L"U1";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label50
			// 
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(6, 42);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(1118, 55);
			this->label50->TabIndex = 87;
			this->label50->Text = L"    3．将高压线圈（副边）开路，确认调压器处在零位后，合上电源，调节调压器输出电压，使U1从零逐次上升到1.2倍额定电压（1.2×36V），分别记下各次测得的"
				L"U1，U20和I10数据，记入自拟的数据表格，绘制变压器的空载特性曲线。";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->textBoxTrialScore1);
			this->groupBox1->Controls->Add(this->labelTrial2_Line3_U2);
			this->groupBox1->Controls->Add(this->labelTrial2_Line3_I2);
			this->groupBox1->Controls->Add(this->labelTrial2_Line3_W);
			this->groupBox1->Controls->Add(this->labelTrial2_Line3_U1);
			this->groupBox1->Controls->Add(this->labelTrial2_Line3_I1);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_U2);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_I2);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_W);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_U1);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_I1);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_U2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_I2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_W);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_U1);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_I1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(10, 349);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1407, 454);
			this->groupBox1->TabIndex = 248;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容二";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(849, 369);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 20);
			this->label5->TabIndex = 246;
			this->label5->Text = L"请打分：";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(1126, 369);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(129, 20);
			this->label16->TabIndex = 245;
			this->label16->Text = L"本项目总分30";
			// 
			// textBoxTrialScore1
			// 
			this->textBoxTrialScore1->Location = System::Drawing::Point(951, 366);
			this->textBoxTrialScore1->Name = L"textBoxTrialScore1";
			this->textBoxTrialScore1->Size = System::Drawing::Size(152, 30);
			this->textBoxTrialScore1->TabIndex = 244;
			this->textBoxTrialScore1->TextChanged += gcnew System::EventHandler(this, &单相铁心变压器特性的测试::textBoxTrialScore1_TextChanged);
			// 
			// labelTrial2_Line3_U2
			// 
			this->labelTrial2_Line3_U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line3_U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line3_U2->Location = System::Drawing::Point(741, 358);
			this->labelTrial2_Line3_U2->Name = L"labelTrial2_Line3_U2";
			this->labelTrial2_Line3_U2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line3_U2->TabIndex = 243;
			this->labelTrial2_Line3_U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line3_I2
			// 
			this->labelTrial2_Line3_I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line3_I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line3_I2->Location = System::Drawing::Point(628, 358);
			this->labelTrial2_Line3_I2->Name = L"labelTrial2_Line3_I2";
			this->labelTrial2_Line3_I2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line3_I2->TabIndex = 242;
			this->labelTrial2_Line3_I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line3_W
			// 
			this->labelTrial2_Line3_W->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line3_W->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line3_W->Location = System::Drawing::Point(511, 359);
			this->labelTrial2_Line3_W->Name = L"labelTrial2_Line3_W";
			this->labelTrial2_Line3_W->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line3_W->TabIndex = 241;
			this->labelTrial2_Line3_W->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line3_U1
			// 
			this->labelTrial2_Line3_U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line3_U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line3_U1->Location = System::Drawing::Point(400, 359);
			this->labelTrial2_Line3_U1->Name = L"labelTrial2_Line3_U1";
			this->labelTrial2_Line3_U1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line3_U1->TabIndex = 239;
			this->labelTrial2_Line3_U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line3_I1
			// 
			this->labelTrial2_Line3_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line3_I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line3_I1->Location = System::Drawing::Point(286, 359);
			this->labelTrial2_Line3_I1->Name = L"labelTrial2_Line3_I1";
			this->labelTrial2_Line3_I1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line3_I1->TabIndex = 237;
			this->labelTrial2_Line3_I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(123, 359);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(157, 67);
			this->label22->TabIndex = 236;
			this->label22->Text = L"SA1,SA2,SA3通";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line2_U2
			// 
			this->labelTrial2_Line2_U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_U2->Location = System::Drawing::Point(741, 268);
			this->labelTrial2_Line2_U2->Name = L"labelTrial2_Line2_U2";
			this->labelTrial2_Line2_U2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line2_U2->TabIndex = 232;
			this->labelTrial2_Line2_U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line2_I2
			// 
			this->labelTrial2_Line2_I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_I2->Location = System::Drawing::Point(628, 268);
			this->labelTrial2_Line2_I2->Name = L"labelTrial2_Line2_I2";
			this->labelTrial2_Line2_I2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line2_I2->TabIndex = 231;
			this->labelTrial2_Line2_I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line2_W
			// 
			this->labelTrial2_Line2_W->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_W->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_W->Location = System::Drawing::Point(511, 269);
			this->labelTrial2_Line2_W->Name = L"labelTrial2_Line2_W";
			this->labelTrial2_Line2_W->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line2_W->TabIndex = 230;
			this->labelTrial2_Line2_W->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line2_U1
			// 
			this->labelTrial2_Line2_U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_U1->Location = System::Drawing::Point(400, 269);
			this->labelTrial2_Line2_U1->Name = L"labelTrial2_Line2_U1";
			this->labelTrial2_Line2_U1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line2_U1->TabIndex = 228;
			this->labelTrial2_Line2_U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line2_I1
			// 
			this->labelTrial2_Line2_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_I1->Location = System::Drawing::Point(286, 269);
			this->labelTrial2_Line2_I1->Name = L"labelTrial2_Line2_I1";
			this->labelTrial2_Line2_I1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line2_I1->TabIndex = 226;
			this->labelTrial2_Line2_I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(123, 269);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(157, 67);
			this->label15->TabIndex = 225;
			this->label15->Text = L"SA1,SA2通\r\nSA3断";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line1_U2
			// 
			this->labelTrial2_Line1_U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_U2->Location = System::Drawing::Point(741, 178);
			this->labelTrial2_Line1_U2->Name = L"labelTrial2_Line1_U2";
			this->labelTrial2_Line1_U2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line1_U2->TabIndex = 221;
			this->labelTrial2_Line1_U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(741, 118);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 23);
			this->label9->TabIndex = 220;
			this->label9->Text = L"(U2)V2";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line1_I2
			// 
			this->labelTrial2_Line1_I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_I2->Location = System::Drawing::Point(628, 178);
			this->labelTrial2_Line1_I2->Name = L"labelTrial2_Line1_I2";
			this->labelTrial2_Line1_I2->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line1_I2->TabIndex = 219;
			this->labelTrial2_Line1_I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(628, 118);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 23);
			this->label7->TabIndex = 218;
			this->label7->Text = L"(I2)A2";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line1_W
			// 
			this->labelTrial2_Line1_W->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_W->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_W->Location = System::Drawing::Point(511, 179);
			this->labelTrial2_Line1_W->Name = L"labelTrial2_Line1_W";
			this->labelTrial2_Line1_W->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line1_W->TabIndex = 217;
			this->labelTrial2_Line1_W->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line1_U1
			// 
			this->labelTrial2_Line1_U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_U1->Location = System::Drawing::Point(400, 179);
			this->labelTrial2_Line1_U1->Name = L"labelTrial2_Line1_U1";
			this->labelTrial2_Line1_U1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line1_U1->TabIndex = 215;
			this->labelTrial2_Line1_U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Line1_I1
			// 
			this->labelTrial2_Line1_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_I1->Location = System::Drawing::Point(286, 179);
			this->labelTrial2_Line1_I1->Name = L"labelTrial2_Line1_I1";
			this->labelTrial2_Line1_I1->Size = System::Drawing::Size(93, 30);
			this->labelTrial2_Line1_I1->TabIndex = 213;
			this->labelTrial2_Line1_I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(123, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 67);
			this->label3->TabIndex = 212;
			this->label3->Text = L"SA1通\r\nSA2,SA3断";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(511, 119);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(93, 23);
			this->label25->TabIndex = 211;
			this->label25->Text = L"W";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(400, 118);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 23);
			this->label26->TabIndex = 210;
			this->label26->Text = L"(U1)V1";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(286, 119);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(93, 23);
			this->label27->TabIndex = 209;
			this->label27->Text = L"(I1)A1";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(119, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 23);
			this->label4->TabIndex = 208;
			this->label4->Text = L"被测量";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(6, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1118, 47);
			this->label2->TabIndex = 87;
			this->label2->Text = L"    2．K1、K2、K3断开，控制SA1、SA2、SA3的通断来增减负载，分别测出五个仪表的读数，记入自拟的数据表格，绘制变压器外特性曲线，实验完毕将调压器调"
				L"回零位，断开电源。";
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(115, 1134);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1297, 28);
			this->textBox结论->TabIndex = 252;
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(6, 1137);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(95, 25);
			this->label64->TabIndex = 251;
			this->label64->Text = L"实验结论";
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(11, 1178);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(640, 73);
			this->groupBox14->TabIndex = 340;
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
			this->button1->Location = System::Drawing::Point(792, 1204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 341;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1012, 1204);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 343;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(899, 1204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 342;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &单相铁心变压器特性的测试::button2_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &单相铁心变压器特性的测试::printDocument1_PrintPage);
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
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox14);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label64);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox结论);
			this->panel1->Location = System::Drawing::Point(43, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1437, 1271);
			this->panel1->TabIndex = 344;
			// 
			// 单相铁心变压器特性的测试
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1618, 629);
			this->Controls->Add(this->panel1);
			this->Name = L"单相铁心变压器特性的测试";
			this->Text = L"单相铁心变压器特性的测试";
			this->Load += gcnew System::EventHandler(this, &单相铁心变压器特性的测试::单相铁心变压器特性的测试_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		String ^SelectedArea = "";
		void  Priview();
		void Print();
		public:void Load单相铁心变压器特性的测试Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
	private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void 单相铁心变压器特性的测试_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
private: System::Void textBoxTrialScore2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrialScore1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
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
