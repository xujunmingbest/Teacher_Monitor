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
	/// 负阻抗变换器 摘要
	/// </summary>
	public ref class 负阻抗变换器 : public System::Windows::Forms::Form
	{
	public:
		负阻抗变换器(void)
		{
			InitializeComponent();
			chart_load();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void chart_load();
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~负阻抗变换器()
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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial1;














	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::TextBox^  textBoxTrial1Score;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxTrial2Score;

	private: System::Windows::Forms::PictureBox^  pictureBox_2;
	private: System::Windows::Forms::PictureBox^  pictureBox_1;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label129;
	private: System::Windows::Forms::GroupBox^  groupBox14;
	private: System::Windows::Forms::Label^  labelTotalGrade;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_6;

	private: System::Windows::Forms::Label^  labelTrial1_600_U1_6;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_6;

	private: System::Windows::Forms::Label^  labelTrial1_300_U1_6;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_5;

	private: System::Windows::Forms::Label^  labelTrial1_600_U1_5;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_5;

	private: System::Windows::Forms::Label^  labelTrial1_300_U1_5;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_4;

	private: System::Windows::Forms::Label^  labelTrial1_600_U1_4;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_4;

	private: System::Windows::Forms::Label^  labelTrial1_300_U1_4;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_3;

	private: System::Windows::Forms::Label^  labelTrial1_600_U1_3;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_3;

	private: System::Windows::Forms::Label^  labelTrial1_300_U1_3;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_2;

	private: System::Windows::Forms::Label^  labelTrial1_600_U1_2;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_2;

	private: System::Windows::Forms::Label^  labelTrial1_300_U1_2;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::Label^  labelTrial1_600_U1_1;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  labelTrial1_U1_line1;
	private: System::Windows::Forms::Label^  labelTrial1_300_U1_1;
	private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  textBoxTrial1_600_R_6;
private: System::Windows::Forms::Label^  textBoxTrial1_600_R_5;
private: System::Windows::Forms::Label^  textBoxTrial1_600_R_4;
private: System::Windows::Forms::Label^  textBoxTrial1_600_R_3;
private: System::Windows::Forms::Label^  textBoxTrial1_600_R_2;
private: System::Windows::Forms::Label^  textBoxTrial1_600_R_1;
private: System::Windows::Forms::Label^  textBoxTrial1_300_R_6;
private: System::Windows::Forms::Label^  textBoxTrial1_300_R_5;
private: System::Windows::Forms::Label^  textBoxTrial1_300_R_4;
private: System::Windows::Forms::Label^  textBoxTrial1_300_R_3;
private: System::Windows::Forms::Label^  textBoxTrial1_300_R_2;
private: System::Windows::Forms::Label^  textBoxTrial1_300_R_1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(负阻抗变换器::typeid));
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
			this->textBoxTrial1_600_R_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_I1_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_U1_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_U1_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_I1_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_U1_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_U1_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_I1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_U1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_U1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_I1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_U1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_U1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_I1_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_U1_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_U1_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_I1_1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_U1_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_U1_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_U1_1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->chartTrial1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_1))->BeginInit();
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
			this->groupBox7->Location = System::Drawing::Point(12, 14);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(646, 314);
			this->groupBox7->TabIndex = 203;
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
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_1);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_1);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_6);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_6);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_6);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_6);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_5);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_5);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_5);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_5);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_4);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_4);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_4);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_4);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_3);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_3);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_3);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_3);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_2);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_2);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_2);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_2);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_1);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_1);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_1);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_1);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label77);
			this->groupBox8->Controls->Add(this->label78);
			this->groupBox8->Controls->Add(this->textBoxTrial1Score);
			this->groupBox8->Controls->Add(this->chartTrial1);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(13, 334);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 685);
			this->groupBox8->TabIndex = 204;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"负阻抗变换器 实验内容1";
			// 
			// textBoxTrial1_600_R_6
			// 
			this->textBoxTrial1_600_R_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_600_R_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_600_R_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_600_R_6->Location = System::Drawing::Point(907, 241);
			this->textBoxTrial1_600_R_6->Name = L"textBoxTrial1_600_R_6";
			this->textBoxTrial1_600_R_6->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_600_R_6->TabIndex = 281;
			this->textBoxTrial1_600_R_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_600_R_5
			// 
			this->textBoxTrial1_600_R_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_600_R_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_600_R_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_600_R_5->Location = System::Drawing::Point(794, 241);
			this->textBoxTrial1_600_R_5->Name = L"textBoxTrial1_600_R_5";
			this->textBoxTrial1_600_R_5->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_600_R_5->TabIndex = 280;
			this->textBoxTrial1_600_R_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_600_R_4
			// 
			this->textBoxTrial1_600_R_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_600_R_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_600_R_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_600_R_4->Location = System::Drawing::Point(681, 240);
			this->textBoxTrial1_600_R_4->Name = L"textBoxTrial1_600_R_4";
			this->textBoxTrial1_600_R_4->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_600_R_4->TabIndex = 279;
			this->textBoxTrial1_600_R_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_600_R_3
			// 
			this->textBoxTrial1_600_R_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_600_R_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_600_R_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_600_R_3->Location = System::Drawing::Point(568, 241);
			this->textBoxTrial1_600_R_3->Name = L"textBoxTrial1_600_R_3";
			this->textBoxTrial1_600_R_3->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_600_R_3->TabIndex = 278;
			this->textBoxTrial1_600_R_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_600_R_2
			// 
			this->textBoxTrial1_600_R_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_600_R_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_600_R_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_600_R_2->Location = System::Drawing::Point(455, 241);
			this->textBoxTrial1_600_R_2->Name = L"textBoxTrial1_600_R_2";
			this->textBoxTrial1_600_R_2->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_600_R_2->TabIndex = 277;
			this->textBoxTrial1_600_R_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_600_R_1
			// 
			this->textBoxTrial1_600_R_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_600_R_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_600_R_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_600_R_1->Location = System::Drawing::Point(342, 241);
			this->textBoxTrial1_600_R_1->Name = L"textBoxTrial1_600_R_1";
			this->textBoxTrial1_600_R_1->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_600_R_1->TabIndex = 276;
			this->textBoxTrial1_600_R_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_6
			// 
			this->textBoxTrial1_300_R_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_300_R_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_300_R_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_300_R_6->Location = System::Drawing::Point(907, 121);
			this->textBoxTrial1_300_R_6->Name = L"textBoxTrial1_300_R_6";
			this->textBoxTrial1_300_R_6->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_300_R_6->TabIndex = 275;
			this->textBoxTrial1_300_R_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_5
			// 
			this->textBoxTrial1_300_R_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_300_R_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_300_R_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_300_R_5->Location = System::Drawing::Point(794, 121);
			this->textBoxTrial1_300_R_5->Name = L"textBoxTrial1_300_R_5";
			this->textBoxTrial1_300_R_5->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_300_R_5->TabIndex = 274;
			this->textBoxTrial1_300_R_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_4
			// 
			this->textBoxTrial1_300_R_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_300_R_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_300_R_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_300_R_4->Location = System::Drawing::Point(681, 120);
			this->textBoxTrial1_300_R_4->Name = L"textBoxTrial1_300_R_4";
			this->textBoxTrial1_300_R_4->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_300_R_4->TabIndex = 273;
			this->textBoxTrial1_300_R_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_3
			// 
			this->textBoxTrial1_300_R_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_300_R_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_300_R_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_300_R_3->Location = System::Drawing::Point(568, 121);
			this->textBoxTrial1_300_R_3->Name = L"textBoxTrial1_300_R_3";
			this->textBoxTrial1_300_R_3->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_300_R_3->TabIndex = 272;
			this->textBoxTrial1_300_R_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_2
			// 
			this->textBoxTrial1_300_R_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_300_R_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_300_R_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_300_R_2->Location = System::Drawing::Point(455, 121);
			this->textBoxTrial1_300_R_2->Name = L"textBoxTrial1_300_R_2";
			this->textBoxTrial1_300_R_2->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_300_R_2->TabIndex = 271;
			this->textBoxTrial1_300_R_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_1
			// 
			this->textBoxTrial1_300_R_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_300_R_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_300_R_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_300_R_1->Location = System::Drawing::Point(342, 121);
			this->textBoxTrial1_300_R_1->Name = L"textBoxTrial1_300_R_1";
			this->textBoxTrial1_300_R_1->Size = System::Drawing::Size(107, 25);
			this->textBoxTrial1_300_R_1->TabIndex = 270;
			this->textBoxTrial1_300_R_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_I1_6
			// 
			this->labelTrial1_600_I1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_6->Location = System::Drawing::Point(907, 195);
			this->labelTrial1_600_I1_6->Name = L"labelTrial1_600_I1_6";
			this->labelTrial1_600_I1_6->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_6->TabIndex = 269;
			this->labelTrial1_600_I1_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_U1_6
			// 
			this->labelTrial1_600_U1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_6->Location = System::Drawing::Point(907, 155);
			this->labelTrial1_600_U1_6->Name = L"labelTrial1_600_U1_6";
			this->labelTrial1_600_U1_6->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_6->TabIndex = 267;
			this->labelTrial1_600_U1_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_6
			// 
			this->labelTrial1_300_I1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_6->Location = System::Drawing::Point(907, 82);
			this->labelTrial1_300_I1_6->Name = L"labelTrial1_300_I1_6";
			this->labelTrial1_300_I1_6->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_6->TabIndex = 266;
			this->labelTrial1_300_I1_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_U1_6
			// 
			this->labelTrial1_300_U1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_6->Location = System::Drawing::Point(907, 40);
			this->labelTrial1_300_U1_6->Name = L"labelTrial1_300_U1_6";
			this->labelTrial1_300_U1_6->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_6->TabIndex = 264;
			this->labelTrial1_300_U1_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_I1_5
			// 
			this->labelTrial1_600_I1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_5->Location = System::Drawing::Point(794, 195);
			this->labelTrial1_600_I1_5->Name = L"labelTrial1_600_I1_5";
			this->labelTrial1_600_I1_5->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_5->TabIndex = 263;
			this->labelTrial1_600_I1_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_U1_5
			// 
			this->labelTrial1_600_U1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_5->Location = System::Drawing::Point(794, 155);
			this->labelTrial1_600_U1_5->Name = L"labelTrial1_600_U1_5";
			this->labelTrial1_600_U1_5->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_5->TabIndex = 261;
			this->labelTrial1_600_U1_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_5
			// 
			this->labelTrial1_300_I1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_5->Location = System::Drawing::Point(794, 82);
			this->labelTrial1_300_I1_5->Name = L"labelTrial1_300_I1_5";
			this->labelTrial1_300_I1_5->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_5->TabIndex = 260;
			this->labelTrial1_300_I1_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_U1_5
			// 
			this->labelTrial1_300_U1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_5->Location = System::Drawing::Point(794, 40);
			this->labelTrial1_300_U1_5->Name = L"labelTrial1_300_U1_5";
			this->labelTrial1_300_U1_5->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_5->TabIndex = 258;
			this->labelTrial1_300_U1_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_I1_4
			// 
			this->labelTrial1_600_I1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_4->Location = System::Drawing::Point(681, 194);
			this->labelTrial1_600_I1_4->Name = L"labelTrial1_600_I1_4";
			this->labelTrial1_600_I1_4->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_4->TabIndex = 257;
			this->labelTrial1_600_I1_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_U1_4
			// 
			this->labelTrial1_600_U1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_4->Location = System::Drawing::Point(681, 154);
			this->labelTrial1_600_U1_4->Name = L"labelTrial1_600_U1_4";
			this->labelTrial1_600_U1_4->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_4->TabIndex = 255;
			this->labelTrial1_600_U1_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_4
			// 
			this->labelTrial1_300_I1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_4->Location = System::Drawing::Point(681, 81);
			this->labelTrial1_300_I1_4->Name = L"labelTrial1_300_I1_4";
			this->labelTrial1_300_I1_4->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_4->TabIndex = 254;
			this->labelTrial1_300_I1_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_U1_4
			// 
			this->labelTrial1_300_U1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_4->Location = System::Drawing::Point(681, 39);
			this->labelTrial1_300_U1_4->Name = L"labelTrial1_300_U1_4";
			this->labelTrial1_300_U1_4->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_4->TabIndex = 252;
			this->labelTrial1_300_U1_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_I1_3
			// 
			this->labelTrial1_600_I1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_3->Location = System::Drawing::Point(568, 195);
			this->labelTrial1_600_I1_3->Name = L"labelTrial1_600_I1_3";
			this->labelTrial1_600_I1_3->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_3->TabIndex = 251;
			this->labelTrial1_600_I1_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_U1_3
			// 
			this->labelTrial1_600_U1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_3->Location = System::Drawing::Point(568, 155);
			this->labelTrial1_600_U1_3->Name = L"labelTrial1_600_U1_3";
			this->labelTrial1_600_U1_3->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_3->TabIndex = 249;
			this->labelTrial1_600_U1_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_3
			// 
			this->labelTrial1_300_I1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_3->Location = System::Drawing::Point(568, 82);
			this->labelTrial1_300_I1_3->Name = L"labelTrial1_300_I1_3";
			this->labelTrial1_300_I1_3->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_3->TabIndex = 248;
			this->labelTrial1_300_I1_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_U1_3
			// 
			this->labelTrial1_300_U1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_3->Location = System::Drawing::Point(568, 40);
			this->labelTrial1_300_U1_3->Name = L"labelTrial1_300_U1_3";
			this->labelTrial1_300_U1_3->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_3->TabIndex = 246;
			this->labelTrial1_300_U1_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_I1_2
			// 
			this->labelTrial1_600_I1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_2->Location = System::Drawing::Point(455, 195);
			this->labelTrial1_600_I1_2->Name = L"labelTrial1_600_I1_2";
			this->labelTrial1_600_I1_2->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_2->TabIndex = 245;
			this->labelTrial1_600_I1_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_U1_2
			// 
			this->labelTrial1_600_U1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_2->Location = System::Drawing::Point(455, 155);
			this->labelTrial1_600_U1_2->Name = L"labelTrial1_600_U1_2";
			this->labelTrial1_600_U1_2->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_2->TabIndex = 243;
			this->labelTrial1_600_U1_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_2
			// 
			this->labelTrial1_300_I1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_2->Location = System::Drawing::Point(455, 82);
			this->labelTrial1_300_I1_2->Name = L"labelTrial1_300_I1_2";
			this->labelTrial1_300_I1_2->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_2->TabIndex = 242;
			this->labelTrial1_300_I1_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_U1_2
			// 
			this->labelTrial1_300_U1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_2->Location = System::Drawing::Point(455, 40);
			this->labelTrial1_300_U1_2->Name = L"labelTrial1_300_U1_2";
			this->labelTrial1_300_U1_2->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_2->TabIndex = 240;
			this->labelTrial1_300_U1_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_I1_1
			// 
			this->labelTrial1_600_I1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_1->Location = System::Drawing::Point(342, 195);
			this->labelTrial1_600_I1_1->Name = L"labelTrial1_600_I1_1";
			this->labelTrial1_600_I1_1->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_1->TabIndex = 239;
			this->labelTrial1_600_I1_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(135, 241);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(191, 25);
			this->label8->TabIndex = 238;
			this->label8->Text = L"R_（KΩ）";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(135, 195);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(191, 25);
			this->label12->TabIndex = 237;
			this->label12->Text = L"I1（mA）";
			// 
			// labelTrial1_600_U1_1
			// 
			this->labelTrial1_600_U1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_1->Location = System::Drawing::Point(342, 155);
			this->labelTrial1_600_U1_1->Name = L"labelTrial1_600_U1_1";
			this->labelTrial1_600_U1_1->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_1->TabIndex = 235;
			this->labelTrial1_600_U1_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_1
			// 
			this->labelTrial1_300_I1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_1->Location = System::Drawing::Point(342, 82);
			this->labelTrial1_300_I1_1->Name = L"labelTrial1_300_I1_1";
			this->labelTrial1_300_I1_1->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_1->TabIndex = 234;
			this->labelTrial1_300_I1_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(135, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 25);
			this->label4->TabIndex = 233;
			this->label4->Text = L"R_（KΩ）";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(135, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 25);
			this->label3->TabIndex = 232;
			this->label3->Text = L"I1（mA）";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(12, 155);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 111);
			this->label11->TabIndex = 231;
			this->label11->Text = L"RL=600Ω";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(12, 40);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 110);
			this->label10->TabIndex = 230;
			this->label10->Text = L"RL=300Ω";
			// 
			// labelTrial1_U1_line1
			// 
			this->labelTrial1_U1_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line1->Location = System::Drawing::Point(135, 155);
			this->labelTrial1_U1_line1->Name = L"labelTrial1_U1_line1";
			this->labelTrial1_U1_line1->Size = System::Drawing::Size(191, 25);
			this->labelTrial1_U1_line1->TabIndex = 228;
			this->labelTrial1_U1_line1->Text = L"U1（v）";
			// 
			// labelTrial1_300_U1_1
			// 
			this->labelTrial1_300_U1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_1->Location = System::Drawing::Point(342, 40);
			this->labelTrial1_300_U1_1->Name = L"labelTrial1_300_U1_1";
			this->labelTrial1_300_U1_1->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_1->TabIndex = 227;
			this->labelTrial1_300_U1_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(135, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(191, 25);
			this->label9->TabIndex = 226;
			this->label9->Text = L"U1（v）";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label77->Location = System::Drawing::Point(848, 638);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(89, 20);
			this->label77->TabIndex = 225;
			this->label77->Text = L"请打分：";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label78->Location = System::Drawing::Point(1125, 638);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(129, 20);
			this->label78->TabIndex = 224;
			this->label78->Text = L"本项目总分30";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(950, 635);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 223;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &负阻抗变换器::textBoxTrial1Score_TextChanged);
			// 
			// chartTrial1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartTrial1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartTrial1->Legends->Add(legend2);
			this->chartTrial1->Location = System::Drawing::Point(12, 275);
			this->chartTrial1->Name = L"chartTrial1";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series2";
			this->chartTrial1->Series->Add(series3);
			this->chartTrial1->Series->Add(series4);
			this->chartTrial1->Size = System::Drawing::Size(812, 383);
			this->chartTrial1->TabIndex = 163;
			this->chartTrial1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBoxTrial2Score);
			this->groupBox1->Controls->Add(this->pictureBox_2);
			this->groupBox1->Controls->Add(this->pictureBox_1);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label129);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(19, 1054);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 1092);
			this->groupBox1->TabIndex = 205;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"负阻抗变换器 实验内容2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(879, 1063);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 296;
			this->label1->Text = L"请打分：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(1156, 1063);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 20);
			this->label2->TabIndex = 295;
			this->label2->Text = L"本项目总分30";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(981, 1060);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 294;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &负阻抗变换器::textBoxTrial2Score_TextChanged);
			// 
			// pictureBox_2
			// 
			this->pictureBox_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_2.Image")));
			this->pictureBox_2->Location = System::Drawing::Point(6, 599);
			this->pictureBox_2->Name = L"pictureBox_2";
			this->pictureBox_2->Size = System::Drawing::Size(605, 395);
			this->pictureBox_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_2->TabIndex = 293;
			this->pictureBox_2->TabStop = false;
			// 
			// pictureBox_1
			// 
			this->pictureBox_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_1.Image")));
			this->pictureBox_1->Location = System::Drawing::Point(6, 53);
			this->pictureBox_1->Name = L"pictureBox_1";
			this->pictureBox_1->Size = System::Drawing::Size(605, 395);
			this->pictureBox_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_1->TabIndex = 291;
			this->pictureBox_1->TabStop = false;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::SkyBlue;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(0, 584);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(1314, 12);
			this->label18->TabIndex = 290;
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(0, 38);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 12);
			this->label129->TabIndex = 289;
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(18, 2167);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(640, 73);
			this->groupBox14->TabIndex = 342;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"负阻抗变换器 实验总分";
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
			this->button1->Location = System::Drawing::Point(799, 2193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 343;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &负阻抗变换器::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(906, 2193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 344;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &负阻抗变换器::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox14);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(53, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1336, 2241);
			this->panel1->TabIndex = 346;
			// 
			// printDocument1
			// 
			this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &负阻抗变换器::printDocument1_BeginPrint);
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &负阻抗变换器::printDocument1_PrintPage);
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
			// 负阻抗变换器
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1594, 716);
			this->Controls->Add(this->panel1);
			this->Name = L"负阻抗变换器";
			this->Text = L"负阻抗变换器";
			this->Load += gcnew System::EventHandler(this, &负阻抗变换器::负阻抗变换器_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_1))->EndInit();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String ^SelectedArea = "";
		void  Priview();
		void Print();
		public:void Load负阻抗变换器Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();

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
private: System::Void 负阻抗变换器_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Priview();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Print();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void printDocument1_BeginPrint(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
}
};
}
