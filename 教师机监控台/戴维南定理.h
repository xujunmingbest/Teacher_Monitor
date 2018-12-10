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
	/// 戴维南定理 摘要
	/// </summary>
	public ref class 戴维南定理 : public System::Windows::Forms::Form
	{
	public:
		戴维南定理(void)
		{
			InitializeComponent();
			chartTrial2_load();
			chartTrial6_load();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void chartTrial2_load();
		void chartTrial6_load();
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~戴维南定理()
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

	private: System::Windows::Forms::Label^  labelMethod1Isc;
	private: System::Windows::Forms::Label^  labelMethod1Uoc;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial2;



















	private: System::Windows::Forms::Label^  labelMethod2I10;
	private: System::Windows::Forms::Label^  labelMethod2I9;
	private: System::Windows::Forms::Label^  labelMethod2I8;
	private: System::Windows::Forms::Label^  labelMethod2I7;
	private: System::Windows::Forms::Label^  labelMethod2I6;
	private: System::Windows::Forms::Label^  labelMethod2I5;
	private: System::Windows::Forms::Label^  labelMethod2I4;
	private: System::Windows::Forms::Label^  labelMethod2I3;
	private: System::Windows::Forms::Label^  labelMethod2I2;
	private: System::Windows::Forms::Label^  labelMethod2I1;
	private: System::Windows::Forms::Label^  labelMethod2URL10;
	private: System::Windows::Forms::Label^  labelMethod2URL9;
	private: System::Windows::Forms::Label^  labelMethod2URL8;
	private: System::Windows::Forms::Label^  labelMethod2URL7;
	private: System::Windows::Forms::Label^  labelMethod2URL6;
	private: System::Windows::Forms::Label^  labelMethod2URL5;
	private: System::Windows::Forms::Label^  labelMethod2URL4;
	private: System::Windows::Forms::Label^  labelMethod2URL3;










	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  labelMethod2URL2;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  labelMethod2URL1;
	private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  textBoxTrial1Score;


private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBoxTrial2Score;

private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  textBoxTrial3Score;


private: System::Windows::Forms::Label^  label33;

private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TextBox^  textBoxTrial6Score;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial6;


private: System::Windows::Forms::Label^  labelMethod6I10;
private: System::Windows::Forms::Label^  labelMethod6I9;
private: System::Windows::Forms::Label^  labelMethod6I8;
private: System::Windows::Forms::Label^  labelMethod6I7;
private: System::Windows::Forms::Label^  labelMethod6I6;
private: System::Windows::Forms::Label^  labelMethod6I5;
private: System::Windows::Forms::Label^  labelMethod6I4;
private: System::Windows::Forms::Label^  labelMethod6I3;
private: System::Windows::Forms::Label^  labelMethod6I2;
private: System::Windows::Forms::Label^  labelMethod6I1;
private: System::Windows::Forms::Label^  labelMethod6URL10;
private: System::Windows::Forms::Label^  labelMethod6URL9;
private: System::Windows::Forms::Label^  labelMethod6URL8;
private: System::Windows::Forms::Label^  labelMethod6URL7;
private: System::Windows::Forms::Label^  labelMethod6URL6;
private: System::Windows::Forms::Label^  labelMethod6URL5;
private: System::Windows::Forms::Label^  labelMethod6URL4;
private: System::Windows::Forms::Label^  labelMethod6URL3;










private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  labelMethod6URL2;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  labelMethod6URL1;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Label^  label结论;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Label^  labelMethod2RL10;
private: System::Windows::Forms::Label^  labelMethod2RL9;
private: System::Windows::Forms::Label^  labelMethod2RL8;
private: System::Windows::Forms::Label^  labelMethod2RL7;
private: System::Windows::Forms::Label^  labelMethod2RL6;
private: System::Windows::Forms::Label^  labelMethod2RL5;
private: System::Windows::Forms::Label^  labelMethod2RL4;
private: System::Windows::Forms::Label^  labelMethod2RL3;
private: System::Windows::Forms::Label^  labelMethod2RL2;
private: System::Windows::Forms::Label^  labelMethod2RL1;
private: System::Windows::Forms::Label^  labelMethod6RL10;
private: System::Windows::Forms::Label^  labelMethod6RL9;
private: System::Windows::Forms::Label^  labelMethod6RL8;
private: System::Windows::Forms::Label^  labelMethod6RL7;
private: System::Windows::Forms::Label^  labelMethod6RL6;
private: System::Windows::Forms::Label^  labelMethod6RL5;
private: System::Windows::Forms::Label^  labelMethod6RL4;
private: System::Windows::Forms::Label^  labelMethod6RL3;
private: System::Windows::Forms::Label^  labelMethod6RL2;
private: System::Windows::Forms::Label^  labelMethod6RL1;
private: System::Windows::Forms::Label^  textBoxMethod1I;
private: System::Windows::Forms::Label^  textBoxMethod1Us;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  textBoxMethod2Ro;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  textBoxMethod3Ro;
private: System::Windows::Forms::Label^  textBoxMethod3Uoc;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::Label^  textBoxMethod5R0;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TextBox^  textBoxTrial5Score;

private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Label^  textBoxMethod4Uoc;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  textBoxTrial4Score;

private: System::Windows::Forms::Label^  label23;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(戴维南定理::typeid));
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
			this->textBoxMethod1I = (gcnew System::Windows::Forms::Label());
			this->textBoxMethod1Us = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->labelMethod1Isc = (gcnew System::Windows::Forms::Label());
			this->labelMethod1Uoc = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMethod2Ro = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2RL10 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2RL9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2RL8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2RL7 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2RL6 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2RL5 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2RL4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2RL3 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2RL2 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2RL1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->chartTrial2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labelMethod2I10 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I7 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I6 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I5 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I3 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I2 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2I1 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL10 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL7 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL6 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL5 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod2URL1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMethod3Ro = (gcnew System::Windows::Forms::Label());
			this->textBoxMethod3Uoc = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3Score = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->labelMethod6RL10 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6RL9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6RL8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6RL7 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6RL6 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6RL5 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6RL4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6RL3 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6RL2 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6RL1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial6Score = (gcnew System::Windows::Forms::TextBox());
			this->chartTrial6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labelMethod6I10 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I7 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I6 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I5 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I3 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I2 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6I1 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL10 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL9 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL8 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL7 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL6 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL5 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL4 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL3 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL2 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->labelMethod6URL1 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMethod5R0 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial5Score = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMethod4Uoc = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4Score = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label结论 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox7->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial2))->BeginInit();
			this->panel1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial6))->BeginInit();
			this->panel2->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(7, 7);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(646, 314);
			this->groupBox7->TabIndex = 198;
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
			this->groupBox1->Controls->Add(this->textBoxMethod1I);
			this->groupBox1->Controls->Add(this->textBoxMethod1Us);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBoxTrial1Score);
			this->groupBox1->Controls->Add(this->labelMethod1Isc);
			this->groupBox1->Controls->Add(this->labelMethod1Uoc);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(665, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(708, 275);
			this->groupBox1->TabIndex = 199;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"1.开路电压、短路电流法";
			// 
			// textBoxMethod1I
			// 
			this->textBoxMethod1I->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxMethod1I->Location = System::Drawing::Point(323, 178);
			this->textBoxMethod1I->Name = L"textBoxMethod1I";
			this->textBoxMethod1I->Size = System::Drawing::Size(119, 30);
			this->textBoxMethod1I->TabIndex = 258;
			this->textBoxMethod1I->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxMethod1Us
			// 
			this->textBoxMethod1Us->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxMethod1Us->Location = System::Drawing::Point(196, 178);
			this->textBoxMethod1Us->Name = L"textBoxMethod1Us";
			this->textBoxMethod1Us->Size = System::Drawing::Size(119, 30);
			this->textBoxMethod1Us->TabIndex = 257;
			this->textBoxMethod1Us->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Location = System::Drawing::Point(323, 138);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(119, 25);
			this->label14->TabIndex = 254;
			this->label14->Text = L"I(mA)";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Location = System::Drawing::Point(196, 138);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(119, 25);
			this->label15->TabIndex = 253;
			this->label15->Text = L"Us(V)";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(420, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 30);
			this->label2->TabIndex = 211;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(36, 247);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 20);
			this->label9->TabIndex = 210;
			this->label9->Text = L"请打分：";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(313, 247);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 20);
			this->label10->TabIndex = 209;
			this->label10->Text = L"本项目总分20";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(138, 242);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 208;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &戴维南定理::textBoxTrial1Score_TextChanged);
			// 
			// labelMethod1Isc
			// 
			this->labelMethod1Isc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod1Isc->Location = System::Drawing::Point(309, 85);
			this->labelMethod1Isc->Name = L"labelMethod1Isc";
			this->labelMethod1Isc->Size = System::Drawing::Size(93, 30);
			this->labelMethod1Isc->TabIndex = 196;
			this->labelMethod1Isc->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod1Uoc
			// 
			this->labelMethod1Uoc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod1Uoc->Location = System::Drawing::Point(195, 85);
			this->labelMethod1Uoc->Name = L"labelMethod1Uoc";
			this->labelMethod1Uoc->Size = System::Drawing::Size(93, 30);
			this->labelMethod1Uoc->TabIndex = 194;
			this->labelMethod1Uoc->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(32, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 50);
			this->label1->TabIndex = 104;
			this->label1->Text = L"Us=12V\r\nIs=1mA";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Location = System::Drawing::Point(420, 43);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(130, 23);
			this->label25->TabIndex = 103;
			this->label25->Text = L"Ro=Uoc/Isc";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Location = System::Drawing::Point(309, 42);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 23);
			this->label26->TabIndex = 102;
			this->label26->Text = L"Isc";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Location = System::Drawing::Point(195, 43);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(93, 23);
			this->label27->TabIndex = 101;
			this->label27->Text = L"Uoc";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(28, 43);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(104, 23);
			this->label19->TabIndex = 98;
			this->label19->Text = L"被测量";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxMethod2Ro);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->labelMethod2RL10);
			this->groupBox2->Controls->Add(this->labelMethod2RL9);
			this->groupBox2->Controls->Add(this->labelMethod2RL8);
			this->groupBox2->Controls->Add(this->labelMethod2RL7);
			this->groupBox2->Controls->Add(this->labelMethod2RL6);
			this->groupBox2->Controls->Add(this->labelMethod2RL5);
			this->groupBox2->Controls->Add(this->labelMethod2RL4);
			this->groupBox2->Controls->Add(this->labelMethod2RL3);
			this->groupBox2->Controls->Add(this->labelMethod2RL2);
			this->groupBox2->Controls->Add(this->labelMethod2RL1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBoxTrial2Score);
			this->groupBox2->Controls->Add(this->chartTrial2);
			this->groupBox2->Controls->Add(this->labelMethod2I10);
			this->groupBox2->Controls->Add(this->labelMethod2I9);
			this->groupBox2->Controls->Add(this->labelMethod2I8);
			this->groupBox2->Controls->Add(this->labelMethod2I7);
			this->groupBox2->Controls->Add(this->labelMethod2I6);
			this->groupBox2->Controls->Add(this->labelMethod2I5);
			this->groupBox2->Controls->Add(this->labelMethod2I4);
			this->groupBox2->Controls->Add(this->labelMethod2I3);
			this->groupBox2->Controls->Add(this->labelMethod2I2);
			this->groupBox2->Controls->Add(this->labelMethod2I1);
			this->groupBox2->Controls->Add(this->labelMethod2URL10);
			this->groupBox2->Controls->Add(this->labelMethod2URL9);
			this->groupBox2->Controls->Add(this->labelMethod2URL8);
			this->groupBox2->Controls->Add(this->labelMethod2URL7);
			this->groupBox2->Controls->Add(this->labelMethod2URL6);
			this->groupBox2->Controls->Add(this->labelMethod2URL5);
			this->groupBox2->Controls->Add(this->labelMethod2URL4);
			this->groupBox2->Controls->Add(this->labelMethod2URL3);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->labelMethod2URL2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->labelMethod2URL1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(7, 327);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1360, 516);
			this->groupBox2->TabIndex = 200;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"2.伏安法";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &戴维南定理::groupBox2_Enter);
			// 
			// textBoxMethod2Ro
			// 
			this->textBoxMethod2Ro->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxMethod2Ro->Location = System::Drawing::Point(630, 223);
			this->textBoxMethod2Ro->Name = L"textBoxMethod2Ro";
			this->textBoxMethod2Ro->Size = System::Drawing::Size(180, 30);
			this->textBoxMethod2Ro->TabIndex = 318;
			this->textBoxMethod2Ro->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Location = System::Drawing::Point(528, 223);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(93, 30);
			this->label16->TabIndex = 317;
			this->label16->Text = L"Ro";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2RL10
			// 
			this->labelMethod2RL10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2RL10->Location = System::Drawing::Point(1231, 30);
			this->labelMethod2RL10->Name = L"labelMethod2RL10";
			this->labelMethod2RL10->Size = System::Drawing::Size(98, 36);
			this->labelMethod2RL10->TabIndex = 315;
			this->labelMethod2RL10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2RL9
			// 
			this->labelMethod2RL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2RL9->Location = System::Drawing::Point(1106, 30);
			this->labelMethod2RL9->Name = L"labelMethod2RL9";
			this->labelMethod2RL9->Size = System::Drawing::Size(100, 36);
			this->labelMethod2RL9->TabIndex = 314;
			this->labelMethod2RL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2RL8
			// 
			this->labelMethod2RL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2RL8->Location = System::Drawing::Point(997, 30);
			this->labelMethod2RL8->Name = L"labelMethod2RL8";
			this->labelMethod2RL8->Size = System::Drawing::Size(98, 36);
			this->labelMethod2RL8->TabIndex = 313;
			this->labelMethod2RL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2RL7
			// 
			this->labelMethod2RL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2RL7->Location = System::Drawing::Point(872, 30);
			this->labelMethod2RL7->Name = L"labelMethod2RL7";
			this->labelMethod2RL7->Size = System::Drawing::Size(100, 36);
			this->labelMethod2RL7->TabIndex = 312;
			this->labelMethod2RL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2RL6
			// 
			this->labelMethod2RL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2RL6->Location = System::Drawing::Point(748, 30);
			this->labelMethod2RL6->Name = L"labelMethod2RL6";
			this->labelMethod2RL6->Size = System::Drawing::Size(98, 36);
			this->labelMethod2RL6->TabIndex = 311;
			this->labelMethod2RL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2RL5
			// 
			this->labelMethod2RL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2RL5->Location = System::Drawing::Point(623, 30);
			this->labelMethod2RL5->Name = L"labelMethod2RL5";
			this->labelMethod2RL5->Size = System::Drawing::Size(100, 36);
			this->labelMethod2RL5->TabIndex = 310;
			this->labelMethod2RL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2RL4
			// 
			this->labelMethod2RL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2RL4->Location = System::Drawing::Point(501, 30);
			this->labelMethod2RL4->Name = L"labelMethod2RL4";
			this->labelMethod2RL4->Size = System::Drawing::Size(98, 36);
			this->labelMethod2RL4->TabIndex = 309;
			this->labelMethod2RL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2RL3
			// 
			this->labelMethod2RL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2RL3->Location = System::Drawing::Point(376, 30);
			this->labelMethod2RL3->Name = L"labelMethod2RL3";
			this->labelMethod2RL3->Size = System::Drawing::Size(100, 36);
			this->labelMethod2RL3->TabIndex = 308;
			this->labelMethod2RL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2RL2
			// 
			this->labelMethod2RL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2RL2->Location = System::Drawing::Point(252, 30);
			this->labelMethod2RL2->Name = L"labelMethod2RL2";
			this->labelMethod2RL2->Size = System::Drawing::Size(98, 36);
			this->labelMethod2RL2->TabIndex = 307;
			this->labelMethod2RL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2RL1
			// 
			this->labelMethod2RL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2RL1->Location = System::Drawing::Point(127, 30);
			this->labelMethod2RL1->Name = L"labelMethod2RL1";
			this->labelMethod2RL1->Size = System::Drawing::Size(100, 36);
			this->labelMethod2RL1->TabIndex = 306;
			this->labelMethod2RL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(556, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 20);
			this->label3->TabIndex = 305;
			this->label3->Text = L"请打分：";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(833, 347);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 20);
			this->label5->TabIndex = 304;
			this->label5->Text = L"本项目总分30";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(658, 344);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 303;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &戴维南定理::textBoxTrial2Score_TextChanged);
			// 
			// chartTrial2
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartTrial2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartTrial2->Legends->Add(legend1);
			this->chartTrial2->Location = System::Drawing::Point(16, 193);
			this->chartTrial2->Name = L"chartTrial2";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartTrial2->Series->Add(series1);
			this->chartTrial2->Size = System::Drawing::Size(460, 320);
			this->chartTrial2->TabIndex = 302;
			// 
			// labelMethod2I10
			// 
			this->labelMethod2I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I10->Location = System::Drawing::Point(1232, 145);
			this->labelMethod2I10->Name = L"labelMethod2I10";
			this->labelMethod2I10->Size = System::Drawing::Size(98, 36);
			this->labelMethod2I10->TabIndex = 229;
			this->labelMethod2I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I9
			// 
			this->labelMethod2I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I9->Location = System::Drawing::Point(1107, 145);
			this->labelMethod2I9->Name = L"labelMethod2I9";
			this->labelMethod2I9->Size = System::Drawing::Size(100, 36);
			this->labelMethod2I9->TabIndex = 228;
			this->labelMethod2I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I8
			// 
			this->labelMethod2I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I8->Location = System::Drawing::Point(998, 146);
			this->labelMethod2I8->Name = L"labelMethod2I8";
			this->labelMethod2I8->Size = System::Drawing::Size(98, 36);
			this->labelMethod2I8->TabIndex = 227;
			this->labelMethod2I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I7
			// 
			this->labelMethod2I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I7->Location = System::Drawing::Point(873, 146);
			this->labelMethod2I7->Name = L"labelMethod2I7";
			this->labelMethod2I7->Size = System::Drawing::Size(100, 36);
			this->labelMethod2I7->TabIndex = 226;
			this->labelMethod2I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I6
			// 
			this->labelMethod2I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I6->Location = System::Drawing::Point(749, 144);
			this->labelMethod2I6->Name = L"labelMethod2I6";
			this->labelMethod2I6->Size = System::Drawing::Size(98, 36);
			this->labelMethod2I6->TabIndex = 225;
			this->labelMethod2I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I5
			// 
			this->labelMethod2I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I5->Location = System::Drawing::Point(624, 144);
			this->labelMethod2I5->Name = L"labelMethod2I5";
			this->labelMethod2I5->Size = System::Drawing::Size(100, 36);
			this->labelMethod2I5->TabIndex = 224;
			this->labelMethod2I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I4
			// 
			this->labelMethod2I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I4->Location = System::Drawing::Point(502, 145);
			this->labelMethod2I4->Name = L"labelMethod2I4";
			this->labelMethod2I4->Size = System::Drawing::Size(98, 35);
			this->labelMethod2I4->TabIndex = 223;
			this->labelMethod2I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I3
			// 
			this->labelMethod2I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I3->Location = System::Drawing::Point(377, 145);
			this->labelMethod2I3->Name = L"labelMethod2I3";
			this->labelMethod2I3->Size = System::Drawing::Size(100, 35);
			this->labelMethod2I3->TabIndex = 222;
			this->labelMethod2I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I2
			// 
			this->labelMethod2I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I2->Location = System::Drawing::Point(253, 144);
			this->labelMethod2I2->Name = L"labelMethod2I2";
			this->labelMethod2I2->Size = System::Drawing::Size(98, 35);
			this->labelMethod2I2->TabIndex = 221;
			this->labelMethod2I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2I1
			// 
			this->labelMethod2I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2I1->Location = System::Drawing::Point(128, 144);
			this->labelMethod2I1->Name = L"labelMethod2I1";
			this->labelMethod2I1->Size = System::Drawing::Size(100, 35);
			this->labelMethod2I1->TabIndex = 220;
			this->labelMethod2I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL10
			// 
			this->labelMethod2URL10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL10->Location = System::Drawing::Point(1232, 92);
			this->labelMethod2URL10->Name = L"labelMethod2URL10";
			this->labelMethod2URL10->Size = System::Drawing::Size(98, 36);
			this->labelMethod2URL10->TabIndex = 219;
			this->labelMethod2URL10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL9
			// 
			this->labelMethod2URL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL9->Location = System::Drawing::Point(1107, 92);
			this->labelMethod2URL9->Name = L"labelMethod2URL9";
			this->labelMethod2URL9->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL9->TabIndex = 218;
			this->labelMethod2URL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL8
			// 
			this->labelMethod2URL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL8->Location = System::Drawing::Point(998, 92);
			this->labelMethod2URL8->Name = L"labelMethod2URL8";
			this->labelMethod2URL8->Size = System::Drawing::Size(98, 36);
			this->labelMethod2URL8->TabIndex = 217;
			this->labelMethod2URL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL7
			// 
			this->labelMethod2URL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL7->Location = System::Drawing::Point(873, 92);
			this->labelMethod2URL7->Name = L"labelMethod2URL7";
			this->labelMethod2URL7->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL7->TabIndex = 216;
			this->labelMethod2URL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL6
			// 
			this->labelMethod2URL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL6->Location = System::Drawing::Point(749, 92);
			this->labelMethod2URL6->Name = L"labelMethod2URL6";
			this->labelMethod2URL6->Size = System::Drawing::Size(98, 36);
			this->labelMethod2URL6->TabIndex = 215;
			this->labelMethod2URL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL5
			// 
			this->labelMethod2URL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL5->Location = System::Drawing::Point(624, 92);
			this->labelMethod2URL5->Name = L"labelMethod2URL5";
			this->labelMethod2URL5->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL5->TabIndex = 214;
			this->labelMethod2URL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL4
			// 
			this->labelMethod2URL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL4->Location = System::Drawing::Point(502, 92);
			this->labelMethod2URL4->Name = L"labelMethod2URL4";
			this->labelMethod2URL4->Size = System::Drawing::Size(98, 36);
			this->labelMethod2URL4->TabIndex = 213;
			this->labelMethod2URL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL3
			// 
			this->labelMethod2URL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL3->Location = System::Drawing::Point(377, 92);
			this->labelMethod2URL3->Name = L"labelMethod2URL3";
			this->labelMethod2URL3->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL3->TabIndex = 212;
			this->labelMethod2URL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Location = System::Drawing::Point(16, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 26);
			this->label8->TabIndex = 201;
			this->label8->Text = L"RL";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL2
			// 
			this->labelMethod2URL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL2->Location = System::Drawing::Point(253, 92);
			this->labelMethod2URL2->Name = L"labelMethod2URL2";
			this->labelMethod2URL2->Size = System::Drawing::Size(98, 36);
			this->labelMethod2URL2->TabIndex = 199;
			this->labelMethod2URL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Location = System::Drawing::Point(16, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 38);
			this->label4->TabIndex = 198;
			this->label4->Text = L"I(mA)";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod2URL1
			// 
			this->labelMethod2URL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod2URL1->Location = System::Drawing::Point(128, 92);
			this->labelMethod2URL1->Name = L"labelMethod2URL1";
			this->labelMethod2URL1->Size = System::Drawing::Size(100, 36);
			this->labelMethod2URL1->TabIndex = 194;
			this->labelMethod2URL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Location = System::Drawing::Point(16, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 36);
			this->label7->TabIndex = 104;
			this->label7->Text = L"URL(V)";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1375, 858);
			this->panel1->TabIndex = 201;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &戴维南定理::panel1_Paint);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBoxMethod3Ro);
			this->groupBox3->Controls->Add(this->textBoxMethod3Uoc);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->textBoxTrial3Score);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(10, 17);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(441, 212);
			this->groupBox3->TabIndex = 202;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"3.半电压法";
			// 
			// textBoxMethod3Ro
			// 
			this->textBoxMethod3Ro->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxMethod3Ro->Location = System::Drawing::Point(113, 107);
			this->textBoxMethod3Ro->Name = L"textBoxMethod3Ro";
			this->textBoxMethod3Ro->Size = System::Drawing::Size(208, 30);
			this->textBoxMethod3Ro->TabIndex = 320;
			this->textBoxMethod3Ro->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxMethod3Uoc
			// 
			this->textBoxMethod3Uoc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxMethod3Uoc->Location = System::Drawing::Point(113, 39);
			this->textBoxMethod3Uoc->Name = L"textBoxMethod3Uoc";
			this->textBoxMethod3Uoc->Size = System::Drawing::Size(208, 30);
			this->textBoxMethod3Uoc->TabIndex = 319;
			this->textBoxMethod3Uoc->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(14, 163);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 20);
			this->label6->TabIndex = 308;
			this->label6->Text = L"请打分：";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(291, 163);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(129, 20);
			this->label11->TabIndex = 307;
			this->label11->Text = L"本项目总分20";
			// 
			// textBoxTrial3Score
			// 
			this->textBoxTrial3Score->Location = System::Drawing::Point(116, 160);
			this->textBoxTrial3Score->Name = L"textBoxTrial3Score";
			this->textBoxTrial3Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial3Score->TabIndex = 306;
			this->textBoxTrial3Score->TextChanged += gcnew System::EventHandler(this, &戴维南定理::textBoxTrial3Score_TextChanged);
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Location = System::Drawing::Point(31, 104);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(76, 36);
			this->label33->TabIndex = 240;
			this->label33->Text = L"Ro =";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Location = System::Drawing::Point(31, 39);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(76, 36);
			this->label32->TabIndex = 105;
			this->label32->Text = L"Uoc =";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->labelMethod6RL10);
			this->groupBox6->Controls->Add(this->labelMethod6RL9);
			this->groupBox6->Controls->Add(this->labelMethod6RL8);
			this->groupBox6->Controls->Add(this->labelMethod6RL7);
			this->groupBox6->Controls->Add(this->labelMethod6RL6);
			this->groupBox6->Controls->Add(this->labelMethod6RL5);
			this->groupBox6->Controls->Add(this->labelMethod6RL4);
			this->groupBox6->Controls->Add(this->labelMethod6RL3);
			this->groupBox6->Controls->Add(this->labelMethod6RL2);
			this->groupBox6->Controls->Add(this->labelMethod6RL1);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Controls->Add(this->label13);
			this->groupBox6->Controls->Add(this->textBoxTrial6Score);
			this->groupBox6->Controls->Add(this->chartTrial6);
			this->groupBox6->Controls->Add(this->labelMethod6I10);
			this->groupBox6->Controls->Add(this->labelMethod6I9);
			this->groupBox6->Controls->Add(this->labelMethod6I8);
			this->groupBox6->Controls->Add(this->labelMethod6I7);
			this->groupBox6->Controls->Add(this->labelMethod6I6);
			this->groupBox6->Controls->Add(this->labelMethod6I5);
			this->groupBox6->Controls->Add(this->labelMethod6I4);
			this->groupBox6->Controls->Add(this->labelMethod6I3);
			this->groupBox6->Controls->Add(this->labelMethod6I2);
			this->groupBox6->Controls->Add(this->labelMethod6I1);
			this->groupBox6->Controls->Add(this->labelMethod6URL10);
			this->groupBox6->Controls->Add(this->labelMethod6URL9);
			this->groupBox6->Controls->Add(this->labelMethod6URL8);
			this->groupBox6->Controls->Add(this->labelMethod6URL7);
			this->groupBox6->Controls->Add(this->labelMethod6URL6);
			this->groupBox6->Controls->Add(this->labelMethod6URL5);
			this->groupBox6->Controls->Add(this->labelMethod6URL4);
			this->groupBox6->Controls->Add(this->labelMethod6URL3);
			this->groupBox6->Controls->Add(this->label58);
			this->groupBox6->Controls->Add(this->labelMethod6URL2);
			this->groupBox6->Controls->Add(this->label60);
			this->groupBox6->Controls->Add(this->labelMethod6URL1);
			this->groupBox6->Controls->Add(this->label62);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox6->Location = System::Drawing::Point(10, 249);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(1350, 544);
			this->groupBox6->TabIndex = 203;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"6.验证";
			// 
			// labelMethod6RL10
			// 
			this->labelMethod6RL10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6RL10->Location = System::Drawing::Point(1233, 29);
			this->labelMethod6RL10->Name = L"labelMethod6RL10";
			this->labelMethod6RL10->Size = System::Drawing::Size(98, 36);
			this->labelMethod6RL10->TabIndex = 321;
			this->labelMethod6RL10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6RL9
			// 
			this->labelMethod6RL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6RL9->Location = System::Drawing::Point(1113, 29);
			this->labelMethod6RL9->Name = L"labelMethod6RL9";
			this->labelMethod6RL9->Size = System::Drawing::Size(100, 36);
			this->labelMethod6RL9->TabIndex = 320;
			this->labelMethod6RL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6RL8
			// 
			this->labelMethod6RL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6RL8->Location = System::Drawing::Point(999, 29);
			this->labelMethod6RL8->Name = L"labelMethod6RL8";
			this->labelMethod6RL8->Size = System::Drawing::Size(98, 36);
			this->labelMethod6RL8->TabIndex = 319;
			this->labelMethod6RL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6RL7
			// 
			this->labelMethod6RL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6RL7->Location = System::Drawing::Point(874, 29);
			this->labelMethod6RL7->Name = L"labelMethod6RL7";
			this->labelMethod6RL7->Size = System::Drawing::Size(100, 36);
			this->labelMethod6RL7->TabIndex = 318;
			this->labelMethod6RL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6RL6
			// 
			this->labelMethod6RL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6RL6->Location = System::Drawing::Point(750, 29);
			this->labelMethod6RL6->Name = L"labelMethod6RL6";
			this->labelMethod6RL6->Size = System::Drawing::Size(98, 36);
			this->labelMethod6RL6->TabIndex = 317;
			this->labelMethod6RL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6RL5
			// 
			this->labelMethod6RL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6RL5->Location = System::Drawing::Point(625, 29);
			this->labelMethod6RL5->Name = L"labelMethod6RL5";
			this->labelMethod6RL5->Size = System::Drawing::Size(100, 36);
			this->labelMethod6RL5->TabIndex = 316;
			this->labelMethod6RL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6RL4
			// 
			this->labelMethod6RL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6RL4->Location = System::Drawing::Point(503, 29);
			this->labelMethod6RL4->Name = L"labelMethod6RL4";
			this->labelMethod6RL4->Size = System::Drawing::Size(98, 36);
			this->labelMethod6RL4->TabIndex = 315;
			this->labelMethod6RL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6RL3
			// 
			this->labelMethod6RL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6RL3->Location = System::Drawing::Point(378, 29);
			this->labelMethod6RL3->Name = L"labelMethod6RL3";
			this->labelMethod6RL3->Size = System::Drawing::Size(100, 36);
			this->labelMethod6RL3->TabIndex = 314;
			this->labelMethod6RL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6RL2
			// 
			this->labelMethod6RL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6RL2->Location = System::Drawing::Point(254, 29);
			this->labelMethod6RL2->Name = L"labelMethod6RL2";
			this->labelMethod6RL2->Size = System::Drawing::Size(98, 36);
			this->labelMethod6RL2->TabIndex = 313;
			this->labelMethod6RL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6RL1
			// 
			this->labelMethod6RL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6RL1->Location = System::Drawing::Point(129, 29);
			this->labelMethod6RL1->Name = L"labelMethod6RL1";
			this->labelMethod6RL1->Size = System::Drawing::Size(100, 36);
			this->labelMethod6RL1->TabIndex = 312;
			this->labelMethod6RL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(539, 364);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 20);
			this->label12->TabIndex = 311;
			this->label12->Text = L"请打分：";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(816, 364);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 20);
			this->label13->TabIndex = 310;
			this->label13->Text = L"本项目总分30";
			// 
			// textBoxTrial6Score
			// 
			this->textBoxTrial6Score->Location = System::Drawing::Point(641, 361);
			this->textBoxTrial6Score->Name = L"textBoxTrial6Score";
			this->textBoxTrial6Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial6Score->TabIndex = 309;
			this->textBoxTrial6Score->TextChanged += gcnew System::EventHandler(this, &戴维南定理::textBoxTrial6Score_TextChanged);
			// 
			// chartTrial6
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartTrial6->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartTrial6->Legends->Add(legend2);
			this->chartTrial6->Location = System::Drawing::Point(17, 184);
			this->chartTrial6->Name = L"chartTrial6";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chartTrial6->Series->Add(series2);
			this->chartTrial6->Size = System::Drawing::Size(446, 345);
			this->chartTrial6->TabIndex = 301;
			this->chartTrial6->Text = L"chartTrial6";
			// 
			// labelMethod6I10
			// 
			this->labelMethod6I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I10->Location = System::Drawing::Point(1233, 135);
			this->labelMethod6I10->Name = L"labelMethod6I10";
			this->labelMethod6I10->Size = System::Drawing::Size(98, 36);
			this->labelMethod6I10->TabIndex = 282;
			this->labelMethod6I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I9
			// 
			this->labelMethod6I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I9->Location = System::Drawing::Point(1113, 135);
			this->labelMethod6I9->Name = L"labelMethod6I9";
			this->labelMethod6I9->Size = System::Drawing::Size(100, 36);
			this->labelMethod6I9->TabIndex = 281;
			this->labelMethod6I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I8
			// 
			this->labelMethod6I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I8->Location = System::Drawing::Point(999, 136);
			this->labelMethod6I8->Name = L"labelMethod6I8";
			this->labelMethod6I8->Size = System::Drawing::Size(98, 36);
			this->labelMethod6I8->TabIndex = 280;
			this->labelMethod6I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I7
			// 
			this->labelMethod6I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I7->Location = System::Drawing::Point(874, 136);
			this->labelMethod6I7->Name = L"labelMethod6I7";
			this->labelMethod6I7->Size = System::Drawing::Size(100, 36);
			this->labelMethod6I7->TabIndex = 279;
			this->labelMethod6I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I6
			// 
			this->labelMethod6I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I6->Location = System::Drawing::Point(750, 134);
			this->labelMethod6I6->Name = L"labelMethod6I6";
			this->labelMethod6I6->Size = System::Drawing::Size(98, 36);
			this->labelMethod6I6->TabIndex = 278;
			this->labelMethod6I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I5
			// 
			this->labelMethod6I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I5->Location = System::Drawing::Point(625, 134);
			this->labelMethod6I5->Name = L"labelMethod6I5";
			this->labelMethod6I5->Size = System::Drawing::Size(100, 36);
			this->labelMethod6I5->TabIndex = 277;
			this->labelMethod6I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I4
			// 
			this->labelMethod6I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I4->Location = System::Drawing::Point(503, 135);
			this->labelMethod6I4->Name = L"labelMethod6I4";
			this->labelMethod6I4->Size = System::Drawing::Size(98, 35);
			this->labelMethod6I4->TabIndex = 276;
			this->labelMethod6I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I3
			// 
			this->labelMethod6I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I3->Location = System::Drawing::Point(378, 135);
			this->labelMethod6I3->Name = L"labelMethod6I3";
			this->labelMethod6I3->Size = System::Drawing::Size(100, 35);
			this->labelMethod6I3->TabIndex = 275;
			this->labelMethod6I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I2
			// 
			this->labelMethod6I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I2->Location = System::Drawing::Point(254, 134);
			this->labelMethod6I2->Name = L"labelMethod6I2";
			this->labelMethod6I2->Size = System::Drawing::Size(98, 35);
			this->labelMethod6I2->TabIndex = 274;
			this->labelMethod6I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6I1
			// 
			this->labelMethod6I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6I1->Location = System::Drawing::Point(129, 134);
			this->labelMethod6I1->Name = L"labelMethod6I1";
			this->labelMethod6I1->Size = System::Drawing::Size(100, 35);
			this->labelMethod6I1->TabIndex = 273;
			this->labelMethod6I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL10
			// 
			this->labelMethod6URL10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL10->Location = System::Drawing::Point(1233, 82);
			this->labelMethod6URL10->Name = L"labelMethod6URL10";
			this->labelMethod6URL10->Size = System::Drawing::Size(98, 36);
			this->labelMethod6URL10->TabIndex = 272;
			this->labelMethod6URL10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL9
			// 
			this->labelMethod6URL9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL9->Location = System::Drawing::Point(1113, 82);
			this->labelMethod6URL9->Name = L"labelMethod6URL9";
			this->labelMethod6URL9->Size = System::Drawing::Size(100, 36);
			this->labelMethod6URL9->TabIndex = 271;
			this->labelMethod6URL9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL8
			// 
			this->labelMethod6URL8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL8->Location = System::Drawing::Point(999, 82);
			this->labelMethod6URL8->Name = L"labelMethod6URL8";
			this->labelMethod6URL8->Size = System::Drawing::Size(98, 36);
			this->labelMethod6URL8->TabIndex = 270;
			this->labelMethod6URL8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL7
			// 
			this->labelMethod6URL7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL7->Location = System::Drawing::Point(874, 82);
			this->labelMethod6URL7->Name = L"labelMethod6URL7";
			this->labelMethod6URL7->Size = System::Drawing::Size(100, 36);
			this->labelMethod6URL7->TabIndex = 269;
			this->labelMethod6URL7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL6
			// 
			this->labelMethod6URL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL6->Location = System::Drawing::Point(750, 82);
			this->labelMethod6URL6->Name = L"labelMethod6URL6";
			this->labelMethod6URL6->Size = System::Drawing::Size(98, 36);
			this->labelMethod6URL6->TabIndex = 268;
			this->labelMethod6URL6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL5
			// 
			this->labelMethod6URL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL5->Location = System::Drawing::Point(625, 82);
			this->labelMethod6URL5->Name = L"labelMethod6URL5";
			this->labelMethod6URL5->Size = System::Drawing::Size(100, 36);
			this->labelMethod6URL5->TabIndex = 267;
			this->labelMethod6URL5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL4
			// 
			this->labelMethod6URL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL4->Location = System::Drawing::Point(503, 82);
			this->labelMethod6URL4->Name = L"labelMethod6URL4";
			this->labelMethod6URL4->Size = System::Drawing::Size(98, 36);
			this->labelMethod6URL4->TabIndex = 266;
			this->labelMethod6URL4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL3
			// 
			this->labelMethod6URL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL3->Location = System::Drawing::Point(378, 82);
			this->labelMethod6URL3->Name = L"labelMethod6URL3";
			this->labelMethod6URL3->Size = System::Drawing::Size(100, 36);
			this->labelMethod6URL3->TabIndex = 265;
			this->labelMethod6URL3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label58
			// 
			this->label58->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label58->Location = System::Drawing::Point(14, 39);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(93, 26);
			this->label58->TabIndex = 254;
			this->label58->Text = L"RL";
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL2
			// 
			this->labelMethod6URL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL2->Location = System::Drawing::Point(254, 82);
			this->labelMethod6URL2->Name = L"labelMethod6URL2";
			this->labelMethod6URL2->Size = System::Drawing::Size(98, 36);
			this->labelMethod6URL2->TabIndex = 252;
			this->labelMethod6URL2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label60
			// 
			this->label60->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label60->Location = System::Drawing::Point(17, 132);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(93, 38);
			this->label60->TabIndex = 251;
			this->label60->Text = L"I(mA)";
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMethod6URL1
			// 
			this->labelMethod6URL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelMethod6URL1->Location = System::Drawing::Point(129, 82);
			this->labelMethod6URL1->Name = L"labelMethod6URL1";
			this->labelMethod6URL1->Size = System::Drawing::Size(100, 36);
			this->labelMethod6URL1->TabIndex = 249;
			this->labelMethod6URL1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label62
			// 
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label62->Location = System::Drawing::Point(17, 82);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(93, 36);
			this->label62->TabIndex = 248;
			this->label62->Text = L"URL(V)";
			this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->groupBox8);
			this->panel2->Controls->Add(this->groupBox4);
			this->panel2->Controls->Add(this->label结论);
			this->panel2->Controls->Add(this->label64);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->groupBox5);
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Controls->Add(this->groupBox6);
			this->panel2->Location = System::Drawing::Point(12, 887);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1377, 937);
			this->panel2->TabIndex = 204;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxMethod5R0);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->textBoxTrial5Score);
			this->groupBox8->Controls->Add(this->label24);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->Location = System::Drawing::Point(926, 17);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(441, 212);
			this->groupBox8->TabIndex = 325;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"5.直测法";
			// 
			// textBoxMethod5R0
			// 
			this->textBoxMethod5R0->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxMethod5R0->Location = System::Drawing::Point(113, 39);
			this->textBoxMethod5R0->Name = L"textBoxMethod5R0";
			this->textBoxMethod5R0->Size = System::Drawing::Size(208, 30);
			this->textBoxMethod5R0->TabIndex = 319;
			this->textBoxMethod5R0->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(18, 136);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 20);
			this->label18->TabIndex = 308;
			this->label18->Text = L"请打分：";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(295, 136);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(129, 20);
			this->label22->TabIndex = 307;
			this->label22->Text = L"本项目总分20";
			// 
			// textBoxTrial5Score
			// 
			this->textBoxTrial5Score->Location = System::Drawing::Point(120, 133);
			this->textBoxTrial5Score->Name = L"textBoxTrial5Score";
			this->textBoxTrial5Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial5Score->TabIndex = 306;
			this->textBoxTrial5Score->TextChanged += gcnew System::EventHandler(this, &戴维南定理::textBox2_TextChanged);
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Location = System::Drawing::Point(31, 39);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(76, 30);
			this->label24->TabIndex = 105;
			this->label24->Text = L"R0 =";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBoxMethod4Uoc);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->textBoxTrial4Score);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->Location = System::Drawing::Point(471, 17);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(441, 212);
			this->groupBox4->TabIndex = 324;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"4.零示法";
			// 
			// textBoxMethod4Uoc
			// 
			this->textBoxMethod4Uoc->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxMethod4Uoc->Location = System::Drawing::Point(113, 39);
			this->textBoxMethod4Uoc->Name = L"textBoxMethod4Uoc";
			this->textBoxMethod4Uoc->Size = System::Drawing::Size(208, 30);
			this->textBoxMethod4Uoc->TabIndex = 319;
			this->textBoxMethod4Uoc->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(18, 136);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(89, 20);
			this->label20->TabIndex = 308;
			this->label20->Text = L"请打分：";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(295, 136);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(129, 20);
			this->label21->TabIndex = 307;
			this->label21->Text = L"本项目总分20";
			// 
			// textBoxTrial4Score
			// 
			this->textBoxTrial4Score->Location = System::Drawing::Point(120, 133);
			this->textBoxTrial4Score->Name = L"textBoxTrial4Score";
			this->textBoxTrial4Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial4Score->TabIndex = 306;
			this->textBoxTrial4Score->TextChanged += gcnew System::EventHandler(this, &戴维南定理::textBox1_TextChanged);
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Location = System::Drawing::Point(31, 39);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(76, 30);
			this->label23->TabIndex = 105;
			this->label23->Text = L"Uoc =";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label结论
			// 
			this->label结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label结论->Location = System::Drawing::Point(178, 801);
			this->label结论->Name = L"label结论";
			this->label结论->Size = System::Drawing::Size(1000, 33);
			this->label结论->TabIndex = 323;
			this->label结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->ForeColor = System::Drawing::Color::Black;
			this->label64->Location = System::Drawing::Point(11, 807);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(95, 27);
			this->label64->TabIndex = 322;
			this->label64->Text = L"实验结论";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1060, 873);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 321;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &戴维南定理::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(947, 873);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 320;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &戴维南定理::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(840, 873);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 319;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &戴维南定理::button1_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->labelTotalGrade);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(13, 847);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(640, 73);
			this->groupBox5->TabIndex = 318;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"戴维南定理实验总分";
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
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &戴维南定理::printDocument1_PrintPage);
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
			// 戴维南定理
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1644, 913);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"戴维南定理";
			this->Text = L"戴维南定理";
			this->Load += gcnew System::EventHandler(this, &戴维南定理::戴维南定理_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial6))->EndInit();
			this->panel2->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
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
			 
			 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Priview();
	SelectedArea = "panel2";
	Priview();
}
		 String ^SelectedArea = "";
		void  Priview();
		void Print();
		public:void Load戴维南定理Data(string &filename);
		string *fileName;
		void SaveCorrectGrades();
		void CalScores();
private: System::Void 戴维南定理_Load(System::Object^  sender, System::EventArgs^  e) {
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
		

private: System::Void textBoxTrial1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial3Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial6Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
