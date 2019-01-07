#pragma once
#include "tool.h"

//添加一个断线检测
namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RLC元件阻抗特性的测定 摘要
	/// </summary>
	public ref class RLC元件阻抗特性的测定 : public System::Windows::Forms::Form
	{
	public:
		RLC元件阻抗特性的测定(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void chartTrial3oad();
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~RLC元件阻抗特性的测定()
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





























	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBoxTrial2Score;

	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_2;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label24;

	private: System::Windows::Forms::TextBox^  textBoxTrial3Score;












	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::GroupBox^  groupBox14;
	private: System::Windows::Forms::Label^  labelTotalGrade;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  textBoxTrial1Score;






private: System::Windows::Forms::Label^  labelTrial1_R_Ur6;

private: System::Windows::Forms::Label^  labelTrial1_R_Ur5;

private: System::Windows::Forms::Label^  labelTrial1_R_Ur4;

private: System::Windows::Forms::Label^  labelTrial1_R_Ur3;

private: System::Windows::Forms::Label^  labelTrial1_R_Ur2;


private: System::Windows::Forms::Label^  labelTrial1_R_Ur1;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;































private: System::Windows::Forms::Label^  labelTrial1_C_Ur6;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur6;


private: System::Windows::Forms::Label^  labelTrial1_C_Ur5;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur5;


private: System::Windows::Forms::Label^  labelTrial1_C_Ur4;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur4;


private: System::Windows::Forms::Label^  labelTrial1_C_Ur3;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur3;


private: System::Windows::Forms::Label^  labelTrial1_C_Ur2;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur2;


private: System::Windows::Forms::Label^  labelTrial1_C_Ur1;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;

private: System::Windows::Forms::Label^  labelTrial1_L_Ur1;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;

private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial3;
































private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  labelTrial1_L_IL6;

private: System::Windows::Forms::Label^  labelTrial1_L_IL5;

private: System::Windows::Forms::Label^  labelTrial1_L_IL4;


private: System::Windows::Forms::Label^  labelTrial1_L_IL3;

private: System::Windows::Forms::Label^  labelTrial1_L_IL2;

private: System::Windows::Forms::Label^  labelTrial1_L_IL1;

private: System::Windows::Forms::Label^  textBoxTrial1_R_R6;
private: System::Windows::Forms::Label^  textBoxTrial1_R_R5;
private: System::Windows::Forms::Label^  textBoxTrial1_R_R4;
private: System::Windows::Forms::Label^  textBoxTrial1_R_R3;
private: System::Windows::Forms::Label^  textBoxTrial1_R_R2;
private: System::Windows::Forms::Label^  textBoxTrial1_R_R1;
private: System::Windows::Forms::Label^  labelTrial1_R_IR6;
private: System::Windows::Forms::Label^  labelTrial1_R_IR5;
private: System::Windows::Forms::Label^  labelTrial1_R_IR4;
private: System::Windows::Forms::Label^  labelTrial1_R_IR3;
private: System::Windows::Forms::Label^  labelTrial1_R_IR2;
private: System::Windows::Forms::Label^  labelTrial1_R_IR1;
private: System::Windows::Forms::Label^  textBoxTrial1_F_6;
private: System::Windows::Forms::Label^  textBoxTrial1_F_5;
private: System::Windows::Forms::Label^  textBoxTrial1_F_4;
private: System::Windows::Forms::Label^  textBoxTrial1_F_3;
private: System::Windows::Forms::Label^  textBoxTrial1_F_2;
private: System::Windows::Forms::Label^  textBoxTrial1_F_1;
private: System::Windows::Forms::Label^  textBoxTrial1_C_XC6;
private: System::Windows::Forms::Label^  textBoxTrial1_C_XC5;
private: System::Windows::Forms::Label^  textBoxTrial1_C_XC4;
private: System::Windows::Forms::Label^  textBoxTrial1_C_XC3;
private: System::Windows::Forms::Label^  textBoxTrial1_C_XC2;
private: System::Windows::Forms::Label^  textBoxTrial1_C_XC1;
private: System::Windows::Forms::Label^  labelTrial1_C_IC6;
private: System::Windows::Forms::Label^  labelTrial1_C_IC5;
private: System::Windows::Forms::Label^  labelTrial1_C_IC4;
private: System::Windows::Forms::Label^  labelTrial1_C_IC3;
private: System::Windows::Forms::Label^  labelTrial1_C_IC2;
private: System::Windows::Forms::Label^  labelTrial1_C_IC1;
private: System::Windows::Forms::Label^  textBoxTrial1_L_XL6;
private: System::Windows::Forms::Label^  textBoxTrial1_L_XL5;
private: System::Windows::Forms::Label^  textBoxTrial1_L_XL4;
private: System::Windows::Forms::Label^  textBoxTrial1_L_XL3;
private: System::Windows::Forms::Label^  textBoxTrial1_L_XL2;
private: System::Windows::Forms::Label^  textBoxTrial1_L_XL1;
private: System::Windows::Forms::Label^  textBoxTrial3_φ6;
private: System::Windows::Forms::Label^  textBoxTrial3_φ5;
private: System::Windows::Forms::Label^  textBoxTrial3_φ4;
private: System::Windows::Forms::Label^  textBoxTrial3_φ3;
private: System::Windows::Forms::Label^  textBoxTrial3_φ2;
private: System::Windows::Forms::Label^  textBoxTrial3_φ1;
private: System::Windows::Forms::Label^  textBoxTrial3_m6;
private: System::Windows::Forms::Label^  textBoxTrial3_m5;
private: System::Windows::Forms::Label^  textBoxTrial3_m4;
private: System::Windows::Forms::Label^  textBoxTrial3_m3;
private: System::Windows::Forms::Label^  textBoxTrial3_m2;
private: System::Windows::Forms::Label^  textBoxTrial3_m1;
private: System::Windows::Forms::Label^  textBoxTrial3_n6;
private: System::Windows::Forms::Label^  textBoxTrial3_n5;
private: System::Windows::Forms::Label^  textBoxTrial3_n4;
private: System::Windows::Forms::Label^  textBoxTrial3_n3;
private: System::Windows::Forms::Label^  textBoxTrial3_n2;
private: System::Windows::Forms::Label^  textBoxTrial3_n1;
private: System::Windows::Forms::Label^  textBoxTrial3_F_6;
private: System::Windows::Forms::Label^  textBoxTrial3_F_5;
private: System::Windows::Forms::Label^  textBoxTrial3_F_4;
private: System::Windows::Forms::Label^  textBoxTrial3_F_3;
private: System::Windows::Forms::Label^  textBoxTrial3_F_2;
private: System::Windows::Forms::Label^  textBoxTrial3_F_1;
private: System::Windows::Forms::Label^  textBox结论;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_6;

private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_5;

private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_4;

private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_3;

private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_2;
private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RLC元件阻抗特性的测定::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->textBoxTrial1_C_XC6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_C_XC5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_C_XC4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_C_XC3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_C_XC2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_C_XC1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_IC6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_IC5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_IC4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_IC3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_IC2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_IC1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_L_XL1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_IL6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_IL5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_IL4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_IL3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_IL2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_IL1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_R_R1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_IR6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_IR5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_IR4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_IR3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_IR2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_IR1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_F_1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_Ur6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_Ur5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_Ur4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_Ur3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_Ur2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_R_Ur1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_Ur6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_Ur6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_Ur5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_Ur5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_Ur4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_Ur4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_Ur3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_Ur3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_Ur2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_Ur2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_C_Ur1 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_L_Ur1 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->pictureBoxTrial2_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTrial2_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial3_φ6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_φ5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_φ4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_φ3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_φ2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_φ1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_m6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_m5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_m4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_m3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_m2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_m1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_n6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_n5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_n4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_n3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_n2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_n1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_F_1 = (gcnew System::Windows::Forms::Label());
			this->chartTrial3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3Score = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox结论 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTrial3_5 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTrial3_3 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial3_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTrial3_1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial3))->BeginInit();
			this->groupBox14->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_1))->BeginInit();
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
			this->groupBox7->Location = System::Drawing::Point(34, 25);
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
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_C_XC1);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC6);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC5);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC4);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC3);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC2);
			this->groupBox8->Controls->Add(this->labelTrial1_C_IC1);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_L_XL1);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL6);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL5);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL4);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL3);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL2);
			this->groupBox8->Controls->Add(this->labelTrial1_L_IL1);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_R_R1);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR6);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR5);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR4);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR3);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR2);
			this->groupBox8->Controls->Add(this->labelTrial1_R_IR1);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_F_1);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur6);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur5);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur4);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur3);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur2);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur1);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur6);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur6);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur5);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur5);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur4);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur4);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur3);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur3);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur2);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur2);
			this->groupBox8->Controls->Add(this->labelTrial1_C_Ur1);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->labelTrial1_L_Ur1);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->textBoxTrial1Score);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(33, 359);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 615);
			this->groupBox8->TabIndex = 201;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"RLC元件阻抗特性的测定 实验内容1";
			// 
			// textBoxTrial1_C_XC6
			// 
			this->textBoxTrial1_C_XC6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_C_XC6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_C_XC6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_C_XC6->Location = System::Drawing::Point(943, 510);
			this->textBoxTrial1_C_XC6->Name = L"textBoxTrial1_C_XC6";
			this->textBoxTrial1_C_XC6->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_C_XC6->TabIndex = 351;
			// 
			// textBoxTrial1_C_XC5
			// 
			this->textBoxTrial1_C_XC5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_C_XC5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_C_XC5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_C_XC5->Location = System::Drawing::Point(815, 510);
			this->textBoxTrial1_C_XC5->Name = L"textBoxTrial1_C_XC5";
			this->textBoxTrial1_C_XC5->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_C_XC5->TabIndex = 350;
			// 
			// textBoxTrial1_C_XC4
			// 
			this->textBoxTrial1_C_XC4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_C_XC4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_C_XC4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_C_XC4->Location = System::Drawing::Point(682, 510);
			this->textBoxTrial1_C_XC4->Name = L"textBoxTrial1_C_XC4";
			this->textBoxTrial1_C_XC4->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_C_XC4->TabIndex = 349;
			// 
			// textBoxTrial1_C_XC3
			// 
			this->textBoxTrial1_C_XC3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_C_XC3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_C_XC3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_C_XC3->Location = System::Drawing::Point(552, 510);
			this->textBoxTrial1_C_XC3->Name = L"textBoxTrial1_C_XC3";
			this->textBoxTrial1_C_XC3->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_C_XC3->TabIndex = 348;
			// 
			// textBoxTrial1_C_XC2
			// 
			this->textBoxTrial1_C_XC2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_C_XC2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_C_XC2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_C_XC2->Location = System::Drawing::Point(417, 510);
			this->textBoxTrial1_C_XC2->Name = L"textBoxTrial1_C_XC2";
			this->textBoxTrial1_C_XC2->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_C_XC2->TabIndex = 347;
			// 
			// textBoxTrial1_C_XC1
			// 
			this->textBoxTrial1_C_XC1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_C_XC1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_C_XC1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_C_XC1->Location = System::Drawing::Point(289, 508);
			this->textBoxTrial1_C_XC1->Name = L"textBoxTrial1_C_XC1";
			this->textBoxTrial1_C_XC1->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_C_XC1->TabIndex = 346;
			// 
			// labelTrial1_C_IC6
			// 
			this->labelTrial1_C_IC6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_IC6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_IC6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_IC6->Location = System::Drawing::Point(945, 466);
			this->labelTrial1_C_IC6->Name = L"labelTrial1_C_IC6";
			this->labelTrial1_C_IC6->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_IC6->TabIndex = 345;
			// 
			// labelTrial1_C_IC5
			// 
			this->labelTrial1_C_IC5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_IC5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_IC5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_IC5->Location = System::Drawing::Point(817, 466);
			this->labelTrial1_C_IC5->Name = L"labelTrial1_C_IC5";
			this->labelTrial1_C_IC5->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_IC5->TabIndex = 344;
			// 
			// labelTrial1_C_IC4
			// 
			this->labelTrial1_C_IC4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_IC4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_IC4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_IC4->Location = System::Drawing::Point(684, 466);
			this->labelTrial1_C_IC4->Name = L"labelTrial1_C_IC4";
			this->labelTrial1_C_IC4->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_IC4->TabIndex = 343;
			// 
			// labelTrial1_C_IC3
			// 
			this->labelTrial1_C_IC3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_IC3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_IC3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_IC3->Location = System::Drawing::Point(554, 466);
			this->labelTrial1_C_IC3->Name = L"labelTrial1_C_IC3";
			this->labelTrial1_C_IC3->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_IC3->TabIndex = 342;
			// 
			// labelTrial1_C_IC2
			// 
			this->labelTrial1_C_IC2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_IC2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_IC2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_IC2->Location = System::Drawing::Point(419, 466);
			this->labelTrial1_C_IC2->Name = L"labelTrial1_C_IC2";
			this->labelTrial1_C_IC2->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_IC2->TabIndex = 341;
			// 
			// labelTrial1_C_IC1
			// 
			this->labelTrial1_C_IC1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_IC1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_IC1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_IC1->Location = System::Drawing::Point(291, 464);
			this->labelTrial1_C_IC1->Name = L"labelTrial1_C_IC1";
			this->labelTrial1_C_IC1->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_IC1->TabIndex = 340;
			// 
			// textBoxTrial1_L_XL6
			// 
			this->textBoxTrial1_L_XL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_L_XL6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_L_XL6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_L_XL6->Location = System::Drawing::Point(947, 362);
			this->textBoxTrial1_L_XL6->Name = L"textBoxTrial1_L_XL6";
			this->textBoxTrial1_L_XL6->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_L_XL6->TabIndex = 339;
			// 
			// textBoxTrial1_L_XL5
			// 
			this->textBoxTrial1_L_XL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_L_XL5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_L_XL5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_L_XL5->Location = System::Drawing::Point(819, 362);
			this->textBoxTrial1_L_XL5->Name = L"textBoxTrial1_L_XL5";
			this->textBoxTrial1_L_XL5->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_L_XL5->TabIndex = 338;
			// 
			// textBoxTrial1_L_XL4
			// 
			this->textBoxTrial1_L_XL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_L_XL4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_L_XL4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_L_XL4->Location = System::Drawing::Point(686, 362);
			this->textBoxTrial1_L_XL4->Name = L"textBoxTrial1_L_XL4";
			this->textBoxTrial1_L_XL4->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_L_XL4->TabIndex = 337;
			// 
			// textBoxTrial1_L_XL3
			// 
			this->textBoxTrial1_L_XL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_L_XL3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_L_XL3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_L_XL3->Location = System::Drawing::Point(556, 362);
			this->textBoxTrial1_L_XL3->Name = L"textBoxTrial1_L_XL3";
			this->textBoxTrial1_L_XL3->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_L_XL3->TabIndex = 336;
			// 
			// textBoxTrial1_L_XL2
			// 
			this->textBoxTrial1_L_XL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_L_XL2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_L_XL2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_L_XL2->Location = System::Drawing::Point(421, 362);
			this->textBoxTrial1_L_XL2->Name = L"textBoxTrial1_L_XL2";
			this->textBoxTrial1_L_XL2->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_L_XL2->TabIndex = 335;
			// 
			// textBoxTrial1_L_XL1
			// 
			this->textBoxTrial1_L_XL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_L_XL1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_L_XL1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_L_XL1->Location = System::Drawing::Point(293, 360);
			this->textBoxTrial1_L_XL1->Name = L"textBoxTrial1_L_XL1";
			this->textBoxTrial1_L_XL1->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_L_XL1->TabIndex = 334;
			// 
			// labelTrial1_L_IL6
			// 
			this->labelTrial1_L_IL6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_IL6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_IL6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_IL6->Location = System::Drawing::Point(947, 324);
			this->labelTrial1_L_IL6->Name = L"labelTrial1_L_IL6";
			this->labelTrial1_L_IL6->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_IL6->TabIndex = 333;
			// 
			// labelTrial1_L_IL5
			// 
			this->labelTrial1_L_IL5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_IL5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_IL5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_IL5->Location = System::Drawing::Point(819, 324);
			this->labelTrial1_L_IL5->Name = L"labelTrial1_L_IL5";
			this->labelTrial1_L_IL5->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_IL5->TabIndex = 332;
			// 
			// labelTrial1_L_IL4
			// 
			this->labelTrial1_L_IL4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_IL4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_IL4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_IL4->Location = System::Drawing::Point(686, 324);
			this->labelTrial1_L_IL4->Name = L"labelTrial1_L_IL4";
			this->labelTrial1_L_IL4->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_IL4->TabIndex = 331;
			// 
			// labelTrial1_L_IL3
			// 
			this->labelTrial1_L_IL3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_IL3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_IL3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_IL3->Location = System::Drawing::Point(556, 324);
			this->labelTrial1_L_IL3->Name = L"labelTrial1_L_IL3";
			this->labelTrial1_L_IL3->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_IL3->TabIndex = 330;
			// 
			// labelTrial1_L_IL2
			// 
			this->labelTrial1_L_IL2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_IL2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_IL2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_IL2->Location = System::Drawing::Point(421, 324);
			this->labelTrial1_L_IL2->Name = L"labelTrial1_L_IL2";
			this->labelTrial1_L_IL2->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_IL2->TabIndex = 329;
			// 
			// labelTrial1_L_IL1
			// 
			this->labelTrial1_L_IL1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_IL1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_IL1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_IL1->Location = System::Drawing::Point(293, 322);
			this->labelTrial1_L_IL1->Name = L"labelTrial1_L_IL1";
			this->labelTrial1_L_IL1->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_IL1->TabIndex = 328;
			// 
			// textBoxTrial1_R_R6
			// 
			this->textBoxTrial1_R_R6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_R_R6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_R_R6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_R_R6->Location = System::Drawing::Point(947, 236);
			this->textBoxTrial1_R_R6->Name = L"textBoxTrial1_R_R6";
			this->textBoxTrial1_R_R6->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_R_R6->TabIndex = 327;
			// 
			// textBoxTrial1_R_R5
			// 
			this->textBoxTrial1_R_R5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_R_R5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_R_R5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_R_R5->Location = System::Drawing::Point(819, 236);
			this->textBoxTrial1_R_R5->Name = L"textBoxTrial1_R_R5";
			this->textBoxTrial1_R_R5->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_R_R5->TabIndex = 326;
			// 
			// textBoxTrial1_R_R4
			// 
			this->textBoxTrial1_R_R4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_R_R4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_R_R4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_R_R4->Location = System::Drawing::Point(686, 236);
			this->textBoxTrial1_R_R4->Name = L"textBoxTrial1_R_R4";
			this->textBoxTrial1_R_R4->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_R_R4->TabIndex = 325;
			// 
			// textBoxTrial1_R_R3
			// 
			this->textBoxTrial1_R_R3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_R_R3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_R_R3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_R_R3->Location = System::Drawing::Point(556, 236);
			this->textBoxTrial1_R_R3->Name = L"textBoxTrial1_R_R3";
			this->textBoxTrial1_R_R3->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_R_R3->TabIndex = 324;
			// 
			// textBoxTrial1_R_R2
			// 
			this->textBoxTrial1_R_R2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_R_R2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_R_R2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_R_R2->Location = System::Drawing::Point(421, 236);
			this->textBoxTrial1_R_R2->Name = L"textBoxTrial1_R_R2";
			this->textBoxTrial1_R_R2->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_R_R2->TabIndex = 323;
			// 
			// textBoxTrial1_R_R1
			// 
			this->textBoxTrial1_R_R1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_R_R1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_R_R1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_R_R1->Location = System::Drawing::Point(293, 234);
			this->textBoxTrial1_R_R1->Name = L"textBoxTrial1_R_R1";
			this->textBoxTrial1_R_R1->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_R_R1->TabIndex = 322;
			// 
			// labelTrial1_R_IR6
			// 
			this->labelTrial1_R_IR6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_IR6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_IR6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_IR6->Location = System::Drawing::Point(947, 193);
			this->labelTrial1_R_IR6->Name = L"labelTrial1_R_IR6";
			this->labelTrial1_R_IR6->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_IR6->TabIndex = 321;
			// 
			// labelTrial1_R_IR5
			// 
			this->labelTrial1_R_IR5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_IR5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_IR5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_IR5->Location = System::Drawing::Point(819, 193);
			this->labelTrial1_R_IR5->Name = L"labelTrial1_R_IR5";
			this->labelTrial1_R_IR5->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_IR5->TabIndex = 320;
			// 
			// labelTrial1_R_IR4
			// 
			this->labelTrial1_R_IR4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_IR4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_IR4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_IR4->Location = System::Drawing::Point(686, 193);
			this->labelTrial1_R_IR4->Name = L"labelTrial1_R_IR4";
			this->labelTrial1_R_IR4->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_IR4->TabIndex = 319;
			// 
			// labelTrial1_R_IR3
			// 
			this->labelTrial1_R_IR3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_IR3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_IR3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_IR3->Location = System::Drawing::Point(556, 193);
			this->labelTrial1_R_IR3->Name = L"labelTrial1_R_IR3";
			this->labelTrial1_R_IR3->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_IR3->TabIndex = 318;
			// 
			// labelTrial1_R_IR2
			// 
			this->labelTrial1_R_IR2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_IR2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_IR2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_IR2->Location = System::Drawing::Point(421, 193);
			this->labelTrial1_R_IR2->Name = L"labelTrial1_R_IR2";
			this->labelTrial1_R_IR2->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_IR2->TabIndex = 317;
			// 
			// labelTrial1_R_IR1
			// 
			this->labelTrial1_R_IR1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_IR1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_IR1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_IR1->Location = System::Drawing::Point(293, 191);
			this->labelTrial1_R_IR1->Name = L"labelTrial1_R_IR1";
			this->labelTrial1_R_IR1->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_IR1->TabIndex = 316;
			// 
			// textBoxTrial1_F_6
			// 
			this->textBoxTrial1_F_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_F_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_F_6->Location = System::Drawing::Point(947, 103);
			this->textBoxTrial1_F_6->Name = L"textBoxTrial1_F_6";
			this->textBoxTrial1_F_6->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_F_6->TabIndex = 315;
			// 
			// textBoxTrial1_F_5
			// 
			this->textBoxTrial1_F_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_F_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_F_5->Location = System::Drawing::Point(819, 103);
			this->textBoxTrial1_F_5->Name = L"textBoxTrial1_F_5";
			this->textBoxTrial1_F_5->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_F_5->TabIndex = 314;
			// 
			// textBoxTrial1_F_4
			// 
			this->textBoxTrial1_F_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_F_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_F_4->Location = System::Drawing::Point(686, 103);
			this->textBoxTrial1_F_4->Name = L"textBoxTrial1_F_4";
			this->textBoxTrial1_F_4->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_F_4->TabIndex = 313;
			// 
			// textBoxTrial1_F_3
			// 
			this->textBoxTrial1_F_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_F_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_F_3->Location = System::Drawing::Point(556, 103);
			this->textBoxTrial1_F_3->Name = L"textBoxTrial1_F_3";
			this->textBoxTrial1_F_3->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_F_3->TabIndex = 312;
			// 
			// textBoxTrial1_F_2
			// 
			this->textBoxTrial1_F_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_F_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_F_2->Location = System::Drawing::Point(421, 103);
			this->textBoxTrial1_F_2->Name = L"textBoxTrial1_F_2";
			this->textBoxTrial1_F_2->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_F_2->TabIndex = 311;
			// 
			// textBoxTrial1_F_1
			// 
			this->textBoxTrial1_F_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial1_F_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial1_F_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial1_F_1->Location = System::Drawing::Point(293, 101);
			this->textBoxTrial1_F_1->Name = L"textBoxTrial1_F_1";
			this->textBoxTrial1_F_1->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial1_F_1->TabIndex = 310;
			// 
			// labelTrial1_R_Ur6
			// 
			this->labelTrial1_R_Ur6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur6->Location = System::Drawing::Point(947, 150);
			this->labelTrial1_R_Ur6->Name = L"labelTrial1_R_Ur6";
			this->labelTrial1_R_Ur6->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur6->TabIndex = 307;
			this->labelTrial1_R_Ur6->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::labelTrial1_R_Ur6_Click);
			// 
			// labelTrial1_R_Ur5
			// 
			this->labelTrial1_R_Ur5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur5->Location = System::Drawing::Point(819, 150);
			this->labelTrial1_R_Ur5->Name = L"labelTrial1_R_Ur5";
			this->labelTrial1_R_Ur5->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur5->TabIndex = 305;
			this->labelTrial1_R_Ur5->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::labelTrial1_R_Ur5_Click);
			// 
			// labelTrial1_R_Ur4
			// 
			this->labelTrial1_R_Ur4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur4->Location = System::Drawing::Point(686, 150);
			this->labelTrial1_R_Ur4->Name = L"labelTrial1_R_Ur4";
			this->labelTrial1_R_Ur4->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur4->TabIndex = 303;
			this->labelTrial1_R_Ur4->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::labelTrial1_R_Ur4_Click);
			// 
			// labelTrial1_R_Ur3
			// 
			this->labelTrial1_R_Ur3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur3->Location = System::Drawing::Point(556, 150);
			this->labelTrial1_R_Ur3->Name = L"labelTrial1_R_Ur3";
			this->labelTrial1_R_Ur3->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur3->TabIndex = 301;
			this->labelTrial1_R_Ur3->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::labelTrial1_R_Ur3_Click);
			// 
			// labelTrial1_R_Ur2
			// 
			this->labelTrial1_R_Ur2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur2->Location = System::Drawing::Point(421, 150);
			this->labelTrial1_R_Ur2->Name = L"labelTrial1_R_Ur2";
			this->labelTrial1_R_Ur2->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur2->TabIndex = 299;
			this->labelTrial1_R_Ur2->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::labelTrial1_R_Ur2_Click);
			// 
			// labelTrial1_R_Ur1
			// 
			this->labelTrial1_R_Ur1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur1->Location = System::Drawing::Point(293, 148);
			this->labelTrial1_R_Ur1->Name = L"labelTrial1_R_Ur1";
			this->labelTrial1_R_Ur1->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_R_Ur1->TabIndex = 296;
			this->labelTrial1_R_Ur1->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::labelTrial1_R_Ur1_Click);
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(83, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 25);
			this->label4->TabIndex = 295;
			this->label4->Text = L"Ur（Mv）";
			this->label4->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::label4_Click);
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(32, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 25);
			this->label3->TabIndex = 294;
			this->label3->Text = L"频率F（KHz）";
			this->label3->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::label3_Click);
			// 
			// labelTrial1_C_Ur6
			// 
			this->labelTrial1_C_Ur6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur6->Location = System::Drawing::Point(947, 422);
			this->labelTrial1_C_Ur6->Name = L"labelTrial1_C_Ur6";
			this->labelTrial1_C_Ur6->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur6->TabIndex = 257;
			// 
			// labelTrial1_L_Ur6
			// 
			this->labelTrial1_L_Ur6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur6->Location = System::Drawing::Point(947, 283);
			this->labelTrial1_L_Ur6->Name = L"labelTrial1_L_Ur6";
			this->labelTrial1_L_Ur6->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur6->TabIndex = 255;
			// 
			// labelTrial1_C_Ur5
			// 
			this->labelTrial1_C_Ur5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur5->Location = System::Drawing::Point(819, 422);
			this->labelTrial1_C_Ur5->Name = L"labelTrial1_C_Ur5";
			this->labelTrial1_C_Ur5->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur5->TabIndex = 252;
			// 
			// labelTrial1_L_Ur5
			// 
			this->labelTrial1_L_Ur5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur5->Location = System::Drawing::Point(819, 283);
			this->labelTrial1_L_Ur5->Name = L"labelTrial1_L_Ur5";
			this->labelTrial1_L_Ur5->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur5->TabIndex = 250;
			// 
			// labelTrial1_C_Ur4
			// 
			this->labelTrial1_C_Ur4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur4->Location = System::Drawing::Point(686, 422);
			this->labelTrial1_C_Ur4->Name = L"labelTrial1_C_Ur4";
			this->labelTrial1_C_Ur4->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur4->TabIndex = 247;
			// 
			// labelTrial1_L_Ur4
			// 
			this->labelTrial1_L_Ur4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur4->Location = System::Drawing::Point(686, 283);
			this->labelTrial1_L_Ur4->Name = L"labelTrial1_L_Ur4";
			this->labelTrial1_L_Ur4->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur4->TabIndex = 245;
			// 
			// labelTrial1_C_Ur3
			// 
			this->labelTrial1_C_Ur3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur3->Location = System::Drawing::Point(556, 422);
			this->labelTrial1_C_Ur3->Name = L"labelTrial1_C_Ur3";
			this->labelTrial1_C_Ur3->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur3->TabIndex = 242;
			// 
			// labelTrial1_L_Ur3
			// 
			this->labelTrial1_L_Ur3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur3->Location = System::Drawing::Point(556, 283);
			this->labelTrial1_L_Ur3->Name = L"labelTrial1_L_Ur3";
			this->labelTrial1_L_Ur3->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur3->TabIndex = 240;
			// 
			// labelTrial1_C_Ur2
			// 
			this->labelTrial1_C_Ur2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur2->Location = System::Drawing::Point(421, 422);
			this->labelTrial1_C_Ur2->Name = L"labelTrial1_C_Ur2";
			this->labelTrial1_C_Ur2->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur2->TabIndex = 237;
			// 
			// labelTrial1_L_Ur2
			// 
			this->labelTrial1_L_Ur2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur2->Location = System::Drawing::Point(421, 283);
			this->labelTrial1_L_Ur2->Name = L"labelTrial1_L_Ur2";
			this->labelTrial1_L_Ur2->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur2->TabIndex = 235;
			// 
			// labelTrial1_C_Ur1
			// 
			this->labelTrial1_C_Ur1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_C_Ur1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_C_Ur1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_C_Ur1->Location = System::Drawing::Point(293, 420);
			this->labelTrial1_C_Ur1->Name = L"labelTrial1_C_Ur1";
			this->labelTrial1_C_Ur1->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_C_Ur1->TabIndex = 232;
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(87, 510);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(179, 25);
			this->label18->TabIndex = 231;
			this->label18->Text = L"XC=U/ IC（KΩ）";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(83, 464);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(179, 25);
			this->label19->TabIndex = 230;
			this->label19->Text = L"IC=Ur / r（mA）";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(83, 419);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(179, 25);
			this->label20->TabIndex = 229;
			this->label20->Text = L"Ur（mV）";
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(32, 419);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(31, 123);
			this->label21->TabIndex = 228;
			this->label21->Text = L"C";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_L_Ur1
			// 
			this->labelTrial1_L_Ur1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_L_Ur1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_L_Ur1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_L_Ur1->Location = System::Drawing::Point(293, 281);
			this->labelTrial1_L_Ur1->Name = L"labelTrial1_L_Ur1";
			this->labelTrial1_L_Ur1->Size = System::Drawing::Size(122, 25);
			this->labelTrial1_L_Ur1->TabIndex = 226;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(83, 360);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(179, 25);
			this->label13->TabIndex = 225;
			this->label13->Text = L"XL=U / IL（KΩ）";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(83, 324);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(179, 25);
			this->label14->TabIndex = 224;
			this->label14->Text = L"IL=Ur / r（mA）";
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(83, 281);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(179, 25);
			this->label15->TabIndex = 223;
			this->label15->Text = L"Ur（mV）";
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(32, 281);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 111);
			this->label16->TabIndex = 222;
			this->label16->Text = L"L";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(83, 236);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 25);
			this->label6->TabIndex = 219;
			this->label6->Text = L"R=U/ IR（KΩ）";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(85, 192);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 25);
			this->label5->TabIndex = 218;
			this->label5->Text = L"IR=Ur / r（mA）";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(32, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 113);
			this->label2->TabIndex = 217;
			this->label2->Text = L"R";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(449, 566);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(89, 20);
			this->label22->TabIndex = 216;
			this->label22->Text = L"请打分：";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->Location = System::Drawing::Point(726, 566);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(129, 20);
			this->label23->TabIndex = 215;
			this->label23->Text = L"本项目总分30";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(551, 563);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 214;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::textBoxTrial1Score_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBoxTrial2Score);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_2);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(17, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 1128);
			this->groupBox1->TabIndex = 202;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RLC元件阻抗特性的测定 实验内容2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(866, 1084);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 20);
			this->label8->TabIndex = 219;
			this->label8->Text = L"请打分：";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(1143, 1084);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(129, 20);
			this->label9->TabIndex = 218;
			this->label9->Text = L"本项目总分30";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(968, 1081);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 217;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::textBoxTrial2Score_TextChanged);
			// 
			// pictureBoxTrial2_2
			// 
			this->pictureBoxTrial2_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_2.Image")));
			this->pictureBoxTrial2_2->Location = System::Drawing::Point(58, 618);
			this->pictureBoxTrial2_2->Name = L"pictureBoxTrial2_2";
			this->pictureBoxTrial2_2->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial2_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_2->TabIndex = 2;
			this->pictureBoxTrial2_2->TabStop = false;
			// 
			// pictureBoxTrial2_1
			// 
			this->pictureBoxTrial2_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_1.Image")));
			this->pictureBoxTrial2_1->Location = System::Drawing::Point(58, 86);
			this->pictureBoxTrial2_1->Name = L"pictureBoxTrial2_1";
			this->pictureBoxTrial2_1->Size = System::Drawing::Size(605, 395);
			this->pictureBoxTrial2_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_1->TabIndex = 1;
			this->pictureBoxTrial2_1->TabStop = false;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(24, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(913, 29);
			this->label7->TabIndex = 0;
			this->label7->Text = L"    用双踪示波器观察在不同频率下各元件阻抗角的变化情况，并作记录。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_φ1);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_m1);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_n1);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_6);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_5);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_F_1);
			this->groupBox2->Controls->Add(this->chartTrial3);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->textBoxTrial3Score);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(33, 991);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 750);
			this->groupBox2->TabIndex = 203;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"RLC元件阻抗特性的测定 实验内容3";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::groupBox2_Enter);
			// 
			// textBoxTrial3_φ6
			// 
			this->textBoxTrial3_φ6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_φ6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_φ6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_φ6->Location = System::Drawing::Point(942, 173);
			this->textBoxTrial3_φ6->Name = L"textBoxTrial3_φ6";
			this->textBoxTrial3_φ6->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_φ6->TabIndex = 375;
			// 
			// textBoxTrial3_φ5
			// 
			this->textBoxTrial3_φ5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_φ5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_φ5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_φ5->Location = System::Drawing::Point(814, 173);
			this->textBoxTrial3_φ5->Name = L"textBoxTrial3_φ5";
			this->textBoxTrial3_φ5->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_φ5->TabIndex = 374;
			// 
			// textBoxTrial3_φ4
			// 
			this->textBoxTrial3_φ4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_φ4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_φ4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_φ4->Location = System::Drawing::Point(681, 173);
			this->textBoxTrial3_φ4->Name = L"textBoxTrial3_φ4";
			this->textBoxTrial3_φ4->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_φ4->TabIndex = 373;
			// 
			// textBoxTrial3_φ3
			// 
			this->textBoxTrial3_φ3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_φ3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_φ3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_φ3->Location = System::Drawing::Point(551, 173);
			this->textBoxTrial3_φ3->Name = L"textBoxTrial3_φ3";
			this->textBoxTrial3_φ3->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_φ3->TabIndex = 372;
			// 
			// textBoxTrial3_φ2
			// 
			this->textBoxTrial3_φ2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_φ2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_φ2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_φ2->Location = System::Drawing::Point(416, 173);
			this->textBoxTrial3_φ2->Name = L"textBoxTrial3_φ2";
			this->textBoxTrial3_φ2->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_φ2->TabIndex = 371;
			// 
			// textBoxTrial3_φ1
			// 
			this->textBoxTrial3_φ1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_φ1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_φ1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_φ1->Location = System::Drawing::Point(288, 171);
			this->textBoxTrial3_φ1->Name = L"textBoxTrial3_φ1";
			this->textBoxTrial3_φ1->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_φ1->TabIndex = 370;
			// 
			// textBoxTrial3_m6
			// 
			this->textBoxTrial3_m6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_m6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_m6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_m6->Location = System::Drawing::Point(943, 136);
			this->textBoxTrial3_m6->Name = L"textBoxTrial3_m6";
			this->textBoxTrial3_m6->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_m6->TabIndex = 369;
			// 
			// textBoxTrial3_m5
			// 
			this->textBoxTrial3_m5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_m5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_m5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_m5->Location = System::Drawing::Point(815, 136);
			this->textBoxTrial3_m5->Name = L"textBoxTrial3_m5";
			this->textBoxTrial3_m5->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_m5->TabIndex = 368;
			// 
			// textBoxTrial3_m4
			// 
			this->textBoxTrial3_m4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_m4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_m4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_m4->Location = System::Drawing::Point(682, 136);
			this->textBoxTrial3_m4->Name = L"textBoxTrial3_m4";
			this->textBoxTrial3_m4->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_m4->TabIndex = 367;
			// 
			// textBoxTrial3_m3
			// 
			this->textBoxTrial3_m3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_m3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_m3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_m3->Location = System::Drawing::Point(552, 136);
			this->textBoxTrial3_m3->Name = L"textBoxTrial3_m3";
			this->textBoxTrial3_m3->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_m3->TabIndex = 366;
			// 
			// textBoxTrial3_m2
			// 
			this->textBoxTrial3_m2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_m2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_m2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_m2->Location = System::Drawing::Point(417, 136);
			this->textBoxTrial3_m2->Name = L"textBoxTrial3_m2";
			this->textBoxTrial3_m2->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_m2->TabIndex = 365;
			// 
			// textBoxTrial3_m1
			// 
			this->textBoxTrial3_m1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_m1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_m1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_m1->Location = System::Drawing::Point(289, 134);
			this->textBoxTrial3_m1->Name = L"textBoxTrial3_m1";
			this->textBoxTrial3_m1->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_m1->TabIndex = 364;
			// 
			// textBoxTrial3_n6
			// 
			this->textBoxTrial3_n6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_n6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_n6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_n6->Location = System::Drawing::Point(943, 97);
			this->textBoxTrial3_n6->Name = L"textBoxTrial3_n6";
			this->textBoxTrial3_n6->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_n6->TabIndex = 363;
			// 
			// textBoxTrial3_n5
			// 
			this->textBoxTrial3_n5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_n5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_n5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_n5->Location = System::Drawing::Point(815, 97);
			this->textBoxTrial3_n5->Name = L"textBoxTrial3_n5";
			this->textBoxTrial3_n5->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_n5->TabIndex = 362;
			// 
			// textBoxTrial3_n4
			// 
			this->textBoxTrial3_n4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_n4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_n4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_n4->Location = System::Drawing::Point(682, 97);
			this->textBoxTrial3_n4->Name = L"textBoxTrial3_n4";
			this->textBoxTrial3_n4->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_n4->TabIndex = 361;
			// 
			// textBoxTrial3_n3
			// 
			this->textBoxTrial3_n3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_n3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_n3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_n3->Location = System::Drawing::Point(552, 97);
			this->textBoxTrial3_n3->Name = L"textBoxTrial3_n3";
			this->textBoxTrial3_n3->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_n3->TabIndex = 360;
			// 
			// textBoxTrial3_n2
			// 
			this->textBoxTrial3_n2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_n2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_n2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_n2->Location = System::Drawing::Point(417, 97);
			this->textBoxTrial3_n2->Name = L"textBoxTrial3_n2";
			this->textBoxTrial3_n2->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_n2->TabIndex = 359;
			// 
			// textBoxTrial3_n1
			// 
			this->textBoxTrial3_n1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_n1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_n1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_n1->Location = System::Drawing::Point(289, 95);
			this->textBoxTrial3_n1->Name = L"textBoxTrial3_n1";
			this->textBoxTrial3_n1->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_n1->TabIndex = 358;
			// 
			// textBoxTrial3_F_6
			// 
			this->textBoxTrial3_F_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F_6->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F_6->Location = System::Drawing::Point(943, 53);
			this->textBoxTrial3_F_6->Name = L"textBoxTrial3_F_6";
			this->textBoxTrial3_F_6->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_F_6->TabIndex = 357;
			// 
			// textBoxTrial3_F_5
			// 
			this->textBoxTrial3_F_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F_5->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F_5->Location = System::Drawing::Point(815, 53);
			this->textBoxTrial3_F_5->Name = L"textBoxTrial3_F_5";
			this->textBoxTrial3_F_5->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_F_5->TabIndex = 356;
			// 
			// textBoxTrial3_F_4
			// 
			this->textBoxTrial3_F_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F_4->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F_4->Location = System::Drawing::Point(682, 53);
			this->textBoxTrial3_F_4->Name = L"textBoxTrial3_F_4";
			this->textBoxTrial3_F_4->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_F_4->TabIndex = 355;
			// 
			// textBoxTrial3_F_3
			// 
			this->textBoxTrial3_F_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F_3->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F_3->Location = System::Drawing::Point(552, 53);
			this->textBoxTrial3_F_3->Name = L"textBoxTrial3_F_3";
			this->textBoxTrial3_F_3->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_F_3->TabIndex = 354;
			// 
			// textBoxTrial3_F_2
			// 
			this->textBoxTrial3_F_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F_2->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F_2->Location = System::Drawing::Point(417, 53);
			this->textBoxTrial3_F_2->Name = L"textBoxTrial3_F_2";
			this->textBoxTrial3_F_2->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_F_2->TabIndex = 353;
			// 
			// textBoxTrial3_F_1
			// 
			this->textBoxTrial3_F_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBoxTrial3_F_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxTrial3_F_1->ForeColor = System::Drawing::Color::Black;
			this->textBoxTrial3_F_1->Location = System::Drawing::Point(289, 51);
			this->textBoxTrial3_F_1->Name = L"textBoxTrial3_F_1";
			this->textBoxTrial3_F_1->Size = System::Drawing::Size(122, 25);
			this->textBoxTrial3_F_1->TabIndex = 352;
			// 
			// chartTrial3
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartTrial3->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartTrial3->Legends->Add(legend2);
			this->chartTrial3->Location = System::Drawing::Point(283, 279);
			this->chartTrial3->Name = L"chartTrial3";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chartTrial3->Series->Add(series2);
			this->chartTrial3->Size = System::Drawing::Size(520, 406);
			this->chartTrial3->TabIndex = 257;
			this->chartTrial3->Text = L"chartTrial3";
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(23, 173);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(230, 25);
			this->label26->TabIndex = 226;
			this->label26->Text = L"φ（度）";
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(23, 136);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(230, 25);
			this->label27->TabIndex = 225;
			this->label27->Text = L"m（格）";
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(23, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 25);
			this->label1->TabIndex = 224;
			this->label1->Text = L"n（格）";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(22, 53);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(230, 25);
			this->label10->TabIndex = 223;
			this->label10->Text = L"频率F（KHz）";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(387, 715);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(89, 20);
			this->label17->TabIndex = 222;
			this->label17->Text = L"请打分：";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(664, 715);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(129, 20);
			this->label24->TabIndex = 221;
			this->label24->Text = L"本项目总分30";
			// 
			// textBoxTrial3Score
			// 
			this->textBoxTrial3Score->Location = System::Drawing::Point(489, 712);
			this->textBoxTrial3Score->Name = L"textBoxTrial3Score";
			this->textBoxTrial3Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial3Score->TabIndex = 220;
			this->textBoxTrial3Score->TextChanged += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::textBoxTrial3Score_TextChanged);
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(3, 1186);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 204;
			this->label105->Text = L"实验结论";
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(5, 1230);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(640, 73);
			this->groupBox14->TabIndex = 328;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"RLC元件阻抗特性的测定 实验总分";
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
			this->button1->Location = System::Drawing::Point(786, 1256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 329;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(893, 1256);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 330;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::button2_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &RLC元件阻抗特性的测定::printDocument1_BeginPrint);
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &RLC元件阻抗特性的测定::printDocument1_PrintPage);
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
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Location = System::Drawing::Point(30, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1332, 1764);
			this->panel1->TabIndex = 332;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RLC元件阻抗特性的测定::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox结论);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Controls->Add(this->label105);
			this->panel2->Controls->Add(this->groupBox14);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(30, 1818);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1336, 1313);
			this->panel2->TabIndex = 333;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RLC元件阻抗特性的测定::panel2_Paint);
			// 
			// textBox结论
			// 
			this->textBox结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->ForeColor = System::Drawing::Color::Black;
			this->textBox结论->Location = System::Drawing::Point(100, 1186);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1211, 25);
			this->textBox结论->TabIndex = 376;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label31);
			this->panel3->Controls->Add(this->label32);
			this->panel3->Controls->Add(this->pictureBoxTrial3_6);
			this->panel3->Controls->Add(this->pictureBoxTrial3_5);
			this->panel3->Controls->Add(this->label25);
			this->panel3->Controls->Add(this->label29);
			this->panel3->Controls->Add(this->pictureBoxTrial3_4);
			this->panel3->Controls->Add(this->pictureBoxTrial3_3);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->pictureBoxTrial3_2);
			this->panel3->Controls->Add(this->pictureBoxTrial3_1);
			this->panel3->Location = System::Drawing::Point(30, 3234);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1684, 1592);
			this->panel3->TabIndex = 334;
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(1113, 1540);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(122, 25);
			this->label31->TabIndex = 320;
			this->label31->Text = L"波形6";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(306, 1540);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(122, 25);
			this->label32->TabIndex = 319;
			this->label32->Text = L"波形5";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBoxTrial3_6
			// 
			this->pictureBoxTrial3_6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_6.Image")));
			this->pictureBoxTrial3_6->Location = System::Drawing::Point(865, 1063);
			this->pictureBoxTrial3_6->Name = L"pictureBoxTrial3_6";
			this->pictureBoxTrial3_6->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_6->TabIndex = 318;
			this->pictureBoxTrial3_6->TabStop = false;
			// 
			// pictureBoxTrial3_5
			// 
			this->pictureBoxTrial3_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_5.Image")));
			this->pictureBoxTrial3_5->Location = System::Drawing::Point(17, 1063);
			this->pictureBoxTrial3_5->Name = L"pictureBoxTrial3_5";
			this->pictureBoxTrial3_5->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_5->TabIndex = 317;
			this->pictureBoxTrial3_5->TabStop = false;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(1113, 1018);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(122, 25);
			this->label25->TabIndex = 316;
			this->label25->Text = L"波形4";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(306, 1018);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(122, 25);
			this->label29->TabIndex = 315;
			this->label29->Text = L"波形3";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBoxTrial3_4
			// 
			this->pictureBoxTrial3_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_4.Image")));
			this->pictureBoxTrial3_4->Location = System::Drawing::Point(865, 541);
			this->pictureBoxTrial3_4->Name = L"pictureBoxTrial3_4";
			this->pictureBoxTrial3_4->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_4->TabIndex = 314;
			this->pictureBoxTrial3_4->TabStop = false;
			// 
			// pictureBoxTrial3_3
			// 
			this->pictureBoxTrial3_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_3.Image")));
			this->pictureBoxTrial3_3->Location = System::Drawing::Point(17, 541);
			this->pictureBoxTrial3_3->Name = L"pictureBoxTrial3_3";
			this->pictureBoxTrial3_3->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_3->TabIndex = 313;
			this->pictureBoxTrial3_3->TabStop = false;
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(1113, 489);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(122, 25);
			this->label12->TabIndex = 312;
			this->label12->Text = L"波形2";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(306, 489);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(122, 25);
			this->label11->TabIndex = 311;
			this->label11->Text = L"波形1";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBoxTrial3_2
			// 
			this->pictureBoxTrial3_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_2.Image")));
			this->pictureBoxTrial3_2->Location = System::Drawing::Point(865, 12);
			this->pictureBoxTrial3_2->Name = L"pictureBoxTrial3_2";
			this->pictureBoxTrial3_2->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_2->TabIndex = 170;
			this->pictureBoxTrial3_2->TabStop = false;
			// 
			// pictureBoxTrial3_1
			// 
			this->pictureBoxTrial3_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_1.Image")));
			this->pictureBoxTrial3_1->Location = System::Drawing::Point(17, 12);
			this->pictureBoxTrial3_1->Name = L"pictureBoxTrial3_1";
			this->pictureBoxTrial3_1->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_1->TabIndex = 169;
			this->pictureBoxTrial3_1->TabStop = false;
			// 
			// RLC元件阻抗特性的测定
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1523, 743);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"RLC元件阻抗特性的测定";
			this->Text = L"RLC元件阻抗特性的测定";
			this->Load += gcnew System::EventHandler(this, &RLC元件阻抗特性的测定::RLC元件阻抗特性的测定_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial3))->EndInit();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
			 String ^SelectedArea = "";
			 void  Priview();
			 void Print();
		public:void LoadRLC元件阻抗特性的测定Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
private: System::Void RLC元件阻抗特性的测定_Load(System::Object^  sender, System::EventArgs^  e) {
	chartTrial3oad();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
private: System::Void textBoxTrial3Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Priview();

}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Bitmap ^ _NewBitmap;
	if (SelectedArea == "panel1") {
		_NewBitmap = gcnew  Bitmap(panel1->Width, panel1->Height);
		panel1->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel1->Width, panel1->Height));
		e->HasMorePages = true;
		SelectedArea = "panel2";
	}
	else if(SelectedArea == "panel2"){
		_NewBitmap = gcnew  Bitmap(panel2->Width, panel2->Height);
		panel2->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel2->Width, panel2->Height));
		e->HasMorePages = true;
		SelectedArea = "finally";
	}
	else {
			_NewBitmap = gcnew  Bitmap(panel3->Width, panel3->Height);
			panel3->DrawToBitmap(_NewBitmap, System::Drawing::Rectangle(0, 0, panel3->Width, panel3->Height));
			e->HasMorePages = false;
	}

	int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
	int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
	e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedArea = "panel1";
	Print();
	SelectedArea = "panel2";
	Print();
	SelectedArea = "panel3";
	Print();
}
private: System::Void textBoxTrial1_F_1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxTrial1_F_6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelTrial1_R_Ur6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxTrial1_F_5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelTrial1_R_Ur5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxTrial1_F_4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelTrial1_R_Ur4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxTrial1_F_3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelTrial1_R_Ur3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxTrial1_F_2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelTrial1_R_Ur2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelTrial1_R_Ur1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void printDocument1_BeginPrint(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
	SelectedArea = "panel1";
}
};
}
