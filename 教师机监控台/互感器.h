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
	/// 互感器 摘要
	/// </summary>
	public ref class 互感器 : public System::Windows::Forms::Form
	{
	public:
		互感器(void)
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
		~互感器()
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












	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox3;












	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TextBox^  textBoxTrial3Score;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  textBoxTrial4Score;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Label^  textBoxTrial3_Line2_6;
private: System::Windows::Forms::Label^  textBoxTrial3_Line2_5;
private: System::Windows::Forms::Label^  textBoxTrial3_Line2_4;
private: System::Windows::Forms::Label^  textBoxTrial3_Line2_3;
private: System::Windows::Forms::Label^  textBoxTrial3_Line2_2;
private: System::Windows::Forms::Label^  textBoxTrial3_Line2_1;
private: System::Windows::Forms::Label^  textBoxTrial3_Line1_6;
private: System::Windows::Forms::Label^  textBoxTrial3_Line1_5;
private: System::Windows::Forms::Label^  textBoxTrial3_Line1_4;
private: System::Windows::Forms::Label^  textBoxTrial3_Line1_3;
private: System::Windows::Forms::Label^  textBoxTrial3_Line1_2;
private: System::Windows::Forms::Label^  textBoxTrial3_Line1_1;
private: System::Windows::Forms::Label^  textBoxTrial4_Line2_6;
private: System::Windows::Forms::Label^  textBoxTrial4_Line2_5;
private: System::Windows::Forms::Label^  textBoxTrial4_Line2_4;
private: System::Windows::Forms::Label^  textBoxTrial4_Line2_3;
private: System::Windows::Forms::Label^  textBoxTrial4_Line2_2;
private: System::Windows::Forms::Label^  textBoxTrial4_Line2_1;
private: System::Windows::Forms::Label^  textBoxTrial4_Line1_6;
private: System::Windows::Forms::Label^  textBoxTrial4_Line1_5;
private: System::Windows::Forms::Label^  textBoxTrial4_Line1_4;
private: System::Windows::Forms::Label^  textBoxTrial4_Line1_3;
private: System::Windows::Forms::Label^  textBoxTrial4_Line1_2;
private: System::Windows::Forms::Label^  textBoxTrial4_Line1_1;
private: System::Windows::Forms::GroupBox^  groupBox1;






private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::TextBox^  textBox1;

private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  textBoxTrial1_2结论;
private: System::Windows::Forms::Label^  textBoxTrial1_1结论;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label105;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(互感器::typeid));
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
			this->textBoxTrial3_Line2_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line2_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line2_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line2_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line2_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line2_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_Line1_1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3Score = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial4_Line2_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line2_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line2_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line2_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line2_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line2_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_6 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_3 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_Line1_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4Score = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_1结论 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_2结论 = (gcnew System::Windows::Forms::Label());
			this->groupBox7->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line2_1);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_Line1_1);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->textBoxTrial3Score);
			this->groupBox2->Controls->Add(this->label31);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(13, 558);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1079, 195);
			this->groupBox2->TabIndex = 203;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"互感器 实验内容3";
			// 
			// textBoxTrial3_Line2_6
			// 
			this->textBoxTrial3_Line2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_6->Location = System::Drawing::Point(751, 90);
			this->textBoxTrial3_Line2_6->Name = L"textBoxTrial3_Line2_6";
			this->textBoxTrial3_Line2_6->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line2_6->TabIndex = 236;
			this->textBoxTrial3_Line2_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line2_5
			// 
			this->textBoxTrial3_Line2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_5->Location = System::Drawing::Point(633, 90);
			this->textBoxTrial3_Line2_5->Name = L"textBoxTrial3_Line2_5";
			this->textBoxTrial3_Line2_5->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line2_5->TabIndex = 235;
			this->textBoxTrial3_Line2_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line2_4
			// 
			this->textBoxTrial3_Line2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_4->Location = System::Drawing::Point(515, 90);
			this->textBoxTrial3_Line2_4->Name = L"textBoxTrial3_Line2_4";
			this->textBoxTrial3_Line2_4->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line2_4->TabIndex = 234;
			this->textBoxTrial3_Line2_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line2_3
			// 
			this->textBoxTrial3_Line2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_3->Location = System::Drawing::Point(397, 91);
			this->textBoxTrial3_Line2_3->Name = L"textBoxTrial3_Line2_3";
			this->textBoxTrial3_Line2_3->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line2_3->TabIndex = 233;
			this->textBoxTrial3_Line2_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line2_2
			// 
			this->textBoxTrial3_Line2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_2->Location = System::Drawing::Point(279, 91);
			this->textBoxTrial3_Line2_2->Name = L"textBoxTrial3_Line2_2";
			this->textBoxTrial3_Line2_2->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line2_2->TabIndex = 232;
			this->textBoxTrial3_Line2_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line2_1
			// 
			this->textBoxTrial3_Line2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line2_1->Location = System::Drawing::Point(161, 91);
			this->textBoxTrial3_Line2_1->Name = L"textBoxTrial3_Line2_1";
			this->textBoxTrial3_Line2_1->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line2_1->TabIndex = 231;
			this->textBoxTrial3_Line2_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line1_6
			// 
			this->textBoxTrial3_Line1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_6->Location = System::Drawing::Point(751, 35);
			this->textBoxTrial3_Line1_6->Name = L"textBoxTrial3_Line1_6";
			this->textBoxTrial3_Line1_6->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line1_6->TabIndex = 230;
			this->textBoxTrial3_Line1_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line1_5
			// 
			this->textBoxTrial3_Line1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_5->Location = System::Drawing::Point(633, 35);
			this->textBoxTrial3_Line1_5->Name = L"textBoxTrial3_Line1_5";
			this->textBoxTrial3_Line1_5->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line1_5->TabIndex = 229;
			this->textBoxTrial3_Line1_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line1_4
			// 
			this->textBoxTrial3_Line1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_4->Location = System::Drawing::Point(515, 35);
			this->textBoxTrial3_Line1_4->Name = L"textBoxTrial3_Line1_4";
			this->textBoxTrial3_Line1_4->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line1_4->TabIndex = 228;
			this->textBoxTrial3_Line1_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line1_3
			// 
			this->textBoxTrial3_Line1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_3->Location = System::Drawing::Point(397, 36);
			this->textBoxTrial3_Line1_3->Name = L"textBoxTrial3_Line1_3";
			this->textBoxTrial3_Line1_3->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line1_3->TabIndex = 227;
			this->textBoxTrial3_Line1_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line1_2
			// 
			this->textBoxTrial3_Line1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_2->Location = System::Drawing::Point(279, 36);
			this->textBoxTrial3_Line1_2->Name = L"textBoxTrial3_Line1_2";
			this->textBoxTrial3_Line1_2->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line1_2->TabIndex = 226;
			this->textBoxTrial3_Line1_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_Line1_1
			// 
			this->textBoxTrial3_Line1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_Line1_1->Location = System::Drawing::Point(161, 36);
			this->textBoxTrial3_Line1_1->Name = L"textBoxTrial3_Line1_1";
			this->textBoxTrial3_Line1_1->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial3_Line1_1->TabIndex = 204;
			this->textBoxTrial3_Line1_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(255, 150);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(89, 20);
			this->label14->TabIndex = 225;
			this->label14->Text = L"请打分：";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(532, 150);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(129, 20);
			this->label15->TabIndex = 224;
			this->label15->Text = L"本项目总分30";
			// 
			// textBoxTrial3Score
			// 
			this->textBoxTrial3Score->Location = System::Drawing::Point(357, 147);
			this->textBoxTrial3Score->Name = L"textBoxTrial3Score";
			this->textBoxTrial3Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial3Score->TabIndex = 223;
			this->textBoxTrial3Score->TextChanged += gcnew System::EventHandler(this, &互感器::textBoxTrial3Score_TextChanged);
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(7, 95);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(138, 27);
			this->label31->TabIndex = 145;
			this->label31->Text = L"互感电流输出";
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(7, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 27);
			this->label1->TabIndex = 144;
			this->label1->Text = L"互感电流输入";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(238, 1322);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(82, 31);
			this->button9->TabIndex = 143;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(238, 1294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 25);
			this->label6->TabIndex = 142;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(805, 1294);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(193, 30);
			this->textBox7->TabIndex = 141;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(687, 1294);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(112, 30);
			this->textBox8->TabIndex = 140;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(466, 1294);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 25);
			this->label7->TabIndex = 139;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(466, 1322);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(97, 31);
			this->button10->TabIndex = 138;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(338, 1294);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 25);
			this->label8->TabIndex = 137;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(338, 1322);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(106, 31);
			this->button11->TabIndex = 136;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(129, 1294);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(90, 25);
			this->label21->TabIndex = 135;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(129, 1322);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 31);
			this->button12->TabIndex = 134;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(569, 1292);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(112, 30);
			this->textBox9->TabIndex = 133;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(238, 1248);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(82, 31);
			this->button13->TabIndex = 132;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(238, 1220);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(82, 25);
			this->label23->TabIndex = 131;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(805, 1220);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(193, 30);
			this->textBox10->TabIndex = 130;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(687, 1220);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(112, 30);
			this->textBox11->TabIndex = 129;
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(466, 1220);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(97, 25);
			this->label24->TabIndex = 128;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(466, 1248);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(97, 31);
			this->button14->TabIndex = 127;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(338, 1220);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(106, 25);
			this->label25->TabIndex = 126;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(338, 1248);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(106, 31);
			this->button15->TabIndex = 125;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(129, 1220);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(90, 25);
			this->label26->TabIndex = 124;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(129, 1248);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(90, 31);
			this->button16->TabIndex = 123;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(569, 1218);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(112, 30);
			this->textBox12->TabIndex = 122;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(6, 1295);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(101, 25);
			this->label27->TabIndex = 70;
			this->label27->Text = L"5K";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(6, 1220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 25);
			this->label2->TabIndex = 69;
			this->label2->Text = L"4K";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_6);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_5);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_4);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_3);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_2);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line2_1);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_6);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_5);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_4);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_3);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_2);
			this->groupBox3->Controls->Add(this->textBoxTrial4_Line1_1);
			this->groupBox3->Controls->Add(this->textBoxTrial4Score);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->button17);
			this->groupBox3->Controls->Add(this->label34);
			this->groupBox3->Controls->Add(this->textBox37);
			this->groupBox3->Controls->Add(this->textBox38);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->button18);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->button19);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->button20);
			this->groupBox3->Controls->Add(this->textBox39);
			this->groupBox3->Controls->Add(this->button29);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->textBox40);
			this->groupBox3->Controls->Add(this->textBox41);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->button30);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->button31);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->button32);
			this->groupBox3->Controls->Add(this->textBox42);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label44);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(13, 774);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1079, 224);
			this->groupBox3->TabIndex = 204;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"互感器 实验内容4";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &互感器::groupBox3_Enter);
			// 
			// textBoxTrial4_Line2_6
			// 
			this->textBoxTrial4_Line2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_6->Location = System::Drawing::Point(751, 103);
			this->textBoxTrial4_Line2_6->Name = L"textBoxTrial4_Line2_6";
			this->textBoxTrial4_Line2_6->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line2_6->TabIndex = 248;
			this->textBoxTrial4_Line2_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial4_Line2_5
			// 
			this->textBoxTrial4_Line2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_5->Location = System::Drawing::Point(633, 103);
			this->textBoxTrial4_Line2_5->Name = L"textBoxTrial4_Line2_5";
			this->textBoxTrial4_Line2_5->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line2_5->TabIndex = 247;
			this->textBoxTrial4_Line2_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial4_Line2_4
			// 
			this->textBoxTrial4_Line2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_4->Location = System::Drawing::Point(515, 103);
			this->textBoxTrial4_Line2_4->Name = L"textBoxTrial4_Line2_4";
			this->textBoxTrial4_Line2_4->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line2_4->TabIndex = 246;
			this->textBoxTrial4_Line2_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial4_Line2_3
			// 
			this->textBoxTrial4_Line2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_3->Location = System::Drawing::Point(397, 104);
			this->textBoxTrial4_Line2_3->Name = L"textBoxTrial4_Line2_3";
			this->textBoxTrial4_Line2_3->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line2_3->TabIndex = 245;
			this->textBoxTrial4_Line2_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial4_Line2_2
			// 
			this->textBoxTrial4_Line2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_2->Location = System::Drawing::Point(279, 104);
			this->textBoxTrial4_Line2_2->Name = L"textBoxTrial4_Line2_2";
			this->textBoxTrial4_Line2_2->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line2_2->TabIndex = 244;
			this->textBoxTrial4_Line2_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial4_Line2_1
			// 
			this->textBoxTrial4_Line2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line2_1->Location = System::Drawing::Point(161, 104);
			this->textBoxTrial4_Line2_1->Name = L"textBoxTrial4_Line2_1";
			this->textBoxTrial4_Line2_1->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line2_1->TabIndex = 243;
			this->textBoxTrial4_Line2_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial4_Line1_6
			// 
			this->textBoxTrial4_Line1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_6->Location = System::Drawing::Point(751, 49);
			this->textBoxTrial4_Line1_6->Name = L"textBoxTrial4_Line1_6";
			this->textBoxTrial4_Line1_6->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line1_6->TabIndex = 242;
			this->textBoxTrial4_Line1_6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(255, 164);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 20);
			this->label16->TabIndex = 228;
			this->label16->Text = L"请打分：";
			// 
			// textBoxTrial4_Line1_5
			// 
			this->textBoxTrial4_Line1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_5->Location = System::Drawing::Point(633, 49);
			this->textBoxTrial4_Line1_5->Name = L"textBoxTrial4_Line1_5";
			this->textBoxTrial4_Line1_5->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line1_5->TabIndex = 241;
			this->textBoxTrial4_Line1_5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial4_Line1_4
			// 
			this->textBoxTrial4_Line1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_4->Location = System::Drawing::Point(515, 49);
			this->textBoxTrial4_Line1_4->Name = L"textBoxTrial4_Line1_4";
			this->textBoxTrial4_Line1_4->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line1_4->TabIndex = 240;
			this->textBoxTrial4_Line1_4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial4_Line1_3
			// 
			this->textBoxTrial4_Line1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_3->Location = System::Drawing::Point(397, 50);
			this->textBoxTrial4_Line1_3->Name = L"textBoxTrial4_Line1_3";
			this->textBoxTrial4_Line1_3->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line1_3->TabIndex = 239;
			this->textBoxTrial4_Line1_3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(532, 164);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(129, 20);
			this->label17->TabIndex = 227;
			this->label17->Text = L"本项目总分30";
			// 
			// textBoxTrial4_Line1_2
			// 
			this->textBoxTrial4_Line1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_2->Location = System::Drawing::Point(279, 50);
			this->textBoxTrial4_Line1_2->Name = L"textBoxTrial4_Line1_2";
			this->textBoxTrial4_Line1_2->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line1_2->TabIndex = 238;
			this->textBoxTrial4_Line1_2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial4_Line1_1
			// 
			this->textBoxTrial4_Line1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial4_Line1_1->Location = System::Drawing::Point(161, 50);
			this->textBoxTrial4_Line1_1->Name = L"textBoxTrial4_Line1_1";
			this->textBoxTrial4_Line1_1->Size = System::Drawing::Size(112, 33);
			this->textBoxTrial4_Line1_1->TabIndex = 237;
			this->textBoxTrial4_Line1_1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial4Score
			// 
			this->textBoxTrial4Score->Location = System::Drawing::Point(357, 161);
			this->textBoxTrial4Score->Name = L"textBoxTrial4Score";
			this->textBoxTrial4Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial4Score->TabIndex = 226;
			this->textBoxTrial4Score->TextChanged += gcnew System::EventHandler(this, &互感器::textBoxTrial4Score_TextChanged);
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(7, 109);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(138, 27);
			this->label32->TabIndex = 145;
			this->label32->Text = L"互感电压输出";
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(7, 55);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(138, 27);
			this->label33->TabIndex = 144;
			this->label33->Text = L"互感电压输入";
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(238, 1322);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(82, 31);
			this->button17->TabIndex = 143;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(238, 1294);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(82, 25);
			this->label34->TabIndex = 142;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(805, 1294);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(193, 30);
			this->textBox37->TabIndex = 141;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(687, 1294);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(112, 30);
			this->textBox38->TabIndex = 140;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(466, 1294);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 25);
			this->label3->TabIndex = 139;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(466, 1322);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(97, 31);
			this->button18->TabIndex = 138;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(338, 1294);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 25);
			this->label4->TabIndex = 137;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(338, 1322);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(106, 31);
			this->button19->TabIndex = 136;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(129, 1294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 25);
			this->label5->TabIndex = 135;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(129, 1322);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(90, 31);
			this->button20->TabIndex = 134;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(569, 1292);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(112, 30);
			this->textBox39->TabIndex = 133;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(238, 1248);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(82, 31);
			this->button29->TabIndex = 132;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(238, 1220);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 25);
			this->label9->TabIndex = 131;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(805, 1220);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(193, 30);
			this->textBox40->TabIndex = 130;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(687, 1220);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(112, 30);
			this->textBox41->TabIndex = 129;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(466, 1220);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 25);
			this->label10->TabIndex = 128;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(466, 1248);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(97, 31);
			this->button30->TabIndex = 127;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(338, 1220);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(106, 25);
			this->label11->TabIndex = 126;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(338, 1248);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(106, 31);
			this->button31->TabIndex = 125;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(129, 1220);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(90, 25);
			this->label12->TabIndex = 124;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(129, 1248);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(90, 31);
			this->button32->TabIndex = 123;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(569, 1218);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(112, 30);
			this->textBox42->TabIndex = 122;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(6, 1295);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(101, 25);
			this->label13->TabIndex = 70;
			this->label13->Text = L"5K";
			// 
			// label44
			// 
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(6, 1220);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(101, 25);
			this->label44->TabIndex = 69;
			this->label44->Text = L"4K";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(753, 1033);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 331;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(646, 1033);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 330;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->labelTotalGrade);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(13, 1008);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(487, 73);
			this->groupBox5->TabIndex = 328;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"互感器 实验总分";
			// 
			// labelTotalGrade
			// 
			this->labelTotalGrade->AutoSize = true;
			this->labelTotalGrade->Location = System::Drawing::Point(227, 32);
			this->labelTotalGrade->Name = L"labelTotalGrade";
			this->labelTotalGrade->Size = System::Drawing::Size(19, 20);
			this->labelTotalGrade->TabIndex = 0;
			this->labelTotalGrade->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(539, 1033);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 329;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &互感器::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(48, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1112, 1096);
			this->panel1->TabIndex = 332;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &互感器::printDocument1_PrintPage);
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial1_2结论);
			this->groupBox1->Controls->Add(this->textBoxTrial1_1结论);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label105);
			this->groupBox1->Controls->Add(this->label52);
			this->groupBox1->Controls->Add(this->label53);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label56);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label57);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label58);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label59);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->label60);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label61);
			this->groupBox1->Controls->Add(this->button21);
			this->groupBox1->Controls->Add(this->label62);
			this->groupBox1->Controls->Add(this->button22);
			this->groupBox1->Controls->Add(this->label63);
			this->groupBox1->Controls->Add(this->button23);
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->label64);
			this->groupBox1->Controls->Add(this->label65);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(13, 334);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1085, 218);
			this->groupBox1->TabIndex = 237;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"互感器 实验内容1";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->Location = System::Drawing::Point(255, 181);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(89, 20);
			this->label52->TabIndex = 225;
			this->label52->Text = L"请打分：";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->Location = System::Drawing::Point(532, 181);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(129, 20);
			this->label53->TabIndex = 224;
			this->label53->Text = L"本项目总分30";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(357, 178);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 30);
			this->textBox1->TabIndex = 223;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(238, 1322);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(82, 31);
			this->button4->TabIndex = 143;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label56
			// 
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label56->ForeColor = System::Drawing::Color::Black;
			this->label56->Location = System::Drawing::Point(238, 1294);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(82, 25);
			this->label56->TabIndex = 142;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(805, 1294);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(193, 30);
			this->textBox2->TabIndex = 141;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(687, 1294);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 30);
			this->textBox3->TabIndex = 140;
			// 
			// label57
			// 
			this->label57->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->ForeColor = System::Drawing::Color::Black;
			this->label57->Location = System::Drawing::Point(466, 1294);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(97, 25);
			this->label57->TabIndex = 139;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(466, 1322);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 31);
			this->button5->TabIndex = 138;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label58
			// 
			this->label58->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label58->ForeColor = System::Drawing::Color::Black;
			this->label58->Location = System::Drawing::Point(338, 1294);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(106, 25);
			this->label58->TabIndex = 137;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(338, 1322);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(106, 31);
			this->button6->TabIndex = 136;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label59
			// 
			this->label59->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(129, 1294);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(90, 25);
			this->label59->TabIndex = 135;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(129, 1322);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 31);
			this->button7->TabIndex = 134;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(569, 1292);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(112, 30);
			this->textBox4->TabIndex = 133;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(238, 1248);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(82, 31);
			this->button8->TabIndex = 132;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label60
			// 
			this->label60->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label60->ForeColor = System::Drawing::Color::Black;
			this->label60->Location = System::Drawing::Point(238, 1220);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(82, 25);
			this->label60->TabIndex = 131;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(805, 1220);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(193, 30);
			this->textBox5->TabIndex = 130;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(687, 1220);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(112, 30);
			this->textBox6->TabIndex = 129;
			// 
			// label61
			// 
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label61->ForeColor = System::Drawing::Color::Black;
			this->label61->Location = System::Drawing::Point(466, 1220);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(97, 25);
			this->label61->TabIndex = 128;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(466, 1248);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(97, 31);
			this->button21->TabIndex = 127;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// label62
			// 
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label62->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label62->ForeColor = System::Drawing::Color::Black;
			this->label62->Location = System::Drawing::Point(338, 1220);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(106, 25);
			this->label62->TabIndex = 126;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(338, 1248);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(106, 31);
			this->button22->TabIndex = 125;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// label63
			// 
			this->label63->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label63->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label63->ForeColor = System::Drawing::Color::Black;
			this->label63->Location = System::Drawing::Point(129, 1220);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(90, 25);
			this->label63->TabIndex = 124;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(129, 1248);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(90, 31);
			this->button23->TabIndex = 123;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(569, 1218);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(112, 30);
			this->textBox13->TabIndex = 122;
			// 
			// label64
			// 
			this->label64->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(6, 1295);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(101, 25);
			this->label64->TabIndex = 70;
			this->label64->Text = L"5K";
			// 
			// label65
			// 
			this->label65->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label65->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label65->ForeColor = System::Drawing::Color::Black;
			this->label65->Location = System::Drawing::Point(6, 1220);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(101, 25);
			this->label65->TabIndex = 69;
			this->label65->Text = L"4K";
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(10, 29);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(111, 52);
			this->label105->TabIndex = 237;
			this->label105->Text = L"实验结论1";
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(10, 108);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(104, 56);
			this->label18->TabIndex = 239;
			this->label18->Text = L"实验结论2";
			// 
			// textBoxTrial1_1结论
			// 
			this->textBoxTrial1_1结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_1结论->Location = System::Drawing::Point(127, 26);
			this->textBoxTrial1_1结论->Name = L"textBoxTrial1_1结论";
			this->textBoxTrial1_1结论->Size = System::Drawing::Size(952, 55);
			this->textBoxTrial1_1结论->TabIndex = 204;
			this->textBoxTrial1_1结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial1_2结论
			// 
			this->textBoxTrial1_2结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_2结论->Location = System::Drawing::Point(127, 102);
			this->textBoxTrial1_2结论->Name = L"textBoxTrial1_2结论";
			this->textBoxTrial1_2结论->Size = System::Drawing::Size(952, 59);
			this->textBoxTrial1_2结论->TabIndex = 240;
			this->textBoxTrial1_2结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// 互感器
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1450, 727);
			this->Controls->Add(this->panel1);
			this->Name = L"互感器";
			this->Text = L"互感器";
			this->Load += gcnew System::EventHandler(this, &互感器::互感器_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion		
		String ^SelectedArea = "";
		void  Priview();
		void Print();
	public:void Load互感器Data(string &filename);
		   string *fileName;
		   void SaveCorrectGrades();
		   void CalScores();
	private: System::Void 互感器_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveCorrectGrades();
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
private: System::Void textBoxTrial3Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxTrial4Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
