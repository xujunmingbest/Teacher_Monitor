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
	/// RLC串联谐振电路的研究 摘要
	/// </summary>
	public ref class RLC串联谐振电路的研究 : public System::Windows::Forms::Form
	{
	public:
		RLC串联谐振电路的研究(void)
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
		~RLC串联谐振电路的研究()
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
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBoxTrial1Score;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labelTrial2_UL;
	private: System::Windows::Forms::TextBox^  textBoxTrial2Score;

	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  labelTrial2_Uc;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBoxTrial4Score;


	private: System::Windows::Forms::Label^  label65;

	private: System::Windows::Forms::Label^  label64;

	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label62;
































	private: System::Windows::Forms::Label^  labelTrial3_Uc_8;
	private: System::Windows::Forms::Label^  labelTrial3_UL_8;

	private: System::Windows::Forms::Label^  labelTrial3_U0_8;
	private: System::Windows::Forms::Label^  labelTrial3_Uc_7;
	private: System::Windows::Forms::Label^  labelTrial3_UL_7;

	private: System::Windows::Forms::Label^  labelTrial3_U0_7;
	private: System::Windows::Forms::Label^  labelTrial3_Uc_6;
	private: System::Windows::Forms::Label^  labelTrial3_UL_6;

	private: System::Windows::Forms::Label^  labelTrial3_U0_6;
	private: System::Windows::Forms::Label^  labelTrial3_Uc_5;
	private: System::Windows::Forms::Label^  labelTrial3_UL_5;

	private: System::Windows::Forms::Label^  labelTrial3_U0_5;
	private: System::Windows::Forms::Label^  labelTrial3_Uc_4;
	private: System::Windows::Forms::Label^  labelTrial3_UL_4;

	private: System::Windows::Forms::Label^  labelTrial3_U0_4;
	private: System::Windows::Forms::Label^  labelTrial3_Uc_3;
	private: System::Windows::Forms::Label^  labelTrial3_UL_3;

	private: System::Windows::Forms::Label^  labelTrial3_U0_3;
	private: System::Windows::Forms::Label^  labelTrial3_Uc_2;
	private: System::Windows::Forms::Label^  labelTrial3_UL_2;

	private: System::Windows::Forms::Label^  labelTrial3_U0_2;
	private: System::Windows::Forms::Label^  labelTrial3_Uc_1;
	private: System::Windows::Forms::Label^  labelTrial3_UL_1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  labelTrial3_U0_1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::GroupBox^  groupBox4;

	private: System::Windows::Forms::Label^  label72;

	private: System::Windows::Forms::Label^  label73;

	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
































	private: System::Windows::Forms::Label^  labelTrial5_Uc_8;
	private: System::Windows::Forms::Label^  labelTrial5_UL_8;

	private: System::Windows::Forms::Label^  labelTrial5_U0_8;
	private: System::Windows::Forms::Label^  labelTrial5_Uc_7;
	private: System::Windows::Forms::Label^  labelTrial5_UL_7;

	private: System::Windows::Forms::Label^  labelTrial5_U0_7;
	private: System::Windows::Forms::Label^  labelTrial5_Uc_6;
	private: System::Windows::Forms::Label^  labelTrial5_UL_6;

	private: System::Windows::Forms::Label^  labelTrial5_U0_6;
	private: System::Windows::Forms::Label^  labelTrial5_Uc_5;
	private: System::Windows::Forms::Label^  labelTrial5_UL_5;

	private: System::Windows::Forms::Label^  labelTrial5_U0_5;
	private: System::Windows::Forms::Label^  labelTrial5_Uc_4;
	private: System::Windows::Forms::Label^  labelTrial5_UL_4;

	private: System::Windows::Forms::Label^  labelTrial5_U0_4;
	private: System::Windows::Forms::Label^  labelTrial5_Uc_3;
	private: System::Windows::Forms::Label^  labelTrial5_UL_3;

	private: System::Windows::Forms::Label^  labelTrial5_U0_3;
	private: System::Windows::Forms::Label^  labelTrial5_Uc_2;
	private: System::Windows::Forms::Label^  labelTrial5_UL_2;

	private: System::Windows::Forms::Label^  labelTrial5_U0_2;
	private: System::Windows::Forms::Label^  labelTrial5_Uc_1;
	private: System::Windows::Forms::Label^  labelTrial5_UL_1;
	private: System::Windows::Forms::Label^  label123;
	private: System::Windows::Forms::Label^  label124;

	private: System::Windows::Forms::Label^  labelTrial5_U0_1;
	private: System::Windows::Forms::Label^  label126;
	private: System::Windows::Forms::Label^  label127;
	private: System::Windows::Forms::Label^  label128;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  textBoxTrial3Score;

	private: System::Windows::Forms::Label^  labelTrial4_UL;
	private: System::Windows::Forms::Label^  label67;

	private: System::Windows::Forms::Label^  labelTrial4_Uc;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  textBoxTrial5Score;

private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::Label^  labelTotalGrade;

private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Label^  textBoxTrial2_F;
private: System::Windows::Forms::Label^  textBoxTrial3F2_F1;
private: System::Windows::Forms::Label^  textBoxTrial3_Q;
private: System::Windows::Forms::Label^  textBoxTrial3_Fo;








private: System::Windows::Forms::Label^  textBoxTrial3_F8;
private: System::Windows::Forms::Label^  textBoxTrial3_F7;
private: System::Windows::Forms::Label^  textBoxTrial3_F6;
private: System::Windows::Forms::Label^  textBoxTrial3_F5;
private: System::Windows::Forms::Label^  textBoxTrial3_F4;
private: System::Windows::Forms::Label^  textBoxTrial3_F3;
private: System::Windows::Forms::Label^  textBoxTrial3_F2;
private: System::Windows::Forms::Label^  textBoxTrial3_F1;
private: System::Windows::Forms::Label^  textBoxTrial5F2_F1;
private: System::Windows::Forms::Label^  textBoxTrial5_Q;
private: System::Windows::Forms::Label^  textBoxTrial5_Fo;








private: System::Windows::Forms::Label^  textBoxTrial5_F8;
private: System::Windows::Forms::Label^  textBoxTrial5_F7;
private: System::Windows::Forms::Label^  textBoxTrial5_F6;
private: System::Windows::Forms::Label^  textBoxTrial5_F5;
private: System::Windows::Forms::Label^  textBoxTrial5_F4;
private: System::Windows::Forms::Label^  textBoxTrial5_F3;
private: System::Windows::Forms::Label^  textBoxTrial5_F2;
private: System::Windows::Forms::Label^  textBoxTrial5_F1;
private: System::Windows::Forms::Label^  textBoxTrial4_F;
private: System::Windows::Forms::Label^  textBox结论;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RLC串联谐振电路的研究::typeid));
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
			this->pictureBoxTrial1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial2_F = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UL = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uc = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial3F2_F1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Q = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Fo = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4Score = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Uc_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_UL_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U0_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Uc_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_UL_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U0_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Uc_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_UL_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U0_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Uc_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_UL_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U0_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Uc_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_UL_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U0_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Uc_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_UL_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U0_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Uc_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_UL_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U0_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_Uc_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_UL_1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_U0_1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial5F2_F1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_Q = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_Fo = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_F8 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_F7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_F6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_F5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_F4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_F3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_F2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5_F1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5Score = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_Uc_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_UL_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_U0_8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_Uc_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_UL_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_U0_7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_Uc_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_UL_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_U0_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_Uc_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_UL_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_U0_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_Uc_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_UL_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_U0_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_Uc_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_UL_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_U0_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_Uc_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_UL_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_U0_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_Uc_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_UL_1 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->labelTrial5_U0_1 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial4_F = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3Score = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial4_UL = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->labelTrial4_Uc = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox结论 = (gcnew System::Windows::Forms::Label());
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(13, 14);
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
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->textBoxTrial1Score);
			this->groupBox8->Controls->Add(this->pictureBoxTrial1);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(13, 334);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1045, 573);
			this->groupBox8->TabIndex = 202;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"RLC元件阻抗特性的测定 实验内容1";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(154, 544);
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
			this->label23->Location = System::Drawing::Point(431, 544);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(129, 20);
			this->label23->TabIndex = 218;
			this->label23->Text = L"本项目总分30";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(256, 541);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 217;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &RLC串联谐振电路的研究::textBoxTrial1Score_TextChanged);
			// 
			// pictureBoxTrial1
			// 
			this->pictureBoxTrial1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1.Image")));
			this->pictureBoxTrial1->Location = System::Drawing::Point(25, 29);
			this->pictureBoxTrial1->Name = L"pictureBoxTrial1";
			this->pictureBoxTrial1->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1->TabIndex = 2;
			this->pictureBoxTrial1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_F);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->labelTrial2_UL);
			this->groupBox1->Controls->Add(this->textBoxTrial2Score);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->labelTrial2_Uc);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(13, 913);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1045, 193);
			this->groupBox1->TabIndex = 203;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RLC元件阻抗特性的测定 实验内容2";
			// 
			// textBoxTrial2_F
			// 
			this->textBoxTrial2_F->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial2_F->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial2_F->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial2_F->Location = System::Drawing::Point(293, 47);
			this->textBoxTrial2_F->Name = L"textBoxTrial2_F";
			this->textBoxTrial2_F->Size = System::Drawing::Size(179, 25);
			this->textBoxTrial2_F->TabIndex = 223;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(515, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 222;
			this->label1->Text = L"请打分：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(792, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 20);
			this->label2->TabIndex = 221;
			this->label2->Text = L"本项目总分30";
			// 
			// labelTrial2_UL
			// 
			this->labelTrial2_UL->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_UL->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_UL->Location = System::Drawing::Point(293, 144);
			this->labelTrial2_UL->Name = L"labelTrial2_UL";
			this->labelTrial2_UL->Size = System::Drawing::Size(179, 25);
			this->labelTrial2_UL->TabIndex = 17;
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(617, 141);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 220;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &RLC串联谐振电路的研究::textBoxTrial2Score_TextChanged);
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(32, 144);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(230, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"UL";
			// 
			// labelTrial2_Uc
			// 
			this->labelTrial2_Uc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uc->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Uc->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uc->Location = System::Drawing::Point(293, 96);
			this->labelTrial2_Uc->Name = L"labelTrial2_Uc";
			this->labelTrial2_Uc->Size = System::Drawing::Size(179, 25);
			this->labelTrial2_Uc->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(32, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(230, 25);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Uc";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(32, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"频率F（KHz）";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxTrial3F2_F1);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Q);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Fo);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F8);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F7);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBoxTrial4Score);
			this->groupBox2->Controls->Add(this->label65);
			this->groupBox2->Controls->Add(this->label64);
			this->groupBox2->Controls->Add(this->label63);
			this->groupBox2->Controls->Add(this->label62);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_8);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_8);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_8);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_7);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_7);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_7);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_6);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_6);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_6);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_5);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_5);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_5);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_4);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_4);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_4);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_3);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_3);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_3);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_2);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_2);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_2);
			this->groupBox2->Controls->Add(this->labelTrial3_Uc_1);
			this->groupBox2->Controls->Add(this->labelTrial3_UL_1);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->labelTrial3_U0_1);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(13, 16);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1282, 359);
			this->groupBox2->TabIndex = 204;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"RLC元件阻抗特性的测定 实验内容3";
			// 
			// textBoxTrial3F2_F1
			// 
			this->textBoxTrial3F2_F1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3F2_F1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3F2_F1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3F2_F1->Location = System::Drawing::Point(684, 274);
			this->textBoxTrial3F2_F1->Name = L"textBoxTrial3F2_F1";
			this->textBoxTrial3F2_F1->Size = System::Drawing::Size(104, 25);
			this->textBoxTrial3F2_F1->TabIndex = 244;
			// 
			// textBoxTrial3_Q
			// 
			this->textBoxTrial3_Q->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Q->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Q->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Q->Location = System::Drawing::Point(483, 274);
			this->textBoxTrial3_Q->Name = L"textBoxTrial3_Q";
			this->textBoxTrial3_Q->Size = System::Drawing::Size(99, 25);
			this->textBoxTrial3_Q->TabIndex = 243;
			// 
			// textBoxTrial3_Fo
			// 
			this->textBoxTrial3_Fo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Fo->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_Fo->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_Fo->Location = System::Drawing::Point(285, 274);
			this->textBoxTrial3_Fo->Name = L"textBoxTrial3_Fo";
			this->textBoxTrial3_Fo->Size = System::Drawing::Size(123, 25);
			this->textBoxTrial3_Fo->TabIndex = 242;
			// 
			// textBoxTrial3_F8
			// 
			this->textBoxTrial3_F8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F8->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F8->Location = System::Drawing::Point(861, 95);
			this->textBoxTrial3_F8->Name = L"textBoxTrial3_F8";
			this->textBoxTrial3_F8->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial3_F8->TabIndex = 233;
			// 
			// textBoxTrial3_F7
			// 
			this->textBoxTrial3_F7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F7->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F7->Location = System::Drawing::Point(765, 95);
			this->textBoxTrial3_F7->Name = L"textBoxTrial3_F7";
			this->textBoxTrial3_F7->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial3_F7->TabIndex = 232;
			// 
			// textBoxTrial3_F6
			// 
			this->textBoxTrial3_F6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F6->Location = System::Drawing::Point(669, 95);
			this->textBoxTrial3_F6->Name = L"textBoxTrial3_F6";
			this->textBoxTrial3_F6->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial3_F6->TabIndex = 231;
			// 
			// textBoxTrial3_F5
			// 
			this->textBoxTrial3_F5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F5->Location = System::Drawing::Point(573, 95);
			this->textBoxTrial3_F5->Name = L"textBoxTrial3_F5";
			this->textBoxTrial3_F5->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial3_F5->TabIndex = 230;
			// 
			// textBoxTrial3_F4
			// 
			this->textBoxTrial3_F4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F4->Location = System::Drawing::Point(477, 95);
			this->textBoxTrial3_F4->Name = L"textBoxTrial3_F4";
			this->textBoxTrial3_F4->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial3_F4->TabIndex = 229;
			// 
			// textBoxTrial3_F3
			// 
			this->textBoxTrial3_F3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F3->Location = System::Drawing::Point(381, 95);
			this->textBoxTrial3_F3->Name = L"textBoxTrial3_F3";
			this->textBoxTrial3_F3->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial3_F3->TabIndex = 228;
			// 
			// textBoxTrial3_F2
			// 
			this->textBoxTrial3_F2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F2->Location = System::Drawing::Point(285, 95);
			this->textBoxTrial3_F2->Name = L"textBoxTrial3_F2";
			this->textBoxTrial3_F2->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial3_F2->TabIndex = 227;
			// 
			// textBoxTrial3_F1
			// 
			this->textBoxTrial3_F1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F1->Location = System::Drawing::Point(189, 95);
			this->textBoxTrial3_F1->Name = L"textBoxTrial3_F1";
			this->textBoxTrial3_F1->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial3_F1->TabIndex = 226;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(24, 327);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 20);
			this->label4->TabIndex = 225;
			this->label4->Text = L"请打分：";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(301, 327);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 20);
			this->label6->TabIndex = 224;
			this->label6->Text = L"本项目总分30";
			// 
			// textBoxTrial4Score
			// 
			this->textBoxTrial4Score->Location = System::Drawing::Point(126, 324);
			this->textBoxTrial4Score->Name = L"textBoxTrial4Score";
			this->textBoxTrial4Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial4Score->TabIndex = 223;
			this->textBoxTrial4Score->TextChanged += gcnew System::EventHandler(this, &RLC串联谐振电路的研究::textBoxTrial4Score_TextChanged);
			// 
			// label65
			// 
			this->label65->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label65->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label65->ForeColor = System::Drawing::Color::Black;
			this->label65->Location = System::Drawing::Point(602, 274);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(76, 25);
			this->label65->TabIndex = 135;
			this->label65->Text = L"F2-F1=";
			// 
			// label64
			// 
			this->label64->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(423, 274);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(54, 25);
			this->label64->TabIndex = 133;
			this->label64->Text = L"Q=";
			// 
			// label63
			// 
			this->label63->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label63->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label63->ForeColor = System::Drawing::Color::Black;
			this->label63->Location = System::Drawing::Point(228, 274);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(54, 25);
			this->label63->TabIndex = 131;
			this->label63->Text = L"Fo=";
			// 
			// label62
			// 
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label62->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label62->ForeColor = System::Drawing::Color::Black;
			this->label62->Location = System::Drawing::Point(31, 274);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(173, 25);
			this->label62->TabIndex = 130;
			this->label62->Text = L"Ui=3V，R=510Ω";
			// 
			// labelTrial3_Uc_8
			// 
			this->labelTrial3_Uc_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_8->Location = System::Drawing::Point(861, 228);
			this->labelTrial3_Uc_8->Name = L"labelTrial3_Uc_8";
			this->labelTrial3_Uc_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_8->TabIndex = 72;
			// 
			// labelTrial3_UL_8
			// 
			this->labelTrial3_UL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_8->Location = System::Drawing::Point(861, 189);
			this->labelTrial3_UL_8->Name = L"labelTrial3_UL_8";
			this->labelTrial3_UL_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_8->TabIndex = 70;
			// 
			// labelTrial3_U0_8
			// 
			this->labelTrial3_U0_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_8->Location = System::Drawing::Point(861, 144);
			this->labelTrial3_U0_8->Name = L"labelTrial3_U0_8";
			this->labelTrial3_U0_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_8->TabIndex = 67;
			// 
			// labelTrial3_Uc_7
			// 
			this->labelTrial3_Uc_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_7->Location = System::Drawing::Point(765, 228);
			this->labelTrial3_Uc_7->Name = L"labelTrial3_Uc_7";
			this->labelTrial3_Uc_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_7->TabIndex = 65;
			// 
			// labelTrial3_UL_7
			// 
			this->labelTrial3_UL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_7->Location = System::Drawing::Point(765, 189);
			this->labelTrial3_UL_7->Name = L"labelTrial3_UL_7";
			this->labelTrial3_UL_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_7->TabIndex = 63;
			// 
			// labelTrial3_U0_7
			// 
			this->labelTrial3_U0_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_7->Location = System::Drawing::Point(765, 144);
			this->labelTrial3_U0_7->Name = L"labelTrial3_U0_7";
			this->labelTrial3_U0_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_7->TabIndex = 60;
			// 
			// labelTrial3_Uc_6
			// 
			this->labelTrial3_Uc_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_6->Location = System::Drawing::Point(669, 228);
			this->labelTrial3_Uc_6->Name = L"labelTrial3_Uc_6";
			this->labelTrial3_Uc_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_6->TabIndex = 58;
			// 
			// labelTrial3_UL_6
			// 
			this->labelTrial3_UL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_6->Location = System::Drawing::Point(669, 189);
			this->labelTrial3_UL_6->Name = L"labelTrial3_UL_6";
			this->labelTrial3_UL_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_6->TabIndex = 56;
			// 
			// labelTrial3_U0_6
			// 
			this->labelTrial3_U0_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_6->Location = System::Drawing::Point(669, 144);
			this->labelTrial3_U0_6->Name = L"labelTrial3_U0_6";
			this->labelTrial3_U0_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_6->TabIndex = 53;
			// 
			// labelTrial3_Uc_5
			// 
			this->labelTrial3_Uc_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_5->Location = System::Drawing::Point(573, 228);
			this->labelTrial3_Uc_5->Name = L"labelTrial3_Uc_5";
			this->labelTrial3_Uc_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_5->TabIndex = 51;
			// 
			// labelTrial3_UL_5
			// 
			this->labelTrial3_UL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_5->Location = System::Drawing::Point(573, 189);
			this->labelTrial3_UL_5->Name = L"labelTrial3_UL_5";
			this->labelTrial3_UL_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_5->TabIndex = 49;
			// 
			// labelTrial3_U0_5
			// 
			this->labelTrial3_U0_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_5->Location = System::Drawing::Point(573, 144);
			this->labelTrial3_U0_5->Name = L"labelTrial3_U0_5";
			this->labelTrial3_U0_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_5->TabIndex = 46;
			// 
			// labelTrial3_Uc_4
			// 
			this->labelTrial3_Uc_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_4->Location = System::Drawing::Point(477, 228);
			this->labelTrial3_Uc_4->Name = L"labelTrial3_Uc_4";
			this->labelTrial3_Uc_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_4->TabIndex = 44;
			// 
			// labelTrial3_UL_4
			// 
			this->labelTrial3_UL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_4->Location = System::Drawing::Point(477, 189);
			this->labelTrial3_UL_4->Name = L"labelTrial3_UL_4";
			this->labelTrial3_UL_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_4->TabIndex = 42;
			// 
			// labelTrial3_U0_4
			// 
			this->labelTrial3_U0_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_4->Location = System::Drawing::Point(477, 144);
			this->labelTrial3_U0_4->Name = L"labelTrial3_U0_4";
			this->labelTrial3_U0_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_4->TabIndex = 39;
			// 
			// labelTrial3_Uc_3
			// 
			this->labelTrial3_Uc_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_3->Location = System::Drawing::Point(381, 228);
			this->labelTrial3_Uc_3->Name = L"labelTrial3_Uc_3";
			this->labelTrial3_Uc_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_3->TabIndex = 37;
			// 
			// labelTrial3_UL_3
			// 
			this->labelTrial3_UL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_3->Location = System::Drawing::Point(381, 189);
			this->labelTrial3_UL_3->Name = L"labelTrial3_UL_3";
			this->labelTrial3_UL_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_3->TabIndex = 35;
			// 
			// labelTrial3_U0_3
			// 
			this->labelTrial3_U0_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_3->Location = System::Drawing::Point(381, 144);
			this->labelTrial3_U0_3->Name = L"labelTrial3_U0_3";
			this->labelTrial3_U0_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_3->TabIndex = 32;
			// 
			// labelTrial3_Uc_2
			// 
			this->labelTrial3_Uc_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_2->Location = System::Drawing::Point(282, 228);
			this->labelTrial3_Uc_2->Name = L"labelTrial3_Uc_2";
			this->labelTrial3_Uc_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_2->TabIndex = 30;
			// 
			// labelTrial3_UL_2
			// 
			this->labelTrial3_UL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_2->Location = System::Drawing::Point(285, 189);
			this->labelTrial3_UL_2->Name = L"labelTrial3_UL_2";
			this->labelTrial3_UL_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_2->TabIndex = 28;
			// 
			// labelTrial3_U0_2
			// 
			this->labelTrial3_U0_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_2->Location = System::Drawing::Point(285, 144);
			this->labelTrial3_U0_2->Name = L"labelTrial3_U0_2";
			this->labelTrial3_U0_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_2->TabIndex = 25;
			// 
			// labelTrial3_Uc_1
			// 
			this->labelTrial3_Uc_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_Uc_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_Uc_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_Uc_1->Location = System::Drawing::Point(186, 228);
			this->labelTrial3_Uc_1->Name = L"labelTrial3_Uc_1";
			this->labelTrial3_Uc_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_Uc_1->TabIndex = 23;
			// 
			// labelTrial3_UL_1
			// 
			this->labelTrial3_UL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_UL_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_UL_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_UL_1->Location = System::Drawing::Point(189, 189);
			this->labelTrial3_UL_1->Name = L"labelTrial3_UL_1";
			this->labelTrial3_UL_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_UL_1->TabIndex = 21;
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(25, 228);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(140, 25);
			this->label14->TabIndex = 20;
			this->label14->Text = L"UC（v）";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(28, 189);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(140, 25);
			this->label9->TabIndex = 16;
			this->label9->Text = L"UL（v）";
			// 
			// labelTrial3_U0_1
			// 
			this->labelTrial3_U0_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_U0_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_U0_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_U0_1->Location = System::Drawing::Point(189, 144);
			this->labelTrial3_U0_1->Name = L"labelTrial3_U0_1";
			this->labelTrial3_U0_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial3_U0_1->TabIndex = 14;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(28, 144);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 25);
			this->label11->TabIndex = 13;
			this->label11->Text = L"UO（v）";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(28, 95);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(140, 25);
			this->label12->TabIndex = 11;
			this->label12->Text = L"频率F（KHz）";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(24, 45);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(1161, 44);
			this->label13->TabIndex = 0;
			this->label13->Text = L"    在谐振点两侧，按频率递增或递减500Hz或1KHz，依次各取8个测量点，逐点测出U0，UL，Uc之值，记入数据表格。";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBoxTrial5F2_F1);
			this->groupBox4->Controls->Add(this->textBoxTrial5_Q);
			this->groupBox4->Controls->Add(this->textBoxTrial5_Fo);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F8);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F7);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F6);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F5);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F4);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F3);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F2);
			this->groupBox4->Controls->Add(this->textBoxTrial5_F1);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->textBoxTrial5Score);
			this->groupBox4->Controls->Add(this->label72);
			this->groupBox4->Controls->Add(this->label73);
			this->groupBox4->Controls->Add(this->label74);
			this->groupBox4->Controls->Add(this->label75);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_8);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_8);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_8);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_7);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_7);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_7);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_6);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_6);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_6);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_5);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_5);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_5);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_4);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_4);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_4);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_3);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_3);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_3);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_2);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_2);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_2);
			this->groupBox4->Controls->Add(this->labelTrial5_Uc_1);
			this->groupBox4->Controls->Add(this->labelTrial5_UL_1);
			this->groupBox4->Controls->Add(this->label123);
			this->groupBox4->Controls->Add(this->label124);
			this->groupBox4->Controls->Add(this->labelTrial5_U0_1);
			this->groupBox4->Controls->Add(this->label126);
			this->groupBox4->Controls->Add(this->label127);
			this->groupBox4->Controls->Add(this->label128);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->ForeColor = System::Drawing::Color::Red;
			this->groupBox4->Location = System::Drawing::Point(13, 390);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1282, 309);
			this->groupBox4->TabIndex = 205;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"RLC元件阻抗特性的测定 实验内容5";
			// 
			// textBoxTrial5F2_F1
			// 
			this->textBoxTrial5F2_F1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5F2_F1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5F2_F1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5F2_F1->Location = System::Drawing::Point(669, 269);
			this->textBoxTrial5F2_F1->Name = L"textBoxTrial5F2_F1";
			this->textBoxTrial5F2_F1->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5F2_F1->TabIndex = 247;
			// 
			// textBoxTrial5_Q
			// 
			this->textBoxTrial5_Q->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5_Q->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5_Q->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5_Q->Location = System::Drawing::Point(468, 270);
			this->textBoxTrial5_Q->Name = L"textBoxTrial5_Q";
			this->textBoxTrial5_Q->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5_Q->TabIndex = 246;
			// 
			// textBoxTrial5_Fo
			// 
			this->textBoxTrial5_Fo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5_Fo->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5_Fo->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5_Fo->Location = System::Drawing::Point(273, 269);
			this->textBoxTrial5_Fo->Name = L"textBoxTrial5_Fo";
			this->textBoxTrial5_Fo->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5_Fo->TabIndex = 245;
			// 
			// textBoxTrial5_F8
			// 
			this->textBoxTrial5_F8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5_F8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5_F8->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5_F8->Location = System::Drawing::Point(861, 95);
			this->textBoxTrial5_F8->Name = L"textBoxTrial5_F8";
			this->textBoxTrial5_F8->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5_F8->TabIndex = 236;
			// 
			// textBoxTrial5_F7
			// 
			this->textBoxTrial5_F7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5_F7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5_F7->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5_F7->Location = System::Drawing::Point(765, 95);
			this->textBoxTrial5_F7->Name = L"textBoxTrial5_F7";
			this->textBoxTrial5_F7->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5_F7->TabIndex = 235;
			// 
			// textBoxTrial5_F6
			// 
			this->textBoxTrial5_F6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5_F6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5_F6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5_F6->Location = System::Drawing::Point(669, 95);
			this->textBoxTrial5_F6->Name = L"textBoxTrial5_F6";
			this->textBoxTrial5_F6->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5_F6->TabIndex = 234;
			// 
			// textBoxTrial5_F5
			// 
			this->textBoxTrial5_F5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5_F5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5_F5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5_F5->Location = System::Drawing::Point(573, 95);
			this->textBoxTrial5_F5->Name = L"textBoxTrial5_F5";
			this->textBoxTrial5_F5->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5_F5->TabIndex = 233;
			// 
			// textBoxTrial5_F4
			// 
			this->textBoxTrial5_F4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5_F4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5_F4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5_F4->Location = System::Drawing::Point(477, 95);
			this->textBoxTrial5_F4->Name = L"textBoxTrial5_F4";
			this->textBoxTrial5_F4->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5_F4->TabIndex = 232;
			// 
			// textBoxTrial5_F3
			// 
			this->textBoxTrial5_F3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5_F3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5_F3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5_F3->Location = System::Drawing::Point(381, 95);
			this->textBoxTrial5_F3->Name = L"textBoxTrial5_F3";
			this->textBoxTrial5_F3->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5_F3->TabIndex = 231;
			// 
			// textBoxTrial5_F2
			// 
			this->textBoxTrial5_F2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5_F2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5_F2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5_F2->Location = System::Drawing::Point(285, 95);
			this->textBoxTrial5_F2->Name = L"textBoxTrial5_F2";
			this->textBoxTrial5_F2->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5_F2->TabIndex = 230;
			// 
			// textBoxTrial5_F1
			// 
			this->textBoxTrial5_F1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial5_F1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial5_F1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial5_F1->Location = System::Drawing::Point(189, 95);
			this->textBoxTrial5_F1->Name = L"textBoxTrial5_F1";
			this->textBoxTrial5_F1->Size = System::Drawing::Size(90, 25);
			this->textBoxTrial5_F1->TabIndex = 229;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(832, 270);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(89, 20);
			this->label15->TabIndex = 228;
			this->label15->Text = L"请打分：";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(1109, 270);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(129, 20);
			this->label16->TabIndex = 227;
			this->label16->Text = L"本项目总分30";
			// 
			// textBoxTrial5Score
			// 
			this->textBoxTrial5Score->Location = System::Drawing::Point(934, 267);
			this->textBoxTrial5Score->Name = L"textBoxTrial5Score";
			this->textBoxTrial5Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial5Score->TabIndex = 226;
			this->textBoxTrial5Score->TextChanged += gcnew System::EventHandler(this, &RLC串联谐振电路的研究::textBoxTrial5Score_TextChanged);
			// 
			// label72
			// 
			this->label72->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label72->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label72->ForeColor = System::Drawing::Color::Black;
			this->label72->Location = System::Drawing::Point(587, 269);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(76, 25);
			this->label72->TabIndex = 135;
			this->label72->Text = L"F2-F1=";
			// 
			// label73
			// 
			this->label73->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label73->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label73->ForeColor = System::Drawing::Color::Black;
			this->label73->Location = System::Drawing::Point(408, 269);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(54, 25);
			this->label73->TabIndex = 133;
			this->label73->Text = L"Q=";
			// 
			// label74
			// 
			this->label74->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label74->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label74->ForeColor = System::Drawing::Color::Black;
			this->label74->Location = System::Drawing::Point(213, 269);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(54, 25);
			this->label74->TabIndex = 131;
			this->label74->Text = L"Fo=";
			// 
			// label75
			// 
			this->label75->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label75->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label75->ForeColor = System::Drawing::Color::Black;
			this->label75->Location = System::Drawing::Point(16, 269);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(173, 25);
			this->label75->TabIndex = 130;
			this->label75->Text = L"Ui=3V，R=1KΩ";
			// 
			// labelTrial5_Uc_8
			// 
			this->labelTrial5_Uc_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_8->Location = System::Drawing::Point(861, 223);
			this->labelTrial5_Uc_8->Name = L"labelTrial5_Uc_8";
			this->labelTrial5_Uc_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_8->TabIndex = 72;
			// 
			// labelTrial5_UL_8
			// 
			this->labelTrial5_UL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_8->Location = System::Drawing::Point(861, 182);
			this->labelTrial5_UL_8->Name = L"labelTrial5_UL_8";
			this->labelTrial5_UL_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_8->TabIndex = 70;
			// 
			// labelTrial5_U0_8
			// 
			this->labelTrial5_U0_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_8->Location = System::Drawing::Point(861, 144);
			this->labelTrial5_U0_8->Name = L"labelTrial5_U0_8";
			this->labelTrial5_U0_8->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_8->TabIndex = 67;
			// 
			// labelTrial5_Uc_7
			// 
			this->labelTrial5_Uc_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_7->Location = System::Drawing::Point(765, 223);
			this->labelTrial5_Uc_7->Name = L"labelTrial5_Uc_7";
			this->labelTrial5_Uc_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_7->TabIndex = 65;
			// 
			// labelTrial5_UL_7
			// 
			this->labelTrial5_UL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_7->Location = System::Drawing::Point(765, 182);
			this->labelTrial5_UL_7->Name = L"labelTrial5_UL_7";
			this->labelTrial5_UL_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_7->TabIndex = 63;
			// 
			// labelTrial5_U0_7
			// 
			this->labelTrial5_U0_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_7->Location = System::Drawing::Point(765, 144);
			this->labelTrial5_U0_7->Name = L"labelTrial5_U0_7";
			this->labelTrial5_U0_7->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_7->TabIndex = 60;
			// 
			// labelTrial5_Uc_6
			// 
			this->labelTrial5_Uc_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_6->Location = System::Drawing::Point(669, 223);
			this->labelTrial5_Uc_6->Name = L"labelTrial5_Uc_6";
			this->labelTrial5_Uc_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_6->TabIndex = 58;
			// 
			// labelTrial5_UL_6
			// 
			this->labelTrial5_UL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_6->Location = System::Drawing::Point(669, 182);
			this->labelTrial5_UL_6->Name = L"labelTrial5_UL_6";
			this->labelTrial5_UL_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_6->TabIndex = 56;
			// 
			// labelTrial5_U0_6
			// 
			this->labelTrial5_U0_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_6->Location = System::Drawing::Point(669, 144);
			this->labelTrial5_U0_6->Name = L"labelTrial5_U0_6";
			this->labelTrial5_U0_6->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_6->TabIndex = 53;
			// 
			// labelTrial5_Uc_5
			// 
			this->labelTrial5_Uc_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_5->Location = System::Drawing::Point(573, 223);
			this->labelTrial5_Uc_5->Name = L"labelTrial5_Uc_5";
			this->labelTrial5_Uc_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_5->TabIndex = 51;
			// 
			// labelTrial5_UL_5
			// 
			this->labelTrial5_UL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_5->Location = System::Drawing::Point(573, 182);
			this->labelTrial5_UL_5->Name = L"labelTrial5_UL_5";
			this->labelTrial5_UL_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_5->TabIndex = 49;
			// 
			// labelTrial5_U0_5
			// 
			this->labelTrial5_U0_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_5->Location = System::Drawing::Point(573, 144);
			this->labelTrial5_U0_5->Name = L"labelTrial5_U0_5";
			this->labelTrial5_U0_5->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_5->TabIndex = 46;
			// 
			// labelTrial5_Uc_4
			// 
			this->labelTrial5_Uc_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_4->Location = System::Drawing::Point(477, 223);
			this->labelTrial5_Uc_4->Name = L"labelTrial5_Uc_4";
			this->labelTrial5_Uc_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_4->TabIndex = 44;
			// 
			// labelTrial5_UL_4
			// 
			this->labelTrial5_UL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_4->Location = System::Drawing::Point(477, 182);
			this->labelTrial5_UL_4->Name = L"labelTrial5_UL_4";
			this->labelTrial5_UL_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_4->TabIndex = 42;
			// 
			// labelTrial5_U0_4
			// 
			this->labelTrial5_U0_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_4->Location = System::Drawing::Point(477, 144);
			this->labelTrial5_U0_4->Name = L"labelTrial5_U0_4";
			this->labelTrial5_U0_4->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_4->TabIndex = 39;
			// 
			// labelTrial5_Uc_3
			// 
			this->labelTrial5_Uc_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_3->Location = System::Drawing::Point(381, 223);
			this->labelTrial5_Uc_3->Name = L"labelTrial5_Uc_3";
			this->labelTrial5_Uc_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_3->TabIndex = 37;
			// 
			// labelTrial5_UL_3
			// 
			this->labelTrial5_UL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_3->Location = System::Drawing::Point(381, 182);
			this->labelTrial5_UL_3->Name = L"labelTrial5_UL_3";
			this->labelTrial5_UL_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_3->TabIndex = 35;
			// 
			// labelTrial5_U0_3
			// 
			this->labelTrial5_U0_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_3->Location = System::Drawing::Point(381, 144);
			this->labelTrial5_U0_3->Name = L"labelTrial5_U0_3";
			this->labelTrial5_U0_3->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_3->TabIndex = 32;
			// 
			// labelTrial5_Uc_2
			// 
			this->labelTrial5_Uc_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_2->Location = System::Drawing::Point(285, 223);
			this->labelTrial5_Uc_2->Name = L"labelTrial5_Uc_2";
			this->labelTrial5_Uc_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_2->TabIndex = 30;
			// 
			// labelTrial5_UL_2
			// 
			this->labelTrial5_UL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_2->Location = System::Drawing::Point(285, 182);
			this->labelTrial5_UL_2->Name = L"labelTrial5_UL_2";
			this->labelTrial5_UL_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_2->TabIndex = 28;
			// 
			// labelTrial5_U0_2
			// 
			this->labelTrial5_U0_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_2->Location = System::Drawing::Point(285, 144);
			this->labelTrial5_U0_2->Name = L"labelTrial5_U0_2";
			this->labelTrial5_U0_2->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_2->TabIndex = 25;
			// 
			// labelTrial5_Uc_1
			// 
			this->labelTrial5_Uc_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_Uc_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_Uc_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_Uc_1->Location = System::Drawing::Point(189, 223);
			this->labelTrial5_Uc_1->Name = L"labelTrial5_Uc_1";
			this->labelTrial5_Uc_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_Uc_1->TabIndex = 23;
			// 
			// labelTrial5_UL_1
			// 
			this->labelTrial5_UL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_UL_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_UL_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_UL_1->Location = System::Drawing::Point(189, 182);
			this->labelTrial5_UL_1->Name = L"labelTrial5_UL_1";
			this->labelTrial5_UL_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_UL_1->TabIndex = 21;
			// 
			// label123
			// 
			this->label123->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label123->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label123->ForeColor = System::Drawing::Color::Black;
			this->label123->Location = System::Drawing::Point(28, 223);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(140, 25);
			this->label123->TabIndex = 20;
			this->label123->Text = L"UC（v）";
			// 
			// label124
			// 
			this->label124->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label124->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label124->ForeColor = System::Drawing::Color::Black;
			this->label124->Location = System::Drawing::Point(28, 182);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(140, 25);
			this->label124->TabIndex = 16;
			this->label124->Text = L"UL（v）";
			// 
			// labelTrial5_U0_1
			// 
			this->labelTrial5_U0_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial5_U0_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial5_U0_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial5_U0_1->Location = System::Drawing::Point(189, 144);
			this->labelTrial5_U0_1->Name = L"labelTrial5_U0_1";
			this->labelTrial5_U0_1->Size = System::Drawing::Size(90, 25);
			this->labelTrial5_U0_1->TabIndex = 14;
			// 
			// label126
			// 
			this->label126->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label126->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label126->ForeColor = System::Drawing::Color::Black;
			this->label126->Location = System::Drawing::Point(28, 144);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(140, 25);
			this->label126->TabIndex = 13;
			this->label126->Text = L"UO（v）";
			// 
			// label127
			// 
			this->label127->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label127->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label127->ForeColor = System::Drawing::Color::Black;
			this->label127->Location = System::Drawing::Point(28, 95);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(140, 25);
			this->label127->TabIndex = 11;
			this->label127->Text = L"频率F（KHz）";
			// 
			// label128
			// 
			this->label128->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label128->ForeColor = System::Drawing::Color::Black;
			this->label128->Location = System::Drawing::Point(24, 45);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(1161, 44);
			this->label128->TabIndex = 0;
			this->label128->Text = L"    在谐振点两侧，按频率递增或递减500Hz或1KHz，依次各取8个测量点，逐点测出U0，UL，Uc之值，记入数据表格。";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBoxTrial4_F);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->textBoxTrial3Score);
			this->groupBox3->Controls->Add(this->labelTrial4_UL);
			this->groupBox3->Controls->Add(this->label67);
			this->groupBox3->Controls->Add(this->labelTrial4_Uc);
			this->groupBox3->Controls->Add(this->label69);
			this->groupBox3->Controls->Add(this->label70);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(13, 1124);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1047, 192);
			this->groupBox3->TabIndex = 206;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"RLC元件阻抗特性的测定 实验内容4";
			// 
			// textBoxTrial4_F
			// 
			this->textBoxTrial4_F->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_F->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial4_F->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial4_F->Location = System::Drawing::Point(300, 48);
			this->textBoxTrial4_F->Name = L"textBoxTrial4_F";
			this->textBoxTrial4_F->Size = System::Drawing::Size(179, 25);
			this->textBoxTrial4_F->TabIndex = 226;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(515, 145);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 20);
			this->label8->TabIndex = 225;
			this->label8->Text = L"请打分：";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(792, 145);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 20);
			this->label10->TabIndex = 224;
			this->label10->Text = L"本项目总分30";
			// 
			// textBoxTrial3Score
			// 
			this->textBoxTrial3Score->Location = System::Drawing::Point(617, 142);
			this->textBoxTrial3Score->Name = L"textBoxTrial3Score";
			this->textBoxTrial3Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial3Score->TabIndex = 223;
			this->textBoxTrial3Score->TextChanged += gcnew System::EventHandler(this, &RLC串联谐振电路的研究::textBoxTrial3Score_TextChanged);
			// 
			// labelTrial4_UL
			// 
			this->labelTrial4_UL->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial4_UL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial4_UL->ForeColor = System::Drawing::Color::Black;
			this->labelTrial4_UL->Location = System::Drawing::Point(300, 145);
			this->labelTrial4_UL->Name = L"labelTrial4_UL";
			this->labelTrial4_UL->Size = System::Drawing::Size(179, 25);
			this->labelTrial4_UL->TabIndex = 17;
			// 
			// label67
			// 
			this->label67->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label67->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label67->ForeColor = System::Drawing::Color::Black;
			this->label67->Location = System::Drawing::Point(39, 145);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(230, 25);
			this->label67->TabIndex = 16;
			this->label67->Text = L"UL";
			// 
			// labelTrial4_Uc
			// 
			this->labelTrial4_Uc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial4_Uc->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial4_Uc->ForeColor = System::Drawing::Color::Black;
			this->labelTrial4_Uc->Location = System::Drawing::Point(300, 97);
			this->labelTrial4_Uc->Name = L"labelTrial4_Uc";
			this->labelTrial4_Uc->Size = System::Drawing::Size(179, 25);
			this->labelTrial4_Uc->TabIndex = 14;
			// 
			// label69
			// 
			this->label69->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label69->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label69->ForeColor = System::Drawing::Color::Black;
			this->label69->Location = System::Drawing::Point(39, 97);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(230, 25);
			this->label69->TabIndex = 13;
			this->label69->Text = L"Uc";
			// 
			// label70
			// 
			this->label70->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label70->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label70->ForeColor = System::Drawing::Color::Black;
			this->label70->Location = System::Drawing::Point(39, 48);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(230, 25);
			this->label70->TabIndex = 11;
			this->label70->Text = L"频率F（KHz）";
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(9, 728);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 332;
			this->label105->Text = L"实验结论";
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(11, 772);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(640, 73);
			this->groupBox14->TabIndex = 334;
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(899, 798);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 336;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1012, 798);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 337;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(792, 798);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 335;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RLC串联谐振电路的研究::button1_Click);
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
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &RLC串联谐振电路的研究::printDocument1_PrintPage);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Location = System::Drawing::Point(66, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1129, 1331);
			this->panel1->TabIndex = 338;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox结论);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox4);
			this->panel2->Controls->Add(this->label105);
			this->panel2->Controls->Add(this->groupBox14);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(66, 1379);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1339, 859);
			this->panel2->TabIndex = 339;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RLC串联谐振电路的研究::panel2_Paint);
			// 
			// textBox结论
			// 
			this->textBox结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->ForeColor = System::Drawing::Color::Black;
			this->textBox结论->Location = System::Drawing::Point(146, 725);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1154, 28);
			this->textBox结论->TabIndex = 248;
			// 
			// RLC串联谐振电路的研究
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1567, 839);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"RLC串联谐振电路的研究";
			this->Text = L"RLC串联谐振电路的研究";
			this->Load += gcnew System::EventHandler(this, &RLC串联谐振电路的研究::RLC串联谐振电路的研究_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
		Bitmap ^ _NewBitmap;
		int x;
		int y;
		if (SelectedArea == "panel1") {
			_NewBitmap = gcnew  Bitmap(panel1->Width, panel1->Height);
			panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));
	
			x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
			y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
		}
		else {
			_NewBitmap = gcnew  Bitmap(panel2->Width, panel2->Height);
			panel2->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel2->Width, panel2->Height));
			x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
			y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
		}
		e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);
	}
			 String ^SelectedArea = "";
			 void  Priview();
			 void Print();
		public:void LoadRLC串联谐振电路的研究Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
private: System::Void RLC串联谐振电路的研究_Load(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void textBoxTrial5Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial3Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial4Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
