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
	/// 仪表量程的扩展 摘要
	/// </summary>
	public ref class 仪表量程的扩展 : public System::Windows::Forms::Form
	{
	public:
		仪表量程的扩展(void)
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
		~仪表量程的扩展()
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






	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelTrial1_U2_line1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  labelTrial1_I2_line1;
	private: System::Windows::Forms::Label^  labelTrial1_I1_line1;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line1;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBoxTrial1Score;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::TextBox^  textBoxTrial2Score;





	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBoxTrial3Score;







	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  labelTotalGrade;
	private: System::Windows::Forms::Button^  button1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Label^  textBoxTrial1_6;
private: System::Windows::Forms::Label^  textBoxTrial1_5;
private: System::Windows::Forms::Label^  textBoxTrial1_2;
private: System::Windows::Forms::Label^  textBoxTrial1_4;
private: System::Windows::Forms::Label^  textBoxTrial1_3;
private: System::Windows::Forms::Label^  textBoxTrial1_1;
private: System::Windows::Forms::Label^  textBoxTrial2_6;
private: System::Windows::Forms::Label^  textBoxTrial2_5;
private: System::Windows::Forms::Label^  textBoxTrial2_2;
private: System::Windows::Forms::Label^  textBoxTrial2_4;
private: System::Windows::Forms::Label^  textBoxTrial2_3;
private: System::Windows::Forms::Label^  textBoxTrial2_1;
private: System::Windows::Forms::Label^  textBoxTrial3_6;
private: System::Windows::Forms::Label^  textBoxTrial3_5;
private: System::Windows::Forms::Label^  textBoxTrial3_2;
private: System::Windows::Forms::Label^  textBoxTrial3_4;
private: System::Windows::Forms::Label^  textBoxTrial3_3;
private: System::Windows::Forms::Label^  textBoxTrial3_1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(仪表量程的扩展::typeid));
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
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U2_line1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I2_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U1_line1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3Score = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBoxTrial1_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_1 = (gcnew System::Windows::Forms::Label());
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(9, 14);
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
			this->groupBox8->Controls->Add(this->textBoxTrial1_6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_1);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->textBoxTrial1Score);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->labelTrial1_U2_line1);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->labelTrial1_I2_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_I1_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line1);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(9, 334);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(974, 170);
			this->groupBox8->TabIndex = 203;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"回转器 实验内容1";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(320, 136);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(89, 20);
			this->label22->TabIndex = 219;
			this->label22->Text = L"请打分：";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->Location = System::Drawing::Point(597, 136);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(129, 20);
			this->label23->TabIndex = 218;
			this->label23->Text = L"本项目总分30";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(422, 133);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 217;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &仪表量程的扩展::textBoxTrial1Score_TextChanged);
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(805, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 25);
			this->label2->TabIndex = 78;
			this->label2->Text = L"0";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(677, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 77;
			this->label3->Text = L"1";
			// 
			// labelTrial1_U2_line1
			// 
			this->labelTrial1_U2_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U2_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U2_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U2_line1->Location = System::Drawing::Point(316, 39);
			this->labelTrial1_U2_line1->Name = L"labelTrial1_U2_line1";
			this->labelTrial1_U2_line1->Size = System::Drawing::Size(92, 25);
			this->labelTrial1_U2_line1->TabIndex = 76;
			this->labelTrial1_U2_line1->Text = L"4";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(21, 91);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(169, 25);
			this->label11->TabIndex = 64;
			this->label11->Text = L"表头读数(mA)";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(21, 39);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(169, 32);
			this->label10->TabIndex = 63;
			this->label10->Text = L"恒流源输出(mA)";
			// 
			// labelTrial1_I2_line1
			// 
			this->labelTrial1_I2_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I2_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2_line1->Location = System::Drawing::Point(557, 39);
			this->labelTrial1_I2_line1->Name = L"labelTrial1_I2_line1";
			this->labelTrial1_I2_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_I2_line1->TabIndex = 60;
			this->labelTrial1_I2_line1->Text = L"2";
			// 
			// labelTrial1_I1_line1
			// 
			this->labelTrial1_I1_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_I1_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1_line1->Location = System::Drawing::Point(429, 39);
			this->labelTrial1_I1_line1->Name = L"labelTrial1_I1_line1";
			this->labelTrial1_I1_line1->Size = System::Drawing::Size(106, 25);
			this->labelTrial1_I1_line1->TabIndex = 58;
			this->labelTrial1_I1_line1->Text = L"3";
			// 
			// labelTrial1_U1_line1
			// 
			this->labelTrial1_U1_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line1->Location = System::Drawing::Point(207, 39);
			this->labelTrial1_U1_line1->Name = L"labelTrial1_U1_line1";
			this->labelTrial1_U1_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial1_U1_line1->TabIndex = 56;
			this->labelTrial1_U1_line1->Text = L"5";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_6);
			this->groupBox1->Controls->Add(this->textBoxTrial2_5);
			this->groupBox1->Controls->Add(this->textBoxTrial2_2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBoxTrial2Score);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(9, 520);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(974, 203);
			this->groupBox1->TabIndex = 204;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"回转器 实验内容2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(320, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 20);
			this->label5->TabIndex = 222;
			this->label5->Text = L"请打分：";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(597, 152);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 20);
			this->label6->TabIndex = 221;
			this->label6->Text = L"本项目总分30";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(422, 149);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 220;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &仪表量程的扩展::textBoxTrial2Score_TextChanged);
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(804, 41);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(97, 25);
			this->label18->TabIndex = 78;
			this->label18->Text = L"0";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(676, 41);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(106, 25);
			this->label19->TabIndex = 77;
			this->label19->Text = L"10";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(315, 41);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(92, 25);
			this->label20->TabIndex = 76;
			this->label20->Text = L"40";
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(20, 93);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(169, 25);
			this->label21->TabIndex = 64;
			this->label21->Text = L"毫安表读数(mA)";
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(20, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 32);
			this->label1->TabIndex = 63;
			this->label1->Text = L"恒流源输出(mA)";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(556, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 25);
			this->label4->TabIndex = 60;
			this->label4->Text = L"20";
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(428, 41);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(106, 25);
			this->label24->TabIndex = 58;
			this->label24->Text = L"30";
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(206, 41);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(97, 25);
			this->label25->TabIndex = 56;
			this->label25->Text = L"50";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxTrial3_6);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->textBoxTrial3_5);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->textBoxTrial3_2);
			this->groupBox2->Controls->Add(this->textBoxTrial3Score);
			this->groupBox2->Controls->Add(this->textBoxTrial3_4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_1);
			this->groupBox2->Controls->Add(this->label33);
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(9, 743);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(974, 178);
			this->groupBox2->TabIndex = 205;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"回转器 实验内容3";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(320, 139);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(89, 20);
			this->label15->TabIndex = 225;
			this->label15->Text = L"请打分：";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(597, 139);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(129, 20);
			this->label16->TabIndex = 224;
			this->label16->Text = L"本项目总分30";
			// 
			// textBoxTrial3Score
			// 
			this->textBoxTrial3Score->Location = System::Drawing::Point(422, 136);
			this->textBoxTrial3Score->Name = L"textBoxTrial3Score";
			this->textBoxTrial3Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial3Score->TabIndex = 223;
			this->textBoxTrial3Score->TextChanged += gcnew System::EventHandler(this, &仪表量程的扩展::textBoxTrial3Score_TextChanged);
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(806, 35);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(97, 25);
			this->label33->TabIndex = 96;
			this->label33->Text = L"0";
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(678, 35);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(106, 25);
			this->label34->TabIndex = 95;
			this->label34->Text = L"1";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(317, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 25);
			this->label7->TabIndex = 94;
			this->label7->Text = L"4";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(558, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 25);
			this->label8->TabIndex = 93;
			this->label8->Text = L"2";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(430, 35);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(106, 25);
			this->label9->TabIndex = 92;
			this->label9->Text = L"3";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(208, 35);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(97, 25);
			this->label12->TabIndex = 91;
			this->label12->Text = L"5";
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(22, 87);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(169, 25);
			this->label13->TabIndex = 64;
			this->label13->Text = L"改装表读数（V）";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(22, 35);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(169, 32);
			this->label14->TabIndex = 63;
			this->label14->Text = L"电压源输出（V）";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(882, 958);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 331;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &仪表量程的扩展::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(769, 958);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 330;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &仪表量程的扩展::button2_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->labelTotalGrade);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(9, 933);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(467, 73);
			this->groupBox5->TabIndex = 328;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"仪表量程的扩展 实验总分";
			// 
			// labelTotalGrade
			// 
			this->labelTotalGrade->AutoSize = true;
			this->labelTotalGrade->Location = System::Drawing::Point(212, 32);
			this->labelTotalGrade->Name = L"labelTotalGrade";
			this->labelTotalGrade->Size = System::Drawing::Size(19, 20);
			this->labelTotalGrade->TabIndex = 0;
			this->labelTotalGrade->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(662, 958);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 329;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &仪表量程的扩展::button1_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &仪表量程的扩展::printDocument1_PrintPage);
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
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Location = System::Drawing::Point(33, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1159, 1022);
			this->panel1->TabIndex = 332;
			// 
			// textBoxTrial1_6
			// 
			this->textBoxTrial1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_6->Location = System::Drawing::Point(804, 91);
			this->textBoxTrial1_6->Name = L"textBoxTrial1_6";
			this->textBoxTrial1_6->Size = System::Drawing::Size(97, 25);
			this->textBoxTrial1_6->TabIndex = 225;
			this->textBoxTrial1_6->Text = L" ";
			// 
			// textBoxTrial1_5
			// 
			this->textBoxTrial1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_5->Location = System::Drawing::Point(676, 91);
			this->textBoxTrial1_5->Name = L"textBoxTrial1_5";
			this->textBoxTrial1_5->Size = System::Drawing::Size(106, 25);
			this->textBoxTrial1_5->TabIndex = 224;
			this->textBoxTrial1_5->Text = L" ";
			// 
			// textBoxTrial1_2
			// 
			this->textBoxTrial1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_2->Location = System::Drawing::Point(315, 91);
			this->textBoxTrial1_2->Name = L"textBoxTrial1_2";
			this->textBoxTrial1_2->Size = System::Drawing::Size(92, 25);
			this->textBoxTrial1_2->TabIndex = 223;
			this->textBoxTrial1_2->Text = L" ";
			// 
			// textBoxTrial1_4
			// 
			this->textBoxTrial1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_4->Location = System::Drawing::Point(556, 91);
			this->textBoxTrial1_4->Name = L"textBoxTrial1_4";
			this->textBoxTrial1_4->Size = System::Drawing::Size(97, 25);
			this->textBoxTrial1_4->TabIndex = 222;
			this->textBoxTrial1_4->Text = L" ";
			// 
			// textBoxTrial1_3
			// 
			this->textBoxTrial1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_3->Location = System::Drawing::Point(428, 91);
			this->textBoxTrial1_3->Name = L"textBoxTrial1_3";
			this->textBoxTrial1_3->Size = System::Drawing::Size(106, 25);
			this->textBoxTrial1_3->TabIndex = 221;
			this->textBoxTrial1_3->Text = L" ";
			// 
			// textBoxTrial1_1
			// 
			this->textBoxTrial1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_1->Location = System::Drawing::Point(206, 91);
			this->textBoxTrial1_1->Name = L"textBoxTrial1_1";
			this->textBoxTrial1_1->Size = System::Drawing::Size(97, 25);
			this->textBoxTrial1_1->TabIndex = 220;
			this->textBoxTrial1_1->Text = L" ";
			// 
			// textBoxTrial2_6
			// 
			this->textBoxTrial2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_6->Location = System::Drawing::Point(804, 93);
			this->textBoxTrial2_6->Name = L"textBoxTrial2_6";
			this->textBoxTrial2_6->Size = System::Drawing::Size(97, 25);
			this->textBoxTrial2_6->TabIndex = 231;
			this->textBoxTrial2_6->Text = L" ";
			// 
			// textBoxTrial2_5
			// 
			this->textBoxTrial2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_5->Location = System::Drawing::Point(676, 93);
			this->textBoxTrial2_5->Name = L"textBoxTrial2_5";
			this->textBoxTrial2_5->Size = System::Drawing::Size(106, 25);
			this->textBoxTrial2_5->TabIndex = 230;
			this->textBoxTrial2_5->Text = L" ";
			// 
			// textBoxTrial2_2
			// 
			this->textBoxTrial2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_2->Location = System::Drawing::Point(315, 93);
			this->textBoxTrial2_2->Name = L"textBoxTrial2_2";
			this->textBoxTrial2_2->Size = System::Drawing::Size(92, 25);
			this->textBoxTrial2_2->TabIndex = 229;
			this->textBoxTrial2_2->Text = L" ";
			// 
			// textBoxTrial2_4
			// 
			this->textBoxTrial2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_4->Location = System::Drawing::Point(556, 93);
			this->textBoxTrial2_4->Name = L"textBoxTrial2_4";
			this->textBoxTrial2_4->Size = System::Drawing::Size(97, 25);
			this->textBoxTrial2_4->TabIndex = 228;
			this->textBoxTrial2_4->Text = L" ";
			// 
			// textBoxTrial2_3
			// 
			this->textBoxTrial2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_3->Location = System::Drawing::Point(428, 93);
			this->textBoxTrial2_3->Name = L"textBoxTrial2_3";
			this->textBoxTrial2_3->Size = System::Drawing::Size(106, 25);
			this->textBoxTrial2_3->TabIndex = 227;
			this->textBoxTrial2_3->Text = L" ";
			// 
			// textBoxTrial2_1
			// 
			this->textBoxTrial2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_1->Location = System::Drawing::Point(206, 93);
			this->textBoxTrial2_1->Name = L"textBoxTrial2_1";
			this->textBoxTrial2_1->Size = System::Drawing::Size(97, 25);
			this->textBoxTrial2_1->TabIndex = 226;
			this->textBoxTrial2_1->Text = L" ";
			// 
			// textBoxTrial3_6
			// 
			this->textBoxTrial3_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_6->Location = System::Drawing::Point(804, 87);
			this->textBoxTrial3_6->Name = L"textBoxTrial3_6";
			this->textBoxTrial3_6->Size = System::Drawing::Size(97, 25);
			this->textBoxTrial3_6->TabIndex = 237;
			this->textBoxTrial3_6->Text = L" ";
			// 
			// textBoxTrial3_5
			// 
			this->textBoxTrial3_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_5->Location = System::Drawing::Point(676, 87);
			this->textBoxTrial3_5->Name = L"textBoxTrial3_5";
			this->textBoxTrial3_5->Size = System::Drawing::Size(106, 25);
			this->textBoxTrial3_5->TabIndex = 236;
			this->textBoxTrial3_5->Text = L" ";
			// 
			// textBoxTrial3_2
			// 
			this->textBoxTrial3_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_2->Location = System::Drawing::Point(315, 87);
			this->textBoxTrial3_2->Name = L"textBoxTrial3_2";
			this->textBoxTrial3_2->Size = System::Drawing::Size(92, 25);
			this->textBoxTrial3_2->TabIndex = 235;
			this->textBoxTrial3_2->Text = L" ";
			// 
			// textBoxTrial3_4
			// 
			this->textBoxTrial3_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_4->Location = System::Drawing::Point(556, 87);
			this->textBoxTrial3_4->Name = L"textBoxTrial3_4";
			this->textBoxTrial3_4->Size = System::Drawing::Size(97, 25);
			this->textBoxTrial3_4->TabIndex = 234;
			this->textBoxTrial3_4->Text = L" ";
			// 
			// textBoxTrial3_3
			// 
			this->textBoxTrial3_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_3->Location = System::Drawing::Point(428, 87);
			this->textBoxTrial3_3->Name = L"textBoxTrial3_3";
			this->textBoxTrial3_3->Size = System::Drawing::Size(106, 25);
			this->textBoxTrial3_3->TabIndex = 233;
			this->textBoxTrial3_3->Text = L" ";
			// 
			// textBoxTrial3_1
			// 
			this->textBoxTrial3_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_1->Location = System::Drawing::Point(206, 87);
			this->textBoxTrial3_1->Name = L"textBoxTrial3_1";
			this->textBoxTrial3_1->Size = System::Drawing::Size(97, 25);
			this->textBoxTrial3_1->TabIndex = 232;
			this->textBoxTrial3_1->Text = L" ";
			// 
			// 仪表量程的扩展
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1582, 670);
			this->Controls->Add(this->panel1);
			this->Name = L"仪表量程的扩展";
			this->Text = L"仪表量程的扩展";
			this->Load += gcnew System::EventHandler(this, &仪表量程的扩展::仪表量程的扩展_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveCorrectGrades();
	}		
			 String ^SelectedArea = "";
			 void  Priview();
			 void Print();
		public:void Load仪表量程的扩展Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
private: System::Void 仪表量程的扩展_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Priview();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Print();
}
private: System::Void textBoxTrial3Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
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
};
}
