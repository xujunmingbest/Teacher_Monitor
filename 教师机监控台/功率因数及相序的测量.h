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
	/// 功率因数及相序的测量 摘要
	/// </summary>
	public ref class 功率因数及相序的测量 : public System::Windows::Forms::Form
	{
	public:
		功率因数及相序的测量(void)
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
		~功率因数及相序的测量()
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


	private: System::Windows::Forms::Label^  labelTrial2_P_4;

	private: System::Windows::Forms::Label^  labelTrial2_I_4;

	private: System::Windows::Forms::Label^  labelTrial2_UC_4;

	private: System::Windows::Forms::Label^  labelTrial2_UL_4;

	private: System::Windows::Forms::Label^  labelTrial2_UR_4;

	private: System::Windows::Forms::Label^  labelTrial2_U_4;



	private: System::Windows::Forms::Label^  labelTrial2_P_3;

	private: System::Windows::Forms::Label^  labelTrial2_I_3;

	private: System::Windows::Forms::Label^  labelTrial2_UC_3;

	private: System::Windows::Forms::Label^  labelTrial2_UL_3;

	private: System::Windows::Forms::Label^  labelTrial2_UR_3;

	private: System::Windows::Forms::Label^  labelTrial2_U_3;



	private: System::Windows::Forms::Label^  labelTrial2_P_2;

	private: System::Windows::Forms::Label^  labelTrial2_I_2;

	private: System::Windows::Forms::Label^  labelTrial2_UC_2;

	private: System::Windows::Forms::Label^  labelTrial2_UL_2;

	private: System::Windows::Forms::Label^  labelTrial2_UR_2;

	private: System::Windows::Forms::Label^  labelTrial2_U_2;



	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  labelTrial2_P_1;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  labelTrial2_I_1;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  labelTrial2_UC_1;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  labelTrial2_UL_1;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  labelTrial2_UR_1;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  labelTrial2_U_1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  textBoxTrial2Score;

private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::Panel^  panel1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Label^  textBoxTrial2_Load_4;
private: System::Windows::Forms::Label^  textBoxTrial2_φ_4;
private: System::Windows::Forms::Label^  textBoxTrial2_Load_3;
private: System::Windows::Forms::Label^  textBoxTrial2_φ_3;
private: System::Windows::Forms::Label^  textBoxTrial2_Load_2;
private: System::Windows::Forms::Label^  textBoxTrial2_φ_2;
private: System::Windows::Forms::Label^  textBoxTrial2_Load_1;
private: System::Windows::Forms::Label^  textBoxTrial2_φ_1;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TextBox^  textBoxTrial1Score;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(功率因数及相序的测量::typeid));
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
			this->textBoxTrial2_Load_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_Load_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_Load_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_Load_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_φ_1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_P_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_I_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UC_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UL_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UR_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_U_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_I_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UC_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UL_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UR_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_U_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_I_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UC_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UL_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UR_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_U_2 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P_1 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_I_1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UC_1 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UL_1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UR_1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_U_1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox7->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(17, 17);
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
			this->labelTrialName->Size = System::Drawing::Size(491, 23);
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
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ_3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ_2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_Load_1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_φ_1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBoxTrial2Score);
			this->groupBox1->Controls->Add(this->labelTrial2_P_4);
			this->groupBox1->Controls->Add(this->labelTrial2_I_4);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_4);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_4);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_4);
			this->groupBox1->Controls->Add(this->labelTrial2_U_4);
			this->groupBox1->Controls->Add(this->labelTrial2_P_3);
			this->groupBox1->Controls->Add(this->labelTrial2_I_3);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_3);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_3);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_3);
			this->groupBox1->Controls->Add(this->labelTrial2_U_3);
			this->groupBox1->Controls->Add(this->labelTrial2_P_2);
			this->groupBox1->Controls->Add(this->labelTrial2_I_2);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_2);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_2);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_2);
			this->groupBox1->Controls->Add(this->labelTrial2_U_2);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->labelTrial2_P_1);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->labelTrial2_I_1);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->labelTrial2_UC_1);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_1);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->labelTrial2_UR_1);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->labelTrial2_U_1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(3, 540);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1084, 410);
			this->groupBox1->TabIndex = 203;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"功率因数及相序的测量 实验内容2";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &功率因数及相序的测量::groupBox1_Enter);
			// 
			// textBoxTrial2_Load_4
			// 
			this->textBoxTrial2_Load_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_Load_4->Location = System::Drawing::Point(905, 286);
			this->textBoxTrial2_Load_4->Name = L"textBoxTrial2_Load_4";
			this->textBoxTrial2_Load_4->Size = System::Drawing::Size(159, 50);
			this->textBoxTrial2_Load_4->TabIndex = 233;
			this->textBoxTrial2_Load_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ_4
			// 
			this->textBoxTrial2_φ_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ_4->Location = System::Drawing::Point(801, 286);
			this->textBoxTrial2_φ_4->Name = L"textBoxTrial2_φ_4";
			this->textBoxTrial2_φ_4->Size = System::Drawing::Size(88, 50);
			this->textBoxTrial2_φ_4->TabIndex = 232;
			this->textBoxTrial2_φ_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_Load_3
			// 
			this->textBoxTrial2_Load_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_Load_3->Location = System::Drawing::Point(905, 223);
			this->textBoxTrial2_Load_3->Name = L"textBoxTrial2_Load_3";
			this->textBoxTrial2_Load_3->Size = System::Drawing::Size(159, 50);
			this->textBoxTrial2_Load_3->TabIndex = 231;
			this->textBoxTrial2_Load_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ_3
			// 
			this->textBoxTrial2_φ_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ_3->Location = System::Drawing::Point(801, 223);
			this->textBoxTrial2_φ_3->Name = L"textBoxTrial2_φ_3";
			this->textBoxTrial2_φ_3->Size = System::Drawing::Size(88, 50);
			this->textBoxTrial2_φ_3->TabIndex = 230;
			this->textBoxTrial2_φ_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_Load_2
			// 
			this->textBoxTrial2_Load_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_Load_2->Location = System::Drawing::Point(905, 155);
			this->textBoxTrial2_Load_2->Name = L"textBoxTrial2_Load_2";
			this->textBoxTrial2_Load_2->Size = System::Drawing::Size(159, 50);
			this->textBoxTrial2_Load_2->TabIndex = 229;
			this->textBoxTrial2_Load_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ_2
			// 
			this->textBoxTrial2_φ_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ_2->Location = System::Drawing::Point(801, 155);
			this->textBoxTrial2_φ_2->Name = L"textBoxTrial2_φ_2";
			this->textBoxTrial2_φ_2->Size = System::Drawing::Size(88, 50);
			this->textBoxTrial2_φ_2->TabIndex = 228;
			this->textBoxTrial2_φ_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_Load_1
			// 
			this->textBoxTrial2_Load_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_Load_1->Location = System::Drawing::Point(905, 90);
			this->textBoxTrial2_Load_1->Name = L"textBoxTrial2_Load_1";
			this->textBoxTrial2_Load_1->Size = System::Drawing::Size(159, 50);
			this->textBoxTrial2_Load_1->TabIndex = 227;
			this->textBoxTrial2_Load_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_φ_1
			// 
			this->textBoxTrial2_φ_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_φ_1->Location = System::Drawing::Point(801, 90);
			this->textBoxTrial2_φ_1->Name = L"textBoxTrial2_φ_1";
			this->textBoxTrial2_φ_1->Size = System::Drawing::Size(88, 50);
			this->textBoxTrial2_φ_1->TabIndex = 226;
			this->textBoxTrial2_φ_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(370, 363);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 225;
			this->label1->Text = L"请打分：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(647, 363);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 20);
			this->label2->TabIndex = 224;
			this->label2->Text = L"本项目总分30";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(472, 360);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 223;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &功率因数及相序的测量::textBoxTrial1Score_TextChanged);
			// 
			// labelTrial2_P_4
			// 
			this->labelTrial2_P_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_4->Location = System::Drawing::Point(700, 286);
			this->labelTrial2_P_4->Name = L"labelTrial2_P_4";
			this->labelTrial2_P_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_P_4->TabIndex = 213;
			this->labelTrial2_P_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_I_4
			// 
			this->labelTrial2_I_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_4->Location = System::Drawing::Point(596, 286);
			this->labelTrial2_I_4->Name = L"labelTrial2_I_4";
			this->labelTrial2_I_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_4->TabIndex = 211;
			this->labelTrial2_I_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UC_4
			// 
			this->labelTrial2_UC_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_4->Location = System::Drawing::Point(493, 286);
			this->labelTrial2_UC_4->Name = L"labelTrial2_UC_4";
			this->labelTrial2_UC_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_4->TabIndex = 209;
			this->labelTrial2_UC_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UL_4
			// 
			this->labelTrial2_UL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_4->Location = System::Drawing::Point(389, 286);
			this->labelTrial2_UL_4->Name = L"labelTrial2_UL_4";
			this->labelTrial2_UL_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_4->TabIndex = 207;
			this->labelTrial2_UL_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UR_4
			// 
			this->labelTrial2_UR_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_4->Location = System::Drawing::Point(285, 286);
			this->labelTrial2_UR_4->Name = L"labelTrial2_UR_4";
			this->labelTrial2_UR_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_4->TabIndex = 205;
			this->labelTrial2_UR_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_U_4
			// 
			this->labelTrial2_U_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_4->Location = System::Drawing::Point(181, 286);
			this->labelTrial2_U_4->Name = L"labelTrial2_U_4";
			this->labelTrial2_U_4->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_4->TabIndex = 203;
			this->labelTrial2_U_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_P_3
			// 
			this->labelTrial2_P_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_3->Location = System::Drawing::Point(700, 223);
			this->labelTrial2_P_3->Name = L"labelTrial2_P_3";
			this->labelTrial2_P_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_P_3->TabIndex = 199;
			this->labelTrial2_P_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_I_3
			// 
			this->labelTrial2_I_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_3->Location = System::Drawing::Point(596, 223);
			this->labelTrial2_I_3->Name = L"labelTrial2_I_3";
			this->labelTrial2_I_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_3->TabIndex = 197;
			this->labelTrial2_I_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UC_3
			// 
			this->labelTrial2_UC_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_3->Location = System::Drawing::Point(493, 223);
			this->labelTrial2_UC_3->Name = L"labelTrial2_UC_3";
			this->labelTrial2_UC_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_3->TabIndex = 195;
			this->labelTrial2_UC_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UL_3
			// 
			this->labelTrial2_UL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_3->Location = System::Drawing::Point(389, 223);
			this->labelTrial2_UL_3->Name = L"labelTrial2_UL_3";
			this->labelTrial2_UL_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_3->TabIndex = 193;
			this->labelTrial2_UL_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UR_3
			// 
			this->labelTrial2_UR_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_3->Location = System::Drawing::Point(285, 223);
			this->labelTrial2_UR_3->Name = L"labelTrial2_UR_3";
			this->labelTrial2_UR_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_3->TabIndex = 191;
			this->labelTrial2_UR_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_U_3
			// 
			this->labelTrial2_U_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_3->Location = System::Drawing::Point(181, 223);
			this->labelTrial2_U_3->Name = L"labelTrial2_U_3";
			this->labelTrial2_U_3->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_3->TabIndex = 189;
			this->labelTrial2_U_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_P_2
			// 
			this->labelTrial2_P_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_2->Location = System::Drawing::Point(700, 155);
			this->labelTrial2_P_2->Name = L"labelTrial2_P_2";
			this->labelTrial2_P_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_P_2->TabIndex = 185;
			this->labelTrial2_P_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_I_2
			// 
			this->labelTrial2_I_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_2->Location = System::Drawing::Point(596, 155);
			this->labelTrial2_I_2->Name = L"labelTrial2_I_2";
			this->labelTrial2_I_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_2->TabIndex = 183;
			this->labelTrial2_I_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UC_2
			// 
			this->labelTrial2_UC_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_2->Location = System::Drawing::Point(493, 155);
			this->labelTrial2_UC_2->Name = L"labelTrial2_UC_2";
			this->labelTrial2_UC_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_2->TabIndex = 181;
			this->labelTrial2_UC_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UL_2
			// 
			this->labelTrial2_UL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_2->Location = System::Drawing::Point(389, 155);
			this->labelTrial2_UL_2->Name = L"labelTrial2_UL_2";
			this->labelTrial2_UL_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_2->TabIndex = 179;
			this->labelTrial2_UL_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UR_2
			// 
			this->labelTrial2_UR_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_2->Location = System::Drawing::Point(285, 155);
			this->labelTrial2_UR_2->Name = L"labelTrial2_UR_2";
			this->labelTrial2_UR_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_2->TabIndex = 177;
			this->labelTrial2_UR_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_U_2
			// 
			this->labelTrial2_U_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_2->Location = System::Drawing::Point(181, 155);
			this->labelTrial2_U_2->Name = L"labelTrial2_U_2";
			this->labelTrial2_U_2->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_2->TabIndex = 175;
			this->labelTrial2_U_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(905, 40);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(159, 27);
			this->label22->TabIndex = 171;
			this->label22->Text = L"负载性质";
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(801, 40);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(88, 27);
			this->label23->TabIndex = 170;
			this->label23->Text = L"cosφ";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(700, 40);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(88, 27);
			this->label18->TabIndex = 169;
			this->label18->Text = L"P(w)";
			// 
			// labelTrial2_P_1
			// 
			this->labelTrial2_P_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_1->Location = System::Drawing::Point(700, 90);
			this->labelTrial2_P_1->Name = L"labelTrial2_P_1";
			this->labelTrial2_P_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_P_1->TabIndex = 168;
			this->labelTrial2_P_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(596, 40);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(88, 27);
			this->label20->TabIndex = 166;
			this->label20->Text = L"I(v)";
			// 
			// labelTrial2_I_1
			// 
			this->labelTrial2_I_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_1->Location = System::Drawing::Point(596, 90);
			this->labelTrial2_I_1->Name = L"labelTrial2_I_1";
			this->labelTrial2_I_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_I_1->TabIndex = 165;
			this->labelTrial2_I_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(493, 40);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(88, 27);
			this->label14->TabIndex = 163;
			this->label14->Text = L"UC(v)";
			// 
			// labelTrial2_UC_1
			// 
			this->labelTrial2_UC_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UC_1->Location = System::Drawing::Point(493, 90);
			this->labelTrial2_UC_1->Name = L"labelTrial2_UC_1";
			this->labelTrial2_UC_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UC_1->TabIndex = 162;
			this->labelTrial2_UC_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(389, 40);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(88, 27);
			this->label16->TabIndex = 160;
			this->label16->Text = L"UL(v)";
			// 
			// labelTrial2_UL_1
			// 
			this->labelTrial2_UL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_1->Location = System::Drawing::Point(389, 90);
			this->labelTrial2_UL_1->Name = L"labelTrial2_UL_1";
			this->labelTrial2_UL_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UL_1->TabIndex = 159;
			this->labelTrial2_UL_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(285, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 27);
			this->label12->TabIndex = 157;
			this->label12->Text = L"UR(v)";
			// 
			// labelTrial2_UR_1
			// 
			this->labelTrial2_UR_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UR_1->Location = System::Drawing::Point(285, 90);
			this->labelTrial2_UR_1->Name = L"labelTrial2_UR_1";
			this->labelTrial2_UR_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_UR_1->TabIndex = 156;
			this->labelTrial2_UR_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(181, 40);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 27);
			this->label11->TabIndex = 154;
			this->label11->Text = L"U(v)";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(25, 286);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 50);
			this->label10->TabIndex = 153;
			this->label10->Text = L"SA2，SA3合，\r\nSA1断";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(25, 223);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 50);
			this->label7->TabIndex = 152;
			this->label7->Text = L"SA3合，\r\nSA1，SA2断";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(25, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 50);
			this->label6->TabIndex = 151;
			this->label6->Text = L"SA2合\r\nSA1，SA3断";
			// 
			// labelTrial2_U_1
			// 
			this->labelTrial2_U_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_1->Location = System::Drawing::Point(181, 90);
			this->labelTrial2_U_1->Name = L"labelTrial2_U_1";
			this->labelTrial2_U_1->Size = System::Drawing::Size(88, 50);
			this->labelTrial2_U_1->TabIndex = 150;
			this->labelTrial2_U_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(25, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 50);
			this->label3->TabIndex = 147;
			this->label3->Text = L"SA1合\r\nSA2，SA3随意";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(25, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 27);
			this->label5->TabIndex = 146;
			this->label5->Text = L"开关状态";
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(918, 1000);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(101, 36);
			this->button25->TabIndex = 331;
			this->button25->Text = L"打印";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &功率因数及相序的测量::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(805, 1000);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(101, 36);
			this->button26->TabIndex = 330;
			this->button26->Text = L"预览";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &功率因数及相序的测量::button26_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->labelTotalGrade);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(13, 974);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(640, 73);
			this->groupBox5->TabIndex = 328;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"功率因数及相序的测量 实验总分";
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
			// button27
			// 
			this->button27->Location = System::Drawing::Point(698, 1000);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(101, 36);
			this->button27->TabIndex = 329;
			this->button27->Text = L"保存成绩";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &功率因数及相序的测量::button27_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Location = System::Drawing::Point(54, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1123, 1059);
			this->panel1->TabIndex = 332;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label105);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->textBoxTrial1Score);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(17, 354);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1084, 163);
			this->groupBox2->TabIndex = 234;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"功率因数及相序的测量 实验内容1";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Location = System::Drawing::Point(125, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(959, 74);
			this->label4->TabIndex = 204;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(333, 130);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(89, 20);
			this->label24->TabIndex = 225;
			this->label24->Text = L"请打分：";
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(26, 50);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 57);
			this->label105->TabIndex = 332;
			this->label105->Text = L"实验结论";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->Location = System::Drawing::Point(610, 130);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(129, 20);
			this->label25->TabIndex = 224;
			this->label25->Text = L"本项目总分30";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(435, 127);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 223;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &功率因数及相序的测量::textBox1_TextChanged);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &功率因数及相序的测量::printDocument1_PrintPage);
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
			// 功率因数及相序的测量
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1560, 705);
			this->Controls->Add(this->panel1);
			this->Name = L"功率因数及相序的测量";
			this->Text = L"功率因数及相序的测量";
			this->Load += gcnew System::EventHandler(this, &功率因数及相序的测量::功率因数及相序的测量_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion		 
		String ^SelectedArea = "";
		void  Priview();
		void Print();
		public:void Load功率因数及相序的测量Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
	private: System::Void 功率因数及相序的测量_Load(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();

}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	Priview();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	Print();
}
private: System::Void textBoxTrial1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
};
}
