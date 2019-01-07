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
	/// 三相交流电路电压电流的测量 摘要
	/// </summary>
	public ref class 三相交流电路电压电流的测量 : public System::Windows::Forms::Form
	{
	public:
		三相交流电路电压电流的测量(void)
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
		~三相交流电路电压电流的测量()
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
	private: System::Windows::Forms::Label^  labelTrial2_Line2_ICA;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_IBC;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_IAB;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_IC;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_IB;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_IA;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_UCA;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_UBC;
	private: System::Windows::Forms::Label^  labelTrial2_Line2_UAB;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_ICA;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_IBC;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_IAB;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_IC;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_IB;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_IA;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_UCA;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_UBC;
	private: System::Windows::Forms::Label^  labelTrial2_Line1_UAB;
	private: System::Windows::Forms::Label^  label149;
	private: System::Windows::Forms::Label^  label150;
	private: System::Windows::Forms::Label^  label151;
	private: System::Windows::Forms::Label^  label152;
	private: System::Windows::Forms::Label^  label153;
	private: System::Windows::Forms::Label^  label154;
	private: System::Windows::Forms::Label^  label155;
	private: System::Windows::Forms::Label^  label156;
	private: System::Windows::Forms::Label^  label157;
	private: System::Windows::Forms::Label^  label167;
	private: System::Windows::Forms::Label^  label168;
	private: System::Windows::Forms::Label^  label169;
	private: System::Windows::Forms::Label^  label170;
	private: System::Windows::Forms::Label^  label171;
	private: System::Windows::Forms::Label^  label172;
	private: System::Windows::Forms::Label^  label173;
	private: System::Windows::Forms::Label^  label174;
	private: System::Windows::Forms::Label^  label175;
	private: System::Windows::Forms::Label^  label179;
	private: System::Windows::Forms::Label^  label181;
	private: System::Windows::Forms::Label^  label183;
	private: System::Windows::Forms::Label^  label184;
	private: System::Windows::Forms::Label^  label185;
	private: System::Windows::Forms::Label^  label186;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UNO;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_IO;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UCO;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UBO;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UAO;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UCA;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UBC;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_UAB;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_IC;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_IB;
	private: System::Windows::Forms::Label^  labelTrial1_Line5_IA;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UNO;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_IO;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UCO;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UBO;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UAO;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UCA;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UBC;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_UAB;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_IC;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_IB;
	private: System::Windows::Forms::Label^  labelTrial1_Line4_IA;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UNO;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_IO;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UCO;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UBO;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UAO;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UCA;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UBC;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_UAB;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_IC;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_IB;
	private: System::Windows::Forms::Label^  labelTrial1_Line3_IA;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UNO;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_IO;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UCO;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UBO;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UAO;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UCA;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UBC;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_UAB;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_IC;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_IB;
	private: System::Windows::Forms::Label^  labelTrial1_Line2_IA;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UNO;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_IO;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UCO;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UBO;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UAO;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UCA;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UBC;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_UAB;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_IC;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_IB;
	private: System::Windows::Forms::Label^  labelTrial1_Line1_IA;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  labelTrial1_1_I110;
	private: System::Windows::Forms::Label^  labelTrial1_1_U110;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::TextBox^  textBoxTrial2Score;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::TextBox^  textBoxTrial1Score;
private: System::Windows::Forms::GroupBox^  groupBox14;
private: System::Windows::Forms::Label^  labelTotalGrade;
private: System::Windows::Forms::Button^  button1;

private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Panel^  panel1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(三相交流电路电压电流的测量::typeid));
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
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2Score = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_Line2_ICA = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_IBC = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_IAB = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_IC = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_IB = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_IA = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_UCA = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_UBC = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line2_UAB = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_ICA = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_IBC = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_IAB = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_IC = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_IB = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_IA = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_UCA = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_UBC = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_Line1_UAB = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1Score = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_Line5_UNO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line5_IO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line5_UCO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line5_UBO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line5_UAO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line5_UCA = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line5_UBC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line5_UAB = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line5_IC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line5_IB = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line5_IA = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_UNO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_IO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_UCO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_UBO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_UAO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_UCA = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_UBC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_UAB = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_IC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_IB = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line4_IA = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_UNO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_IO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_UCO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_UBO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_UAO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_UCA = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_UBC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_UAB = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_IC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_IB = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line3_IA = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_UNO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_IO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_UCO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_UBO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_UAO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_UCA = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_UBC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_UAB = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_IC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_IB = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line2_IA = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_UNO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_IO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_UCO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_UBO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_UAO = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_UCA = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_UBC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_UAB = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_IC = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_IB = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_Line1_IA = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_I110 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_1_U110 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox7->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox8->SuspendLayout();
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
			this->groupBox7->Location = System::Drawing::Point(14, 14);
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->label51);
			this->groupBox1->Controls->Add(this->textBoxTrial2Score);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_ICA);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_IBC);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_IAB);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_IC);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_IB);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_IA);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_UCA);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_UBC);
			this->groupBox1->Controls->Add(this->labelTrial2_Line2_UAB);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_ICA);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_IBC);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_IAB);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_IC);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_IB);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_IA);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_UCA);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_UBC);
			this->groupBox1->Controls->Add(this->labelTrial2_Line1_UAB);
			this->groupBox1->Controls->Add(this->label149);
			this->groupBox1->Controls->Add(this->label150);
			this->groupBox1->Controls->Add(this->label151);
			this->groupBox1->Controls->Add(this->label152);
			this->groupBox1->Controls->Add(this->label153);
			this->groupBox1->Controls->Add(this->label154);
			this->groupBox1->Controls->Add(this->label155);
			this->groupBox1->Controls->Add(this->label156);
			this->groupBox1->Controls->Add(this->label157);
			this->groupBox1->Controls->Add(this->label167);
			this->groupBox1->Controls->Add(this->label168);
			this->groupBox1->Controls->Add(this->label169);
			this->groupBox1->Controls->Add(this->label170);
			this->groupBox1->Controls->Add(this->label171);
			this->groupBox1->Controls->Add(this->label172);
			this->groupBox1->Controls->Add(this->label173);
			this->groupBox1->Controls->Add(this->label174);
			this->groupBox1->Controls->Add(this->label175);
			this->groupBox1->Controls->Add(this->label179);
			this->groupBox1->Controls->Add(this->label181);
			this->groupBox1->Controls->Add(this->label183);
			this->groupBox1->Controls->Add(this->label184);
			this->groupBox1->Controls->Add(this->label185);
			this->groupBox1->Controls->Add(this->label186);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(14, 771);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1375, 305);
			this->groupBox1->TabIndex = 204;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"三相交流电路电压电流的测量 实验内容2";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->Location = System::Drawing::Point(477, 264);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(89, 20);
			this->label50->TabIndex = 222;
			this->label50->Text = L"请打分：";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->Location = System::Drawing::Point(754, 264);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(129, 20);
			this->label51->TabIndex = 221;
			this->label51->Text = L"本项目总分30";
			// 
			// textBoxTrial2Score
			// 
			this->textBoxTrial2Score->Location = System::Drawing::Point(579, 261);
			this->textBoxTrial2Score->Name = L"textBoxTrial2Score";
			this->textBoxTrial2Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial2Score->TabIndex = 220;
			this->textBoxTrial2Score->TextChanged += gcnew System::EventHandler(this, &三相交流电路电压电流的测量::textBoxTrial2Score_TextChanged);
			// 
			// labelTrial2_Line2_ICA
			// 
			this->labelTrial2_Line2_ICA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_ICA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_ICA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_ICA->Location = System::Drawing::Point(1188, 196);
			this->labelTrial2_Line2_ICA->Name = L"labelTrial2_Line2_ICA";
			this->labelTrial2_Line2_ICA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_ICA->TabIndex = 98;
			// 
			// labelTrial2_Line2_IBC
			// 
			this->labelTrial2_Line2_IBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_IBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_IBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_IBC->Location = System::Drawing::Point(1095, 196);
			this->labelTrial2_Line2_IBC->Name = L"labelTrial2_Line2_IBC";
			this->labelTrial2_Line2_IBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_IBC->TabIndex = 96;
			// 
			// labelTrial2_Line2_IAB
			// 
			this->labelTrial2_Line2_IAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_IAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_IAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_IAB->Location = System::Drawing::Point(999, 196);
			this->labelTrial2_Line2_IAB->Name = L"labelTrial2_Line2_IAB";
			this->labelTrial2_Line2_IAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_IAB->TabIndex = 94;
			// 
			// labelTrial2_Line2_IC
			// 
			this->labelTrial2_Line2_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_IC->Location = System::Drawing::Point(906, 196);
			this->labelTrial2_Line2_IC->Name = L"labelTrial2_Line2_IC";
			this->labelTrial2_Line2_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_IC->TabIndex = 92;
			// 
			// labelTrial2_Line2_IB
			// 
			this->labelTrial2_Line2_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_IB->Location = System::Drawing::Point(810, 196);
			this->labelTrial2_Line2_IB->Name = L"labelTrial2_Line2_IB";
			this->labelTrial2_Line2_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_IB->TabIndex = 90;
			// 
			// labelTrial2_Line2_IA
			// 
			this->labelTrial2_Line2_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_IA->Location = System::Drawing::Point(717, 196);
			this->labelTrial2_Line2_IA->Name = L"labelTrial2_Line2_IA";
			this->labelTrial2_Line2_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_IA->TabIndex = 88;
			// 
			// labelTrial2_Line2_UCA
			// 
			this->labelTrial2_Line2_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_UCA->Location = System::Drawing::Point(621, 196);
			this->labelTrial2_Line2_UCA->Name = L"labelTrial2_Line2_UCA";
			this->labelTrial2_Line2_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_UCA->TabIndex = 86;
			// 
			// labelTrial2_Line2_UBC
			// 
			this->labelTrial2_Line2_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_UBC->Location = System::Drawing::Point(525, 196);
			this->labelTrial2_Line2_UBC->Name = L"labelTrial2_Line2_UBC";
			this->labelTrial2_Line2_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_UBC->TabIndex = 84;
			// 
			// labelTrial2_Line2_UAB
			// 
			this->labelTrial2_Line2_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line2_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line2_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line2_UAB->Location = System::Drawing::Point(429, 196);
			this->labelTrial2_Line2_UAB->Name = L"labelTrial2_Line2_UAB";
			this->labelTrial2_Line2_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line2_UAB->TabIndex = 82;
			// 
			// labelTrial2_Line1_ICA
			// 
			this->labelTrial2_Line1_ICA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_ICA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_ICA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_ICA->Location = System::Drawing::Point(1188, 153);
			this->labelTrial2_Line1_ICA->Name = L"labelTrial2_Line1_ICA";
			this->labelTrial2_Line1_ICA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_ICA->TabIndex = 76;
			// 
			// labelTrial2_Line1_IBC
			// 
			this->labelTrial2_Line1_IBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_IBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_IBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_IBC->Location = System::Drawing::Point(1095, 153);
			this->labelTrial2_Line1_IBC->Name = L"labelTrial2_Line1_IBC";
			this->labelTrial2_Line1_IBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_IBC->TabIndex = 74;
			// 
			// labelTrial2_Line1_IAB
			// 
			this->labelTrial2_Line1_IAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_IAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_IAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_IAB->Location = System::Drawing::Point(999, 153);
			this->labelTrial2_Line1_IAB->Name = L"labelTrial2_Line1_IAB";
			this->labelTrial2_Line1_IAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_IAB->TabIndex = 72;
			// 
			// labelTrial2_Line1_IC
			// 
			this->labelTrial2_Line1_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_IC->Location = System::Drawing::Point(906, 153);
			this->labelTrial2_Line1_IC->Name = L"labelTrial2_Line1_IC";
			this->labelTrial2_Line1_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_IC->TabIndex = 70;
			// 
			// labelTrial2_Line1_IB
			// 
			this->labelTrial2_Line1_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_IB->Location = System::Drawing::Point(810, 153);
			this->labelTrial2_Line1_IB->Name = L"labelTrial2_Line1_IB";
			this->labelTrial2_Line1_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_IB->TabIndex = 68;
			// 
			// labelTrial2_Line1_IA
			// 
			this->labelTrial2_Line1_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_IA->Location = System::Drawing::Point(717, 153);
			this->labelTrial2_Line1_IA->Name = L"labelTrial2_Line1_IA";
			this->labelTrial2_Line1_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_IA->TabIndex = 66;
			// 
			// labelTrial2_Line1_UCA
			// 
			this->labelTrial2_Line1_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_UCA->Location = System::Drawing::Point(621, 153);
			this->labelTrial2_Line1_UCA->Name = L"labelTrial2_Line1_UCA";
			this->labelTrial2_Line1_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_UCA->TabIndex = 64;
			// 
			// labelTrial2_Line1_UBC
			// 
			this->labelTrial2_Line1_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_UBC->Location = System::Drawing::Point(525, 153);
			this->labelTrial2_Line1_UBC->Name = L"labelTrial2_Line1_UBC";
			this->labelTrial2_Line1_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_UBC->TabIndex = 62;
			// 
			// labelTrial2_Line1_UAB
			// 
			this->labelTrial2_Line1_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_Line1_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_Line1_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_Line1_UAB->Location = System::Drawing::Point(429, 153);
			this->labelTrial2_Line1_UAB->Name = L"labelTrial2_Line1_UAB";
			this->labelTrial2_Line1_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial2_Line1_UAB->TabIndex = 60;
			// 
			// label149
			// 
			this->label149->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label149->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label149->ForeColor = System::Drawing::Color::Black;
			this->label149->Location = System::Drawing::Point(1191, 74);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(87, 60);
			this->label149->TabIndex = 54;
			this->label149->Text = L"ICA";
			// 
			// label150
			// 
			this->label150->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label150->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label150->ForeColor = System::Drawing::Color::Black;
			this->label150->Location = System::Drawing::Point(1095, 74);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(90, 60);
			this->label150->TabIndex = 53;
			this->label150->Text = L"IBC";
			// 
			// label151
			// 
			this->label151->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label151->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label151->ForeColor = System::Drawing::Color::Black;
			this->label151->Location = System::Drawing::Point(999, 74);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(90, 60);
			this->label151->TabIndex = 52;
			this->label151->Text = L"IAB";
			// 
			// label152
			// 
			this->label152->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label152->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label152->ForeColor = System::Drawing::Color::Black;
			this->label152->Location = System::Drawing::Point(906, 74);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(87, 60);
			this->label152->TabIndex = 51;
			this->label152->Text = L"IC";
			// 
			// label153
			// 
			this->label153->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label153->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label153->ForeColor = System::Drawing::Color::Black;
			this->label153->Location = System::Drawing::Point(810, 74);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(90, 60);
			this->label153->TabIndex = 50;
			this->label153->Text = L"IB";
			// 
			// label154
			// 
			this->label154->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label154->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label154->ForeColor = System::Drawing::Color::Black;
			this->label154->Location = System::Drawing::Point(714, 74);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(90, 60);
			this->label154->TabIndex = 49;
			this->label154->Text = L"IA";
			// 
			// label155
			// 
			this->label155->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label155->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label155->ForeColor = System::Drawing::Color::Black;
			this->label155->Location = System::Drawing::Point(621, 74);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(87, 60);
			this->label155->TabIndex = 48;
			this->label155->Text = L"UCA";
			// 
			// label156
			// 
			this->label156->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label156->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label156->ForeColor = System::Drawing::Color::Black;
			this->label156->Location = System::Drawing::Point(525, 74);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(90, 60);
			this->label156->TabIndex = 47;
			this->label156->Text = L"UBC";
			// 
			// label157
			// 
			this->label157->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label157->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label157->ForeColor = System::Drawing::Color::Black;
			this->label157->Location = System::Drawing::Point(429, 74);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(90, 60);
			this->label157->TabIndex = 46;
			this->label157->Text = L"UAB";
			// 
			// label167
			// 
			this->label167->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label167->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label167->ForeColor = System::Drawing::Color::Black;
			this->label167->Location = System::Drawing::Point(340, 196);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(73, 29);
			this->label167->TabIndex = 36;
			this->label167->Text = L"3";
			// 
			// label168
			// 
			this->label168->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label168->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label168->ForeColor = System::Drawing::Color::Black;
			this->label168->Location = System::Drawing::Point(252, 196);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(82, 29);
			this->label168->TabIndex = 35;
			this->label168->Text = L"2";
			// 
			// label169
			// 
			this->label169->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label169->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label169->ForeColor = System::Drawing::Color::Black;
			this->label169->Location = System::Drawing::Point(166, 197);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(80, 29);
			this->label169->TabIndex = 34;
			this->label169->Text = L"1";
			// 
			// label170
			// 
			this->label170->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label170->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label170->ForeColor = System::Drawing::Color::Black;
			this->label170->Location = System::Drawing::Point(340, 153);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(73, 29);
			this->label170->TabIndex = 33;
			this->label170->Text = L"3";
			// 
			// label171
			// 
			this->label171->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label171->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label171->ForeColor = System::Drawing::Color::Black;
			this->label171->Location = System::Drawing::Point(252, 153);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(82, 29);
			this->label171->TabIndex = 32;
			this->label171->Text = L"3";
			// 
			// label172
			// 
			this->label172->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label172->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label172->ForeColor = System::Drawing::Color::Black;
			this->label172->Location = System::Drawing::Point(166, 153);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(80, 29);
			this->label172->TabIndex = 31;
			this->label172->Text = L"3";
			// 
			// label173
			// 
			this->label173->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label173->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label173->ForeColor = System::Drawing::Color::Black;
			this->label173->Location = System::Drawing::Point(340, 74);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(73, 24);
			this->label173->TabIndex = 30;
			this->label173->Text = L"C-A相";
			// 
			// label174
			// 
			this->label174->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label174->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label174->ForeColor = System::Drawing::Color::Black;
			this->label174->Location = System::Drawing::Point(252, 74);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(82, 24);
			this->label174->TabIndex = 29;
			this->label174->Text = L"B-C相";
			// 
			// label175
			// 
			this->label175->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label175->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label175->ForeColor = System::Drawing::Color::Black;
			this->label175->Location = System::Drawing::Point(166, 74);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(80, 24);
			this->label175->TabIndex = 28;
			this->label175->Text = L"A-B相";
			// 
			// label179
			// 
			this->label179->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label179->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label179->ForeColor = System::Drawing::Color::Black;
			this->label179->Location = System::Drawing::Point(10, 198);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(138, 29);
			this->label179->TabIndex = 24;
			this->label179->Text = L"三相不平衡";
			// 
			// label181
			// 
			this->label181->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label181->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label181->ForeColor = System::Drawing::Color::Black;
			this->label181->Location = System::Drawing::Point(999, 42);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(279, 29);
			this->label181->TabIndex = 22;
			this->label181->Text = L"相电流（A）";
			// 
			// label183
			// 
			this->label183->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label183->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label183->ForeColor = System::Drawing::Color::Black;
			this->label183->Location = System::Drawing::Point(10, 153);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(138, 29);
			this->label183->TabIndex = 19;
			this->label183->Text = L"三相平衡";
			// 
			// label184
			// 
			this->label184->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label184->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label184->ForeColor = System::Drawing::Color::Black;
			this->label184->Location = System::Drawing::Point(714, 42);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(279, 29);
			this->label184->TabIndex = 18;
			this->label184->Text = L"线电流（A）";
			// 
			// label185
			// 
			this->label185->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label185->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label185->ForeColor = System::Drawing::Color::Black;
			this->label185->Location = System::Drawing::Point(429, 42);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(279, 29);
			this->label185->TabIndex = 17;
			this->label185->Text = L"线电压=相电压（V）";
			// 
			// label186
			// 
			this->label186->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label186->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label186->ForeColor = System::Drawing::Color::Black;
			this->label186->Location = System::Drawing::Point(166, 42);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(247, 29);
			this->label186->TabIndex = 16;
			this->label186->Text = L"开灯盏数";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label48);
			this->groupBox8->Controls->Add(this->label49);
			this->groupBox8->Controls->Add(this->textBoxTrial1Score);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UNO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_IO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UCO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UBO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UAO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UCA);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UBC);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_UAB);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_IC);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_IB);
			this->groupBox8->Controls->Add(this->labelTrial1_Line5_IA);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UNO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_IO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UCO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UBO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UAO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UCA);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UBC);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_UAB);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_IC);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_IB);
			this->groupBox8->Controls->Add(this->labelTrial1_Line4_IA);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UNO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_IO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UCO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UBO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UAO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UCA);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UBC);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_UAB);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_IC);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_IB);
			this->groupBox8->Controls->Add(this->labelTrial1_Line3_IA);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UNO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_IO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UCO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UBO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UAO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UCA);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UBC);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_UAB);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_IC);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_IB);
			this->groupBox8->Controls->Add(this->labelTrial1_Line2_IA);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UNO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_IO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UCO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UBO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UAO);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UCA);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UBC);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_UAB);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_IC);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_IB);
			this->groupBox8->Controls->Add(this->labelTrial1_Line1_IA);
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label32);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->label34);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label29);
			this->groupBox8->Controls->Add(this->label31);
			this->groupBox8->Controls->Add(this->label26);
			this->groupBox8->Controls->Add(this->label27);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->label24);
			this->groupBox8->Controls->Add(this->label25);
			this->groupBox8->Controls->Add(this->label20);
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->label19);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label44);
			this->groupBox8->Controls->Add(this->labelTrial1_1_I110);
			this->groupBox8->Controls->Add(this->labelTrial1_1_U110);
			this->groupBox8->Controls->Add(this->label45);
			this->groupBox8->Controls->Add(this->label46);
			this->groupBox8->Controls->Add(this->label47);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(14, 345);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1375, 408);
			this->groupBox8->TabIndex = 203;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"三相交流电路电压电流的测量 实验内容1";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->Location = System::Drawing::Point(477, 360);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(89, 20);
			this->label48->TabIndex = 222;
			this->label48->Text = L"请打分：";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->Location = System::Drawing::Point(754, 360);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(129, 20);
			this->label49->TabIndex = 221;
			this->label49->Text = L"本项目总分30";
			// 
			// textBoxTrial1Score
			// 
			this->textBoxTrial1Score->Location = System::Drawing::Point(579, 357);
			this->textBoxTrial1Score->Name = L"textBoxTrial1Score";
			this->textBoxTrial1Score->Size = System::Drawing::Size(152, 30);
			this->textBoxTrial1Score->TabIndex = 220;
			this->textBoxTrial1Score->TextChanged += gcnew System::EventHandler(this, &三相交流电路电压电流的测量::textBoxTrial1Score_TextChanged);
			// 
			// labelTrial1_Line5_UNO
			// 
			this->labelTrial1_Line5_UNO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UNO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UNO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UNO->Location = System::Drawing::Point(1236, 311);
			this->labelTrial1_Line5_UNO->Name = L"labelTrial1_Line5_UNO";
			this->labelTrial1_Line5_UNO->Size = System::Drawing::Size(98, 29);
			this->labelTrial1_Line5_UNO->TabIndex = 168;
			// 
			// labelTrial1_Line5_IO
			// 
			this->labelTrial1_Line5_IO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_IO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_IO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_IO->Location = System::Drawing::Point(1140, 311);
			this->labelTrial1_Line5_IO->Name = L"labelTrial1_Line5_IO";
			this->labelTrial1_Line5_IO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_IO->TabIndex = 166;
			// 
			// labelTrial1_Line5_UCO
			// 
			this->labelTrial1_Line5_UCO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UCO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UCO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UCO->Location = System::Drawing::Point(1047, 311);
			this->labelTrial1_Line5_UCO->Name = L"labelTrial1_Line5_UCO";
			this->labelTrial1_Line5_UCO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UCO->TabIndex = 164;
			// 
			// labelTrial1_Line5_UBO
			// 
			this->labelTrial1_Line5_UBO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UBO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UBO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UBO->Location = System::Drawing::Point(954, 311);
			this->labelTrial1_Line5_UBO->Name = L"labelTrial1_Line5_UBO";
			this->labelTrial1_Line5_UBO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UBO->TabIndex = 162;
			// 
			// labelTrial1_Line5_UAO
			// 
			this->labelTrial1_Line5_UAO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UAO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UAO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UAO->Location = System::Drawing::Point(858, 311);
			this->labelTrial1_Line5_UAO->Name = L"labelTrial1_Line5_UAO";
			this->labelTrial1_Line5_UAO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UAO->TabIndex = 160;
			// 
			// labelTrial1_Line5_UCA
			// 
			this->labelTrial1_Line5_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UCA->Location = System::Drawing::Point(765, 311);
			this->labelTrial1_Line5_UCA->Name = L"labelTrial1_Line5_UCA";
			this->labelTrial1_Line5_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UCA->TabIndex = 158;
			// 
			// labelTrial1_Line5_UBC
			// 
			this->labelTrial1_Line5_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UBC->Location = System::Drawing::Point(669, 311);
			this->labelTrial1_Line5_UBC->Name = L"labelTrial1_Line5_UBC";
			this->labelTrial1_Line5_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UBC->TabIndex = 156;
			// 
			// labelTrial1_Line5_UAB
			// 
			this->labelTrial1_Line5_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_UAB->Location = System::Drawing::Point(576, 311);
			this->labelTrial1_Line5_UAB->Name = L"labelTrial1_Line5_UAB";
			this->labelTrial1_Line5_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_UAB->TabIndex = 154;
			// 
			// labelTrial1_Line5_IC
			// 
			this->labelTrial1_Line5_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_IC->Location = System::Drawing::Point(480, 311);
			this->labelTrial1_Line5_IC->Name = L"labelTrial1_Line5_IC";
			this->labelTrial1_Line5_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_IC->TabIndex = 152;
			// 
			// labelTrial1_Line5_IB
			// 
			this->labelTrial1_Line5_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_IB->Location = System::Drawing::Point(384, 311);
			this->labelTrial1_Line5_IB->Name = L"labelTrial1_Line5_IB";
			this->labelTrial1_Line5_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_IB->TabIndex = 150;
			// 
			// labelTrial1_Line5_IA
			// 
			this->labelTrial1_Line5_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line5_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line5_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line5_IA->Location = System::Drawing::Point(288, 311);
			this->labelTrial1_Line5_IA->Name = L"labelTrial1_Line5_IA";
			this->labelTrial1_Line5_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line5_IA->TabIndex = 148;
			// 
			// labelTrial1_Line4_UNO
			// 
			this->labelTrial1_Line4_UNO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UNO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UNO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UNO->Location = System::Drawing::Point(1237, 270);
			this->labelTrial1_Line4_UNO->Name = L"labelTrial1_Line4_UNO";
			this->labelTrial1_Line4_UNO->Size = System::Drawing::Size(98, 29);
			this->labelTrial1_Line4_UNO->TabIndex = 146;
			// 
			// labelTrial1_Line4_IO
			// 
			this->labelTrial1_Line4_IO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_IO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_IO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_IO->Location = System::Drawing::Point(1141, 270);
			this->labelTrial1_Line4_IO->Name = L"labelTrial1_Line4_IO";
			this->labelTrial1_Line4_IO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_IO->TabIndex = 144;
			// 
			// labelTrial1_Line4_UCO
			// 
			this->labelTrial1_Line4_UCO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UCO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UCO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UCO->Location = System::Drawing::Point(1048, 270);
			this->labelTrial1_Line4_UCO->Name = L"labelTrial1_Line4_UCO";
			this->labelTrial1_Line4_UCO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UCO->TabIndex = 142;
			// 
			// labelTrial1_Line4_UBO
			// 
			this->labelTrial1_Line4_UBO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UBO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UBO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UBO->Location = System::Drawing::Point(955, 270);
			this->labelTrial1_Line4_UBO->Name = L"labelTrial1_Line4_UBO";
			this->labelTrial1_Line4_UBO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UBO->TabIndex = 140;
			// 
			// labelTrial1_Line4_UAO
			// 
			this->labelTrial1_Line4_UAO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UAO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UAO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UAO->Location = System::Drawing::Point(859, 270);
			this->labelTrial1_Line4_UAO->Name = L"labelTrial1_Line4_UAO";
			this->labelTrial1_Line4_UAO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UAO->TabIndex = 138;
			// 
			// labelTrial1_Line4_UCA
			// 
			this->labelTrial1_Line4_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UCA->Location = System::Drawing::Point(766, 270);
			this->labelTrial1_Line4_UCA->Name = L"labelTrial1_Line4_UCA";
			this->labelTrial1_Line4_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UCA->TabIndex = 136;
			// 
			// labelTrial1_Line4_UBC
			// 
			this->labelTrial1_Line4_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UBC->Location = System::Drawing::Point(670, 270);
			this->labelTrial1_Line4_UBC->Name = L"labelTrial1_Line4_UBC";
			this->labelTrial1_Line4_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UBC->TabIndex = 134;
			// 
			// labelTrial1_Line4_UAB
			// 
			this->labelTrial1_Line4_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_UAB->Location = System::Drawing::Point(577, 270);
			this->labelTrial1_Line4_UAB->Name = L"labelTrial1_Line4_UAB";
			this->labelTrial1_Line4_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_UAB->TabIndex = 132;
			// 
			// labelTrial1_Line4_IC
			// 
			this->labelTrial1_Line4_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_IC->Location = System::Drawing::Point(481, 270);
			this->labelTrial1_Line4_IC->Name = L"labelTrial1_Line4_IC";
			this->labelTrial1_Line4_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_IC->TabIndex = 130;
			// 
			// labelTrial1_Line4_IB
			// 
			this->labelTrial1_Line4_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_IB->Location = System::Drawing::Point(385, 270);
			this->labelTrial1_Line4_IB->Name = L"labelTrial1_Line4_IB";
			this->labelTrial1_Line4_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_IB->TabIndex = 128;
			// 
			// labelTrial1_Line4_IA
			// 
			this->labelTrial1_Line4_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line4_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line4_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line4_IA->Location = System::Drawing::Point(289, 270);
			this->labelTrial1_Line4_IA->Name = L"labelTrial1_Line4_IA";
			this->labelTrial1_Line4_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line4_IA->TabIndex = 126;
			// 
			// labelTrial1_Line3_UNO
			// 
			this->labelTrial1_Line3_UNO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UNO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UNO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UNO->Location = System::Drawing::Point(1237, 224);
			this->labelTrial1_Line3_UNO->Name = L"labelTrial1_Line3_UNO";
			this->labelTrial1_Line3_UNO->Size = System::Drawing::Size(98, 29);
			this->labelTrial1_Line3_UNO->TabIndex = 124;
			// 
			// labelTrial1_Line3_IO
			// 
			this->labelTrial1_Line3_IO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_IO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_IO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_IO->Location = System::Drawing::Point(1141, 224);
			this->labelTrial1_Line3_IO->Name = L"labelTrial1_Line3_IO";
			this->labelTrial1_Line3_IO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_IO->TabIndex = 122;
			// 
			// labelTrial1_Line3_UCO
			// 
			this->labelTrial1_Line3_UCO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UCO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UCO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UCO->Location = System::Drawing::Point(1048, 224);
			this->labelTrial1_Line3_UCO->Name = L"labelTrial1_Line3_UCO";
			this->labelTrial1_Line3_UCO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UCO->TabIndex = 120;
			// 
			// labelTrial1_Line3_UBO
			// 
			this->labelTrial1_Line3_UBO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UBO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UBO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UBO->Location = System::Drawing::Point(955, 224);
			this->labelTrial1_Line3_UBO->Name = L"labelTrial1_Line3_UBO";
			this->labelTrial1_Line3_UBO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UBO->TabIndex = 118;
			// 
			// labelTrial1_Line3_UAO
			// 
			this->labelTrial1_Line3_UAO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UAO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UAO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UAO->Location = System::Drawing::Point(859, 224);
			this->labelTrial1_Line3_UAO->Name = L"labelTrial1_Line3_UAO";
			this->labelTrial1_Line3_UAO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UAO->TabIndex = 116;
			// 
			// labelTrial1_Line3_UCA
			// 
			this->labelTrial1_Line3_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UCA->Location = System::Drawing::Point(766, 224);
			this->labelTrial1_Line3_UCA->Name = L"labelTrial1_Line3_UCA";
			this->labelTrial1_Line3_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UCA->TabIndex = 114;
			// 
			// labelTrial1_Line3_UBC
			// 
			this->labelTrial1_Line3_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UBC->Location = System::Drawing::Point(670, 224);
			this->labelTrial1_Line3_UBC->Name = L"labelTrial1_Line3_UBC";
			this->labelTrial1_Line3_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UBC->TabIndex = 112;
			// 
			// labelTrial1_Line3_UAB
			// 
			this->labelTrial1_Line3_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_UAB->Location = System::Drawing::Point(577, 224);
			this->labelTrial1_Line3_UAB->Name = L"labelTrial1_Line3_UAB";
			this->labelTrial1_Line3_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_UAB->TabIndex = 110;
			// 
			// labelTrial1_Line3_IC
			// 
			this->labelTrial1_Line3_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_IC->Location = System::Drawing::Point(481, 224);
			this->labelTrial1_Line3_IC->Name = L"labelTrial1_Line3_IC";
			this->labelTrial1_Line3_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_IC->TabIndex = 108;
			// 
			// labelTrial1_Line3_IB
			// 
			this->labelTrial1_Line3_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_IB->Location = System::Drawing::Point(385, 224);
			this->labelTrial1_Line3_IB->Name = L"labelTrial1_Line3_IB";
			this->labelTrial1_Line3_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_IB->TabIndex = 106;
			// 
			// labelTrial1_Line3_IA
			// 
			this->labelTrial1_Line3_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line3_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line3_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line3_IA->Location = System::Drawing::Point(289, 224);
			this->labelTrial1_Line3_IA->Name = L"labelTrial1_Line3_IA";
			this->labelTrial1_Line3_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line3_IA->TabIndex = 104;
			// 
			// labelTrial1_Line2_UNO
			// 
			this->labelTrial1_Line2_UNO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UNO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UNO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UNO->Location = System::Drawing::Point(1237, 186);
			this->labelTrial1_Line2_UNO->Name = L"labelTrial1_Line2_UNO";
			this->labelTrial1_Line2_UNO->Size = System::Drawing::Size(98, 29);
			this->labelTrial1_Line2_UNO->TabIndex = 102;
			// 
			// labelTrial1_Line2_IO
			// 
			this->labelTrial1_Line2_IO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_IO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_IO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_IO->Location = System::Drawing::Point(1141, 186);
			this->labelTrial1_Line2_IO->Name = L"labelTrial1_Line2_IO";
			this->labelTrial1_Line2_IO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_IO->TabIndex = 100;
			// 
			// labelTrial1_Line2_UCO
			// 
			this->labelTrial1_Line2_UCO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UCO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UCO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UCO->Location = System::Drawing::Point(1048, 186);
			this->labelTrial1_Line2_UCO->Name = L"labelTrial1_Line2_UCO";
			this->labelTrial1_Line2_UCO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UCO->TabIndex = 98;
			// 
			// labelTrial1_Line2_UBO
			// 
			this->labelTrial1_Line2_UBO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UBO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UBO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UBO->Location = System::Drawing::Point(955, 186);
			this->labelTrial1_Line2_UBO->Name = L"labelTrial1_Line2_UBO";
			this->labelTrial1_Line2_UBO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UBO->TabIndex = 96;
			// 
			// labelTrial1_Line2_UAO
			// 
			this->labelTrial1_Line2_UAO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UAO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UAO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UAO->Location = System::Drawing::Point(859, 186);
			this->labelTrial1_Line2_UAO->Name = L"labelTrial1_Line2_UAO";
			this->labelTrial1_Line2_UAO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UAO->TabIndex = 94;
			// 
			// labelTrial1_Line2_UCA
			// 
			this->labelTrial1_Line2_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UCA->Location = System::Drawing::Point(766, 186);
			this->labelTrial1_Line2_UCA->Name = L"labelTrial1_Line2_UCA";
			this->labelTrial1_Line2_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UCA->TabIndex = 92;
			// 
			// labelTrial1_Line2_UBC
			// 
			this->labelTrial1_Line2_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UBC->Location = System::Drawing::Point(670, 186);
			this->labelTrial1_Line2_UBC->Name = L"labelTrial1_Line2_UBC";
			this->labelTrial1_Line2_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UBC->TabIndex = 90;
			// 
			// labelTrial1_Line2_UAB
			// 
			this->labelTrial1_Line2_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_UAB->Location = System::Drawing::Point(577, 186);
			this->labelTrial1_Line2_UAB->Name = L"labelTrial1_Line2_UAB";
			this->labelTrial1_Line2_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_UAB->TabIndex = 88;
			// 
			// labelTrial1_Line2_IC
			// 
			this->labelTrial1_Line2_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_IC->Location = System::Drawing::Point(481, 186);
			this->labelTrial1_Line2_IC->Name = L"labelTrial1_Line2_IC";
			this->labelTrial1_Line2_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_IC->TabIndex = 86;
			// 
			// labelTrial1_Line2_IB
			// 
			this->labelTrial1_Line2_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_IB->Location = System::Drawing::Point(385, 186);
			this->labelTrial1_Line2_IB->Name = L"labelTrial1_Line2_IB";
			this->labelTrial1_Line2_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_IB->TabIndex = 84;
			// 
			// labelTrial1_Line2_IA
			// 
			this->labelTrial1_Line2_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line2_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line2_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line2_IA->Location = System::Drawing::Point(289, 186);
			this->labelTrial1_Line2_IA->Name = L"labelTrial1_Line2_IA";
			this->labelTrial1_Line2_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line2_IA->TabIndex = 82;
			// 
			// labelTrial1_Line1_UNO
			// 
			this->labelTrial1_Line1_UNO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UNO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UNO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UNO->Location = System::Drawing::Point(1237, 150);
			this->labelTrial1_Line1_UNO->Name = L"labelTrial1_Line1_UNO";
			this->labelTrial1_Line1_UNO->Size = System::Drawing::Size(98, 29);
			this->labelTrial1_Line1_UNO->TabIndex = 80;
			// 
			// labelTrial1_Line1_IO
			// 
			this->labelTrial1_Line1_IO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_IO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_IO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_IO->Location = System::Drawing::Point(1141, 150);
			this->labelTrial1_Line1_IO->Name = L"labelTrial1_Line1_IO";
			this->labelTrial1_Line1_IO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_IO->TabIndex = 78;
			// 
			// labelTrial1_Line1_UCO
			// 
			this->labelTrial1_Line1_UCO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UCO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UCO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UCO->Location = System::Drawing::Point(1048, 150);
			this->labelTrial1_Line1_UCO->Name = L"labelTrial1_Line1_UCO";
			this->labelTrial1_Line1_UCO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UCO->TabIndex = 76;
			// 
			// labelTrial1_Line1_UBO
			// 
			this->labelTrial1_Line1_UBO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UBO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UBO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UBO->Location = System::Drawing::Point(955, 150);
			this->labelTrial1_Line1_UBO->Name = L"labelTrial1_Line1_UBO";
			this->labelTrial1_Line1_UBO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UBO->TabIndex = 74;
			// 
			// labelTrial1_Line1_UAO
			// 
			this->labelTrial1_Line1_UAO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UAO->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UAO->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UAO->Location = System::Drawing::Point(859, 150);
			this->labelTrial1_Line1_UAO->Name = L"labelTrial1_Line1_UAO";
			this->labelTrial1_Line1_UAO->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UAO->TabIndex = 72;
			// 
			// labelTrial1_Line1_UCA
			// 
			this->labelTrial1_Line1_UCA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UCA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UCA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UCA->Location = System::Drawing::Point(766, 150);
			this->labelTrial1_Line1_UCA->Name = L"labelTrial1_Line1_UCA";
			this->labelTrial1_Line1_UCA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UCA->TabIndex = 70;
			// 
			// labelTrial1_Line1_UBC
			// 
			this->labelTrial1_Line1_UBC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UBC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UBC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UBC->Location = System::Drawing::Point(670, 150);
			this->labelTrial1_Line1_UBC->Name = L"labelTrial1_Line1_UBC";
			this->labelTrial1_Line1_UBC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UBC->TabIndex = 68;
			// 
			// labelTrial1_Line1_UAB
			// 
			this->labelTrial1_Line1_UAB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_UAB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_UAB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_UAB->Location = System::Drawing::Point(577, 150);
			this->labelTrial1_Line1_UAB->Name = L"labelTrial1_Line1_UAB";
			this->labelTrial1_Line1_UAB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_UAB->TabIndex = 66;
			// 
			// labelTrial1_Line1_IC
			// 
			this->labelTrial1_Line1_IC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_IC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_IC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_IC->Location = System::Drawing::Point(481, 150);
			this->labelTrial1_Line1_IC->Name = L"labelTrial1_Line1_IC";
			this->labelTrial1_Line1_IC->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_IC->TabIndex = 64;
			// 
			// labelTrial1_Line1_IB
			// 
			this->labelTrial1_Line1_IB->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_IB->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_IB->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_IB->Location = System::Drawing::Point(385, 150);
			this->labelTrial1_Line1_IB->Name = L"labelTrial1_Line1_IB";
			this->labelTrial1_Line1_IB->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_IB->TabIndex = 62;
			// 
			// labelTrial1_Line1_IA
			// 
			this->labelTrial1_Line1_IA->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Line1_IA->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Line1_IA->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Line1_IA->Location = System::Drawing::Point(289, 150);
			this->labelTrial1_Line1_IA->Name = L"labelTrial1_Line1_IA";
			this->labelTrial1_Line1_IA->Size = System::Drawing::Size(90, 29);
			this->labelTrial1_Line1_IA->TabIndex = 60;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(1051, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 60);
			this->label1->TabIndex = 54;
			this->label1->Text = L"UCO";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(955, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 60);
			this->label2->TabIndex = 53;
			this->label2->Text = L"UBO";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(859, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 60);
			this->label3->TabIndex = 52;
			this->label3->Text = L"UAO";
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(766, 71);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(87, 60);
			this->label32->TabIndex = 51;
			this->label32->Text = L"UCA";
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(670, 71);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(90, 60);
			this->label33->TabIndex = 50;
			this->label33->Text = L"UBC";
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(574, 71);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(90, 60);
			this->label34->TabIndex = 49;
			this->label34->Text = L"UAB";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(481, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 60);
			this->label4->TabIndex = 48;
			this->label4->Text = L"IC";
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(385, 71);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(90, 60);
			this->label29->TabIndex = 47;
			this->label29->Text = L"IB";
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(289, 71);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(90, 60);
			this->label31->TabIndex = 46;
			this->label31->Text = L"IA";
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(240, 309);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(28, 29);
			this->label26->TabIndex = 45;
			this->label26->Text = L"3";
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(206, 309);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(28, 29);
			this->label27->TabIndex = 44;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(172, 309);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 29);
			this->label5->TabIndex = 43;
			this->label5->Text = L"1";
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(240, 262);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(28, 29);
			this->label23->TabIndex = 42;
			this->label23->Text = L"3";
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(206, 262);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(28, 29);
			this->label24->TabIndex = 41;
			this->label24->Text = L"2";
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(172, 262);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(28, 29);
			this->label25->TabIndex = 40;
			this->label25->Text = L"1";
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(240, 225);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(28, 29);
			this->label20->TabIndex = 39;
			this->label20->Text = L"3";
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(206, 225);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(28, 29);
			this->label21->TabIndex = 38;
			this->label21->Text = L"2";
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(172, 225);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(28, 29);
			this->label22->TabIndex = 37;
			this->label22->Text = L"1";
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(240, 186);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 29);
			this->label17->TabIndex = 36;
			this->label17->Text = L"3";
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(206, 186);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 29);
			this->label18->TabIndex = 35;
			this->label18->Text = L"3";
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(172, 186);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(28, 29);
			this->label19->TabIndex = 34;
			this->label19->Text = L"3";
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(237, 150);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 29);
			this->label16->TabIndex = 33;
			this->label16->Text = L"3";
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(203, 150);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(28, 29);
			this->label15->TabIndex = 32;
			this->label15->Text = L"3";
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(169, 150);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 29);
			this->label14->TabIndex = 31;
			this->label14->Text = L"3";
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(237, 71);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 60);
			this->label13->TabIndex = 30;
			this->label13->Text = L"C\r\n相";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(203, 71);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 60);
			this->label12->TabIndex = 29;
			this->label12->Text = L"B\r\n相";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(169, 71);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 60);
			this->label11->TabIndex = 28;
			this->label11->Text = L"A\r\n相";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(13, 309);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(138, 29);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Y接B相断开";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(13, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 29);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Y接不平衡负载";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(13, 227);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 29);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Y接不平衡负载";
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(13, 188);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 29);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Y接平衡负载";
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(1237, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 92);
			this->label9->TabIndex = 23;
			this->label9->Text = L"中点电压\r\nUNO（V）";
			// 
			// label44
			// 
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(859, 39);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(279, 29);
			this->label44->TabIndex = 22;
			this->label44->Text = L"相电压（V）";
			// 
			// labelTrial1_1_I110
			// 
			this->labelTrial1_1_I110->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_I110->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_I110->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_I110->Location = System::Drawing::Point(1144, 39);
			this->labelTrial1_1_I110->Name = L"labelTrial1_1_I110";
			this->labelTrial1_1_I110->Size = System::Drawing::Size(87, 92);
			this->labelTrial1_1_I110->TabIndex = 21;
			this->labelTrial1_1_I110->Text = L"中性电流\r\nIO（A）";
			// 
			// labelTrial1_1_U110
			// 
			this->labelTrial1_1_U110->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_1_U110->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_1_U110->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_1_U110->Location = System::Drawing::Point(13, 150);
			this->labelTrial1_1_U110->Name = L"labelTrial1_1_U110";
			this->labelTrial1_1_U110->Size = System::Drawing::Size(138, 29);
			this->labelTrial1_1_U110->TabIndex = 19;
			this->labelTrial1_1_U110->Text = L"Y接平衡负载";
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(574, 39);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(279, 29);
			this->label45->TabIndex = 18;
			this->label45->Text = L"线电压（V）";
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(289, 39);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(279, 29);
			this->label46->TabIndex = 17;
			this->label46->Text = L"线电流（A）";
			// 
			// label47
			// 
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->ForeColor = System::Drawing::Color::Black;
			this->label47->Location = System::Drawing::Point(169, 39);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(105, 29);
			this->label47->TabIndex = 16;
			this->label47->Text = L"开灯盏数";
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->labelTotalGrade);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox14->Location = System::Drawing::Point(14, 1081);
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
			this->button1->Location = System::Drawing::Point(795, 1107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 339;
			this->button1->Text = L"保存成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &三相交流电路电压电流的测量::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(902, 1107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 36);
			this->button2->TabIndex = 340;
			this->button2->Text = L"预览";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &三相交流电路电压电流的测量::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox14);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(47, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1410, 1176);
			this->panel1->TabIndex = 342;
			// 
			// printDocument1
			// 
			this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &三相交流电路电压电流的测量::printDocument1_BeginPrint);
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &三相交流电路电压电流的测量::printDocument1_PrintPage);
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
			// 三相交流电路电压电流的测量
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1528, 758);
			this->Controls->Add(this->panel1);
			this->Name = L"三相交流电路电压电流的测量";
			this->Text = L"三相交流电路电压电流的测量";
			this->Load += gcnew System::EventHandler(this, &三相交流电路电压电流的测量::三相交流电路电压电流的测量_Load);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String ^SelectedArea = "";
		void  Priview();
		void Print();
		public:void Load三相交流电路电压电流的测量Data(string &filename);
			   string *fileName;
			   void SaveCorrectGrades();
			   void CalScores();
	private: System::Void 三相交流电路电压电流的测量_Load(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveCorrectGrades();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Priview();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Print();
}
private: System::Void textBoxTrial2Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void textBoxTrial1Score_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CalScores();
}
private: System::Void printDocument1_BeginPrint(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
	SelectedArea = "panel1";
}
};
}
