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
	/// 叠加原理 摘要
	/// </summary>
	public ref class 叠加原理 : public System::Windows::Forms::Form
	{
	public:
		叠加原理(void)
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
		~叠加原理()
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
	private: System::Windows::Forms::Label^  labelLine4UBC;
	private: System::Windows::Forms::Label^  labelLine4UAB;
	private: System::Windows::Forms::Label^  labelLine4UFA;
	private: System::Windows::Forms::Label^  labelLine4U12;
	private: System::Windows::Forms::Label^  labelLine4U11;
	private: System::Windows::Forms::Label^  labelLine4I3;
	private: System::Windows::Forms::Label^  labelLine4I2;
	private: System::Windows::Forms::Label^  labelLine4I1;
	private: System::Windows::Forms::Label^  labelLine4UDE;
	private: System::Windows::Forms::Label^  labelLine4UCD;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  labelLine3UBC;
	private: System::Windows::Forms::Label^  labelLine3UAB;
	private: System::Windows::Forms::Label^  labelLine3UFA;
	private: System::Windows::Forms::Label^  labelLine3U12;
	private: System::Windows::Forms::Label^  labelLine3U11;
	private: System::Windows::Forms::Label^  labelLine3I3;
	private: System::Windows::Forms::Label^  labelLine3I2;
	private: System::Windows::Forms::Label^  labelLine3I1;
	private: System::Windows::Forms::Label^  labelLine3UDE;
	private: System::Windows::Forms::Label^  labelLine3UCD;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  labelLine2UBC;
	private: System::Windows::Forms::Label^  labelLine2UAB;
	private: System::Windows::Forms::Label^  labelLine2UFA;
	private: System::Windows::Forms::Label^  labelLine2U12;
	private: System::Windows::Forms::Label^  labelLine2U11;
	private: System::Windows::Forms::Label^  labelLine2I3;
	private: System::Windows::Forms::Label^  labelLine2I2;
	private: System::Windows::Forms::Label^  labelLine2I1;
	private: System::Windows::Forms::Label^  labelLine2UDE;
	private: System::Windows::Forms::Label^  labelLine2UCD;
	private: System::Windows::Forms::Label^  label2;
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
	private: System::Windows::Forms::Label^  labelLine1UBC;
	private: System::Windows::Forms::Label^  labelLine1UAB;
	private: System::Windows::Forms::Label^  labelLine1UFA;
	private: System::Windows::Forms::Label^  labelLine1U12;
	private: System::Windows::Forms::Label^  labelLine1U11;
	private: System::Windows::Forms::Label^  labelLine1I3;
	private: System::Windows::Forms::Label^  labelLine1I2;
	private: System::Windows::Forms::Label^  labelLine1I1;
	private: System::Windows::Forms::Label^  labelLine1UDE;
	private: System::Windows::Forms::Label^  labelLine1UCD;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox1;








































	private: System::Windows::Forms::Label^  labelLine8UBC;
	private: System::Windows::Forms::Label^  labelLine8UAB;
	private: System::Windows::Forms::Label^  labelLine8UFA;
	private: System::Windows::Forms::Label^  labelLine8U12;
	private: System::Windows::Forms::Label^  labelLine8U11;
	private: System::Windows::Forms::Label^  labelLine8I3;
	private: System::Windows::Forms::Label^  labelLine8I2;
	private: System::Windows::Forms::Label^  labelLine8I1;
	private: System::Windows::Forms::Label^  labelLine8UDE;
	private: System::Windows::Forms::Label^  labelLine8UCD;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  labelLine7UBC;
	private: System::Windows::Forms::Label^  labelLine7UAB;
	private: System::Windows::Forms::Label^  labelLine7UFA;
	private: System::Windows::Forms::Label^  labelLine7U12;
	private: System::Windows::Forms::Label^  labelLine7U11;
	private: System::Windows::Forms::Label^  labelLine7I3;
	private: System::Windows::Forms::Label^  labelLine7I2;
	private: System::Windows::Forms::Label^  labelLine7I1;
	private: System::Windows::Forms::Label^  labelLine7UDE;
	private: System::Windows::Forms::Label^  labelLine7UCD;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  labelLine6UBC;
	private: System::Windows::Forms::Label^  labelLine6UAB;
	private: System::Windows::Forms::Label^  labelLine6UFA;
	private: System::Windows::Forms::Label^  labelLine6U12;
	private: System::Windows::Forms::Label^  labelLine6U11;
	private: System::Windows::Forms::Label^  labelLine6I3;
	private: System::Windows::Forms::Label^  labelLine6I2;
	private: System::Windows::Forms::Label^  labelLine6I1;
	private: System::Windows::Forms::Label^  labelLine6UDE;
	private: System::Windows::Forms::Label^  labelLine6UCD;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::Label^  label82;
	private: System::Windows::Forms::Label^  label83;
	private: System::Windows::Forms::Label^  label84;
	private: System::Windows::Forms::Label^  label85;
	private: System::Windows::Forms::Label^  label86;
	private: System::Windows::Forms::Label^  label87;
	private: System::Windows::Forms::Label^  label88;
	private: System::Windows::Forms::Label^  label89;
	private: System::Windows::Forms::Label^  label90;
	private: System::Windows::Forms::Label^  label91;
	private: System::Windows::Forms::Label^  label92;
	private: System::Windows::Forms::Label^  labelLine5UBC;
	private: System::Windows::Forms::Label^  labelLine5UAB;
	private: System::Windows::Forms::Label^  labelLine5UFA;
	private: System::Windows::Forms::Label^  labelLine5U12;
	private: System::Windows::Forms::Label^  labelLine5U11;
	private: System::Windows::Forms::Label^  labelLine5I3;
	private: System::Windows::Forms::Label^  labelLine5I2;
	private: System::Windows::Forms::Label^  labelLine5I1;
	private: System::Windows::Forms::Label^  labelLine5UDE;
	private: System::Windows::Forms::Label^  labelLine5UCD;
	private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  textBoxscore1;

private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBoxscore2;


private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Panel^  panel1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(叠加原理::typeid));
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
			this->textBoxscore1 = (gcnew System::Windows::Forms::TextBox());
			this->labelLine4UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine4UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine4UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine4U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine4U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine4I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine4I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine4I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine4UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine4UCD = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->labelLine3UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine3UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine3UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine3U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine3U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine3I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine3I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine3I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine3UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine3UCD = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->labelLine2UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine2UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine2UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine2U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine2U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine2I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine2I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine2I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine2UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine2UCD = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->labelLine1UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine1UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine1UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine1U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine1U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine1I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine1I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine1I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine1UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine1UCD = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label结论 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxscore2 = (gcnew System::Windows::Forms::TextBox());
			this->labelLine8UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine8UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine8UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine8U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine8U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine8I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine8I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine8I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine8UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine8UCD = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->labelLine7UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine7UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine7UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine7U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine7U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine7I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine7I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine7I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine7UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine7UCD = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->labelLine6UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine6UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine6UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine6U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine6U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine6I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine6I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine6I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine6UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine6UCD = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->labelLine5UBC = (gcnew System::Windows::Forms::Label());
			this->labelLine5UAB = (gcnew System::Windows::Forms::Label());
			this->labelLine5UFA = (gcnew System::Windows::Forms::Label());
			this->labelLine5U12 = (gcnew System::Windows::Forms::Label());
			this->labelLine5U11 = (gcnew System::Windows::Forms::Label());
			this->labelLine5I3 = (gcnew System::Windows::Forms::Label());
			this->labelLine5I2 = (gcnew System::Windows::Forms::Label());
			this->labelLine5I1 = (gcnew System::Windows::Forms::Label());
			this->labelLine5UDE = (gcnew System::Windows::Forms::Label());
			this->labelLine5UCD = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox7->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(18, 15);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(646, 314);
			this->groupBox7->TabIndex = 197;
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
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBoxscore1);
			this->groupBox2->Controls->Add(this->labelLine4UBC);
			this->groupBox2->Controls->Add(this->labelLine4UAB);
			this->groupBox2->Controls->Add(this->labelLine4UFA);
			this->groupBox2->Controls->Add(this->labelLine4U12);
			this->groupBox2->Controls->Add(this->labelLine4U11);
			this->groupBox2->Controls->Add(this->labelLine4I3);
			this->groupBox2->Controls->Add(this->labelLine4I2);
			this->groupBox2->Controls->Add(this->labelLine4I1);
			this->groupBox2->Controls->Add(this->labelLine4UDE);
			this->groupBox2->Controls->Add(this->labelLine4UCD);
			this->groupBox2->Controls->Add(this->label48);
			this->groupBox2->Controls->Add(this->labelLine3UBC);
			this->groupBox2->Controls->Add(this->labelLine3UAB);
			this->groupBox2->Controls->Add(this->labelLine3UFA);
			this->groupBox2->Controls->Add(this->labelLine3U12);
			this->groupBox2->Controls->Add(this->labelLine3U11);
			this->groupBox2->Controls->Add(this->labelLine3I3);
			this->groupBox2->Controls->Add(this->labelLine3I2);
			this->groupBox2->Controls->Add(this->labelLine3I1);
			this->groupBox2->Controls->Add(this->labelLine3UDE);
			this->groupBox2->Controls->Add(this->labelLine3UCD);
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Controls->Add(this->labelLine2UBC);
			this->groupBox2->Controls->Add(this->labelLine2UAB);
			this->groupBox2->Controls->Add(this->labelLine2UFA);
			this->groupBox2->Controls->Add(this->labelLine2U12);
			this->groupBox2->Controls->Add(this->labelLine2U11);
			this->groupBox2->Controls->Add(this->labelLine2I3);
			this->groupBox2->Controls->Add(this->labelLine2I2);
			this->groupBox2->Controls->Add(this->labelLine2I1);
			this->groupBox2->Controls->Add(this->labelLine2UDE);
			this->groupBox2->Controls->Add(this->labelLine2UCD);
			this->groupBox2->Controls->Add(this->label2);
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
			this->groupBox2->Controls->Add(this->labelLine1UBC);
			this->groupBox2->Controls->Add(this->labelLine1UAB);
			this->groupBox2->Controls->Add(this->labelLine1UFA);
			this->groupBox2->Controls->Add(this->labelLine1U12);
			this->groupBox2->Controls->Add(this->labelLine1U11);
			this->groupBox2->Controls->Add(this->labelLine1I3);
			this->groupBox2->Controls->Add(this->labelLine1I2);
			this->groupBox2->Controls->Add(this->labelLine1I1);
			this->groupBox2->Controls->Add(this->labelLine1UDE);
			this->groupBox2->Controls->Add(this->labelLine1UCD);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(18, 344);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1223, 372);
			this->groupBox2->TabIndex = 198;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容一";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(200, 339);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 20);
			this->label9->TabIndex = 175;
			this->label9->Text = L"请打分：";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(477, 339);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 20);
			this->label10->TabIndex = 174;
			this->label10->Text = L"本实验总分50";
			// 
			// textBoxscore1
			// 
			this->textBoxscore1->Location = System::Drawing::Point(302, 336);
			this->textBoxscore1->Name = L"textBoxscore1";
			this->textBoxscore1->Size = System::Drawing::Size(152, 30);
			this->textBoxscore1->TabIndex = 173;
			this->textBoxscore1->TextChanged += gcnew System::EventHandler(this, &叠加原理::textBoxscore_TextChanged);
			// 
			// labelLine4UBC
			// 
			this->labelLine4UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UBC->Location = System::Drawing::Point(901, 263);
			this->labelLine4UBC->Name = L"labelLine4UBC";
			this->labelLine4UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine4UBC->TabIndex = 172;
			this->labelLine4UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UAB
			// 
			this->labelLine4UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UAB->Location = System::Drawing::Point(799, 263);
			this->labelLine4UAB->Name = L"labelLine4UAB";
			this->labelLine4UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine4UAB->TabIndex = 171;
			this->labelLine4UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UFA
			// 
			this->labelLine4UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UFA->Location = System::Drawing::Point(697, 263);
			this->labelLine4UFA->Name = L"labelLine4UFA";
			this->labelLine4UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine4UFA->TabIndex = 170;
			this->labelLine4UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4U12
			// 
			this->labelLine4U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4U12->Location = System::Drawing::Point(598, 263);
			this->labelLine4U12->Name = L"labelLine4U12";
			this->labelLine4U12->Size = System::Drawing::Size(93, 43);
			this->labelLine4U12->TabIndex = 169;
			this->labelLine4U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4U11
			// 
			this->labelLine4U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4U11->Location = System::Drawing::Point(503, 263);
			this->labelLine4U11->Name = L"labelLine4U11";
			this->labelLine4U11->Size = System::Drawing::Size(89, 43);
			this->labelLine4U11->TabIndex = 168;
			this->labelLine4U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4I3
			// 
			this->labelLine4I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4I3->Location = System::Drawing::Point(401, 263);
			this->labelLine4I3->Name = L"labelLine4I3";
			this->labelLine4I3->Size = System::Drawing::Size(92, 43);
			this->labelLine4I3->TabIndex = 167;
			this->labelLine4I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4I2
			// 
			this->labelLine4I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4I2->Location = System::Drawing::Point(302, 263);
			this->labelLine4I2->Name = L"labelLine4I2";
			this->labelLine4I2->Size = System::Drawing::Size(93, 43);
			this->labelLine4I2->TabIndex = 166;
			this->labelLine4I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4I1
			// 
			this->labelLine4I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4I1->Location = System::Drawing::Point(200, 263);
			this->labelLine4I1->Name = L"labelLine4I1";
			this->labelLine4I1->Size = System::Drawing::Size(93, 43);
			this->labelLine4I1->TabIndex = 165;
			this->labelLine4I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UDE
			// 
			this->labelLine4UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UDE->Location = System::Drawing::Point(1107, 263);
			this->labelLine4UDE->Name = L"labelLine4UDE";
			this->labelLine4UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine4UDE->TabIndex = 154;
			this->labelLine4UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine4UCD
			// 
			this->labelLine4UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine4UCD->Location = System::Drawing::Point(1005, 263);
			this->labelLine4UCD->Name = L"labelLine4UCD";
			this->labelLine4UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine4UCD->TabIndex = 153;
			this->labelLine4UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label48
			// 
			this->label48->ForeColor = System::Drawing::Color::Black;
			this->label48->Location = System::Drawing::Point(33, 263);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(104, 43);
			this->label48->TabIndex = 152;
			this->label48->Text = L"U11=0V\r\nU12=12V";
			// 
			// labelLine3UBC
			// 
			this->labelLine3UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UBC->Location = System::Drawing::Point(901, 206);
			this->labelLine3UBC->Name = L"labelLine3UBC";
			this->labelLine3UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine3UBC->TabIndex = 151;
			this->labelLine3UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UAB
			// 
			this->labelLine3UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UAB->Location = System::Drawing::Point(799, 206);
			this->labelLine3UAB->Name = L"labelLine3UAB";
			this->labelLine3UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine3UAB->TabIndex = 150;
			this->labelLine3UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UFA
			// 
			this->labelLine3UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UFA->Location = System::Drawing::Point(697, 206);
			this->labelLine3UFA->Name = L"labelLine3UFA";
			this->labelLine3UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine3UFA->TabIndex = 149;
			this->labelLine3UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3U12
			// 
			this->labelLine3U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3U12->Location = System::Drawing::Point(598, 206);
			this->labelLine3U12->Name = L"labelLine3U12";
			this->labelLine3U12->Size = System::Drawing::Size(93, 43);
			this->labelLine3U12->TabIndex = 148;
			this->labelLine3U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3U11
			// 
			this->labelLine3U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3U11->Location = System::Drawing::Point(503, 206);
			this->labelLine3U11->Name = L"labelLine3U11";
			this->labelLine3U11->Size = System::Drawing::Size(89, 43);
			this->labelLine3U11->TabIndex = 147;
			this->labelLine3U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3I3
			// 
			this->labelLine3I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3I3->Location = System::Drawing::Point(401, 206);
			this->labelLine3I3->Name = L"labelLine3I3";
			this->labelLine3I3->Size = System::Drawing::Size(92, 43);
			this->labelLine3I3->TabIndex = 146;
			this->labelLine3I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3I2
			// 
			this->labelLine3I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3I2->Location = System::Drawing::Point(302, 206);
			this->labelLine3I2->Name = L"labelLine3I2";
			this->labelLine3I2->Size = System::Drawing::Size(93, 43);
			this->labelLine3I2->TabIndex = 145;
			this->labelLine3I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3I1
			// 
			this->labelLine3I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3I1->Location = System::Drawing::Point(200, 206);
			this->labelLine3I1->Name = L"labelLine3I1";
			this->labelLine3I1->Size = System::Drawing::Size(93, 43);
			this->labelLine3I1->TabIndex = 144;
			this->labelLine3I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UDE
			// 
			this->labelLine3UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UDE->Location = System::Drawing::Point(1107, 206);
			this->labelLine3UDE->Name = L"labelLine3UDE";
			this->labelLine3UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine3UDE->TabIndex = 133;
			this->labelLine3UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine3UCD
			// 
			this->labelLine3UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine3UCD->Location = System::Drawing::Point(1005, 206);
			this->labelLine3UCD->Name = L"labelLine3UCD";
			this->labelLine3UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine3UCD->TabIndex = 132;
			this->labelLine3UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label34
			// 
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(33, 206);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(104, 43);
			this->label34->TabIndex = 131;
			this->label34->Text = L"U11=12V\r\nU12=6V";
			// 
			// labelLine2UBC
			// 
			this->labelLine2UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UBC->Location = System::Drawing::Point(901, 145);
			this->labelLine2UBC->Name = L"labelLine2UBC";
			this->labelLine2UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine2UBC->TabIndex = 130;
			this->labelLine2UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UAB
			// 
			this->labelLine2UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UAB->Location = System::Drawing::Point(799, 145);
			this->labelLine2UAB->Name = L"labelLine2UAB";
			this->labelLine2UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine2UAB->TabIndex = 129;
			this->labelLine2UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UFA
			// 
			this->labelLine2UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UFA->Location = System::Drawing::Point(697, 145);
			this->labelLine2UFA->Name = L"labelLine2UFA";
			this->labelLine2UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine2UFA->TabIndex = 128;
			this->labelLine2UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2U12
			// 
			this->labelLine2U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2U12->Location = System::Drawing::Point(598, 145);
			this->labelLine2U12->Name = L"labelLine2U12";
			this->labelLine2U12->Size = System::Drawing::Size(93, 43);
			this->labelLine2U12->TabIndex = 127;
			this->labelLine2U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2U11
			// 
			this->labelLine2U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2U11->Location = System::Drawing::Point(503, 145);
			this->labelLine2U11->Name = L"labelLine2U11";
			this->labelLine2U11->Size = System::Drawing::Size(89, 43);
			this->labelLine2U11->TabIndex = 126;
			this->labelLine2U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2I3
			// 
			this->labelLine2I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2I3->Location = System::Drawing::Point(401, 145);
			this->labelLine2I3->Name = L"labelLine2I3";
			this->labelLine2I3->Size = System::Drawing::Size(92, 43);
			this->labelLine2I3->TabIndex = 125;
			this->labelLine2I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2I2
			// 
			this->labelLine2I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2I2->Location = System::Drawing::Point(302, 145);
			this->labelLine2I2->Name = L"labelLine2I2";
			this->labelLine2I2->Size = System::Drawing::Size(93, 43);
			this->labelLine2I2->TabIndex = 124;
			this->labelLine2I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2I1
			// 
			this->labelLine2I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2I1->Location = System::Drawing::Point(200, 145);
			this->labelLine2I1->Name = L"labelLine2I1";
			this->labelLine2I1->Size = System::Drawing::Size(93, 43);
			this->labelLine2I1->TabIndex = 123;
			this->labelLine2I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UDE
			// 
			this->labelLine2UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UDE->Location = System::Drawing::Point(1107, 145);
			this->labelLine2UDE->Name = L"labelLine2UDE";
			this->labelLine2UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine2UDE->TabIndex = 112;
			this->labelLine2UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine2UCD
			// 
			this->labelLine2UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine2UCD->Location = System::Drawing::Point(1005, 145);
			this->labelLine2UCD->Name = L"labelLine2UCD";
			this->labelLine2UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine2UCD->TabIndex = 111;
			this->labelLine2UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(33, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 43);
			this->label2->TabIndex = 110;
			this->label2->Text = L"U11=0V\r\nU12=6V";
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
			// labelLine1UBC
			// 
			this->labelLine1UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UBC->Location = System::Drawing::Point(901, 90);
			this->labelLine1UBC->Name = L"labelLine1UBC";
			this->labelLine1UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine1UBC->TabIndex = 76;
			this->labelLine1UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UAB
			// 
			this->labelLine1UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UAB->Location = System::Drawing::Point(799, 90);
			this->labelLine1UAB->Name = L"labelLine1UAB";
			this->labelLine1UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine1UAB->TabIndex = 75;
			this->labelLine1UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UFA
			// 
			this->labelLine1UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UFA->Location = System::Drawing::Point(697, 90);
			this->labelLine1UFA->Name = L"labelLine1UFA";
			this->labelLine1UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine1UFA->TabIndex = 74;
			this->labelLine1UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1U12
			// 
			this->labelLine1U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1U12->Location = System::Drawing::Point(598, 90);
			this->labelLine1U12->Name = L"labelLine1U12";
			this->labelLine1U12->Size = System::Drawing::Size(93, 43);
			this->labelLine1U12->TabIndex = 73;
			this->labelLine1U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1U11
			// 
			this->labelLine1U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1U11->Location = System::Drawing::Point(503, 90);
			this->labelLine1U11->Name = L"labelLine1U11";
			this->labelLine1U11->Size = System::Drawing::Size(89, 43);
			this->labelLine1U11->TabIndex = 72;
			this->labelLine1U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1I3
			// 
			this->labelLine1I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1I3->Location = System::Drawing::Point(401, 90);
			this->labelLine1I3->Name = L"labelLine1I3";
			this->labelLine1I3->Size = System::Drawing::Size(92, 43);
			this->labelLine1I3->TabIndex = 71;
			this->labelLine1I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1I2
			// 
			this->labelLine1I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1I2->Location = System::Drawing::Point(302, 90);
			this->labelLine1I2->Name = L"labelLine1I2";
			this->labelLine1I2->Size = System::Drawing::Size(93, 43);
			this->labelLine1I2->TabIndex = 70;
			this->labelLine1I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1I1
			// 
			this->labelLine1I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1I1->Location = System::Drawing::Point(200, 90);
			this->labelLine1I1->Name = L"labelLine1I1";
			this->labelLine1I1->Size = System::Drawing::Size(93, 43);
			this->labelLine1I1->TabIndex = 69;
			this->labelLine1I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UDE
			// 
			this->labelLine1UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UDE->Location = System::Drawing::Point(1107, 90);
			this->labelLine1UDE->Name = L"labelLine1UDE";
			this->labelLine1UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine1UDE->TabIndex = 47;
			this->labelLine1UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine1UCD
			// 
			this->labelLine1UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine1UCD->Location = System::Drawing::Point(1005, 90);
			this->labelLine1UCD->Name = L"labelLine1UCD";
			this->labelLine1UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine1UCD->TabIndex = 46;
			this->labelLine1UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(33, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 43);
			this->label3->TabIndex = 5;
			this->label3->Text = L"U11=12V\r\nU12=0V";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label结论);
			this->groupBox1->Controls->Add(this->label64);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBoxscore2);
			this->groupBox1->Controls->Add(this->labelLine8UBC);
			this->groupBox1->Controls->Add(this->labelLine8UAB);
			this->groupBox1->Controls->Add(this->labelLine8UFA);
			this->groupBox1->Controls->Add(this->labelLine8U12);
			this->groupBox1->Controls->Add(this->labelLine8U11);
			this->groupBox1->Controls->Add(this->labelLine8I3);
			this->groupBox1->Controls->Add(this->labelLine8I2);
			this->groupBox1->Controls->Add(this->labelLine8I1);
			this->groupBox1->Controls->Add(this->labelLine8UDE);
			this->groupBox1->Controls->Add(this->labelLine8UCD);
			this->groupBox1->Controls->Add(this->label59);
			this->groupBox1->Controls->Add(this->labelLine7UBC);
			this->groupBox1->Controls->Add(this->labelLine7UAB);
			this->groupBox1->Controls->Add(this->labelLine7UFA);
			this->groupBox1->Controls->Add(this->labelLine7U12);
			this->groupBox1->Controls->Add(this->labelLine7U11);
			this->groupBox1->Controls->Add(this->labelLine7I3);
			this->groupBox1->Controls->Add(this->labelLine7I2);
			this->groupBox1->Controls->Add(this->labelLine7I1);
			this->groupBox1->Controls->Add(this->labelLine7UDE);
			this->groupBox1->Controls->Add(this->labelLine7UCD);
			this->groupBox1->Controls->Add(this->label70);
			this->groupBox1->Controls->Add(this->labelLine6UBC);
			this->groupBox1->Controls->Add(this->labelLine6UAB);
			this->groupBox1->Controls->Add(this->labelLine6UFA);
			this->groupBox1->Controls->Add(this->labelLine6U12);
			this->groupBox1->Controls->Add(this->labelLine6U11);
			this->groupBox1->Controls->Add(this->labelLine6I3);
			this->groupBox1->Controls->Add(this->labelLine6I2);
			this->groupBox1->Controls->Add(this->labelLine6I1);
			this->groupBox1->Controls->Add(this->labelLine6UDE);
			this->groupBox1->Controls->Add(this->labelLine6UCD);
			this->groupBox1->Controls->Add(this->label81);
			this->groupBox1->Controls->Add(this->label82);
			this->groupBox1->Controls->Add(this->label83);
			this->groupBox1->Controls->Add(this->label84);
			this->groupBox1->Controls->Add(this->label85);
			this->groupBox1->Controls->Add(this->label86);
			this->groupBox1->Controls->Add(this->label87);
			this->groupBox1->Controls->Add(this->label88);
			this->groupBox1->Controls->Add(this->label89);
			this->groupBox1->Controls->Add(this->label90);
			this->groupBox1->Controls->Add(this->label91);
			this->groupBox1->Controls->Add(this->label92);
			this->groupBox1->Controls->Add(this->labelLine5UBC);
			this->groupBox1->Controls->Add(this->labelLine5UAB);
			this->groupBox1->Controls->Add(this->labelLine5UFA);
			this->groupBox1->Controls->Add(this->labelLine5U12);
			this->groupBox1->Controls->Add(this->labelLine5U11);
			this->groupBox1->Controls->Add(this->labelLine5I3);
			this->groupBox1->Controls->Add(this->labelLine5I2);
			this->groupBox1->Controls->Add(this->labelLine5I1);
			this->groupBox1->Controls->Add(this->labelLine5UDE);
			this->groupBox1->Controls->Add(this->labelLine5UCD);
			this->groupBox1->Controls->Add(this->label103);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 769);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1307, 613);
			this->groupBox1->TabIndex = 199;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容二";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &叠加原理::groupBox1_Enter);
			// 
			// label结论
			// 
			this->label结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label结论->Location = System::Drawing::Point(190, 444);
			this->label结论->Name = L"label结论";
			this->label结论->Size = System::Drawing::Size(1000, 31);
			this->label结论->TabIndex = 210;
			this->label结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(23, 450);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(95, 25);
			this->label64->TabIndex = 209;
			this->label64->Text = L"实验结论";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(940, 539);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 207;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &叠加原理::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(833, 539);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 206;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &叠加原理::button1_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->labelTotalGrade);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(6, 513);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(640, 73);
			this->groupBox5->TabIndex = 205;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"叠加原理实验总分";
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(200, 347);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 20);
			this->label4->TabIndex = 178;
			this->label4->Text = L"请打分：";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(477, 347);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 20);
			this->label5->TabIndex = 177;
			this->label5->Text = L"本实验总分50";
			// 
			// textBoxscore2
			// 
			this->textBoxscore2->Location = System::Drawing::Point(302, 344);
			this->textBoxscore2->Name = L"textBoxscore2";
			this->textBoxscore2->Size = System::Drawing::Size(152, 30);
			this->textBoxscore2->TabIndex = 176;
			this->textBoxscore2->TextChanged += gcnew System::EventHandler(this, &叠加原理::textBox1_TextChanged);
			// 
			// labelLine8UBC
			// 
			this->labelLine8UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UBC->Location = System::Drawing::Point(901, 271);
			this->labelLine8UBC->Name = L"labelLine8UBC";
			this->labelLine8UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine8UBC->TabIndex = 172;
			this->labelLine8UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UAB
			// 
			this->labelLine8UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UAB->Location = System::Drawing::Point(799, 271);
			this->labelLine8UAB->Name = L"labelLine8UAB";
			this->labelLine8UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine8UAB->TabIndex = 171;
			this->labelLine8UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UFA
			// 
			this->labelLine8UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UFA->Location = System::Drawing::Point(697, 271);
			this->labelLine8UFA->Name = L"labelLine8UFA";
			this->labelLine8UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine8UFA->TabIndex = 170;
			this->labelLine8UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8U12
			// 
			this->labelLine8U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8U12->Location = System::Drawing::Point(598, 271);
			this->labelLine8U12->Name = L"labelLine8U12";
			this->labelLine8U12->Size = System::Drawing::Size(93, 43);
			this->labelLine8U12->TabIndex = 169;
			this->labelLine8U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8U11
			// 
			this->labelLine8U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8U11->Location = System::Drawing::Point(503, 271);
			this->labelLine8U11->Name = L"labelLine8U11";
			this->labelLine8U11->Size = System::Drawing::Size(89, 43);
			this->labelLine8U11->TabIndex = 168;
			this->labelLine8U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8I3
			// 
			this->labelLine8I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8I3->Location = System::Drawing::Point(401, 271);
			this->labelLine8I3->Name = L"labelLine8I3";
			this->labelLine8I3->Size = System::Drawing::Size(92, 43);
			this->labelLine8I3->TabIndex = 167;
			this->labelLine8I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8I2
			// 
			this->labelLine8I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8I2->Location = System::Drawing::Point(302, 271);
			this->labelLine8I2->Name = L"labelLine8I2";
			this->labelLine8I2->Size = System::Drawing::Size(93, 43);
			this->labelLine8I2->TabIndex = 166;
			this->labelLine8I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8I1
			// 
			this->labelLine8I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8I1->Location = System::Drawing::Point(200, 271);
			this->labelLine8I1->Name = L"labelLine8I1";
			this->labelLine8I1->Size = System::Drawing::Size(93, 43);
			this->labelLine8I1->TabIndex = 165;
			this->labelLine8I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UDE
			// 
			this->labelLine8UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UDE->Location = System::Drawing::Point(1107, 271);
			this->labelLine8UDE->Name = L"labelLine8UDE";
			this->labelLine8UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine8UDE->TabIndex = 154;
			this->labelLine8UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine8UCD
			// 
			this->labelLine8UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine8UCD->Location = System::Drawing::Point(1005, 271);
			this->labelLine8UCD->Name = L"labelLine8UCD";
			this->labelLine8UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine8UCD->TabIndex = 153;
			this->labelLine8UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label59
			// 
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(33, 271);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(104, 43);
			this->label59->TabIndex = 152;
			this->label59->Text = L"U11=0V\r\nU12=12V";
			// 
			// labelLine7UBC
			// 
			this->labelLine7UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UBC->Location = System::Drawing::Point(901, 212);
			this->labelLine7UBC->Name = L"labelLine7UBC";
			this->labelLine7UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine7UBC->TabIndex = 151;
			this->labelLine7UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UAB
			// 
			this->labelLine7UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UAB->Location = System::Drawing::Point(799, 212);
			this->labelLine7UAB->Name = L"labelLine7UAB";
			this->labelLine7UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine7UAB->TabIndex = 150;
			this->labelLine7UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UFA
			// 
			this->labelLine7UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UFA->Location = System::Drawing::Point(697, 212);
			this->labelLine7UFA->Name = L"labelLine7UFA";
			this->labelLine7UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine7UFA->TabIndex = 149;
			this->labelLine7UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7U12
			// 
			this->labelLine7U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7U12->Location = System::Drawing::Point(598, 212);
			this->labelLine7U12->Name = L"labelLine7U12";
			this->labelLine7U12->Size = System::Drawing::Size(93, 43);
			this->labelLine7U12->TabIndex = 148;
			this->labelLine7U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7U11
			// 
			this->labelLine7U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7U11->Location = System::Drawing::Point(503, 212);
			this->labelLine7U11->Name = L"labelLine7U11";
			this->labelLine7U11->Size = System::Drawing::Size(89, 43);
			this->labelLine7U11->TabIndex = 147;
			this->labelLine7U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7I3
			// 
			this->labelLine7I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7I3->Location = System::Drawing::Point(401, 212);
			this->labelLine7I3->Name = L"labelLine7I3";
			this->labelLine7I3->Size = System::Drawing::Size(92, 43);
			this->labelLine7I3->TabIndex = 146;
			this->labelLine7I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7I2
			// 
			this->labelLine7I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7I2->Location = System::Drawing::Point(302, 212);
			this->labelLine7I2->Name = L"labelLine7I2";
			this->labelLine7I2->Size = System::Drawing::Size(93, 43);
			this->labelLine7I2->TabIndex = 145;
			this->labelLine7I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7I1
			// 
			this->labelLine7I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7I1->Location = System::Drawing::Point(200, 212);
			this->labelLine7I1->Name = L"labelLine7I1";
			this->labelLine7I1->Size = System::Drawing::Size(93, 43);
			this->labelLine7I1->TabIndex = 144;
			this->labelLine7I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UDE
			// 
			this->labelLine7UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UDE->Location = System::Drawing::Point(1107, 212);
			this->labelLine7UDE->Name = L"labelLine7UDE";
			this->labelLine7UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine7UDE->TabIndex = 133;
			this->labelLine7UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine7UCD
			// 
			this->labelLine7UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine7UCD->Location = System::Drawing::Point(1005, 212);
			this->labelLine7UCD->Name = L"labelLine7UCD";
			this->labelLine7UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine7UCD->TabIndex = 132;
			this->labelLine7UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label70
			// 
			this->label70->ForeColor = System::Drawing::Color::Black;
			this->label70->Location = System::Drawing::Point(33, 212);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(104, 43);
			this->label70->TabIndex = 131;
			this->label70->Text = L"U11=12V\r\nU12=6V";
			// 
			// labelLine6UBC
			// 
			this->labelLine6UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UBC->Location = System::Drawing::Point(901, 151);
			this->labelLine6UBC->Name = L"labelLine6UBC";
			this->labelLine6UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine6UBC->TabIndex = 130;
			this->labelLine6UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UAB
			// 
			this->labelLine6UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UAB->Location = System::Drawing::Point(799, 151);
			this->labelLine6UAB->Name = L"labelLine6UAB";
			this->labelLine6UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine6UAB->TabIndex = 129;
			this->labelLine6UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UFA
			// 
			this->labelLine6UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UFA->Location = System::Drawing::Point(697, 151);
			this->labelLine6UFA->Name = L"labelLine6UFA";
			this->labelLine6UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine6UFA->TabIndex = 128;
			this->labelLine6UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6U12
			// 
			this->labelLine6U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6U12->Location = System::Drawing::Point(598, 151);
			this->labelLine6U12->Name = L"labelLine6U12";
			this->labelLine6U12->Size = System::Drawing::Size(93, 43);
			this->labelLine6U12->TabIndex = 127;
			this->labelLine6U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6U11
			// 
			this->labelLine6U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6U11->Location = System::Drawing::Point(503, 151);
			this->labelLine6U11->Name = L"labelLine6U11";
			this->labelLine6U11->Size = System::Drawing::Size(89, 43);
			this->labelLine6U11->TabIndex = 126;
			this->labelLine6U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6I3
			// 
			this->labelLine6I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6I3->Location = System::Drawing::Point(401, 151);
			this->labelLine6I3->Name = L"labelLine6I3";
			this->labelLine6I3->Size = System::Drawing::Size(92, 43);
			this->labelLine6I3->TabIndex = 125;
			this->labelLine6I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6I2
			// 
			this->labelLine6I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6I2->Location = System::Drawing::Point(302, 151);
			this->labelLine6I2->Name = L"labelLine6I2";
			this->labelLine6I2->Size = System::Drawing::Size(93, 43);
			this->labelLine6I2->TabIndex = 124;
			this->labelLine6I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6I1
			// 
			this->labelLine6I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6I1->Location = System::Drawing::Point(200, 151);
			this->labelLine6I1->Name = L"labelLine6I1";
			this->labelLine6I1->Size = System::Drawing::Size(93, 43);
			this->labelLine6I1->TabIndex = 123;
			this->labelLine6I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UDE
			// 
			this->labelLine6UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UDE->Location = System::Drawing::Point(1107, 151);
			this->labelLine6UDE->Name = L"labelLine6UDE";
			this->labelLine6UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine6UDE->TabIndex = 112;
			this->labelLine6UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine6UCD
			// 
			this->labelLine6UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine6UCD->Location = System::Drawing::Point(1005, 151);
			this->labelLine6UCD->Name = L"labelLine6UCD";
			this->labelLine6UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine6UCD->TabIndex = 111;
			this->labelLine6UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label81
			// 
			this->label81->ForeColor = System::Drawing::Color::Black;
			this->label81->Location = System::Drawing::Point(33, 151);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(104, 43);
			this->label81->TabIndex = 110;
			this->label81->Text = L"U11=0V\r\nU12=6V";
			// 
			// label82
			// 
			this->label82->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label82->Location = System::Drawing::Point(901, 39);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(93, 23);
			this->label82->TabIndex = 97;
			this->label82->Text = L"UBC";
			this->label82->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label83
			// 
			this->label83->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label83->Location = System::Drawing::Point(799, 39);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(93, 23);
			this->label83->TabIndex = 96;
			this->label83->Text = L"UAB";
			this->label83->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label84
			// 
			this->label84->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label84->Location = System::Drawing::Point(697, 39);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(93, 23);
			this->label84->TabIndex = 95;
			this->label84->Text = L"UFA";
			this->label84->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label85
			// 
			this->label85->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label85->Location = System::Drawing::Point(598, 39);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(93, 23);
			this->label85->TabIndex = 94;
			this->label85->Text = L"U12";
			this->label85->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label86
			// 
			this->label86->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label86->Location = System::Drawing::Point(503, 39);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(89, 23);
			this->label86->TabIndex = 93;
			this->label86->Text = L"U11";
			this->label86->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label87
			// 
			this->label87->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label87->Location = System::Drawing::Point(401, 39);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(92, 23);
			this->label87->TabIndex = 92;
			this->label87->Text = L"I3(mA)";
			this->label87->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label88
			// 
			this->label88->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label88->Location = System::Drawing::Point(302, 39);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(93, 23);
			this->label88->TabIndex = 91;
			this->label88->Text = L"I2(mA)";
			this->label88->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label89
			// 
			this->label89->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label89->Location = System::Drawing::Point(200, 39);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(93, 23);
			this->label89->TabIndex = 90;
			this->label89->Text = L"I1(mA)";
			this->label89->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label90
			// 
			this->label90->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label90->Location = System::Drawing::Point(1107, 39);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(93, 23);
			this->label90->TabIndex = 89;
			this->label90->Text = L"UDE";
			this->label90->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label91
			// 
			this->label91->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label91->Location = System::Drawing::Point(1005, 39);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(93, 23);
			this->label91->TabIndex = 88;
			this->label91->Text = L"UCD";
			this->label91->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label92
			// 
			this->label92->ForeColor = System::Drawing::Color::Black;
			this->label92->Location = System::Drawing::Point(33, 39);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(104, 23);
			this->label92->TabIndex = 87;
			this->label92->Text = L"被测量";
			// 
			// labelLine5UBC
			// 
			this->labelLine5UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UBC->Location = System::Drawing::Point(901, 90);
			this->labelLine5UBC->Name = L"labelLine5UBC";
			this->labelLine5UBC->Size = System::Drawing::Size(93, 43);
			this->labelLine5UBC->TabIndex = 76;
			this->labelLine5UBC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UAB
			// 
			this->labelLine5UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UAB->Location = System::Drawing::Point(799, 90);
			this->labelLine5UAB->Name = L"labelLine5UAB";
			this->labelLine5UAB->Size = System::Drawing::Size(93, 43);
			this->labelLine5UAB->TabIndex = 75;
			this->labelLine5UAB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UFA
			// 
			this->labelLine5UFA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UFA->Location = System::Drawing::Point(697, 90);
			this->labelLine5UFA->Name = L"labelLine5UFA";
			this->labelLine5UFA->Size = System::Drawing::Size(93, 43);
			this->labelLine5UFA->TabIndex = 74;
			this->labelLine5UFA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5U12
			// 
			this->labelLine5U12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5U12->Location = System::Drawing::Point(598, 90);
			this->labelLine5U12->Name = L"labelLine5U12";
			this->labelLine5U12->Size = System::Drawing::Size(93, 43);
			this->labelLine5U12->TabIndex = 73;
			this->labelLine5U12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5U11
			// 
			this->labelLine5U11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5U11->Location = System::Drawing::Point(503, 90);
			this->labelLine5U11->Name = L"labelLine5U11";
			this->labelLine5U11->Size = System::Drawing::Size(89, 43);
			this->labelLine5U11->TabIndex = 72;
			this->labelLine5U11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5I3
			// 
			this->labelLine5I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5I3->Location = System::Drawing::Point(401, 90);
			this->labelLine5I3->Name = L"labelLine5I3";
			this->labelLine5I3->Size = System::Drawing::Size(92, 43);
			this->labelLine5I3->TabIndex = 71;
			this->labelLine5I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5I2
			// 
			this->labelLine5I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5I2->Location = System::Drawing::Point(302, 90);
			this->labelLine5I2->Name = L"labelLine5I2";
			this->labelLine5I2->Size = System::Drawing::Size(93, 43);
			this->labelLine5I2->TabIndex = 70;
			this->labelLine5I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5I1
			// 
			this->labelLine5I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5I1->Location = System::Drawing::Point(200, 90);
			this->labelLine5I1->Name = L"labelLine5I1";
			this->labelLine5I1->Size = System::Drawing::Size(93, 43);
			this->labelLine5I1->TabIndex = 69;
			this->labelLine5I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UDE
			// 
			this->labelLine5UDE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UDE->Location = System::Drawing::Point(1107, 90);
			this->labelLine5UDE->Name = L"labelLine5UDE";
			this->labelLine5UDE->Size = System::Drawing::Size(93, 43);
			this->labelLine5UDE->TabIndex = 47;
			this->labelLine5UDE->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelLine5UCD
			// 
			this->labelLine5UCD->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelLine5UCD->Location = System::Drawing::Point(1005, 90);
			this->labelLine5UCD->Name = L"labelLine5UCD";
			this->labelLine5UCD->Size = System::Drawing::Size(93, 43);
			this->labelLine5UCD->TabIndex = 46;
			this->labelLine5UCD->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label103
			// 
			this->label103->ForeColor = System::Drawing::Color::Black;
			this->label103->Location = System::Drawing::Point(33, 90);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(104, 43);
			this->label103->TabIndex = 5;
			this->label103->Text = L"U11=12V\r\nU12=0V";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Location = System::Drawing::Point(18, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1301, 728);
			this->panel1->TabIndex = 176;
			// 
			// printDocument1
			// 
			this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &叠加原理::printDocument1_BeginPrint);
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &叠加原理::printDocument1_PrintPage);
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
			// 叠加原理
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1546, 855);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"叠加原理";
			this->Text = L"叠加原理";
			this->Load += gcnew System::EventHandler(this, &叠加原理::叠加原理_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ SelectedArea = "";
	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
		Bitmap ^ _NewBitmap;
		if (SelectedArea == "panel1") {
			_NewBitmap = gcnew  Bitmap(panel1->Width, panel1->Height);
			panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));
			e->HasMorePages = true;
			SelectedArea = "finally";
		}
		else {
			_NewBitmap = gcnew  Bitmap(groupBox1->Width, groupBox1->Height);
			groupBox1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, groupBox1->Width, groupBox1->Height));
			e->HasMorePages = false;
		}
		int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
		int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
		e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);
	}
			 string *fileName;

public:
	         void SaveCorrectGrades();
			 void Load叠加原理Data(string &filename);
			 void Print();
			 void Priview();
			 void CalScores() {
				 try {
					 int g1 = Convert::ToInt32(textBoxscore1->Text);
					 int g2 = Convert::ToInt32(textBoxscore2->Text);
					 labelTotalGrade->Text = (g1 + g2).ToString();
				 }
				 catch (Exception^e) {
				 
				 }
			 }
private: System::Void 叠加原理_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxscore_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Priview();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Print();
	SelectedArea = "groupBox1";
	Print();
}
private: System::Void printDocument1_BeginPrint(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
	SelectedArea = "panel1";
}
};
}
