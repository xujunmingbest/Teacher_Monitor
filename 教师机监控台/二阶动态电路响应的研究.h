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
	/// 二阶动态电路响应的研究 摘要
	/// </summary>
	public ref class 二阶动态电路响应的研究 : public System::Windows::Forms::Form, public IDisposable
	{
	public:
		二阶动态电路响应的研究(void)
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
		~二阶动态电路响应的研究()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxTrial3_3w;
	protected:
	private: System::Windows::Forms::TextBox^  textBoxTrial3_2w;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_2α;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_2;

	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_3α;
	private: System::Windows::Forms::Label^  label23;

	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_3;
	private: System::Windows::Forms::Label^  label33;

	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label30;



	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_1w;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_1α;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_1;
	private: System::Windows::Forms::Label^  label13;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;

	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::TextBox^  textBoxtrial2_α;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label19;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_w;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_1;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_2;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_4w;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_4α;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_4;
	private: System::Windows::Forms::Label^  label44;

	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::TextBox^  textBoxTrial2Score;



private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBoxTrial1Score;



private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  textBoxTrial3Score;




private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Label^  label结论;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::Label^  labellab;
private: System::Windows::Forms::Label^  labeldate;
private: System::Windows::Forms::Label^  labelseriesnum;
private: System::Windows::Forms::Label^  labelmajor;
private: System::Windows::Forms::Label^  labelclass;
private: System::Windows::Forms::Label^  labelxuehao2;
private: System::Windows::Forms::Label^  labelxuehao1;
private: System::Windows::Forms::Label^  labelstuName2;
private: System::Windows::Forms::Label^  labelstuName1;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  labelTrialName;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::TextBox^  textBoxteacher;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label3;
private: System::Drawing::Printing::PrintDocument^  printDocument1;

private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Button^  button3;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(二阶动态电路响应的研究::typeid));
			this->textBoxTrial3_3w = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_2w = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_2α = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_2 = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_3α = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_3 = (gcnew System::Windows::Forms::PictureBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial3_1w = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_1α = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_α = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1_3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_w = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->pictureBoxTrial2_1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTrial1_2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBoxTrial1_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label结论 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial3_4w = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_4α = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_4 = (gcnew System::Windows::Forms::PictureBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3Score = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->labellab = (gcnew System::Windows::Forms::Label());
			this->labeldate = (gcnew System::Windows::Forms::Label());
			this->labelseriesnum = (gcnew System::Windows::Forms::Label());
			this->labelmajor = (gcnew System::Windows::Forms::Label());
			this->labelclass = (gcnew System::Windows::Forms::Label());
			this->labelxuehao2 = (gcnew System::Windows::Forms::Label());
			this->labelxuehao1 = (gcnew System::Windows::Forms::Label());
			this->labelstuName2 = (gcnew System::Windows::Forms::Label());
			this->labelstuName1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->labelTrialName = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->textBoxteacher = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_2))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_3))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_3))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_4))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxTrial3_3w
			// 
			this->textBoxTrial3_3w->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_3w->Location = System::Drawing::Point(190, 660);
			this->textBoxTrial3_3w->Name = L"textBoxTrial3_3w";
			this->textBoxTrial3_3w->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_3w->TabIndex = 108;
			// 
			// textBoxTrial3_2w
			// 
			this->textBoxTrial3_2w->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_2w->Location = System::Drawing::Point(197, 647);
			this->textBoxTrial3_2w->Name = L"textBoxTrial3_2w";
			this->textBoxTrial3_2w->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_2w->TabIndex = 108;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(51, 647);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(113, 25);
			this->label12->TabIndex = 107;
			this->label12->Text = L"振荡频率ωd";
			// 
			// textBoxTrial3_2α
			// 
			this->textBoxTrial3_2α->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_2α->Location = System::Drawing::Point(197, 611);
			this->textBoxTrial3_2α->Name = L"textBoxTrial3_2α";
			this->textBoxTrial3_2α->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_2α->TabIndex = 106;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(51, 616);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(113, 25);
			this->label22->TabIndex = 105;
			this->label22->Text = L"衰减常数α";
			// 
			// pictureBoxTrial3_2
			// 
			this->pictureBoxTrial3_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_2.Image")));
			this->pictureBoxTrial3_2->Location = System::Drawing::Point(41, 123);
			this->pictureBoxTrial3_2->Name = L"pictureBoxTrial3_2";
			this->pictureBoxTrial3_2->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_2->TabIndex = 104;
			this->pictureBoxTrial3_2->TabStop = false;
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(44, 660);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(113, 25);
			this->label31->TabIndex = 107;
			this->label31->Text = L"振荡频率ωd";
			// 
			// textBoxTrial3_3α
			// 
			this->textBoxTrial3_3α->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_3α->Location = System::Drawing::Point(191, 617);
			this->textBoxTrial3_3α->Name = L"textBoxTrial3_3α";
			this->textBoxTrial3_3α->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_3α->TabIndex = 106;
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(37, 38);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(92, 29);
			this->label23->TabIndex = 96;
			this->label23->Text = L"R1";
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(549, 91);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(200, 29);
			this->label24->TabIndex = 103;
			this->label24->Text = L"0.01μF（K13）";
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(176, 38);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(92, 29);
			this->label25->TabIndex = 97;
			this->label25->Text = L"R2";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(374, 91);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(132, 29);
			this->label26->TabIndex = 102;
			this->label26->Text = L"4.7mH（K15）";
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(374, 38);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(92, 29);
			this->label27->TabIndex = 98;
			this->label27->Text = L"L";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(176, 91);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(192, 29);
			this->label28->TabIndex = 101;
			this->label28->Text = L"调至某一欠阻尼态";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(549, 38);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(92, 29);
			this->label29->TabIndex = 99;
			this->label29->Text = L"C";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->textBoxTrial3_3w);
			this->groupBox6->Controls->Add(this->label31);
			this->groupBox6->Controls->Add(this->textBoxTrial3_3α);
			this->groupBox6->Controls->Add(this->label32);
			this->groupBox6->Controls->Add(this->pictureBoxTrial3_3);
			this->groupBox6->Controls->Add(this->label33);
			this->groupBox6->Controls->Add(this->label34);
			this->groupBox6->Controls->Add(this->label35);
			this->groupBox6->Controls->Add(this->label36);
			this->groupBox6->Controls->Add(this->label38);
			this->groupBox6->Controls->Add(this->label39);
			this->groupBox6->Controls->Add(this->label40);
			this->groupBox6->Controls->Add(this->label41);
			this->groupBox6->Location = System::Drawing::Point(24, 1466);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(930, 708);
			this->groupBox6->TabIndex = 106;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"第三组";
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(45, 622);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(113, 25);
			this->label32->TabIndex = 105;
			this->label32->Text = L"衰减常数α";
			// 
			// pictureBoxTrial3_3
			// 
			this->pictureBoxTrial3_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_3.Image")));
			this->pictureBoxTrial3_3->Location = System::Drawing::Point(41, 123);
			this->pictureBoxTrial3_3->Name = L"pictureBoxTrial3_3";
			this->pictureBoxTrial3_3->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_3->TabIndex = 104;
			this->pictureBoxTrial3_3->TabStop = false;
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(37, 38);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(92, 29);
			this->label33->TabIndex = 96;
			this->label33->Text = L"R1";
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(549, 91);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(200, 29);
			this->label34->TabIndex = 103;
			this->label34->Text = L"0.01μF（K13）";
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(176, 38);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(92, 29);
			this->label35->TabIndex = 97;
			this->label35->Text = L"R2";
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(374, 91);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(141, 29);
			this->label36->TabIndex = 102;
			this->label36->Text = L"4.7mH（K15）";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(374, 38);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(92, 29);
			this->label38->TabIndex = 98;
			this->label38->Text = L"L";
			// 
			// label39
			// 
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->ForeColor = System::Drawing::Color::Black;
			this->label39->Location = System::Drawing::Point(176, 91);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(192, 29);
			this->label39->TabIndex = 101;
			this->label39->Text = L"调至某一欠阻尼态";
			// 
			// label40
			// 
			this->label40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(549, 38);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(92, 29);
			this->label40->TabIndex = 99;
			this->label40->Text = L"C";
			// 
			// label41
			// 
			this->label41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label41->ForeColor = System::Drawing::Color::Black;
			this->label41->Location = System::Drawing::Point(37, 91);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(121, 29);
			this->label41->TabIndex = 100;
			this->label41->Text = L"30KΩ（K2）";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBoxTrial3_2w);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->textBoxTrial3_2α);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Controls->Add(this->pictureBoxTrial3_2);
			this->groupBox5->Controls->Add(this->label23);
			this->groupBox5->Controls->Add(this->label24);
			this->groupBox5->Controls->Add(this->label25);
			this->groupBox5->Controls->Add(this->label26);
			this->groupBox5->Controls->Add(this->label27);
			this->groupBox5->Controls->Add(this->label28);
			this->groupBox5->Controls->Add(this->label29);
			this->groupBox5->Controls->Add(this->label30);
			this->groupBox5->Location = System::Drawing::Point(24, 749);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(930, 701);
			this->groupBox5->TabIndex = 105;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"第二组";
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(37, 91);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(121, 29);
			this->label30->TabIndex = 100;
			this->label30->Text = L"10KΩ（K1）";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBoxTrial3_1w);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->textBoxTrial3_1α);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->pictureBoxTrial3_1);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Location = System::Drawing::Point(24, 30);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(930, 713);
			this->groupBox4->TabIndex = 104;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"第一组";
			// 
			// textBoxTrial3_1w
			// 
			this->textBoxTrial3_1w->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_1w->Location = System::Drawing::Point(197, 663);
			this->textBoxTrial3_1w->Name = L"textBoxTrial3_1w";
			this->textBoxTrial3_1w->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_1w->TabIndex = 108;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(51, 663);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 25);
			this->label9->TabIndex = 107;
			this->label9->Text = L"振荡频率ωd";
			// 
			// textBoxTrial3_1α
			// 
			this->textBoxTrial3_1α->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_1α->Location = System::Drawing::Point(197, 614);
			this->textBoxTrial3_1α->Name = L"textBoxTrial3_1α";
			this->textBoxTrial3_1α->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_1α->TabIndex = 106;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(51, 619);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 25);
			this->label10->TabIndex = 105;
			this->label10->Text = L"衰减常数α";
			// 
			// pictureBoxTrial3_1
			// 
			this->pictureBoxTrial3_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_1.Image")));
			this->pictureBoxTrial3_1->Location = System::Drawing::Point(41, 123);
			this->pictureBoxTrial3_1->Name = L"pictureBoxTrial3_1";
			this->pictureBoxTrial3_1->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_1->TabIndex = 104;
			this->pictureBoxTrial3_1->TabStop = false;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(37, 38);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(92, 29);
			this->label13->TabIndex = 96;
			this->label13->Text = L"R1";
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(549, 91);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(163, 29);
			this->label21->TabIndex = 103;
			this->label21->Text = L"1000PF（K11）";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(176, 38);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(92, 29);
			this->label14->TabIndex = 97;
			this->label14->Text = L"R2";
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(374, 91);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(132, 29);
			this->label20->TabIndex = 102;
			this->label20->Text = L"4.7mH（K15）";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(374, 38);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(92, 29);
			this->label15->TabIndex = 98;
			this->label15->Text = L"L";
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(176, 91);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(192, 29);
			this->label18->TabIndex = 101;
			this->label18->Text = L"调至某一欠阻尼态";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(549, 38);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(92, 29);
			this->label16->TabIndex = 99;
			this->label16->Text = L"C";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(37, 91);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(121, 29);
			this->label17->TabIndex = 100;
			this->label17->Text = L"10KΩ（K1）";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(75, 625);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 25);
			this->label8->TabIndex = 93;
			this->label8->Text = L"振荡频率ωd";
			// 
			// textBoxtrial2_α
			// 
			this->textBoxtrial2_α->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxtrial2_α->Location = System::Drawing::Point(215, 574);
			this->textBoxtrial2_α->Name = L"textBoxtrial2_α";
			this->textBoxtrial2_α->Size = System::Drawing::Size(284, 30);
			this->textBoxtrial2_α->TabIndex = 91;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(69, 579);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 25);
			this->label7->TabIndex = 90;
			this->label7->Text = L"衰减常数α";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(33, 40);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1100, 37);
			this->label19->TabIndex = 87;
			this->label19->Text = L"    2．调节R2使示波器荧光屏上呈现稳定的欠阻尼响应波形，定量测定此时电路的衰减常数α和振荡频率ωd 。";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(485, 1597);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 25);
			this->label4->TabIndex = 99;
			this->label4->Text = L"欠阻尼";
			// 
			// pictureBoxTrial1_3
			// 
			this->pictureBoxTrial1_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_3.Image")));
			this->pictureBoxTrial1_3->Location = System::Drawing::Point(142, 1102);
			this->pictureBoxTrial1_3->Name = L"pictureBoxTrial1_3";
			this->pictureBoxTrial1_3->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial1_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_3->TabIndex = 96;
			this->pictureBoxTrial1_3->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(455, 1057);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 25);
			this->label2->TabIndex = 94;
			this->label2->Text = L"临界阻尼";
			// 
			// textBoxtrial2_w
			// 
			this->textBoxtrial2_w->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxtrial2_w->Location = System::Drawing::Point(221, 625);
			this->textBoxtrial2_w->Name = L"textBoxtrial2_w";
			this->textBoxtrial2_w->Size = System::Drawing::Size(284, 30);
			this->textBoxtrial2_w->TabIndex = 94;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label37);
			this->groupBox1->Controls->Add(this->label52);
			this->groupBox1->Controls->Add(this->textBoxTrial2Score);
			this->groupBox1->Controls->Add(this->textBoxtrial2_w);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBoxtrial2_α);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_1);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(14, 2082);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1168, 677);
			this->groupBox1->TabIndex = 195;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容二";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->Location = System::Drawing::Point(709, 635);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(89, 20);
			this->label37->TabIndex = 184;
			this->label37->Text = L"请打分：";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->Location = System::Drawing::Point(986, 635);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(129, 20);
			this->label52->TabIndex = 183;
			this->label52->Text = L"本实验总分40";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(811, 632);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 182;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &二阶动态电路响应的研究::textBoxTrial2Score_TextChanged);
			// 
			// pictureBoxTrial2_1
			// 
			this->pictureBoxTrial2_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_1.Image")));
			this->pictureBoxTrial2_1->Location = System::Drawing::Point(72, 80);
			this->pictureBoxTrial2_1->Name = L"pictureBoxTrial2_1";
			this->pictureBoxTrial2_1->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial2_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_1->TabIndex = 89;
			this->pictureBoxTrial2_1->TabStop = false;
			// 
			// pictureBoxTrial1_2
			// 
			this->pictureBoxTrial1_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_2.Image")));
			this->pictureBoxTrial1_2->Location = System::Drawing::Point(142, 578);
			this->pictureBoxTrial1_2->Name = L"pictureBoxTrial1_2";
			this->pictureBoxTrial1_2->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial1_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_2->TabIndex = 93;
			this->pictureBoxTrial1_2->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBoxTrial1_1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBoxTrial1Score);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1_3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1_2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(14, 360);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(991, 1706);
			this->groupBox2->TabIndex = 193;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容一";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &二阶动态电路响应的研究::groupBox2_Enter);
			// 
			// pictureBoxTrial1_1
			// 
			this->pictureBoxTrial1_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_1.Image")));
			this->pictureBoxTrial1_1->Location = System::Drawing::Point(142, 53);
			this->pictureBoxTrial1_1->Name = L"pictureBoxTrial1_1";
			this->pictureBoxTrial1_1->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial1_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_1->TabIndex = 182;
			this->pictureBoxTrial1_1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(324, 1656);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 181;
			this->label1->Text = L"请打分：";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(601, 1656);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 20);
			this->label5->TabIndex = 180;
			this->label5->Text = L"本实验总分40";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(426, 1653);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 179;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &二阶动态电路响应的研究::textBoxTrial11Score_TextChanged);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(468, 539);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 25);
			this->label3->TabIndex = 90;
			this->label3->Text = L"过阻尼";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label53);
			this->groupBox3->Controls->Add(this->label结论);
			this->groupBox3->Controls->Add(this->groupBox7);
			this->groupBox3->Controls->Add(this->label64);
			this->groupBox3->Controls->Add(this->groupBox6);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->groupBox5);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->groupBox8);
			this->groupBox3->Controls->Add(this->textBoxTrial3Score);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(12, 2834);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1098, 3106);
			this->groupBox3->TabIndex = 196;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"实验内容三";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &二阶动态电路响应的研究::groupBox3_Enter);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(897, 3041);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 36);
			this->button3->TabIndex = 219;
			this->button3->Text = L"导出为图片";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究::button3_Click_1);
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->Location = System::Drawing::Point(371, 2907);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(129, 20);
			this->label53->TabIndex = 190;
			this->label53->Text = L"本实验总分40";
			// 
			// label结论
			// 
			this->label结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label结论->Location = System::Drawing::Point(120, 2942);
			this->label结论->Name = L"label结论";
			this->label结论->Size = System::Drawing::Size(885, 62);
			this->label结论->TabIndex = 218;
			this->label结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->textBoxTrial3_4w);
			this->groupBox7->Controls->Add(this->label42);
			this->groupBox7->Controls->Add(this->textBoxTrial3_4α);
			this->groupBox7->Controls->Add(this->label43);
			this->groupBox7->Controls->Add(this->pictureBoxTrial3_4);
			this->groupBox7->Controls->Add(this->label44);
			this->groupBox7->Controls->Add(this->label45);
			this->groupBox7->Controls->Add(this->label46);
			this->groupBox7->Controls->Add(this->label47);
			this->groupBox7->Controls->Add(this->label48);
			this->groupBox7->Controls->Add(this->label49);
			this->groupBox7->Controls->Add(this->label50);
			this->groupBox7->Controls->Add(this->label51);
			this->groupBox7->Location = System::Drawing::Point(24, 2193);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(930, 711);
			this->groupBox7->TabIndex = 188;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"第四组";
			// 
			// textBoxTrial3_4w
			// 
			this->textBoxTrial3_4w->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_4w->Location = System::Drawing::Point(191, 660);
			this->textBoxTrial3_4w->Name = L"textBoxTrial3_4w";
			this->textBoxTrial3_4w->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_4w->TabIndex = 108;
			// 
			// label42
			// 
			this->label42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(45, 660);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(113, 25);
			this->label42->TabIndex = 107;
			this->label42->Text = L"振荡频率ωd";
			// 
			// textBoxTrial3_4α
			// 
			this->textBoxTrial3_4α->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_4α->Location = System::Drawing::Point(191, 618);
			this->textBoxTrial3_4α->Name = L"textBoxTrial3_4α";
			this->textBoxTrial3_4α->Size = System::Drawing::Size(284, 30);
			this->textBoxTrial3_4α->TabIndex = 106;
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(45, 623);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(113, 25);
			this->label43->TabIndex = 105;
			this->label43->Text = L"衰减常数α";
			// 
			// pictureBoxTrial3_4
			// 
			this->pictureBoxTrial3_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_4.Image")));
			this->pictureBoxTrial3_4->Location = System::Drawing::Point(41, 123);
			this->pictureBoxTrial3_4->Name = L"pictureBoxTrial3_4";
			this->pictureBoxTrial3_4->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_4->TabIndex = 104;
			this->pictureBoxTrial3_4->TabStop = false;
			// 
			// label44
			// 
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(37, 38);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(92, 29);
			this->label44->TabIndex = 96;
			this->label44->Text = L"R1";
			// 
			// label45
			// 
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(549, 91);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(185, 29);
			this->label45->TabIndex = 103;
			this->label45->Text = L"0.01μF（K13）";
			// 
			// label46
			// 
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(176, 38);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(92, 29);
			this->label46->TabIndex = 97;
			this->label46->Text = L"R2";
			// 
			// label47
			// 
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(374, 91);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(132, 29);
			this->label47->TabIndex = 102;
			this->label47->Text = L"4.7mH（K15）";
			// 
			// label48
			// 
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(374, 38);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(92, 29);
			this->label48->TabIndex = 98;
			this->label48->Text = L"L";
			// 
			// label49
			// 
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(176, 91);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(192, 29);
			this->label49->TabIndex = 101;
			this->label49->Text = L"调至某一欠阻尼态";
			// 
			// label50
			// 
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(549, 38);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(92, 29);
			this->label50->TabIndex = 99;
			this->label50->Text = L"C";
			// 
			// label51
			// 
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->ForeColor = System::Drawing::Color::Black;
			this->label51->Location = System::Drawing::Point(37, 91);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(121, 29);
			this->label51->TabIndex = 100;
			this->label51->Text = L"30KΩ（K2）";
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(22, 2964);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(95, 25);
			this->label64->TabIndex = 217;
			this->label64->Text = L"实验结论";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(93, 2911);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 20);
			this->label11->TabIndex = 191;
			this->label11->Text = L"请打分：";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(779, 3040);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 213;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究::button2_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->labelTotalGrade);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->Location = System::Drawing::Point(20, 3021);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(640, 73);
			this->groupBox8->TabIndex = 211;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"二阶动态电路响应的研究";
			// 
			// labelTotalGrade
			// 
			this->labelTotalGrade->AutoSize = true;
			this->labelTotalGrade->Location = System::Drawing::Point(279, 27);
			this->labelTotalGrade->Name = L"labelTotalGrade";
			this->labelTotalGrade->Size = System::Drawing::Size(19, 20);
			this->labelTotalGrade->TabIndex = 0;
			this->labelTotalGrade->Text = L"0";
			// 
			// textBoxTrial3Score
			// 
			this->textBoxTrial3Score->Location = System::Drawing::Point(187, 2904);
			this->textBoxTrial3Score->Name = L"textBoxTrial3Score";
			this->textBoxTrial3Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial3Score->TabIndex = 189;
			this->textBoxTrial3Score->TextChanged += gcnew System::EventHandler(this, &二阶动态电路响应的研究::textBoxTrial3Score_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(672, 3040);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 212;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &二阶动态电路响应的研究::button1_Click);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->labellab);
			this->groupBox9->Controls->Add(this->labeldate);
			this->groupBox9->Controls->Add(this->labelseriesnum);
			this->groupBox9->Controls->Add(this->labelmajor);
			this->groupBox9->Controls->Add(this->labelclass);
			this->groupBox9->Controls->Add(this->labelxuehao2);
			this->groupBox9->Controls->Add(this->labelxuehao1);
			this->groupBox9->Controls->Add(this->labelstuName2);
			this->groupBox9->Controls->Add(this->labelstuName1);
			this->groupBox9->Controls->Add(this->label6);
			this->groupBox9->Controls->Add(this->label54);
			this->groupBox9->Controls->Add(this->label55);
			this->groupBox9->Controls->Add(this->labelTrialName);
			this->groupBox9->Controls->Add(this->label56);
			this->groupBox9->Controls->Add(this->label57);
			this->groupBox9->Controls->Add(this->textBoxteacher);
			this->groupBox9->Controls->Add(this->label58);
			this->groupBox9->Controls->Add(this->label59);
			this->groupBox9->Controls->Add(this->label60);
			this->groupBox9->Controls->Add(this->label61);
			this->groupBox9->Controls->Add(this->label62);
			this->groupBox9->Controls->Add(this->label63);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox9->Location = System::Drawing::Point(14, 22);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(646, 314);
			this->groupBox9->TabIndex = 219;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"学生基础信息";
			// 
			// labellab
			// 
			this->labellab->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labellab->Location = System::Drawing::Point(127, 231);
			this->labellab->Name = L"labellab";
			this->labellab->Size = System::Drawing::Size(182, 28);
			this->labellab->TabIndex = 203;
			this->labellab->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeldate
			// 
			this->labeldate->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeldate->Location = System::Drawing::Point(324, 179);
			this->labeldate->Name = L"labeldate";
			this->labeldate->Size = System::Drawing::Size(297, 28);
			this->labeldate->TabIndex = 202;
			this->labeldate->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelseriesnum
			// 
			this->labelseriesnum->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelseriesnum->Location = System::Drawing::Point(324, 146);
			this->labelseriesnum->Name = L"labelseriesnum";
			this->labelseriesnum->Size = System::Drawing::Size(297, 33);
			this->labelseriesnum->TabIndex = 201;
			this->labelseriesnum->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelmajor
			// 
			this->labelmajor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelmajor->Location = System::Drawing::Point(87, 183);
			this->labelmajor->Name = L"labelmajor";
			this->labelmajor->Size = System::Drawing::Size(144, 32);
			this->labelmajor->TabIndex = 200;
			this->labelmajor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelclass
			// 
			this->labelclass->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelclass->Location = System::Drawing::Point(87, 146);
			this->labelclass->Name = L"labelclass";
			this->labelclass->Size = System::Drawing::Size(144, 33);
			this->labelclass->TabIndex = 199;
			this->labelclass->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelxuehao2
			// 
			this->labelxuehao2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelxuehao2->Location = System::Drawing::Point(315, 97);
			this->labelxuehao2->Name = L"labelxuehao2";
			this->labelxuehao2->Size = System::Drawing::Size(144, 23);
			this->labelxuehao2->TabIndex = 198;
			this->labelxuehao2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelxuehao1
			// 
			this->labelxuehao1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelxuehao1->Location = System::Drawing::Point(315, 64);
			this->labelxuehao1->Name = L"labelxuehao1";
			this->labelxuehao1->Size = System::Drawing::Size(144, 23);
			this->labelxuehao1->TabIndex = 197;
			this->labelxuehao1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelstuName2
			// 
			this->labelstuName2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelstuName2->Location = System::Drawing::Point(87, 104);
			this->labelstuName2->Name = L"labelstuName2";
			this->labelstuName2->Size = System::Drawing::Size(144, 28);
			this->labelstuName2->TabIndex = 196;
			this->labelstuName2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelstuName1
			// 
			this->labelstuName1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelstuName1->Location = System::Drawing::Point(87, 64);
			this->labelstuName1->Name = L"labelstuName1";
			this->labelstuName1->Size = System::Drawing::Size(144, 25);
			this->labelstuName1->TabIndex = 195;
			this->labelstuName1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(21, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 20);
			this->label6->TabIndex = 172;
			this->label6->Text = L"实验名称";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::Transparent;
			this->label54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label54->Location = System::Drawing::Point(28, 150);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(51, 20);
			this->label54->TabIndex = 192;
			this->label54->Text = L"班级";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::Color::Transparent;
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->Location = System::Drawing::Point(28, 239);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(72, 20);
			this->label55->TabIndex = 183;
			this->label55->Text = L"实验室";
			// 
			// labelTrialName
			// 
			this->labelTrialName->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrialName->Location = System::Drawing::Point(133, 27);
			this->labelTrialName->Name = L"labelTrialName";
			this->labelTrialName->Size = System::Drawing::Size(290, 23);
			this->labelTrialName->TabIndex = 191;
			this->labelTrialName->Text = L"元件伏安特性的测试";
			this->labelTrialName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::Transparent;
			this->label56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label56->Location = System::Drawing::Point(28, 277);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(93, 20);
			this->label56->TabIndex = 185;
			this->label56->Text = L"指导老师";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->BackColor = System::Drawing::Color::Transparent;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->Location = System::Drawing::Point(28, 70);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(51, 20);
			this->label57->TabIndex = 173;
			this->label57->Text = L"姓名";
			// 
			// textBoxteacher
			// 
			this->textBoxteacher->Location = System::Drawing::Point(127, 272);
			this->textBoxteacher->Name = L"textBoxteacher";
			this->textBoxteacher->Size = System::Drawing::Size(184, 28);
			this->textBoxteacher->TabIndex = 186;
			this->textBoxteacher->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::Transparent;
			this->label58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label58->Location = System::Drawing::Point(28, 112);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(51, 20);
			this->label58->TabIndex = 174;
			this->label58->Text = L"姓名";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::Transparent;
			this->label59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label59->Location = System::Drawing::Point(28, 187);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(51, 20);
			this->label59->TabIndex = 181;
			this->label59->Text = L"专业";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::Transparent;
			this->label60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label60->Location = System::Drawing::Point(258, 150);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(51, 20);
			this->label60->TabIndex = 187;
			this->label60->Text = L"编号";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::Transparent;
			this->label61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label61->Location = System::Drawing::Point(258, 70);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(51, 20);
			this->label61->TabIndex = 177;
			this->label61->Text = L"学号";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::Color::Transparent;
			this->label62->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label62->Location = System::Drawing::Point(258, 100);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(51, 20);
			this->label62->TabIndex = 178;
			this->label62->Text = L"学号";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::Transparent;
			this->label63->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label63->Location = System::Drawing::Point(258, 184);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(51, 20);
			this->label63->TabIndex = 189;
			this->label63->Text = L"时间";
			// 
			// printDocument1
			// 
			this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &二阶动态电路响应的研究::printDocument1_BeginPrint);
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &二阶动态电路响应的研究::printDocument1_PrintPage);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox9);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1219, 2772);
			this->panel1->TabIndex = 220;
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
			this->printPreviewDialog1->Text = L"";
			this->printPreviewDialog1->Visible = false;
			// 
			// 二阶动态电路响应的研究
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1680, 656);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox3);
			this->Name = L"二阶动态电路响应的研究";
			this->Text = L"二阶动态电路响应的研究";
			this->Load += gcnew System::EventHandler(this, &二阶动态电路响应的研究::二阶动态电路响应的研究_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_2))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_3))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_4))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 二阶动态电路响应的研究_Load(System::Object^  sender, System::EventArgs^  e) {
	}

			 String ^SelectedArea = "";
			 void  Priview();
			 void Print();
		public:void Load一阶电路的响应测试Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();

private: System::Void textBoxTrial11Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Priview();
}
private: System::Void textBoxTrial3Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	try {
		Bitmap ^ _NewBitmap;
		if (SelectedArea == "panel1") {
			_NewBitmap = gcnew  Bitmap(panel1->Width, panel1->Height);
			panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));
			e->HasMorePages = true;
			SelectedArea = "groupBox3";
		}
		else if (SelectedArea == "groupBox3") {
			_NewBitmap = gcnew  Bitmap(groupBox3->Width, groupBox3->Height);
			groupBox3->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, groupBox3->Width, groupBox3->Height));
			e->HasMorePages = false;
		}
		int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
		int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
		e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);
	}
	catch (System::Exception^e) {
		Console::WriteLine(e->ToString());
	}
	Console::WriteLine("printDocument1_PrintPage");
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Print();
	SelectedArea = "groupBox3";
	Print();
}
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void printDocument1_BeginPrint(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
	SelectedArea = "panel1";
}

private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Process^ process = Process::GetCurrentProcess();
	long usedMemory = process->WorkingSet64;
	Console::WriteLine("当前进程所耗的内存 : " + usedMemory / 1024 + " KB");
	
	String ^DfileName = labelseriesnum->Text;
	IO::Directory::CreateDirectory(DfileName);
	Bitmap ^ _NewBitmap;
	_NewBitmap = gcnew  Bitmap(panel1->Width, panel1->Height);
	panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));
	_NewBitmap->Save(DfileName+ "\\第一页.png",System::Drawing::Imaging::ImageFormat::Png);
	_NewBitmap = gcnew  Bitmap(groupBox3->Width, groupBox3->Height);
	groupBox3->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, groupBox3->Width, groupBox3->Height));
	_NewBitmap->Save(DfileName + "\\第二页.png", System::Drawing::Imaging::ImageFormat::Png);
	MessageBox::Show("生成文件目录:"+  DfileName);
	Sleep(1000);
}
};
}
