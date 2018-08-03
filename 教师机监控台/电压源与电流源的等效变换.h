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
	/// 电压源与电流源的等效变换 摘要
	/// </summary>
	public ref class 电压源与电流源的等效变换 : public System::Windows::Forms::Form
	{
	public:
		电压源与电流源的等效变换(void)
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
		~电压源与电流源的等效变换()
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
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  labelTrial11Load8;

	private: System::Windows::Forms::Label^  labelTrial11Load7;

	private: System::Windows::Forms::Label^  labelTrial11Load6;

	private: System::Windows::Forms::Label^  labelTrial11Load5;

	private: System::Windows::Forms::Label^  labelTrial11Load4;


	private: System::Windows::Forms::Label^  labelTrial11Load3;

	private: System::Windows::Forms::Label^  labelTrial11Load2;

	private: System::Windows::Forms::Label^  labelTrial11Load1;
	private: System::Windows::Forms::Label^  labelTrial11Load10;


	private: System::Windows::Forms::Label^  labelTrial11Load9;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelTrial11I8;
	private: System::Windows::Forms::Label^  labelTrial11I7;
	private: System::Windows::Forms::Label^  labelTrial11I6;
	private: System::Windows::Forms::Label^  labelTrial11I5;
	private: System::Windows::Forms::Label^  labelTrial11I4;
	private: System::Windows::Forms::Label^  labelTrial11I3;
	private: System::Windows::Forms::Label^  labelTrial11I2;
	private: System::Windows::Forms::Label^  labelTrial11I1;
	private: System::Windows::Forms::Label^  labelTrial11I10;
	private: System::Windows::Forms::Label^  labelTrial11I9;
	private: System::Windows::Forms::Label^  labelTrial11U8;
	private: System::Windows::Forms::Label^  labelTrial11U7;
	private: System::Windows::Forms::Label^  labelTrial11U6;
	private: System::Windows::Forms::Label^  labelTrial11U5;
	private: System::Windows::Forms::Label^  labelTrial11U4;
	private: System::Windows::Forms::Label^  labelTrial11U3;
	private: System::Windows::Forms::Label^  labelTrial11U2;
	private: System::Windows::Forms::Label^  labelTrial11U1;
	private: System::Windows::Forms::Label^  labelTrial11U10;
	private: System::Windows::Forms::Label^  labelTrial11U9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBoxTrial11Score;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  labelTrial12I8;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  labelTrial12I7;
	private: System::Windows::Forms::Label^  labelTrial12I6;
	private: System::Windows::Forms::Label^  labelTrial12I5;
	private: System::Windows::Forms::Label^  labelTrial12I4;
	private: System::Windows::Forms::Label^  labelTrial12I3;
	private: System::Windows::Forms::Label^  labelTrial12I2;
	private: System::Windows::Forms::Label^  labelTrial12I1;
	private: System::Windows::Forms::Label^  labelTrial12I10;
	private: System::Windows::Forms::Label^  labelTrial12I9;
	private: System::Windows::Forms::Label^  labelTrial12U8;
	private: System::Windows::Forms::Label^  labelTrial12U7;
	private: System::Windows::Forms::Label^  labelTrial12U6;
	private: System::Windows::Forms::Label^  labelTrial12U5;
	private: System::Windows::Forms::Label^  labelTrial12U4;
	private: System::Windows::Forms::Label^  labelTrial12U3;
	private: System::Windows::Forms::Label^  labelTrial12U2;
	private: System::Windows::Forms::Label^  labelTrial12U1;
	private: System::Windows::Forms::Label^  labelTrial12U10;
	private: System::Windows::Forms::Label^  labelTrial12U9;
private: System::Windows::Forms::Label^  labelTrial12Load8;

private: System::Windows::Forms::Label^  labelTrial12Load7;

private: System::Windows::Forms::Label^  labelTrial12Load6;

private: System::Windows::Forms::Label^  labelTrial12Load5;

private: System::Windows::Forms::Label^  labelTrial12Load4;

private: System::Windows::Forms::Label^  labelTrial12Load3;

private: System::Windows::Forms::Label^  labelTrial12Load2;

private: System::Windows::Forms::Label^  labelTrial12Load1;
private: System::Windows::Forms::Label^  labelTrial12Load10;


private: System::Windows::Forms::Label^  labelTrial12Load9;

	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::TextBox^  textBoxTrial12Score;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label31;





















private: System::Windows::Forms::Label^  labelTrial2Load8;

private: System::Windows::Forms::Label^  labelTrial2Load7;

private: System::Windows::Forms::Label^  labelTrial2Load6;

private: System::Windows::Forms::Label^  labelTrial2Load5;

private: System::Windows::Forms::Label^  labelTrial2Load4;

private: System::Windows::Forms::Label^  labelTrial2Load3;

private: System::Windows::Forms::Label^  labelTrial2Load2;

private: System::Windows::Forms::Label^  labelTrial2Load1;
private: System::Windows::Forms::Label^  labelTrial2Load10;


private: System::Windows::Forms::Label^  labelTrial2Load9;

	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::TextBox^  textBoxTrial2Score;

private: System::Windows::Forms::Label^  label结论;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::Label^  labelTrial2I8;
private: System::Windows::Forms::Label^  labelTrial2I7;
private: System::Windows::Forms::Label^  labelTrial2I6;
private: System::Windows::Forms::Label^  labelTrial2I5;
private: System::Windows::Forms::Label^  labelTrial2I4;
private: System::Windows::Forms::Label^  labelTrial2I3;
private: System::Windows::Forms::Label^  labelTrial2I2;
private: System::Windows::Forms::Label^  labelTrial2I1;
private: System::Windows::Forms::Label^  labelTrial2I10;
private: System::Windows::Forms::Label^  labelTrial2I9;











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(电压源与电流源的等效变换::typeid));
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTrial11Load8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11Load7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11Load6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11Load5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11Load4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11Load3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11Load2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11Load1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11Load10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11Load9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11I9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial11U9 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial11Score = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I8 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12I9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12U9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12Load8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12Load7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12Load6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12Load5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12Load4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12Load3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12Load2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12Load1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12Load10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial12Load9 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial12Score = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label结论 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTrial2I8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2I9 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2Load8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2Load7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2Load6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2Load5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2Load4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2Load3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2Load2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2Load1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2Load10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2Load9 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->groupBox7->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox3->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(7, 12);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(646, 314);
			this->groupBox7->TabIndex = 198;
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelTrial11Load8);
			this->groupBox2->Controls->Add(this->labelTrial11Load7);
			this->groupBox2->Controls->Add(this->labelTrial11Load6);
			this->groupBox2->Controls->Add(this->labelTrial11Load5);
			this->groupBox2->Controls->Add(this->labelTrial11Load4);
			this->groupBox2->Controls->Add(this->labelTrial11Load3);
			this->groupBox2->Controls->Add(this->labelTrial11Load2);
			this->groupBox2->Controls->Add(this->labelTrial11Load1);
			this->groupBox2->Controls->Add(this->labelTrial11Load10);
			this->groupBox2->Controls->Add(this->labelTrial11Load9);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->labelTrial11I8);
			this->groupBox2->Controls->Add(this->labelTrial11I7);
			this->groupBox2->Controls->Add(this->labelTrial11I6);
			this->groupBox2->Controls->Add(this->labelTrial11I5);
			this->groupBox2->Controls->Add(this->labelTrial11I4);
			this->groupBox2->Controls->Add(this->labelTrial11I3);
			this->groupBox2->Controls->Add(this->labelTrial11I2);
			this->groupBox2->Controls->Add(this->labelTrial11I1);
			this->groupBox2->Controls->Add(this->labelTrial11I10);
			this->groupBox2->Controls->Add(this->labelTrial11I9);
			this->groupBox2->Controls->Add(this->labelTrial11U8);
			this->groupBox2->Controls->Add(this->labelTrial11U7);
			this->groupBox2->Controls->Add(this->labelTrial11U6);
			this->groupBox2->Controls->Add(this->labelTrial11U5);
			this->groupBox2->Controls->Add(this->labelTrial11U4);
			this->groupBox2->Controls->Add(this->labelTrial11U3);
			this->groupBox2->Controls->Add(this->labelTrial11U2);
			this->groupBox2->Controls->Add(this->labelTrial11U1);
			this->groupBox2->Controls->Add(this->labelTrial11U10);
			this->groupBox2->Controls->Add(this->labelTrial11U9);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBoxTrial11Score);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(7, 332);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1223, 248);
			this->groupBox2->TabIndex = 199;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验1-1";
			// 
			// labelTrial11Load8
			// 
			this->labelTrial11Load8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11Load8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11Load8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11Load8->Location = System::Drawing::Point(808, 30);
			this->labelTrial11Load8->Name = L"labelTrial11Load8";
			this->labelTrial11Load8->Size = System::Drawing::Size(93, 43);
			this->labelTrial11Load8->TabIndex = 272;
			this->labelTrial11Load8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11Load7
			// 
			this->labelTrial11Load7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11Load7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11Load7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11Load7->Location = System::Drawing::Point(706, 30);
			this->labelTrial11Load7->Name = L"labelTrial11Load7";
			this->labelTrial11Load7->Size = System::Drawing::Size(93, 43);
			this->labelTrial11Load7->TabIndex = 271;
			this->labelTrial11Load7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11Load6
			// 
			this->labelTrial11Load6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11Load6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11Load6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11Load6->Location = System::Drawing::Point(604, 30);
			this->labelTrial11Load6->Name = L"labelTrial11Load6";
			this->labelTrial11Load6->Size = System::Drawing::Size(93, 43);
			this->labelTrial11Load6->TabIndex = 270;
			this->labelTrial11Load6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11Load5
			// 
			this->labelTrial11Load5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11Load5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11Load5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11Load5->Location = System::Drawing::Point(505, 30);
			this->labelTrial11Load5->Name = L"labelTrial11Load5";
			this->labelTrial11Load5->Size = System::Drawing::Size(93, 43);
			this->labelTrial11Load5->TabIndex = 269;
			this->labelTrial11Load5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11Load4
			// 
			this->labelTrial11Load4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11Load4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11Load4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11Load4->Location = System::Drawing::Point(410, 30);
			this->labelTrial11Load4->Name = L"labelTrial11Load4";
			this->labelTrial11Load4->Size = System::Drawing::Size(89, 43);
			this->labelTrial11Load4->TabIndex = 268;
			this->labelTrial11Load4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11Load3
			// 
			this->labelTrial11Load3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11Load3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11Load3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11Load3->Location = System::Drawing::Point(308, 30);
			this->labelTrial11Load3->Name = L"labelTrial11Load3";
			this->labelTrial11Load3->Size = System::Drawing::Size(92, 43);
			this->labelTrial11Load3->TabIndex = 267;
			this->labelTrial11Load3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11Load2
			// 
			this->labelTrial11Load2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11Load2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11Load2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11Load2->Location = System::Drawing::Point(209, 30);
			this->labelTrial11Load2->Name = L"labelTrial11Load2";
			this->labelTrial11Load2->Size = System::Drawing::Size(93, 43);
			this->labelTrial11Load2->TabIndex = 266;
			this->labelTrial11Load2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11Load1
			// 
			this->labelTrial11Load1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11Load1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11Load1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11Load1->Location = System::Drawing::Point(107, 30);
			this->labelTrial11Load1->Name = L"labelTrial11Load1";
			this->labelTrial11Load1->Size = System::Drawing::Size(93, 43);
			this->labelTrial11Load1->TabIndex = 265;
			this->labelTrial11Load1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11Load10
			// 
			this->labelTrial11Load10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11Load10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11Load10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11Load10->Location = System::Drawing::Point(1014, 30);
			this->labelTrial11Load10->Name = L"labelTrial11Load10";
			this->labelTrial11Load10->Size = System::Drawing::Size(93, 43);
			this->labelTrial11Load10->TabIndex = 264;
			this->labelTrial11Load10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11Load9
			// 
			this->labelTrial11Load9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11Load9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11Load9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11Load9->Location = System::Drawing::Point(912, 30);
			this->labelTrial11Load9->Name = L"labelTrial11Load9";
			this->labelTrial11Load9->Size = System::Drawing::Size(93, 43);
			this->labelTrial11Load9->TabIndex = 263;
			this->labelTrial11Load9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(28, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 32);
			this->label5->TabIndex = 262;
			this->label5->Text = L"负载";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(28, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 43);
			this->label4->TabIndex = 260;
			this->label4->Text = L"I(mA)";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(28, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 32);
			this->label3->TabIndex = 259;
			this->label3->Text = L"U(v)";
			// 
			// labelTrial11I8
			// 
			this->labelTrial11I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I8->Location = System::Drawing::Point(810, 146);
			this->labelTrial11I8->Name = L"labelTrial11I8";
			this->labelTrial11I8->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I8->TabIndex = 238;
			this->labelTrial11I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I7
			// 
			this->labelTrial11I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I7->Location = System::Drawing::Point(708, 146);
			this->labelTrial11I7->Name = L"labelTrial11I7";
			this->labelTrial11I7->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I7->TabIndex = 237;
			this->labelTrial11I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I6
			// 
			this->labelTrial11I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I6->Location = System::Drawing::Point(606, 146);
			this->labelTrial11I6->Name = L"labelTrial11I6";
			this->labelTrial11I6->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I6->TabIndex = 236;
			this->labelTrial11I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I5
			// 
			this->labelTrial11I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I5->Location = System::Drawing::Point(507, 146);
			this->labelTrial11I5->Name = L"labelTrial11I5";
			this->labelTrial11I5->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I5->TabIndex = 235;
			this->labelTrial11I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I4
			// 
			this->labelTrial11I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I4->Location = System::Drawing::Point(412, 146);
			this->labelTrial11I4->Name = L"labelTrial11I4";
			this->labelTrial11I4->Size = System::Drawing::Size(89, 43);
			this->labelTrial11I4->TabIndex = 234;
			this->labelTrial11I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I3
			// 
			this->labelTrial11I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I3->Location = System::Drawing::Point(310, 146);
			this->labelTrial11I3->Name = L"labelTrial11I3";
			this->labelTrial11I3->Size = System::Drawing::Size(92, 43);
			this->labelTrial11I3->TabIndex = 233;
			this->labelTrial11I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I2
			// 
			this->labelTrial11I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I2->Location = System::Drawing::Point(211, 146);
			this->labelTrial11I2->Name = L"labelTrial11I2";
			this->labelTrial11I2->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I2->TabIndex = 232;
			this->labelTrial11I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I1
			// 
			this->labelTrial11I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I1->Location = System::Drawing::Point(109, 146);
			this->labelTrial11I1->Name = L"labelTrial11I1";
			this->labelTrial11I1->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I1->TabIndex = 231;
			this->labelTrial11I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I10
			// 
			this->labelTrial11I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I10->Location = System::Drawing::Point(1016, 146);
			this->labelTrial11I10->Name = L"labelTrial11I10";
			this->labelTrial11I10->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I10->TabIndex = 230;
			this->labelTrial11I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11I9
			// 
			this->labelTrial11I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11I9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11I9->Location = System::Drawing::Point(914, 146);
			this->labelTrial11I9->Name = L"labelTrial11I9";
			this->labelTrial11I9->Size = System::Drawing::Size(93, 43);
			this->labelTrial11I9->TabIndex = 229;
			this->labelTrial11I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U8
			// 
			this->labelTrial11U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U8->Location = System::Drawing::Point(810, 88);
			this->labelTrial11U8->Name = L"labelTrial11U8";
			this->labelTrial11U8->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U8->TabIndex = 228;
			this->labelTrial11U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U7
			// 
			this->labelTrial11U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U7->Location = System::Drawing::Point(708, 88);
			this->labelTrial11U7->Name = L"labelTrial11U7";
			this->labelTrial11U7->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U7->TabIndex = 227;
			this->labelTrial11U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U6
			// 
			this->labelTrial11U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U6->Location = System::Drawing::Point(606, 88);
			this->labelTrial11U6->Name = L"labelTrial11U6";
			this->labelTrial11U6->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U6->TabIndex = 226;
			this->labelTrial11U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U5
			// 
			this->labelTrial11U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U5->Location = System::Drawing::Point(507, 88);
			this->labelTrial11U5->Name = L"labelTrial11U5";
			this->labelTrial11U5->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U5->TabIndex = 225;
			this->labelTrial11U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U4
			// 
			this->labelTrial11U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U4->Location = System::Drawing::Point(412, 88);
			this->labelTrial11U4->Name = L"labelTrial11U4";
			this->labelTrial11U4->Size = System::Drawing::Size(89, 43);
			this->labelTrial11U4->TabIndex = 224;
			this->labelTrial11U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U3
			// 
			this->labelTrial11U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U3->Location = System::Drawing::Point(310, 88);
			this->labelTrial11U3->Name = L"labelTrial11U3";
			this->labelTrial11U3->Size = System::Drawing::Size(92, 43);
			this->labelTrial11U3->TabIndex = 223;
			this->labelTrial11U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U2
			// 
			this->labelTrial11U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U2->Location = System::Drawing::Point(211, 88);
			this->labelTrial11U2->Name = L"labelTrial11U2";
			this->labelTrial11U2->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U2->TabIndex = 222;
			this->labelTrial11U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U1
			// 
			this->labelTrial11U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U1->Location = System::Drawing::Point(109, 88);
			this->labelTrial11U1->Name = L"labelTrial11U1";
			this->labelTrial11U1->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U1->TabIndex = 221;
			this->labelTrial11U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U10
			// 
			this->labelTrial11U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U10->Location = System::Drawing::Point(1016, 88);
			this->labelTrial11U10->Name = L"labelTrial11U10";
			this->labelTrial11U10->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U10->TabIndex = 220;
			this->labelTrial11U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial11U9
			// 
			this->labelTrial11U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial11U9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial11U9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial11U9->Location = System::Drawing::Point(914, 88);
			this->labelTrial11U9->Name = L"labelTrial11U9";
			this->labelTrial11U9->Size = System::Drawing::Size(93, 43);
			this->labelTrial11U9->TabIndex = 219;
			this->labelTrial11U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(207, 206);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 20);
			this->label9->TabIndex = 175;
			this->label9->Text = L"请打分：";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(484, 206);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 20);
			this->label10->TabIndex = 174;
			this->label10->Text = L"本实验总分40";
			// 
			// textBoxTrial11Score
			// 
			this->textBoxTrial11Score->Location = System::Drawing::Point(309, 203);
			this->textBoxTrial11Score->Name = L"textBoxTrial11Score";
			this->textBoxTrial11Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial11Score->TabIndex = 173;
			this->textBoxTrial11Score->TextChanged += gcnew System::EventHandler(this, &电压源与电流源的等效变换::textBoxTrial11Score_TextChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1277, 846);
			this->panel1->TabIndex = 200;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->labelTrial12I8);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->labelTrial12I7);
			this->groupBox1->Controls->Add(this->labelTrial12I6);
			this->groupBox1->Controls->Add(this->labelTrial12I5);
			this->groupBox1->Controls->Add(this->labelTrial12I4);
			this->groupBox1->Controls->Add(this->labelTrial12I3);
			this->groupBox1->Controls->Add(this->labelTrial12I2);
			this->groupBox1->Controls->Add(this->labelTrial12I1);
			this->groupBox1->Controls->Add(this->labelTrial12I10);
			this->groupBox1->Controls->Add(this->labelTrial12I9);
			this->groupBox1->Controls->Add(this->labelTrial12U8);
			this->groupBox1->Controls->Add(this->labelTrial12U7);
			this->groupBox1->Controls->Add(this->labelTrial12U6);
			this->groupBox1->Controls->Add(this->labelTrial12U5);
			this->groupBox1->Controls->Add(this->labelTrial12U4);
			this->groupBox1->Controls->Add(this->labelTrial12U3);
			this->groupBox1->Controls->Add(this->labelTrial12U2);
			this->groupBox1->Controls->Add(this->labelTrial12U1);
			this->groupBox1->Controls->Add(this->labelTrial12U10);
			this->groupBox1->Controls->Add(this->labelTrial12U9);
			this->groupBox1->Controls->Add(this->labelTrial12Load8);
			this->groupBox1->Controls->Add(this->labelTrial12Load7);
			this->groupBox1->Controls->Add(this->labelTrial12Load6);
			this->groupBox1->Controls->Add(this->labelTrial12Load5);
			this->groupBox1->Controls->Add(this->labelTrial12Load4);
			this->groupBox1->Controls->Add(this->labelTrial12Load3);
			this->groupBox1->Controls->Add(this->labelTrial12Load2);
			this->groupBox1->Controls->Add(this->labelTrial12Load1);
			this->groupBox1->Controls->Add(this->labelTrial12Load10);
			this->groupBox1->Controls->Add(this->labelTrial12Load9);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label60);
			this->groupBox1->Controls->Add(this->label61);
			this->groupBox1->Controls->Add(this->textBoxTrial12Score);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(7, 586);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1223, 248);
			this->groupBox1->TabIndex = 273;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验1-2";
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(28, 140);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(60, 43);
			this->label27->TabIndex = 274;
			this->label27->Text = L"I(mA)";
			// 
			// labelTrial12I8
			// 
			this->labelTrial12I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I8->Location = System::Drawing::Point(808, 140);
			this->labelTrial12I8->Name = L"labelTrial12I8";
			this->labelTrial12I8->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I8->TabIndex = 292;
			this->labelTrial12I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(28, 86);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(60, 32);
			this->label29->TabIndex = 273;
			this->label29->Text = L"U(v)";
			// 
			// labelTrial12I7
			// 
			this->labelTrial12I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I7->Location = System::Drawing::Point(706, 140);
			this->labelTrial12I7->Name = L"labelTrial12I7";
			this->labelTrial12I7->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I7->TabIndex = 291;
			this->labelTrial12I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I6
			// 
			this->labelTrial12I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I6->Location = System::Drawing::Point(604, 140);
			this->labelTrial12I6->Name = L"labelTrial12I6";
			this->labelTrial12I6->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I6->TabIndex = 290;
			this->labelTrial12I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I5
			// 
			this->labelTrial12I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I5->Location = System::Drawing::Point(505, 140);
			this->labelTrial12I5->Name = L"labelTrial12I5";
			this->labelTrial12I5->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I5->TabIndex = 289;
			this->labelTrial12I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I4
			// 
			this->labelTrial12I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I4->Location = System::Drawing::Point(410, 140);
			this->labelTrial12I4->Name = L"labelTrial12I4";
			this->labelTrial12I4->Size = System::Drawing::Size(89, 43);
			this->labelTrial12I4->TabIndex = 288;
			this->labelTrial12I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I3
			// 
			this->labelTrial12I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I3->Location = System::Drawing::Point(308, 140);
			this->labelTrial12I3->Name = L"labelTrial12I3";
			this->labelTrial12I3->Size = System::Drawing::Size(92, 43);
			this->labelTrial12I3->TabIndex = 287;
			this->labelTrial12I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I2
			// 
			this->labelTrial12I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I2->Location = System::Drawing::Point(209, 140);
			this->labelTrial12I2->Name = L"labelTrial12I2";
			this->labelTrial12I2->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I2->TabIndex = 286;
			this->labelTrial12I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I1
			// 
			this->labelTrial12I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I1->Location = System::Drawing::Point(107, 140);
			this->labelTrial12I1->Name = L"labelTrial12I1";
			this->labelTrial12I1->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I1->TabIndex = 285;
			this->labelTrial12I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I10
			// 
			this->labelTrial12I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I10->Location = System::Drawing::Point(1014, 140);
			this->labelTrial12I10->Name = L"labelTrial12I10";
			this->labelTrial12I10->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I10->TabIndex = 284;
			this->labelTrial12I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12I9
			// 
			this->labelTrial12I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12I9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12I9->Location = System::Drawing::Point(912, 140);
			this->labelTrial12I9->Name = L"labelTrial12I9";
			this->labelTrial12I9->Size = System::Drawing::Size(93, 43);
			this->labelTrial12I9->TabIndex = 283;
			this->labelTrial12I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U8
			// 
			this->labelTrial12U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U8->Location = System::Drawing::Point(808, 86);
			this->labelTrial12U8->Name = L"labelTrial12U8";
			this->labelTrial12U8->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U8->TabIndex = 282;
			this->labelTrial12U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U7
			// 
			this->labelTrial12U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U7->Location = System::Drawing::Point(706, 86);
			this->labelTrial12U7->Name = L"labelTrial12U7";
			this->labelTrial12U7->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U7->TabIndex = 281;
			this->labelTrial12U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U6
			// 
			this->labelTrial12U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U6->Location = System::Drawing::Point(604, 86);
			this->labelTrial12U6->Name = L"labelTrial12U6";
			this->labelTrial12U6->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U6->TabIndex = 280;
			this->labelTrial12U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U5
			// 
			this->labelTrial12U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U5->Location = System::Drawing::Point(505, 86);
			this->labelTrial12U5->Name = L"labelTrial12U5";
			this->labelTrial12U5->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U5->TabIndex = 279;
			this->labelTrial12U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U4
			// 
			this->labelTrial12U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U4->Location = System::Drawing::Point(410, 86);
			this->labelTrial12U4->Name = L"labelTrial12U4";
			this->labelTrial12U4->Size = System::Drawing::Size(89, 43);
			this->labelTrial12U4->TabIndex = 278;
			this->labelTrial12U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U3
			// 
			this->labelTrial12U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U3->Location = System::Drawing::Point(308, 86);
			this->labelTrial12U3->Name = L"labelTrial12U3";
			this->labelTrial12U3->Size = System::Drawing::Size(92, 43);
			this->labelTrial12U3->TabIndex = 277;
			this->labelTrial12U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U2
			// 
			this->labelTrial12U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U2->Location = System::Drawing::Point(209, 86);
			this->labelTrial12U2->Name = L"labelTrial12U2";
			this->labelTrial12U2->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U2->TabIndex = 276;
			this->labelTrial12U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U1
			// 
			this->labelTrial12U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U1->Location = System::Drawing::Point(107, 86);
			this->labelTrial12U1->Name = L"labelTrial12U1";
			this->labelTrial12U1->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U1->TabIndex = 275;
			this->labelTrial12U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U10
			// 
			this->labelTrial12U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U10->Location = System::Drawing::Point(1014, 86);
			this->labelTrial12U10->Name = L"labelTrial12U10";
			this->labelTrial12U10->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U10->TabIndex = 274;
			this->labelTrial12U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12U9
			// 
			this->labelTrial12U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12U9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12U9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12U9->Location = System::Drawing::Point(912, 86);
			this->labelTrial12U9->Name = L"labelTrial12U9";
			this->labelTrial12U9->Size = System::Drawing::Size(93, 43);
			this->labelTrial12U9->TabIndex = 273;
			this->labelTrial12U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12Load8
			// 
			this->labelTrial12Load8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12Load8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12Load8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12Load8->Location = System::Drawing::Point(808, 30);
			this->labelTrial12Load8->Name = L"labelTrial12Load8";
			this->labelTrial12Load8->Size = System::Drawing::Size(93, 43);
			this->labelTrial12Load8->TabIndex = 272;
			this->labelTrial12Load8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12Load7
			// 
			this->labelTrial12Load7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12Load7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12Load7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12Load7->Location = System::Drawing::Point(706, 30);
			this->labelTrial12Load7->Name = L"labelTrial12Load7";
			this->labelTrial12Load7->Size = System::Drawing::Size(93, 43);
			this->labelTrial12Load7->TabIndex = 271;
			this->labelTrial12Load7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12Load6
			// 
			this->labelTrial12Load6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12Load6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12Load6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12Load6->Location = System::Drawing::Point(604, 30);
			this->labelTrial12Load6->Name = L"labelTrial12Load6";
			this->labelTrial12Load6->Size = System::Drawing::Size(93, 43);
			this->labelTrial12Load6->TabIndex = 270;
			this->labelTrial12Load6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12Load5
			// 
			this->labelTrial12Load5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12Load5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12Load5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12Load5->Location = System::Drawing::Point(505, 30);
			this->labelTrial12Load5->Name = L"labelTrial12Load5";
			this->labelTrial12Load5->Size = System::Drawing::Size(93, 43);
			this->labelTrial12Load5->TabIndex = 269;
			this->labelTrial12Load5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12Load4
			// 
			this->labelTrial12Load4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12Load4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12Load4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12Load4->Location = System::Drawing::Point(410, 30);
			this->labelTrial12Load4->Name = L"labelTrial12Load4";
			this->labelTrial12Load4->Size = System::Drawing::Size(89, 43);
			this->labelTrial12Load4->TabIndex = 268;
			this->labelTrial12Load4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12Load3
			// 
			this->labelTrial12Load3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12Load3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12Load3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12Load3->Location = System::Drawing::Point(308, 30);
			this->labelTrial12Load3->Name = L"labelTrial12Load3";
			this->labelTrial12Load3->Size = System::Drawing::Size(92, 43);
			this->labelTrial12Load3->TabIndex = 267;
			this->labelTrial12Load3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12Load2
			// 
			this->labelTrial12Load2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12Load2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12Load2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12Load2->Location = System::Drawing::Point(209, 30);
			this->labelTrial12Load2->Name = L"labelTrial12Load2";
			this->labelTrial12Load2->Size = System::Drawing::Size(93, 43);
			this->labelTrial12Load2->TabIndex = 266;
			this->labelTrial12Load2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12Load1
			// 
			this->labelTrial12Load1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12Load1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12Load1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12Load1->Location = System::Drawing::Point(107, 30);
			this->labelTrial12Load1->Name = L"labelTrial12Load1";
			this->labelTrial12Load1->Size = System::Drawing::Size(93, 43);
			this->labelTrial12Load1->TabIndex = 265;
			this->labelTrial12Load1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12Load10
			// 
			this->labelTrial12Load10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12Load10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12Load10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12Load10->Location = System::Drawing::Point(1014, 30);
			this->labelTrial12Load10->Name = L"labelTrial12Load10";
			this->labelTrial12Load10->Size = System::Drawing::Size(93, 43);
			this->labelTrial12Load10->TabIndex = 264;
			this->labelTrial12Load10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial12Load9
			// 
			this->labelTrial12Load9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial12Load9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial12Load9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial12Load9->Location = System::Drawing::Point(912, 30);
			this->labelTrial12Load9->Name = L"labelTrial12Load9";
			this->labelTrial12Load9->Size = System::Drawing::Size(93, 43);
			this->labelTrial12Load9->TabIndex = 263;
			this->labelTrial12Load9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(28, 41);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(60, 32);
			this->label26->TabIndex = 262;
			this->label26->Text = L"负载";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label60->Location = System::Drawing::Point(207, 206);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(89, 20);
			this->label60->TabIndex = 175;
			this->label60->Text = L"请打分：";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label61->Location = System::Drawing::Point(484, 206);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(129, 20);
			this->label61->TabIndex = 174;
			this->label61->Text = L"本实验总分40";
			// 
			// textBoxTrial12Score
			// 
			this->textBoxTrial12Score->Location = System::Drawing::Point(309, 203);
			this->textBoxTrial12Score->Name = L"textBoxTrial12Score";
			this->textBoxTrial12Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial12Score->TabIndex = 173;
			this->textBoxTrial12Score->TextChanged += gcnew System::EventHandler(this, &电压源与电流源的等效变换::textBoxTrial12Score_TextChanged);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label结论);
			this->panel2->Controls->Add(this->label77);
			this->panel2->Controls->Add(this->groupBox5);
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Location = System::Drawing::Point(12, 880);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1277, 525);
			this->panel2->TabIndex = 201;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(950, 451);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 302;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(843, 451);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 301;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(736, 451);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 300;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &电压源与电流源的等效变换::button1_Click);
			// 
			// label结论
			// 
			this->label结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label结论->Location = System::Drawing::Point(184, 227);
			this->label结论->Name = L"label结论";
			this->label结论->Size = System::Drawing::Size(1000, 31);
			this->label结论->TabIndex = 299;
			this->label结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label77
			// 
			this->label77->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label77->ForeColor = System::Drawing::Color::Black;
			this->label77->Location = System::Drawing::Point(17, 233);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(95, 25);
			this->label77->TabIndex = 298;
			this->label77->Text = L"实验结论";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->labelTotalGrade);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(16, 425);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(640, 73);
			this->groupBox5->TabIndex = 297;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"电压源与电流源的等效变换实验总分";
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
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->labelTrial2I8);
			this->groupBox3->Controls->Add(this->labelTrial2I7);
			this->groupBox3->Controls->Add(this->labelTrial2I6);
			this->groupBox3->Controls->Add(this->labelTrial2I5);
			this->groupBox3->Controls->Add(this->labelTrial2I4);
			this->groupBox3->Controls->Add(this->labelTrial2I3);
			this->groupBox3->Controls->Add(this->labelTrial2I2);
			this->groupBox3->Controls->Add(this->labelTrial2I1);
			this->groupBox3->Controls->Add(this->labelTrial2I10);
			this->groupBox3->Controls->Add(this->labelTrial2I9);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->labelTrial2Load8);
			this->groupBox3->Controls->Add(this->labelTrial2Load7);
			this->groupBox3->Controls->Add(this->labelTrial2Load6);
			this->groupBox3->Controls->Add(this->labelTrial2Load5);
			this->groupBox3->Controls->Add(this->labelTrial2Load4);
			this->groupBox3->Controls->Add(this->labelTrial2Load3);
			this->groupBox3->Controls->Add(this->labelTrial2Load2);
			this->groupBox3->Controls->Add(this->labelTrial2Load1);
			this->groupBox3->Controls->Add(this->labelTrial2Load10);
			this->groupBox3->Controls->Add(this->labelTrial2Load9);
			this->groupBox3->Controls->Add(this->label74);
			this->groupBox3->Controls->Add(this->label75);
			this->groupBox3->Controls->Add(this->label76);
			this->groupBox3->Controls->Add(this->textBoxTrial2Score);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(7, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1223, 201);
			this->groupBox3->TabIndex = 293;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"实验2";
			// 
			// labelTrial2I8
			// 
			this->labelTrial2I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I8->Location = System::Drawing::Point(808, 87);
			this->labelTrial2I8->Name = L"labelTrial2I8";
			this->labelTrial2I8->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I8->TabIndex = 292;
			this->labelTrial2I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I7
			// 
			this->labelTrial2I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I7->Location = System::Drawing::Point(706, 87);
			this->labelTrial2I7->Name = L"labelTrial2I7";
			this->labelTrial2I7->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I7->TabIndex = 291;
			this->labelTrial2I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I6
			// 
			this->labelTrial2I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I6->Location = System::Drawing::Point(604, 87);
			this->labelTrial2I6->Name = L"labelTrial2I6";
			this->labelTrial2I6->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I6->TabIndex = 290;
			this->labelTrial2I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I5
			// 
			this->labelTrial2I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I5->Location = System::Drawing::Point(505, 87);
			this->labelTrial2I5->Name = L"labelTrial2I5";
			this->labelTrial2I5->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I5->TabIndex = 289;
			this->labelTrial2I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I4
			// 
			this->labelTrial2I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I4->Location = System::Drawing::Point(410, 87);
			this->labelTrial2I4->Name = L"labelTrial2I4";
			this->labelTrial2I4->Size = System::Drawing::Size(89, 43);
			this->labelTrial2I4->TabIndex = 288;
			this->labelTrial2I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I3
			// 
			this->labelTrial2I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I3->Location = System::Drawing::Point(308, 87);
			this->labelTrial2I3->Name = L"labelTrial2I3";
			this->labelTrial2I3->Size = System::Drawing::Size(92, 43);
			this->labelTrial2I3->TabIndex = 287;
			this->labelTrial2I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I2
			// 
			this->labelTrial2I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I2->Location = System::Drawing::Point(209, 87);
			this->labelTrial2I2->Name = L"labelTrial2I2";
			this->labelTrial2I2->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I2->TabIndex = 286;
			this->labelTrial2I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I1
			// 
			this->labelTrial2I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I1->Location = System::Drawing::Point(107, 87);
			this->labelTrial2I1->Name = L"labelTrial2I1";
			this->labelTrial2I1->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I1->TabIndex = 285;
			this->labelTrial2I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I10
			// 
			this->labelTrial2I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I10->Location = System::Drawing::Point(1014, 87);
			this->labelTrial2I10->Name = L"labelTrial2I10";
			this->labelTrial2I10->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I10->TabIndex = 284;
			this->labelTrial2I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2I9
			// 
			this->labelTrial2I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2I9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2I9->Location = System::Drawing::Point(912, 87);
			this->labelTrial2I9->Name = L"labelTrial2I9";
			this->labelTrial2I9->Size = System::Drawing::Size(93, 43);
			this->labelTrial2I9->TabIndex = 283;
			this->labelTrial2I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(28, 98);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(60, 32);
			this->label31->TabIndex = 274;
			this->label31->Text = L"I(mA)";
			// 
			// labelTrial2Load8
			// 
			this->labelTrial2Load8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2Load8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2Load8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2Load8->Location = System::Drawing::Point(808, 30);
			this->labelTrial2Load8->Name = L"labelTrial2Load8";
			this->labelTrial2Load8->Size = System::Drawing::Size(93, 43);
			this->labelTrial2Load8->TabIndex = 272;
			this->labelTrial2Load8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2Load7
			// 
			this->labelTrial2Load7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2Load7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2Load7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2Load7->Location = System::Drawing::Point(706, 30);
			this->labelTrial2Load7->Name = L"labelTrial2Load7";
			this->labelTrial2Load7->Size = System::Drawing::Size(93, 43);
			this->labelTrial2Load7->TabIndex = 271;
			this->labelTrial2Load7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2Load6
			// 
			this->labelTrial2Load6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2Load6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2Load6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2Load6->Location = System::Drawing::Point(604, 30);
			this->labelTrial2Load6->Name = L"labelTrial2Load6";
			this->labelTrial2Load6->Size = System::Drawing::Size(93, 43);
			this->labelTrial2Load6->TabIndex = 270;
			this->labelTrial2Load6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2Load5
			// 
			this->labelTrial2Load5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2Load5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2Load5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2Load5->Location = System::Drawing::Point(505, 30);
			this->labelTrial2Load5->Name = L"labelTrial2Load5";
			this->labelTrial2Load5->Size = System::Drawing::Size(93, 43);
			this->labelTrial2Load5->TabIndex = 269;
			this->labelTrial2Load5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2Load4
			// 
			this->labelTrial2Load4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2Load4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2Load4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2Load4->Location = System::Drawing::Point(410, 30);
			this->labelTrial2Load4->Name = L"labelTrial2Load4";
			this->labelTrial2Load4->Size = System::Drawing::Size(89, 43);
			this->labelTrial2Load4->TabIndex = 268;
			this->labelTrial2Load4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2Load3
			// 
			this->labelTrial2Load3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2Load3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2Load3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2Load3->Location = System::Drawing::Point(308, 30);
			this->labelTrial2Load3->Name = L"labelTrial2Load3";
			this->labelTrial2Load3->Size = System::Drawing::Size(92, 43);
			this->labelTrial2Load3->TabIndex = 267;
			this->labelTrial2Load3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2Load2
			// 
			this->labelTrial2Load2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2Load2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2Load2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2Load2->Location = System::Drawing::Point(209, 30);
			this->labelTrial2Load2->Name = L"labelTrial2Load2";
			this->labelTrial2Load2->Size = System::Drawing::Size(93, 43);
			this->labelTrial2Load2->TabIndex = 266;
			this->labelTrial2Load2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2Load1
			// 
			this->labelTrial2Load1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2Load1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2Load1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2Load1->Location = System::Drawing::Point(107, 30);
			this->labelTrial2Load1->Name = L"labelTrial2Load1";
			this->labelTrial2Load1->Size = System::Drawing::Size(93, 43);
			this->labelTrial2Load1->TabIndex = 265;
			this->labelTrial2Load1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2Load10
			// 
			this->labelTrial2Load10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2Load10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2Load10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2Load10->Location = System::Drawing::Point(1014, 30);
			this->labelTrial2Load10->Name = L"labelTrial2Load10";
			this->labelTrial2Load10->Size = System::Drawing::Size(93, 43);
			this->labelTrial2Load10->TabIndex = 264;
			this->labelTrial2Load10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2Load9
			// 
			this->labelTrial2Load9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2Load9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2Load9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2Load9->Location = System::Drawing::Point(912, 30);
			this->labelTrial2Load9->Name = L"labelTrial2Load9";
			this->labelTrial2Load9->Size = System::Drawing::Size(93, 43);
			this->labelTrial2Load9->TabIndex = 263;
			this->labelTrial2Load9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label74
			// 
			this->label74->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label74->ForeColor = System::Drawing::Color::Black;
			this->label74->Location = System::Drawing::Point(28, 41);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(60, 32);
			this->label74->TabIndex = 262;
			this->label74->Text = L"负载";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label75->Location = System::Drawing::Point(215, 150);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(89, 20);
			this->label75->TabIndex = 175;
			this->label75->Text = L"请打分：";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label76->Location = System::Drawing::Point(492, 150);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(129, 20);
			this->label76->TabIndex = 174;
			this->label76->Text = L"本实验总分40";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(317, 147);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 173;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &电压源与电流源的等效变换::textBoxTrial2Score_TextChanged);
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
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &电压源与电流源的等效变换::printDocument1_PrintPage);
			// 
			// 电压源与电流源的等效变换
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1465, 992);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"电压源与电流源的等效变换";
			this->Text = L"电压源与电流源的等效变换";
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		string *fileName;
		String^ SelectedArea = "";
public:
	void SaveCorrectGrades();
	void Load电压源与电流源的等效变换Data(string &filename);
	void Print();
	void Priview();
	void CalScores();
	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
		Bitmap ^ _NewBitmap;
		if (SelectedArea == "panel1") {
			_NewBitmap = gcnew  Bitmap(panel1->Width, panel1->Height);
			panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));
		}
		else {
			_NewBitmap = gcnew  Bitmap(groupBox1->Width, groupBox1->Height);
			groupBox1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, groupBox1->Width, groupBox1->Height));
		}
		int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
		int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
		e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);

	}
private: System::Void textBoxTrial11Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial12Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Priview();
	SelectedArea = "panel2";
	Priview();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Print();
	SelectedArea = "panel2";
	Print();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
};
}
