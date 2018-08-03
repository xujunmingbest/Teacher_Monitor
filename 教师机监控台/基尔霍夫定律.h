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
	/// 基尔霍夫定律 摘要
	/// </summary>
	public ref class 基尔霍夫定律 : public System::Windows::Forms::Form
	{
	public:
		基尔霍夫定律(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		string *fileName;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~基尔霍夫定律()
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
	private: System::Windows::Forms::Label^  label结论;
	private: System::Windows::Forms::Label^  labelcalUBC;
	private: System::Windows::Forms::Label^  labelcalUAB;
	private: System::Windows::Forms::Label^  labelcalUFA;
	private: System::Windows::Forms::Label^  labelcalU12;
	private: System::Windows::Forms::Label^  labelcalU11;
	private: System::Windows::Forms::Label^  labelcalI3;
	private: System::Windows::Forms::Label^  labelcalI2;
	private: System::Windows::Forms::Label^  labelcalI1;
	private: System::Windows::Forms::Label^  labelcalUDE;
	private: System::Windows::Forms::Label^  labelcalUCD;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  labelrelaUBC;
	private: System::Windows::Forms::Label^  labelrelaUAB;
	private: System::Windows::Forms::Label^  labelrelaUFA;
	private: System::Windows::Forms::Label^  labelrelaU12;
	private: System::Windows::Forms::Label^  labelrelaU11;
	private: System::Windows::Forms::Label^  labelrelaI3;
	private: System::Windows::Forms::Label^  labelrelaI2;
	private: System::Windows::Forms::Label^  labelrelaI1;
	private: System::Windows::Forms::Label^  labelrelaUDE;
	private: System::Windows::Forms::Label^  labelrelaUCD;
	private: System::Windows::Forms::Label^  labelmeaUBC;
	private: System::Windows::Forms::Label^  labelmeaUAB;
	private: System::Windows::Forms::Label^  labelmeaUFA;
	private: System::Windows::Forms::Label^  labelmeaU12;
	private: System::Windows::Forms::Label^  labelmeaU11;
	private: System::Windows::Forms::Label^  labelmeaI3;
	private: System::Windows::Forms::Label^  labelmeaI2;
	private: System::Windows::Forms::Label^  labelmeaI1;










	private: System::Windows::Forms::Label^  labelmeaUDE;
	private: System::Windows::Forms::Label^  labelmeaUCD;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;
private: System::Drawing::Printing::PrintDocument^  printDocument1;

private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  textBoxscore;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(基尔霍夫定律::typeid));
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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxscore = (gcnew System::Windows::Forms::TextBox());
			this->label结论 = (gcnew System::Windows::Forms::Label());
			this->labelcalUBC = (gcnew System::Windows::Forms::Label());
			this->labelcalUAB = (gcnew System::Windows::Forms::Label());
			this->labelcalUFA = (gcnew System::Windows::Forms::Label());
			this->labelcalU12 = (gcnew System::Windows::Forms::Label());
			this->labelcalU11 = (gcnew System::Windows::Forms::Label());
			this->labelcalI3 = (gcnew System::Windows::Forms::Label());
			this->labelcalI2 = (gcnew System::Windows::Forms::Label());
			this->labelcalI1 = (gcnew System::Windows::Forms::Label());
			this->labelcalUDE = (gcnew System::Windows::Forms::Label());
			this->labelcalUCD = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->labelrelaUBC = (gcnew System::Windows::Forms::Label());
			this->labelrelaUAB = (gcnew System::Windows::Forms::Label());
			this->labelrelaUFA = (gcnew System::Windows::Forms::Label());
			this->labelrelaU12 = (gcnew System::Windows::Forms::Label());
			this->labelrelaU11 = (gcnew System::Windows::Forms::Label());
			this->labelrelaI3 = (gcnew System::Windows::Forms::Label());
			this->labelrelaI2 = (gcnew System::Windows::Forms::Label());
			this->labelrelaI1 = (gcnew System::Windows::Forms::Label());
			this->labelrelaUDE = (gcnew System::Windows::Forms::Label());
			this->labelrelaUCD = (gcnew System::Windows::Forms::Label());
			this->labelmeaUBC = (gcnew System::Windows::Forms::Label());
			this->labelmeaUAB = (gcnew System::Windows::Forms::Label());
			this->labelmeaUFA = (gcnew System::Windows::Forms::Label());
			this->labelmeaU12 = (gcnew System::Windows::Forms::Label());
			this->labelmeaU11 = (gcnew System::Windows::Forms::Label());
			this->labelmeaI3 = (gcnew System::Windows::Forms::Label());
			this->labelmeaI2 = (gcnew System::Windows::Forms::Label());
			this->labelmeaI1 = (gcnew System::Windows::Forms::Label());
			this->labelmeaUDE = (gcnew System::Windows::Forms::Label());
			this->labelmeaUCD = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox7->SuspendLayout();
			this->groupBox2->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(3, 3);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(909, 314);
			this->groupBox7->TabIndex = 196;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"学生基础信息";
			this->groupBox7->Enter += gcnew System::EventHandler(this, &基尔霍夫定律::groupBox7_Enter);
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
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBoxscore);
			this->groupBox2->Controls->Add(this->label结论);
			this->groupBox2->Controls->Add(this->labelcalUBC);
			this->groupBox2->Controls->Add(this->labelcalUAB);
			this->groupBox2->Controls->Add(this->labelcalUFA);
			this->groupBox2->Controls->Add(this->labelcalU12);
			this->groupBox2->Controls->Add(this->labelcalU11);
			this->groupBox2->Controls->Add(this->labelcalI3);
			this->groupBox2->Controls->Add(this->labelcalI2);
			this->groupBox2->Controls->Add(this->labelcalI1);
			this->groupBox2->Controls->Add(this->labelcalUDE);
			this->groupBox2->Controls->Add(this->labelcalUCD);
			this->groupBox2->Controls->Add(this->label64);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->labelrelaUBC);
			this->groupBox2->Controls->Add(this->labelrelaUAB);
			this->groupBox2->Controls->Add(this->labelrelaUFA);
			this->groupBox2->Controls->Add(this->labelrelaU12);
			this->groupBox2->Controls->Add(this->labelrelaU11);
			this->groupBox2->Controls->Add(this->labelrelaI3);
			this->groupBox2->Controls->Add(this->labelrelaI2);
			this->groupBox2->Controls->Add(this->labelrelaI1);
			this->groupBox2->Controls->Add(this->labelrelaUDE);
			this->groupBox2->Controls->Add(this->labelrelaUCD);
			this->groupBox2->Controls->Add(this->labelmeaUBC);
			this->groupBox2->Controls->Add(this->labelmeaUAB);
			this->groupBox2->Controls->Add(this->labelmeaUFA);
			this->groupBox2->Controls->Add(this->labelmeaU12);
			this->groupBox2->Controls->Add(this->labelmeaU11);
			this->groupBox2->Controls->Add(this->labelmeaI3);
			this->groupBox2->Controls->Add(this->labelmeaI2);
			this->groupBox2->Controls->Add(this->labelmeaI1);
			this->groupBox2->Controls->Add(this->labelmeaUDE);
			this->groupBox2->Controls->Add(this->labelmeaUCD);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(3, 339);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1300, 345);
			this->groupBox2->TabIndex = 197;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"测量数据";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &基尔霍夫定律::groupBox2_Enter);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(222, 283);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 20);
			this->label9->TabIndex = 172;
			this->label9->Text = L"请打分：";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(499, 283);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 20);
			this->label10->TabIndex = 171;
			this->label10->Text = L"本实验总分100";
			// 
			// textBoxscore
			// 
			this->textBoxscore->Location = System::Drawing::Point(324, 280);
			this->textBoxscore->Name = L"textBoxscore";
			this->textBoxscore->Size = System::Drawing::Size(152, 30);
			this->textBoxscore->TabIndex = 170;
			// 
			// label结论
			// 
			this->label结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label结论->Location = System::Drawing::Point(200, 242);
			this->label结论->Name = L"label结论";
			this->label结论->Size = System::Drawing::Size(1000, 31);
			this->label结论->TabIndex = 119;
			this->label结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelcalUBC
			// 
			this->labelcalUBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelcalUBC->Location = System::Drawing::Point(901, 89);
			this->labelcalUBC->Name = L"labelcalUBC";
			this->labelcalUBC->Size = System::Drawing::Size(93, 31);
			this->labelcalUBC->TabIndex = 118;
			this->labelcalUBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelcalUAB
			// 
			this->labelcalUAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelcalUAB->Location = System::Drawing::Point(799, 89);
			this->labelcalUAB->Name = L"labelcalUAB";
			this->labelcalUAB->Size = System::Drawing::Size(93, 31);
			this->labelcalUAB->TabIndex = 117;
			this->labelcalUAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelcalUFA
			// 
			this->labelcalUFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelcalUFA->Location = System::Drawing::Point(697, 89);
			this->labelcalUFA->Name = L"labelcalUFA";
			this->labelcalUFA->Size = System::Drawing::Size(93, 31);
			this->labelcalUFA->TabIndex = 116;
			this->labelcalUFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelcalU12
			// 
			this->labelcalU12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelcalU12->Location = System::Drawing::Point(598, 89);
			this->labelcalU12->Name = L"labelcalU12";
			this->labelcalU12->Size = System::Drawing::Size(93, 31);
			this->labelcalU12->TabIndex = 115;
			this->labelcalU12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelcalU11
			// 
			this->labelcalU11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelcalU11->Location = System::Drawing::Point(503, 89);
			this->labelcalU11->Name = L"labelcalU11";
			this->labelcalU11->Size = System::Drawing::Size(89, 31);
			this->labelcalU11->TabIndex = 114;
			this->labelcalU11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelcalI3
			// 
			this->labelcalI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelcalI3->Location = System::Drawing::Point(401, 89);
			this->labelcalI3->Name = L"labelcalI3";
			this->labelcalI3->Size = System::Drawing::Size(92, 31);
			this->labelcalI3->TabIndex = 113;
			this->labelcalI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelcalI2
			// 
			this->labelcalI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelcalI2->Location = System::Drawing::Point(302, 89);
			this->labelcalI2->Name = L"labelcalI2";
			this->labelcalI2->Size = System::Drawing::Size(93, 31);
			this->labelcalI2->TabIndex = 112;
			this->labelcalI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelcalI1
			// 
			this->labelcalI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelcalI1->Location = System::Drawing::Point(200, 89);
			this->labelcalI1->Name = L"labelcalI1";
			this->labelcalI1->Size = System::Drawing::Size(93, 31);
			this->labelcalI1->TabIndex = 111;
			this->labelcalI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelcalUDE
			// 
			this->labelcalUDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelcalUDE->Location = System::Drawing::Point(1107, 89);
			this->labelcalUDE->Name = L"labelcalUDE";
			this->labelcalUDE->Size = System::Drawing::Size(93, 31);
			this->labelcalUDE->TabIndex = 110;
			this->labelcalUDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelcalUCD
			// 
			this->labelcalUCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelcalUCD->Location = System::Drawing::Point(1005, 89);
			this->labelcalUCD->Name = L"labelcalUCD";
			this->labelcalUCD->Size = System::Drawing::Size(93, 31);
			this->labelcalUCD->TabIndex = 109;
			this->labelcalUCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(33, 248);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(95, 25);
			this->label64->TabIndex = 108;
			this->label64->Text = L"实验结论";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Location = System::Drawing::Point(901, 39);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(93, 23);
			this->label20->TabIndex = 97;
			this->label20->Text = L"UBC";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Location = System::Drawing::Point(799, 39);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 23);
			this->label21->TabIndex = 96;
			this->label21->Text = L"UAB";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Location = System::Drawing::Point(697, 39);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(93, 23);
			this->label22->TabIndex = 95;
			this->label22->Text = L"UFA";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Location = System::Drawing::Point(598, 39);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 23);
			this->label23->TabIndex = 94;
			this->label23->Text = L"U12";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Location = System::Drawing::Point(503, 39);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(89, 23);
			this->label24->TabIndex = 93;
			this->label24->Text = L"U11";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Location = System::Drawing::Point(401, 39);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(92, 23);
			this->label25->TabIndex = 92;
			this->label25->Text = L"I3(mA)";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Location = System::Drawing::Point(302, 39);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 23);
			this->label26->TabIndex = 91;
			this->label26->Text = L"I2(mA)";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Location = System::Drawing::Point(200, 39);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(93, 23);
			this->label27->TabIndex = 90;
			this->label27->Text = L"I1(mA)";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(1107, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 23);
			this->label1->TabIndex = 89;
			this->label1->Text = L"UDE";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Location = System::Drawing::Point(1005, 39);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(93, 23);
			this->label29->TabIndex = 88;
			this->label29->Text = L"UCD";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(33, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(104, 23);
			this->label19->TabIndex = 87;
			this->label19->Text = L"被测量";
			// 
			// labelrelaUBC
			// 
			this->labelrelaUBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaUBC->Location = System::Drawing::Point(901, 192);
			this->labelrelaUBC->Name = L"labelrelaUBC";
			this->labelrelaUBC->Size = System::Drawing::Size(93, 31);
			this->labelrelaUBC->TabIndex = 86;
			this->labelrelaUBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaUAB
			// 
			this->labelrelaUAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaUAB->Location = System::Drawing::Point(799, 192);
			this->labelrelaUAB->Name = L"labelrelaUAB";
			this->labelrelaUAB->Size = System::Drawing::Size(93, 31);
			this->labelrelaUAB->TabIndex = 85;
			this->labelrelaUAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaUFA
			// 
			this->labelrelaUFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaUFA->Location = System::Drawing::Point(697, 192);
			this->labelrelaUFA->Name = L"labelrelaUFA";
			this->labelrelaUFA->Size = System::Drawing::Size(93, 31);
			this->labelrelaUFA->TabIndex = 84;
			this->labelrelaUFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaU12
			// 
			this->labelrelaU12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaU12->Location = System::Drawing::Point(598, 192);
			this->labelrelaU12->Name = L"labelrelaU12";
			this->labelrelaU12->Size = System::Drawing::Size(93, 31);
			this->labelrelaU12->TabIndex = 83;
			this->labelrelaU12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaU11
			// 
			this->labelrelaU11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaU11->Location = System::Drawing::Point(503, 192);
			this->labelrelaU11->Name = L"labelrelaU11";
			this->labelrelaU11->Size = System::Drawing::Size(89, 31);
			this->labelrelaU11->TabIndex = 82;
			this->labelrelaU11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaI3
			// 
			this->labelrelaI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaI3->Location = System::Drawing::Point(401, 192);
			this->labelrelaI3->Name = L"labelrelaI3";
			this->labelrelaI3->Size = System::Drawing::Size(92, 31);
			this->labelrelaI3->TabIndex = 81;
			this->labelrelaI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaI2
			// 
			this->labelrelaI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaI2->Location = System::Drawing::Point(302, 192);
			this->labelrelaI2->Name = L"labelrelaI2";
			this->labelrelaI2->Size = System::Drawing::Size(93, 31);
			this->labelrelaI2->TabIndex = 80;
			this->labelrelaI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaI1
			// 
			this->labelrelaI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaI1->Location = System::Drawing::Point(200, 192);
			this->labelrelaI1->Name = L"labelrelaI1";
			this->labelrelaI1->Size = System::Drawing::Size(93, 31);
			this->labelrelaI1->TabIndex = 79;
			this->labelrelaI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaUDE
			// 
			this->labelrelaUDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaUDE->Location = System::Drawing::Point(1107, 192);
			this->labelrelaUDE->Name = L"labelrelaUDE";
			this->labelrelaUDE->Size = System::Drawing::Size(93, 31);
			this->labelrelaUDE->TabIndex = 78;
			this->labelrelaUDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelrelaUCD
			// 
			this->labelrelaUCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelrelaUCD->Location = System::Drawing::Point(1005, 192);
			this->labelrelaUCD->Name = L"labelrelaUCD";
			this->labelrelaUCD->Size = System::Drawing::Size(93, 31);
			this->labelrelaUCD->TabIndex = 77;
			this->labelrelaUCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaUBC
			// 
			this->labelmeaUBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaUBC->Location = System::Drawing::Point(901, 139);
			this->labelmeaUBC->Name = L"labelmeaUBC";
			this->labelmeaUBC->Size = System::Drawing::Size(93, 30);
			this->labelmeaUBC->TabIndex = 76;
			this->labelmeaUBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaUAB
			// 
			this->labelmeaUAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaUAB->Location = System::Drawing::Point(799, 139);
			this->labelmeaUAB->Name = L"labelmeaUAB";
			this->labelmeaUAB->Size = System::Drawing::Size(93, 30);
			this->labelmeaUAB->TabIndex = 75;
			this->labelmeaUAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaUFA
			// 
			this->labelmeaUFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaUFA->Location = System::Drawing::Point(697, 139);
			this->labelmeaUFA->Name = L"labelmeaUFA";
			this->labelmeaUFA->Size = System::Drawing::Size(93, 30);
			this->labelmeaUFA->TabIndex = 74;
			this->labelmeaUFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaU12
			// 
			this->labelmeaU12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaU12->Location = System::Drawing::Point(598, 139);
			this->labelmeaU12->Name = L"labelmeaU12";
			this->labelmeaU12->Size = System::Drawing::Size(93, 30);
			this->labelmeaU12->TabIndex = 73;
			this->labelmeaU12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaU11
			// 
			this->labelmeaU11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaU11->Location = System::Drawing::Point(503, 139);
			this->labelmeaU11->Name = L"labelmeaU11";
			this->labelmeaU11->Size = System::Drawing::Size(89, 30);
			this->labelmeaU11->TabIndex = 72;
			this->labelmeaU11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaI3
			// 
			this->labelmeaI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaI3->Location = System::Drawing::Point(401, 139);
			this->labelmeaI3->Name = L"labelmeaI3";
			this->labelmeaI3->Size = System::Drawing::Size(92, 30);
			this->labelmeaI3->TabIndex = 71;
			this->labelmeaI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaI2
			// 
			this->labelmeaI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaI2->Location = System::Drawing::Point(302, 139);
			this->labelmeaI2->Name = L"labelmeaI2";
			this->labelmeaI2->Size = System::Drawing::Size(93, 30);
			this->labelmeaI2->TabIndex = 70;
			this->labelmeaI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaI1
			// 
			this->labelmeaI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaI1->Location = System::Drawing::Point(200, 139);
			this->labelmeaI1->Name = L"labelmeaI1";
			this->labelmeaI1->Size = System::Drawing::Size(93, 30);
			this->labelmeaI1->TabIndex = 69;
			this->labelmeaI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaUDE
			// 
			this->labelmeaUDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaUDE->Location = System::Drawing::Point(1107, 139);
			this->labelmeaUDE->Name = L"labelmeaUDE";
			this->labelmeaUDE->Size = System::Drawing::Size(93, 30);
			this->labelmeaUDE->TabIndex = 47;
			this->labelmeaUDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmeaUCD
			// 
			this->labelmeaUCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmeaUCD->Location = System::Drawing::Point(1005, 139);
			this->labelmeaUCD->Name = L"labelmeaUCD";
			this->labelmeaUCD->Size = System::Drawing::Size(93, 30);
			this->labelmeaUCD->TabIndex = 46;
			this->labelmeaUCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(33, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 23);
			this->label2->TabIndex = 7;
			this->label2->Text = L"相对误差";
			// 
			// label3
			// 
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(33, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"测量值";
			// 
			// label4
			// 
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(33, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 23);
			this->label4->TabIndex = 5;
			this->label4->Text = L"计算值";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Location = System::Drawing::Point(33, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1332, 705);
			this->panel1->TabIndex = 198;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &基尔霍夫定律::panel1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(619, 747);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 36);
			this->button1->TabIndex = 199;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &基尔霍夫定律::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(726, 747);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 36);
			this->button2->TabIndex = 200;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &基尔霍夫定律::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(833, 747);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 36);
			this->button3->TabIndex = 201;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &基尔霍夫定律::button3_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &基尔霍夫定律::printDocument1_PrintPage);
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
			// 基尔霍夫定律
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1499, 812);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"基尔霍夫定律";
			this->Text = L"基尔霍夫定律";
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox7_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	public: void Load基尔霍夫定律Data(string &filename);
	void SaveCorrectGrades();
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Bitmap ^_NewBitmap = gcnew Bitmap(panel1->Width, panel1->Height);
	panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));

	int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
	int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
	e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		printDocument1->DefaultPageSettings->Landscape = true;

		printPreviewDialog1->ShowDialog();
	}
	catch (System::Exception ^ e) {

	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		printDocument1->DefaultPageSettings->Landscape = true;
		printDocument1->Print();
	}
	catch (System::Exception ^ e) {

	}
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
};
}
