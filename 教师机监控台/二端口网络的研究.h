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
	/// 二端口网络的研究 摘要
	/// </summary>
	public ref class 二端口网络的研究 : public System::Windows::Forms::Form
	{
	public:
		二端口网络的研究(void)
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
		~二端口网络的研究()
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








	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelTrial1_2_I22S;
	private: System::Windows::Forms::Label^  labelTrial1_2_I21S;
	private: System::Windows::Forms::Label^  labelTrial1_2_U21S;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelTrial1_2_I210;
	private: System::Windows::Forms::Label^  labelTrial1_2_U220;
	private: System::Windows::Forms::Label^  labelTrial1_2_U210;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  labelTrial1_1_U12S;
	private: System::Windows::Forms::Label^  labelTrial1_1_I11S;
	private: System::Windows::Forms::Label^  labelTrial1_1_U11S;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  labelTrial1_1_I110;
	private: System::Windows::Forms::Label^  labelTrial1_1_U120;
	private: System::Windows::Forms::Label^  labelTrial1_1_U110;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBoxTrial1Score;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TextBox^  textBoxTrial2Score;





	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  labelTrial2_1_R2S;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::Label^  labelTrial2_1_R1S;
	private: System::Windows::Forms::Label^  label104;
	private: System::Windows::Forms::Label^  labelTrial2_1_I2S;
	private: System::Windows::Forms::Label^  labelTrial2_1_U2S;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::Label^  labelTrial2_1_R20;
	private: System::Windows::Forms::Label^  labelTrial2_1_I20;
	private: System::Windows::Forms::Label^  labelTrial2_1_U20;
	private: System::Windows::Forms::Label^  label85;
	private: System::Windows::Forms::Label^  label86;
	private: System::Windows::Forms::Label^  label87;
	private: System::Windows::Forms::Label^  labelTrial2_1_I1S;
	private: System::Windows::Forms::Label^  labelTrial2_1_U1S;
	private: System::Windows::Forms::Label^  labelTrial2_1_I110;
	private: System::Windows::Forms::Label^  labelTrial2_1_I10;
	private: System::Windows::Forms::Label^  labelTrial2_1_U10;
	private: System::Windows::Forms::Label^  label93;
	private: System::Windows::Forms::Label^  label94;
	private: System::Windows::Forms::Label^  label95;
	private: System::Windows::Forms::Label^  label96;
	private: System::Windows::Forms::Label^  label97;
	private: System::Windows::Forms::Label^  label98;
	private: System::Windows::Forms::Label^  label99;
	private: System::Windows::Forms::Label^  label100;
	private: System::Windows::Forms::Label^  label101;
	private: System::Windows::Forms::Label^  label103;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  labelTrial1_2_D2;
private: System::Windows::Forms::Label^  labelTrial1_2_C2;
private: System::Windows::Forms::Label^  labelTrial1_2_B2;
private: System::Windows::Forms::Label^  labelTrial1_2_A2;
private: System::Windows::Forms::Label^  labelTrial1_1_D1;
private: System::Windows::Forms::Label^  labelTrial1_1_C1;
private: System::Windows::Forms::Label^  labelTrial1_1_B1;
private: System::Windows::Forms::Label^  labelTrial1_1_A1;
private: System::Windows::Forms::Label^  labelTrial2_1_D;
private: System::Windows::Forms::Label^  labelTrial2_1_C;
private: System::Windows::Forms::Label^  labelTrial2_1_B;
private: System::Windows::Forms::Label^  labelTrial2_1_A;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(二端口网络的研究::typeid));
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
			this->labelTrial1_2_D2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_C2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_B2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_A2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_D1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_C1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_B1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_A1 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_I22S = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_I21S = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_U21S = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_I210 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_U220 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_2_U210 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_U12S = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_I11S = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_U11S = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_I110 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_U120 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_U110 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTrial2_1_D = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_C = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_B = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_A = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_R2S = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_R1S = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_I2S = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_U2S = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_R20 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_I20 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_U20 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_I1S = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_U1S = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_I110 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_I10 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_1_U10 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox7->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(15, 18);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(646, 314);
			this->groupBox7->TabIndex = 199;
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
			this->groupBox1->Controls->Add(this->labelTrial1_2_D2);
			this->groupBox1->Controls->Add(this->labelTrial1_2_C2);
			this->groupBox1->Controls->Add(this->labelTrial1_2_B2);
			this->groupBox1->Controls->Add(this->labelTrial1_2_A2);
			this->groupBox1->Controls->Add(this->labelTrial1_1_D1);
			this->groupBox1->Controls->Add(this->labelTrial1_1_C1);
			this->groupBox1->Controls->Add(this->labelTrial1_1_B1);
			this->groupBox1->Controls->Add(this->labelTrial1_1_A1);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->textBoxTrial1Score);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->labelTrial1_2_I22S);
			this->groupBox1->Controls->Add(this->labelTrial1_2_I21S);
			this->groupBox1->Controls->Add(this->labelTrial1_2_U21S);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->labelTrial1_2_I210);
			this->groupBox1->Controls->Add(this->labelTrial1_2_U220);
			this->groupBox1->Controls->Add(this->labelTrial1_2_U210);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label44);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->label46);
			this->groupBox1->Controls->Add(this->label47);
			this->groupBox1->Controls->Add(this->label48);
			this->groupBox1->Controls->Add(this->label49);
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->label51);
			this->groupBox1->Controls->Add(this->label52);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->labelTrial1_1_U12S);
			this->groupBox1->Controls->Add(this->labelTrial1_1_I11S);
			this->groupBox1->Controls->Add(this->labelTrial1_1_U11S);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->labelTrial1_1_I110);
			this->groupBox1->Controls->Add(this->labelTrial1_1_U120);
			this->groupBox1->Controls->Add(this->labelTrial1_1_U110);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(15, 350);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 900);
			this->groupBox1->TabIndex = 200;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容一";
			// 
			// labelTrial1_2_D2
			// 
			this->labelTrial1_2_D2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_D2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_D2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_D2->Location = System::Drawing::Point(924, 684);
			this->labelTrial1_2_D2->Name = L"labelTrial1_2_D2";
			this->labelTrial1_2_D2->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_D2->TabIndex = 221;
			// 
			// labelTrial1_2_C2
			// 
			this->labelTrial1_2_C2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_C2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_C2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_C2->Location = System::Drawing::Point(719, 687);
			this->labelTrial1_2_C2->Name = L"labelTrial1_2_C2";
			this->labelTrial1_2_C2->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_C2->TabIndex = 220;
			// 
			// labelTrial1_2_B2
			// 
			this->labelTrial1_2_B2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_B2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_B2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_B2->Location = System::Drawing::Point(923, 561);
			this->labelTrial1_2_B2->Name = L"labelTrial1_2_B2";
			this->labelTrial1_2_B2->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_B2->TabIndex = 219;
			// 
			// labelTrial1_2_A2
			// 
			this->labelTrial1_2_A2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_A2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_A2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_A2->Location = System::Drawing::Point(721, 561);
			this->labelTrial1_2_A2->Name = L"labelTrial1_2_A2";
			this->labelTrial1_2_A2->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_A2->TabIndex = 218;
			// 
			// labelTrial1_1_D1
			// 
			this->labelTrial1_1_D1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_D1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_D1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_D1->Location = System::Drawing::Point(937, 369);
			this->labelTrial1_1_D1->Name = L"labelTrial1_1_D1";
			this->labelTrial1_1_D1->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_D1->TabIndex = 217;
			// 
			// labelTrial1_1_C1
			// 
			this->labelTrial1_1_C1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_C1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_C1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_C1->Location = System::Drawing::Point(734, 369);
			this->labelTrial1_1_C1->Name = L"labelTrial1_1_C1";
			this->labelTrial1_1_C1->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_C1->TabIndex = 216;
			// 
			// labelTrial1_1_B1
			// 
			this->labelTrial1_1_B1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_B1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_B1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_B1->Location = System::Drawing::Point(937, 239);
			this->labelTrial1_1_B1->Name = L"labelTrial1_1_B1";
			this->labelTrial1_1_B1->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_B1->TabIndex = 215;
			// 
			// labelTrial1_1_A1
			// 
			this->labelTrial1_1_A1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_A1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_A1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_A1->Location = System::Drawing::Point(734, 239);
			this->labelTrial1_1_A1->Name = L"labelTrial1_1_A1";
			this->labelTrial1_1_A1->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_A1->TabIndex = 214;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(367, 844);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 20);
			this->label16->TabIndex = 213;
			this->label16->Text = L"请打分：";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(644, 844);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(129, 20);
			this->label20->TabIndex = 212;
			this->label20->Text = L"本项目总分60";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(469, 841);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 211;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &二端口网络的研究::textBoxTrial1Score_TextChanged);
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(923, 622);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(33, 29);
			this->label29->TabIndex = 50;
			this->label29->Text = L"D2";
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(720, 622);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 29);
			this->label1->TabIndex = 49;
			this->label1->Text = L"C2";
			// 
			// labelTrial1_2_I22S
			// 
			this->labelTrial1_2_I22S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_I22S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_I22S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_I22S->Location = System::Drawing::Point(520, 688);
			this->labelTrial1_2_I22S->Name = L"labelTrial1_2_I22S";
			this->labelTrial1_2_I22S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_I22S->TabIndex = 48;
			// 
			// labelTrial1_2_I21S
			// 
			this->labelTrial1_2_I21S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_I21S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_I21S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_I21S->Location = System::Drawing::Point(370, 688);
			this->labelTrial1_2_I21S->Name = L"labelTrial1_2_I21S";
			this->labelTrial1_2_I21S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_I21S->TabIndex = 47;
			// 
			// labelTrial1_2_U21S
			// 
			this->labelTrial1_2_U21S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_U21S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_U21S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_U21S->Location = System::Drawing::Point(250, 688);
			this->labelTrial1_2_U21S->Name = L"labelTrial1_2_U21S";
			this->labelTrial1_2_U21S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_U21S->TabIndex = 46;
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(520, 622);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(117, 29);
			this->label34->TabIndex = 45;
			this->label34->Text = L"I22S（mA）";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(370, 622);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 29);
			this->label2->TabIndex = 44;
			this->label2->Text = L"I21S（mA）";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(250, 622);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 29);
			this->label3->TabIndex = 43;
			this->label3->Text = L"U21S（V）";
			// 
			// labelTrial1_2_I210
			// 
			this->labelTrial1_2_I210->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_I210->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_I210->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_I210->Location = System::Drawing::Point(521, 561);
			this->labelTrial1_2_I210->Name = L"labelTrial1_2_I210";
			this->labelTrial1_2_I210->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_I210->TabIndex = 40;
			// 
			// labelTrial1_2_U220
			// 
			this->labelTrial1_2_U220->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_U220->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_U220->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_U220->Location = System::Drawing::Point(371, 561);
			this->labelTrial1_2_U220->Name = L"labelTrial1_2_U220";
			this->labelTrial1_2_U220->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_U220->TabIndex = 39;
			// 
			// labelTrial1_2_U210
			// 
			this->labelTrial1_2_U210->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_2_U210->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_2_U210->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_2_U210->Location = System::Drawing::Point(251, 561);
			this->labelTrial1_2_U210->Name = L"labelTrial1_2_U210";
			this->labelTrial1_2_U210->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_2_U210->TabIndex = 38;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(924, 516);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 29);
			this->label4->TabIndex = 37;
			this->label4->Text = L"B2";
			// 
			// label44
			// 
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(721, 516);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(33, 29);
			this->label44->TabIndex = 36;
			this->label44->Text = L"A2";
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(521, 516);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(117, 29);
			this->label45->TabIndex = 35;
			this->label45->Text = L"I21O（mA）";
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(371, 516);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(105, 29);
			this->label46->TabIndex = 34;
			this->label46->Text = L"U22O（V）";
			// 
			// label47
			// 
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(251, 516);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(105, 29);
			this->label47->TabIndex = 33;
			this->label47->Text = L"U21O（V）";
			// 
			// label48
			// 
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(818, 478);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(94, 29);
			this->label48->TabIndex = 32;
			this->label48->Text = L"计 算 值";
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(395, 478);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(94, 29);
			this->label49->TabIndex = 31;
			this->label49->Text = L"测 量 值";
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(90, 644);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(130, 50);
			this->label50->TabIndex = 30;
			this->label50->Text = L"输出端短路\r\nU22=0";
			// 
			// label51
			// 
			this->label51->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->ForeColor = System::Drawing::Color::Black;
			this->label51->Location = System::Drawing::Point(91, 540);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(130, 50);
			this->label51->TabIndex = 29;
			this->label51->Text = L"输出端开路\r\nI22=0";
			// 
			// label52
			// 
			this->label52->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->ForeColor = System::Drawing::Color::Black;
			this->label52->Location = System::Drawing::Point(53, 572);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(34, 110);
			this->label52->TabIndex = 28;
			this->label52->Text = L"双\r\n口\r\n网络\r\nⅡ";
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(937, 303);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(33, 29);
			this->label23->TabIndex = 25;
			this->label23->Text = L"D1";
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(734, 303);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(33, 29);
			this->label24->TabIndex = 24;
			this->label24->Text = L"C1";
			// 
			// labelTrial1_1_U12S
			// 
			this->labelTrial1_1_U12S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_U12S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_U12S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_U12S->Location = System::Drawing::Point(534, 369);
			this->labelTrial1_1_U12S->Name = L"labelTrial1_1_U12S";
			this->labelTrial1_1_U12S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_U12S->TabIndex = 23;
			// 
			// labelTrial1_1_I11S
			// 
			this->labelTrial1_1_I11S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_I11S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_I11S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_I11S->Location = System::Drawing::Point(384, 369);
			this->labelTrial1_1_I11S->Name = L"labelTrial1_1_I11S";
			this->labelTrial1_1_I11S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_I11S->TabIndex = 22;
			// 
			// labelTrial1_1_U11S
			// 
			this->labelTrial1_1_U11S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_U11S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_U11S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_U11S->Location = System::Drawing::Point(264, 369);
			this->labelTrial1_1_U11S->Name = L"labelTrial1_1_U11S";
			this->labelTrial1_1_U11S->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_U11S->TabIndex = 21;
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(534, 303);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(117, 29);
			this->label17->TabIndex = 20;
			this->label17->Text = L"I12S（mA）";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(384, 303);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(118, 29);
			this->label18->TabIndex = 19;
			this->label18->Text = L"I11S（mA）";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(264, 303);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(105, 29);
			this->label19->TabIndex = 18;
			this->label19->Text = L"U11S（V）";
			// 
			// labelTrial1_1_I110
			// 
			this->labelTrial1_1_I110->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_I110->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_I110->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_I110->Location = System::Drawing::Point(534, 239);
			this->labelTrial1_1_I110->Name = L"labelTrial1_1_I110";
			this->labelTrial1_1_I110->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_I110->TabIndex = 15;
			// 
			// labelTrial1_1_U120
			// 
			this->labelTrial1_1_U120->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_U120->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_U120->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_U120->Location = System::Drawing::Point(384, 239);
			this->labelTrial1_1_U120->Name = L"labelTrial1_1_U120";
			this->labelTrial1_1_U120->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_U120->TabIndex = 14;
			// 
			// labelTrial1_1_U110
			// 
			this->labelTrial1_1_U110->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_U110->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_U110->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_U110->Location = System::Drawing::Point(264, 239);
			this->labelTrial1_1_U110->Name = L"labelTrial1_1_U110";
			this->labelTrial1_1_U110->Size = System::Drawing::Size(105, 29);
			this->labelTrial1_1_U110->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(937, 194);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 29);
			this->label11->TabIndex = 12;
			this->label11->Text = L"B1";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(734, 194);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 29);
			this->label10->TabIndex = 11;
			this->label10->Text = L"A1";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(534, 194);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 29);
			this->label9->TabIndex = 10;
			this->label9->Text = L"I11O（mA）";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(384, 194);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 29);
			this->label8->TabIndex = 9;
			this->label8->Text = L"U12O（V）";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(264, 194);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 29);
			this->label7->TabIndex = 8;
			this->label7->Text = L"U11O（V）";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(831, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 29);
			this->label6->TabIndex = 7;
			this->label6->Text = L"计 算 值";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(408, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 29);
			this->label5->TabIndex = 6;
			this->label5->Text = L"测 量 值";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(104, 348);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 50);
			this->label12->TabIndex = 5;
			this->label12->Text = L"输出端短路\r\nU12=0";
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(104, 218);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 50);
			this->label13->TabIndex = 4;
			this->label13->Text = L"输出端开路\r\nI12=0";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(64, 268);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 110);
			this->label14->TabIndex = 3;
			this->label14->Text = L"双\r\n口\r\n网络\r\nⅠ";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(24, 69);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(1174, 36);
			this->label15->TabIndex = 0;
			this->label15->Text = L"    1．按同时测量法分别测定两个双口网络的传输参数A1、B1、C1、D1和A2、B2、C2、D2，并列出它们的传输方程。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelTrial2_1_D);
			this->groupBox2->Controls->Add(this->labelTrial2_1_C);
			this->groupBox2->Controls->Add(this->labelTrial2_1_B);
			this->groupBox2->Controls->Add(this->labelTrial2_1_A);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->textBoxTrial2Score);
			this->groupBox2->Controls->Add(this->label59);
			this->groupBox2->Controls->Add(this->label61);
			this->groupBox2->Controls->Add(this->label57);
			this->groupBox2->Controls->Add(this->label55);
			this->groupBox2->Controls->Add(this->label53);
			this->groupBox2->Controls->Add(this->labelTrial2_1_R2S);
			this->groupBox2->Controls->Add(this->label106);
			this->groupBox2->Controls->Add(this->labelTrial2_1_R1S);
			this->groupBox2->Controls->Add(this->label104);
			this->groupBox2->Controls->Add(this->labelTrial2_1_I2S);
			this->groupBox2->Controls->Add(this->labelTrial2_1_U2S);
			this->groupBox2->Controls->Add(this->label80);
			this->groupBox2->Controls->Add(this->label81);
			this->groupBox2->Controls->Add(this->labelTrial2_1_R20);
			this->groupBox2->Controls->Add(this->labelTrial2_1_I20);
			this->groupBox2->Controls->Add(this->labelTrial2_1_U20);
			this->groupBox2->Controls->Add(this->label85);
			this->groupBox2->Controls->Add(this->label86);
			this->groupBox2->Controls->Add(this->label87);
			this->groupBox2->Controls->Add(this->labelTrial2_1_I1S);
			this->groupBox2->Controls->Add(this->labelTrial2_1_U1S);
			this->groupBox2->Controls->Add(this->labelTrial2_1_I110);
			this->groupBox2->Controls->Add(this->labelTrial2_1_I10);
			this->groupBox2->Controls->Add(this->labelTrial2_1_U10);
			this->groupBox2->Controls->Add(this->label93);
			this->groupBox2->Controls->Add(this->label94);
			this->groupBox2->Controls->Add(this->label95);
			this->groupBox2->Controls->Add(this->label96);
			this->groupBox2->Controls->Add(this->label97);
			this->groupBox2->Controls->Add(this->label98);
			this->groupBox2->Controls->Add(this->label99);
			this->groupBox2->Controls->Add(this->label100);
			this->groupBox2->Controls->Add(this->label101);
			this->groupBox2->Controls->Add(this->label103);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(11, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 664);
			this->groupBox2->TabIndex = 201;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容二";
			// 
			// labelTrial2_1_D
			// 
			this->labelTrial2_1_D->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_D->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_D->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_D->Location = System::Drawing::Point(720, 541);
			this->labelTrial2_1_D->Name = L"labelTrial2_1_D";
			this->labelTrial2_1_D->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_D->TabIndex = 225;
			// 
			// labelTrial2_1_C
			// 
			this->labelTrial2_1_C->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_C->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_C->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_C->Location = System::Drawing::Point(358, 541);
			this->labelTrial2_1_C->Name = L"labelTrial2_1_C";
			this->labelTrial2_1_C->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_C->TabIndex = 224;
			// 
			// labelTrial2_1_B
			// 
			this->labelTrial2_1_B->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_B->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_B->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_B->Location = System::Drawing::Point(720, 485);
			this->labelTrial2_1_B->Name = L"labelTrial2_1_B";
			this->labelTrial2_1_B->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_B->TabIndex = 223;
			// 
			// labelTrial2_1_A
			// 
			this->labelTrial2_1_A->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_A->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_A->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_A->Location = System::Drawing::Point(358, 486);
			this->labelTrial2_1_A->Name = L"labelTrial2_1_A";
			this->labelTrial2_1_A->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_A->TabIndex = 222;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(280, 623);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(89, 20);
			this->label21->TabIndex = 216;
			this->label21->Text = L"请打分：";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(557, 623);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(129, 20);
			this->label22->TabIndex = 215;
			this->label22->Text = L"本项目总分40";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(382, 620);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 214;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &二端口网络的研究::textBoxTrial2Score_TextChanged);
			// 
			// label59
			// 
			this->label59->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(628, 539);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(68, 29);
			this->label59->TabIndex = 64;
			this->label59->Text = L"D=";
			// 
			// label61
			// 
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label61->ForeColor = System::Drawing::Color::Black;
			this->label61->Location = System::Drawing::Point(266, 539);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(68, 29);
			this->label61->TabIndex = 62;
			this->label61->Text = L"C=";
			// 
			// label57
			// 
			this->label57->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->ForeColor = System::Drawing::Color::Black;
			this->label57->Location = System::Drawing::Point(628, 485);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(68, 29);
			this->label57->TabIndex = 60;
			this->label57->Text = L"B=";
			// 
			// label55
			// 
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->ForeColor = System::Drawing::Color::Black;
			this->label55->Location = System::Drawing::Point(266, 485);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(68, 29);
			this->label55->TabIndex = 58;
			this->label55->Text = L"A=";
			// 
			// label53
			// 
			this->label53->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->ForeColor = System::Drawing::Color::Black;
			this->label53->Location = System::Drawing::Point(458, 430);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(163, 29);
			this->label53->TabIndex = 57;
			this->label53->Text = L"计 算 值";
			// 
			// labelTrial2_1_R2S
			// 
			this->labelTrial2_1_R2S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_R2S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_R2S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_R2S->Location = System::Drawing::Point(992, 372);
			this->labelTrial2_1_R2S->Name = L"labelTrial2_1_R2S";
			this->labelTrial2_1_R2S->Size = System::Drawing::Size(105, 26);
			this->labelTrial2_1_R2S->TabIndex = 56;
			// 
			// label106
			// 
			this->label106->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->ForeColor = System::Drawing::Color::Black;
			this->label106->Location = System::Drawing::Point(994, 329);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(105, 29);
			this->label106->TabIndex = 55;
			this->label106->Text = L"R2S(KΩ)";
			// 
			// labelTrial2_1_R1S
			// 
			this->labelTrial2_1_R1S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_R1S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_R1S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_R1S->Location = System::Drawing::Point(994, 239);
			this->labelTrial2_1_R1S->Name = L"labelTrial2_1_R1S";
			this->labelTrial2_1_R1S->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_R1S->TabIndex = 54;
			// 
			// label104
			// 
			this->label104->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label104->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label104->ForeColor = System::Drawing::Color::Black;
			this->label104->Location = System::Drawing::Point(994, 194);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(105, 29);
			this->label104->TabIndex = 53;
			this->label104->Text = L"R1S(KΩ)";
			// 
			// labelTrial2_1_I2S
			// 
			this->labelTrial2_1_I2S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_I2S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_I2S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_I2S->Location = System::Drawing::Point(863, 372);
			this->labelTrial2_1_I2S->Name = L"labelTrial2_1_I2S";
			this->labelTrial2_1_I2S->Size = System::Drawing::Size(105, 26);
			this->labelTrial2_1_I2S->TabIndex = 27;
			// 
			// labelTrial2_1_U2S
			// 
			this->labelTrial2_1_U2S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_U2S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_U2S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_U2S->Location = System::Drawing::Point(732, 372);
			this->labelTrial2_1_U2S->Name = L"labelTrial2_1_U2S";
			this->labelTrial2_1_U2S->Size = System::Drawing::Size(105, 26);
			this->labelTrial2_1_U2S->TabIndex = 26;
			// 
			// label80
			// 
			this->label80->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label80->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label80->ForeColor = System::Drawing::Color::Black;
			this->label80->Location = System::Drawing::Point(865, 329);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(105, 29);
			this->label80->TabIndex = 25;
			this->label80->Text = L"I2S（mA）";
			// 
			// label81
			// 
			this->label81->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label81->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label81->ForeColor = System::Drawing::Color::Black;
			this->label81->Location = System::Drawing::Point(734, 329);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(105, 29);
			this->label81->TabIndex = 24;
			this->label81->Text = L"U2S（V）";
			// 
			// labelTrial2_1_R20
			// 
			this->labelTrial2_1_R20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_R20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_R20->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_R20->Location = System::Drawing::Point(532, 372);
			this->labelTrial2_1_R20->Name = L"labelTrial2_1_R20";
			this->labelTrial2_1_R20->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_R20->TabIndex = 23;
			// 
			// labelTrial2_1_I20
			// 
			this->labelTrial2_1_I20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_I20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_I20->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_I20->Location = System::Drawing::Point(382, 372);
			this->labelTrial2_1_I20->Name = L"labelTrial2_1_I20";
			this->labelTrial2_1_I20->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_I20->TabIndex = 22;
			// 
			// labelTrial2_1_U20
			// 
			this->labelTrial2_1_U20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_U20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_U20->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_U20->Location = System::Drawing::Point(262, 372);
			this->labelTrial2_1_U20->Name = L"labelTrial2_1_U20";
			this->labelTrial2_1_U20->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_U20->TabIndex = 21;
			// 
			// label85
			// 
			this->label85->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label85->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label85->ForeColor = System::Drawing::Color::Black;
			this->label85->Location = System::Drawing::Point(534, 329);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(117, 29);
			this->label85->TabIndex = 20;
			this->label85->Text = L"R2O(KΩ)";
			// 
			// label86
			// 
			this->label86->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label86->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label86->ForeColor = System::Drawing::Color::Black;
			this->label86->Location = System::Drawing::Point(384, 329);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(118, 29);
			this->label86->TabIndex = 19;
			this->label86->Text = L"I2O（mA）";
			// 
			// label87
			// 
			this->label87->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label87->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label87->ForeColor = System::Drawing::Color::Black;
			this->label87->Location = System::Drawing::Point(264, 329);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(105, 29);
			this->label87->TabIndex = 18;
			this->label87->Text = L"U2O（V）";
			// 
			// labelTrial2_1_I1S
			// 
			this->labelTrial2_1_I1S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_I1S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_I1S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_I1S->Location = System::Drawing::Point(865, 239);
			this->labelTrial2_1_I1S->Name = L"labelTrial2_1_I1S";
			this->labelTrial2_1_I1S->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_I1S->TabIndex = 17;
			// 
			// labelTrial2_1_U1S
			// 
			this->labelTrial2_1_U1S->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_U1S->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_U1S->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_U1S->Location = System::Drawing::Point(734, 239);
			this->labelTrial2_1_U1S->Name = L"labelTrial2_1_U1S";
			this->labelTrial2_1_U1S->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_U1S->TabIndex = 16;
			// 
			// labelTrial2_1_I110
			// 
			this->labelTrial2_1_I110->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_I110->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_I110->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_I110->Location = System::Drawing::Point(534, 239);
			this->labelTrial2_1_I110->Name = L"labelTrial2_1_I110";
			this->labelTrial2_1_I110->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_I110->TabIndex = 15;
			// 
			// labelTrial2_1_I10
			// 
			this->labelTrial2_1_I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_I10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_I10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_I10->Location = System::Drawing::Point(384, 239);
			this->labelTrial2_1_I10->Name = L"labelTrial2_1_I10";
			this->labelTrial2_1_I10->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_I10->TabIndex = 14;
			// 
			// labelTrial2_1_U10
			// 
			this->labelTrial2_1_U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_1_U10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_1_U10->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_1_U10->Location = System::Drawing::Point(264, 239);
			this->labelTrial2_1_U10->Name = L"labelTrial2_1_U10";
			this->labelTrial2_1_U10->Size = System::Drawing::Size(105, 29);
			this->labelTrial2_1_U10->TabIndex = 13;
			// 
			// label93
			// 
			this->label93->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label93->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label93->ForeColor = System::Drawing::Color::Black;
			this->label93->Location = System::Drawing::Point(865, 194);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(105, 29);
			this->label93->TabIndex = 12;
			this->label93->Text = L"I1S（mA）";
			// 
			// label94
			// 
			this->label94->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label94->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label94->ForeColor = System::Drawing::Color::Black;
			this->label94->Location = System::Drawing::Point(734, 194);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(94, 29);
			this->label94->TabIndex = 11;
			this->label94->Text = L"U1S（V）";
			// 
			// label95
			// 
			this->label95->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label95->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label95->ForeColor = System::Drawing::Color::Black;
			this->label95->Location = System::Drawing::Point(534, 194);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(117, 29);
			this->label95->TabIndex = 10;
			this->label95->Text = L"I11O（mA）";
			// 
			// label96
			// 
			this->label96->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label96->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label96->ForeColor = System::Drawing::Color::Black;
			this->label96->Location = System::Drawing::Point(384, 194);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(105, 29);
			this->label96->TabIndex = 9;
			this->label96->Text = L"I1O（mA）";
			// 
			// label97
			// 
			this->label97->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label97->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label97->ForeColor = System::Drawing::Color::Black;
			this->label97->Location = System::Drawing::Point(264, 194);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(105, 29);
			this->label97->TabIndex = 8;
			this->label97->Text = L"U1O（V）";
			// 
			// label98
			// 
			this->label98->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label98->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label98->ForeColor = System::Drawing::Color::Black;
			this->label98->Location = System::Drawing::Point(831, 156);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(160, 29);
			this->label98->TabIndex = 7;
			this->label98->Text = L"输出端短路U2=0";
			// 
			// label99
			// 
			this->label99->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label99->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label99->ForeColor = System::Drawing::Color::Black;
			this->label99->Location = System::Drawing::Point(358, 156);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(153, 29);
			this->label99->TabIndex = 6;
			this->label99->Text = L"输出端开路I2=0";
			// 
			// label100
			// 
			this->label100->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label100->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label100->ForeColor = System::Drawing::Color::Black;
			this->label100->Location = System::Drawing::Point(358, 278);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(153, 30);
			this->label100->TabIndex = 5;
			this->label100->Text = L"输入端开路I1=0";
			// 
			// label101
			// 
			this->label101->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label101->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label101->ForeColor = System::Drawing::Color::Black;
			this->label101->Location = System::Drawing::Point(831, 278);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(160, 30);
			this->label101->TabIndex = 4;
			this->label101->Text = L"输入端短路U1=0";
			// 
			// label103
			// 
			this->label103->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label103->ForeColor = System::Drawing::Color::Black;
			this->label103->Location = System::Drawing::Point(24, 69);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(1174, 57);
			this->label103->TabIndex = 0;
			this->label103->Text = L"    2．将两个双口网络级联后，用两端口分别测量法测量级联后等效双口网络的传输参数A、B、C、D，并验证等效双口网络传输参数与级联的两个双口网络传输参数之间的关"
				L"系。";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &二端口网络的研究::printDocument1_PrintPage);
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
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Location = System::Drawing::Point(18, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1357, 1266);
			this->panel1->TabIndex = 331;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->groupBox14);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Location = System::Drawing::Point(18, 1302);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1357, 787);
			this->panel2->TabIndex = 332;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(15, 702);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(640, 73);
			this->groupBox14->TabIndex = 331;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"二端口网络的研究实验总分";
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1090, 728);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 334;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(977, 728);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 333;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &二端口网络的研究::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(870, 728);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 332;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &二端口网络的研究::button1_Click);
			// 
			// 二端口网络的研究
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1588, 682);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"二端口网络的研究";
			this->Text = L"二端口网络的研究";
			this->Load += gcnew System::EventHandler(this, &二端口网络的研究::二端口网络的研究_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		SelectedArea = "panel1";
		Priview();
		SelectedArea = "panel2";
		Priview();
	}
			 String ^SelectedArea = "";
			 void  Priview();
			 void Print();
		public:void Load二端口网络的研究Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
private: System::Void 二端口网络的研究_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Bitmap ^ _NewBitmap;
	if (SelectedArea == "panel1") {
		_NewBitmap = gcnew  Bitmap(panel1->Width, panel1->Height);
		panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));
	}
	else {
		_NewBitmap = gcnew  Bitmap(panel2->Width, panel2->Height);
		panel2->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel2->Width, panel2->Height));
	}
	int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
	int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
	e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);


}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
private: System::Void textBoxTrial1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
};
}
