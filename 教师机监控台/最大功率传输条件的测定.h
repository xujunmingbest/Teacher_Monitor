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
	/// 最大功率传输条件的测定 摘要
	/// </summary>
	public ref class 最大功率传输条件的测定 : public System::Windows::Forms::Form
	{
	public:
		最大功率传输条件的测定(void)
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
		~最大功率传输条件的测定()
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

























	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  labelTrial1_Uo9;
	private: System::Windows::Forms::Label^  labelTrial1_Uo8;
	private: System::Windows::Forms::Label^  labelTrial1_Uo7;
	private: System::Windows::Forms::Label^  labelTrial1_Uo6;
	private: System::Windows::Forms::Label^  labelTrial1_Uo5;
	private: System::Windows::Forms::Label^  labelTrial1_Uo4;
	private: System::Windows::Forms::Label^  labelTrial1_Uo3;
	private: System::Windows::Forms::Label^  labelTrial1_Uo2;
	private: System::Windows::Forms::Label^  labelTrial1_Uo1;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelTrial1_IUL9;
	private: System::Windows::Forms::Label^  labelTrial1_IUL8;
	private: System::Windows::Forms::Label^  labelTrial1_IUL7;
	private: System::Windows::Forms::Label^  labelTrial1_IUL6;
	private: System::Windows::Forms::Label^  labelTrial1_IUL5;
	private: System::Windows::Forms::Label^  labelTrial1_IUL4;
	private: System::Windows::Forms::Label^  labelTrial1_IUL3;
	private: System::Windows::Forms::Label^  labelTrial1_IUL2;
	private: System::Windows::Forms::Label^  labelTrial1_IUL1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labelTrial1_I9;
	private: System::Windows::Forms::Label^  labelTrial1_I8;
	private: System::Windows::Forms::Label^  labelTrial1_I7;
	private: System::Windows::Forms::Label^  labelTrial1_I6;
	private: System::Windows::Forms::Label^  labelTrial1_I5;
	private: System::Windows::Forms::Label^  labelTrial1_I4;
	private: System::Windows::Forms::Label^  labelTrial1_I3;
	private: System::Windows::Forms::Label^  labelTrial1_I2;
	private: System::Windows::Forms::Label^  labelTrial1_I1;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  labelMethod2URL2;
	private: System::Windows::Forms::Label^  labelMethod2URL1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  textBoxScore1;

private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Label^  label6;

private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  textBoxScore2;


























private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  labelTrial2_Uo9;
private: System::Windows::Forms::Label^  labelTrial2_Uo8;
private: System::Windows::Forms::Label^  labelTrial2_Uo7;
private: System::Windows::Forms::Label^  labelTrial2_Uo6;
private: System::Windows::Forms::Label^  labelTrial2_Uo5;
private: System::Windows::Forms::Label^  labelTrial2_Uo4;
private: System::Windows::Forms::Label^  labelTrial2_Uo3;
private: System::Windows::Forms::Label^  labelTrial2_Uo2;
private: System::Windows::Forms::Label^  labelTrial2_Uo1;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  labeltrial2_UL9;
private: System::Windows::Forms::Label^  labeltrial2_UL8;
private: System::Windows::Forms::Label^  labeltrial2_UL7;
private: System::Windows::Forms::Label^  labeltrial2_UL6;
private: System::Windows::Forms::Label^  labeltrial2_UL5;
private: System::Windows::Forms::Label^  labeltrial2_UL4;
private: System::Windows::Forms::Label^  labeltrial2_UL3;
private: System::Windows::Forms::Label^  labeltrial2_UL2;
private: System::Windows::Forms::Label^  labeltrial2_UL1;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  labeltrial2_I9;
private: System::Windows::Forms::Label^  labeltrial2_I8;
private: System::Windows::Forms::Label^  labeltrial2_I7;
private: System::Windows::Forms::Label^  labeltrial2_I6;
private: System::Windows::Forms::Label^  labeltrial2_I5;
private: System::Windows::Forms::Label^  labeltrial2_I4;
private: System::Windows::Forms::Label^  labeltrial2_I3;
private: System::Windows::Forms::Label^  labeltrial2_I2;
private: System::Windows::Forms::Label^  labeltrial2_I1;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::Label^  labelTotalGrade;

private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Label^  labelTrial1_Po9;

private: System::Windows::Forms::Label^  labelTrial1_Po8;

private: System::Windows::Forms::Label^  labelTrial1_Po7;

private: System::Windows::Forms::Label^  labelTrial1_Po6;

private: System::Windows::Forms::Label^  labelTrial1_Po5;

private: System::Windows::Forms::Label^  labelTrial1_Po4;

private: System::Windows::Forms::Label^  labelTrial1_Po3;

private: System::Windows::Forms::Label^  labelTrial1_Po2;

private: System::Windows::Forms::Label^  labelTrial1_Po1;

private: System::Windows::Forms::Label^  labelTrial1_PL9;

private: System::Windows::Forms::Label^  labelTrial1_RL8;
private: System::Windows::Forms::Label^  labelTrial1_PL1;




private: System::Windows::Forms::Label^  labelTrial1_RL6;
private: System::Windows::Forms::Label^  labelTrial1_PL8;


private: System::Windows::Forms::Label^  labelTrial1_RL5;
private: System::Windows::Forms::Label^  labelTrial1_PL2;
private: System::Windows::Forms::Label^  labelTrial1_PL3;



private: System::Windows::Forms::Label^  labelTrial1_RL4;
private: System::Windows::Forms::Label^  labelTrial1_PL7;



private: System::Windows::Forms::Label^  labelTrial1_RL3;
private: System::Windows::Forms::Label^  labelTrial1_PL4;


private: System::Windows::Forms::Label^  labelTrial1_RL2;
private: System::Windows::Forms::Label^  labelTrial1_PL5;
private: System::Windows::Forms::Label^  labelTrial1_PL6;
private: System::Windows::Forms::Label^  labelTrial2_Po9;




private: System::Windows::Forms::Label^  labelTrial2_Po8;


private: System::Windows::Forms::Label^  labelTrial2_Po6;

private: System::Windows::Forms::Label^  labelTrial2_Po5;

private: System::Windows::Forms::Label^  labelTrial2_Po4;

private: System::Windows::Forms::Label^  labelTrial2_Po3;

private: System::Windows::Forms::Label^  labelTrial2_Po2;

private: System::Windows::Forms::Label^  labelTrial2_Po1;

private: System::Windows::Forms::Label^  labelTrial2_PL9;

private: System::Windows::Forms::Label^  labelTrial2_PL8;

private: System::Windows::Forms::Label^  labelTrial2_PL7;

private: System::Windows::Forms::Label^  labelTrial2_PL6;

private: System::Windows::Forms::Label^  labelTrial2_PL5;

private: System::Windows::Forms::Label^  labelTrial2_PL4;

private: System::Windows::Forms::Label^  labelTrial2_PL3;

private: System::Windows::Forms::Label^  labelTrial2_PL2;

private: System::Windows::Forms::Label^  labelTrial2_PL1;


private: System::Windows::Forms::Label^  labelTrial2_RL8;

private: System::Windows::Forms::Label^  labelTrial2_RL7;

private: System::Windows::Forms::Label^  labelTrial2_RL6;

private: System::Windows::Forms::Label^  labelTrial2_RL5;

private: System::Windows::Forms::Label^  labelTrial2_RL4;

private: System::Windows::Forms::Label^  labelTrial2_RL3;

private: System::Windows::Forms::Label^  labelTrial2_RL2;


private: System::Windows::Forms::Label^  labelTrial1_RL7;
private: System::Windows::Forms::Label^  labelTrial2_Po7;
private: System::Windows::Forms::Label^  label结论;
private: System::Windows::Forms::Label^  label64;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(最大功率传输条件的测定::typeid));
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
			this->labelTrial1_Po9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Po8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Po7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Po6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Po5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Po4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Po3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Po2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Po1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PL9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_RL8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_RL7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PL1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_RL6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PL8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_RL5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PL2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PL3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_RL4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PL7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_RL3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PL4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_RL2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PL5 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_PL6 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBoxScore1 = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Uo1 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_IUL1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_I1 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL2 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTrial2_Po9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Po8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Po7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Po6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Po5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Po4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Po3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Po2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Po1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_PL9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_PL8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_PL7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_PL6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_PL5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_PL4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_PL3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_PL2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_PL1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_RL8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_RL7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_RL6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_RL5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_RL4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_RL3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_RL2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxScore2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo9 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo8 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo7 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Uo1 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL9 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_UL1 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I9 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_I1 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label结论 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->groupBox7->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(13, 22);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(646, 314);
			this->groupBox7->TabIndex = 200;
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
			this->groupBox1->Controls->Add(this->labelTrial1_Po9);
			this->groupBox1->Controls->Add(this->labelTrial1_Po8);
			this->groupBox1->Controls->Add(this->labelTrial1_Po7);
			this->groupBox1->Controls->Add(this->labelTrial1_Po6);
			this->groupBox1->Controls->Add(this->labelTrial1_Po5);
			this->groupBox1->Controls->Add(this->labelTrial1_Po4);
			this->groupBox1->Controls->Add(this->labelTrial1_Po3);
			this->groupBox1->Controls->Add(this->labelTrial1_Po2);
			this->groupBox1->Controls->Add(this->labelTrial1_Po1);
			this->groupBox1->Controls->Add(this->labelTrial1_PL9);
			this->groupBox1->Controls->Add(this->labelTrial1_RL8);
			this->groupBox1->Controls->Add(this->labelTrial1_RL7);
			this->groupBox1->Controls->Add(this->labelTrial1_PL1);
			this->groupBox1->Controls->Add(this->labelTrial1_RL6);
			this->groupBox1->Controls->Add(this->labelTrial1_PL8);
			this->groupBox1->Controls->Add(this->labelTrial1_RL5);
			this->groupBox1->Controls->Add(this->labelTrial1_PL2);
			this->groupBox1->Controls->Add(this->labelTrial1_PL3);
			this->groupBox1->Controls->Add(this->labelTrial1_RL4);
			this->groupBox1->Controls->Add(this->labelTrial1_PL7);
			this->groupBox1->Controls->Add(this->labelTrial1_RL3);
			this->groupBox1->Controls->Add(this->labelTrial1_PL4);
			this->groupBox1->Controls->Add(this->labelTrial1_RL2);
			this->groupBox1->Controls->Add(this->labelTrial1_PL5);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->labelTrial1_PL6);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->textBoxScore1);
			this->groupBox1->Controls->Add(this->label60);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo9);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo8);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo7);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo6);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo5);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo4);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo3);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo2);
			this->groupBox1->Controls->Add(this->labelTrial1_Uo1);
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL9);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL8);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL7);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL6);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL5);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL4);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL3);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL2);
			this->groupBox1->Controls->Add(this->labelTrial1_IUL1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->labelTrial1_I9);
			this->groupBox1->Controls->Add(this->labelTrial1_I8);
			this->groupBox1->Controls->Add(this->labelTrial1_I7);
			this->groupBox1->Controls->Add(this->labelTrial1_I6);
			this->groupBox1->Controls->Add(this->labelTrial1_I5);
			this->groupBox1->Controls->Add(this->labelTrial1_I4);
			this->groupBox1->Controls->Add(this->labelTrial1_I3);
			this->groupBox1->Controls->Add(this->labelTrial1_I2);
			this->groupBox1->Controls->Add(this->labelTrial1_I1);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->labelMethod2URL2);
			this->groupBox1->Controls->Add(this->labelMethod2URL1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(9, 342);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 550);
			this->groupBox1->TabIndex = 201;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容一";
			// 
			// labelTrial1_Po9
			// 
			this->labelTrial1_Po9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Po9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Po9->Location = System::Drawing::Point(985, 440);
			this->labelTrial1_Po9->Name = L"labelTrial1_Po9";
			this->labelTrial1_Po9->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Po9->TabIndex = 331;
			this->labelTrial1_Po9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Po8
			// 
			this->labelTrial1_Po8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Po8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Po8->Location = System::Drawing::Point(879, 440);
			this->labelTrial1_Po8->Name = L"labelTrial1_Po8";
			this->labelTrial1_Po8->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Po8->TabIndex = 330;
			this->labelTrial1_Po8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Po7
			// 
			this->labelTrial1_Po7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Po7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Po7->Location = System::Drawing::Point(775, 440);
			this->labelTrial1_Po7->Name = L"labelTrial1_Po7";
			this->labelTrial1_Po7->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Po7->TabIndex = 329;
			this->labelTrial1_Po7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Po6
			// 
			this->labelTrial1_Po6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Po6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Po6->Location = System::Drawing::Point(669, 440);
			this->labelTrial1_Po6->Name = L"labelTrial1_Po6";
			this->labelTrial1_Po6->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Po6->TabIndex = 328;
			this->labelTrial1_Po6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Po5
			// 
			this->labelTrial1_Po5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Po5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Po5->Location = System::Drawing::Point(565, 440);
			this->labelTrial1_Po5->Name = L"labelTrial1_Po5";
			this->labelTrial1_Po5->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Po5->TabIndex = 327;
			this->labelTrial1_Po5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Po4
			// 
			this->labelTrial1_Po4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Po4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Po4->Location = System::Drawing::Point(459, 440);
			this->labelTrial1_Po4->Name = L"labelTrial1_Po4";
			this->labelTrial1_Po4->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Po4->TabIndex = 326;
			this->labelTrial1_Po4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Po3
			// 
			this->labelTrial1_Po3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Po3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Po3->Location = System::Drawing::Point(355, 440);
			this->labelTrial1_Po3->Name = L"labelTrial1_Po3";
			this->labelTrial1_Po3->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Po3->TabIndex = 325;
			this->labelTrial1_Po3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Po2
			// 
			this->labelTrial1_Po2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Po2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Po2->Location = System::Drawing::Point(249, 440);
			this->labelTrial1_Po2->Name = L"labelTrial1_Po2";
			this->labelTrial1_Po2->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Po2->TabIndex = 324;
			this->labelTrial1_Po2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Po1
			// 
			this->labelTrial1_Po1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Po1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Po1->Location = System::Drawing::Point(145, 440);
			this->labelTrial1_Po1->Name = L"labelTrial1_Po1";
			this->labelTrial1_Po1->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Po1->TabIndex = 323;
			this->labelTrial1_Po1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_PL9
			// 
			this->labelTrial1_PL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PL9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PL9->Location = System::Drawing::Point(985, 324);
			this->labelTrial1_PL9->Name = L"labelTrial1_PL9";
			this->labelTrial1_PL9->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_PL9->TabIndex = 322;
			this->labelTrial1_PL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_RL8
			// 
			this->labelTrial1_RL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_RL8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_RL8->Location = System::Drawing::Point(882, 168);
			this->labelTrial1_RL8->Name = L"labelTrial1_RL8";
			this->labelTrial1_RL8->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_RL8->TabIndex = 313;
			this->labelTrial1_RL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_RL7
			// 
			this->labelTrial1_RL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_RL7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_RL7->Location = System::Drawing::Point(778, 168);
			this->labelTrial1_RL7->Name = L"labelTrial1_RL7";
			this->labelTrial1_RL7->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_RL7->TabIndex = 312;
			this->labelTrial1_RL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_PL1
			// 
			this->labelTrial1_PL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PL1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PL1->Location = System::Drawing::Point(145, 324);
			this->labelTrial1_PL1->Name = L"labelTrial1_PL1";
			this->labelTrial1_PL1->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_PL1->TabIndex = 314;
			this->labelTrial1_PL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_RL6
			// 
			this->labelTrial1_RL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_RL6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_RL6->Location = System::Drawing::Point(672, 168);
			this->labelTrial1_RL6->Name = L"labelTrial1_RL6";
			this->labelTrial1_RL6->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_RL6->TabIndex = 311;
			this->labelTrial1_RL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_PL8
			// 
			this->labelTrial1_PL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PL8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PL8->Location = System::Drawing::Point(879, 324);
			this->labelTrial1_PL8->Name = L"labelTrial1_PL8";
			this->labelTrial1_PL8->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_PL8->TabIndex = 321;
			this->labelTrial1_PL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_RL5
			// 
			this->labelTrial1_RL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_RL5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_RL5->Location = System::Drawing::Point(568, 168);
			this->labelTrial1_RL5->Name = L"labelTrial1_RL5";
			this->labelTrial1_RL5->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_RL5->TabIndex = 310;
			this->labelTrial1_RL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_PL2
			// 
			this->labelTrial1_PL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PL2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PL2->Location = System::Drawing::Point(249, 324);
			this->labelTrial1_PL2->Name = L"labelTrial1_PL2";
			this->labelTrial1_PL2->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_PL2->TabIndex = 315;
			this->labelTrial1_PL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_PL3
			// 
			this->labelTrial1_PL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PL3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PL3->Location = System::Drawing::Point(355, 324);
			this->labelTrial1_PL3->Name = L"labelTrial1_PL3";
			this->labelTrial1_PL3->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_PL3->TabIndex = 316;
			this->labelTrial1_PL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_RL4
			// 
			this->labelTrial1_RL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_RL4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_RL4->Location = System::Drawing::Point(462, 168);
			this->labelTrial1_RL4->Name = L"labelTrial1_RL4";
			this->labelTrial1_RL4->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_RL4->TabIndex = 309;
			this->labelTrial1_RL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_PL7
			// 
			this->labelTrial1_PL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PL7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PL7->Location = System::Drawing::Point(775, 324);
			this->labelTrial1_PL7->Name = L"labelTrial1_PL7";
			this->labelTrial1_PL7->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_PL7->TabIndex = 320;
			this->labelTrial1_PL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_RL3
			// 
			this->labelTrial1_RL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_RL3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_RL3->Location = System::Drawing::Point(358, 168);
			this->labelTrial1_RL3->Name = L"labelTrial1_RL3";
			this->labelTrial1_RL3->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_RL3->TabIndex = 308;
			this->labelTrial1_RL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_PL4
			// 
			this->labelTrial1_PL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PL4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PL4->Location = System::Drawing::Point(459, 324);
			this->labelTrial1_PL4->Name = L"labelTrial1_PL4";
			this->labelTrial1_PL4->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_PL4->TabIndex = 317;
			this->labelTrial1_PL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_RL2
			// 
			this->labelTrial1_RL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_RL2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_RL2->Location = System::Drawing::Point(252, 168);
			this->labelTrial1_RL2->Name = L"labelTrial1_RL2";
			this->labelTrial1_RL2->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_RL2->TabIndex = 307;
			this->labelTrial1_RL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_PL5
			// 
			this->labelTrial1_PL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PL5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PL5->Location = System::Drawing::Point(565, 324);
			this->labelTrial1_PL5->Name = L"labelTrial1_PL5";
			this->labelTrial1_PL5->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_PL5->TabIndex = 318;
			this->labelTrial1_PL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->Location = System::Drawing::Point(311, 508);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(89, 20);
			this->label26->TabIndex = 306;
			this->label26->Text = L"请打分：";
			// 
			// labelTrial1_PL6
			// 
			this->labelTrial1_PL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_PL6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_PL6->Location = System::Drawing::Point(669, 324);
			this->labelTrial1_PL6->Name = L"labelTrial1_PL6";
			this->labelTrial1_PL6->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_PL6->TabIndex = 319;
			this->labelTrial1_PL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->Location = System::Drawing::Point(588, 508);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(129, 20);
			this->label27->TabIndex = 305;
			this->label27->Text = L"本项目总分50";
			// 
			// textBoxScore1
			// 
			this->textBoxScore1->Location = System::Drawing::Point(413, 505);
			this->textBoxScore1->Name = L"textBoxScore1";
			this->textBoxScore1->Size = System::Drawing::Size(152, 30);
			this->textBoxScore1->TabIndex = 304;
			this->textBoxScore1->TextChanged += gcnew System::EventHandler(this, &最大功率传输条件的测定::textBoxScore1_TextChanged);
			// 
			// label60
			// 
			this->label60->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label60->ForeColor = System::Drawing::Color::Black;
			this->label60->Location = System::Drawing::Point(39, 440);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(100, 36);
			this->label60->TabIndex = 251;
			this->label60->Text = L"Po";
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo9
			// 
			this->labelTrial1_Uo9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo9->Location = System::Drawing::Point(987, 385);
			this->labelTrial1_Uo9->Name = L"labelTrial1_Uo9";
			this->labelTrial1_Uo9->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Uo9->TabIndex = 250;
			this->labelTrial1_Uo9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo8
			// 
			this->labelTrial1_Uo8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo8->Location = System::Drawing::Point(881, 385);
			this->labelTrial1_Uo8->Name = L"labelTrial1_Uo8";
			this->labelTrial1_Uo8->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Uo8->TabIndex = 249;
			this->labelTrial1_Uo8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo7
			// 
			this->labelTrial1_Uo7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo7->Location = System::Drawing::Point(777, 385);
			this->labelTrial1_Uo7->Name = L"labelTrial1_Uo7";
			this->labelTrial1_Uo7->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Uo7->TabIndex = 248;
			this->labelTrial1_Uo7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo6
			// 
			this->labelTrial1_Uo6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo6->Location = System::Drawing::Point(671, 385);
			this->labelTrial1_Uo6->Name = L"labelTrial1_Uo6";
			this->labelTrial1_Uo6->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Uo6->TabIndex = 247;
			this->labelTrial1_Uo6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo5
			// 
			this->labelTrial1_Uo5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo5->Location = System::Drawing::Point(567, 385);
			this->labelTrial1_Uo5->Name = L"labelTrial1_Uo5";
			this->labelTrial1_Uo5->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Uo5->TabIndex = 246;
			this->labelTrial1_Uo5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo4
			// 
			this->labelTrial1_Uo4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo4->Location = System::Drawing::Point(461, 385);
			this->labelTrial1_Uo4->Name = L"labelTrial1_Uo4";
			this->labelTrial1_Uo4->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Uo4->TabIndex = 245;
			this->labelTrial1_Uo4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo3
			// 
			this->labelTrial1_Uo3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo3->Location = System::Drawing::Point(357, 385);
			this->labelTrial1_Uo3->Name = L"labelTrial1_Uo3";
			this->labelTrial1_Uo3->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Uo3->TabIndex = 244;
			this->labelTrial1_Uo3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo2
			// 
			this->labelTrial1_Uo2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo2->Location = System::Drawing::Point(251, 385);
			this->labelTrial1_Uo2->Name = L"labelTrial1_Uo2";
			this->labelTrial1_Uo2->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_Uo2->TabIndex = 243;
			this->labelTrial1_Uo2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_Uo1
			// 
			this->labelTrial1_Uo1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Uo1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Uo1->Location = System::Drawing::Point(147, 385);
			this->labelTrial1_Uo1->Name = L"labelTrial1_Uo1";
			this->labelTrial1_Uo1->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_Uo1->TabIndex = 242;
			this->labelTrial1_Uo1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(41, 385);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(100, 36);
			this->label50->TabIndex = 241;
			this->label50->Text = L"Uo";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(41, 324);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 36);
			this->label1->TabIndex = 231;
			this->label1->Text = L"PL";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL9
			// 
			this->labelTrial1_IUL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL9->Location = System::Drawing::Point(985, 277);
			this->labelTrial1_IUL9->Name = L"labelTrial1_IUL9";
			this->labelTrial1_IUL9->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_IUL9->TabIndex = 230;
			this->labelTrial1_IUL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL8
			// 
			this->labelTrial1_IUL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL8->Location = System::Drawing::Point(879, 277);
			this->labelTrial1_IUL8->Name = L"labelTrial1_IUL8";
			this->labelTrial1_IUL8->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_IUL8->TabIndex = 229;
			this->labelTrial1_IUL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL7
			// 
			this->labelTrial1_IUL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL7->Location = System::Drawing::Point(775, 277);
			this->labelTrial1_IUL7->Name = L"labelTrial1_IUL7";
			this->labelTrial1_IUL7->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_IUL7->TabIndex = 228;
			this->labelTrial1_IUL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL6
			// 
			this->labelTrial1_IUL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL6->Location = System::Drawing::Point(669, 277);
			this->labelTrial1_IUL6->Name = L"labelTrial1_IUL6";
			this->labelTrial1_IUL6->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_IUL6->TabIndex = 227;
			this->labelTrial1_IUL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL5
			// 
			this->labelTrial1_IUL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL5->Location = System::Drawing::Point(565, 277);
			this->labelTrial1_IUL5->Name = L"labelTrial1_IUL5";
			this->labelTrial1_IUL5->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_IUL5->TabIndex = 226;
			this->labelTrial1_IUL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL4
			// 
			this->labelTrial1_IUL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL4->Location = System::Drawing::Point(459, 277);
			this->labelTrial1_IUL4->Name = L"labelTrial1_IUL4";
			this->labelTrial1_IUL4->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_IUL4->TabIndex = 225;
			this->labelTrial1_IUL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL3
			// 
			this->labelTrial1_IUL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL3->Location = System::Drawing::Point(355, 277);
			this->labelTrial1_IUL3->Name = L"labelTrial1_IUL3";
			this->labelTrial1_IUL3->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_IUL3->TabIndex = 224;
			this->labelTrial1_IUL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL2
			// 
			this->labelTrial1_IUL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL2->Location = System::Drawing::Point(249, 277);
			this->labelTrial1_IUL2->Name = L"labelTrial1_IUL2";
			this->labelTrial1_IUL2->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_IUL2->TabIndex = 223;
			this->labelTrial1_IUL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_IUL1
			// 
			this->labelTrial1_IUL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_IUL1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_IUL1->Location = System::Drawing::Point(145, 277);
			this->labelTrial1_IUL1->Name = L"labelTrial1_IUL1";
			this->labelTrial1_IUL1->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_IUL1->TabIndex = 222;
			this->labelTrial1_IUL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(39, 277);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 36);
			this->label2->TabIndex = 221;
			this->label2->Text = L"UL";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I9
			// 
			this->labelTrial1_I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I9->Location = System::Drawing::Point(987, 224);
			this->labelTrial1_I9->Name = L"labelTrial1_I9";
			this->labelTrial1_I9->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_I9->TabIndex = 220;
			this->labelTrial1_I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I8
			// 
			this->labelTrial1_I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I8->Location = System::Drawing::Point(881, 224);
			this->labelTrial1_I8->Name = L"labelTrial1_I8";
			this->labelTrial1_I8->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_I8->TabIndex = 219;
			this->labelTrial1_I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I7
			// 
			this->labelTrial1_I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I7->Location = System::Drawing::Point(777, 224);
			this->labelTrial1_I7->Name = L"labelTrial1_I7";
			this->labelTrial1_I7->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_I7->TabIndex = 218;
			this->labelTrial1_I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I6
			// 
			this->labelTrial1_I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I6->Location = System::Drawing::Point(671, 224);
			this->labelTrial1_I6->Name = L"labelTrial1_I6";
			this->labelTrial1_I6->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_I6->TabIndex = 217;
			this->labelTrial1_I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I5
			// 
			this->labelTrial1_I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I5->Location = System::Drawing::Point(567, 224);
			this->labelTrial1_I5->Name = L"labelTrial1_I5";
			this->labelTrial1_I5->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_I5->TabIndex = 216;
			this->labelTrial1_I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I4
			// 
			this->labelTrial1_I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I4->Location = System::Drawing::Point(461, 224);
			this->labelTrial1_I4->Name = L"labelTrial1_I4";
			this->labelTrial1_I4->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_I4->TabIndex = 215;
			this->labelTrial1_I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I3
			// 
			this->labelTrial1_I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I3->Location = System::Drawing::Point(357, 224);
			this->labelTrial1_I3->Name = L"labelTrial1_I3";
			this->labelTrial1_I3->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_I3->TabIndex = 214;
			this->labelTrial1_I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I2
			// 
			this->labelTrial1_I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I2->Location = System::Drawing::Point(251, 224);
			this->labelTrial1_I2->Name = L"labelTrial1_I2";
			this->labelTrial1_I2->Size = System::Drawing::Size(100, 36);
			this->labelTrial1_I2->TabIndex = 213;
			this->labelTrial1_I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial1_I1
			// 
			this->labelTrial1_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_I1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_I1->Location = System::Drawing::Point(147, 224);
			this->labelTrial1_I1->Name = L"labelTrial1_I1";
			this->labelTrial1_I1->Size = System::Drawing::Size(98, 36);
			this->labelTrial1_I1->TabIndex = 212;
			this->labelTrial1_I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(41, 224);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 36);
			this->label20->TabIndex = 211;
			this->label20->Text = L"I";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(987, 168);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 36);
			this->label9->TabIndex = 210;
			this->label9->Text = L"∞";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL2
			// 
			this->labelMethod2URL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL2->ForeColor = System::Drawing::Color::Black;
			this->labelMethod2URL2->Location = System::Drawing::Point(147, 168);
			this->labelMethod2URL2->Name = L"labelMethod2URL2";
			this->labelMethod2URL2->Size = System::Drawing::Size(98, 36);
			this->labelMethod2URL2->TabIndex = 202;
			this->labelMethod2URL2->Text = L"0";
			this->labelMethod2URL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL1
			// 
			this->labelMethod2URL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL1->ForeColor = System::Drawing::Color::Black;
			this->labelMethod2URL1->Location = System::Drawing::Point(41, 168);
			this->labelMethod2URL1->Name = L"labelMethod2URL1";
			this->labelMethod2URL1->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL1->TabIndex = 201;
			this->labelMethod2URL1->Text = L"RL";
			this->labelMethod2URL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(400, 109);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(291, 36);
			this->label7->TabIndex = 200;
			this->label7->Text = L"Us=12V,Ro=100";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(6, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1174, 53);
			this->label3->TabIndex = 0;
			this->label3->Text = L"    1、设置Us=12V,Ro=100,RL在0~1K范围内变化时,分别测量UL及I的值，并填入表1中。表中UO、PO(=UO×I)分别为稳压电源的输出电压和"
				L"功率，UL、PL(=UL×I)分别为RL二端的电压和功率，I为电路的电流。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelTrial2_Po9);
			this->groupBox2->Controls->Add(this->labelTrial2_Po8);
			this->groupBox2->Controls->Add(this->labelTrial2_Po7);
			this->groupBox2->Controls->Add(this->labelTrial2_Po6);
			this->groupBox2->Controls->Add(this->labelTrial2_Po5);
			this->groupBox2->Controls->Add(this->labelTrial2_Po4);
			this->groupBox2->Controls->Add(this->labelTrial2_Po3);
			this->groupBox2->Controls->Add(this->labelTrial2_Po2);
			this->groupBox2->Controls->Add(this->labelTrial2_Po1);
			this->groupBox2->Controls->Add(this->labelTrial2_PL9);
			this->groupBox2->Controls->Add(this->labelTrial2_PL8);
			this->groupBox2->Controls->Add(this->labelTrial2_PL7);
			this->groupBox2->Controls->Add(this->labelTrial2_PL6);
			this->groupBox2->Controls->Add(this->labelTrial2_PL5);
			this->groupBox2->Controls->Add(this->labelTrial2_PL4);
			this->groupBox2->Controls->Add(this->labelTrial2_PL3);
			this->groupBox2->Controls->Add(this->labelTrial2_PL2);
			this->groupBox2->Controls->Add(this->labelTrial2_PL1);
			this->groupBox2->Controls->Add(this->labelTrial2_RL8);
			this->groupBox2->Controls->Add(this->labelTrial2_RL7);
			this->groupBox2->Controls->Add(this->labelTrial2_RL6);
			this->groupBox2->Controls->Add(this->labelTrial2_RL5);
			this->groupBox2->Controls->Add(this->labelTrial2_RL4);
			this->groupBox2->Controls->Add(this->labelTrial2_RL3);
			this->groupBox2->Controls->Add(this->labelTrial2_RL2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBoxScore2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo9);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo8);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo7);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo6);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo5);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo4);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo3);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo2);
			this->groupBox2->Controls->Add(this->labelTrial2_Uo1);
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->labeltrial2_UL9);
			this->groupBox2->Controls->Add(this->labeltrial2_UL8);
			this->groupBox2->Controls->Add(this->labeltrial2_UL7);
			this->groupBox2->Controls->Add(this->labeltrial2_UL6);
			this->groupBox2->Controls->Add(this->labeltrial2_UL5);
			this->groupBox2->Controls->Add(this->labeltrial2_UL4);
			this->groupBox2->Controls->Add(this->labeltrial2_UL3);
			this->groupBox2->Controls->Add(this->labeltrial2_UL2);
			this->groupBox2->Controls->Add(this->labeltrial2_UL1);
			this->groupBox2->Controls->Add(this->label56);
			this->groupBox2->Controls->Add(this->labeltrial2_I9);
			this->groupBox2->Controls->Add(this->labeltrial2_I8);
			this->groupBox2->Controls->Add(this->labeltrial2_I7);
			this->groupBox2->Controls->Add(this->labeltrial2_I6);
			this->groupBox2->Controls->Add(this->labeltrial2_I5);
			this->groupBox2->Controls->Add(this->labeltrial2_I4);
			this->groupBox2->Controls->Add(this->labeltrial2_I3);
			this->groupBox2->Controls->Add(this->labeltrial2_I2);
			this->groupBox2->Controls->Add(this->labeltrial2_I1);
			this->groupBox2->Controls->Add(this->label67);
			this->groupBox2->Controls->Add(this->label68);
			this->groupBox2->Controls->Add(this->label69);
			this->groupBox2->Controls->Add(this->label70);
			this->groupBox2->Controls->Add(this->label71);
			this->groupBox2->Controls->Add(this->label72);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(9, 911);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 508);
			this->groupBox2->TabIndex = 314;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容二";
			// 
			// labelTrial2_Po9
			// 
			this->labelTrial2_Po9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Po9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Po9->Location = System::Drawing::Point(990, 397);
			this->labelTrial2_Po9->Name = L"labelTrial2_Po9";
			this->labelTrial2_Po9->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Po9->TabIndex = 334;
			this->labelTrial2_Po9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Po8
			// 
			this->labelTrial2_Po8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Po8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Po8->Location = System::Drawing::Point(884, 397);
			this->labelTrial2_Po8->Name = L"labelTrial2_Po8";
			this->labelTrial2_Po8->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Po8->TabIndex = 333;
			this->labelTrial2_Po8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Po7
			// 
			this->labelTrial2_Po7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Po7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Po7->Location = System::Drawing::Point(780, 397);
			this->labelTrial2_Po7->Name = L"labelTrial2_Po7";
			this->labelTrial2_Po7->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Po7->TabIndex = 332;
			this->labelTrial2_Po7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Po6
			// 
			this->labelTrial2_Po6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Po6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Po6->Location = System::Drawing::Point(674, 397);
			this->labelTrial2_Po6->Name = L"labelTrial2_Po6";
			this->labelTrial2_Po6->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Po6->TabIndex = 331;
			this->labelTrial2_Po6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Po5
			// 
			this->labelTrial2_Po5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Po5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Po5->Location = System::Drawing::Point(570, 397);
			this->labelTrial2_Po5->Name = L"labelTrial2_Po5";
			this->labelTrial2_Po5->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Po5->TabIndex = 330;
			this->labelTrial2_Po5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Po4
			// 
			this->labelTrial2_Po4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Po4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Po4->Location = System::Drawing::Point(464, 397);
			this->labelTrial2_Po4->Name = L"labelTrial2_Po4";
			this->labelTrial2_Po4->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Po4->TabIndex = 329;
			this->labelTrial2_Po4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Po3
			// 
			this->labelTrial2_Po3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Po3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Po3->Location = System::Drawing::Point(360, 397);
			this->labelTrial2_Po3->Name = L"labelTrial2_Po3";
			this->labelTrial2_Po3->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Po3->TabIndex = 328;
			this->labelTrial2_Po3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Po2
			// 
			this->labelTrial2_Po2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Po2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Po2->Location = System::Drawing::Point(254, 397);
			this->labelTrial2_Po2->Name = L"labelTrial2_Po2";
			this->labelTrial2_Po2->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Po2->TabIndex = 327;
			this->labelTrial2_Po2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Po1
			// 
			this->labelTrial2_Po1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Po1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Po1->Location = System::Drawing::Point(150, 397);
			this->labelTrial2_Po1->Name = L"labelTrial2_Po1";
			this->labelTrial2_Po1->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Po1->TabIndex = 326;
			this->labelTrial2_Po1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_PL9
			// 
			this->labelTrial2_PL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_PL9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_PL9->Location = System::Drawing::Point(987, 289);
			this->labelTrial2_PL9->Name = L"labelTrial2_PL9";
			this->labelTrial2_PL9->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_PL9->TabIndex = 325;
			this->labelTrial2_PL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_PL8
			// 
			this->labelTrial2_PL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_PL8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_PL8->Location = System::Drawing::Point(881, 289);
			this->labelTrial2_PL8->Name = L"labelTrial2_PL8";
			this->labelTrial2_PL8->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_PL8->TabIndex = 324;
			this->labelTrial2_PL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_PL7
			// 
			this->labelTrial2_PL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_PL7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_PL7->Location = System::Drawing::Point(777, 289);
			this->labelTrial2_PL7->Name = L"labelTrial2_PL7";
			this->labelTrial2_PL7->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_PL7->TabIndex = 323;
			this->labelTrial2_PL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_PL6
			// 
			this->labelTrial2_PL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_PL6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_PL6->Location = System::Drawing::Point(671, 289);
			this->labelTrial2_PL6->Name = L"labelTrial2_PL6";
			this->labelTrial2_PL6->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_PL6->TabIndex = 322;
			this->labelTrial2_PL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_PL5
			// 
			this->labelTrial2_PL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_PL5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_PL5->Location = System::Drawing::Point(567, 289);
			this->labelTrial2_PL5->Name = L"labelTrial2_PL5";
			this->labelTrial2_PL5->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_PL5->TabIndex = 321;
			this->labelTrial2_PL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_PL4
			// 
			this->labelTrial2_PL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_PL4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_PL4->Location = System::Drawing::Point(461, 289);
			this->labelTrial2_PL4->Name = L"labelTrial2_PL4";
			this->labelTrial2_PL4->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_PL4->TabIndex = 320;
			this->labelTrial2_PL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_PL3
			// 
			this->labelTrial2_PL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_PL3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_PL3->Location = System::Drawing::Point(357, 289);
			this->labelTrial2_PL3->Name = L"labelTrial2_PL3";
			this->labelTrial2_PL3->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_PL3->TabIndex = 319;
			this->labelTrial2_PL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_PL2
			// 
			this->labelTrial2_PL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_PL2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_PL2->Location = System::Drawing::Point(251, 289);
			this->labelTrial2_PL2->Name = L"labelTrial2_PL2";
			this->labelTrial2_PL2->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_PL2->TabIndex = 318;
			this->labelTrial2_PL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_PL1
			// 
			this->labelTrial2_PL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_PL1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_PL1->Location = System::Drawing::Point(147, 289);
			this->labelTrial2_PL1->Name = L"labelTrial2_PL1";
			this->labelTrial2_PL1->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_PL1->TabIndex = 317;
			this->labelTrial2_PL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_RL8
			// 
			this->labelTrial2_RL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_RL8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_RL8->Location = System::Drawing::Point(884, 142);
			this->labelTrial2_RL8->Name = L"labelTrial2_RL8";
			this->labelTrial2_RL8->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_RL8->TabIndex = 316;
			this->labelTrial2_RL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_RL7
			// 
			this->labelTrial2_RL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_RL7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_RL7->Location = System::Drawing::Point(780, 142);
			this->labelTrial2_RL7->Name = L"labelTrial2_RL7";
			this->labelTrial2_RL7->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_RL7->TabIndex = 315;
			this->labelTrial2_RL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_RL6
			// 
			this->labelTrial2_RL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_RL6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_RL6->Location = System::Drawing::Point(674, 142);
			this->labelTrial2_RL6->Name = L"labelTrial2_RL6";
			this->labelTrial2_RL6->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_RL6->TabIndex = 314;
			this->labelTrial2_RL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_RL5
			// 
			this->labelTrial2_RL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_RL5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_RL5->Location = System::Drawing::Point(570, 142);
			this->labelTrial2_RL5->Name = L"labelTrial2_RL5";
			this->labelTrial2_RL5->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_RL5->TabIndex = 313;
			this->labelTrial2_RL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_RL4
			// 
			this->labelTrial2_RL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_RL4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_RL4->Location = System::Drawing::Point(464, 142);
			this->labelTrial2_RL4->Name = L"labelTrial2_RL4";
			this->labelTrial2_RL4->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_RL4->TabIndex = 312;
			this->labelTrial2_RL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_RL3
			// 
			this->labelTrial2_RL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_RL3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_RL3->Location = System::Drawing::Point(360, 142);
			this->labelTrial2_RL3->Name = L"labelTrial2_RL3";
			this->labelTrial2_RL3->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_RL3->TabIndex = 311;
			this->labelTrial2_RL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_RL2
			// 
			this->labelTrial2_RL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_RL2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_RL2->Location = System::Drawing::Point(254, 142);
			this->labelTrial2_RL2->Name = L"labelTrial2_RL2";
			this->labelTrial2_RL2->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_RL2->TabIndex = 310;
			this->labelTrial2_RL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(396, 457);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 20);
			this->label6->TabIndex = 309;
			this->label6->Text = L"请打分：";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(673, 457);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 20);
			this->label8->TabIndex = 308;
			this->label8->Text = L"本项目总分50";
			// 
			// textBoxScore2
			// 
			this->textBoxScore2->Location = System::Drawing::Point(498, 454);
			this->textBoxScore2->Name = L"textBoxScore2";
			this->textBoxScore2->Size = System::Drawing::Size(152, 30);
			this->textBoxScore2->TabIndex = 307;
			this->textBoxScore2->TextChanged += gcnew System::EventHandler(this, &最大功率传输条件的测定::textBoxScore2_TextChanged);
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(42, 397);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 36);
			this->label4->TabIndex = 251;
			this->label4->Text = L"Po";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo9
			// 
			this->labelTrial2_Uo9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo9->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo9->Location = System::Drawing::Point(988, 350);
			this->labelTrial2_Uo9->Name = L"labelTrial2_Uo9";
			this->labelTrial2_Uo9->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Uo9->TabIndex = 250;
			this->labelTrial2_Uo9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo8
			// 
			this->labelTrial2_Uo8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo8->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo8->Location = System::Drawing::Point(882, 350);
			this->labelTrial2_Uo8->Name = L"labelTrial2_Uo8";
			this->labelTrial2_Uo8->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Uo8->TabIndex = 249;
			this->labelTrial2_Uo8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo7
			// 
			this->labelTrial2_Uo7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo7->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo7->Location = System::Drawing::Point(778, 350);
			this->labelTrial2_Uo7->Name = L"labelTrial2_Uo7";
			this->labelTrial2_Uo7->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Uo7->TabIndex = 248;
			this->labelTrial2_Uo7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo6
			// 
			this->labelTrial2_Uo6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo6->Location = System::Drawing::Point(672, 350);
			this->labelTrial2_Uo6->Name = L"labelTrial2_Uo6";
			this->labelTrial2_Uo6->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Uo6->TabIndex = 247;
			this->labelTrial2_Uo6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo5
			// 
			this->labelTrial2_Uo5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo5->Location = System::Drawing::Point(568, 350);
			this->labelTrial2_Uo5->Name = L"labelTrial2_Uo5";
			this->labelTrial2_Uo5->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Uo5->TabIndex = 246;
			this->labelTrial2_Uo5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo4
			// 
			this->labelTrial2_Uo4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo4->Location = System::Drawing::Point(462, 350);
			this->labelTrial2_Uo4->Name = L"labelTrial2_Uo4";
			this->labelTrial2_Uo4->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Uo4->TabIndex = 245;
			this->labelTrial2_Uo4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo3
			// 
			this->labelTrial2_Uo3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo3->Location = System::Drawing::Point(358, 350);
			this->labelTrial2_Uo3->Name = L"labelTrial2_Uo3";
			this->labelTrial2_Uo3->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Uo3->TabIndex = 244;
			this->labelTrial2_Uo3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo2
			// 
			this->labelTrial2_Uo2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo2->Location = System::Drawing::Point(252, 350);
			this->labelTrial2_Uo2->Name = L"labelTrial2_Uo2";
			this->labelTrial2_Uo2->Size = System::Drawing::Size(100, 36);
			this->labelTrial2_Uo2->TabIndex = 243;
			this->labelTrial2_Uo2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_Uo1
			// 
			this->labelTrial2_Uo1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Uo1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Uo1->Location = System::Drawing::Point(148, 350);
			this->labelTrial2_Uo1->Name = L"labelTrial2_Uo1";
			this->labelTrial2_Uo1->Size = System::Drawing::Size(98, 36);
			this->labelTrial2_Uo1->TabIndex = 242;
			this->labelTrial2_Uo1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(42, 350);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(100, 36);
			this->label34->TabIndex = 241;
			this->label34->Text = L"Uo";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(42, 289);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 36);
			this->label5->TabIndex = 231;
			this->label5->Text = L"PL";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL9
			// 
			this->labeltrial2_UL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL9->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL9->Location = System::Drawing::Point(987, 243);
			this->labeltrial2_UL9->Name = L"labeltrial2_UL9";
			this->labeltrial2_UL9->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_UL9->TabIndex = 230;
			this->labeltrial2_UL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL8
			// 
			this->labeltrial2_UL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL8->Location = System::Drawing::Point(881, 243);
			this->labeltrial2_UL8->Name = L"labeltrial2_UL8";
			this->labeltrial2_UL8->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_UL8->TabIndex = 229;
			this->labeltrial2_UL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL7
			// 
			this->labeltrial2_UL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL7->Location = System::Drawing::Point(777, 243);
			this->labeltrial2_UL7->Name = L"labeltrial2_UL7";
			this->labeltrial2_UL7->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_UL7->TabIndex = 228;
			this->labeltrial2_UL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL6
			// 
			this->labeltrial2_UL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL6->Location = System::Drawing::Point(671, 243);
			this->labeltrial2_UL6->Name = L"labeltrial2_UL6";
			this->labeltrial2_UL6->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_UL6->TabIndex = 227;
			this->labeltrial2_UL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL5
			// 
			this->labeltrial2_UL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL5->Location = System::Drawing::Point(567, 243);
			this->labeltrial2_UL5->Name = L"labeltrial2_UL5";
			this->labeltrial2_UL5->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_UL5->TabIndex = 226;
			this->labeltrial2_UL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL4
			// 
			this->labeltrial2_UL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL4->Location = System::Drawing::Point(461, 243);
			this->labeltrial2_UL4->Name = L"labeltrial2_UL4";
			this->labeltrial2_UL4->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_UL4->TabIndex = 225;
			this->labeltrial2_UL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL3
			// 
			this->labeltrial2_UL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL3->Location = System::Drawing::Point(357, 243);
			this->labeltrial2_UL3->Name = L"labeltrial2_UL3";
			this->labeltrial2_UL3->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_UL3->TabIndex = 224;
			this->labeltrial2_UL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL2
			// 
			this->labeltrial2_UL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL2->Location = System::Drawing::Point(251, 243);
			this->labeltrial2_UL2->Name = L"labeltrial2_UL2";
			this->labeltrial2_UL2->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_UL2->TabIndex = 223;
			this->labeltrial2_UL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_UL1
			// 
			this->labeltrial2_UL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_UL1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_UL1->Location = System::Drawing::Point(147, 243);
			this->labeltrial2_UL1->Name = L"labeltrial2_UL1";
			this->labeltrial2_UL1->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_UL1->TabIndex = 222;
			this->labeltrial2_UL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label56
			// 
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->ForeColor = System::Drawing::Color::Black;
			this->label56->Location = System::Drawing::Point(41, 243);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(100, 36);
			this->label56->TabIndex = 221;
			this->label56->Text = L"UL";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I9
			// 
			this->labeltrial2_I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I9->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I9->Location = System::Drawing::Point(987, 198);
			this->labeltrial2_I9->Name = L"labeltrial2_I9";
			this->labeltrial2_I9->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_I9->TabIndex = 220;
			this->labeltrial2_I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I8
			// 
			this->labeltrial2_I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I8->Location = System::Drawing::Point(881, 198);
			this->labeltrial2_I8->Name = L"labeltrial2_I8";
			this->labeltrial2_I8->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_I8->TabIndex = 219;
			this->labeltrial2_I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I7
			// 
			this->labeltrial2_I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I7->Location = System::Drawing::Point(777, 198);
			this->labeltrial2_I7->Name = L"labeltrial2_I7";
			this->labeltrial2_I7->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_I7->TabIndex = 218;
			this->labeltrial2_I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I6
			// 
			this->labeltrial2_I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I6->Location = System::Drawing::Point(671, 198);
			this->labeltrial2_I6->Name = L"labeltrial2_I6";
			this->labeltrial2_I6->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_I6->TabIndex = 217;
			this->labeltrial2_I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I5
			// 
			this->labeltrial2_I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I5->Location = System::Drawing::Point(567, 198);
			this->labeltrial2_I5->Name = L"labeltrial2_I5";
			this->labeltrial2_I5->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_I5->TabIndex = 216;
			this->labeltrial2_I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I4
			// 
			this->labeltrial2_I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I4->Location = System::Drawing::Point(461, 198);
			this->labeltrial2_I4->Name = L"labeltrial2_I4";
			this->labeltrial2_I4->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_I4->TabIndex = 215;
			this->labeltrial2_I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I3
			// 
			this->labeltrial2_I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I3->Location = System::Drawing::Point(357, 198);
			this->labeltrial2_I3->Name = L"labeltrial2_I3";
			this->labeltrial2_I3->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_I3->TabIndex = 214;
			this->labeltrial2_I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I2
			// 
			this->labeltrial2_I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I2->Location = System::Drawing::Point(251, 198);
			this->labeltrial2_I2->Name = L"labeltrial2_I2";
			this->labeltrial2_I2->Size = System::Drawing::Size(100, 36);
			this->labeltrial2_I2->TabIndex = 213;
			this->labeltrial2_I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labeltrial2_I1
			// 
			this->labeltrial2_I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_I1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_I1->Location = System::Drawing::Point(147, 198);
			this->labeltrial2_I1->Name = L"labeltrial2_I1";
			this->labeltrial2_I1->Size = System::Drawing::Size(98, 36);
			this->labeltrial2_I1->TabIndex = 212;
			this->labeltrial2_I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label67
			// 
			this->label67->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label67->ForeColor = System::Drawing::Color::Black;
			this->label67->Location = System::Drawing::Point(41, 198);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(100, 36);
			this->label67->TabIndex = 211;
			this->label67->Text = L"I";
			this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label68
			// 
			this->label68->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label68->ForeColor = System::Drawing::Color::Black;
			this->label68->Location = System::Drawing::Point(987, 142);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(98, 36);
			this->label68->TabIndex = 210;
			this->label68->Text = L"∞";
			this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label69
			// 
			this->label69->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label69->ForeColor = System::Drawing::Color::Black;
			this->label69->Location = System::Drawing::Point(147, 142);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(98, 36);
			this->label69->TabIndex = 202;
			this->label69->Text = L"0";
			this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label70
			// 
			this->label70->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label70->ForeColor = System::Drawing::Color::Black;
			this->label70->Location = System::Drawing::Point(41, 142);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(100, 36);
			this->label70->TabIndex = 201;
			this->label70->Text = L"RL";
			this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label71
			// 
			this->label71->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label71->ForeColor = System::Drawing::Color::Black;
			this->label71->Location = System::Drawing::Point(400, 96);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(291, 36);
			this->label71->TabIndex = 200;
			this->label71->Text = L"Us=15V,Ro=300";
			this->label71->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label72
			// 
			this->label72->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label72->ForeColor = System::Drawing::Color::Black;
			this->label72->Location = System::Drawing::Point(6, 50);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(1174, 33);
			this->label72->TabIndex = 0;
			this->label72->Text = L"2、改变内阻值为R0=300Ω，输出电压US=15V，重复测量。";
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(9, 1510);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(640, 73);
			this->groupBox14->TabIndex = 328;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"最大功率传输条件的测定";
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
			this->button1->Location = System::Drawing::Point(779, 1536);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 329;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &最大功率传输条件的测定::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(886, 1536);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 330;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &最大功率传输条件的测定::button2_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &最大功率传输条件的测定::printDocument1_BeginPrint);
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &最大功率传输条件的测定::printDocument1_PrintPage);
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
			this->panel1->Controls->Add(this->label结论);
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->label64);
			this->panel1->Controls->Add(this->groupBox14);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(32, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1305, 1595);
			this->panel1->TabIndex = 332;
			// 
			// label结论
			// 
			this->label结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label结论->Location = System::Drawing::Point(185, 1439);
			this->label结论->Name = L"label结论";
			this->label结论->Size = System::Drawing::Size(1000, 33);
			this->label结论->TabIndex = 334;
			this->label结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(18, 1445);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(95, 27);
			this->label64->TabIndex = 333;
			this->label64->Text = L"实验结论";
			// 
			// 最大功率传输条件的测定
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1590, 749);
			this->Controls->Add(this->panel1);
			this->Name = L"最大功率传输条件的测定";
			this->Text = L"最大功率传输条件的测定";
			this->Load += gcnew System::EventHandler(this, &最大功率传输条件的测定::最大功率传输条件的测定_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
		Bitmap ^ _NewBitmap;
		

		_NewBitmap = gcnew  Bitmap(panel1->Width, panel1->Height);
		panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));
		int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
		int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
		e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);

	}
			 String ^SelectedArea = "";
			 void  Priview();
			 void Print();
		public:void Load最大功率传输条件的测定Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
private: System::Void 最大功率传输条件的测定_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Priview();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Print();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
private: System::Void textBoxScore2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxScore1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void printDocument1_BeginPrint(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
}
};
}
