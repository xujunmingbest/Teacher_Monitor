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
	/// RC网络的频率特性 摘要
	/// </summary>
	public ref class RC网络的频率特性 : public System::Windows::Forms::Form
	{
	public:
		RC网络的频率特性(void)
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
		~RC网络的频率特性()
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
	private: System::Windows::Forms::Label^  labelTrial1_Uo2_8;
	private: System::Windows::Forms::Label^  labelTrial1_Uo2_7;
	private: System::Windows::Forms::Label^  labelTrial1_Uo2_6;
	private: System::Windows::Forms::Label^  labelTrial1_Uo2_5;
	private: System::Windows::Forms::Label^  labelTrial1_Uo2_4;
	private: System::Windows::Forms::Label^  labelTrial1_Uo2_3;
	private: System::Windows::Forms::Label^  labelTrial1_Uo2_2;
	private: System::Windows::Forms::Label^  labelTrial1_Uo2_1;
	private: System::Windows::Forms::Label^  labelTrial1_Uo1_8;
	private: System::Windows::Forms::Label^  labelTrial1_Uo1_7;
	private: System::Windows::Forms::Label^  labelTrial1_Uo1_6;
	private: System::Windows::Forms::Label^  labelTrial1_Uo1_5;
	private: System::Windows::Forms::Label^  labelTrial1_Uo1_4;
	private: System::Windows::Forms::Label^  labelTrial1_Uo1_3;
	private: System::Windows::Forms::Label^  labelTrial1_Uo1_2;
	private: System::Windows::Forms::Label^  labelTrial1_Uo1_1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;








	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;








	private: System::Windows::Forms::Label^  label31;








	private: System::Windows::Forms::Label^  label1;








	private: System::Windows::Forms::Label^  label7;








	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;








	private: System::Windows::Forms::Label^  label10;








	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  textBoxTrial1Score;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::TextBox^  textBoxTrial2Score;

private: System::Windows::Forms::Label^  label结论;
private: System::Windows::Forms::Label^  label64;

private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Panel^  panel1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Label^  textBoxTrial1_F8;
private: System::Windows::Forms::Label^  textBoxTrial1_F7;
private: System::Windows::Forms::Label^  textBoxTrial1_F6;
private: System::Windows::Forms::Label^  textBoxTrial1_F5;
private: System::Windows::Forms::Label^  textBoxTrial1_F4;
private: System::Windows::Forms::Label^  textBoxTrial1_F3;
private: System::Windows::Forms::Label^  textBoxTrial1_F2;
private: System::Windows::Forms::Label^  textBoxTrial1_F1;
private: System::Windows::Forms::Label^  textBoxTrial2_φ2_8;
private: System::Windows::Forms::Label^  textBoxTrial2_φ2_7;
private: System::Windows::Forms::Label^  textBoxTrial2_φ2_6;
private: System::Windows::Forms::Label^  textBoxTrial2_φ2_5;
private: System::Windows::Forms::Label^  textBoxTrial2_φ2_4;
private: System::Windows::Forms::Label^  textBoxTrial2_φ2_3;
private: System::Windows::Forms::Label^  textBoxTrial2_φ2_2;
private: System::Windows::Forms::Label^  textBoxTrial2_φ2_1;
private: System::Windows::Forms::Label^  textBoxTrial2_τ2_8;
private: System::Windows::Forms::Label^  textBoxTrial2_τ2_7;
private: System::Windows::Forms::Label^  textBoxTrial2_τ2_6;
private: System::Windows::Forms::Label^  textBoxTrial2_τ2_5;
private: System::Windows::Forms::Label^  textBoxTrial2_τ2_4;
private: System::Windows::Forms::Label^  textBoxTrial2_τ2_3;
private: System::Windows::Forms::Label^  textBoxTrial2_τ2_2;
private: System::Windows::Forms::Label^  textBoxTrial2_τ2_1;
private: System::Windows::Forms::Label^  textBoxTrial2_φ8;
private: System::Windows::Forms::Label^  textBoxTrial2_φ7;
private: System::Windows::Forms::Label^  textBoxTrial2_φ6;
private: System::Windows::Forms::Label^  textBoxTrial2_φ5;
private: System::Windows::Forms::Label^  textBoxTrial2_φ4;
private: System::Windows::Forms::Label^  textBoxTrial2_φ3;
private: System::Windows::Forms::Label^  textBoxTrial2_φ2;
private: System::Windows::Forms::Label^  textBoxTrial2_φ1;
private: System::Windows::Forms::Label^  textBoxTrial2_τ8;
private: System::Windows::Forms::Label^  textBoxTrial2_τ7;
private: System::Windows::Forms::Label^  textBoxTrial2_τ6;
private: System::Windows::Forms::Label^  textBoxTrial2_τ5;
private: System::Windows::Forms::Label^  textBoxTrial2_τ4;
private: System::Windows::Forms::Label^  textBoxTrial2_τ3;
private: System::Windows::Forms::Label^  textBoxTrial2_τ2;
private: System::Windows::Forms::Label^  textBoxTrial2_τ1;
private: System::Windows::Forms::Label^  textBoxTrial2_T8;
private: System::Windows::Forms::Label^  textBoxTrial2_T7;
private: System::Windows::Forms::Label^  textBoxTrial2_T6;
private: System::Windows::Forms::Label^  textBoxTrial2_T5;
private: System::Windows::Forms::Label^  textBoxTrial2_T4;
private: System::Windows::Forms::Label^  textBoxTrial2_T3;
private: System::Windows::Forms::Label^  textBoxTrial2_T2;
private: System::Windows::Forms::Label^  textBoxTrial2_T1;
private: System::Windows::Forms::Label^  textBoxTrial2_F8;
private: System::Windows::Forms::Label^  textBoxTrial2_F7;
private: System::Windows::Forms::Label^  textBoxTrial2_F6;
private: System::Windows::Forms::Label^  textBoxTrial2_F5;
private: System::Windows::Forms::Label^  textBoxTrial2_F4;
private: System::Windows::Forms::Label^  textBoxTrial2_F3;
private: System::Windows::Forms::Label^  textBoxTrial2_F2;
private: System::Windows::Forms::Label^  textBoxTrial2_F1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RC网络的频率特性::typeid));
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
			this->textBoxTrial1_F8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F1 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_Uo2_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1_1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial2_φ2_8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ2_7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ2_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ2_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ2_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ2_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ2_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ2_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ2_8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ2_7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ2_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ2_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ2_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ2_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ2_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ2_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_τ1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_T8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_T7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_T6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_T5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_T4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_T3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_T2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_T1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_F8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_F7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_F6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_F5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_F4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_F3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_F2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_F1 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label结论 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(12, 15);
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
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxTrial1_F8);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F7);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F1);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->textBoxTrial1Score);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_8);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_7);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_6);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_5);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_4);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_3);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_2);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo2_1);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_8);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_7);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_6);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_5);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_4);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_3);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_2);
			this->groupBox8->Controls->Add(this->labelTrial1_Uo1_1);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 335);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1247, 303);
			this->groupBox8->TabIndex = 202;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"RC网络的频率特性 实验内容1";
			this->groupBox8->Enter += gcnew System::EventHandler(this, &RC网络的频率特性::groupBox8_Enter);
			// 
			// textBoxTrial1_F8
			// 
			this->textBoxTrial1_F8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F8->Location = System::Drawing::Point(797, 35);
			this->textBoxTrial1_F8->Name = L"textBoxTrial1_F8";
			this->textBoxTrial1_F8->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial1_F8->TabIndex = 230;
			this->textBoxTrial1_F8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial1_F7
			// 
			this->textBoxTrial1_F7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F7->Location = System::Drawing::Point(698, 35);
			this->textBoxTrial1_F7->Name = L"textBoxTrial1_F7";
			this->textBoxTrial1_F7->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial1_F7->TabIndex = 229;
			this->textBoxTrial1_F7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial1_F6
			// 
			this->textBoxTrial1_F6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F6->Location = System::Drawing::Point(600, 35);
			this->textBoxTrial1_F6->Name = L"textBoxTrial1_F6";
			this->textBoxTrial1_F6->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial1_F6->TabIndex = 228;
			this->textBoxTrial1_F6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial1_F5
			// 
			this->textBoxTrial1_F5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F5->Location = System::Drawing::Point(507, 35);
			this->textBoxTrial1_F5->Name = L"textBoxTrial1_F5";
			this->textBoxTrial1_F5->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial1_F5->TabIndex = 227;
			this->textBoxTrial1_F5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial1_F4
			// 
			this->textBoxTrial1_F4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F4->Location = System::Drawing::Point(413, 35);
			this->textBoxTrial1_F4->Name = L"textBoxTrial1_F4";
			this->textBoxTrial1_F4->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial1_F4->TabIndex = 226;
			this->textBoxTrial1_F4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial1_F3
			// 
			this->textBoxTrial1_F3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F3->Location = System::Drawing::Point(310, 36);
			this->textBoxTrial1_F3->Name = L"textBoxTrial1_F3";
			this->textBoxTrial1_F3->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial1_F3->TabIndex = 225;
			this->textBoxTrial1_F3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial1_F2
			// 
			this->textBoxTrial1_F2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F2->Location = System::Drawing::Point(216, 36);
			this->textBoxTrial1_F2->Name = L"textBoxTrial1_F2";
			this->textBoxTrial1_F2->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial1_F2->TabIndex = 224;
			this->textBoxTrial1_F2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial1_F1
			// 
			this->textBoxTrial1_F1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F1->Location = System::Drawing::Point(122, 36);
			this->textBoxTrial1_F1->Name = L"textBoxTrial1_F1";
			this->textBoxTrial1_F1->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial1_F1->TabIndex = 223;
			this->textBoxTrial1_F1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(309, 261);
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
			this->label23->Location = System::Drawing::Point(586, 261);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(129, 20);
			this->label23->TabIndex = 221;
			this->label23->Text = L"本项目总分30";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(411, 258);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 220;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &RC网络的频率特性::textBoxTrial1Score_TextChanged);
			// 
			// labelTrial1_Uo2_8
			// 
			this->labelTrial1_Uo2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_8->Location = System::Drawing::Point(797, 166);
			this->labelTrial1_Uo2_8->Name = L"labelTrial1_Uo2_8";
			this->labelTrial1_Uo2_8->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_8->TabIndex = 160;
			this->labelTrial1_Uo2_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_7
			// 
			this->labelTrial1_Uo2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_7->Location = System::Drawing::Point(698, 166);
			this->labelTrial1_Uo2_7->Name = L"labelTrial1_Uo2_7";
			this->labelTrial1_Uo2_7->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_7->TabIndex = 159;
			this->labelTrial1_Uo2_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_6
			// 
			this->labelTrial1_Uo2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_6->Location = System::Drawing::Point(600, 166);
			this->labelTrial1_Uo2_6->Name = L"labelTrial1_Uo2_6";
			this->labelTrial1_Uo2_6->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_6->TabIndex = 158;
			this->labelTrial1_Uo2_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_5
			// 
			this->labelTrial1_Uo2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_5->Location = System::Drawing::Point(507, 166);
			this->labelTrial1_Uo2_5->Name = L"labelTrial1_Uo2_5";
			this->labelTrial1_Uo2_5->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_5->TabIndex = 157;
			this->labelTrial1_Uo2_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_4
			// 
			this->labelTrial1_Uo2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_4->Location = System::Drawing::Point(413, 166);
			this->labelTrial1_Uo2_4->Name = L"labelTrial1_Uo2_4";
			this->labelTrial1_Uo2_4->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_4->TabIndex = 156;
			this->labelTrial1_Uo2_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_3
			// 
			this->labelTrial1_Uo2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_3->Location = System::Drawing::Point(310, 167);
			this->labelTrial1_Uo2_3->Name = L"labelTrial1_Uo2_3";
			this->labelTrial1_Uo2_3->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_3->TabIndex = 155;
			this->labelTrial1_Uo2_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_2
			// 
			this->labelTrial1_Uo2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_2->Location = System::Drawing::Point(216, 167);
			this->labelTrial1_Uo2_2->Name = L"labelTrial1_Uo2_2";
			this->labelTrial1_Uo2_2->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_2->TabIndex = 154;
			this->labelTrial1_Uo2_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2_1
			// 
			this->labelTrial1_Uo2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2_1->Location = System::Drawing::Point(122, 167);
			this->labelTrial1_Uo2_1->Name = L"labelTrial1_Uo2_1";
			this->labelTrial1_Uo2_1->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo2_1->TabIndex = 153;
			this->labelTrial1_Uo2_1->Text = L"textBoxTrial2_F1";
			this->labelTrial1_Uo2_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_8
			// 
			this->labelTrial1_Uo1_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_8->Location = System::Drawing::Point(797, 84);
			this->labelTrial1_Uo1_8->Name = L"labelTrial1_Uo1_8";
			this->labelTrial1_Uo1_8->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_8->TabIndex = 152;
			this->labelTrial1_Uo1_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_7
			// 
			this->labelTrial1_Uo1_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_7->Location = System::Drawing::Point(698, 84);
			this->labelTrial1_Uo1_7->Name = L"labelTrial1_Uo1_7";
			this->labelTrial1_Uo1_7->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_7->TabIndex = 151;
			this->labelTrial1_Uo1_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_6
			// 
			this->labelTrial1_Uo1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_6->Location = System::Drawing::Point(600, 84);
			this->labelTrial1_Uo1_6->Name = L"labelTrial1_Uo1_6";
			this->labelTrial1_Uo1_6->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_6->TabIndex = 150;
			this->labelTrial1_Uo1_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_5
			// 
			this->labelTrial1_Uo1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_5->Location = System::Drawing::Point(507, 84);
			this->labelTrial1_Uo1_5->Name = L"labelTrial1_Uo1_5";
			this->labelTrial1_Uo1_5->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_5->TabIndex = 149;
			this->labelTrial1_Uo1_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_4
			// 
			this->labelTrial1_Uo1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_4->Location = System::Drawing::Point(413, 84);
			this->labelTrial1_Uo1_4->Name = L"labelTrial1_Uo1_4";
			this->labelTrial1_Uo1_4->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_4->TabIndex = 148;
			this->labelTrial1_Uo1_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_3
			// 
			this->labelTrial1_Uo1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_3->Location = System::Drawing::Point(310, 85);
			this->labelTrial1_Uo1_3->Name = L"labelTrial1_Uo1_3";
			this->labelTrial1_Uo1_3->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_3->TabIndex = 147;
			this->labelTrial1_Uo1_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_2
			// 
			this->labelTrial1_Uo1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_2->Location = System::Drawing::Point(216, 85);
			this->labelTrial1_Uo1_2->Name = L"labelTrial1_Uo1_2";
			this->labelTrial1_Uo1_2->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_2->TabIndex = 146;
			this->labelTrial1_Uo1_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1_1
			// 
			this->labelTrial1_Uo1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1_1->Location = System::Drawing::Point(122, 85);
			this->labelTrial1_Uo1_1->Name = L"labelTrial1_Uo1_1";
			this->labelTrial1_Uo1_1->Size = System::Drawing::Size(88, 27);
			this->labelTrial1_Uo1_1->TabIndex = 145;
			this->labelTrial1_Uo1_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(302, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(332, 27);
			this->label5->TabIndex = 85;
			this->label5->Text = L"R=200Ω，C=2μF";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(14, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 27);
			this->label6->TabIndex = 84;
			this->label6->Text = L"Uo（v）";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(310, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(332, 27);
			this->label4->TabIndex = 67;
			this->label4->Text = L"R=1KΩ，C=0.1μF";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(14, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Uo（v）";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(14, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"F（Hz）";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2_1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2_1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_τ1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_T1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F8);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F7);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_F1);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->textBoxTrial2Score);
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(12, 644);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1247, 387);
			this->groupBox1->TabIndex = 161;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RC网络的频率特性 实验内容2";
			// 
			// textBoxTrial2_φ2_8
			// 
			this->textBoxTrial2_φ2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ2_8->Location = System::Drawing::Point(798, 246);
			this->textBoxTrial2_φ2_8->Name = L"textBoxTrial2_φ2_8";
			this->textBoxTrial2_φ2_8->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ2_8->TabIndex = 270;
			this->textBoxTrial2_φ2_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ2_7
			// 
			this->textBoxTrial2_φ2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ2_7->Location = System::Drawing::Point(699, 246);
			this->textBoxTrial2_φ2_7->Name = L"textBoxTrial2_φ2_7";
			this->textBoxTrial2_φ2_7->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ2_7->TabIndex = 269;
			this->textBoxTrial2_φ2_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ2_6
			// 
			this->textBoxTrial2_φ2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ2_6->Location = System::Drawing::Point(601, 246);
			this->textBoxTrial2_φ2_6->Name = L"textBoxTrial2_φ2_6";
			this->textBoxTrial2_φ2_6->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ2_6->TabIndex = 268;
			this->textBoxTrial2_φ2_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ2_5
			// 
			this->textBoxTrial2_φ2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ2_5->Location = System::Drawing::Point(508, 246);
			this->textBoxTrial2_φ2_5->Name = L"textBoxTrial2_φ2_5";
			this->textBoxTrial2_φ2_5->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ2_5->TabIndex = 267;
			this->textBoxTrial2_φ2_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ2_4
			// 
			this->textBoxTrial2_φ2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ2_4->Location = System::Drawing::Point(414, 246);
			this->textBoxTrial2_φ2_4->Name = L"textBoxTrial2_φ2_4";
			this->textBoxTrial2_φ2_4->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ2_4->TabIndex = 266;
			this->textBoxTrial2_φ2_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ2_3
			// 
			this->textBoxTrial2_φ2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ2_3->Location = System::Drawing::Point(311, 247);
			this->textBoxTrial2_φ2_3->Name = L"textBoxTrial2_φ2_3";
			this->textBoxTrial2_φ2_3->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ2_3->TabIndex = 265;
			this->textBoxTrial2_φ2_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ2_2
			// 
			this->textBoxTrial2_φ2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ2_2->Location = System::Drawing::Point(217, 247);
			this->textBoxTrial2_φ2_2->Name = L"textBoxTrial2_φ2_2";
			this->textBoxTrial2_φ2_2->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ2_2->TabIndex = 264;
			this->textBoxTrial2_φ2_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ2_1
			// 
			this->textBoxTrial2_φ2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ2_1->Location = System::Drawing::Point(123, 247);
			this->textBoxTrial2_φ2_1->Name = L"textBoxTrial2_φ2_1";
			this->textBoxTrial2_φ2_1->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ2_1->TabIndex = 263;
			this->textBoxTrial2_φ2_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ2_8
			// 
			this->textBoxTrial2_τ2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ2_8->Location = System::Drawing::Point(797, 210);
			this->textBoxTrial2_τ2_8->Name = L"textBoxTrial2_τ2_8";
			this->textBoxTrial2_τ2_8->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ2_8->TabIndex = 262;
			this->textBoxTrial2_τ2_8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ2_7
			// 
			this->textBoxTrial2_τ2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ2_7->Location = System::Drawing::Point(698, 210);
			this->textBoxTrial2_τ2_7->Name = L"textBoxTrial2_τ2_7";
			this->textBoxTrial2_τ2_7->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ2_7->TabIndex = 261;
			this->textBoxTrial2_τ2_7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ2_6
			// 
			this->textBoxTrial2_τ2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ2_6->Location = System::Drawing::Point(600, 210);
			this->textBoxTrial2_τ2_6->Name = L"textBoxTrial2_τ2_6";
			this->textBoxTrial2_τ2_6->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ2_6->TabIndex = 260;
			this->textBoxTrial2_τ2_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ2_5
			// 
			this->textBoxTrial2_τ2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ2_5->Location = System::Drawing::Point(507, 210);
			this->textBoxTrial2_τ2_5->Name = L"textBoxTrial2_τ2_5";
			this->textBoxTrial2_τ2_5->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ2_5->TabIndex = 259;
			this->textBoxTrial2_τ2_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ2_4
			// 
			this->textBoxTrial2_τ2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ2_4->Location = System::Drawing::Point(413, 210);
			this->textBoxTrial2_τ2_4->Name = L"textBoxTrial2_τ2_4";
			this->textBoxTrial2_τ2_4->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ2_4->TabIndex = 258;
			this->textBoxTrial2_τ2_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ2_3
			// 
			this->textBoxTrial2_τ2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ2_3->Location = System::Drawing::Point(310, 211);
			this->textBoxTrial2_τ2_3->Name = L"textBoxTrial2_τ2_3";
			this->textBoxTrial2_τ2_3->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ2_3->TabIndex = 257;
			this->textBoxTrial2_τ2_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ2_2
			// 
			this->textBoxTrial2_τ2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ2_2->Location = System::Drawing::Point(216, 211);
			this->textBoxTrial2_τ2_2->Name = L"textBoxTrial2_τ2_2";
			this->textBoxTrial2_τ2_2->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ2_2->TabIndex = 256;
			this->textBoxTrial2_τ2_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ2_1
			// 
			this->textBoxTrial2_τ2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ2_1->Location = System::Drawing::Point(122, 211);
			this->textBoxTrial2_τ2_1->Name = L"textBoxTrial2_τ2_1";
			this->textBoxTrial2_τ2_1->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ2_1->TabIndex = 255;
			this->textBoxTrial2_τ2_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ8
			// 
			this->textBoxTrial2_φ8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ8->Location = System::Drawing::Point(797, 137);
			this->textBoxTrial2_φ8->Name = L"textBoxTrial2_φ8";
			this->textBoxTrial2_φ8->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ8->TabIndex = 254;
			this->textBoxTrial2_φ8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ7
			// 
			this->textBoxTrial2_φ7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ7->Location = System::Drawing::Point(698, 137);
			this->textBoxTrial2_φ7->Name = L"textBoxTrial2_φ7";
			this->textBoxTrial2_φ7->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ7->TabIndex = 253;
			this->textBoxTrial2_φ7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ6
			// 
			this->textBoxTrial2_φ6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ6->Location = System::Drawing::Point(600, 137);
			this->textBoxTrial2_φ6->Name = L"textBoxTrial2_φ6";
			this->textBoxTrial2_φ6->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ6->TabIndex = 252;
			this->textBoxTrial2_φ6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ5
			// 
			this->textBoxTrial2_φ5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ5->Location = System::Drawing::Point(507, 137);
			this->textBoxTrial2_φ5->Name = L"textBoxTrial2_φ5";
			this->textBoxTrial2_φ5->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ5->TabIndex = 251;
			this->textBoxTrial2_φ5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ4
			// 
			this->textBoxTrial2_φ4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ4->Location = System::Drawing::Point(413, 137);
			this->textBoxTrial2_φ4->Name = L"textBoxTrial2_φ4";
			this->textBoxTrial2_φ4->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ4->TabIndex = 250;
			this->textBoxTrial2_φ4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ3
			// 
			this->textBoxTrial2_φ3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ3->Location = System::Drawing::Point(310, 138);
			this->textBoxTrial2_φ3->Name = L"textBoxTrial2_φ3";
			this->textBoxTrial2_φ3->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ3->TabIndex = 249;
			this->textBoxTrial2_φ3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ2
			// 
			this->textBoxTrial2_φ2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ2->Location = System::Drawing::Point(216, 138);
			this->textBoxTrial2_φ2->Name = L"textBoxTrial2_φ2";
			this->textBoxTrial2_φ2->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ2->TabIndex = 248;
			this->textBoxTrial2_φ2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ1
			// 
			this->textBoxTrial2_φ1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ1->Location = System::Drawing::Point(122, 138);
			this->textBoxTrial2_φ1->Name = L"textBoxTrial2_φ1";
			this->textBoxTrial2_φ1->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_φ1->TabIndex = 247;
			this->textBoxTrial2_φ1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ8
			// 
			this->textBoxTrial2_τ8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ8->Location = System::Drawing::Point(798, 103);
			this->textBoxTrial2_τ8->Name = L"textBoxTrial2_τ8";
			this->textBoxTrial2_τ8->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ8->TabIndex = 246;
			this->textBoxTrial2_τ8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ7
			// 
			this->textBoxTrial2_τ7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ7->Location = System::Drawing::Point(699, 103);
			this->textBoxTrial2_τ7->Name = L"textBoxTrial2_τ7";
			this->textBoxTrial2_τ7->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ7->TabIndex = 245;
			this->textBoxTrial2_τ7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ6
			// 
			this->textBoxTrial2_τ6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ6->Location = System::Drawing::Point(601, 103);
			this->textBoxTrial2_τ6->Name = L"textBoxTrial2_τ6";
			this->textBoxTrial2_τ6->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ6->TabIndex = 244;
			this->textBoxTrial2_τ6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ5
			// 
			this->textBoxTrial2_τ5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ5->Location = System::Drawing::Point(508, 103);
			this->textBoxTrial2_τ5->Name = L"textBoxTrial2_τ5";
			this->textBoxTrial2_τ5->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ5->TabIndex = 243;
			this->textBoxTrial2_τ5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ4
			// 
			this->textBoxTrial2_τ4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ4->Location = System::Drawing::Point(414, 103);
			this->textBoxTrial2_τ4->Name = L"textBoxTrial2_τ4";
			this->textBoxTrial2_τ4->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ4->TabIndex = 242;
			this->textBoxTrial2_τ4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ3
			// 
			this->textBoxTrial2_τ3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ3->Location = System::Drawing::Point(311, 104);
			this->textBoxTrial2_τ3->Name = L"textBoxTrial2_τ3";
			this->textBoxTrial2_τ3->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ3->TabIndex = 241;
			this->textBoxTrial2_τ3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ2
			// 
			this->textBoxTrial2_τ2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ2->Location = System::Drawing::Point(217, 104);
			this->textBoxTrial2_τ2->Name = L"textBoxTrial2_τ2";
			this->textBoxTrial2_τ2->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ2->TabIndex = 240;
			this->textBoxTrial2_τ2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_τ1
			// 
			this->textBoxTrial2_τ1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_τ1->Location = System::Drawing::Point(123, 104);
			this->textBoxTrial2_τ1->Name = L"textBoxTrial2_τ1";
			this->textBoxTrial2_τ1->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_τ1->TabIndex = 239;
			this->textBoxTrial2_τ1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_T8
			// 
			this->textBoxTrial2_T8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_T8->Location = System::Drawing::Point(797, 65);
			this->textBoxTrial2_T8->Name = L"textBoxTrial2_T8";
			this->textBoxTrial2_T8->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_T8->TabIndex = 238;
			this->textBoxTrial2_T8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_T7
			// 
			this->textBoxTrial2_T7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_T7->Location = System::Drawing::Point(698, 65);
			this->textBoxTrial2_T7->Name = L"textBoxTrial2_T7";
			this->textBoxTrial2_T7->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_T7->TabIndex = 237;
			this->textBoxTrial2_T7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_T6
			// 
			this->textBoxTrial2_T6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_T6->Location = System::Drawing::Point(600, 65);
			this->textBoxTrial2_T6->Name = L"textBoxTrial2_T6";
			this->textBoxTrial2_T6->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_T6->TabIndex = 236;
			this->textBoxTrial2_T6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_T5
			// 
			this->textBoxTrial2_T5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_T5->Location = System::Drawing::Point(507, 65);
			this->textBoxTrial2_T5->Name = L"textBoxTrial2_T5";
			this->textBoxTrial2_T5->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_T5->TabIndex = 235;
			this->textBoxTrial2_T5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_T4
			// 
			this->textBoxTrial2_T4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_T4->Location = System::Drawing::Point(413, 65);
			this->textBoxTrial2_T4->Name = L"textBoxTrial2_T4";
			this->textBoxTrial2_T4->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_T4->TabIndex = 234;
			this->textBoxTrial2_T4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_T3
			// 
			this->textBoxTrial2_T3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_T3->Location = System::Drawing::Point(310, 66);
			this->textBoxTrial2_T3->Name = L"textBoxTrial2_T3";
			this->textBoxTrial2_T3->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_T3->TabIndex = 233;
			this->textBoxTrial2_T3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_T2
			// 
			this->textBoxTrial2_T2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_T2->Location = System::Drawing::Point(216, 66);
			this->textBoxTrial2_T2->Name = L"textBoxTrial2_T2";
			this->textBoxTrial2_T2->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_T2->TabIndex = 232;
			this->textBoxTrial2_T2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_T1
			// 
			this->textBoxTrial2_T1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_T1->Location = System::Drawing::Point(122, 66);
			this->textBoxTrial2_T1->Name = L"textBoxTrial2_T1";
			this->textBoxTrial2_T1->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_T1->TabIndex = 231;
			this->textBoxTrial2_T1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_F8
			// 
			this->textBoxTrial2_F8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_F8->Location = System::Drawing::Point(797, 25);
			this->textBoxTrial2_F8->Name = L"textBoxTrial2_F8";
			this->textBoxTrial2_F8->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_F8->TabIndex = 230;
			this->textBoxTrial2_F8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_F7
			// 
			this->textBoxTrial2_F7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_F7->Location = System::Drawing::Point(698, 25);
			this->textBoxTrial2_F7->Name = L"textBoxTrial2_F7";
			this->textBoxTrial2_F7->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_F7->TabIndex = 229;
			this->textBoxTrial2_F7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_F6
			// 
			this->textBoxTrial2_F6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_F6->Location = System::Drawing::Point(600, 25);
			this->textBoxTrial2_F6->Name = L"textBoxTrial2_F6";
			this->textBoxTrial2_F6->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_F6->TabIndex = 228;
			this->textBoxTrial2_F6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_F5
			// 
			this->textBoxTrial2_F5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_F5->Location = System::Drawing::Point(507, 25);
			this->textBoxTrial2_F5->Name = L"textBoxTrial2_F5";
			this->textBoxTrial2_F5->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_F5->TabIndex = 227;
			this->textBoxTrial2_F5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_F4
			// 
			this->textBoxTrial2_F4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_F4->Location = System::Drawing::Point(413, 25);
			this->textBoxTrial2_F4->Name = L"textBoxTrial2_F4";
			this->textBoxTrial2_F4->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_F4->TabIndex = 226;
			this->textBoxTrial2_F4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_F3
			// 
			this->textBoxTrial2_F3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_F3->Location = System::Drawing::Point(310, 26);
			this->textBoxTrial2_F3->Name = L"textBoxTrial2_F3";
			this->textBoxTrial2_F3->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_F3->TabIndex = 225;
			this->textBoxTrial2_F3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_F2
			// 
			this->textBoxTrial2_F2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_F2->Location = System::Drawing::Point(216, 26);
			this->textBoxTrial2_F2->Name = L"textBoxTrial2_F2";
			this->textBoxTrial2_F2->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_F2->TabIndex = 224;
			this->textBoxTrial2_F2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_F1
			// 
			this->textBoxTrial2_F1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_F1->Location = System::Drawing::Point(122, 26);
			this->textBoxTrial2_F1->Name = L"textBoxTrial2_F1";
			this->textBoxTrial2_F1->Size = System::Drawing::Size(88, 27);
			this->textBoxTrial2_F1->TabIndex = 223;
			this->textBoxTrial2_F1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(311, 348);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(89, 20);
			this->label13->TabIndex = 222;
			this->label13->Text = L"请打分：";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(588, 348);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(129, 20);
			this->label14->TabIndex = 221;
			this->label14->Text = L"本项目总分30";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(413, 345);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 220;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &RC网络的频率特性::textBoxTrial2Score_TextChanged);
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(14, 246);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(99, 27);
			this->label31->TabIndex = 129;
			this->label31->Text = L"φ";
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(14, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 27);
			this->label1->TabIndex = 120;
			this->label1->Text = L"φ";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(14, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 27);
			this->label7->TabIndex = 102;
			this->label7->Text = L"τ（ms）";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(301, 290);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(332, 27);
			this->label8->TabIndex = 85;
			this->label8->Text = L"R=200Ω，C=2μF";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(14, 210);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 27);
			this->label9->TabIndex = 84;
			this->label9->Text = L"τ（ms）";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(302, 172);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(332, 27);
			this->label10->TabIndex = 67;
			this->label10->Text = L"R=1KΩ，C=0.1μF";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(14, 67);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 27);
			this->label11->TabIndex = 3;
			this->label11->Text = L"T（ms）";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(14, 26);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 27);
			this->label12->TabIndex = 2;
			this->label12->Text = L"F（Hz）";
			// 
			// label结论
			// 
			this->label结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label结论->Location = System::Drawing::Point(184, 1049);
			this->label结论->Name = L"label结论";
			this->label结论->Size = System::Drawing::Size(1075, 33);
			this->label结论->TabIndex = 329;
			this->label结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(17, 1055);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(95, 27);
			this->label64->TabIndex = 328;
			this->label64->Text = L"实验结论";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(953, 1121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 326;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RC网络的频率特性::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(846, 1121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 325;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RC网络的频率特性::button1_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->labelTotalGrade);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(19, 1095);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(640, 73);
			this->groupBox5->TabIndex = 324;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"RC网络的频率特性 实验总分";
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
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->label结论);
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->label64);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(45, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1277, 1185);
			this->panel1->TabIndex = 330;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RC网络的频率特性::panel1_Paint);
			// 
			// printDocument1
			// 
			this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &RC网络的频率特性::printDocument1_BeginPrint);
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &RC网络的频率特性::printDocument1_PrintPage);
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
			// RC网络的频率特性
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1464, 769);
			this->Controls->Add(this->panel1);
			this->Name = L"RC网络的频率特性";
			this->Text = L"RC网络的频率特性";
			this->Load += gcnew System::EventHandler(this, &RC网络的频率特性::RC网络的频率特性_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Print();
}
		 String ^SelectedArea = "";
		 void  Priview();
		 void Print();
		public:void LoadRC网络的频率特性Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
private: System::Void RC网络的频率特性_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Priview();
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
private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void printDocument1_BeginPrint(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
}
};
}
