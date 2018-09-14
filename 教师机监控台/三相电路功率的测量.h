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
	/// 三相电路功率的测量 摘要
	/// </summary>
	public ref class 三相电路功率的测量 : public System::Windows::Forms::Form
	{
	public:
		三相电路功率的测量(void)
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
		~三相电路功率的测量()
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
	private: System::Windows::Forms::Label^  labelTrial1_PC_2;
	private: System::Windows::Forms::Label^  labelTrial1_PB_2;
	private: System::Windows::Forms::Label^  labelTrial1_PA_2;
	private: System::Windows::Forms::Label^  labelTrial1_PC_1;
	private: System::Windows::Forms::Label^  labelTrial1_PB_1;
	private: System::Windows::Forms::Label^  labelTrial1_PA_1;

	private: System::Windows::Forms::Label^  label22;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_WW;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_calW;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_meaW;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_cal_N;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  labelTrial2_P2_4;
	private: System::Windows::Forms::Label^  labelTrial2_P1_4;
	private: System::Windows::Forms::Label^  labelTrial2_P2_3;
	private: System::Windows::Forms::Label^  labelTrial2_P1_3;


	private: System::Windows::Forms::Label^  labelTrial2_P2_2;
	private: System::Windows::Forms::Label^  labelTrial2_P1_2;
	private: System::Windows::Forms::Label^  labelTrial2_P2_1;
	private: System::Windows::Forms::Label^  labelTrial2_P1_1;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;

	private: System::Windows::Forms::Label^  label14;

	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  labelTrial3_Q_3;
	private: System::Windows::Forms::Label^  labelTrial3_Q_2;
	private: System::Windows::Forms::Label^  labelTrial3_Q_1;
	private: System::Windows::Forms::Label^  label95;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  labelTrial3_I_3;
	private: System::Windows::Forms::Label^  labelTrial3_U_3;

	private: System::Windows::Forms::Label^  labelTrial3_I_2;
	private: System::Windows::Forms::Label^  labelTrial3_U_2;
	private: System::Windows::Forms::Label^  labelTrial3_I_1;
	private: System::Windows::Forms::Label^  labelTrial3_U_1;
	private: System::Windows::Forms::Label^  label99;

	private: System::Windows::Forms::Label^  label102;

	private: System::Windows::Forms::Label^  label103;
	private: System::Windows::Forms::Label^  label104;
	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label116;
	private: System::Windows::Forms::Label^  label117;
	private: System::Windows::Forms::Label^  label118;
	private: System::Windows::Forms::Label^  label119;
	private: System::Windows::Forms::Label^  label120;
	private: System::Windows::Forms::Label^  label121;
	private: System::Windows::Forms::Label^  label122;
	private: System::Windows::Forms::Label^  label123;
	private: System::Windows::Forms::Label^  label124;
	private: System::Windows::Forms::Label^  label126;
	private: System::Windows::Forms::Label^  label127;
	private: System::Windows::Forms::Label^  label128;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::TextBox^  textBoxTrial1Score;

private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::TextBox^  textBoxTrial2Score;

private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::TextBox^  textBoxTrial3Score;

private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Label^  textBoxTrial1_P_2;
private: System::Windows::Forms::Label^  textBoxTrial1_P_1;
private: System::Windows::Forms::Label^  textBoxTrial2_P_4;
private: System::Windows::Forms::Label^  textBoxTrial2_P_3;
private: System::Windows::Forms::Label^  textBoxTrial2_P_2;
private: System::Windows::Forms::Label^  textBoxTrial2_P_1;
private: System::Windows::Forms::Label^  textBoxTrial3_QQ_3;
private: System::Windows::Forms::Label^  textBoxTrial3_QQ_2;
private: System::Windows::Forms::Label^  textBoxTrial3_QQ_1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(三相电路功率的测量::typeid));
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
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_PC_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PB_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PA_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PC_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PB_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PA_1 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_cal_WW = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_cal_calW = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_cal_meaW = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_cal_N = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_P2_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P2_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P2_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P1_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P2_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P1_1 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3Score = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_Q_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Q_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Q_1 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->labelTrial3_I_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_I_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U_1 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBoxTrial1_P_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_P_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_P_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_P_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_P_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_P_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_QQ_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_QQ_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_QQ_1 = (gcnew System::Windows::Forms::Label());
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
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
			this->groupBox7->Location = System::Drawing::Point(12, 15);
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
			this->groupBox8->Controls->Add(this->textBoxTrial1_P_2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_P_1);
			this->groupBox8->Controls->Add(this->label77);
			this->groupBox8->Controls->Add(this->label78);
			this->groupBox8->Controls->Add(this->textBoxTrial1Score);
			this->groupBox8->Controls->Add(this->labelTrial1_PC_2);
			this->groupBox8->Controls->Add(this->labelTrial1_PB_2);
			this->groupBox8->Controls->Add(this->labelTrial1_PA_2);
			this->groupBox8->Controls->Add(this->labelTrial1_PC_1);
			this->groupBox8->Controls->Add(this->labelTrial1_PB_1);
			this->groupBox8->Controls->Add(this->labelTrial1_PA_1);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_WW);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_calW);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_meaW);
			this->groupBox8->Controls->Add(this->textBoxTrial1_cal_N);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label26);
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->label32);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->label34);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->label24);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 350);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1215, 295);
			this->groupBox8->TabIndex = 203;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"三相电路功率的测量  实验内容1";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label77->Location = System::Drawing::Point(267, 262);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(89, 20);
			this->label77->TabIndex = 222;
			this->label77->Text = L"请打分：";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label78->Location = System::Drawing::Point(544, 262);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(129, 20);
			this->label78->TabIndex = 221;
			this->label78->Text = L"本项目总分30";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(369, 259);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 220;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &三相电路功率的测量::textBoxTrial1Score_TextChanged);
			// 
			// labelTrial1_PC_2
			// 
			this->labelTrial1_PC_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PC_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PC_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PC_2->Location = System::Drawing::Point(650, 194);
			this->labelTrial1_PC_2->Name = L"labelTrial1_PC_2";
			this->labelTrial1_PC_2->Size = System::Drawing::Size(80, 30);
			this->labelTrial1_PC_2->TabIndex = 92;
			// 
			// labelTrial1_PB_2
			// 
			this->labelTrial1_PB_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PB_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PB_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PB_2->Location = System::Drawing::Point(550, 194);
			this->labelTrial1_PB_2->Name = L"labelTrial1_PB_2";
			this->labelTrial1_PB_2->Size = System::Drawing::Size(80, 30);
			this->labelTrial1_PB_2->TabIndex = 91;
			// 
			// labelTrial1_PA_2
			// 
			this->labelTrial1_PA_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PA_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PA_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PA_2->Location = System::Drawing::Point(449, 195);
			this->labelTrial1_PA_2->Name = L"labelTrial1_PA_2";
			this->labelTrial1_PA_2->Size = System::Drawing::Size(80, 30);
			this->labelTrial1_PA_2->TabIndex = 90;
			// 
			// labelTrial1_PC_1
			// 
			this->labelTrial1_PC_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PC_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PC_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PC_1->Location = System::Drawing::Point(650, 150);
			this->labelTrial1_PC_1->Name = L"labelTrial1_PC_1";
			this->labelTrial1_PC_1->Size = System::Drawing::Size(80, 30);
			this->labelTrial1_PC_1->TabIndex = 89;
			// 
			// labelTrial1_PB_1
			// 
			this->labelTrial1_PB_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PB_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PB_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PB_1->Location = System::Drawing::Point(550, 150);
			this->labelTrial1_PB_1->Name = L"labelTrial1_PB_1";
			this->labelTrial1_PB_1->Size = System::Drawing::Size(80, 30);
			this->labelTrial1_PB_1->TabIndex = 88;
			// 
			// labelTrial1_PA_1
			// 
			this->labelTrial1_PA_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PA_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_PA_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PA_1->Location = System::Drawing::Point(449, 151);
			this->labelTrial1_PA_1->Name = L"labelTrial1_PA_1";
			this->labelTrial1_PA_1->Size = System::Drawing::Size(80, 30);
			this->labelTrial1_PA_1->TabIndex = 87;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(776, 97);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(110, 27);
			this->label22->TabIndex = 72;
			this->label22->Text = L"∑P（W）";
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(650, 97);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(83, 27);
			this->label21->TabIndex = 69;
			this->label21->Text = L"PC（W）";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(550, 97);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(83, 27);
			this->label20->TabIndex = 66;
			this->label20->Text = L"PB（W）";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(449, 97);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(83, 27);
			this->label18->TabIndex = 63;
			this->label18->Text = L"PA（W）";
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(452, 46);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(284, 27);
			this->label17->TabIndex = 62;
			this->label17->Text = L"测量数据";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(366, 198);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 27);
			this->label12->TabIndex = 61;
			this->label12->Text = L"3";
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(309, 198);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 27);
			this->label13->TabIndex = 60;
			this->label13->Text = L"2";
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(252, 198);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 27);
			this->label16->TabIndex = 59;
			this->label16->Text = L"1";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(366, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 27);
			this->label8->TabIndex = 58;
			this->label8->Text = L"3";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(309, 153);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 27);
			this->label9->TabIndex = 57;
			this->label9->Text = L"3";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(252, 153);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 27);
			this->label11->TabIndex = 56;
			this->label11->Text = L"3";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(366, 97);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 27);
			this->label7->TabIndex = 55;
			this->label7->Text = L"C相";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(309, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 27);
			this->label6->TabIndex = 54;
			this->label6->Text = L"B相";
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(252, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 27);
			this->label15->TabIndex = 53;
			this->label15->Text = L"A相";
			// 
			// textBoxTrial1_cal_WW
			// 
			this->textBoxTrial1_cal_WW->Location = System::Drawing::Point(438, 1592);
			this->textBoxTrial1_cal_WW->Name = L"textBoxTrial1_cal_WW";
			this->textBoxTrial1_cal_WW->Size = System::Drawing::Size(94, 30);
			this->textBoxTrial1_cal_WW->TabIndex = 51;
			// 
			// textBoxTrial1_cal_calW
			// 
			this->textBoxTrial1_cal_calW->Location = System::Drawing::Point(324, 1593);
			this->textBoxTrial1_cal_calW->Name = L"textBoxTrial1_cal_calW";
			this->textBoxTrial1_cal_calW->Size = System::Drawing::Size(94, 30);
			this->textBoxTrial1_cal_calW->TabIndex = 50;
			// 
			// textBoxTrial1_cal_meaW
			// 
			this->textBoxTrial1_cal_meaW->Location = System::Drawing::Point(208, 1593);
			this->textBoxTrial1_cal_meaW->Name = L"textBoxTrial1_cal_meaW";
			this->textBoxTrial1_cal_meaW->Size = System::Drawing::Size(94, 30);
			this->textBoxTrial1_cal_meaW->TabIndex = 49;
			// 
			// textBoxTrial1_cal_N
			// 
			this->textBoxTrial1_cal_N->Location = System::Drawing::Point(553, 1592);
			this->textBoxTrial1_cal_N->Name = L"textBoxTrial1_cal_N";
			this->textBoxTrial1_cal_N->Size = System::Drawing::Size(135, 30);
			this->textBoxTrial1_cal_N->TabIndex = 45;
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(43, 1445);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(148, 27);
			this->label19->TabIndex = 41;
			this->label19->Text = L"负 载  情 况";
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(549, 1502);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(132, 49);
			this->label26->TabIndex = 35;
			this->label26->Text = L"电度表常数N";
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(437, 1503);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 48);
			this->label1->TabIndex = 33;
			this->label1->Text = L"△W/W";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(325, 1502);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 50);
			this->label2->TabIndex = 31;
			this->label2->Text = L"计算电能W（KWh）";
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(211, 1502);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(96, 48);
			this->label32->TabIndex = 29;
			this->label32->Text = L"实测电能W（KWh）";
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(43, 1593);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(148, 27);
			this->label33->TabIndex = 28;
			this->label33->Text = L"9×15W";
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(43, 1503);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(148, 50);
			this->label34->TabIndex = 27;
			this->label34->Text = L"9×15W";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(210, 1443);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(622, 28);
			this->label10->TabIndex = 14;
			this->label10->Text = L"计   算   值";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(779, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 27);
			this->label5->TabIndex = 5;
			this->label5->Text = L"计 算 值";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(255, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(165, 36);
			this->label4->TabIndex = 4;
			this->label4->Text = L"开 灯 盏 数";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(25, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Y接不对称负载";
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(25, 153);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(211, 27);
			this->label23->TabIndex = 2;
			this->label23->Text = L"Y接对称负载";
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(25, 46);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(211, 78);
			this->label24->TabIndex = 0;
			this->label24->Text = L"负 载 情 况";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_P_4);
			this->groupBox1->Controls->Add(this->textBoxTrial2_P_3);
			this->groupBox1->Controls->Add(this->textBoxTrial2_P_2);
			this->groupBox1->Controls->Add(this->textBoxTrial2_P_1);
			this->groupBox1->Controls->Add(this->label52);
			this->groupBox1->Controls->Add(this->label58);
			this->groupBox1->Controls->Add(this->textBoxTrial2Score);
			this->groupBox1->Controls->Add(this->labelTrial2_P2_4);
			this->groupBox1->Controls->Add(this->labelTrial2_P1_4);
			this->groupBox1->Controls->Add(this->labelTrial2_P2_3);
			this->groupBox1->Controls->Add(this->labelTrial2_P1_3);
			this->groupBox1->Controls->Add(this->labelTrial2_P2_2);
			this->groupBox1->Controls->Add(this->labelTrial2_P1_2);
			this->groupBox1->Controls->Add(this->labelTrial2_P2_1);
			this->groupBox1->Controls->Add(this->labelTrial2_P1_1);
			this->groupBox1->Controls->Add(this->label63);
			this->groupBox1->Controls->Add(this->label64);
			this->groupBox1->Controls->Add(this->label65);
			this->groupBox1->Controls->Add(this->label66);
			this->groupBox1->Controls->Add(this->label67);
			this->groupBox1->Controls->Add(this->label68);
			this->groupBox1->Controls->Add(this->label61);
			this->groupBox1->Controls->Add(this->label62);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->label44);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->label46);
			this->groupBox1->Controls->Add(this->label47);
			this->groupBox1->Controls->Add(this->label48);
			this->groupBox1->Controls->Add(this->label49);
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->label51);
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->textBox16);
			this->groupBox1->Controls->Add(this->textBox17);
			this->groupBox1->Controls->Add(this->textBox18);
			this->groupBox1->Controls->Add(this->label53);
			this->groupBox1->Controls->Add(this->label54);
			this->groupBox1->Controls->Add(this->label55);
			this->groupBox1->Controls->Add(this->label56);
			this->groupBox1->Controls->Add(this->label57);
			this->groupBox1->Controls->Add(this->label59);
			this->groupBox1->Controls->Add(this->label69);
			this->groupBox1->Controls->Add(this->label70);
			this->groupBox1->Controls->Add(this->label71);
			this->groupBox1->Controls->Add(this->label72);
			this->groupBox1->Controls->Add(this->label73);
			this->groupBox1->Controls->Add(this->label74);
			this->groupBox1->Controls->Add(this->label75);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(12, 651);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1215, 413);
			this->groupBox1->TabIndex = 204;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"三相电路功率的测量  实验内容2";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->Location = System::Drawing::Point(296, 363);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(89, 20);
			this->label52->TabIndex = 222;
			this->label52->Text = L"请打分：";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label58->Location = System::Drawing::Point(573, 363);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(129, 20);
			this->label58->TabIndex = 221;
			this->label58->Text = L"本项目总分30";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(398, 360);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 220;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &三相电路功率的测量::textBoxTrial2Score_TextChanged);
			// 
			// labelTrial2_P2_4
			// 
			this->labelTrial2_P2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P2_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P2_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P2_4->Location = System::Drawing::Point(548, 305);
			this->labelTrial2_P2_4->Name = L"labelTrial2_P2_4";
			this->labelTrial2_P2_4->Size = System::Drawing::Size(80, 30);
			this->labelTrial2_P2_4->TabIndex = 94;
			// 
			// labelTrial2_P1_4
			// 
			this->labelTrial2_P1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P1_4->Location = System::Drawing::Point(444, 306);
			this->labelTrial2_P1_4->Name = L"labelTrial2_P1_4";
			this->labelTrial2_P1_4->Size = System::Drawing::Size(80, 30);
			this->labelTrial2_P1_4->TabIndex = 93;
			// 
			// labelTrial2_P2_3
			// 
			this->labelTrial2_P2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P2_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P2_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P2_3->Location = System::Drawing::Point(548, 252);
			this->labelTrial2_P2_3->Name = L"labelTrial2_P2_3";
			this->labelTrial2_P2_3->Size = System::Drawing::Size(80, 30);
			this->labelTrial2_P2_3->TabIndex = 92;
			// 
			// labelTrial2_P1_3
			// 
			this->labelTrial2_P1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P1_3->Location = System::Drawing::Point(444, 253);
			this->labelTrial2_P1_3->Name = L"labelTrial2_P1_3";
			this->labelTrial2_P1_3->Size = System::Drawing::Size(80, 30);
			this->labelTrial2_P1_3->TabIndex = 91;
			// 
			// labelTrial2_P2_2
			// 
			this->labelTrial2_P2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P2_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P2_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P2_2->Location = System::Drawing::Point(545, 197);
			this->labelTrial2_P2_2->Name = L"labelTrial2_P2_2";
			this->labelTrial2_P2_2->Size = System::Drawing::Size(80, 30);
			this->labelTrial2_P2_2->TabIndex = 88;
			// 
			// labelTrial2_P1_2
			// 
			this->labelTrial2_P1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P1_2->Location = System::Drawing::Point(441, 198);
			this->labelTrial2_P1_2->Name = L"labelTrial2_P1_2";
			this->labelTrial2_P1_2->Size = System::Drawing::Size(80, 30);
			this->labelTrial2_P1_2->TabIndex = 87;
			// 
			// labelTrial2_P2_1
			// 
			this->labelTrial2_P2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P2_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P2_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P2_1->Location = System::Drawing::Point(545, 142);
			this->labelTrial2_P2_1->Name = L"labelTrial2_P2_1";
			this->labelTrial2_P2_1->Size = System::Drawing::Size(80, 30);
			this->labelTrial2_P2_1->TabIndex = 86;
			// 
			// labelTrial2_P1_1
			// 
			this->labelTrial2_P1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P1_1->Location = System::Drawing::Point(441, 143);
			this->labelTrial2_P1_1->Name = L"labelTrial2_P1_1";
			this->labelTrial2_P1_1->Size = System::Drawing::Size(80, 30);
			this->labelTrial2_P1_1->TabIndex = 85;
			// 
			// label63
			// 
			this->label63->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label63->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label63->ForeColor = System::Drawing::Color::Black;
			this->label63->Location = System::Drawing::Point(364, 253);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(51, 27);
			this->label63->TabIndex = 84;
			this->label63->Text = L"3";
			// 
			// label64
			// 
			this->label64->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(307, 253);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(51, 27);
			this->label64->TabIndex = 83;
			this->label64->Text = L"2";
			// 
			// label65
			// 
			this->label65->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label65->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label65->ForeColor = System::Drawing::Color::Black;
			this->label65->Location = System::Drawing::Point(250, 253);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(51, 27);
			this->label65->TabIndex = 82;
			this->label65->Text = L"1";
			// 
			// label66
			// 
			this->label66->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label66->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label66->ForeColor = System::Drawing::Color::Black;
			this->label66->Location = System::Drawing::Point(364, 306);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(51, 27);
			this->label66->TabIndex = 81;
			this->label66->Text = L"3";
			// 
			// label67
			// 
			this->label67->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label67->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label67->ForeColor = System::Drawing::Color::Black;
			this->label67->Location = System::Drawing::Point(307, 306);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(51, 27);
			this->label67->TabIndex = 80;
			this->label67->Text = L"3";
			// 
			// label68
			// 
			this->label68->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label68->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label68->ForeColor = System::Drawing::Color::Black;
			this->label68->Location = System::Drawing::Point(250, 306);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(51, 27);
			this->label68->TabIndex = 79;
			this->label68->Text = L"3";
			// 
			// label61
			// 
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label61->ForeColor = System::Drawing::Color::Black;
			this->label61->Location = System::Drawing::Point(20, 306);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(211, 27);
			this->label61->TabIndex = 78;
			this->label61->Text = L"△接平衡负载";
			// 
			// label62
			// 
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label62->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label62->ForeColor = System::Drawing::Color::Black;
			this->label62->Location = System::Drawing::Point(20, 253);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(211, 27);
			this->label62->TabIndex = 77;
			this->label62->Text = L"△接不平衡负载";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(642, 89);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 27);
			this->label14->TabIndex = 72;
			this->label14->Text = L"∑P（W）";
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(545, 89);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(83, 27);
			this->label25->TabIndex = 66;
			this->label25->Text = L"P2(W)";
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(444, 89);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(83, 27);
			this->label27->TabIndex = 63;
			this->label27->Text = L"P1(W)";
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(444, 38);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(184, 27);
			this->label29->TabIndex = 62;
			this->label29->Text = L"测量数据";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(361, 200);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(51, 27);
			this->label31->TabIndex = 61;
			this->label31->Text = L"3";
			// 
			// label44
			// 
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(304, 200);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(51, 27);
			this->label44->TabIndex = 60;
			this->label44->Text = L"2";
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(247, 200);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(51, 27);
			this->label45->TabIndex = 59;
			this->label45->Text = L"1";
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(361, 145);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(51, 27);
			this->label46->TabIndex = 58;
			this->label46->Text = L"3";
			// 
			// label47
			// 
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(304, 145);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(51, 27);
			this->label47->TabIndex = 57;
			this->label47->Text = L"3";
			// 
			// label48
			// 
			this->label48->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(247, 145);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(51, 27);
			this->label48->TabIndex = 56;
			this->label48->Text = L"3";
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(361, 89);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(51, 27);
			this->label49->TabIndex = 55;
			this->label49->Text = L"C相";
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(304, 89);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(51, 27);
			this->label50->TabIndex = 54;
			this->label50->Text = L"B相";
			// 
			// label51
			// 
			this->label51->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->ForeColor = System::Drawing::Color::Black;
			this->label51->Location = System::Drawing::Point(247, 89);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(51, 27);
			this->label51->TabIndex = 53;
			this->label51->Text = L"A相";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(438, 1592);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(94, 30);
			this->textBox15->TabIndex = 51;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(324, 1593);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(94, 30);
			this->textBox16->TabIndex = 50;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(208, 1593);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(94, 30);
			this->textBox17->TabIndex = 49;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(553, 1592);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(135, 30);
			this->textBox18->TabIndex = 45;
			// 
			// label53
			// 
			this->label53->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->ForeColor = System::Drawing::Color::Black;
			this->label53->Location = System::Drawing::Point(43, 1445);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(148, 27);
			this->label53->TabIndex = 41;
			this->label53->Text = L"负 载  情 况";
			// 
			// label54
			// 
			this->label54->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label54->ForeColor = System::Drawing::Color::Black;
			this->label54->Location = System::Drawing::Point(549, 1502);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(132, 49);
			this->label54->TabIndex = 35;
			this->label54->Text = L"电度表常数N";
			// 
			// label55
			// 
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->ForeColor = System::Drawing::Color::Black;
			this->label55->Location = System::Drawing::Point(437, 1503);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(96, 48);
			this->label55->TabIndex = 33;
			this->label55->Text = L"△W/W";
			// 
			// label56
			// 
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label56->ForeColor = System::Drawing::Color::Black;
			this->label56->Location = System::Drawing::Point(325, 1502);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(96, 50);
			this->label56->TabIndex = 31;
			this->label56->Text = L"计算电能W（KWh）";
			// 
			// label57
			// 
			this->label57->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->ForeColor = System::Drawing::Color::Black;
			this->label57->Location = System::Drawing::Point(211, 1502);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(96, 48);
			this->label57->TabIndex = 29;
			this->label57->Text = L"实测电能W（KWh）";
			// 
			// label59
			// 
			this->label59->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(43, 1593);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(148, 27);
			this->label59->TabIndex = 28;
			this->label59->Text = L"9×15W";
			// 
			// label69
			// 
			this->label69->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label69->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label69->ForeColor = System::Drawing::Color::Black;
			this->label69->Location = System::Drawing::Point(43, 1503);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(148, 50);
			this->label69->TabIndex = 27;
			this->label69->Text = L"9×15W";
			// 
			// label70
			// 
			this->label70->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label70->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label70->ForeColor = System::Drawing::Color::Black;
			this->label70->Location = System::Drawing::Point(210, 1443);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(622, 28);
			this->label70->TabIndex = 14;
			this->label70->Text = L"计   算   值";
			this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label71
			// 
			this->label71->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label71->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label71->ForeColor = System::Drawing::Color::Black;
			this->label71->Location = System::Drawing::Point(642, 37);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(110, 27);
			this->label71->TabIndex = 5;
			this->label71->Text = L"计 算 值";
			// 
			// label72
			// 
			this->label72->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label72->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label72->ForeColor = System::Drawing::Color::Black;
			this->label72->Location = System::Drawing::Point(247, 37);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(165, 36);
			this->label72->TabIndex = 4;
			this->label72->Text = L"开 灯 盏 数";
			// 
			// label73
			// 
			this->label73->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label73->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label73->ForeColor = System::Drawing::Color::Black;
			this->label73->Location = System::Drawing::Point(20, 200);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(211, 27);
			this->label73->TabIndex = 3;
			this->label73->Text = L"Y接不平衡负载";
			// 
			// label74
			// 
			this->label74->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label74->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label74->ForeColor = System::Drawing::Color::Black;
			this->label74->Location = System::Drawing::Point(20, 145);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(211, 27);
			this->label74->TabIndex = 2;
			this->label74->Text = L"Y接平衡负载";
			// 
			// label75
			// 
			this->label75->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label75->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label75->ForeColor = System::Drawing::Color::Black;
			this->label75->Location = System::Drawing::Point(20, 38);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(211, 78);
			this->label75->TabIndex = 0;
			this->label75->Text = L"负 载 情 况";
			this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxTrial3_QQ_3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_QQ_2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_QQ_1);
			this->groupBox2->Controls->Add(this->label60);
			this->groupBox2->Controls->Add(this->label76);
			this->groupBox2->Controls->Add(this->textBoxTrial3Score);
			this->groupBox2->Controls->Add(this->labelTrial3_Q_3);
			this->groupBox2->Controls->Add(this->labelTrial3_Q_2);
			this->groupBox2->Controls->Add(this->labelTrial3_Q_1);
			this->groupBox2->Controls->Add(this->label95);
			this->groupBox2->Controls->Add(this->pictureBox4);
			this->groupBox2->Controls->Add(this->labelTrial3_I_3);
			this->groupBox2->Controls->Add(this->labelTrial3_U_3);
			this->groupBox2->Controls->Add(this->labelTrial3_I_2);
			this->groupBox2->Controls->Add(this->labelTrial3_U_2);
			this->groupBox2->Controls->Add(this->labelTrial3_I_1);
			this->groupBox2->Controls->Add(this->labelTrial3_U_1);
			this->groupBox2->Controls->Add(this->label99);
			this->groupBox2->Controls->Add(this->label102);
			this->groupBox2->Controls->Add(this->label103);
			this->groupBox2->Controls->Add(this->label104);
			this->groupBox2->Controls->Add(this->label105);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->textBox14);
			this->groupBox2->Controls->Add(this->label116);
			this->groupBox2->Controls->Add(this->label117);
			this->groupBox2->Controls->Add(this->label118);
			this->groupBox2->Controls->Add(this->label119);
			this->groupBox2->Controls->Add(this->label120);
			this->groupBox2->Controls->Add(this->label121);
			this->groupBox2->Controls->Add(this->label122);
			this->groupBox2->Controls->Add(this->label123);
			this->groupBox2->Controls->Add(this->label124);
			this->groupBox2->Controls->Add(this->label126);
			this->groupBox2->Controls->Add(this->label127);
			this->groupBox2->Controls->Add(this->label128);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(12, 1070);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1215, 314);
			this->groupBox2->TabIndex = 205;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"三相电路功率的测量  实验内容3";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label60->Location = System::Drawing::Point(296, 281);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(89, 20);
			this->label60->TabIndex = 222;
			this->label60->Text = L"请打分：";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label76->Location = System::Drawing::Point(573, 281);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(129, 20);
			this->label76->TabIndex = 221;
			this->label76->Text = L"本项目总分30";
			// 
			// textBoxTrial3Score
			// 
			this->textBoxTrial3Score->Location = System::Drawing::Point(398, 278);
			this->textBoxTrial3Score->Name = L"textBoxTrial3Score";
			this->textBoxTrial3Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial3Score->TabIndex = 220;
			this->textBoxTrial3Score->TextChanged += gcnew System::EventHandler(this, &三相电路功率的测量::textBoxTrial3Score_TextChanged);
			// 
			// labelTrial3_Q_3
			// 
			this->labelTrial3_Q_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Q_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Q_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Q_3->Location = System::Drawing::Point(601, 233);
			this->labelTrial3_Q_3->Name = L"labelTrial3_Q_3";
			this->labelTrial3_Q_3->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_Q_3->TabIndex = 111;
			// 
			// labelTrial3_Q_2
			// 
			this->labelTrial3_Q_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Q_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Q_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Q_2->Location = System::Drawing::Point(601, 186);
			this->labelTrial3_Q_2->Name = L"labelTrial3_Q_2";
			this->labelTrial3_Q_2->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_Q_2->TabIndex = 110;
			// 
			// labelTrial3_Q_1
			// 
			this->labelTrial3_Q_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Q_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Q_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Q_1->Location = System::Drawing::Point(601, 141);
			this->labelTrial3_Q_1->Name = L"labelTrial3_Q_1";
			this->labelTrial3_Q_1->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_Q_1->TabIndex = 109;
			// 
			// label95
			// 
			this->label95->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label95->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label95->ForeColor = System::Drawing::Color::Black;
			this->label95->Location = System::Drawing::Point(601, 88);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(83, 27);
			this->label95->TabIndex = 108;
			this->label95->Text = L"Q(VAR)";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(765, 85);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(43, 32);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 107;
			this->pictureBox4->TabStop = false;
			// 
			// labelTrial3_I_3
			// 
			this->labelTrial3_I_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_I_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I_3->Location = System::Drawing::Point(502, 233);
			this->labelTrial3_I_3->Name = L"labelTrial3_I_3";
			this->labelTrial3_I_3->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_I_3->TabIndex = 92;
			// 
			// labelTrial3_U_3
			// 
			this->labelTrial3_U_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U_3->Location = System::Drawing::Point(398, 234);
			this->labelTrial3_U_3->Name = L"labelTrial3_U_3";
			this->labelTrial3_U_3->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_U_3->TabIndex = 91;
			// 
			// labelTrial3_I_2
			// 
			this->labelTrial3_I_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_I_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I_2->Location = System::Drawing::Point(502, 186);
			this->labelTrial3_I_2->Name = L"labelTrial3_I_2";
			this->labelTrial3_I_2->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_I_2->TabIndex = 88;
			// 
			// labelTrial3_U_2
			// 
			this->labelTrial3_U_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U_2->Location = System::Drawing::Point(398, 187);
			this->labelTrial3_U_2->Name = L"labelTrial3_U_2";
			this->labelTrial3_U_2->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_U_2->TabIndex = 87;
			// 
			// labelTrial3_I_1
			// 
			this->labelTrial3_I_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_I_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_I_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_I_1->Location = System::Drawing::Point(502, 141);
			this->labelTrial3_I_1->Name = L"labelTrial3_I_1";
			this->labelTrial3_I_1->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_I_1->TabIndex = 86;
			// 
			// labelTrial3_U_1
			// 
			this->labelTrial3_U_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U_1->Location = System::Drawing::Point(398, 142);
			this->labelTrial3_U_1->Name = L"labelTrial3_U_1";
			this->labelTrial3_U_1->Size = System::Drawing::Size(80, 30);
			this->labelTrial3_U_1->TabIndex = 85;
			// 
			// label99
			// 
			this->label99->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label99->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label99->ForeColor = System::Drawing::Color::Black;
			this->label99->Location = System::Drawing::Point(17, 236);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(307, 27);
			this->label99->TabIndex = 77;
			this->label99->Text = L"（1）、（2）的并联负载";
			// 
			// label102
			// 
			this->label102->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label102->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label102->ForeColor = System::Drawing::Color::Black;
			this->label102->Location = System::Drawing::Point(712, 91);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(110, 27);
			this->label102->TabIndex = 72;
			this->label102->Text = L"∑Q=";
			// 
			// label103
			// 
			this->label103->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label103->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label103->ForeColor = System::Drawing::Color::Black;
			this->label103->Location = System::Drawing::Point(502, 88);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(83, 27);
			this->label103->TabIndex = 66;
			this->label103->Text = L"I(v)";
			// 
			// label104
			// 
			this->label104->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label104->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label104->ForeColor = System::Drawing::Color::Black;
			this->label104->Location = System::Drawing::Point(401, 88);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(83, 27);
			this->label104->TabIndex = 63;
			this->label104->Text = L"U(v)";
			// 
			// label105
			// 
			this->label105->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(401, 37);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(280, 27);
			this->label105->TabIndex = 62;
			this->label105->Text = L"测  量  值";
			this->label105->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(438, 1592);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(94, 30);
			this->textBox5->TabIndex = 51;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(324, 1593);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(94, 30);
			this->textBox12->TabIndex = 50;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(208, 1593);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(94, 30);
			this->textBox13->TabIndex = 49;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(553, 1592);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(135, 30);
			this->textBox14->TabIndex = 45;
			// 
			// label116
			// 
			this->label116->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label116->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label116->ForeColor = System::Drawing::Color::Black;
			this->label116->Location = System::Drawing::Point(43, 1445);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(148, 27);
			this->label116->TabIndex = 41;
			this->label116->Text = L"负 载  情 况";
			// 
			// label117
			// 
			this->label117->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label117->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label117->ForeColor = System::Drawing::Color::Black;
			this->label117->Location = System::Drawing::Point(549, 1502);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(132, 49);
			this->label117->TabIndex = 35;
			this->label117->Text = L"电度表常数N";
			// 
			// label118
			// 
			this->label118->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label118->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label118->ForeColor = System::Drawing::Color::Black;
			this->label118->Location = System::Drawing::Point(437, 1503);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(96, 48);
			this->label118->TabIndex = 33;
			this->label118->Text = L"△W/W";
			// 
			// label119
			// 
			this->label119->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label119->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label119->ForeColor = System::Drawing::Color::Black;
			this->label119->Location = System::Drawing::Point(325, 1502);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(96, 50);
			this->label119->TabIndex = 31;
			this->label119->Text = L"计算电能W（KWh）";
			// 
			// label120
			// 
			this->label120->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label120->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label120->ForeColor = System::Drawing::Color::Black;
			this->label120->Location = System::Drawing::Point(211, 1502);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(96, 48);
			this->label120->TabIndex = 29;
			this->label120->Text = L"实测电能W（KWh）";
			// 
			// label121
			// 
			this->label121->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label121->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label121->ForeColor = System::Drawing::Color::Black;
			this->label121->Location = System::Drawing::Point(43, 1593);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(148, 27);
			this->label121->TabIndex = 28;
			this->label121->Text = L"9×15W";
			// 
			// label122
			// 
			this->label122->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label122->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label122->ForeColor = System::Drawing::Color::Black;
			this->label122->Location = System::Drawing::Point(43, 1503);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(148, 50);
			this->label122->TabIndex = 27;
			this->label122->Text = L"9×15W";
			// 
			// label123
			// 
			this->label123->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label123->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label123->ForeColor = System::Drawing::Color::Black;
			this->label123->Location = System::Drawing::Point(210, 1443);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(622, 28);
			this->label123->TabIndex = 14;
			this->label123->Text = L"计   算   值";
			this->label123->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label124
			// 
			this->label124->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label124->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label124->ForeColor = System::Drawing::Color::Black;
			this->label124->Location = System::Drawing::Point(712, 39);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(110, 27);
			this->label124->TabIndex = 5;
			this->label124->Text = L"计 算 值";
			// 
			// label126
			// 
			this->label126->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label126->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label126->ForeColor = System::Drawing::Color::Black;
			this->label126->Location = System::Drawing::Point(20, 191);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(307, 27);
			this->label126->TabIndex = 3;
			this->label126->Text = L"三相对称电容器（每相4.7μF）";
			// 
			// label127
			// 
			this->label127->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label127->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label127->ForeColor = System::Drawing::Color::Black;
			this->label127->Location = System::Drawing::Point(20, 146);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(307, 27);
			this->label127->TabIndex = 2;
			this->label127->Text = L"三相对称灯组（每相开3盏）";
			// 
			// label128
			// 
			this->label128->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label128->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label128->ForeColor = System::Drawing::Color::Black;
			this->label128->Location = System::Drawing::Point(20, 39);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(307, 78);
			this->label128->TabIndex = 0;
			this->label128->Text = L"负 载 情 况";
			this->label128->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(12, 1396);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(640, 73);
			this->groupBox14->TabIndex = 338;
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
			this->button1->Location = System::Drawing::Point(793, 1422);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 339;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &三相电路功率的测量::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1013, 1422);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 341;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &三相电路功率的测量::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(900, 1422);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 340;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &三相电路功率的测量::button2_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &三相电路功率的测量::printDocument1_PrintPage);
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
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Location = System::Drawing::Point(60, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1280, 1485);
			this->panel1->TabIndex = 342;
			// 
			// textBoxTrial1_P_2
			// 
			this->textBoxTrial1_P_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_P_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_P_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_P_2->Location = System::Drawing::Point(776, 194);
			this->textBoxTrial1_P_2->Name = L"textBoxTrial1_P_2";
			this->textBoxTrial1_P_2->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial1_P_2->TabIndex = 224;
			// 
			// textBoxTrial1_P_1
			// 
			this->textBoxTrial1_P_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_P_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_P_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_P_1->Location = System::Drawing::Point(776, 150);
			this->textBoxTrial1_P_1->Name = L"textBoxTrial1_P_1";
			this->textBoxTrial1_P_1->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial1_P_1->TabIndex = 223;
			// 
			// textBoxTrial2_P_4
			// 
			this->textBoxTrial2_P_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_P_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_P_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_P_4->Location = System::Drawing::Point(645, 308);
			this->textBoxTrial2_P_4->Name = L"textBoxTrial2_P_4";
			this->textBoxTrial2_P_4->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial2_P_4->TabIndex = 226;
			// 
			// textBoxTrial2_P_3
			// 
			this->textBoxTrial2_P_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_P_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_P_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_P_3->Location = System::Drawing::Point(645, 255);
			this->textBoxTrial2_P_3->Name = L"textBoxTrial2_P_3";
			this->textBoxTrial2_P_3->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial2_P_3->TabIndex = 225;
			// 
			// textBoxTrial2_P_2
			// 
			this->textBoxTrial2_P_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_P_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_P_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_P_2->Location = System::Drawing::Point(642, 200);
			this->textBoxTrial2_P_2->Name = L"textBoxTrial2_P_2";
			this->textBoxTrial2_P_2->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial2_P_2->TabIndex = 224;
			// 
			// textBoxTrial2_P_1
			// 
			this->textBoxTrial2_P_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_P_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_P_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_P_1->Location = System::Drawing::Point(642, 145);
			this->textBoxTrial2_P_1->Name = L"textBoxTrial2_P_1";
			this->textBoxTrial2_P_1->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial2_P_1->TabIndex = 223;
			// 
			// textBoxTrial3_QQ_3
			// 
			this->textBoxTrial3_QQ_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_QQ_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_QQ_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_QQ_3->Location = System::Drawing::Point(712, 233);
			this->textBoxTrial3_QQ_3->Name = L"textBoxTrial3_QQ_3";
			this->textBoxTrial3_QQ_3->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial3_QQ_3->TabIndex = 225;
			// 
			// textBoxTrial3_QQ_2
			// 
			this->textBoxTrial3_QQ_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_QQ_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_QQ_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_QQ_2->Location = System::Drawing::Point(712, 186);
			this->textBoxTrial3_QQ_2->Name = L"textBoxTrial3_QQ_2";
			this->textBoxTrial3_QQ_2->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial3_QQ_2->TabIndex = 224;
			// 
			// textBoxTrial3_QQ_1
			// 
			this->textBoxTrial3_QQ_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_QQ_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_QQ_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_QQ_1->Location = System::Drawing::Point(712, 141);
			this->textBoxTrial3_QQ_1->Name = L"textBoxTrial3_QQ_1";
			this->textBoxTrial3_QQ_1->Size = System::Drawing::Size(110, 30);
			this->textBoxTrial3_QQ_1->TabIndex = 223;
			// 
			// 三相电路功率的测量
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1557, 724);
			this->Controls->Add(this->panel1);
			this->Name = L"三相电路功率的测量";
			this->Text = L"三相电路功率的测量";
			this->Load += gcnew System::EventHandler(this, &三相电路功率的测量::三相电路功率的测量_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String ^SelectedArea = "";
		void  Priview();
		void Print();
		public:void Load三相电路功率的测量Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Priview();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void 三相电路功率的测量_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
