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
	/// VCVS实验 摘要
	/// </summary>
	public ref class VCVS实验 : public System::Windows::Forms::Form
	{
	public:
		VCVS实验(void)
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
		~VCVS实验()
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
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_8;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_7;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_6;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_5;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_4;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_3;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_2;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_1;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_8;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_7;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_6;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_5;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_4;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_3;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_2;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_1;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_9;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_8;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_7;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_6;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_5;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_4;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_3;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_2;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_1;









	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TextBox^  textBoxTrial1_2Score;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  textBoxTrial1_1Score;
private: System::Windows::Forms::GroupBox^  groupBox实验内容2;


private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  textBoxTrial2_2Score;

private: System::Windows::Forms::Label^  labeltrial2_2V2_7;
private: System::Windows::Forms::Label^  labeltrial2_2V2_6;
private: System::Windows::Forms::Label^  labeltrial2_2V2_5;
private: System::Windows::Forms::Label^  labeltrial2_2V2_4;
private: System::Windows::Forms::Label^  labeltrial2_2V2_3;
private: System::Windows::Forms::Label^  labeltrial2_2V2_2;
private: System::Windows::Forms::Label^  labeltrial2_2V2_1;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
private: System::Windows::Forms::Label^  labeltrial2_2IL_7;
private: System::Windows::Forms::Label^  labeltrial2_2IL_6;
private: System::Windows::Forms::Label^  labeltrial2_2IL_5;
private: System::Windows::Forms::Label^  labeltrial2_2IL_4;
private: System::Windows::Forms::Label^  labeltrial2_2IL_3;
private: System::Windows::Forms::Label^  labeltrial2_2IL_2;
private: System::Windows::Forms::Label^  labeltrial2_2IL_1;







private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  textBoxTrial2_1Score;


private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
private: System::Windows::Forms::Label^  labeltrial2_1IL_8;
private: System::Windows::Forms::Label^  labeltrial2_1IL_7;
private: System::Windows::Forms::Label^  labeltrial2_1IL_6;
private: System::Windows::Forms::Label^  labeltrial2_1IL_5;
private: System::Windows::Forms::Label^  labeltrial2_1IL_4;
private: System::Windows::Forms::Label^  labeltrial2_1IL_3;
private: System::Windows::Forms::Label^  labeltrial2_1IL_2;
private: System::Windows::Forms::Label^  labeltrial2_1IL_1;








private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::Label^  label101;
private: System::Windows::Forms::Label^  label102;
private: System::Windows::Forms::GroupBox^  groupBox实验内容3;

private: System::Windows::Forms::GroupBox^  groupBox9;


private: System::Windows::Forms::Label^  labeltrial3_2IL_8;
private: System::Windows::Forms::Label^  labeltrial3_2U2_8;













private: System::Windows::Forms::Label^  labeltrial3_2IL_7;


private: System::Windows::Forms::Label^  labeltrial3_2IL_6;
private: System::Windows::Forms::Label^  labeltrial3_2IL_5;
private: System::Windows::Forms::Label^  labeltrial3_2IL_4;
private: System::Windows::Forms::Label^  labeltrial3_2IL_3;
private: System::Windows::Forms::Label^  labeltrial3_2IL_2;
private: System::Windows::Forms::Label^  labeltrial3_2IL_1;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart5;

private: System::Windows::Forms::Label^  labeltrial3_2U2_7;
private: System::Windows::Forms::Label^  labeltrial3_2U2_6;
private: System::Windows::Forms::Label^  labeltrial3_2U2_5;
private: System::Windows::Forms::Label^  labeltrial3_2U2_4;
private: System::Windows::Forms::Label^  labeltrial3_2U2_3;
private: System::Windows::Forms::Label^  labeltrial3_2U2_2;
private: System::Windows::Forms::Label^  labeltrial3_2U2_1;







private: System::Windows::Forms::Label^  label121;
private: System::Windows::Forms::Label^  label122;
private: System::Windows::Forms::Label^  label123;
private: System::Windows::Forms::GroupBox^  groupBox10;









private: System::Windows::Forms::Label^  label124;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart6;

private: System::Windows::Forms::Label^  labeltrial3_1V2_8;
private: System::Windows::Forms::Label^  labeltrial3_1V2_7;
private: System::Windows::Forms::Label^  labeltrial3_1V2_6;
private: System::Windows::Forms::Label^  labeltrial3_1V2_5;
private: System::Windows::Forms::Label^  labeltrial3_1V2_4;
private: System::Windows::Forms::Label^  labeltrial3_1V2_3;
private: System::Windows::Forms::Label^  labeltrial3_1V2_2;
private: System::Windows::Forms::Label^  labeltrial3_1V2_1;
private: System::Windows::Forms::Label^  labeltrial3_1I1_8;
private: System::Windows::Forms::Label^  labeltrial3_1I1_7;
private: System::Windows::Forms::Label^  labeltrial3_1I1_6;
private: System::Windows::Forms::Label^  labeltrial3_1I1_5;
private: System::Windows::Forms::Label^  labeltrial3_1I1_4;
private: System::Windows::Forms::Label^  labeltrial3_1I1_3;
private: System::Windows::Forms::Label^  labeltrial3_1I1_2;
private: System::Windows::Forms::Label^  labeltrial3_1I1_1;
private: System::Windows::Forms::Label^  label141;
private: System::Windows::Forms::Label^  label142;
private: System::Windows::Forms::Label^  label143;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::TextBox^  textBoxTrial3_2Score;

private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TextBox^  textBoxTrial3_1Score;

private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::TextBox^  textBoxTrial4_2Score;









private: System::Windows::Forms::Label^  labeltrial4_2U2_8;
private: System::Windows::Forms::Label^  labeltrial4_2IL_8;
private: System::Windows::Forms::Label^  labeltrial4_2U2_7;
private: System::Windows::Forms::Label^  labeltrial4_2U2_6;
private: System::Windows::Forms::Label^  labeltrial4_2U2_5;
private: System::Windows::Forms::Label^  labeltrial4_2U2_4;
private: System::Windows::Forms::Label^  labeltrial4_2U2_3;
private: System::Windows::Forms::Label^  labeltrial4_2U2_2;
private: System::Windows::Forms::Label^  labeltrial4_2U2_1;
private: System::Windows::Forms::Label^  label158;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart7;
private: System::Windows::Forms::Label^  labeltrial4_2IL_7;
private: System::Windows::Forms::Label^  labeltrial4_2IL_6;
private: System::Windows::Forms::Label^  labeltrial4_2IL_5;
private: System::Windows::Forms::Label^  labeltrial4_2IL_4;
private: System::Windows::Forms::Label^  labeltrial4_2IL_3;
private: System::Windows::Forms::Label^  labeltrial4_2IL_2;
private: System::Windows::Forms::Label^  labeltrial4_2IL_1;
private: System::Windows::Forms::Label^  label173;
private: System::Windows::Forms::Label^  label174;
private: System::Windows::Forms::Label^  label175;
private: System::Windows::Forms::GroupBox^  groupBox13;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::TextBox^  textBoxTrial4_1Score;


private: System::Windows::Forms::Label^  label176;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart8;
private: System::Windows::Forms::Label^  labeltrial4_1IL_8;
private: System::Windows::Forms::Label^  labeltrial4_1IL_7;
private: System::Windows::Forms::Label^  labeltrial4_1IL_6;
private: System::Windows::Forms::Label^  labeltrial4_1IL_5;
private: System::Windows::Forms::Label^  labeltrial4_1IL_4;
private: System::Windows::Forms::Label^  labeltrial4_1IL_3;
private: System::Windows::Forms::Label^  labeltrial4_1IL_2;
private: System::Windows::Forms::Label^  labeltrial4_1IL_1;
private: System::Windows::Forms::Label^  labeltrial4_1I1_8;
private: System::Windows::Forms::Label^  labeltrial4_1I1_7;
private: System::Windows::Forms::Label^  labeltrial4_1I1_6;
private: System::Windows::Forms::Label^  labeltrial4_1I1_5;
private: System::Windows::Forms::Label^  labeltrial4_1I1_4;
private: System::Windows::Forms::Label^  labeltrial4_1I1_3;
private: System::Windows::Forms::Label^  labeltrial4_1I1_2;
private: System::Windows::Forms::Label^  labeltrial4_1I1_1;
private: System::Windows::Forms::Label^  label193;
private: System::Windows::Forms::Label^  label194;
private: System::Windows::Forms::Label^  label195;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Label^  labeltrial1_1u;
private: System::Windows::Forms::Label^  labeltrial2_1gm;
private: System::Windows::Forms::Label^  labeltrial3_1rm;
private: System::Windows::Forms::Label^  labeltrial4_1α;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Label^  labeltrial4_2RL_8;
private: System::Windows::Forms::Label^  labeltrial4_2RL_7;
private: System::Windows::Forms::Label^  labeltrial4_2RL_6;
private: System::Windows::Forms::Label^  labeltrial4_2RL_5;
private: System::Windows::Forms::Label^  labeltrial4_2RL_4;
private: System::Windows::Forms::Label^  labeltrial4_2RL_3;
private: System::Windows::Forms::Label^  labeltrial4_2RL_2;
private: System::Windows::Forms::Label^  labeltrial4_2RL_1;
private: System::Windows::Forms::Label^  labeltrial1_1U1_9;
private: System::Windows::Forms::Label^  labeltrial1_1U1_8;
private: System::Windows::Forms::Label^  labeltrial1_1U1_7;
private: System::Windows::Forms::Label^  labeltrial1_1U1_6;
private: System::Windows::Forms::Label^  labeltrial1_1U1_5;
private: System::Windows::Forms::Label^  labeltrial1_1U1_4;
private: System::Windows::Forms::Label^  labeltrial1_1U1_3;
private: System::Windows::Forms::Label^  labeltrial1_1U1_2;
private: System::Windows::Forms::Label^  labeltrial1_1U1_1;
private: System::Windows::Forms::Label^  textBoxtrial2_2RL_7;
private: System::Windows::Forms::Label^  textBoxtrial2_2RL_6;
private: System::Windows::Forms::Label^  textBoxtrial2_2RL_5;
private: System::Windows::Forms::Label^  textBoxtrial2_2RL_4;
private: System::Windows::Forms::Label^  textBoxtrial2_2RL_3;
private: System::Windows::Forms::Label^  textBoxtrial2_2RL_2;
private: System::Windows::Forms::Label^  textBoxtrial2_2RL_1;
private: System::Windows::Forms::Label^  labeltrial2_1U1_8;
private: System::Windows::Forms::Label^  labeltrial2_1U1_7;
private: System::Windows::Forms::Label^  labeltrial2_1U1_6;
private: System::Windows::Forms::Label^  labeltrial2_1U1_5;
private: System::Windows::Forms::Label^  labeltrial2_1U1_4;
private: System::Windows::Forms::Label^  labeltrial2_1U1_3;
private: System::Windows::Forms::Label^  labeltrial2_1U1_2;
private: System::Windows::Forms::Label^  labeltrial2_1U1_1;
private: System::Windows::Forms::Label^  textBoxtrial3_2RL_8;
private: System::Windows::Forms::Label^  textBoxtrial3_2RL_7;
private: System::Windows::Forms::Label^  textBoxtrial3_2RL_6;
private: System::Windows::Forms::Label^  textBoxtrial3_2RL_5;
private: System::Windows::Forms::Label^  textBoxtrial3_2RL_4;
private: System::Windows::Forms::Label^  textBoxtrial3_2RL_3;
private: System::Windows::Forms::Label^  textBoxtrial3_2RL_2;
private: System::Windows::Forms::Label^  textBoxtrial3_2RL_1;







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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VCVS实验::typeid));
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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_2Score = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial1_2IL_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_1 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labeltrial1_2V2_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_1 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labeltrial1_1u = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_1Score = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labeltrial1_1U2_9 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_1 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->groupBox实验内容2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_2Score = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial2_2V2_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_1 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labeltrial2_2IL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_1 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->labeltrial2_1gm = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_1Score = (gcnew System::Windows::Forms::TextBox());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labeltrial2_1IL_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_1 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->groupBox实验内容3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_2Score = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial3_2IL_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_1 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labeltrial3_2U2_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_1 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->labeltrial3_1rm = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_1Score = (gcnew System::Windows::Forms::TextBox());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->chart6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labeltrial3_1V2_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_1 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_1 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->labeltrial4_2RL_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2RL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2RL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2RL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2RL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2RL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2RL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2RL_1 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_2Score = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial4_2U2_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_1 = (gcnew System::Windows::Forms::Label());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->chart7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labeltrial4_2IL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_1 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->labeltrial4_1α = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial4_1Score = (gcnew System::Windows::Forms::TextBox());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->chart8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labeltrial4_1IL_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_1 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_1 = (gcnew System::Windows::Forms::Label());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label194 = (gcnew System::Windows::Forms::Label());
			this->label195 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->labeltrial1_1U1_9 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U1_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U1_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U1_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U1_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U1_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U1_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U1_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U1_1 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1U1_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1U1_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1U1_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1U1_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1U1_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1U1_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1U1_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1U1_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_2RL_7 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_2RL_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_2RL_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_2RL_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_2RL_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_2RL_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_2RL_1 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial3_2RL_8 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial3_2RL_7 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial3_2RL_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial3_2RL_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial3_2RL_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial3_2RL_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial3_2RL_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial3_2RL_1 = (gcnew System::Windows::Forms::Label());
			this->groupBox7->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox实验内容2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->groupBox实验内容3->SuspendLayout();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			this->groupBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->BeginInit();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart7))->BeginInit();
			this->groupBox13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart8))->BeginInit();
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(16, 338);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1280, 1109);
			this->groupBox2->TabIndex = 200;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容一";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->textBoxTrial1_2Score);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_8);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_7);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_6);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_5);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_4);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_3);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_2);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_1);
			this->groupBox3->Controls->Add(this->label46);
			this->groupBox3->Controls->Add(this->chart2);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_8);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_7);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_6);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_5);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_4);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_3);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_2);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_1);
			this->groupBox3->Controls->Add(this->label34);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label44);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(16, 551);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1188, 551);
			this->groupBox3->TabIndex = 111;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"第二组";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(622, 519);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(89, 20);
			this->label24->TabIndex = 216;
			this->label24->Text = L"请打分：";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->Location = System::Drawing::Point(899, 519);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(129, 20);
			this->label25->TabIndex = 215;
			this->label25->Text = L"本项目总分12";
			// 
			// textBoxTrial1_2Score
			// 
			this->textBoxTrial1_2Score->Location = System::Drawing::Point(724, 516);
			this->textBoxTrial1_2Score->Name = L"textBoxTrial1_2Score";
			this->textBoxTrial1_2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1_2Score->TabIndex = 214;
			// 
			// labeltrial1_2IL_8
			// 
			this->labeltrial1_2IL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_8->Location = System::Drawing::Point(978, 187);
			this->labeltrial1_2IL_8->Name = L"labeltrial1_2IL_8";
			this->labeltrial1_2IL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_8->TabIndex = 119;
			// 
			// labeltrial1_2IL_7
			// 
			this->labeltrial1_2IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_7->Location = System::Drawing::Point(864, 187);
			this->labeltrial1_2IL_7->Name = L"labeltrial1_2IL_7";
			this->labeltrial1_2IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_7->TabIndex = 118;
			// 
			// labeltrial1_2IL_6
			// 
			this->labeltrial1_2IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_6->Location = System::Drawing::Point(754, 187);
			this->labeltrial1_2IL_6->Name = L"labeltrial1_2IL_6";
			this->labeltrial1_2IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_6->TabIndex = 117;
			// 
			// labeltrial1_2IL_5
			// 
			this->labeltrial1_2IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_5->Location = System::Drawing::Point(640, 187);
			this->labeltrial1_2IL_5->Name = L"labeltrial1_2IL_5";
			this->labeltrial1_2IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_5->TabIndex = 116;
			// 
			// labeltrial1_2IL_4
			// 
			this->labeltrial1_2IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_4->Location = System::Drawing::Point(526, 187);
			this->labeltrial1_2IL_4->Name = L"labeltrial1_2IL_4";
			this->labeltrial1_2IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_4->TabIndex = 115;
			// 
			// labeltrial1_2IL_3
			// 
			this->labeltrial1_2IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_3->Location = System::Drawing::Point(412, 187);
			this->labeltrial1_2IL_3->Name = L"labeltrial1_2IL_3";
			this->labeltrial1_2IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_3->TabIndex = 114;
			// 
			// labeltrial1_2IL_2
			// 
			this->labeltrial1_2IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_2->Location = System::Drawing::Point(304, 187);
			this->labeltrial1_2IL_2->Name = L"labeltrial1_2IL_2";
			this->labeltrial1_2IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_2->TabIndex = 113;
			// 
			// labeltrial1_2IL_1
			// 
			this->labeltrial1_2IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_1->Location = System::Drawing::Point(192, 187);
			this->labeltrial1_2IL_1->Name = L"labeltrial1_2IL_1";
			this->labeltrial1_2IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_1->TabIndex = 112;
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(23, 191);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(110, 26);
			this->label46->TabIndex = 111;
			this->label46->Text = L"IL（mA）";
			// 
			// chart2
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(147, 245);
			this->chart2->Name = L"chart2";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart2->Series->Add(series1);
			this->chart2->Size = System::Drawing::Size(458, 300);
			this->chart2->TabIndex = 110;
			this->chart2->Text = L"chart2";
			// 
			// labeltrial1_2V2_8
			// 
			this->labeltrial1_2V2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_8->Location = System::Drawing::Point(978, 141);
			this->labeltrial1_2V2_8->Name = L"labeltrial1_2V2_8";
			this->labeltrial1_2V2_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_8->TabIndex = 107;
			// 
			// labeltrial1_2V2_7
			// 
			this->labeltrial1_2V2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_7->Location = System::Drawing::Point(864, 141);
			this->labeltrial1_2V2_7->Name = L"labeltrial1_2V2_7";
			this->labeltrial1_2V2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_7->TabIndex = 106;
			// 
			// labeltrial1_2V2_6
			// 
			this->labeltrial1_2V2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_6->Location = System::Drawing::Point(754, 141);
			this->labeltrial1_2V2_6->Name = L"labeltrial1_2V2_6";
			this->labeltrial1_2V2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_6->TabIndex = 105;
			// 
			// labeltrial1_2V2_5
			// 
			this->labeltrial1_2V2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_5->Location = System::Drawing::Point(640, 141);
			this->labeltrial1_2V2_5->Name = L"labeltrial1_2V2_5";
			this->labeltrial1_2V2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_5->TabIndex = 104;
			// 
			// labeltrial1_2V2_4
			// 
			this->labeltrial1_2V2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_4->Location = System::Drawing::Point(526, 141);
			this->labeltrial1_2V2_4->Name = L"labeltrial1_2V2_4";
			this->labeltrial1_2V2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_4->TabIndex = 103;
			// 
			// labeltrial1_2V2_3
			// 
			this->labeltrial1_2V2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_3->Location = System::Drawing::Point(412, 141);
			this->labeltrial1_2V2_3->Name = L"labeltrial1_2V2_3";
			this->labeltrial1_2V2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_3->TabIndex = 102;
			// 
			// labeltrial1_2V2_2
			// 
			this->labeltrial1_2V2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_2->Location = System::Drawing::Point(304, 141);
			this->labeltrial1_2V2_2->Name = L"labeltrial1_2V2_2";
			this->labeltrial1_2V2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_2->TabIndex = 101;
			// 
			// labeltrial1_2V2_1
			// 
			this->labeltrial1_2V2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_1->Location = System::Drawing::Point(192, 141);
			this->labeltrial1_2V2_1->Name = L"labeltrial1_2V2_1";
			this->labeltrial1_2V2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_1->TabIndex = 100;
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(978, 101);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(100, 26);
			this->label34->TabIndex = 98;
			this->label34->Text = L"∞";
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(864, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 26);
			this->label1->TabIndex = 97;
			this->label1->Text = L"500";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(754, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 26);
			this->label2->TabIndex = 96;
			this->label2->Text = L"400";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(640, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 26);
			this->label3->TabIndex = 95;
			this->label3->Text = L"300";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(526, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 26);
			this->label4->TabIndex = 94;
			this->label4->Text = L"200";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(412, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 26);
			this->label5->TabIndex = 93;
			this->label5->Text = L"100";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(304, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 26);
			this->label6->TabIndex = 92;
			this->label6->Text = L"70";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(192, 101);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 26);
			this->label7->TabIndex = 91;
			this->label7->Text = L"50";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(23, 145);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(110, 26);
			this->label8->TabIndex = 90;
			this->label8->Text = L"V2（v）";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(23, 101);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 26);
			this->label9->TabIndex = 89;
			this->label9->Text = L"RL（Ω）";
			// 
			// label44
			// 
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(6, 26);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(973, 38);
			this->label44->TabIndex = 88;
			this->label44->Text = L"（2）保持U1＝2V，调节可变电阻箱RL的阻值，测U2及IL，绘制负载特性曲线U2＝F（IL）。";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_9);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_8);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_7);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_6);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_5);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_4);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_3);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_2);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_1);
			this->groupBox1->Controls->Add(this->labeltrial1_1u);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->textBoxTrial1_1Score);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_9);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_8);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_7);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_6);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_5);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_4);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_3);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_2);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_1);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(16, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1188, 495);
			this->groupBox1->TabIndex = 89;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"第一组";
			// 
			// labeltrial1_1u
			// 
			this->labeltrial1_1u->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1u->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1u->Location = System::Drawing::Point(803, 195);
			this->labeltrial1_1u->Name = L"labeltrial1_1u";
			this->labeltrial1_1u->Size = System::Drawing::Size(161, 30);
			this->labeltrial1_1u->TabIndex = 214;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(622, 436);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(89, 20);
			this->label22->TabIndex = 213;
			this->label22->Text = L"请打分：";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->Location = System::Drawing::Point(899, 436);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(129, 20);
			this->label23->TabIndex = 212;
			this->label23->Text = L"本项目总分12";
			// 
			// textBoxTrial1_1Score
			// 
			this->textBoxTrial1_1Score->Location = System::Drawing::Point(724, 433);
			this->textBoxTrial1_1Score->Name = L"textBoxTrial1_1Score";
			this->textBoxTrial1_1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1_1Score->TabIndex = 211;
			this->textBoxTrial1_1Score->TextChanged += gcnew System::EventHandler(this, &VCVS实验::textBoxTrial1_1Score_TextChanged);
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(616, 199);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(147, 26);
			this->label45->TabIndex = 112;
			this->label45->Text = L"转移电压比μ";
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(147, 178);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(458, 300);
			this->chart1->TabIndex = 110;
			this->chart1->Text = L"chart1";
			// 
			// labeltrial1_1U2_9
			// 
			this->labeltrial1_1U2_9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_9->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_9->Location = System::Drawing::Point(1043, 124);
			this->labeltrial1_1U2_9->Name = L"labeltrial1_1U2_9";
			this->labeltrial1_1U2_9->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_9->TabIndex = 108;
			// 
			// labeltrial1_1U2_8
			// 
			this->labeltrial1_1U2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_8->Location = System::Drawing::Point(935, 124);
			this->labeltrial1_1U2_8->Name = L"labeltrial1_1U2_8";
			this->labeltrial1_1U2_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_8->TabIndex = 107;
			// 
			// labeltrial1_1U2_7
			// 
			this->labeltrial1_1U2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_7->Location = System::Drawing::Point(821, 124);
			this->labeltrial1_1U2_7->Name = L"labeltrial1_1U2_7";
			this->labeltrial1_1U2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_7->TabIndex = 106;
			// 
			// labeltrial1_1U2_6
			// 
			this->labeltrial1_1U2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_6->Location = System::Drawing::Point(711, 124);
			this->labeltrial1_1U2_6->Name = L"labeltrial1_1U2_6";
			this->labeltrial1_1U2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_6->TabIndex = 105;
			// 
			// labeltrial1_1U2_5
			// 
			this->labeltrial1_1U2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_5->Location = System::Drawing::Point(597, 124);
			this->labeltrial1_1U2_5->Name = L"labeltrial1_1U2_5";
			this->labeltrial1_1U2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_5->TabIndex = 104;
			// 
			// labeltrial1_1U2_4
			// 
			this->labeltrial1_1U2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_4->Location = System::Drawing::Point(483, 124);
			this->labeltrial1_1U2_4->Name = L"labeltrial1_1U2_4";
			this->labeltrial1_1U2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_4->TabIndex = 103;
			// 
			// labeltrial1_1U2_3
			// 
			this->labeltrial1_1U2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_3->Location = System::Drawing::Point(369, 124);
			this->labeltrial1_1U2_3->Name = L"labeltrial1_1U2_3";
			this->labeltrial1_1U2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_3->TabIndex = 102;
			// 
			// labeltrial1_1U2_2
			// 
			this->labeltrial1_1U2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_2->Location = System::Drawing::Point(261, 124);
			this->labeltrial1_1U2_2->Name = L"labeltrial1_1U2_2";
			this->labeltrial1_1U2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_2->TabIndex = 101;
			// 
			// labeltrial1_1U2_1
			// 
			this->labeltrial1_1U2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_1->Location = System::Drawing::Point(149, 124);
			this->labeltrial1_1U2_1->Name = L"labeltrial1_1U2_1";
			this->labeltrial1_1U2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_1->TabIndex = 100;
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(42, 128);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(83, 26);
			this->label19->TabIndex = 90;
			this->label19->Text = L"U2(V)";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(42, 84);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(83, 26);
			this->label20->TabIndex = 89;
			this->label20->Text = L"U1(V)";
			// 
			// label21
			// 
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(6, 26);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(973, 38);
			this->label21->TabIndex = 88;
			this->label21->Text = L"  （1）固定RL＝2KΩ，调节稳压电源输出电压U1，测量U1及相应的U2值，列表。";
			// 
			// groupBox实验内容2
			// 
			this->groupBox实验内容2->Controls->Add(this->groupBox5);
			this->groupBox实验内容2->Controls->Add(this->groupBox6);
			this->groupBox实验内容2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox实验内容2->ForeColor = System::Drawing::Color::Red;
			this->groupBox实验内容2->Location = System::Drawing::Point(60, 1519);
			this->groupBox实验内容2->Name = L"groupBox实验内容2";
			this->groupBox实验内容2->Size = System::Drawing::Size(1407, 1148);
			this->groupBox实验内容2->TabIndex = 201;
			this->groupBox实验内容2->TabStop = false;
			this->groupBox实验内容2->Text = L"实验内容二";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_7);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_6);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_5);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_4);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_3);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_2);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_1);
			this->groupBox5->Controls->Add(this->label29);
			this->groupBox5->Controls->Add(this->label31);
			this->groupBox5->Controls->Add(this->textBoxTrial2_2Score);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_7);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_6);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_5);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_4);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_3);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_2);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_1);
			this->groupBox5->Controls->Add(this->label61);
			this->groupBox5->Controls->Add(this->chart3);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_7);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_6);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_5);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_4);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_3);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_2);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_1);
			this->groupBox5->Controls->Add(this->label78);
			this->groupBox5->Controls->Add(this->label79);
			this->groupBox5->Controls->Add(this->label80);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->ForeColor = System::Drawing::Color::Red;
			this->groupBox5->Location = System::Drawing::Point(32, 584);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(1188, 541);
			this->groupBox5->TabIndex = 111;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"第二组";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->Location = System::Drawing::Point(606, 498);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(89, 20);
			this->label29->TabIndex = 219;
			this->label29->Text = L"请打分：";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->Location = System::Drawing::Point(883, 498);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(129, 20);
			this->label31->TabIndex = 218;
			this->label31->Text = L"本项目总分12";
			// 
			// textBoxTrial2_2Score
			// 
			this->textBoxTrial2_2Score->Location = System::Drawing::Point(708, 495);
			this->textBoxTrial2_2Score->Name = L"textBoxTrial2_2Score";
			this->textBoxTrial2_2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2_2Score->TabIndex = 217;
			// 
			// labeltrial2_2V2_7
			// 
			this->labeltrial2_2V2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_7->Location = System::Drawing::Point(864, 183);
			this->labeltrial2_2V2_7->Name = L"labeltrial2_2V2_7";
			this->labeltrial2_2V2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_7->TabIndex = 118;
			// 
			// labeltrial2_2V2_6
			// 
			this->labeltrial2_2V2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_6->Location = System::Drawing::Point(754, 183);
			this->labeltrial2_2V2_6->Name = L"labeltrial2_2V2_6";
			this->labeltrial2_2V2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_6->TabIndex = 117;
			// 
			// labeltrial2_2V2_5
			// 
			this->labeltrial2_2V2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_5->Location = System::Drawing::Point(640, 183);
			this->labeltrial2_2V2_5->Name = L"labeltrial2_2V2_5";
			this->labeltrial2_2V2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_5->TabIndex = 116;
			// 
			// labeltrial2_2V2_4
			// 
			this->labeltrial2_2V2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_4->Location = System::Drawing::Point(526, 183);
			this->labeltrial2_2V2_4->Name = L"labeltrial2_2V2_4";
			this->labeltrial2_2V2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_4->TabIndex = 115;
			// 
			// labeltrial2_2V2_3
			// 
			this->labeltrial2_2V2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_3->Location = System::Drawing::Point(412, 183);
			this->labeltrial2_2V2_3->Name = L"labeltrial2_2V2_3";
			this->labeltrial2_2V2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_3->TabIndex = 114;
			// 
			// labeltrial2_2V2_2
			// 
			this->labeltrial2_2V2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_2->Location = System::Drawing::Point(304, 183);
			this->labeltrial2_2V2_2->Name = L"labeltrial2_2V2_2";
			this->labeltrial2_2V2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_2->TabIndex = 113;
			// 
			// labeltrial2_2V2_1
			// 
			this->labeltrial2_2V2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_1->Location = System::Drawing::Point(192, 183);
			this->labeltrial2_2V2_1->Name = L"labeltrial2_2V2_1";
			this->labeltrial2_2V2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_1->TabIndex = 112;
			// 
			// label61
			// 
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label61->ForeColor = System::Drawing::Color::Black;
			this->label61->Location = System::Drawing::Point(23, 187);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(110, 26);
			this->label61->TabIndex = 111;
			this->label61->Text = L"V2（v）";
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(128, 225);
			this->chart3->Name = L"chart3";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(458, 300);
			this->chart3->TabIndex = 110;
			this->chart3->Text = L"chart3";
			// 
			// labeltrial2_2IL_7
			// 
			this->labeltrial2_2IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_7->Location = System::Drawing::Point(864, 141);
			this->labeltrial2_2IL_7->Name = L"labeltrial2_2IL_7";
			this->labeltrial2_2IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_7->TabIndex = 106;
			// 
			// labeltrial2_2IL_6
			// 
			this->labeltrial2_2IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_6->Location = System::Drawing::Point(754, 141);
			this->labeltrial2_2IL_6->Name = L"labeltrial2_2IL_6";
			this->labeltrial2_2IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_6->TabIndex = 105;
			// 
			// labeltrial2_2IL_5
			// 
			this->labeltrial2_2IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_5->Location = System::Drawing::Point(640, 141);
			this->labeltrial2_2IL_5->Name = L"labeltrial2_2IL_5";
			this->labeltrial2_2IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_5->TabIndex = 104;
			// 
			// labeltrial2_2IL_4
			// 
			this->labeltrial2_2IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_4->Location = System::Drawing::Point(526, 141);
			this->labeltrial2_2IL_4->Name = L"labeltrial2_2IL_4";
			this->labeltrial2_2IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_4->TabIndex = 103;
			// 
			// labeltrial2_2IL_3
			// 
			this->labeltrial2_2IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_3->Location = System::Drawing::Point(412, 141);
			this->labeltrial2_2IL_3->Name = L"labeltrial2_2IL_3";
			this->labeltrial2_2IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_3->TabIndex = 102;
			// 
			// labeltrial2_2IL_2
			// 
			this->labeltrial2_2IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_2->Location = System::Drawing::Point(304, 141);
			this->labeltrial2_2IL_2->Name = L"labeltrial2_2IL_2";
			this->labeltrial2_2IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_2->TabIndex = 101;
			// 
			// labeltrial2_2IL_1
			// 
			this->labeltrial2_2IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_1->Location = System::Drawing::Point(192, 141);
			this->labeltrial2_2IL_1->Name = L"labeltrial2_2IL_1";
			this->labeltrial2_2IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_1->TabIndex = 100;
			// 
			// label78
			// 
			this->label78->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label78->ForeColor = System::Drawing::Color::Black;
			this->label78->Location = System::Drawing::Point(23, 141);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(110, 26);
			this->label78->TabIndex = 90;
			this->label78->Text = L"IL（mA）";
			// 
			// label79
			// 
			this->label79->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label79->ForeColor = System::Drawing::Color::Black;
			this->label79->Location = System::Drawing::Point(23, 97);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(110, 26);
			this->label79->TabIndex = 89;
			this->label79->Text = L"RL（KΩ）";
			// 
			// label80
			// 
			this->label80->ForeColor = System::Drawing::Color::Black;
			this->label80->Location = System::Drawing::Point(6, 38);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(973, 33);
			this->label80->TabIndex = 88;
			this->label80->Text = L"（2）保持U1＝2V，令RL从大到小变化，测出相应的IL及U2，绘制IL＝F（U2）曲线。";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_8);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_7);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_6);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_5);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_4);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_3);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_2);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_1);
			this->groupBox6->Controls->Add(this->labeltrial2_1gm);
			this->groupBox6->Controls->Add(this->label26);
			this->groupBox6->Controls->Add(this->label27);
			this->groupBox6->Controls->Add(this->textBoxTrial2_1Score);
			this->groupBox6->Controls->Add(this->label81);
			this->groupBox6->Controls->Add(this->chart4);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_8);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_7);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_6);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_5);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_4);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_3);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_2);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_1);
			this->groupBox6->Controls->Add(this->label100);
			this->groupBox6->Controls->Add(this->label101);
			this->groupBox6->Controls->Add(this->label102);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox6->ForeColor = System::Drawing::Color::Red;
			this->groupBox6->Location = System::Drawing::Point(32, 41);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(1188, 520);
			this->groupBox6->TabIndex = 89;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"第一组";
			// 
			// labeltrial2_1gm
			// 
			this->labeltrial2_1gm->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1gm->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1gm->Location = System::Drawing::Point(774, 302);
			this->labeltrial2_1gm->Name = L"labeltrial2_1gm";
			this->labeltrial2_1gm->Size = System::Drawing::Size(161, 30);
			this->labeltrial2_1gm->TabIndex = 220;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->Location = System::Drawing::Point(596, 483);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(89, 20);
			this->label26->TabIndex = 219;
			this->label26->Text = L"请打分：";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->Location = System::Drawing::Point(873, 483);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(129, 20);
			this->label27->TabIndex = 218;
			this->label27->Text = L"本项目总分12";
			// 
			// textBoxTrial2_1Score
			// 
			this->textBoxTrial2_1Score->Location = System::Drawing::Point(698, 480);
			this->textBoxTrial2_1Score->Name = L"textBoxTrial2_1Score";
			this->textBoxTrial2_1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2_1Score->TabIndex = 217;
			// 
			// label81
			// 
			this->label81->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label81->ForeColor = System::Drawing::Color::Black;
			this->label81->Location = System::Drawing::Point(600, 306);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(147, 26);
			this->label81->TabIndex = 112;
			this->label81->Text = L"转移电导gm";
			// 
			// chart4
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart4->Legends->Add(legend4);
			this->chart4->Location = System::Drawing::Point(128, 203);
			this->chart4->Name = L"chart4";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart4->Series->Add(series4);
			this->chart4->Size = System::Drawing::Size(458, 300);
			this->chart4->TabIndex = 110;
			this->chart4->Text = L"chart4";
			// 
			// labeltrial2_1IL_8
			// 
			this->labeltrial2_1IL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_8->Location = System::Drawing::Point(914, 159);
			this->labeltrial2_1IL_8->Name = L"labeltrial2_1IL_8";
			this->labeltrial2_1IL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_8->TabIndex = 107;
			// 
			// labeltrial2_1IL_7
			// 
			this->labeltrial2_1IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_7->Location = System::Drawing::Point(800, 159);
			this->labeltrial2_1IL_7->Name = L"labeltrial2_1IL_7";
			this->labeltrial2_1IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_7->TabIndex = 106;
			// 
			// labeltrial2_1IL_6
			// 
			this->labeltrial2_1IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_6->Location = System::Drawing::Point(690, 159);
			this->labeltrial2_1IL_6->Name = L"labeltrial2_1IL_6";
			this->labeltrial2_1IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_6->TabIndex = 105;
			// 
			// labeltrial2_1IL_5
			// 
			this->labeltrial2_1IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_5->Location = System::Drawing::Point(576, 159);
			this->labeltrial2_1IL_5->Name = L"labeltrial2_1IL_5";
			this->labeltrial2_1IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_5->TabIndex = 104;
			// 
			// labeltrial2_1IL_4
			// 
			this->labeltrial2_1IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_4->Location = System::Drawing::Point(462, 159);
			this->labeltrial2_1IL_4->Name = L"labeltrial2_1IL_4";
			this->labeltrial2_1IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_4->TabIndex = 103;
			// 
			// labeltrial2_1IL_3
			// 
			this->labeltrial2_1IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_3->Location = System::Drawing::Point(348, 159);
			this->labeltrial2_1IL_3->Name = L"labeltrial2_1IL_3";
			this->labeltrial2_1IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_3->TabIndex = 102;
			// 
			// labeltrial2_1IL_2
			// 
			this->labeltrial2_1IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_2->Location = System::Drawing::Point(240, 159);
			this->labeltrial2_1IL_2->Name = L"labeltrial2_1IL_2";
			this->labeltrial2_1IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_2->TabIndex = 101;
			// 
			// labeltrial2_1IL_1
			// 
			this->labeltrial2_1IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_1->Location = System::Drawing::Point(128, 159);
			this->labeltrial2_1IL_1->Name = L"labeltrial2_1IL_1";
			this->labeltrial2_1IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_1->TabIndex = 100;
			// 
			// label100
			// 
			this->label100->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label100->ForeColor = System::Drawing::Color::Black;
			this->label100->Location = System::Drawing::Point(21, 163);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(101, 26);
			this->label100->TabIndex = 90;
			this->label100->Text = L"IL（mA）";
			// 
			// label101
			// 
			this->label101->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label101->ForeColor = System::Drawing::Color::Black;
			this->label101->Location = System::Drawing::Point(21, 119);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(101, 26);
			this->label101->TabIndex = 89;
			this->label101->Text = L"U1（v）";
			// 
			// label102
			// 
			this->label102->ForeColor = System::Drawing::Color::Black;
			this->label102->Location = System::Drawing::Point(28, 40);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(973, 57);
			this->label102->TabIndex = 88;
			this->label102->Text = L"   （1）固定RL＝2KΩ，调节稳压电源的输出电压U1，测出相应的IL值，绘制IL＝F（U1）曲线，并由其线性部分求出转移电导gm 。";
			// 
			// groupBox实验内容3
			// 
			this->groupBox实验内容3->Controls->Add(this->groupBox9);
			this->groupBox实验内容3->Controls->Add(this->groupBox10);
			this->groupBox实验内容3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox实验内容3->ForeColor = System::Drawing::Color::Red;
			this->groupBox实验内容3->Location = System::Drawing::Point(60, 2694);
			this->groupBox实验内容3->Name = L"groupBox实验内容3";
			this->groupBox实验内容3->Size = System::Drawing::Size(1407, 1259);
			this->groupBox实验内容3->TabIndex = 202;
			this->groupBox实验内容3->TabStop = false;
			this->groupBox实验内容3->Text = L"实验内容三";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->textBoxtrial3_2RL_8);
			this->groupBox9->Controls->Add(this->textBoxtrial3_2RL_7);
			this->groupBox9->Controls->Add(this->textBoxtrial3_2RL_6);
			this->groupBox9->Controls->Add(this->textBoxtrial3_2RL_5);
			this->groupBox9->Controls->Add(this->textBoxtrial3_2RL_4);
			this->groupBox9->Controls->Add(this->textBoxtrial3_2RL_3);
			this->groupBox9->Controls->Add(this->textBoxtrial3_2RL_2);
			this->groupBox9->Controls->Add(this->textBoxtrial3_2RL_1);
			this->groupBox9->Controls->Add(this->label47);
			this->groupBox9->Controls->Add(this->label48);
			this->groupBox9->Controls->Add(this->textBoxTrial3_2Score);
			this->groupBox9->Controls->Add(this->labeltrial3_2IL_8);
			this->groupBox9->Controls->Add(this->labeltrial3_2U2_8);
			this->groupBox9->Controls->Add(this->labeltrial3_2IL_7);
			this->groupBox9->Controls->Add(this->labeltrial3_2IL_6);
			this->groupBox9->Controls->Add(this->labeltrial3_2IL_5);
			this->groupBox9->Controls->Add(this->labeltrial3_2IL_4);
			this->groupBox9->Controls->Add(this->labeltrial3_2IL_3);
			this->groupBox9->Controls->Add(this->labeltrial3_2IL_2);
			this->groupBox9->Controls->Add(this->labeltrial3_2IL_1);
			this->groupBox9->Controls->Add(this->label106);
			this->groupBox9->Controls->Add(this->chart5);
			this->groupBox9->Controls->Add(this->labeltrial3_2U2_7);
			this->groupBox9->Controls->Add(this->labeltrial3_2U2_6);
			this->groupBox9->Controls->Add(this->labeltrial3_2U2_5);
			this->groupBox9->Controls->Add(this->labeltrial3_2U2_4);
			this->groupBox9->Controls->Add(this->labeltrial3_2U2_3);
			this->groupBox9->Controls->Add(this->labeltrial3_2U2_2);
			this->groupBox9->Controls->Add(this->labeltrial3_2U2_1);
			this->groupBox9->Controls->Add(this->label121);
			this->groupBox9->Controls->Add(this->label122);
			this->groupBox9->Controls->Add(this->label123);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox9->ForeColor = System::Drawing::Color::Red;
			this->groupBox9->Location = System::Drawing::Point(39, 618);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(1188, 625);
			this->groupBox9->TabIndex = 111;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"第二组";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->Location = System::Drawing::Point(522, 554);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(89, 20);
			this->label47->TabIndex = 225;
			this->label47->Text = L"请打分：";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->Location = System::Drawing::Point(799, 554);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(129, 20);
			this->label48->TabIndex = 224;
			this->label48->Text = L"本项目总分12";
			// 
			// textBoxTrial3_2Score
			// 
			this->textBoxTrial3_2Score->Location = System::Drawing::Point(624, 551);
			this->textBoxTrial3_2Score->Name = L"textBoxTrial3_2Score";
			this->textBoxTrial3_2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial3_2Score->TabIndex = 223;
			// 
			// labeltrial3_2IL_8
			// 
			this->labeltrial3_2IL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_8->Location = System::Drawing::Point(978, 185);
			this->labeltrial3_2IL_8->Name = L"labeltrial3_2IL_8";
			this->labeltrial3_2IL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_8->TabIndex = 140;
			// 
			// labeltrial3_2U2_8
			// 
			this->labeltrial3_2U2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_8->Location = System::Drawing::Point(978, 141);
			this->labeltrial3_2U2_8->Name = L"labeltrial3_2U2_8";
			this->labeltrial3_2U2_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_8->TabIndex = 139;
			// 
			// labeltrial3_2IL_7
			// 
			this->labeltrial3_2IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_7->Location = System::Drawing::Point(864, 185);
			this->labeltrial3_2IL_7->Name = L"labeltrial3_2IL_7";
			this->labeltrial3_2IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_7->TabIndex = 118;
			// 
			// labeltrial3_2IL_6
			// 
			this->labeltrial3_2IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_6->Location = System::Drawing::Point(754, 185);
			this->labeltrial3_2IL_6->Name = L"labeltrial3_2IL_6";
			this->labeltrial3_2IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_6->TabIndex = 117;
			// 
			// labeltrial3_2IL_5
			// 
			this->labeltrial3_2IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_5->Location = System::Drawing::Point(640, 185);
			this->labeltrial3_2IL_5->Name = L"labeltrial3_2IL_5";
			this->labeltrial3_2IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_5->TabIndex = 116;
			// 
			// labeltrial3_2IL_4
			// 
			this->labeltrial3_2IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_4->Location = System::Drawing::Point(526, 185);
			this->labeltrial3_2IL_4->Name = L"labeltrial3_2IL_4";
			this->labeltrial3_2IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_4->TabIndex = 115;
			// 
			// labeltrial3_2IL_3
			// 
			this->labeltrial3_2IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_3->Location = System::Drawing::Point(412, 185);
			this->labeltrial3_2IL_3->Name = L"labeltrial3_2IL_3";
			this->labeltrial3_2IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_3->TabIndex = 114;
			// 
			// labeltrial3_2IL_2
			// 
			this->labeltrial3_2IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_2->Location = System::Drawing::Point(304, 185);
			this->labeltrial3_2IL_2->Name = L"labeltrial3_2IL_2";
			this->labeltrial3_2IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_2->TabIndex = 113;
			// 
			// labeltrial3_2IL_1
			// 
			this->labeltrial3_2IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_1->Location = System::Drawing::Point(192, 185);
			this->labeltrial3_2IL_1->Name = L"labeltrial3_2IL_1";
			this->labeltrial3_2IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_1->TabIndex = 112;
			// 
			// label106
			// 
			this->label106->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label106->ForeColor = System::Drawing::Color::Black;
			this->label106->Location = System::Drawing::Point(23, 189);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(110, 26);
			this->label106->TabIndex = 111;
			this->label106->Text = L"IL（mA）";
			// 
			// chart5
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart5->Legends->Add(legend5);
			this->chart5->Location = System::Drawing::Point(16, 274);
			this->chart5->Name = L"chart5";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chart5->Series->Add(series5);
			this->chart5->Size = System::Drawing::Size(458, 300);
			this->chart5->TabIndex = 110;
			this->chart5->Text = L"chart5";
			// 
			// labeltrial3_2U2_7
			// 
			this->labeltrial3_2U2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_7->Location = System::Drawing::Point(864, 141);
			this->labeltrial3_2U2_7->Name = L"labeltrial3_2U2_7";
			this->labeltrial3_2U2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_7->TabIndex = 106;
			// 
			// labeltrial3_2U2_6
			// 
			this->labeltrial3_2U2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_6->Location = System::Drawing::Point(754, 141);
			this->labeltrial3_2U2_6->Name = L"labeltrial3_2U2_6";
			this->labeltrial3_2U2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_6->TabIndex = 105;
			// 
			// labeltrial3_2U2_5
			// 
			this->labeltrial3_2U2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_5->Location = System::Drawing::Point(640, 141);
			this->labeltrial3_2U2_5->Name = L"labeltrial3_2U2_5";
			this->labeltrial3_2U2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_5->TabIndex = 104;
			// 
			// labeltrial3_2U2_4
			// 
			this->labeltrial3_2U2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_4->Location = System::Drawing::Point(526, 141);
			this->labeltrial3_2U2_4->Name = L"labeltrial3_2U2_4";
			this->labeltrial3_2U2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_4->TabIndex = 103;
			// 
			// labeltrial3_2U2_3
			// 
			this->labeltrial3_2U2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_3->Location = System::Drawing::Point(412, 141);
			this->labeltrial3_2U2_3->Name = L"labeltrial3_2U2_3";
			this->labeltrial3_2U2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_3->TabIndex = 102;
			// 
			// labeltrial3_2U2_2
			// 
			this->labeltrial3_2U2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_2->Location = System::Drawing::Point(304, 141);
			this->labeltrial3_2U2_2->Name = L"labeltrial3_2U2_2";
			this->labeltrial3_2U2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_2->TabIndex = 101;
			// 
			// labeltrial3_2U2_1
			// 
			this->labeltrial3_2U2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_1->Location = System::Drawing::Point(192, 141);
			this->labeltrial3_2U2_1->Name = L"labeltrial3_2U2_1";
			this->labeltrial3_2U2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_1->TabIndex = 100;
			// 
			// label121
			// 
			this->label121->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label121->ForeColor = System::Drawing::Color::Black;
			this->label121->Location = System::Drawing::Point(23, 141);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(110, 26);
			this->label121->TabIndex = 90;
			this->label121->Text = L"U2（v）";
			// 
			// label122
			// 
			this->label122->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label122->ForeColor = System::Drawing::Color::Black;
			this->label122->Location = System::Drawing::Point(23, 97);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(110, 26);
			this->label122->TabIndex = 89;
			this->label122->Text = L"RL（KΩ）";
			// 
			// label123
			// 
			this->label123->ForeColor = System::Drawing::Color::Black;
			this->label123->Location = System::Drawing::Point(6, 38);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(973, 33);
			this->label123->TabIndex = 88;
			this->label123->Text = L"（2）保持IS＝0.5mA，令RL从1KΩ增至8KΩ，测出U2及IL，绘制负载特性曲线U2＝F（IL）。";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->labeltrial3_1rm);
			this->groupBox10->Controls->Add(this->label32);
			this->groupBox10->Controls->Add(this->label33);
			this->groupBox10->Controls->Add(this->textBoxTrial3_1Score);
			this->groupBox10->Controls->Add(this->label124);
			this->groupBox10->Controls->Add(this->chart6);
			this->groupBox10->Controls->Add(this->labeltrial3_1V2_8);
			this->groupBox10->Controls->Add(this->labeltrial3_1V2_7);
			this->groupBox10->Controls->Add(this->labeltrial3_1V2_6);
			this->groupBox10->Controls->Add(this->labeltrial3_1V2_5);
			this->groupBox10->Controls->Add(this->labeltrial3_1V2_4);
			this->groupBox10->Controls->Add(this->labeltrial3_1V2_3);
			this->groupBox10->Controls->Add(this->labeltrial3_1V2_2);
			this->groupBox10->Controls->Add(this->labeltrial3_1V2_1);
			this->groupBox10->Controls->Add(this->labeltrial3_1I1_8);
			this->groupBox10->Controls->Add(this->labeltrial3_1I1_7);
			this->groupBox10->Controls->Add(this->labeltrial3_1I1_6);
			this->groupBox10->Controls->Add(this->labeltrial3_1I1_5);
			this->groupBox10->Controls->Add(this->labeltrial3_1I1_4);
			this->groupBox10->Controls->Add(this->labeltrial3_1I1_3);
			this->groupBox10->Controls->Add(this->labeltrial3_1I1_2);
			this->groupBox10->Controls->Add(this->labeltrial3_1I1_1);
			this->groupBox10->Controls->Add(this->label141);
			this->groupBox10->Controls->Add(this->label142);
			this->groupBox10->Controls->Add(this->label143);
			this->groupBox10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox10->ForeColor = System::Drawing::Color::Red;
			this->groupBox10->Location = System::Drawing::Point(39, 44);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(1188, 543);
			this->groupBox10->TabIndex = 89;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"第一组";
			this->groupBox10->Enter += gcnew System::EventHandler(this, &VCVS实验::groupBox10_Enter);
			// 
			// labeltrial3_1rm
			// 
			this->labeltrial3_1rm->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1rm->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1rm->Location = System::Drawing::Point(662, 278);
			this->labeltrial3_1rm->Name = L"labeltrial3_1rm";
			this->labeltrial3_1rm->Size = System::Drawing::Size(161, 30);
			this->labeltrial3_1rm->TabIndex = 223;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->Location = System::Drawing::Point(499, 493);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(89, 20);
			this->label32->TabIndex = 222;
			this->label32->Text = L"请打分：";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->Location = System::Drawing::Point(776, 493);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(129, 20);
			this->label33->TabIndex = 221;
			this->label33->Text = L"本项目总分12";
			// 
			// textBoxTrial3_1Score
			// 
			this->textBoxTrial3_1Score->Location = System::Drawing::Point(601, 490);
			this->textBoxTrial3_1Score->Name = L"textBoxTrial3_1Score";
			this->textBoxTrial3_1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial3_1Score->TabIndex = 220;
			// 
			// label124
			// 
			this->label124->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label124->ForeColor = System::Drawing::Color::Black;
			this->label124->Location = System::Drawing::Point(492, 282);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(147, 26);
			this->label124->TabIndex = 112;
			this->label124->Text = L"转移电阻rm";
			// 
			// chart6
			// 
			chartArea6->Name = L"ChartArea1";
			this->chart6->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chart6->Legends->Add(legend6);
			this->chart6->Location = System::Drawing::Point(13, 213);
			this->chart6->Name = L"chart6";
			series6->ChartArea = L"ChartArea1";
			series6->Legend = L"Legend1";
			series6->Name = L"Series1";
			this->chart6->Series->Add(series6);
			this->chart6->Size = System::Drawing::Size(458, 300);
			this->chart6->TabIndex = 110;
			this->chart6->Text = L"chart6";
			// 
			// labeltrial3_1V2_8
			// 
			this->labeltrial3_1V2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_8->Location = System::Drawing::Point(912, 154);
			this->labeltrial3_1V2_8->Name = L"labeltrial3_1V2_8";
			this->labeltrial3_1V2_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_8->TabIndex = 107;
			// 
			// labeltrial3_1V2_7
			// 
			this->labeltrial3_1V2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_7->Location = System::Drawing::Point(798, 154);
			this->labeltrial3_1V2_7->Name = L"labeltrial3_1V2_7";
			this->labeltrial3_1V2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_7->TabIndex = 106;
			// 
			// labeltrial3_1V2_6
			// 
			this->labeltrial3_1V2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_6->Location = System::Drawing::Point(688, 154);
			this->labeltrial3_1V2_6->Name = L"labeltrial3_1V2_6";
			this->labeltrial3_1V2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_6->TabIndex = 105;
			// 
			// labeltrial3_1V2_5
			// 
			this->labeltrial3_1V2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_5->Location = System::Drawing::Point(574, 154);
			this->labeltrial3_1V2_5->Name = L"labeltrial3_1V2_5";
			this->labeltrial3_1V2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_5->TabIndex = 104;
			// 
			// labeltrial3_1V2_4
			// 
			this->labeltrial3_1V2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_4->Location = System::Drawing::Point(460, 154);
			this->labeltrial3_1V2_4->Name = L"labeltrial3_1V2_4";
			this->labeltrial3_1V2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_4->TabIndex = 103;
			// 
			// labeltrial3_1V2_3
			// 
			this->labeltrial3_1V2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_3->Location = System::Drawing::Point(346, 154);
			this->labeltrial3_1V2_3->Name = L"labeltrial3_1V2_3";
			this->labeltrial3_1V2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_3->TabIndex = 102;
			// 
			// labeltrial3_1V2_2
			// 
			this->labeltrial3_1V2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_2->Location = System::Drawing::Point(238, 154);
			this->labeltrial3_1V2_2->Name = L"labeltrial3_1V2_2";
			this->labeltrial3_1V2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_2->TabIndex = 101;
			// 
			// labeltrial3_1V2_1
			// 
			this->labeltrial3_1V2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_1->Location = System::Drawing::Point(126, 154);
			this->labeltrial3_1V2_1->Name = L"labeltrial3_1V2_1";
			this->labeltrial3_1V2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_1->TabIndex = 100;
			// 
			// labeltrial3_1I1_8
			// 
			this->labeltrial3_1I1_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_8->Location = System::Drawing::Point(910, 119);
			this->labeltrial3_1I1_8->Name = L"labeltrial3_1I1_8";
			this->labeltrial3_1I1_8->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_8->TabIndex = 98;
			this->labeltrial3_1I1_8->Text = L" ";
			// 
			// labeltrial3_1I1_7
			// 
			this->labeltrial3_1I1_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_7->Location = System::Drawing::Point(796, 119);
			this->labeltrial3_1I1_7->Name = L"labeltrial3_1I1_7";
			this->labeltrial3_1I1_7->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_7->TabIndex = 97;
			this->labeltrial3_1I1_7->Text = L" ";
			// 
			// labeltrial3_1I1_6
			// 
			this->labeltrial3_1I1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_6->Location = System::Drawing::Point(686, 119);
			this->labeltrial3_1I1_6->Name = L"labeltrial3_1I1_6";
			this->labeltrial3_1I1_6->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_6->TabIndex = 96;
			this->labeltrial3_1I1_6->Text = L" ";
			// 
			// labeltrial3_1I1_5
			// 
			this->labeltrial3_1I1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_5->Location = System::Drawing::Point(572, 119);
			this->labeltrial3_1I1_5->Name = L"labeltrial3_1I1_5";
			this->labeltrial3_1I1_5->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_5->TabIndex = 95;
			this->labeltrial3_1I1_5->Text = L" ";
			// 
			// labeltrial3_1I1_4
			// 
			this->labeltrial3_1I1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_4->Location = System::Drawing::Point(458, 119);
			this->labeltrial3_1I1_4->Name = L"labeltrial3_1I1_4";
			this->labeltrial3_1I1_4->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_4->TabIndex = 94;
			this->labeltrial3_1I1_4->Text = L" ";
			// 
			// labeltrial3_1I1_3
			// 
			this->labeltrial3_1I1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_3->Location = System::Drawing::Point(344, 119);
			this->labeltrial3_1I1_3->Name = L"labeltrial3_1I1_3";
			this->labeltrial3_1I1_3->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_3->TabIndex = 93;
			this->labeltrial3_1I1_3->Text = L" ";
			// 
			// labeltrial3_1I1_2
			// 
			this->labeltrial3_1I1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_2->Location = System::Drawing::Point(236, 119);
			this->labeltrial3_1I1_2->Name = L"labeltrial3_1I1_2";
			this->labeltrial3_1I1_2->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_2->TabIndex = 92;
			this->labeltrial3_1I1_2->Text = L" ";
			// 
			// labeltrial3_1I1_1
			// 
			this->labeltrial3_1I1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_1->Location = System::Drawing::Point(128, 119);
			this->labeltrial3_1I1_1->Name = L"labeltrial3_1I1_1";
			this->labeltrial3_1I1_1->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_1->TabIndex = 91;
			this->labeltrial3_1I1_1->Text = L" ";
			// 
			// label141
			// 
			this->label141->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label141->ForeColor = System::Drawing::Color::Black;
			this->label141->Location = System::Drawing::Point(19, 158);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(101, 26);
			this->label141->TabIndex = 90;
			this->label141->Text = L"V2（v）";
			// 
			// label142
			// 
			this->label142->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label142->ForeColor = System::Drawing::Color::Black;
			this->label142->Location = System::Drawing::Point(21, 119);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(101, 26);
			this->label142->TabIndex = 89;
			this->label142->Text = L"I1（mA）";
			// 
			// label143
			// 
			this->label143->ForeColor = System::Drawing::Color::Black;
			this->label143->Location = System::Drawing::Point(28, 40);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(973, 57);
			this->label143->TabIndex = 88;
			this->label143->Text = L"  （1）固定RL＝2KΩ，调节恒流源的输出电流Is，使其在0.05~0.7mA范围内取8个数，测出U2，绘制U2=F（I1）曲线，并由线性部分求出转移电阻rm "
				L"。";
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->groupBox12);
			this->groupBox11->Controls->Add(this->groupBox13);
			this->groupBox11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox11->ForeColor = System::Drawing::Color::Red;
			this->groupBox11->Location = System::Drawing::Point(13, 18);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(1407, 1179);
			this->groupBox11->TabIndex = 203;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"实验内容四";
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->labeltrial4_2RL_8);
			this->groupBox12->Controls->Add(this->labeltrial4_2RL_7);
			this->groupBox12->Controls->Add(this->labeltrial4_2RL_6);
			this->groupBox12->Controls->Add(this->labeltrial4_2RL_5);
			this->groupBox12->Controls->Add(this->labeltrial4_2RL_4);
			this->groupBox12->Controls->Add(this->labeltrial4_2RL_3);
			this->groupBox12->Controls->Add(this->labeltrial4_2RL_2);
			this->groupBox12->Controls->Add(this->labeltrial4_2RL_1);
			this->groupBox12->Controls->Add(this->label51);
			this->groupBox12->Controls->Add(this->label52);
			this->groupBox12->Controls->Add(this->textBoxTrial4_2Score);
			this->groupBox12->Controls->Add(this->labeltrial4_2U2_8);
			this->groupBox12->Controls->Add(this->labeltrial4_2IL_8);
			this->groupBox12->Controls->Add(this->labeltrial4_2U2_7);
			this->groupBox12->Controls->Add(this->labeltrial4_2U2_6);
			this->groupBox12->Controls->Add(this->labeltrial4_2U2_5);
			this->groupBox12->Controls->Add(this->labeltrial4_2U2_4);
			this->groupBox12->Controls->Add(this->labeltrial4_2U2_3);
			this->groupBox12->Controls->Add(this->labeltrial4_2U2_2);
			this->groupBox12->Controls->Add(this->labeltrial4_2U2_1);
			this->groupBox12->Controls->Add(this->label158);
			this->groupBox12->Controls->Add(this->chart7);
			this->groupBox12->Controls->Add(this->labeltrial4_2IL_7);
			this->groupBox12->Controls->Add(this->labeltrial4_2IL_6);
			this->groupBox12->Controls->Add(this->labeltrial4_2IL_5);
			this->groupBox12->Controls->Add(this->labeltrial4_2IL_4);
			this->groupBox12->Controls->Add(this->labeltrial4_2IL_3);
			this->groupBox12->Controls->Add(this->labeltrial4_2IL_2);
			this->groupBox12->Controls->Add(this->labeltrial4_2IL_1);
			this->groupBox12->Controls->Add(this->label173);
			this->groupBox12->Controls->Add(this->label174);
			this->groupBox12->Controls->Add(this->label175);
			this->groupBox12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox12->ForeColor = System::Drawing::Color::Red;
			this->groupBox12->Location = System::Drawing::Point(16, 599);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(1188, 555);
			this->groupBox12->TabIndex = 111;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"第二组";
			this->groupBox12->Enter += gcnew System::EventHandler(this, &VCVS实验::groupBox12_Enter);
			// 
			// labeltrial4_2RL_8
			// 
			this->labeltrial4_2RL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2RL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2RL_8->Location = System::Drawing::Point(975, 93);
			this->labeltrial4_2RL_8->Name = L"labeltrial4_2RL_8";
			this->labeltrial4_2RL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2RL_8->TabIndex = 239;
			// 
			// labeltrial4_2RL_7
			// 
			this->labeltrial4_2RL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2RL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2RL_7->Location = System::Drawing::Point(861, 93);
			this->labeltrial4_2RL_7->Name = L"labeltrial4_2RL_7";
			this->labeltrial4_2RL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2RL_7->TabIndex = 238;
			// 
			// labeltrial4_2RL_6
			// 
			this->labeltrial4_2RL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2RL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2RL_6->Location = System::Drawing::Point(751, 93);
			this->labeltrial4_2RL_6->Name = L"labeltrial4_2RL_6";
			this->labeltrial4_2RL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2RL_6->TabIndex = 237;
			// 
			// labeltrial4_2RL_5
			// 
			this->labeltrial4_2RL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2RL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2RL_5->Location = System::Drawing::Point(637, 93);
			this->labeltrial4_2RL_5->Name = L"labeltrial4_2RL_5";
			this->labeltrial4_2RL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2RL_5->TabIndex = 236;
			// 
			// labeltrial4_2RL_4
			// 
			this->labeltrial4_2RL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2RL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2RL_4->Location = System::Drawing::Point(523, 93);
			this->labeltrial4_2RL_4->Name = L"labeltrial4_2RL_4";
			this->labeltrial4_2RL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2RL_4->TabIndex = 235;
			// 
			// labeltrial4_2RL_3
			// 
			this->labeltrial4_2RL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2RL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2RL_3->Location = System::Drawing::Point(409, 93);
			this->labeltrial4_2RL_3->Name = L"labeltrial4_2RL_3";
			this->labeltrial4_2RL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2RL_3->TabIndex = 234;
			// 
			// labeltrial4_2RL_2
			// 
			this->labeltrial4_2RL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2RL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2RL_2->Location = System::Drawing::Point(301, 93);
			this->labeltrial4_2RL_2->Name = L"labeltrial4_2RL_2";
			this->labeltrial4_2RL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2RL_2->TabIndex = 233;
			// 
			// labeltrial4_2RL_1
			// 
			this->labeltrial4_2RL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2RL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2RL_1->Location = System::Drawing::Point(189, 93);
			this->labeltrial4_2RL_1->Name = L"labeltrial4_2RL_1";
			this->labeltrial4_2RL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2RL_1->TabIndex = 232;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->Location = System::Drawing::Point(522, 510);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(89, 20);
			this->label51->TabIndex = 231;
			this->label51->Text = L"请打分：";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->Location = System::Drawing::Point(799, 510);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(129, 20);
			this->label52->TabIndex = 230;
			this->label52->Text = L"本项目总分12";
			// 
			// textBoxTrial4_2Score
			// 
			this->textBoxTrial4_2Score->Location = System::Drawing::Point(624, 507);
			this->textBoxTrial4_2Score->Name = L"textBoxTrial4_2Score";
			this->textBoxTrial4_2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial4_2Score->TabIndex = 229;
			// 
			// labeltrial4_2U2_8
			// 
			this->labeltrial4_2U2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_8->Location = System::Drawing::Point(978, 184);
			this->labeltrial4_2U2_8->Name = L"labeltrial4_2U2_8";
			this->labeltrial4_2U2_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_8->TabIndex = 140;
			// 
			// labeltrial4_2IL_8
			// 
			this->labeltrial4_2IL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_8->Location = System::Drawing::Point(978, 141);
			this->labeltrial4_2IL_8->Name = L"labeltrial4_2IL_8";
			this->labeltrial4_2IL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_8->TabIndex = 139;
			// 
			// labeltrial4_2U2_7
			// 
			this->labeltrial4_2U2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_7->Location = System::Drawing::Point(864, 184);
			this->labeltrial4_2U2_7->Name = L"labeltrial4_2U2_7";
			this->labeltrial4_2U2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_7->TabIndex = 118;
			// 
			// labeltrial4_2U2_6
			// 
			this->labeltrial4_2U2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_6->Location = System::Drawing::Point(754, 184);
			this->labeltrial4_2U2_6->Name = L"labeltrial4_2U2_6";
			this->labeltrial4_2U2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_6->TabIndex = 117;
			// 
			// labeltrial4_2U2_5
			// 
			this->labeltrial4_2U2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_5->Location = System::Drawing::Point(640, 184);
			this->labeltrial4_2U2_5->Name = L"labeltrial4_2U2_5";
			this->labeltrial4_2U2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_5->TabIndex = 116;
			// 
			// labeltrial4_2U2_4
			// 
			this->labeltrial4_2U2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_4->Location = System::Drawing::Point(526, 184);
			this->labeltrial4_2U2_4->Name = L"labeltrial4_2U2_4";
			this->labeltrial4_2U2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_4->TabIndex = 115;
			// 
			// labeltrial4_2U2_3
			// 
			this->labeltrial4_2U2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_3->Location = System::Drawing::Point(412, 184);
			this->labeltrial4_2U2_3->Name = L"labeltrial4_2U2_3";
			this->labeltrial4_2U2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_3->TabIndex = 114;
			// 
			// labeltrial4_2U2_2
			// 
			this->labeltrial4_2U2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_2->Location = System::Drawing::Point(304, 184);
			this->labeltrial4_2U2_2->Name = L"labeltrial4_2U2_2";
			this->labeltrial4_2U2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_2->TabIndex = 113;
			// 
			// labeltrial4_2U2_1
			// 
			this->labeltrial4_2U2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_1->Location = System::Drawing::Point(192, 184);
			this->labeltrial4_2U2_1->Name = L"labeltrial4_2U2_1";
			this->labeltrial4_2U2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_1->TabIndex = 112;
			// 
			// label158
			// 
			this->label158->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label158->ForeColor = System::Drawing::Color::Black;
			this->label158->Location = System::Drawing::Point(23, 188);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(110, 26);
			this->label158->TabIndex = 111;
			this->label158->Text = L"U2（v）";
			// 
			// chart7
			// 
			chartArea7->Name = L"ChartArea1";
			this->chart7->ChartAreas->Add(chartArea7);
			legend7->Name = L"Legend1";
			this->chart7->Legends->Add(legend7);
			this->chart7->Location = System::Drawing::Point(23, 237);
			this->chart7->Name = L"chart7";
			series7->ChartArea = L"ChartArea1";
			series7->Legend = L"Legend1";
			series7->Name = L"Series1";
			this->chart7->Series->Add(series7);
			this->chart7->Size = System::Drawing::Size(458, 300);
			this->chart7->TabIndex = 110;
			this->chart7->Text = L"chart7";
			// 
			// labeltrial4_2IL_7
			// 
			this->labeltrial4_2IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_7->Location = System::Drawing::Point(864, 141);
			this->labeltrial4_2IL_7->Name = L"labeltrial4_2IL_7";
			this->labeltrial4_2IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_7->TabIndex = 106;
			// 
			// labeltrial4_2IL_6
			// 
			this->labeltrial4_2IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_6->Location = System::Drawing::Point(754, 141);
			this->labeltrial4_2IL_6->Name = L"labeltrial4_2IL_6";
			this->labeltrial4_2IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_6->TabIndex = 105;
			// 
			// labeltrial4_2IL_5
			// 
			this->labeltrial4_2IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_5->Location = System::Drawing::Point(640, 141);
			this->labeltrial4_2IL_5->Name = L"labeltrial4_2IL_5";
			this->labeltrial4_2IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_5->TabIndex = 104;
			// 
			// labeltrial4_2IL_4
			// 
			this->labeltrial4_2IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_4->Location = System::Drawing::Point(526, 141);
			this->labeltrial4_2IL_4->Name = L"labeltrial4_2IL_4";
			this->labeltrial4_2IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_4->TabIndex = 103;
			// 
			// labeltrial4_2IL_3
			// 
			this->labeltrial4_2IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_3->Location = System::Drawing::Point(412, 141);
			this->labeltrial4_2IL_3->Name = L"labeltrial4_2IL_3";
			this->labeltrial4_2IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_3->TabIndex = 102;
			// 
			// labeltrial4_2IL_2
			// 
			this->labeltrial4_2IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_2->Location = System::Drawing::Point(304, 141);
			this->labeltrial4_2IL_2->Name = L"labeltrial4_2IL_2";
			this->labeltrial4_2IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_2->TabIndex = 101;
			// 
			// labeltrial4_2IL_1
			// 
			this->labeltrial4_2IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_1->Location = System::Drawing::Point(192, 141);
			this->labeltrial4_2IL_1->Name = L"labeltrial4_2IL_1";
			this->labeltrial4_2IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_1->TabIndex = 100;
			// 
			// label173
			// 
			this->label173->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label173->ForeColor = System::Drawing::Color::Black;
			this->label173->Location = System::Drawing::Point(23, 141);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(110, 26);
			this->label173->TabIndex = 90;
			this->label173->Text = L"IL（mA）";
			// 
			// label174
			// 
			this->label174->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label174->ForeColor = System::Drawing::Color::Black;
			this->label174->Location = System::Drawing::Point(23, 97);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(110, 26);
			this->label174->TabIndex = 89;
			this->label174->Text = L"RL（KΩ）";
			// 
			// label175
			// 
			this->label175->ForeColor = System::Drawing::Color::Black;
			this->label175->Location = System::Drawing::Point(6, 38);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(973, 34);
			this->label175->TabIndex = 88;
			this->label175->Text = L"（2）保持IS=0.5mA，令RL从0，100Ω，200Ω增至80KΩ，测出IL，绘制IL＝F（U2）曲线。";
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->labeltrial4_1α);
			this->groupBox13->Controls->Add(this->label49);
			this->groupBox13->Controls->Add(this->label50);
			this->groupBox13->Controls->Add(this->textBoxTrial4_1Score);
			this->groupBox13->Controls->Add(this->label176);
			this->groupBox13->Controls->Add(this->chart8);
			this->groupBox13->Controls->Add(this->labeltrial4_1IL_8);
			this->groupBox13->Controls->Add(this->labeltrial4_1IL_7);
			this->groupBox13->Controls->Add(this->labeltrial4_1IL_6);
			this->groupBox13->Controls->Add(this->labeltrial4_1IL_5);
			this->groupBox13->Controls->Add(this->labeltrial4_1IL_4);
			this->groupBox13->Controls->Add(this->labeltrial4_1IL_3);
			this->groupBox13->Controls->Add(this->labeltrial4_1IL_2);
			this->groupBox13->Controls->Add(this->labeltrial4_1IL_1);
			this->groupBox13->Controls->Add(this->labeltrial4_1I1_8);
			this->groupBox13->Controls->Add(this->labeltrial4_1I1_7);
			this->groupBox13->Controls->Add(this->labeltrial4_1I1_6);
			this->groupBox13->Controls->Add(this->labeltrial4_1I1_5);
			this->groupBox13->Controls->Add(this->labeltrial4_1I1_4);
			this->groupBox13->Controls->Add(this->labeltrial4_1I1_3);
			this->groupBox13->Controls->Add(this->labeltrial4_1I1_2);
			this->groupBox13->Controls->Add(this->labeltrial4_1I1_1);
			this->groupBox13->Controls->Add(this->label193);
			this->groupBox13->Controls->Add(this->label194);
			this->groupBox13->Controls->Add(this->label195);
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox13->ForeColor = System::Drawing::Color::Red;
			this->groupBox13->Location = System::Drawing::Point(16, 44);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(1188, 534);
			this->groupBox13->TabIndex = 89;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"第一组";
			// 
			// labeltrial4_1α
			// 
			this->labeltrial4_1α->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1α->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1α->Location = System::Drawing::Point(758, 251);
			this->labeltrial4_1α->Name = L"labeltrial4_1α";
			this->labeltrial4_1α->Size = System::Drawing::Size(161, 30);
			this->labeltrial4_1α->TabIndex = 229;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->Location = System::Drawing::Point(592, 488);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(89, 20);
			this->label49->TabIndex = 228;
			this->label49->Text = L"请打分：";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->Location = System::Drawing::Point(869, 488);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(129, 20);
			this->label50->TabIndex = 227;
			this->label50->Text = L"本项目总分12";
			// 
			// textBoxTrial4_1Score
			// 
			this->textBoxTrial4_1Score->Location = System::Drawing::Point(694, 485);
			this->textBoxTrial4_1Score->Name = L"textBoxTrial4_1Score";
			this->textBoxTrial4_1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial4_1Score->TabIndex = 226;
			// 
			// label176
			// 
			this->label176->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label176->ForeColor = System::Drawing::Color::Black;
			this->label176->Location = System::Drawing::Point(594, 255);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(147, 26);
			this->label176->TabIndex = 112;
			this->label176->Text = L"转移电流比α";
			// 
			// chart8
			// 
			chartArea8->Name = L"ChartArea1";
			this->chart8->ChartAreas->Add(chartArea8);
			legend8->Name = L"Legend1";
			this->chart8->Legends->Add(legend8);
			this->chart8->Location = System::Drawing::Point(128, 215);
			this->chart8->Name = L"chart8";
			series8->ChartArea = L"ChartArea1";
			series8->Legend = L"Legend1";
			series8->Name = L"Series1";
			this->chart8->Series->Add(series8);
			this->chart8->Size = System::Drawing::Size(458, 300);
			this->chart8->TabIndex = 110;
			this->chart8->Text = L"chart8";
			// 
			// labeltrial4_1IL_8
			// 
			this->labeltrial4_1IL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_8->Location = System::Drawing::Point(914, 162);
			this->labeltrial4_1IL_8->Name = L"labeltrial4_1IL_8";
			this->labeltrial4_1IL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_8->TabIndex = 107;
			// 
			// labeltrial4_1IL_7
			// 
			this->labeltrial4_1IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_7->Location = System::Drawing::Point(800, 162);
			this->labeltrial4_1IL_7->Name = L"labeltrial4_1IL_7";
			this->labeltrial4_1IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_7->TabIndex = 106;
			// 
			// labeltrial4_1IL_6
			// 
			this->labeltrial4_1IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_6->Location = System::Drawing::Point(690, 162);
			this->labeltrial4_1IL_6->Name = L"labeltrial4_1IL_6";
			this->labeltrial4_1IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_6->TabIndex = 105;
			// 
			// labeltrial4_1IL_5
			// 
			this->labeltrial4_1IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_5->Location = System::Drawing::Point(576, 162);
			this->labeltrial4_1IL_5->Name = L"labeltrial4_1IL_5";
			this->labeltrial4_1IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_5->TabIndex = 104;
			// 
			// labeltrial4_1IL_4
			// 
			this->labeltrial4_1IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_4->Location = System::Drawing::Point(462, 162);
			this->labeltrial4_1IL_4->Name = L"labeltrial4_1IL_4";
			this->labeltrial4_1IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_4->TabIndex = 103;
			// 
			// labeltrial4_1IL_3
			// 
			this->labeltrial4_1IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_3->Location = System::Drawing::Point(348, 162);
			this->labeltrial4_1IL_3->Name = L"labeltrial4_1IL_3";
			this->labeltrial4_1IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_3->TabIndex = 102;
			// 
			// labeltrial4_1IL_2
			// 
			this->labeltrial4_1IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_2->Location = System::Drawing::Point(240, 162);
			this->labeltrial4_1IL_2->Name = L"labeltrial4_1IL_2";
			this->labeltrial4_1IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_2->TabIndex = 101;
			// 
			// labeltrial4_1IL_1
			// 
			this->labeltrial4_1IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_1->Location = System::Drawing::Point(128, 162);
			this->labeltrial4_1IL_1->Name = L"labeltrial4_1IL_1";
			this->labeltrial4_1IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_1->TabIndex = 100;
			// 
			// labeltrial4_1I1_8
			// 
			this->labeltrial4_1I1_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_8->Location = System::Drawing::Point(910, 119);
			this->labeltrial4_1I1_8->Name = L"labeltrial4_1I1_8";
			this->labeltrial4_1I1_8->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_8->TabIndex = 98;
			this->labeltrial4_1I1_8->Text = L" ";
			// 
			// labeltrial4_1I1_7
			// 
			this->labeltrial4_1I1_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_7->Location = System::Drawing::Point(796, 119);
			this->labeltrial4_1I1_7->Name = L"labeltrial4_1I1_7";
			this->labeltrial4_1I1_7->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_7->TabIndex = 97;
			this->labeltrial4_1I1_7->Text = L" ";
			// 
			// labeltrial4_1I1_6
			// 
			this->labeltrial4_1I1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_6->Location = System::Drawing::Point(686, 119);
			this->labeltrial4_1I1_6->Name = L"labeltrial4_1I1_6";
			this->labeltrial4_1I1_6->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_6->TabIndex = 96;
			this->labeltrial4_1I1_6->Text = L" ";
			// 
			// labeltrial4_1I1_5
			// 
			this->labeltrial4_1I1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_5->Location = System::Drawing::Point(572, 119);
			this->labeltrial4_1I1_5->Name = L"labeltrial4_1I1_5";
			this->labeltrial4_1I1_5->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_5->TabIndex = 95;
			this->labeltrial4_1I1_5->Text = L" ";
			// 
			// labeltrial4_1I1_4
			// 
			this->labeltrial4_1I1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_4->Location = System::Drawing::Point(458, 119);
			this->labeltrial4_1I1_4->Name = L"labeltrial4_1I1_4";
			this->labeltrial4_1I1_4->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_4->TabIndex = 94;
			this->labeltrial4_1I1_4->Text = L" ";
			// 
			// labeltrial4_1I1_3
			// 
			this->labeltrial4_1I1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_3->Location = System::Drawing::Point(344, 119);
			this->labeltrial4_1I1_3->Name = L"labeltrial4_1I1_3";
			this->labeltrial4_1I1_3->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_3->TabIndex = 93;
			this->labeltrial4_1I1_3->Text = L" ";
			// 
			// labeltrial4_1I1_2
			// 
			this->labeltrial4_1I1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_2->Location = System::Drawing::Point(236, 119);
			this->labeltrial4_1I1_2->Name = L"labeltrial4_1I1_2";
			this->labeltrial4_1I1_2->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_2->TabIndex = 92;
			this->labeltrial4_1I1_2->Text = L" ";
			// 
			// labeltrial4_1I1_1
			// 
			this->labeltrial4_1I1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_1->Location = System::Drawing::Point(128, 119);
			this->labeltrial4_1I1_1->Name = L"labeltrial4_1I1_1";
			this->labeltrial4_1I1_1->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_1->TabIndex = 91;
			this->labeltrial4_1I1_1->Text = L" ";
			// 
			// label193
			// 
			this->label193->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label193->ForeColor = System::Drawing::Color::Black;
			this->label193->Location = System::Drawing::Point(21, 166);
			this->label193->Name = L"label193";
			this->label193->Size = System::Drawing::Size(101, 26);
			this->label193->TabIndex = 90;
			this->label193->Text = L"IL（mA）";
			// 
			// label194
			// 
			this->label194->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label194->ForeColor = System::Drawing::Color::Black;
			this->label194->Location = System::Drawing::Point(21, 119);
			this->label194->Name = L"label194";
			this->label194->Size = System::Drawing::Size(101, 26);
			this->label194->TabIndex = 89;
			this->label194->Text = L"I1（mA）";
			// 
			// label195
			// 
			this->label195->ForeColor = System::Drawing::Color::Black;
			this->label195->Location = System::Drawing::Point(28, 40);
			this->label195->Name = L"label195";
			this->label195->Size = System::Drawing::Size(973, 57);
			this->label195->TabIndex = 88;
			this->label195->Text = L"  （1）固定RL＝2KΩ，调节恒流源的输出电流IS，使其在0.05~0.7mA范围内取8个数值，测出IL，绘制IL＝F（I1）曲线，并由其线性部分求出转移电流比"
				L"α。";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1011, 1254);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 36);
			this->button3->TabIndex = 327;
			this->button3->Text = L"打印";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VCVS实验::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(898, 1254);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 326;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VCVS实验::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(791, 1254);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 325;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(10, 1217);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(640, 73);
			this->groupBox14->TabIndex = 324;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"VCVS、VCCS、CCVS、CCCS实验总分";
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
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &VCVS实验::printDocument1_PrintPage);
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
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Location = System::Drawing::Point(60, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1299, 1462);
			this->panel1->TabIndex = 328;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->groupBox11);
			this->panel2->Controls->Add(this->groupBox14);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(60, 3975);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1407, 1315);
			this->panel2->TabIndex = 329;
			// 
			// labeltrial1_1U1_9
			// 
			this->labeltrial1_1U1_9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U1_9->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U1_9->Location = System::Drawing::Point(1043, 84);
			this->labeltrial1_1U1_9->Name = L"labeltrial1_1U1_9";
			this->labeltrial1_1U1_9->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U1_9->TabIndex = 223;
			// 
			// labeltrial1_1U1_8
			// 
			this->labeltrial1_1U1_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U1_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U1_8->Location = System::Drawing::Point(935, 84);
			this->labeltrial1_1U1_8->Name = L"labeltrial1_1U1_8";
			this->labeltrial1_1U1_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U1_8->TabIndex = 222;
			// 
			// labeltrial1_1U1_7
			// 
			this->labeltrial1_1U1_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U1_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U1_7->Location = System::Drawing::Point(821, 84);
			this->labeltrial1_1U1_7->Name = L"labeltrial1_1U1_7";
			this->labeltrial1_1U1_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U1_7->TabIndex = 221;
			// 
			// labeltrial1_1U1_6
			// 
			this->labeltrial1_1U1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U1_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U1_6->Location = System::Drawing::Point(711, 84);
			this->labeltrial1_1U1_6->Name = L"labeltrial1_1U1_6";
			this->labeltrial1_1U1_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U1_6->TabIndex = 220;
			// 
			// labeltrial1_1U1_5
			// 
			this->labeltrial1_1U1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U1_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U1_5->Location = System::Drawing::Point(597, 84);
			this->labeltrial1_1U1_5->Name = L"labeltrial1_1U1_5";
			this->labeltrial1_1U1_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U1_5->TabIndex = 219;
			// 
			// labeltrial1_1U1_4
			// 
			this->labeltrial1_1U1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U1_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U1_4->Location = System::Drawing::Point(483, 84);
			this->labeltrial1_1U1_4->Name = L"labeltrial1_1U1_4";
			this->labeltrial1_1U1_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U1_4->TabIndex = 218;
			// 
			// labeltrial1_1U1_3
			// 
			this->labeltrial1_1U1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U1_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U1_3->Location = System::Drawing::Point(369, 84);
			this->labeltrial1_1U1_3->Name = L"labeltrial1_1U1_3";
			this->labeltrial1_1U1_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U1_3->TabIndex = 217;
			// 
			// labeltrial1_1U1_2
			// 
			this->labeltrial1_1U1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U1_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U1_2->Location = System::Drawing::Point(261, 84);
			this->labeltrial1_1U1_2->Name = L"labeltrial1_1U1_2";
			this->labeltrial1_1U1_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U1_2->TabIndex = 216;
			// 
			// labeltrial1_1U1_1
			// 
			this->labeltrial1_1U1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U1_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U1_1->Location = System::Drawing::Point(149, 84);
			this->labeltrial1_1U1_1->Name = L"labeltrial1_1U1_1";
			this->labeltrial1_1U1_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U1_1->TabIndex = 215;
			// 
			// labeltrial2_1U1_8
			// 
			this->labeltrial2_1U1_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1U1_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1U1_8->Location = System::Drawing::Point(914, 119);
			this->labeltrial2_1U1_8->Name = L"labeltrial2_1U1_8";
			this->labeltrial2_1U1_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1U1_8->TabIndex = 228;
			// 
			// labeltrial2_1U1_7
			// 
			this->labeltrial2_1U1_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1U1_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1U1_7->Location = System::Drawing::Point(800, 119);
			this->labeltrial2_1U1_7->Name = L"labeltrial2_1U1_7";
			this->labeltrial2_1U1_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1U1_7->TabIndex = 227;
			// 
			// labeltrial2_1U1_6
			// 
			this->labeltrial2_1U1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1U1_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1U1_6->Location = System::Drawing::Point(690, 119);
			this->labeltrial2_1U1_6->Name = L"labeltrial2_1U1_6";
			this->labeltrial2_1U1_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1U1_6->TabIndex = 226;
			// 
			// labeltrial2_1U1_5
			// 
			this->labeltrial2_1U1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1U1_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1U1_5->Location = System::Drawing::Point(576, 119);
			this->labeltrial2_1U1_5->Name = L"labeltrial2_1U1_5";
			this->labeltrial2_1U1_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1U1_5->TabIndex = 225;
			// 
			// labeltrial2_1U1_4
			// 
			this->labeltrial2_1U1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1U1_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1U1_4->Location = System::Drawing::Point(462, 119);
			this->labeltrial2_1U1_4->Name = L"labeltrial2_1U1_4";
			this->labeltrial2_1U1_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1U1_4->TabIndex = 224;
			// 
			// labeltrial2_1U1_3
			// 
			this->labeltrial2_1U1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1U1_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1U1_3->Location = System::Drawing::Point(348, 119);
			this->labeltrial2_1U1_3->Name = L"labeltrial2_1U1_3";
			this->labeltrial2_1U1_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1U1_3->TabIndex = 223;
			// 
			// labeltrial2_1U1_2
			// 
			this->labeltrial2_1U1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1U1_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1U1_2->Location = System::Drawing::Point(240, 119);
			this->labeltrial2_1U1_2->Name = L"labeltrial2_1U1_2";
			this->labeltrial2_1U1_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1U1_2->TabIndex = 222;
			// 
			// labeltrial2_1U1_1
			// 
			this->labeltrial2_1U1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1U1_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1U1_1->Location = System::Drawing::Point(128, 119);
			this->labeltrial2_1U1_1->Name = L"labeltrial2_1U1_1";
			this->labeltrial2_1U1_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1U1_1->TabIndex = 221;
			// 
			// textBoxtrial2_2RL_7
			// 
			this->textBoxtrial2_2RL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial2_2RL_7->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial2_2RL_7->Location = System::Drawing::Point(864, 97);
			this->textBoxtrial2_2RL_7->Name = L"textBoxtrial2_2RL_7";
			this->textBoxtrial2_2RL_7->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial2_2RL_7->TabIndex = 226;
			// 
			// textBoxtrial2_2RL_6
			// 
			this->textBoxtrial2_2RL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial2_2RL_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial2_2RL_6->Location = System::Drawing::Point(754, 97);
			this->textBoxtrial2_2RL_6->Name = L"textBoxtrial2_2RL_6";
			this->textBoxtrial2_2RL_6->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial2_2RL_6->TabIndex = 225;
			// 
			// textBoxtrial2_2RL_5
			// 
			this->textBoxtrial2_2RL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial2_2RL_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial2_2RL_5->Location = System::Drawing::Point(640, 97);
			this->textBoxtrial2_2RL_5->Name = L"textBoxtrial2_2RL_5";
			this->textBoxtrial2_2RL_5->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial2_2RL_5->TabIndex = 224;
			// 
			// textBoxtrial2_2RL_4
			// 
			this->textBoxtrial2_2RL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial2_2RL_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial2_2RL_4->Location = System::Drawing::Point(526, 97);
			this->textBoxtrial2_2RL_4->Name = L"textBoxtrial2_2RL_4";
			this->textBoxtrial2_2RL_4->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial2_2RL_4->TabIndex = 223;
			// 
			// textBoxtrial2_2RL_3
			// 
			this->textBoxtrial2_2RL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial2_2RL_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial2_2RL_3->Location = System::Drawing::Point(412, 97);
			this->textBoxtrial2_2RL_3->Name = L"textBoxtrial2_2RL_3";
			this->textBoxtrial2_2RL_3->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial2_2RL_3->TabIndex = 222;
			// 
			// textBoxtrial2_2RL_2
			// 
			this->textBoxtrial2_2RL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial2_2RL_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial2_2RL_2->Location = System::Drawing::Point(304, 97);
			this->textBoxtrial2_2RL_2->Name = L"textBoxtrial2_2RL_2";
			this->textBoxtrial2_2RL_2->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial2_2RL_2->TabIndex = 221;
			// 
			// textBoxtrial2_2RL_1
			// 
			this->textBoxtrial2_2RL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial2_2RL_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial2_2RL_1->Location = System::Drawing::Point(192, 97);
			this->textBoxtrial2_2RL_1->Name = L"textBoxtrial2_2RL_1";
			this->textBoxtrial2_2RL_1->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial2_2RL_1->TabIndex = 220;
			// 
			// textBoxtrial3_2RL_8
			// 
			this->textBoxtrial3_2RL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial3_2RL_8->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial3_2RL_8->Location = System::Drawing::Point(978, 97);
			this->textBoxtrial3_2RL_8->Name = L"textBoxtrial3_2RL_8";
			this->textBoxtrial3_2RL_8->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial3_2RL_8->TabIndex = 233;
			// 
			// textBoxtrial3_2RL_7
			// 
			this->textBoxtrial3_2RL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial3_2RL_7->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial3_2RL_7->Location = System::Drawing::Point(864, 97);
			this->textBoxtrial3_2RL_7->Name = L"textBoxtrial3_2RL_7";
			this->textBoxtrial3_2RL_7->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial3_2RL_7->TabIndex = 232;
			// 
			// textBoxtrial3_2RL_6
			// 
			this->textBoxtrial3_2RL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial3_2RL_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial3_2RL_6->Location = System::Drawing::Point(754, 97);
			this->textBoxtrial3_2RL_6->Name = L"textBoxtrial3_2RL_6";
			this->textBoxtrial3_2RL_6->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial3_2RL_6->TabIndex = 231;
			// 
			// textBoxtrial3_2RL_5
			// 
			this->textBoxtrial3_2RL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial3_2RL_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial3_2RL_5->Location = System::Drawing::Point(640, 97);
			this->textBoxtrial3_2RL_5->Name = L"textBoxtrial3_2RL_5";
			this->textBoxtrial3_2RL_5->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial3_2RL_5->TabIndex = 230;
			// 
			// textBoxtrial3_2RL_4
			// 
			this->textBoxtrial3_2RL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial3_2RL_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial3_2RL_4->Location = System::Drawing::Point(526, 97);
			this->textBoxtrial3_2RL_4->Name = L"textBoxtrial3_2RL_4";
			this->textBoxtrial3_2RL_4->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial3_2RL_4->TabIndex = 229;
			// 
			// textBoxtrial3_2RL_3
			// 
			this->textBoxtrial3_2RL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial3_2RL_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial3_2RL_3->Location = System::Drawing::Point(412, 97);
			this->textBoxtrial3_2RL_3->Name = L"textBoxtrial3_2RL_3";
			this->textBoxtrial3_2RL_3->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial3_2RL_3->TabIndex = 228;
			// 
			// textBoxtrial3_2RL_2
			// 
			this->textBoxtrial3_2RL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial3_2RL_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial3_2RL_2->Location = System::Drawing::Point(304, 97);
			this->textBoxtrial3_2RL_2->Name = L"textBoxtrial3_2RL_2";
			this->textBoxtrial3_2RL_2->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial3_2RL_2->TabIndex = 227;
			// 
			// textBoxtrial3_2RL_1
			// 
			this->textBoxtrial3_2RL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxtrial3_2RL_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxtrial3_2RL_1->Location = System::Drawing::Point(192, 97);
			this->textBoxtrial3_2RL_1->Name = L"textBoxtrial3_2RL_1";
			this->textBoxtrial3_2RL_1->Size = System::Drawing::Size(96, 30);
			this->textBoxtrial3_2RL_1->TabIndex = 226;
			// 
			// VCVS实验
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1591, 718);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox实验内容3);
			this->Controls->Add(this->groupBox实验内容2);
			this->Name = L"VCVS实验";
			this->Text = L"VCVS实验";
			this->Load += gcnew System::EventHandler(this, &VCVS实验::VCVS实验_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox实验内容2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->groupBox实验内容3->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->EndInit();
			this->groupBox11->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart7))->EndInit();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart8))->EndInit();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox10_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void groupBox12_Enter(System::Object^  sender, System::EventArgs^  e) {
}
		 String ^SelectedArea = "";
		 void  Priview();
		 void Print();
		public:void LoadVCVS实验Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
private: System::Void VCVS实验_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Priview();
	SelectedArea = "实验2";
	Priview();
	SelectedArea = "实验3";
	Priview();
	SelectedArea = "panel2";
	Priview();
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Bitmap ^ _NewBitmap;
	if (SelectedArea == "panel1") {
		_NewBitmap = gcnew  Bitmap(panel1->Width, panel1->Height);
		panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));
	}
	else if(SelectedArea == "实验2"){
		_NewBitmap = gcnew  Bitmap(groupBox实验内容2->Width, groupBox实验内容2->Height);
		groupBox实验内容2->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, groupBox实验内容2->Width, groupBox实验内容2->Height));
	}
	else if (SelectedArea == "实验3") {
		_NewBitmap = gcnew  Bitmap(groupBox实验内容3->Width, groupBox实验内容3->Height);
		groupBox实验内容3->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, groupBox实验内容3->Width, groupBox实验内容3->Height));
	}
	else {
		_NewBitmap = gcnew  Bitmap(panel2->Width, panel2->Height);
		panel2->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel2->Width, panel2->Height));
	}
	int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
	int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
	e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Print();
	SelectedArea = "实验2";
	Print();
	SelectedArea = "实验3";
	Print();
	SelectedArea = "panel2";
	Print();
}
private: System::Void textBoxTrial1_1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
