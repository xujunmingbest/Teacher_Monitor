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
	/// 元件伏安特性测试 摘要
	/// </summary>
	public ref class 元件伏安特性测试 : public System::Windows::Forms::Form
	{
	public:
		元件伏安特性测试(string &fileName)
		{
			InitializeComponent();
			Load元件伏安特性测试Data(fileName);
			chart线性_load();
			chart白炽_load();
			chart稳压_load();
			chart锗管_load();
			chart硅管_load();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((unsigned char)(134)));
			this->fileName = &fileName;
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		string *fileName = NULL;
		void Load元件伏安特性测试Data(string &filename);
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~元件伏安特性测试()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox锗管;
	protected:

	private: System::Windows::Forms::Label^  label锗管ZI10;
	private: System::Windows::Forms::Label^  label锗管ZI9;
	private: System::Windows::Forms::Label^  label锗管ZI8;
	private: System::Windows::Forms::Label^  label锗管ZI7;
	private: System::Windows::Forms::Label^  label锗管ZI6;
	private: System::Windows::Forms::Label^  label锗管ZI5;
	private: System::Windows::Forms::Label^  label锗管ZI4;
	private: System::Windows::Forms::Label^  label锗管ZI3;
	private: System::Windows::Forms::Label^  label锗管ZI2;
	private: System::Windows::Forms::Label^  label锗管ZI1;
	private: System::Windows::Forms::Label^  label锗管FI10;
	private: System::Windows::Forms::Label^  label锗管ZU10;
	private: System::Windows::Forms::Label^  label锗管FI9;
	private: System::Windows::Forms::Label^  label锗管ZU9;
	private: System::Windows::Forms::Label^  label锗管FI8;
	private: System::Windows::Forms::Label^  label锗管ZU8;
	private: System::Windows::Forms::Label^  label锗管FI7;
	private: System::Windows::Forms::Label^  label锗管ZU7;
	private: System::Windows::Forms::Label^  label锗管FI6;
	private: System::Windows::Forms::Label^  label锗管ZU6;
	private: System::Windows::Forms::Label^  label锗管FI5;
	private: System::Windows::Forms::Label^  label锗管ZU5;
	private: System::Windows::Forms::Label^  label锗管FI4;
	private: System::Windows::Forms::Label^  label锗管ZU4;
	private: System::Windows::Forms::Label^  label锗管FI3;
	private: System::Windows::Forms::Label^  label锗管ZU3;
	private: System::Windows::Forms::Label^  label锗管FI2;
	private: System::Windows::Forms::Label^  label锗管ZU2;
	private: System::Windows::Forms::Label^  label锗管FI1;
	private: System::Windows::Forms::Label^  label锗管ZU1;
	private: System::Windows::Forms::Label^  label锗管FU10;
	private: System::Windows::Forms::Label^  label锗管FSU10;
	private: System::Windows::Forms::Label^  label锗管FU9;
	private: System::Windows::Forms::Label^  label锗管FSU9;
	private: System::Windows::Forms::Label^  label锗管FU8;
	private: System::Windows::Forms::Label^  label锗管FSU8;
	private: System::Windows::Forms::Label^  label锗管FU7;
	private: System::Windows::Forms::Label^  label锗管FSU7;
	private: System::Windows::Forms::Label^  label锗管FU6;
	private: System::Windows::Forms::Label^  label锗管FSU6;
	private: System::Windows::Forms::Label^  label锗管FU5;
	private: System::Windows::Forms::Label^  label锗管FSU5;
	private: System::Windows::Forms::Label^  label锗管FU4;
	private: System::Windows::Forms::Label^  label锗管FSU4;
	private: System::Windows::Forms::Label^  label锗管FU3;
	private: System::Windows::Forms::Label^  label锗管FSU3;
	private: System::Windows::Forms::Label^  label锗管FU2;
	private: System::Windows::Forms::Label^  label锗管FSU2;
	private: System::Windows::Forms::Label^  label锗管FU1;
	private: System::Windows::Forms::Label^  label锗管FSU1;
	private: System::Windows::Forms::Label^  label锗管结论;

	private: System::Windows::Forms::Label^  label锗管ZSU10;
	private: System::Windows::Forms::Label^  label锗管ZSU9;
	private: System::Windows::Forms::Label^  label锗管ZSU8;
	private: System::Windows::Forms::Label^  label锗管ZSU7;
	private: System::Windows::Forms::Label^  label锗管ZSU6;
	private: System::Windows::Forms::Label^  label锗管ZSU5;
	private: System::Windows::Forms::Label^  label锗管ZSU4;
	private: System::Windows::Forms::Label^  label锗管ZSU3;
	private: System::Windows::Forms::Label^  label锗管ZSU2;
	private: System::Windows::Forms::Label^  label锗管ZSU1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::GroupBox^  groupBox白炽;

	private: System::Windows::Forms::Label^  label白炽I10;
	private: System::Windows::Forms::Label^  label白炽I9;
	private: System::Windows::Forms::Label^  label白炽I8;
	private: System::Windows::Forms::Label^  label白炽I7;
	private: System::Windows::Forms::Label^  label白炽I6;
	private: System::Windows::Forms::Label^  label白炽I5;
	private: System::Windows::Forms::Label^  label白炽I4;
	private: System::Windows::Forms::Label^  label白炽I3;
	private: System::Windows::Forms::Label^  label白炽I2;
	private: System::Windows::Forms::Label^  label白炽I1;
	private: System::Windows::Forms::Label^  label白炽U10;
	private: System::Windows::Forms::Label^  label白炽U9;
	private: System::Windows::Forms::Label^  label白炽U8;
	private: System::Windows::Forms::Label^  label白炽U7;
	private: System::Windows::Forms::Label^  label白炽U6;
	private: System::Windows::Forms::Label^  label白炽U5;
	private: System::Windows::Forms::Label^  label白炽U4;
	private: System::Windows::Forms::Label^  label白炽U3;
	private: System::Windows::Forms::Label^  label白炽U2;
	private: System::Windows::Forms::Label^  label白炽U1;
	private: System::Windows::Forms::Label^  label白炽结论;
	private: System::Windows::Forms::Label^  label白炽SU10;
	private: System::Windows::Forms::Label^  label白炽SU9;
	private: System::Windows::Forms::Label^  label白炽SU8;
	private: System::Windows::Forms::Label^  label白炽SU7;
	private: System::Windows::Forms::Label^  label白炽SU6;
	private: System::Windows::Forms::Label^  label白炽SU5;
	private: System::Windows::Forms::Label^  label白炽SU4;
	private: System::Windows::Forms::Label^  label白炽SU3;
	private: System::Windows::Forms::Label^  label白炽SU2;
	private: System::Windows::Forms::Label^  label白炽SU1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label线性结论;
	private: System::Windows::Forms::Label^  label线性I10;
	private: System::Windows::Forms::Label^  label线性I9;
	private: System::Windows::Forms::Label^  label线性I8;
	private: System::Windows::Forms::Label^  label线性I7;
	private: System::Windows::Forms::Label^  label线性I6;
	private: System::Windows::Forms::Label^  label线性I5;
	private: System::Windows::Forms::Label^  label线性I4;
	private: System::Windows::Forms::Label^  label线性I3;
	private: System::Windows::Forms::Label^  label线性I2;
	private: System::Windows::Forms::Label^  label线性I1;
	private: System::Windows::Forms::Label^  label线性U10;
	private: System::Windows::Forms::Label^  label线性U9;
	private: System::Windows::Forms::Label^  label线性U8;
	private: System::Windows::Forms::Label^  label线性U7;
	private: System::Windows::Forms::Label^  label线性U6;
	private: System::Windows::Forms::Label^  label线性U5;
	private: System::Windows::Forms::Label^  label线性U4;
	private: System::Windows::Forms::Label^  label线性U3;
	private: System::Windows::Forms::Label^  label线性U2;
	private: System::Windows::Forms::Label^  label线性U1;
	private: System::Windows::Forms::Label^  label线性SU10;
	private: System::Windows::Forms::Label^  label线性SU9;
	private: System::Windows::Forms::Label^  label线性SU8;
	private: System::Windows::Forms::Label^  label线性SU7;
	private: System::Windows::Forms::Label^  label线性SU6;
	private: System::Windows::Forms::Label^  label线性SU5;
	private: System::Windows::Forms::Label^  label线性SU4;
	private: System::Windows::Forms::Label^  label线性SU3;
	private: System::Windows::Forms::Label^  label线性SU2;
	private: System::Windows::Forms::Label^  label线性SU1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::GroupBox^  groupBox稳压;

private: System::Windows::Forms::Label^  label稳压FI10;
private: System::Windows::Forms::Label^  label稳压FI9;
private: System::Windows::Forms::Label^  label稳压FI8;
private: System::Windows::Forms::Label^  label稳压FI7;
private: System::Windows::Forms::Label^  label稳压FI6;
private: System::Windows::Forms::Label^  label稳压FI5;
private: System::Windows::Forms::Label^  label稳压FI4;
private: System::Windows::Forms::Label^  label稳压FI3;
private: System::Windows::Forms::Label^  label稳压FI2;
private: System::Windows::Forms::Label^  label稳压FI1;
private: System::Windows::Forms::Label^  label稳压FU10;
private: System::Windows::Forms::Label^  label稳压FU9;
private: System::Windows::Forms::Label^  label稳压FU8;
private: System::Windows::Forms::Label^  label稳压FU7;
private: System::Windows::Forms::Label^  label稳压FU6;
private: System::Windows::Forms::Label^  label稳压FU5;
private: System::Windows::Forms::Label^  label稳压FU4;
private: System::Windows::Forms::Label^  label稳压FU3;
private: System::Windows::Forms::Label^  label稳压FU2;
private: System::Windows::Forms::Label^  label稳压FU1;
private: System::Windows::Forms::Label^  label稳压ZI10;
private: System::Windows::Forms::Label^  label稳压ZI9;
private: System::Windows::Forms::Label^  label稳压ZI8;
private: System::Windows::Forms::Label^  label稳压ZI7;
private: System::Windows::Forms::Label^  label稳压ZI6;
private: System::Windows::Forms::Label^  label稳压ZI5;
private: System::Windows::Forms::Label^  label稳压ZI4;
private: System::Windows::Forms::Label^  label稳压ZI3;
private: System::Windows::Forms::Label^  label稳压ZI2;
private: System::Windows::Forms::Label^  label稳压ZI1;
private: System::Windows::Forms::Label^  label稳压ZU10;
private: System::Windows::Forms::Label^  label稳压ZU9;
private: System::Windows::Forms::Label^  label稳压ZU8;
private: System::Windows::Forms::Label^  label稳压ZU7;
private: System::Windows::Forms::Label^  label稳压ZU6;
private: System::Windows::Forms::Label^  label稳压ZU5;
private: System::Windows::Forms::Label^  label稳压ZU4;
private: System::Windows::Forms::Label^  label稳压ZU3;
private: System::Windows::Forms::Label^  label稳压ZU2;
private: System::Windows::Forms::Label^  label稳压ZU1;
private: System::Windows::Forms::Label^  label稳压FSU10;
private: System::Windows::Forms::Label^  label稳压FSU9;
private: System::Windows::Forms::Label^  label稳压FSU8;
private: System::Windows::Forms::Label^  label稳压FSU7;
private: System::Windows::Forms::Label^  label稳压FSU6;
private: System::Windows::Forms::Label^  label稳压FSU5;
private: System::Windows::Forms::Label^  label稳压FSU4;
private: System::Windows::Forms::Label^  label稳压FSU3;
private: System::Windows::Forms::Label^  label稳压FSU2;
private: System::Windows::Forms::Label^  label稳压FSU1;
private: System::Windows::Forms::Label^  label稳压结论;
private: System::Windows::Forms::Label^  label稳压ZSU10;
private: System::Windows::Forms::Label^  label稳压ZSU9;
private: System::Windows::Forms::Label^  label稳压ZSU8;
private: System::Windows::Forms::Label^  label稳压ZSU7;
private: System::Windows::Forms::Label^  label稳压ZSU6;
private: System::Windows::Forms::Label^  label稳压ZSU5;
private: System::Windows::Forms::Label^  label稳压ZSU4;
private: System::Windows::Forms::Label^  label稳压ZSU3;
private: System::Windows::Forms::Label^  label稳压ZSU2;
private: System::Windows::Forms::Label^  label稳压ZSU1;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::GroupBox^  groupBox硅管;

private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart硅管;

private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label1硅管FI10;
private: System::Windows::Forms::Label^  label1硅管FI9;
private: System::Windows::Forms::Label^  label1硅管FI8;
private: System::Windows::Forms::Label^  label1硅管FI7;
private: System::Windows::Forms::Label^  label1硅管FI6;
private: System::Windows::Forms::Label^  label1硅管FI5;
private: System::Windows::Forms::Label^  label1硅管FI4;
private: System::Windows::Forms::Label^  label1硅管FI3;
private: System::Windows::Forms::Label^  label1硅管FI2;
private: System::Windows::Forms::Label^  label1硅管FI1;
private: System::Windows::Forms::Label^  label1硅管FU10;
private: System::Windows::Forms::Label^  label1硅管FU9;
private: System::Windows::Forms::Label^  label1硅管FU8;
private: System::Windows::Forms::Label^  label1硅管FU7;
private: System::Windows::Forms::Label^  label1硅管FU6;
private: System::Windows::Forms::Label^  label1硅管FU5;
private: System::Windows::Forms::Label^  label1硅管FU4;
private: System::Windows::Forms::Label^  label1硅管FU3;
private: System::Windows::Forms::Label^  label1硅管FU2;
private: System::Windows::Forms::Label^  label1硅管FU1;
private: System::Windows::Forms::Label^  label硅管ZI10;
private: System::Windows::Forms::Label^  label硅管ZI9;
private: System::Windows::Forms::Label^  label硅管ZI8;
private: System::Windows::Forms::Label^  label硅管ZI7;
private: System::Windows::Forms::Label^  label硅管ZI6;
private: System::Windows::Forms::Label^  label硅管ZI5;
private: System::Windows::Forms::Label^  label硅管ZI4;
private: System::Windows::Forms::Label^  label硅管ZI3;
private: System::Windows::Forms::Label^  label硅管ZI2;
private: System::Windows::Forms::Label^  label硅管ZI1;
private: System::Windows::Forms::Label^  label硅管ZU10;
private: System::Windows::Forms::Label^  label硅管ZU9;
private: System::Windows::Forms::Label^  label硅管ZU8;
private: System::Windows::Forms::Label^  label硅管ZU7;
private: System::Windows::Forms::Label^  label硅管ZU6;
private: System::Windows::Forms::Label^  label硅管ZU5;
private: System::Windows::Forms::Label^  label硅管ZU4;
private: System::Windows::Forms::Label^  label硅管ZU3;
private: System::Windows::Forms::Label^  label硅管ZU2;
private: System::Windows::Forms::Label^  label硅管ZU1;
private: System::Windows::Forms::Label^  label硅管FSU10;
private: System::Windows::Forms::Label^  label硅管FSU9;
private: System::Windows::Forms::Label^  label硅管FSU8;
private: System::Windows::Forms::Label^  label硅管FSU7;
private: System::Windows::Forms::Label^  label硅管FSU6;
private: System::Windows::Forms::Label^  label硅管FSU5;
private: System::Windows::Forms::Label^  label硅管FSU4;
private: System::Windows::Forms::Label^  label硅管FSU3;
private: System::Windows::Forms::Label^  label硅管FSU2;
private: System::Windows::Forms::Label^  label硅管FSU1;
private: System::Windows::Forms::Label^  label硅管结论;
private: System::Windows::Forms::Label^  label硅管ZSU10;
private: System::Windows::Forms::Label^  label硅管ZSU9;
private: System::Windows::Forms::Label^  label硅管ZSU8;
private: System::Windows::Forms::Label^  label硅管ZSU7;
private: System::Windows::Forms::Label^  label硅管ZSU6;
private: System::Windows::Forms::Label^  label硅管ZSU5;
private: System::Windows::Forms::Label^  label硅管ZSU4;
private: System::Windows::Forms::Label^  label硅管ZSU3;
private: System::Windows::Forms::Label^  label硅管ZSU2;
private: System::Windows::Forms::Label^  label硅管ZSU1;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart锗管;

private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart白炽;


private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart线性;

private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  labelTotalGrade;

private: System::Windows::Forms::Label^  label27;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart稳压;

private: System::Windows::Forms::TextBox^  textBox5;

private: System::Windows::Forms::GroupBox^  groupBox7;
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
private: System::Windows::Forms::Label^  label215;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  textBoxteacher;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  labellab;




private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::GroupBox^  groupBox线性;
private: System::Windows::Forms::Button^  button1;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(元件伏安特性测试::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox线性 = (gcnew System::Windows::Forms::GroupBox());
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
			this->label215 = (gcnew System::Windows::Forms::Label());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart线性 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label线性结论 = (gcnew System::Windows::Forms::Label());
			this->label线性I10 = (gcnew System::Windows::Forms::Label());
			this->label线性I9 = (gcnew System::Windows::Forms::Label());
			this->label线性I8 = (gcnew System::Windows::Forms::Label());
			this->label线性I7 = (gcnew System::Windows::Forms::Label());
			this->label线性I6 = (gcnew System::Windows::Forms::Label());
			this->label线性I5 = (gcnew System::Windows::Forms::Label());
			this->label线性I4 = (gcnew System::Windows::Forms::Label());
			this->label线性I3 = (gcnew System::Windows::Forms::Label());
			this->label线性I2 = (gcnew System::Windows::Forms::Label());
			this->label线性I1 = (gcnew System::Windows::Forms::Label());
			this->label线性U10 = (gcnew System::Windows::Forms::Label());
			this->label线性U9 = (gcnew System::Windows::Forms::Label());
			this->label线性U8 = (gcnew System::Windows::Forms::Label());
			this->label线性U7 = (gcnew System::Windows::Forms::Label());
			this->label线性U6 = (gcnew System::Windows::Forms::Label());
			this->label线性U5 = (gcnew System::Windows::Forms::Label());
			this->label线性U4 = (gcnew System::Windows::Forms::Label());
			this->label线性U3 = (gcnew System::Windows::Forms::Label());
			this->label线性U2 = (gcnew System::Windows::Forms::Label());
			this->label线性U1 = (gcnew System::Windows::Forms::Label());
			this->label线性SU10 = (gcnew System::Windows::Forms::Label());
			this->label线性SU9 = (gcnew System::Windows::Forms::Label());
			this->label线性SU8 = (gcnew System::Windows::Forms::Label());
			this->label线性SU7 = (gcnew System::Windows::Forms::Label());
			this->label线性SU6 = (gcnew System::Windows::Forms::Label());
			this->label线性SU5 = (gcnew System::Windows::Forms::Label());
			this->label线性SU4 = (gcnew System::Windows::Forms::Label());
			this->label线性SU3 = (gcnew System::Windows::Forms::Label());
			this->label线性SU2 = (gcnew System::Windows::Forms::Label());
			this->label线性SU1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->groupBox稳压 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->chart稳压 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label稳压FI10 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI9 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI8 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI7 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI6 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI5 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI4 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI3 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI2 = (gcnew System::Windows::Forms::Label());
			this->label稳压FI1 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU10 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU9 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU8 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU7 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU6 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU5 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU4 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU3 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU2 = (gcnew System::Windows::Forms::Label());
			this->label稳压FU1 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI10 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI9 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI8 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI7 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI6 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI5 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI4 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI3 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI2 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZI1 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU10 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU9 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU8 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU7 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU6 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU5 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU4 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU3 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU2 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZU1 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU10 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU9 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU8 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU7 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU6 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU5 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU4 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU3 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU2 = (gcnew System::Windows::Forms::Label());
			this->label稳压FSU1 = (gcnew System::Windows::Forms::Label());
			this->label稳压结论 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU10 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU9 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU8 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU7 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU6 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU5 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU4 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU3 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU2 = (gcnew System::Windows::Forms::Label());
			this->label稳压ZSU1 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->groupBox硅管 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->chart硅管 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1硅管FI10 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI9 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI8 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI7 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI6 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI5 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI4 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI3 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI2 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FI1 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU10 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU9 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU8 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU7 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU6 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU5 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU4 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU3 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU2 = (gcnew System::Windows::Forms::Label());
			this->label1硅管FU1 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI10 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI9 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI8 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI7 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI6 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI5 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI4 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI3 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI2 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZI1 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU10 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU9 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU8 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU7 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU6 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU5 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU4 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU3 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU2 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZU1 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU10 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU9 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU8 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU7 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU6 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU5 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU4 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU3 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU2 = (gcnew System::Windows::Forms::Label());
			this->label硅管FSU1 = (gcnew System::Windows::Forms::Label());
			this->label硅管结论 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU10 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU9 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU8 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU7 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU6 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU5 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU4 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU3 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU2 = (gcnew System::Windows::Forms::Label());
			this->label硅管ZSU1 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox锗管 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->chart锗管 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label锗管ZI10 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI9 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI8 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI7 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI6 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI5 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI4 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI3 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI2 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZI1 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI10 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU10 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI9 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU9 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI8 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU8 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI7 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU7 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI6 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU6 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI5 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU5 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI4 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU4 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI3 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU3 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI2 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU2 = (gcnew System::Windows::Forms::Label());
			this->label锗管FI1 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZU1 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU10 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU10 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU9 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU9 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU8 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU8 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU7 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU7 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU6 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU6 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU5 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU5 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU4 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU4 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU3 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU3 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU2 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU2 = (gcnew System::Windows::Forms::Label());
			this->label锗管FU1 = (gcnew System::Windows::Forms::Label());
			this->label锗管FSU1 = (gcnew System::Windows::Forms::Label());
			this->label锗管结论 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU10 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU9 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU8 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU7 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU6 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU5 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU4 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU3 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU2 = (gcnew System::Windows::Forms::Label());
			this->label锗管ZSU1 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox白炽 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chart白炽 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label白炽I10 = (gcnew System::Windows::Forms::Label());
			this->label白炽I9 = (gcnew System::Windows::Forms::Label());
			this->label白炽I8 = (gcnew System::Windows::Forms::Label());
			this->label白炽I7 = (gcnew System::Windows::Forms::Label());
			this->label白炽I6 = (gcnew System::Windows::Forms::Label());
			this->label白炽I5 = (gcnew System::Windows::Forms::Label());
			this->label白炽I4 = (gcnew System::Windows::Forms::Label());
			this->label白炽I3 = (gcnew System::Windows::Forms::Label());
			this->label白炽I2 = (gcnew System::Windows::Forms::Label());
			this->label白炽I1 = (gcnew System::Windows::Forms::Label());
			this->label白炽U10 = (gcnew System::Windows::Forms::Label());
			this->label白炽U9 = (gcnew System::Windows::Forms::Label());
			this->label白炽U8 = (gcnew System::Windows::Forms::Label());
			this->label白炽U7 = (gcnew System::Windows::Forms::Label());
			this->label白炽U6 = (gcnew System::Windows::Forms::Label());
			this->label白炽U5 = (gcnew System::Windows::Forms::Label());
			this->label白炽U4 = (gcnew System::Windows::Forms::Label());
			this->label白炽U3 = (gcnew System::Windows::Forms::Label());
			this->label白炽U2 = (gcnew System::Windows::Forms::Label());
			this->label白炽U1 = (gcnew System::Windows::Forms::Label());
			this->label白炽结论 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU10 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU9 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU8 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU7 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU6 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU5 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU4 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU3 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU2 = (gcnew System::Windows::Forms::Label());
			this->label白炽SU1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1->SuspendLayout();
			this->groupBox线性->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart线性))->BeginInit();
			this->groupBox稳压->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart稳压))->BeginInit();
			this->groupBox硅管->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart硅管))->BeginInit();
			this->groupBox锗管->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart锗管))->BeginInit();
			this->groupBox白炽->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart白炽))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->groupBox线性);
			this->panel1->Controls->Add(this->label47);
			this->panel1->Controls->Add(this->label46);
			this->panel1->Controls->Add(this->label44);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->groupBox稳压);
			this->panel1->Controls->Add(this->groupBox硅管);
			this->panel1->Controls->Add(this->groupBox锗管);
			this->panel1->Controls->Add(this->groupBox白炽);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1767, 732);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &元件伏安特性测试::panel1_Click);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &元件伏安特性测试::panel1_Paint);
			// 
			// groupBox线性
			// 
			this->groupBox线性->Controls->Add(this->groupBox7);
			this->groupBox线性->Controls->Add(this->groupBox1);
			this->groupBox线性->Location = System::Drawing::Point(24, 29);
			this->groupBox线性->Name = L"groupBox线性";
			this->groupBox线性->Size = System::Drawing::Size(1524, 981);
			this->groupBox线性->TabIndex = 95;
			this->groupBox线性->TabStop = false;
			this->groupBox线性->Enter += gcnew System::EventHandler(this, &元件伏安特性测试::groupBox线性_Enter);
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
			this->groupBox7->Controls->Add(this->label215);
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
			this->groupBox7->Location = System::Drawing::Point(38, 24);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(909, 314);
			this->groupBox7->TabIndex = 195;
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
			// label215
			// 
			this->label215->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label215->Location = System::Drawing::Point(133, 26);
			this->label215->Name = L"label215";
			this->label215->Size = System::Drawing::Size(290, 23);
			this->label215->TabIndex = 191;
			this->label215->Text = L"元件伏安特性的测试";
			this->label215->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->label39->Click += gcnew System::EventHandler(this, &元件伏安特性测试::label39_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->chart线性);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label线性结论);
			this->groupBox1->Controls->Add(this->label线性I10);
			this->groupBox1->Controls->Add(this->label线性I9);
			this->groupBox1->Controls->Add(this->label线性I8);
			this->groupBox1->Controls->Add(this->label线性I7);
			this->groupBox1->Controls->Add(this->label线性I6);
			this->groupBox1->Controls->Add(this->label线性I5);
			this->groupBox1->Controls->Add(this->label线性I4);
			this->groupBox1->Controls->Add(this->label线性I3);
			this->groupBox1->Controls->Add(this->label线性I2);
			this->groupBox1->Controls->Add(this->label线性I1);
			this->groupBox1->Controls->Add(this->label线性U10);
			this->groupBox1->Controls->Add(this->label线性U9);
			this->groupBox1->Controls->Add(this->label线性U8);
			this->groupBox1->Controls->Add(this->label线性U7);
			this->groupBox1->Controls->Add(this->label线性U6);
			this->groupBox1->Controls->Add(this->label线性U5);
			this->groupBox1->Controls->Add(this->label线性U4);
			this->groupBox1->Controls->Add(this->label线性U3);
			this->groupBox1->Controls->Add(this->label线性U2);
			this->groupBox1->Controls->Add(this->label线性U1);
			this->groupBox1->Controls->Add(this->label线性SU10);
			this->groupBox1->Controls->Add(this->label线性SU9);
			this->groupBox1->Controls->Add(this->label线性SU8);
			this->groupBox1->Controls->Add(this->label线性SU7);
			this->groupBox1->Controls->Add(this->label线性SU6);
			this->groupBox1->Controls->Add(this->label线性SU5);
			this->groupBox1->Controls->Add(this->label线性SU4);
			this->groupBox1->Controls->Add(this->label线性SU3);
			this->groupBox1->Controls->Add(this->label线性SU2);
			this->groupBox1->Controls->Add(this->label线性SU1);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(38, 390);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(909, 546);
			this->groupBox1->TabIndex = 65;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"测定线性电阻器的伏安特性";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(653, 308);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 94;
			this->label2->Text = L"请打分：";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(653, 405);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 20);
			this->label1->TabIndex = 93;
			this->label1->Text = L"本实验总分20";
			// 
			// chart线性
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart线性->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart线性->Legends->Add(legend1);
			this->chart线性->Location = System::Drawing::Point(12, 231);
			this->chart线性->Name = L"chart线性";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart线性->Series->Add(series1);
			this->chart线性->Size = System::Drawing::Size(570, 300);
			this->chart线性->TabIndex = 92;
			this->chart线性->Text = L"chart线性";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(657, 354);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 28);
			this->textBox1->TabIndex = 91;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &元件伏安特性测试::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &元件伏安特性测试::textBox1_KeyPress);
			// 
			// label线性结论
			// 
			this->label线性结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性结论->Location = System::Drawing::Point(193, 36);
			this->label线性结论->Name = L"label线性结论";
			this->label线性结论->Size = System::Drawing::Size(672, 30);
			this->label线性结论->TabIndex = 90;
			this->label线性结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I10
			// 
			this->label线性I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I10->Location = System::Drawing::Point(803, 175);
			this->label线性I10->Name = L"label线性I10";
			this->label线性I10->Size = System::Drawing::Size(62, 23);
			this->label线性I10->TabIndex = 89;
			this->label线性I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I9
			// 
			this->label线性I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I9->Location = System::Drawing::Point(735, 175);
			this->label线性I9->Name = L"label线性I9";
			this->label线性I9->Size = System::Drawing::Size(62, 23);
			this->label线性I9->TabIndex = 88;
			this->label线性I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I8
			// 
			this->label线性I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I8->Location = System::Drawing::Point(667, 175);
			this->label线性I8->Name = L"label线性I8";
			this->label线性I8->Size = System::Drawing::Size(62, 23);
			this->label线性I8->TabIndex = 87;
			this->label线性I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I7
			// 
			this->label线性I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I7->Location = System::Drawing::Point(599, 176);
			this->label线性I7->Name = L"label线性I7";
			this->label线性I7->Size = System::Drawing::Size(62, 23);
			this->label线性I7->TabIndex = 86;
			this->label线性I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I6
			// 
			this->label线性I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I6->Location = System::Drawing::Point(531, 175);
			this->label线性I6->Name = L"label线性I6";
			this->label线性I6->Size = System::Drawing::Size(62, 23);
			this->label线性I6->TabIndex = 85;
			this->label线性I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I5
			// 
			this->label线性I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I5->Location = System::Drawing::Point(463, 175);
			this->label线性I5->Name = L"label线性I5";
			this->label线性I5->Size = System::Drawing::Size(62, 23);
			this->label线性I5->TabIndex = 84;
			this->label线性I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I4
			// 
			this->label线性I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I4->Location = System::Drawing::Point(395, 175);
			this->label线性I4->Name = L"label线性I4";
			this->label线性I4->Size = System::Drawing::Size(62, 23);
			this->label线性I4->TabIndex = 83;
			this->label线性I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I3
			// 
			this->label线性I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I3->Location = System::Drawing::Point(327, 176);
			this->label线性I3->Name = L"label线性I3";
			this->label线性I3->Size = System::Drawing::Size(62, 23);
			this->label线性I3->TabIndex = 82;
			this->label线性I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I2
			// 
			this->label线性I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I2->Location = System::Drawing::Point(259, 176);
			this->label线性I2->Name = L"label线性I2";
			this->label线性I2->Size = System::Drawing::Size(62, 23);
			this->label线性I2->TabIndex = 81;
			this->label线性I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性I1
			// 
			this->label线性I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性I1->Location = System::Drawing::Point(193, 176);
			this->label线性I1->Name = L"label线性I1";
			this->label线性I1->Size = System::Drawing::Size(62, 23);
			this->label线性I1->TabIndex = 80;
			this->label线性I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U10
			// 
			this->label线性U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U10->Location = System::Drawing::Point(803, 129);
			this->label线性U10->Name = L"label线性U10";
			this->label线性U10->Size = System::Drawing::Size(62, 23);
			this->label线性U10->TabIndex = 79;
			this->label线性U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U9
			// 
			this->label线性U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U9->Location = System::Drawing::Point(735, 129);
			this->label线性U9->Name = L"label线性U9";
			this->label线性U9->Size = System::Drawing::Size(62, 23);
			this->label线性U9->TabIndex = 78;
			this->label线性U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U8
			// 
			this->label线性U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U8->Location = System::Drawing::Point(667, 129);
			this->label线性U8->Name = L"label线性U8";
			this->label线性U8->Size = System::Drawing::Size(62, 23);
			this->label线性U8->TabIndex = 77;
			this->label线性U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U7
			// 
			this->label线性U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U7->Location = System::Drawing::Point(599, 130);
			this->label线性U7->Name = L"label线性U7";
			this->label线性U7->Size = System::Drawing::Size(62, 23);
			this->label线性U7->TabIndex = 76;
			this->label线性U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U6
			// 
			this->label线性U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U6->Location = System::Drawing::Point(531, 129);
			this->label线性U6->Name = L"label线性U6";
			this->label线性U6->Size = System::Drawing::Size(62, 23);
			this->label线性U6->TabIndex = 75;
			this->label线性U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U5
			// 
			this->label线性U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U5->Location = System::Drawing::Point(463, 129);
			this->label线性U5->Name = L"label线性U5";
			this->label线性U5->Size = System::Drawing::Size(62, 23);
			this->label线性U5->TabIndex = 74;
			this->label线性U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U4
			// 
			this->label线性U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U4->Location = System::Drawing::Point(395, 129);
			this->label线性U4->Name = L"label线性U4";
			this->label线性U4->Size = System::Drawing::Size(62, 23);
			this->label线性U4->TabIndex = 73;
			this->label线性U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U3
			// 
			this->label线性U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U3->Location = System::Drawing::Point(327, 130);
			this->label线性U3->Name = L"label线性U3";
			this->label线性U3->Size = System::Drawing::Size(62, 23);
			this->label线性U3->TabIndex = 72;
			this->label线性U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U2
			// 
			this->label线性U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U2->Location = System::Drawing::Point(259, 130);
			this->label线性U2->Name = L"label线性U2";
			this->label线性U2->Size = System::Drawing::Size(62, 23);
			this->label线性U2->TabIndex = 71;
			this->label线性U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性U1
			// 
			this->label线性U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性U1->Location = System::Drawing::Point(193, 130);
			this->label线性U1->Name = L"label线性U1";
			this->label线性U1->Size = System::Drawing::Size(62, 23);
			this->label线性U1->TabIndex = 70;
			this->label线性U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU10
			// 
			this->label线性SU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU10->Location = System::Drawing::Point(803, 83);
			this->label线性SU10->Name = L"label线性SU10";
			this->label线性SU10->Size = System::Drawing::Size(62, 23);
			this->label线性SU10->TabIndex = 69;
			this->label线性SU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU9
			// 
			this->label线性SU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU9->Location = System::Drawing::Point(735, 83);
			this->label线性SU9->Name = L"label线性SU9";
			this->label线性SU9->Size = System::Drawing::Size(62, 23);
			this->label线性SU9->TabIndex = 68;
			this->label线性SU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU8
			// 
			this->label线性SU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU8->Location = System::Drawing::Point(667, 83);
			this->label线性SU8->Name = L"label线性SU8";
			this->label线性SU8->Size = System::Drawing::Size(62, 23);
			this->label线性SU8->TabIndex = 67;
			this->label线性SU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU7
			// 
			this->label线性SU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU7->Location = System::Drawing::Point(599, 84);
			this->label线性SU7->Name = L"label线性SU7";
			this->label线性SU7->Size = System::Drawing::Size(62, 23);
			this->label线性SU7->TabIndex = 66;
			this->label线性SU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU6
			// 
			this->label线性SU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU6->Location = System::Drawing::Point(531, 83);
			this->label线性SU6->Name = L"label线性SU6";
			this->label线性SU6->Size = System::Drawing::Size(62, 23);
			this->label线性SU6->TabIndex = 65;
			this->label线性SU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU5
			// 
			this->label线性SU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU5->Location = System::Drawing::Point(463, 83);
			this->label线性SU5->Name = L"label线性SU5";
			this->label线性SU5->Size = System::Drawing::Size(62, 23);
			this->label线性SU5->TabIndex = 64;
			this->label线性SU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU4
			// 
			this->label线性SU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU4->Location = System::Drawing::Point(395, 83);
			this->label线性SU4->Name = L"label线性SU4";
			this->label线性SU4->Size = System::Drawing::Size(62, 23);
			this->label线性SU4->TabIndex = 63;
			this->label线性SU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU3
			// 
			this->label线性SU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU3->Location = System::Drawing::Point(327, 84);
			this->label线性SU3->Name = L"label线性SU3";
			this->label线性SU3->Size = System::Drawing::Size(62, 23);
			this->label线性SU3->TabIndex = 62;
			this->label线性SU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU2
			// 
			this->label线性SU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU2->Location = System::Drawing::Point(259, 84);
			this->label线性SU2->Name = L"label线性SU2";
			this->label线性SU2->Size = System::Drawing::Size(62, 23);
			this->label线性SU2->TabIndex = 61;
			this->label线性SU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label线性SU1
			// 
			this->label线性SU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label线性SU1->Location = System::Drawing::Point(193, 84);
			this->label线性SU1->Name = L"label线性SU1";
			this->label线性SU1->Size = System::Drawing::Size(62, 23);
			this->label线性SU1->TabIndex = 60;
			this->label线性SU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(8, 44);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(95, 23);
			this->label14->TabIndex = 58;
			this->label14->Text = L"实验结论";
			// 
			// label11
			// 
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(8, 175);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(176, 23);
			this->label11->TabIndex = 7;
			this->label11->Text = L"电流表读数I(mA)";
			// 
			// label12
			// 
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(6, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(176, 23);
			this->label12->TabIndex = 6;
			this->label12->Text = L"电压表读数Ur(V)";
			// 
			// label13
			// 
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(8, 84);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(145, 23);
			this->label13->TabIndex = 5;
			this->label13->Text = L"电源电压U(V)";
			// 
			// label47
			// 
			this->label47->BackColor = System::Drawing::Color::SkyBlue;
			this->label47->Location = System::Drawing::Point(-5, 2898);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(1552, 10);
			this->label47->TabIndex = 174;
			// 
			// label46
			// 
			this->label46->BackColor = System::Drawing::Color::SkyBlue;
			this->label46->Location = System::Drawing::Point(5, 2335);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(1552, 10);
			this->label46->TabIndex = 173;
			// 
			// label44
			// 
			this->label44->BackColor = System::Drawing::Color::SkyBlue;
			this->label44->Location = System::Drawing::Point(5, 1706);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(1543, 10);
			this->label44->TabIndex = 172;
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::SkyBlue;
			this->label29->Location = System::Drawing::Point(3, 1058);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(1543, 10);
			this->label29->TabIndex = 171;
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::SkyBlue;
			this->label27->Location = System::Drawing::Point(29, 3637);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(1543, 10);
			this->label27->TabIndex = 170;
			// 
			// groupBox稳压
			// 
			this->groupBox稳压->Controls->Add(this->button1);
			this->groupBox稳压->Controls->Add(this->button2);
			this->groupBox稳压->Controls->Add(this->button6);
			this->groupBox稳压->Controls->Add(this->label45);
			this->groupBox稳压->Controls->Add(this->label9);
			this->groupBox稳压->Controls->Add(this->label10);
			this->groupBox稳压->Controls->Add(this->groupBox5);
			this->groupBox稳压->Controls->Add(this->chart稳压);
			this->groupBox稳压->Controls->Add(this->textBox5);
			this->groupBox稳压->Controls->Add(this->label稳压FI10);
			this->groupBox稳压->Controls->Add(this->label稳压FI9);
			this->groupBox稳压->Controls->Add(this->label稳压FI8);
			this->groupBox稳压->Controls->Add(this->label稳压FI7);
			this->groupBox稳压->Controls->Add(this->label稳压FI6);
			this->groupBox稳压->Controls->Add(this->label稳压FI5);
			this->groupBox稳压->Controls->Add(this->label稳压FI4);
			this->groupBox稳压->Controls->Add(this->label稳压FI3);
			this->groupBox稳压->Controls->Add(this->label稳压FI2);
			this->groupBox稳压->Controls->Add(this->label稳压FI1);
			this->groupBox稳压->Controls->Add(this->label稳压FU10);
			this->groupBox稳压->Controls->Add(this->label稳压FU9);
			this->groupBox稳压->Controls->Add(this->label稳压FU8);
			this->groupBox稳压->Controls->Add(this->label稳压FU7);
			this->groupBox稳压->Controls->Add(this->label稳压FU6);
			this->groupBox稳压->Controls->Add(this->label稳压FU5);
			this->groupBox稳压->Controls->Add(this->label稳压FU4);
			this->groupBox稳压->Controls->Add(this->label稳压FU3);
			this->groupBox稳压->Controls->Add(this->label稳压FU2);
			this->groupBox稳压->Controls->Add(this->label稳压FU1);
			this->groupBox稳压->Controls->Add(this->label稳压ZI10);
			this->groupBox稳压->Controls->Add(this->label稳压ZI9);
			this->groupBox稳压->Controls->Add(this->label稳压ZI8);
			this->groupBox稳压->Controls->Add(this->label稳压ZI7);
			this->groupBox稳压->Controls->Add(this->label稳压ZI6);
			this->groupBox稳压->Controls->Add(this->label稳压ZI5);
			this->groupBox稳压->Controls->Add(this->label稳压ZI4);
			this->groupBox稳压->Controls->Add(this->label稳压ZI3);
			this->groupBox稳压->Controls->Add(this->label稳压ZI2);
			this->groupBox稳压->Controls->Add(this->label稳压ZI1);
			this->groupBox稳压->Controls->Add(this->label稳压ZU10);
			this->groupBox稳压->Controls->Add(this->label稳压ZU9);
			this->groupBox稳压->Controls->Add(this->label稳压ZU8);
			this->groupBox稳压->Controls->Add(this->label稳压ZU7);
			this->groupBox稳压->Controls->Add(this->label稳压ZU6);
			this->groupBox稳压->Controls->Add(this->label稳压ZU5);
			this->groupBox稳压->Controls->Add(this->label稳压ZU4);
			this->groupBox稳压->Controls->Add(this->label稳压ZU3);
			this->groupBox稳压->Controls->Add(this->label稳压ZU2);
			this->groupBox稳压->Controls->Add(this->label稳压ZU1);
			this->groupBox稳压->Controls->Add(this->label稳压FSU10);
			this->groupBox稳压->Controls->Add(this->label稳压FSU9);
			this->groupBox稳压->Controls->Add(this->label稳压FSU8);
			this->groupBox稳压->Controls->Add(this->label稳压FSU7);
			this->groupBox稳压->Controls->Add(this->label稳压FSU6);
			this->groupBox稳压->Controls->Add(this->label稳压FSU5);
			this->groupBox稳压->Controls->Add(this->label稳压FSU4);
			this->groupBox稳压->Controls->Add(this->label稳压FSU3);
			this->groupBox稳压->Controls->Add(this->label稳压FSU2);
			this->groupBox稳压->Controls->Add(this->label稳压FSU1);
			this->groupBox稳压->Controls->Add(this->label稳压结论);
			this->groupBox稳压->Controls->Add(this->label稳压ZSU10);
			this->groupBox稳压->Controls->Add(this->label稳压ZSU9);
			this->groupBox稳压->Controls->Add(this->label稳压ZSU8);
			this->groupBox稳压->Controls->Add(this->label稳压ZSU7);
			this->groupBox稳压->Controls->Add(this->label稳压ZSU6);
			this->groupBox稳压->Controls->Add(this->label稳压ZSU5);
			this->groupBox稳压->Controls->Add(this->label稳压ZSU4);
			this->groupBox稳压->Controls->Add(this->label稳压ZSU3);
			this->groupBox稳压->Controls->Add(this->label稳压ZSU2);
			this->groupBox稳压->Controls->Add(this->label稳压ZSU1);
			this->groupBox稳压->Controls->Add(this->label31);
			this->groupBox稳压->Controls->Add(this->label32);
			this->groupBox稳压->Controls->Add(this->label33);
			this->groupBox稳压->Controls->Add(this->label34);
			this->groupBox稳压->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox稳压->Location = System::Drawing::Point(12, 2967);
			this->groupBox稳压->Name = L"groupBox稳压";
			this->groupBox稳压->Size = System::Drawing::Size(1544, 657);
			this->groupBox稳压->TabIndex = 72;
			this->groupBox稳压->TabStop = false;
			this->groupBox稳压->Text = L"测定稳压二极管的伏安特性";
			this->groupBox稳压->Enter += gcnew System::EventHandler(this, &元件伏安特性测试::groupBox6_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1170, 594);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 37);
			this->button1->TabIndex = 207;
			this->button1->Text = L"保存学生成绩";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &元件伏安特性测试::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1403, 594);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 206;
			this->button2->Text = L"打印";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &元件伏安特性测试::button2_Click_1);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1322, 594);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 37);
			this->button6->TabIndex = 205;
			this->button6->Text = L"预览";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &元件伏安特性测试::button6_Click_1);
			// 
			// label45
			// 
			this->label45->BackColor = System::Drawing::Color::SkyBlue;
			this->label45->Location = System::Drawing::Point(0, 535);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(1560, 10);
			this->label45->TabIndex = 173;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(656, 296);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 20);
			this->label9->TabIndex = 169;
			this->label9->Text = L"请打分：";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(656, 393);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 20);
			this->label10->TabIndex = 168;
			this->label10->Text = L"本实验总分20";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->labelTotalGrade);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(296, 558);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(640, 73);
			this->groupBox5->TabIndex = 171;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"元件伏安特性实验总分";
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
			// chart稳压
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart稳压->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart稳压->Legends->Add(legend2);
			this->chart稳压->Location = System::Drawing::Point(15, 219);
			this->chart稳压->Name = L"chart稳压";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart稳压->Series->Add(series2);
			this->chart稳压->Size = System::Drawing::Size(570, 300);
			this->chart稳压->TabIndex = 167;
			this->chart稳压->Text = L"chart";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(660, 342);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 30);
			this->textBox5->TabIndex = 166;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &元件伏安特性测试::textBox5_TextChanged);
			// 
			// label稳压FI10
			// 
			this->label稳压FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI10->Location = System::Drawing::Point(1473, 174);
			this->label稳压FI10->Name = L"label稳压FI10";
			this->label稳压FI10->Size = System::Drawing::Size(62, 23);
			this->label稳压FI10->TabIndex = 161;
			this->label稳压FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI9
			// 
			this->label稳压FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI9->Location = System::Drawing::Point(1405, 174);
			this->label稳压FI9->Name = L"label稳压FI9";
			this->label稳压FI9->Size = System::Drawing::Size(62, 23);
			this->label稳压FI9->TabIndex = 160;
			this->label稳压FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI8
			// 
			this->label稳压FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI8->Location = System::Drawing::Point(1337, 174);
			this->label稳压FI8->Name = L"label稳压FI8";
			this->label稳压FI8->Size = System::Drawing::Size(62, 23);
			this->label稳压FI8->TabIndex = 159;
			this->label稳压FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI7
			// 
			this->label稳压FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI7->Location = System::Drawing::Point(1269, 175);
			this->label稳压FI7->Name = L"label稳压FI7";
			this->label稳压FI7->Size = System::Drawing::Size(62, 23);
			this->label稳压FI7->TabIndex = 158;
			this->label稳压FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI6
			// 
			this->label稳压FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI6->Location = System::Drawing::Point(1201, 174);
			this->label稳压FI6->Name = L"label稳压FI6";
			this->label稳压FI6->Size = System::Drawing::Size(62, 23);
			this->label稳压FI6->TabIndex = 157;
			this->label稳压FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI5
			// 
			this->label稳压FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI5->Location = System::Drawing::Point(1133, 174);
			this->label稳压FI5->Name = L"label稳压FI5";
			this->label稳压FI5->Size = System::Drawing::Size(62, 23);
			this->label稳压FI5->TabIndex = 156;
			this->label稳压FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI4
			// 
			this->label稳压FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI4->Location = System::Drawing::Point(1065, 174);
			this->label稳压FI4->Name = L"label稳压FI4";
			this->label稳压FI4->Size = System::Drawing::Size(62, 23);
			this->label稳压FI4->TabIndex = 155;
			this->label稳压FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI3
			// 
			this->label稳压FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI3->Location = System::Drawing::Point(997, 175);
			this->label稳压FI3->Name = L"label稳压FI3";
			this->label稳压FI3->Size = System::Drawing::Size(62, 23);
			this->label稳压FI3->TabIndex = 154;
			this->label稳压FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI2
			// 
			this->label稳压FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI2->Location = System::Drawing::Point(929, 175);
			this->label稳压FI2->Name = L"label稳压FI2";
			this->label稳压FI2->Size = System::Drawing::Size(62, 23);
			this->label稳压FI2->TabIndex = 153;
			this->label稳压FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FI1
			// 
			this->label稳压FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FI1->Location = System::Drawing::Point(863, 175);
			this->label稳压FI1->Name = L"label稳压FI1";
			this->label稳压FI1->Size = System::Drawing::Size(62, 23);
			this->label稳压FI1->TabIndex = 152;
			this->label稳压FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU10
			// 
			this->label稳压FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU10->Location = System::Drawing::Point(1473, 130);
			this->label稳压FU10->Name = L"label稳压FU10";
			this->label稳压FU10->Size = System::Drawing::Size(62, 23);
			this->label稳压FU10->TabIndex = 151;
			this->label稳压FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU9
			// 
			this->label稳压FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU9->Location = System::Drawing::Point(1405, 130);
			this->label稳压FU9->Name = L"label稳压FU9";
			this->label稳压FU9->Size = System::Drawing::Size(62, 23);
			this->label稳压FU9->TabIndex = 150;
			this->label稳压FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU8
			// 
			this->label稳压FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU8->Location = System::Drawing::Point(1336, 129);
			this->label稳压FU8->Name = L"label稳压FU8";
			this->label稳压FU8->Size = System::Drawing::Size(62, 23);
			this->label稳压FU8->TabIndex = 149;
			this->label稳压FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU7
			// 
			this->label稳压FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU7->Location = System::Drawing::Point(1269, 131);
			this->label稳压FU7->Name = L"label稳压FU7";
			this->label稳压FU7->Size = System::Drawing::Size(62, 23);
			this->label稳压FU7->TabIndex = 148;
			this->label稳压FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU6
			// 
			this->label稳压FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU6->Location = System::Drawing::Point(1201, 130);
			this->label稳压FU6->Name = L"label稳压FU6";
			this->label稳压FU6->Size = System::Drawing::Size(62, 23);
			this->label稳压FU6->TabIndex = 147;
			this->label稳压FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU5
			// 
			this->label稳压FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU5->Location = System::Drawing::Point(1133, 130);
			this->label稳压FU5->Name = L"label稳压FU5";
			this->label稳压FU5->Size = System::Drawing::Size(62, 23);
			this->label稳压FU5->TabIndex = 146;
			this->label稳压FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU4
			// 
			this->label稳压FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU4->Location = System::Drawing::Point(1065, 130);
			this->label稳压FU4->Name = L"label稳压FU4";
			this->label稳压FU4->Size = System::Drawing::Size(62, 23);
			this->label稳压FU4->TabIndex = 145;
			this->label稳压FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU3
			// 
			this->label稳压FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU3->Location = System::Drawing::Point(997, 131);
			this->label稳压FU3->Name = L"label稳压FU3";
			this->label稳压FU3->Size = System::Drawing::Size(62, 23);
			this->label稳压FU3->TabIndex = 144;
			this->label稳压FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU2
			// 
			this->label稳压FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU2->Location = System::Drawing::Point(929, 131);
			this->label稳压FU2->Name = L"label稳压FU2";
			this->label稳压FU2->Size = System::Drawing::Size(62, 23);
			this->label稳压FU2->TabIndex = 143;
			this->label稳压FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FU1
			// 
			this->label稳压FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FU1->Location = System::Drawing::Point(863, 131);
			this->label稳压FU1->Name = L"label稳压FU1";
			this->label稳压FU1->Size = System::Drawing::Size(62, 23);
			this->label稳压FU1->TabIndex = 142;
			this->label稳压FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI10
			// 
			this->label稳压ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI10->Location = System::Drawing::Point(795, 175);
			this->label稳压ZI10->Name = L"label稳压ZI10";
			this->label稳压ZI10->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI10->TabIndex = 141;
			this->label稳压ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI9
			// 
			this->label稳压ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI9->Location = System::Drawing::Point(727, 175);
			this->label稳压ZI9->Name = L"label稳压ZI9";
			this->label稳压ZI9->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI9->TabIndex = 140;
			this->label稳压ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI8
			// 
			this->label稳压ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI8->Location = System::Drawing::Point(659, 175);
			this->label稳压ZI8->Name = L"label稳压ZI8";
			this->label稳压ZI8->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI8->TabIndex = 139;
			this->label稳压ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI7
			// 
			this->label稳压ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI7->Location = System::Drawing::Point(591, 176);
			this->label稳压ZI7->Name = L"label稳压ZI7";
			this->label稳压ZI7->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI7->TabIndex = 138;
			this->label稳压ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI6
			// 
			this->label稳压ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI6->Location = System::Drawing::Point(523, 175);
			this->label稳压ZI6->Name = L"label稳压ZI6";
			this->label稳压ZI6->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI6->TabIndex = 137;
			this->label稳压ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI5
			// 
			this->label稳压ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI5->Location = System::Drawing::Point(455, 175);
			this->label稳压ZI5->Name = L"label稳压ZI5";
			this->label稳压ZI5->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI5->TabIndex = 136;
			this->label稳压ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI4
			// 
			this->label稳压ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI4->Location = System::Drawing::Point(387, 175);
			this->label稳压ZI4->Name = L"label稳压ZI4";
			this->label稳压ZI4->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI4->TabIndex = 135;
			this->label稳压ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI3
			// 
			this->label稳压ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI3->Location = System::Drawing::Point(319, 176);
			this->label稳压ZI3->Name = L"label稳压ZI3";
			this->label稳压ZI3->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI3->TabIndex = 134;
			this->label稳压ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI2
			// 
			this->label稳压ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI2->Location = System::Drawing::Point(251, 176);
			this->label稳压ZI2->Name = L"label稳压ZI2";
			this->label稳压ZI2->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI2->TabIndex = 133;
			this->label稳压ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZI1
			// 
			this->label稳压ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZI1->Location = System::Drawing::Point(185, 175);
			this->label稳压ZI1->Name = L"label稳压ZI1";
			this->label稳压ZI1->Size = System::Drawing::Size(62, 23);
			this->label稳压ZI1->TabIndex = 132;
			this->label稳压ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU10
			// 
			this->label稳压ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU10->Location = System::Drawing::Point(795, 130);
			this->label稳压ZU10->Name = L"label稳压ZU10";
			this->label稳压ZU10->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU10->TabIndex = 131;
			this->label稳压ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU9
			// 
			this->label稳压ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU9->Location = System::Drawing::Point(727, 130);
			this->label稳压ZU9->Name = L"label稳压ZU9";
			this->label稳压ZU9->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU9->TabIndex = 130;
			this->label稳压ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU8
			// 
			this->label稳压ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU8->Location = System::Drawing::Point(659, 130);
			this->label稳压ZU8->Name = L"label稳压ZU8";
			this->label稳压ZU8->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU8->TabIndex = 129;
			this->label稳压ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU7
			// 
			this->label稳压ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU7->Location = System::Drawing::Point(591, 131);
			this->label稳压ZU7->Name = L"label稳压ZU7";
			this->label稳压ZU7->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU7->TabIndex = 128;
			this->label稳压ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU6
			// 
			this->label稳压ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU6->Location = System::Drawing::Point(523, 130);
			this->label稳压ZU6->Name = L"label稳压ZU6";
			this->label稳压ZU6->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU6->TabIndex = 127;
			this->label稳压ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU5
			// 
			this->label稳压ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU5->Location = System::Drawing::Point(455, 130);
			this->label稳压ZU5->Name = L"label稳压ZU5";
			this->label稳压ZU5->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU5->TabIndex = 126;
			this->label稳压ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU4
			// 
			this->label稳压ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU4->Location = System::Drawing::Point(387, 130);
			this->label稳压ZU4->Name = L"label稳压ZU4";
			this->label稳压ZU4->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU4->TabIndex = 125;
			this->label稳压ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU3
			// 
			this->label稳压ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU3->Location = System::Drawing::Point(319, 131);
			this->label稳压ZU3->Name = L"label稳压ZU3";
			this->label稳压ZU3->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU3->TabIndex = 124;
			this->label稳压ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label稳压ZU3->Click += gcnew System::EventHandler(this, &元件伏安特性测试::label稳压ZU3_Click);
			// 
			// label稳压ZU2
			// 
			this->label稳压ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU2->Location = System::Drawing::Point(251, 131);
			this->label稳压ZU2->Name = L"label稳压ZU2";
			this->label稳压ZU2->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU2->TabIndex = 123;
			this->label稳压ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZU1
			// 
			this->label稳压ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZU1->Location = System::Drawing::Point(185, 131);
			this->label稳压ZU1->Name = L"label稳压ZU1";
			this->label稳压ZU1->Size = System::Drawing::Size(62, 23);
			this->label稳压ZU1->TabIndex = 122;
			this->label稳压ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU10
			// 
			this->label稳压FSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU10->Location = System::Drawing::Point(1474, 83);
			this->label稳压FSU10->Name = L"label稳压FSU10";
			this->label稳压FSU10->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU10->TabIndex = 101;
			this->label稳压FSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU9
			// 
			this->label稳压FSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU9->Location = System::Drawing::Point(1406, 83);
			this->label稳压FSU9->Name = L"label稳压FSU9";
			this->label稳压FSU9->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU9->TabIndex = 100;
			this->label稳压FSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU8
			// 
			this->label稳压FSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU8->Location = System::Drawing::Point(1338, 83);
			this->label稳压FSU8->Name = L"label稳压FSU8";
			this->label稳压FSU8->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU8->TabIndex = 99;
			this->label稳压FSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU7
			// 
			this->label稳压FSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU7->Location = System::Drawing::Point(1270, 84);
			this->label稳压FSU7->Name = L"label稳压FSU7";
			this->label稳压FSU7->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU7->TabIndex = 98;
			this->label稳压FSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU6
			// 
			this->label稳压FSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU6->Location = System::Drawing::Point(1202, 83);
			this->label稳压FSU6->Name = L"label稳压FSU6";
			this->label稳压FSU6->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU6->TabIndex = 97;
			this->label稳压FSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU5
			// 
			this->label稳压FSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU5->Location = System::Drawing::Point(1134, 83);
			this->label稳压FSU5->Name = L"label稳压FSU5";
			this->label稳压FSU5->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU5->TabIndex = 96;
			this->label稳压FSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU4
			// 
			this->label稳压FSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU4->Location = System::Drawing::Point(1066, 83);
			this->label稳压FSU4->Name = L"label稳压FSU4";
			this->label稳压FSU4->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU4->TabIndex = 95;
			this->label稳压FSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU3
			// 
			this->label稳压FSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU3->Location = System::Drawing::Point(998, 84);
			this->label稳压FSU3->Name = L"label稳压FSU3";
			this->label稳压FSU3->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU3->TabIndex = 94;
			this->label稳压FSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU2
			// 
			this->label稳压FSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU2->Location = System::Drawing::Point(930, 84);
			this->label稳压FSU2->Name = L"label稳压FSU2";
			this->label稳压FSU2->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU2->TabIndex = 93;
			this->label稳压FSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压FSU1
			// 
			this->label稳压FSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压FSU1->Location = System::Drawing::Point(864, 84);
			this->label稳压FSU1->Name = L"label稳压FSU1";
			this->label稳压FSU1->Size = System::Drawing::Size(62, 23);
			this->label稳压FSU1->TabIndex = 92;
			this->label稳压FSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压结论
			// 
			this->label稳压结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压结论->Location = System::Drawing::Point(186, 43);
			this->label稳压结论->Name = L"label稳压结论";
			this->label稳压结论->Size = System::Drawing::Size(1349, 23);
			this->label稳压结论->TabIndex = 91;
			this->label稳压结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU10
			// 
			this->label稳压ZSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU10->Location = System::Drawing::Point(796, 83);
			this->label稳压ZSU10->Name = L"label稳压ZSU10";
			this->label稳压ZSU10->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU10->TabIndex = 69;
			this->label稳压ZSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU9
			// 
			this->label稳压ZSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU9->Location = System::Drawing::Point(728, 83);
			this->label稳压ZSU9->Name = L"label稳压ZSU9";
			this->label稳压ZSU9->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU9->TabIndex = 68;
			this->label稳压ZSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU8
			// 
			this->label稳压ZSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU8->Location = System::Drawing::Point(660, 83);
			this->label稳压ZSU8->Name = L"label稳压ZSU8";
			this->label稳压ZSU8->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU8->TabIndex = 67;
			this->label稳压ZSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU7
			// 
			this->label稳压ZSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU7->Location = System::Drawing::Point(592, 84);
			this->label稳压ZSU7->Name = L"label稳压ZSU7";
			this->label稳压ZSU7->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU7->TabIndex = 66;
			this->label稳压ZSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU6
			// 
			this->label稳压ZSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU6->Location = System::Drawing::Point(524, 83);
			this->label稳压ZSU6->Name = L"label稳压ZSU6";
			this->label稳压ZSU6->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU6->TabIndex = 65;
			this->label稳压ZSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU5
			// 
			this->label稳压ZSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU5->Location = System::Drawing::Point(456, 83);
			this->label稳压ZSU5->Name = L"label稳压ZSU5";
			this->label稳压ZSU5->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU5->TabIndex = 64;
			this->label稳压ZSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU4
			// 
			this->label稳压ZSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU4->Location = System::Drawing::Point(388, 83);
			this->label稳压ZSU4->Name = L"label稳压ZSU4";
			this->label稳压ZSU4->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU4->TabIndex = 63;
			this->label稳压ZSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU3
			// 
			this->label稳压ZSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU3->Location = System::Drawing::Point(320, 84);
			this->label稳压ZSU3->Name = L"label稳压ZSU3";
			this->label稳压ZSU3->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU3->TabIndex = 62;
			this->label稳压ZSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU2
			// 
			this->label稳压ZSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU2->Location = System::Drawing::Point(252, 84);
			this->label稳压ZSU2->Name = L"label稳压ZSU2";
			this->label稳压ZSU2->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU2->TabIndex = 61;
			this->label稳压ZSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label稳压ZSU1
			// 
			this->label稳压ZSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label稳压ZSU1->Location = System::Drawing::Point(186, 84);
			this->label稳压ZSU1->Name = L"label稳压ZSU1";
			this->label稳压ZSU1->Size = System::Drawing::Size(62, 23);
			this->label稳压ZSU1->TabIndex = 60;
			this->label稳压ZSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label31
			// 
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(8, 44);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(95, 23);
			this->label31->TabIndex = 58;
			this->label31->Text = L"实验结论";
			// 
			// label32
			// 
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(8, 175);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(176, 23);
			this->label32->TabIndex = 7;
			this->label32->Text = L"电流表读数I(mA)";
			// 
			// label33
			// 
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(6, 131);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(176, 23);
			this->label33->TabIndex = 6;
			this->label33->Text = L"电压表读数Ud(V)";
			// 
			// label34
			// 
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(8, 84);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(145, 23);
			this->label34->TabIndex = 5;
			this->label34->Text = L"电源电压U(V)";
			// 
			// groupBox硅管
			// 
			this->groupBox硅管->Controls->Add(this->label7);
			this->groupBox硅管->Controls->Add(this->label8);
			this->groupBox硅管->Controls->Add(this->chart硅管);
			this->groupBox硅管->Controls->Add(this->textBox4);
			this->groupBox硅管->Controls->Add(this->label1硅管FI10);
			this->groupBox硅管->Controls->Add(this->label1硅管FI9);
			this->groupBox硅管->Controls->Add(this->label1硅管FI8);
			this->groupBox硅管->Controls->Add(this->label1硅管FI7);
			this->groupBox硅管->Controls->Add(this->label1硅管FI6);
			this->groupBox硅管->Controls->Add(this->label1硅管FI5);
			this->groupBox硅管->Controls->Add(this->label1硅管FI4);
			this->groupBox硅管->Controls->Add(this->label1硅管FI3);
			this->groupBox硅管->Controls->Add(this->label1硅管FI2);
			this->groupBox硅管->Controls->Add(this->label1硅管FI1);
			this->groupBox硅管->Controls->Add(this->label1硅管FU10);
			this->groupBox硅管->Controls->Add(this->label1硅管FU9);
			this->groupBox硅管->Controls->Add(this->label1硅管FU8);
			this->groupBox硅管->Controls->Add(this->label1硅管FU7);
			this->groupBox硅管->Controls->Add(this->label1硅管FU6);
			this->groupBox硅管->Controls->Add(this->label1硅管FU5);
			this->groupBox硅管->Controls->Add(this->label1硅管FU4);
			this->groupBox硅管->Controls->Add(this->label1硅管FU3);
			this->groupBox硅管->Controls->Add(this->label1硅管FU2);
			this->groupBox硅管->Controls->Add(this->label1硅管FU1);
			this->groupBox硅管->Controls->Add(this->label硅管ZI10);
			this->groupBox硅管->Controls->Add(this->label硅管ZI9);
			this->groupBox硅管->Controls->Add(this->label硅管ZI8);
			this->groupBox硅管->Controls->Add(this->label硅管ZI7);
			this->groupBox硅管->Controls->Add(this->label硅管ZI6);
			this->groupBox硅管->Controls->Add(this->label硅管ZI5);
			this->groupBox硅管->Controls->Add(this->label硅管ZI4);
			this->groupBox硅管->Controls->Add(this->label硅管ZI3);
			this->groupBox硅管->Controls->Add(this->label硅管ZI2);
			this->groupBox硅管->Controls->Add(this->label硅管ZI1);
			this->groupBox硅管->Controls->Add(this->label硅管ZU10);
			this->groupBox硅管->Controls->Add(this->label硅管ZU9);
			this->groupBox硅管->Controls->Add(this->label硅管ZU8);
			this->groupBox硅管->Controls->Add(this->label硅管ZU7);
			this->groupBox硅管->Controls->Add(this->label硅管ZU6);
			this->groupBox硅管->Controls->Add(this->label硅管ZU5);
			this->groupBox硅管->Controls->Add(this->label硅管ZU4);
			this->groupBox硅管->Controls->Add(this->label硅管ZU3);
			this->groupBox硅管->Controls->Add(this->label硅管ZU2);
			this->groupBox硅管->Controls->Add(this->label硅管ZU1);
			this->groupBox硅管->Controls->Add(this->label硅管FSU10);
			this->groupBox硅管->Controls->Add(this->label硅管FSU9);
			this->groupBox硅管->Controls->Add(this->label硅管FSU8);
			this->groupBox硅管->Controls->Add(this->label硅管FSU7);
			this->groupBox硅管->Controls->Add(this->label硅管FSU6);
			this->groupBox硅管->Controls->Add(this->label硅管FSU5);
			this->groupBox硅管->Controls->Add(this->label硅管FSU4);
			this->groupBox硅管->Controls->Add(this->label硅管FSU3);
			this->groupBox硅管->Controls->Add(this->label硅管FSU2);
			this->groupBox硅管->Controls->Add(this->label硅管FSU1);
			this->groupBox硅管->Controls->Add(this->label硅管结论);
			this->groupBox硅管->Controls->Add(this->label硅管ZSU10);
			this->groupBox硅管->Controls->Add(this->label硅管ZSU9);
			this->groupBox硅管->Controls->Add(this->label硅管ZSU8);
			this->groupBox硅管->Controls->Add(this->label硅管ZSU7);
			this->groupBox硅管->Controls->Add(this->label硅管ZSU6);
			this->groupBox硅管->Controls->Add(this->label硅管ZSU5);
			this->groupBox硅管->Controls->Add(this->label硅管ZSU4);
			this->groupBox硅管->Controls->Add(this->label硅管ZSU3);
			this->groupBox硅管->Controls->Add(this->label硅管ZSU2);
			this->groupBox硅管->Controls->Add(this->label硅管ZSU1);
			this->groupBox硅管->Controls->Add(this->label23);
			this->groupBox硅管->Controls->Add(this->label24);
			this->groupBox硅管->Controls->Add(this->label25);
			this->groupBox硅管->Controls->Add(this->label26);
			this->groupBox硅管->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox硅管->Location = System::Drawing::Point(12, 2364);
			this->groupBox硅管->Name = L"groupBox硅管";
			this->groupBox硅管->Size = System::Drawing::Size(1544, 531);
			this->groupBox硅管->TabIndex = 71;
			this->groupBox硅管->TabStop = false;
			this->groupBox硅管->Text = L"测定半导体的伏安特性-硅管2CP15";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(653, 302);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 20);
			this->label7->TabIndex = 165;
			this->label7->Text = L"请打分：";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(653, 399);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 20);
			this->label8->TabIndex = 164;
			this->label8->Text = L"本实验总分20";
			// 
			// chart硅管
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart硅管->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart硅管->Legends->Add(legend3);
			this->chart硅管->Location = System::Drawing::Point(12, 225);
			this->chart硅管->Name = L"chart硅管";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart硅管->Series->Add(series3);
			this->chart硅管->Size = System::Drawing::Size(570, 300);
			this->chart硅管->TabIndex = 163;
			this->chart硅管->Text = L"chart硅管";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(657, 348);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 28);
			this->textBox4->TabIndex = 162;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &元件伏安特性测试::textBox4_TextChanged);
			// 
			// label1硅管FI10
			// 
			this->label1硅管FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI10->Location = System::Drawing::Point(1472, 174);
			this->label1硅管FI10->Name = L"label1硅管FI10";
			this->label1硅管FI10->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI10->TabIndex = 161;
			this->label1硅管FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI9
			// 
			this->label1硅管FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI9->Location = System::Drawing::Point(1404, 174);
			this->label1硅管FI9->Name = L"label1硅管FI9";
			this->label1硅管FI9->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI9->TabIndex = 160;
			this->label1硅管FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI8
			// 
			this->label1硅管FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI8->Location = System::Drawing::Point(1336, 174);
			this->label1硅管FI8->Name = L"label1硅管FI8";
			this->label1硅管FI8->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI8->TabIndex = 159;
			this->label1硅管FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI7
			// 
			this->label1硅管FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI7->Location = System::Drawing::Point(1268, 175);
			this->label1硅管FI7->Name = L"label1硅管FI7";
			this->label1硅管FI7->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI7->TabIndex = 158;
			this->label1硅管FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI6
			// 
			this->label1硅管FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI6->Location = System::Drawing::Point(1200, 174);
			this->label1硅管FI6->Name = L"label1硅管FI6";
			this->label1硅管FI6->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI6->TabIndex = 157;
			this->label1硅管FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI5
			// 
			this->label1硅管FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI5->Location = System::Drawing::Point(1132, 174);
			this->label1硅管FI5->Name = L"label1硅管FI5";
			this->label1硅管FI5->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI5->TabIndex = 156;
			this->label1硅管FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI4
			// 
			this->label1硅管FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI4->Location = System::Drawing::Point(1064, 174);
			this->label1硅管FI4->Name = L"label1硅管FI4";
			this->label1硅管FI4->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI4->TabIndex = 155;
			this->label1硅管FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI3
			// 
			this->label1硅管FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI3->Location = System::Drawing::Point(996, 175);
			this->label1硅管FI3->Name = L"label1硅管FI3";
			this->label1硅管FI3->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI3->TabIndex = 154;
			this->label1硅管FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI2
			// 
			this->label1硅管FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI2->Location = System::Drawing::Point(928, 175);
			this->label1硅管FI2->Name = L"label1硅管FI2";
			this->label1硅管FI2->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI2->TabIndex = 153;
			this->label1硅管FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FI1
			// 
			this->label1硅管FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FI1->Location = System::Drawing::Point(862, 175);
			this->label1硅管FI1->Name = L"label1硅管FI1";
			this->label1硅管FI1->Size = System::Drawing::Size(62, 23);
			this->label1硅管FI1->TabIndex = 152;
			this->label1硅管FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU10
			// 
			this->label1硅管FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU10->Location = System::Drawing::Point(1472, 130);
			this->label1硅管FU10->Name = L"label1硅管FU10";
			this->label1硅管FU10->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU10->TabIndex = 151;
			this->label1硅管FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU9
			// 
			this->label1硅管FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU9->Location = System::Drawing::Point(1404, 130);
			this->label1硅管FU9->Name = L"label1硅管FU9";
			this->label1硅管FU9->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU9->TabIndex = 150;
			this->label1硅管FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU8
			// 
			this->label1硅管FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU8->Location = System::Drawing::Point(1336, 130);
			this->label1硅管FU8->Name = L"label1硅管FU8";
			this->label1硅管FU8->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU8->TabIndex = 149;
			this->label1硅管FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU7
			// 
			this->label1硅管FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU7->Location = System::Drawing::Point(1268, 131);
			this->label1硅管FU7->Name = L"label1硅管FU7";
			this->label1硅管FU7->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU7->TabIndex = 148;
			this->label1硅管FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU6
			// 
			this->label1硅管FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU6->Location = System::Drawing::Point(1200, 130);
			this->label1硅管FU6->Name = L"label1硅管FU6";
			this->label1硅管FU6->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU6->TabIndex = 147;
			this->label1硅管FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU5
			// 
			this->label1硅管FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU5->Location = System::Drawing::Point(1132, 130);
			this->label1硅管FU5->Name = L"label1硅管FU5";
			this->label1硅管FU5->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU5->TabIndex = 146;
			this->label1硅管FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU4
			// 
			this->label1硅管FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU4->Location = System::Drawing::Point(1064, 130);
			this->label1硅管FU4->Name = L"label1硅管FU4";
			this->label1硅管FU4->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU4->TabIndex = 145;
			this->label1硅管FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU3
			// 
			this->label1硅管FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU3->Location = System::Drawing::Point(996, 131);
			this->label1硅管FU3->Name = L"label1硅管FU3";
			this->label1硅管FU3->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU3->TabIndex = 144;
			this->label1硅管FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU2
			// 
			this->label1硅管FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU2->Location = System::Drawing::Point(928, 131);
			this->label1硅管FU2->Name = L"label1硅管FU2";
			this->label1硅管FU2->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU2->TabIndex = 143;
			this->label1硅管FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1硅管FU1
			// 
			this->label1硅管FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1硅管FU1->Location = System::Drawing::Point(862, 131);
			this->label1硅管FU1->Name = L"label1硅管FU1";
			this->label1硅管FU1->Size = System::Drawing::Size(62, 23);
			this->label1硅管FU1->TabIndex = 142;
			this->label1硅管FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI10
			// 
			this->label硅管ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI10->Location = System::Drawing::Point(793, 174);
			this->label硅管ZI10->Name = L"label硅管ZI10";
			this->label硅管ZI10->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI10->TabIndex = 141;
			this->label硅管ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI9
			// 
			this->label硅管ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI9->Location = System::Drawing::Point(725, 174);
			this->label硅管ZI9->Name = L"label硅管ZI9";
			this->label硅管ZI9->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI9->TabIndex = 140;
			this->label硅管ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI8
			// 
			this->label硅管ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI8->Location = System::Drawing::Point(657, 174);
			this->label硅管ZI8->Name = L"label硅管ZI8";
			this->label硅管ZI8->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI8->TabIndex = 139;
			this->label硅管ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI7
			// 
			this->label硅管ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI7->Location = System::Drawing::Point(589, 175);
			this->label硅管ZI7->Name = L"label硅管ZI7";
			this->label硅管ZI7->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI7->TabIndex = 138;
			this->label硅管ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI6
			// 
			this->label硅管ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI6->Location = System::Drawing::Point(521, 174);
			this->label硅管ZI6->Name = L"label硅管ZI6";
			this->label硅管ZI6->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI6->TabIndex = 137;
			this->label硅管ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI5
			// 
			this->label硅管ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI5->Location = System::Drawing::Point(453, 174);
			this->label硅管ZI5->Name = L"label硅管ZI5";
			this->label硅管ZI5->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI5->TabIndex = 136;
			this->label硅管ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI4
			// 
			this->label硅管ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI4->Location = System::Drawing::Point(385, 174);
			this->label硅管ZI4->Name = L"label硅管ZI4";
			this->label硅管ZI4->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI4->TabIndex = 135;
			this->label硅管ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI3
			// 
			this->label硅管ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI3->Location = System::Drawing::Point(317, 175);
			this->label硅管ZI3->Name = L"label硅管ZI3";
			this->label硅管ZI3->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI3->TabIndex = 134;
			this->label硅管ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI2
			// 
			this->label硅管ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI2->Location = System::Drawing::Point(249, 175);
			this->label硅管ZI2->Name = L"label硅管ZI2";
			this->label硅管ZI2->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI2->TabIndex = 133;
			this->label硅管ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZI1
			// 
			this->label硅管ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZI1->Location = System::Drawing::Point(183, 175);
			this->label硅管ZI1->Name = L"label硅管ZI1";
			this->label硅管ZI1->Size = System::Drawing::Size(62, 23);
			this->label硅管ZI1->TabIndex = 132;
			this->label硅管ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU10
			// 
			this->label硅管ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU10->Location = System::Drawing::Point(793, 128);
			this->label硅管ZU10->Name = L"label硅管ZU10";
			this->label硅管ZU10->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU10->TabIndex = 131;
			this->label硅管ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU9
			// 
			this->label硅管ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU9->Location = System::Drawing::Point(725, 128);
			this->label硅管ZU9->Name = L"label硅管ZU9";
			this->label硅管ZU9->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU9->TabIndex = 130;
			this->label硅管ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU8
			// 
			this->label硅管ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU8->Location = System::Drawing::Point(657, 128);
			this->label硅管ZU8->Name = L"label硅管ZU8";
			this->label硅管ZU8->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU8->TabIndex = 129;
			this->label硅管ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU7
			// 
			this->label硅管ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU7->Location = System::Drawing::Point(589, 129);
			this->label硅管ZU7->Name = L"label硅管ZU7";
			this->label硅管ZU7->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU7->TabIndex = 128;
			this->label硅管ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU6
			// 
			this->label硅管ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU6->Location = System::Drawing::Point(521, 128);
			this->label硅管ZU6->Name = L"label硅管ZU6";
			this->label硅管ZU6->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU6->TabIndex = 127;
			this->label硅管ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU5
			// 
			this->label硅管ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU5->Location = System::Drawing::Point(453, 128);
			this->label硅管ZU5->Name = L"label硅管ZU5";
			this->label硅管ZU5->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU5->TabIndex = 126;
			this->label硅管ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU4
			// 
			this->label硅管ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU4->Location = System::Drawing::Point(385, 128);
			this->label硅管ZU4->Name = L"label硅管ZU4";
			this->label硅管ZU4->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU4->TabIndex = 125;
			this->label硅管ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU3
			// 
			this->label硅管ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU3->Location = System::Drawing::Point(317, 129);
			this->label硅管ZU3->Name = L"label硅管ZU3";
			this->label硅管ZU3->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU3->TabIndex = 124;
			this->label硅管ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU2
			// 
			this->label硅管ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU2->Location = System::Drawing::Point(249, 129);
			this->label硅管ZU2->Name = L"label硅管ZU2";
			this->label硅管ZU2->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU2->TabIndex = 123;
			this->label硅管ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZU1
			// 
			this->label硅管ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZU1->Location = System::Drawing::Point(183, 129);
			this->label硅管ZU1->Name = L"label硅管ZU1";
			this->label硅管ZU1->Size = System::Drawing::Size(62, 23);
			this->label硅管ZU1->TabIndex = 122;
			this->label硅管ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU10
			// 
			this->label硅管FSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU10->Location = System::Drawing::Point(1471, 84);
			this->label硅管FSU10->Name = L"label硅管FSU10";
			this->label硅管FSU10->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU10->TabIndex = 101;
			this->label硅管FSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU9
			// 
			this->label硅管FSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU9->Location = System::Drawing::Point(1403, 84);
			this->label硅管FSU9->Name = L"label硅管FSU9";
			this->label硅管FSU9->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU9->TabIndex = 100;
			this->label硅管FSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU8
			// 
			this->label硅管FSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU8->Location = System::Drawing::Point(1335, 84);
			this->label硅管FSU8->Name = L"label硅管FSU8";
			this->label硅管FSU8->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU8->TabIndex = 99;
			this->label硅管FSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU7
			// 
			this->label硅管FSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU7->Location = System::Drawing::Point(1267, 85);
			this->label硅管FSU7->Name = L"label硅管FSU7";
			this->label硅管FSU7->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU7->TabIndex = 98;
			this->label硅管FSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU6
			// 
			this->label硅管FSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU6->Location = System::Drawing::Point(1199, 84);
			this->label硅管FSU6->Name = L"label硅管FSU6";
			this->label硅管FSU6->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU6->TabIndex = 97;
			this->label硅管FSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU5
			// 
			this->label硅管FSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU5->Location = System::Drawing::Point(1131, 84);
			this->label硅管FSU5->Name = L"label硅管FSU5";
			this->label硅管FSU5->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU5->TabIndex = 96;
			this->label硅管FSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU4
			// 
			this->label硅管FSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU4->Location = System::Drawing::Point(1063, 84);
			this->label硅管FSU4->Name = L"label硅管FSU4";
			this->label硅管FSU4->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU4->TabIndex = 95;
			this->label硅管FSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU3
			// 
			this->label硅管FSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU3->Location = System::Drawing::Point(995, 85);
			this->label硅管FSU3->Name = L"label硅管FSU3";
			this->label硅管FSU3->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU3->TabIndex = 94;
			this->label硅管FSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU2
			// 
			this->label硅管FSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU2->Location = System::Drawing::Point(927, 85);
			this->label硅管FSU2->Name = L"label硅管FSU2";
			this->label硅管FSU2->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU2->TabIndex = 93;
			this->label硅管FSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管FSU1
			// 
			this->label硅管FSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管FSU1->Location = System::Drawing::Point(861, 85);
			this->label硅管FSU1->Name = L"label硅管FSU1";
			this->label硅管FSU1->Size = System::Drawing::Size(62, 23);
			this->label硅管FSU1->TabIndex = 92;
			this->label硅管FSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管结论
			// 
			this->label硅管结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管结论->Location = System::Drawing::Point(183, 44);
			this->label硅管结论->Name = L"label硅管结论";
			this->label硅管结论->Size = System::Drawing::Size(1350, 23);
			this->label硅管结论->TabIndex = 91;
			this->label硅管结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU10
			// 
			this->label硅管ZSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU10->Location = System::Drawing::Point(793, 84);
			this->label硅管ZSU10->Name = L"label硅管ZSU10";
			this->label硅管ZSU10->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU10->TabIndex = 69;
			this->label硅管ZSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU9
			// 
			this->label硅管ZSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU9->Location = System::Drawing::Point(725, 84);
			this->label硅管ZSU9->Name = L"label硅管ZSU9";
			this->label硅管ZSU9->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU9->TabIndex = 68;
			this->label硅管ZSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU8
			// 
			this->label硅管ZSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU8->Location = System::Drawing::Point(657, 84);
			this->label硅管ZSU8->Name = L"label硅管ZSU8";
			this->label硅管ZSU8->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU8->TabIndex = 67;
			this->label硅管ZSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU7
			// 
			this->label硅管ZSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU7->Location = System::Drawing::Point(589, 85);
			this->label硅管ZSU7->Name = L"label硅管ZSU7";
			this->label硅管ZSU7->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU7->TabIndex = 66;
			this->label硅管ZSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU6
			// 
			this->label硅管ZSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU6->Location = System::Drawing::Point(521, 84);
			this->label硅管ZSU6->Name = L"label硅管ZSU6";
			this->label硅管ZSU6->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU6->TabIndex = 65;
			this->label硅管ZSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU5
			// 
			this->label硅管ZSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU5->Location = System::Drawing::Point(453, 84);
			this->label硅管ZSU5->Name = L"label硅管ZSU5";
			this->label硅管ZSU5->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU5->TabIndex = 64;
			this->label硅管ZSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU4
			// 
			this->label硅管ZSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU4->Location = System::Drawing::Point(385, 84);
			this->label硅管ZSU4->Name = L"label硅管ZSU4";
			this->label硅管ZSU4->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU4->TabIndex = 63;
			this->label硅管ZSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU3
			// 
			this->label硅管ZSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU3->Location = System::Drawing::Point(317, 85);
			this->label硅管ZSU3->Name = L"label硅管ZSU3";
			this->label硅管ZSU3->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU3->TabIndex = 62;
			this->label硅管ZSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU2
			// 
			this->label硅管ZSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU2->Location = System::Drawing::Point(249, 85);
			this->label硅管ZSU2->Name = L"label硅管ZSU2";
			this->label硅管ZSU2->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU2->TabIndex = 61;
			this->label硅管ZSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label硅管ZSU1
			// 
			this->label硅管ZSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label硅管ZSU1->Location = System::Drawing::Point(183, 85);
			this->label硅管ZSU1->Name = L"label硅管ZSU1";
			this->label硅管ZSU1->Size = System::Drawing::Size(62, 23);
			this->label硅管ZSU1->TabIndex = 60;
			this->label硅管ZSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label23
			// 
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(8, 44);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(95, 23);
			this->label23->TabIndex = 58;
			this->label23->Text = L"实验结论";
			// 
			// label24
			// 
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(8, 175);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(176, 23);
			this->label24->TabIndex = 7;
			this->label24->Text = L"电流表读数I(mA)";
			// 
			// label25
			// 
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(6, 131);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(176, 23);
			this->label25->TabIndex = 6;
			this->label25->Text = L"电压表读数Ud(V)";
			// 
			// label26
			// 
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(8, 84);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(145, 23);
			this->label26->TabIndex = 5;
			this->label26->Text = L"电源电压U(V)";
			// 
			// groupBox锗管
			// 
			this->groupBox锗管->Controls->Add(this->label5);
			this->groupBox锗管->Controls->Add(this->label6);
			this->groupBox锗管->Controls->Add(this->chart锗管);
			this->groupBox锗管->Controls->Add(this->textBox3);
			this->groupBox锗管->Controls->Add(this->label锗管ZI10);
			this->groupBox锗管->Controls->Add(this->label锗管ZI9);
			this->groupBox锗管->Controls->Add(this->label锗管ZI8);
			this->groupBox锗管->Controls->Add(this->label锗管ZI7);
			this->groupBox锗管->Controls->Add(this->label锗管ZI6);
			this->groupBox锗管->Controls->Add(this->label锗管ZI5);
			this->groupBox锗管->Controls->Add(this->label锗管ZI4);
			this->groupBox锗管->Controls->Add(this->label锗管ZI3);
			this->groupBox锗管->Controls->Add(this->label锗管ZI2);
			this->groupBox锗管->Controls->Add(this->label锗管ZI1);
			this->groupBox锗管->Controls->Add(this->label锗管FI10);
			this->groupBox锗管->Controls->Add(this->label锗管ZU10);
			this->groupBox锗管->Controls->Add(this->label锗管FI9);
			this->groupBox锗管->Controls->Add(this->label锗管ZU9);
			this->groupBox锗管->Controls->Add(this->label锗管FI8);
			this->groupBox锗管->Controls->Add(this->label锗管ZU8);
			this->groupBox锗管->Controls->Add(this->label锗管FI7);
			this->groupBox锗管->Controls->Add(this->label锗管ZU7);
			this->groupBox锗管->Controls->Add(this->label锗管FI6);
			this->groupBox锗管->Controls->Add(this->label锗管ZU6);
			this->groupBox锗管->Controls->Add(this->label锗管FI5);
			this->groupBox锗管->Controls->Add(this->label锗管ZU5);
			this->groupBox锗管->Controls->Add(this->label锗管FI4);
			this->groupBox锗管->Controls->Add(this->label锗管ZU4);
			this->groupBox锗管->Controls->Add(this->label锗管FI3);
			this->groupBox锗管->Controls->Add(this->label锗管ZU3);
			this->groupBox锗管->Controls->Add(this->label锗管FI2);
			this->groupBox锗管->Controls->Add(this->label锗管ZU2);
			this->groupBox锗管->Controls->Add(this->label锗管FI1);
			this->groupBox锗管->Controls->Add(this->label锗管ZU1);
			this->groupBox锗管->Controls->Add(this->label锗管FU10);
			this->groupBox锗管->Controls->Add(this->label锗管FSU10);
			this->groupBox锗管->Controls->Add(this->label锗管FU9);
			this->groupBox锗管->Controls->Add(this->label锗管FSU9);
			this->groupBox锗管->Controls->Add(this->label锗管FU8);
			this->groupBox锗管->Controls->Add(this->label锗管FSU8);
			this->groupBox锗管->Controls->Add(this->label锗管FU7);
			this->groupBox锗管->Controls->Add(this->label锗管FSU7);
			this->groupBox锗管->Controls->Add(this->label锗管FU6);
			this->groupBox锗管->Controls->Add(this->label锗管FSU6);
			this->groupBox锗管->Controls->Add(this->label锗管FU5);
			this->groupBox锗管->Controls->Add(this->label锗管FSU5);
			this->groupBox锗管->Controls->Add(this->label锗管FU4);
			this->groupBox锗管->Controls->Add(this->label锗管FSU4);
			this->groupBox锗管->Controls->Add(this->label锗管FU3);
			this->groupBox锗管->Controls->Add(this->label锗管FSU3);
			this->groupBox锗管->Controls->Add(this->label锗管FU2);
			this->groupBox锗管->Controls->Add(this->label锗管FSU2);
			this->groupBox锗管->Controls->Add(this->label锗管FU1);
			this->groupBox锗管->Controls->Add(this->label锗管FSU1);
			this->groupBox锗管->Controls->Add(this->label锗管结论);
			this->groupBox锗管->Controls->Add(this->label锗管ZSU10);
			this->groupBox锗管->Controls->Add(this->label锗管ZSU9);
			this->groupBox锗管->Controls->Add(this->label锗管ZSU8);
			this->groupBox锗管->Controls->Add(this->label锗管ZSU7);
			this->groupBox锗管->Controls->Add(this->label锗管ZSU6);
			this->groupBox锗管->Controls->Add(this->label锗管ZSU5);
			this->groupBox锗管->Controls->Add(this->label锗管ZSU4);
			this->groupBox锗管->Controls->Add(this->label锗管ZSU3);
			this->groupBox锗管->Controls->Add(this->label锗管ZSU2);
			this->groupBox锗管->Controls->Add(this->label锗管ZSU1);
			this->groupBox锗管->Controls->Add(this->label19);
			this->groupBox锗管->Controls->Add(this->label20);
			this->groupBox锗管->Controls->Add(this->label21);
			this->groupBox锗管->Controls->Add(this->label22);
			this->groupBox锗管->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox锗管->Location = System::Drawing::Point(16, 1736);
			this->groupBox锗管->Name = L"groupBox锗管";
			this->groupBox锗管->Size = System::Drawing::Size(1543, 553);
			this->groupBox锗管->TabIndex = 67;
			this->groupBox锗管->TabStop = false;
			this->groupBox锗管->Text = L"测定半导体的伏安特性-锗管2AP9";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(656, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 20);
			this->label5->TabIndex = 145;
			this->label5->Text = L"请打分：";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(656, 401);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 20);
			this->label6->TabIndex = 144;
			this->label6->Text = L"本实验总分20";
			// 
			// chart锗管
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart锗管->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart锗管->Legends->Add(legend4);
			this->chart锗管->Location = System::Drawing::Point(15, 227);
			this->chart锗管->Name = L"chart锗管";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart锗管->Series->Add(series4);
			this->chart锗管->Size = System::Drawing::Size(570, 300);
			this->chart锗管->TabIndex = 143;
			this->chart锗管->Text = L"chart锗管";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(660, 350);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 28);
			this->textBox3->TabIndex = 142;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &元件伏安特性测试::textBox3_TextChanged);
			// 
			// label锗管ZI10
			// 
			this->label锗管ZI10->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label锗管ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI10->Location = System::Drawing::Point(795, 172);
			this->label锗管ZI10->Name = L"label锗管ZI10";
			this->label锗管ZI10->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI10->TabIndex = 141;
			this->label锗管ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI9
			// 
			this->label锗管ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI9->Location = System::Drawing::Point(727, 172);
			this->label锗管ZI9->Name = L"label锗管ZI9";
			this->label锗管ZI9->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI9->TabIndex = 140;
			this->label锗管ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI8
			// 
			this->label锗管ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI8->Location = System::Drawing::Point(659, 172);
			this->label锗管ZI8->Name = L"label锗管ZI8";
			this->label锗管ZI8->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI8->TabIndex = 139;
			this->label锗管ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI7
			// 
			this->label锗管ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI7->Location = System::Drawing::Point(591, 173);
			this->label锗管ZI7->Name = L"label锗管ZI7";
			this->label锗管ZI7->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI7->TabIndex = 138;
			this->label锗管ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI6
			// 
			this->label锗管ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI6->Location = System::Drawing::Point(523, 172);
			this->label锗管ZI6->Name = L"label锗管ZI6";
			this->label锗管ZI6->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI6->TabIndex = 137;
			this->label锗管ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI5
			// 
			this->label锗管ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI5->Location = System::Drawing::Point(455, 172);
			this->label锗管ZI5->Name = L"label锗管ZI5";
			this->label锗管ZI5->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI5->TabIndex = 136;
			this->label锗管ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI4
			// 
			this->label锗管ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI4->Location = System::Drawing::Point(387, 172);
			this->label锗管ZI4->Name = L"label锗管ZI4";
			this->label锗管ZI4->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI4->TabIndex = 135;
			this->label锗管ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI3
			// 
			this->label锗管ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI3->Location = System::Drawing::Point(319, 173);
			this->label锗管ZI3->Name = L"label锗管ZI3";
			this->label锗管ZI3->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI3->TabIndex = 134;
			this->label锗管ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI2
			// 
			this->label锗管ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI2->Location = System::Drawing::Point(251, 173);
			this->label锗管ZI2->Name = L"label锗管ZI2";
			this->label锗管ZI2->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI2->TabIndex = 133;
			this->label锗管ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZI1
			// 
			this->label锗管ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZI1->Location = System::Drawing::Point(185, 173);
			this->label锗管ZI1->Name = L"label锗管ZI1";
			this->label锗管ZI1->Size = System::Drawing::Size(62, 23);
			this->label锗管ZI1->TabIndex = 132;
			this->label锗管ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI10
			// 
			this->label锗管FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI10->Location = System::Drawing::Point(1473, 172);
			this->label锗管FI10->Name = L"label锗管FI10";
			this->label锗管FI10->Size = System::Drawing::Size(62, 23);
			this->label锗管FI10->TabIndex = 98;
			this->label锗管FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU10
			// 
			this->label锗管ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU10->Location = System::Drawing::Point(795, 130);
			this->label锗管ZU10->Name = L"label锗管ZU10";
			this->label锗管ZU10->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU10->TabIndex = 131;
			this->label锗管ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI9
			// 
			this->label锗管FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI9->Location = System::Drawing::Point(1405, 172);
			this->label锗管FI9->Name = L"label锗管FI9";
			this->label锗管FI9->Size = System::Drawing::Size(62, 23);
			this->label锗管FI9->TabIndex = 97;
			this->label锗管FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU9
			// 
			this->label锗管ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU9->Location = System::Drawing::Point(727, 130);
			this->label锗管ZU9->Name = L"label锗管ZU9";
			this->label锗管ZU9->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU9->TabIndex = 130;
			this->label锗管ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI8
			// 
			this->label锗管FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI8->Location = System::Drawing::Point(1337, 172);
			this->label锗管FI8->Name = L"label锗管FI8";
			this->label锗管FI8->Size = System::Drawing::Size(62, 23);
			this->label锗管FI8->TabIndex = 96;
			this->label锗管FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU8
			// 
			this->label锗管ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU8->Location = System::Drawing::Point(659, 130);
			this->label锗管ZU8->Name = L"label锗管ZU8";
			this->label锗管ZU8->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU8->TabIndex = 129;
			this->label锗管ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI7
			// 
			this->label锗管FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI7->Location = System::Drawing::Point(1269, 173);
			this->label锗管FI7->Name = L"label锗管FI7";
			this->label锗管FI7->Size = System::Drawing::Size(62, 23);
			this->label锗管FI7->TabIndex = 95;
			this->label锗管FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU7
			// 
			this->label锗管ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU7->Location = System::Drawing::Point(591, 131);
			this->label锗管ZU7->Name = L"label锗管ZU7";
			this->label锗管ZU7->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU7->TabIndex = 128;
			this->label锗管ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI6
			// 
			this->label锗管FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI6->Location = System::Drawing::Point(1201, 172);
			this->label锗管FI6->Name = L"label锗管FI6";
			this->label锗管FI6->Size = System::Drawing::Size(62, 23);
			this->label锗管FI6->TabIndex = 94;
			this->label锗管FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU6
			// 
			this->label锗管ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU6->Location = System::Drawing::Point(523, 130);
			this->label锗管ZU6->Name = L"label锗管ZU6";
			this->label锗管ZU6->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU6->TabIndex = 127;
			this->label锗管ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI5
			// 
			this->label锗管FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI5->Location = System::Drawing::Point(1133, 172);
			this->label锗管FI5->Name = L"label锗管FI5";
			this->label锗管FI5->Size = System::Drawing::Size(62, 23);
			this->label锗管FI5->TabIndex = 93;
			this->label锗管FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU5
			// 
			this->label锗管ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU5->Location = System::Drawing::Point(455, 130);
			this->label锗管ZU5->Name = L"label锗管ZU5";
			this->label锗管ZU5->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU5->TabIndex = 126;
			this->label锗管ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI4
			// 
			this->label锗管FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI4->Location = System::Drawing::Point(1065, 172);
			this->label锗管FI4->Name = L"label锗管FI4";
			this->label锗管FI4->Size = System::Drawing::Size(62, 23);
			this->label锗管FI4->TabIndex = 92;
			this->label锗管FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU4
			// 
			this->label锗管ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU4->Location = System::Drawing::Point(387, 130);
			this->label锗管ZU4->Name = L"label锗管ZU4";
			this->label锗管ZU4->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU4->TabIndex = 125;
			this->label锗管ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI3
			// 
			this->label锗管FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI3->Location = System::Drawing::Point(997, 173);
			this->label锗管FI3->Name = L"label锗管FI3";
			this->label锗管FI3->Size = System::Drawing::Size(62, 23);
			this->label锗管FI3->TabIndex = 91;
			this->label锗管FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU3
			// 
			this->label锗管ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU3->Location = System::Drawing::Point(319, 131);
			this->label锗管ZU3->Name = L"label锗管ZU3";
			this->label锗管ZU3->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU3->TabIndex = 124;
			this->label锗管ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI2
			// 
			this->label锗管FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI2->Location = System::Drawing::Point(929, 173);
			this->label锗管FI2->Name = L"label锗管FI2";
			this->label锗管FI2->Size = System::Drawing::Size(62, 23);
			this->label锗管FI2->TabIndex = 90;
			this->label锗管FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU2
			// 
			this->label锗管ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU2->Location = System::Drawing::Point(251, 131);
			this->label锗管ZU2->Name = L"label锗管ZU2";
			this->label锗管ZU2->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU2->TabIndex = 123;
			this->label锗管ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FI1
			// 
			this->label锗管FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FI1->Location = System::Drawing::Point(863, 173);
			this->label锗管FI1->Name = L"label锗管FI1";
			this->label锗管FI1->Size = System::Drawing::Size(62, 23);
			this->label锗管FI1->TabIndex = 89;
			this->label锗管FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZU1
			// 
			this->label锗管ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZU1->Location = System::Drawing::Point(185, 131);
			this->label锗管ZU1->Name = L"label锗管ZU1";
			this->label锗管ZU1->Size = System::Drawing::Size(62, 23);
			this->label锗管ZU1->TabIndex = 122;
			this->label锗管ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU10
			// 
			this->label锗管FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU10->Location = System::Drawing::Point(1473, 129);
			this->label锗管FU10->Name = L"label锗管FU10";
			this->label锗管FU10->Size = System::Drawing::Size(62, 23);
			this->label锗管FU10->TabIndex = 88;
			this->label锗管FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU10
			// 
			this->label锗管FSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU10->Location = System::Drawing::Point(1473, 83);
			this->label锗管FSU10->Name = L"label锗管FSU10";
			this->label锗管FSU10->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU10->TabIndex = 101;
			this->label锗管FSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU9
			// 
			this->label锗管FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU9->Location = System::Drawing::Point(1405, 129);
			this->label锗管FU9->Name = L"label锗管FU9";
			this->label锗管FU9->Size = System::Drawing::Size(62, 23);
			this->label锗管FU9->TabIndex = 87;
			this->label锗管FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU9
			// 
			this->label锗管FSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU9->Location = System::Drawing::Point(1405, 83);
			this->label锗管FSU9->Name = L"label锗管FSU9";
			this->label锗管FSU9->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU9->TabIndex = 100;
			this->label锗管FSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU8
			// 
			this->label锗管FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU8->Location = System::Drawing::Point(1337, 129);
			this->label锗管FU8->Name = L"label锗管FU8";
			this->label锗管FU8->Size = System::Drawing::Size(62, 23);
			this->label锗管FU8->TabIndex = 86;
			this->label锗管FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU8
			// 
			this->label锗管FSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU8->Location = System::Drawing::Point(1337, 83);
			this->label锗管FSU8->Name = L"label锗管FSU8";
			this->label锗管FSU8->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU8->TabIndex = 99;
			this->label锗管FSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU7
			// 
			this->label锗管FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU7->Location = System::Drawing::Point(1269, 130);
			this->label锗管FU7->Name = L"label锗管FU7";
			this->label锗管FU7->Size = System::Drawing::Size(62, 23);
			this->label锗管FU7->TabIndex = 85;
			this->label锗管FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU7
			// 
			this->label锗管FSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU7->Location = System::Drawing::Point(1269, 84);
			this->label锗管FSU7->Name = L"label锗管FSU7";
			this->label锗管FSU7->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU7->TabIndex = 98;
			this->label锗管FSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU6
			// 
			this->label锗管FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU6->Location = System::Drawing::Point(1201, 129);
			this->label锗管FU6->Name = L"label锗管FU6";
			this->label锗管FU6->Size = System::Drawing::Size(62, 23);
			this->label锗管FU6->TabIndex = 84;
			this->label锗管FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU6
			// 
			this->label锗管FSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU6->Location = System::Drawing::Point(1201, 83);
			this->label锗管FSU6->Name = L"label锗管FSU6";
			this->label锗管FSU6->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU6->TabIndex = 97;
			this->label锗管FSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU5
			// 
			this->label锗管FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU5->Location = System::Drawing::Point(1133, 129);
			this->label锗管FU5->Name = L"label锗管FU5";
			this->label锗管FU5->Size = System::Drawing::Size(62, 23);
			this->label锗管FU5->TabIndex = 83;
			this->label锗管FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU5
			// 
			this->label锗管FSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU5->Location = System::Drawing::Point(1133, 83);
			this->label锗管FSU5->Name = L"label锗管FSU5";
			this->label锗管FSU5->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU5->TabIndex = 96;
			this->label锗管FSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU4
			// 
			this->label锗管FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU4->Location = System::Drawing::Point(1065, 129);
			this->label锗管FU4->Name = L"label锗管FU4";
			this->label锗管FU4->Size = System::Drawing::Size(62, 23);
			this->label锗管FU4->TabIndex = 82;
			this->label锗管FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU4
			// 
			this->label锗管FSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU4->Location = System::Drawing::Point(1065, 83);
			this->label锗管FSU4->Name = L"label锗管FSU4";
			this->label锗管FSU4->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU4->TabIndex = 95;
			this->label锗管FSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU3
			// 
			this->label锗管FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU3->Location = System::Drawing::Point(997, 130);
			this->label锗管FU3->Name = L"label锗管FU3";
			this->label锗管FU3->Size = System::Drawing::Size(62, 23);
			this->label锗管FU3->TabIndex = 81;
			this->label锗管FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU3
			// 
			this->label锗管FSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU3->Location = System::Drawing::Point(997, 84);
			this->label锗管FSU3->Name = L"label锗管FSU3";
			this->label锗管FSU3->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU3->TabIndex = 94;
			this->label锗管FSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU2
			// 
			this->label锗管FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU2->Location = System::Drawing::Point(929, 130);
			this->label锗管FU2->Name = L"label锗管FU2";
			this->label锗管FU2->Size = System::Drawing::Size(62, 23);
			this->label锗管FU2->TabIndex = 80;
			this->label锗管FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU2
			// 
			this->label锗管FSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU2->Location = System::Drawing::Point(929, 84);
			this->label锗管FSU2->Name = L"label锗管FSU2";
			this->label锗管FSU2->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU2->TabIndex = 93;
			this->label锗管FSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FU1
			// 
			this->label锗管FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FU1->Location = System::Drawing::Point(863, 130);
			this->label锗管FU1->Name = L"label锗管FU1";
			this->label锗管FU1->Size = System::Drawing::Size(62, 23);
			this->label锗管FU1->TabIndex = 79;
			this->label锗管FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管FSU1
			// 
			this->label锗管FSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管FSU1->Location = System::Drawing::Point(863, 84);
			this->label锗管FSU1->Name = L"label锗管FSU1";
			this->label锗管FSU1->Size = System::Drawing::Size(62, 23);
			this->label锗管FSU1->TabIndex = 92;
			this->label锗管FSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管结论
			// 
			this->label锗管结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label锗管结论->Location = System::Drawing::Point(185, 43);
			this->label锗管结论->Name = L"label锗管结论";
			this->label锗管结论->Size = System::Drawing::Size(1350, 23);
			this->label锗管结论->TabIndex = 91;
			this->label锗管结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU10
			// 
			this->label锗管ZSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU10->Location = System::Drawing::Point(795, 83);
			this->label锗管ZSU10->Name = L"label锗管ZSU10";
			this->label锗管ZSU10->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU10->TabIndex = 69;
			this->label锗管ZSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU9
			// 
			this->label锗管ZSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU9->Location = System::Drawing::Point(727, 83);
			this->label锗管ZSU9->Name = L"label锗管ZSU9";
			this->label锗管ZSU9->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU9->TabIndex = 68;
			this->label锗管ZSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU8
			// 
			this->label锗管ZSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU8->Location = System::Drawing::Point(659, 83);
			this->label锗管ZSU8->Name = L"label锗管ZSU8";
			this->label锗管ZSU8->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU8->TabIndex = 67;
			this->label锗管ZSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU7
			// 
			this->label锗管ZSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU7->Location = System::Drawing::Point(591, 84);
			this->label锗管ZSU7->Name = L"label锗管ZSU7";
			this->label锗管ZSU7->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU7->TabIndex = 66;
			this->label锗管ZSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU6
			// 
			this->label锗管ZSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU6->Location = System::Drawing::Point(523, 83);
			this->label锗管ZSU6->Name = L"label锗管ZSU6";
			this->label锗管ZSU6->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU6->TabIndex = 65;
			this->label锗管ZSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU5
			// 
			this->label锗管ZSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU5->Location = System::Drawing::Point(455, 83);
			this->label锗管ZSU5->Name = L"label锗管ZSU5";
			this->label锗管ZSU5->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU5->TabIndex = 64;
			this->label锗管ZSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU4
			// 
			this->label锗管ZSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU4->Location = System::Drawing::Point(387, 83);
			this->label锗管ZSU4->Name = L"label锗管ZSU4";
			this->label锗管ZSU4->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU4->TabIndex = 63;
			this->label锗管ZSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU3
			// 
			this->label锗管ZSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU3->Location = System::Drawing::Point(319, 84);
			this->label锗管ZSU3->Name = L"label锗管ZSU3";
			this->label锗管ZSU3->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU3->TabIndex = 62;
			this->label锗管ZSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU2
			// 
			this->label锗管ZSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU2->Location = System::Drawing::Point(251, 84);
			this->label锗管ZSU2->Name = L"label锗管ZSU2";
			this->label锗管ZSU2->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU2->TabIndex = 61;
			this->label锗管ZSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label锗管ZSU1
			// 
			this->label锗管ZSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label锗管ZSU1->Location = System::Drawing::Point(185, 84);
			this->label锗管ZSU1->Name = L"label锗管ZSU1";
			this->label锗管ZSU1->Size = System::Drawing::Size(62, 23);
			this->label锗管ZSU1->TabIndex = 60;
			this->label锗管ZSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(8, 44);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(95, 23);
			this->label19->TabIndex = 58;
			this->label19->Text = L"实验结论";
			// 
			// label20
			// 
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(9, 175);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(176, 23);
			this->label20->TabIndex = 7;
			this->label20->Text = L"电流表读数I(mA)";
			// 
			// label21
			// 
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(7, 131);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(176, 23);
			this->label21->TabIndex = 6;
			this->label21->Text = L"电压表读数Ud(V)";
			// 
			// label22
			// 
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(8, 84);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(145, 23);
			this->label22->TabIndex = 5;
			this->label22->Text = L"电源电压U(V)";
			// 
			// groupBox白炽
			// 
			this->groupBox白炽->Controls->Add(this->label3);
			this->groupBox白炽->Controls->Add(this->label4);
			this->groupBox白炽->Controls->Add(this->chart白炽);
			this->groupBox白炽->Controls->Add(this->textBox2);
			this->groupBox白炽->Controls->Add(this->label白炽I10);
			this->groupBox白炽->Controls->Add(this->label白炽I9);
			this->groupBox白炽->Controls->Add(this->label白炽I8);
			this->groupBox白炽->Controls->Add(this->label白炽I7);
			this->groupBox白炽->Controls->Add(this->label白炽I6);
			this->groupBox白炽->Controls->Add(this->label白炽I5);
			this->groupBox白炽->Controls->Add(this->label白炽I4);
			this->groupBox白炽->Controls->Add(this->label白炽I3);
			this->groupBox白炽->Controls->Add(this->label白炽I2);
			this->groupBox白炽->Controls->Add(this->label白炽I1);
			this->groupBox白炽->Controls->Add(this->label白炽U10);
			this->groupBox白炽->Controls->Add(this->label白炽U9);
			this->groupBox白炽->Controls->Add(this->label白炽U8);
			this->groupBox白炽->Controls->Add(this->label白炽U7);
			this->groupBox白炽->Controls->Add(this->label白炽U6);
			this->groupBox白炽->Controls->Add(this->label白炽U5);
			this->groupBox白炽->Controls->Add(this->label白炽U4);
			this->groupBox白炽->Controls->Add(this->label白炽U3);
			this->groupBox白炽->Controls->Add(this->label白炽U2);
			this->groupBox白炽->Controls->Add(this->label白炽U1);
			this->groupBox白炽->Controls->Add(this->label白炽结论);
			this->groupBox白炽->Controls->Add(this->label白炽SU10);
			this->groupBox白炽->Controls->Add(this->label白炽SU9);
			this->groupBox白炽->Controls->Add(this->label白炽SU8);
			this->groupBox白炽->Controls->Add(this->label白炽SU7);
			this->groupBox白炽->Controls->Add(this->label白炽SU6);
			this->groupBox白炽->Controls->Add(this->label白炽SU5);
			this->groupBox白炽->Controls->Add(this->label白炽SU4);
			this->groupBox白炽->Controls->Add(this->label白炽SU3);
			this->groupBox白炽->Controls->Add(this->label白炽SU2);
			this->groupBox白炽->Controls->Add(this->label白炽SU1);
			this->groupBox白炽->Controls->Add(this->label15);
			this->groupBox白炽->Controls->Add(this->label16);
			this->groupBox白炽->Controls->Add(this->label17);
			this->groupBox白炽->Controls->Add(this->label18);
			this->groupBox白炽->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox白炽->Location = System::Drawing::Point(12, 1084);
			this->groupBox白炽->Name = L"groupBox白炽";
			this->groupBox白炽->Size = System::Drawing::Size(1544, 548);
			this->groupBox白炽->TabIndex = 66;
			this->groupBox白炽->TabStop = false;
			this->groupBox白炽->Text = L"测定白炽灯泡的伏安特性";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(656, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 20);
			this->label3->TabIndex = 115;
			this->label3->Text = L"请打分：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(656, 393);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 20);
			this->label4->TabIndex = 114;
			this->label4->Text = L"本实验总分20";
			// 
			// chart白炽
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart白炽->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart白炽->Legends->Add(legend5);
			this->chart白炽->Location = System::Drawing::Point(15, 219);
			this->chart白炽->Name = L"chart白炽";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chart白炽->Series->Add(series5);
			this->chart白炽->Size = System::Drawing::Size(570, 300);
			this->chart白炽->TabIndex = 113;
			this->chart白炽->Text = L"chart白炽";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(660, 342);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 28);
			this->textBox2->TabIndex = 112;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &元件伏安特性测试::textBox2_TextChanged);
			// 
			// label白炽I10
			// 
			this->label白炽I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I10->Location = System::Drawing::Point(803, 175);
			this->label白炽I10->Name = L"label白炽I10";
			this->label白炽I10->Size = System::Drawing::Size(62, 23);
			this->label白炽I10->TabIndex = 111;
			this->label白炽I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I9
			// 
			this->label白炽I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I9->Location = System::Drawing::Point(735, 175);
			this->label白炽I9->Name = L"label白炽I9";
			this->label白炽I9->Size = System::Drawing::Size(62, 23);
			this->label白炽I9->TabIndex = 110;
			this->label白炽I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I8
			// 
			this->label白炽I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I8->Location = System::Drawing::Point(667, 175);
			this->label白炽I8->Name = L"label白炽I8";
			this->label白炽I8->Size = System::Drawing::Size(62, 23);
			this->label白炽I8->TabIndex = 109;
			this->label白炽I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I7
			// 
			this->label白炽I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I7->Location = System::Drawing::Point(599, 176);
			this->label白炽I7->Name = L"label白炽I7";
			this->label白炽I7->Size = System::Drawing::Size(62, 23);
			this->label白炽I7->TabIndex = 108;
			this->label白炽I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I6
			// 
			this->label白炽I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I6->Location = System::Drawing::Point(531, 175);
			this->label白炽I6->Name = L"label白炽I6";
			this->label白炽I6->Size = System::Drawing::Size(62, 23);
			this->label白炽I6->TabIndex = 107;
			this->label白炽I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I5
			// 
			this->label白炽I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I5->Location = System::Drawing::Point(463, 175);
			this->label白炽I5->Name = L"label白炽I5";
			this->label白炽I5->Size = System::Drawing::Size(62, 23);
			this->label白炽I5->TabIndex = 106;
			this->label白炽I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I4
			// 
			this->label白炽I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I4->Location = System::Drawing::Point(395, 175);
			this->label白炽I4->Name = L"label白炽I4";
			this->label白炽I4->Size = System::Drawing::Size(62, 23);
			this->label白炽I4->TabIndex = 105;
			this->label白炽I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I3
			// 
			this->label白炽I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I3->Location = System::Drawing::Point(327, 176);
			this->label白炽I3->Name = L"label白炽I3";
			this->label白炽I3->Size = System::Drawing::Size(62, 23);
			this->label白炽I3->TabIndex = 104;
			this->label白炽I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I2
			// 
			this->label白炽I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I2->Location = System::Drawing::Point(259, 176);
			this->label白炽I2->Name = L"label白炽I2";
			this->label白炽I2->Size = System::Drawing::Size(62, 23);
			this->label白炽I2->TabIndex = 103;
			this->label白炽I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽I1
			// 
			this->label白炽I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽I1->Location = System::Drawing::Point(193, 176);
			this->label白炽I1->Name = L"label白炽I1";
			this->label白炽I1->Size = System::Drawing::Size(62, 23);
			this->label白炽I1->TabIndex = 102;
			this->label白炽I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U10
			// 
			this->label白炽U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U10->Location = System::Drawing::Point(803, 129);
			this->label白炽U10->Name = L"label白炽U10";
			this->label白炽U10->Size = System::Drawing::Size(62, 23);
			this->label白炽U10->TabIndex = 101;
			this->label白炽U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U9
			// 
			this->label白炽U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U9->Location = System::Drawing::Point(735, 129);
			this->label白炽U9->Name = L"label白炽U9";
			this->label白炽U9->Size = System::Drawing::Size(62, 23);
			this->label白炽U9->TabIndex = 100;
			this->label白炽U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U8
			// 
			this->label白炽U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U8->Location = System::Drawing::Point(667, 129);
			this->label白炽U8->Name = L"label白炽U8";
			this->label白炽U8->Size = System::Drawing::Size(62, 23);
			this->label白炽U8->TabIndex = 99;
			this->label白炽U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U7
			// 
			this->label白炽U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U7->Location = System::Drawing::Point(599, 130);
			this->label白炽U7->Name = L"label白炽U7";
			this->label白炽U7->Size = System::Drawing::Size(62, 23);
			this->label白炽U7->TabIndex = 98;
			this->label白炽U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U6
			// 
			this->label白炽U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U6->Location = System::Drawing::Point(531, 129);
			this->label白炽U6->Name = L"label白炽U6";
			this->label白炽U6->Size = System::Drawing::Size(62, 23);
			this->label白炽U6->TabIndex = 97;
			this->label白炽U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U5
			// 
			this->label白炽U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U5->Location = System::Drawing::Point(463, 129);
			this->label白炽U5->Name = L"label白炽U5";
			this->label白炽U5->Size = System::Drawing::Size(62, 23);
			this->label白炽U5->TabIndex = 96;
			this->label白炽U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U4
			// 
			this->label白炽U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U4->Location = System::Drawing::Point(395, 129);
			this->label白炽U4->Name = L"label白炽U4";
			this->label白炽U4->Size = System::Drawing::Size(62, 23);
			this->label白炽U4->TabIndex = 95;
			this->label白炽U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U3
			// 
			this->label白炽U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U3->Location = System::Drawing::Point(327, 130);
			this->label白炽U3->Name = L"label白炽U3";
			this->label白炽U3->Size = System::Drawing::Size(62, 23);
			this->label白炽U3->TabIndex = 94;
			this->label白炽U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U2
			// 
			this->label白炽U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U2->Location = System::Drawing::Point(259, 130);
			this->label白炽U2->Name = L"label白炽U2";
			this->label白炽U2->Size = System::Drawing::Size(62, 23);
			this->label白炽U2->TabIndex = 93;
			this->label白炽U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽U1
			// 
			this->label白炽U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽U1->Location = System::Drawing::Point(193, 130);
			this->label白炽U1->Name = L"label白炽U1";
			this->label白炽U1->Size = System::Drawing::Size(62, 23);
			this->label白炽U1->TabIndex = 92;
			this->label白炽U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽结论
			// 
			this->label白炽结论->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label白炽结论->Location = System::Drawing::Point(193, 44);
			this->label白炽结论->Name = L"label白炽结论";
			this->label白炽结论->Size = System::Drawing::Size(672, 23);
			this->label白炽结论->TabIndex = 91;
			this->label白炽结论->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU10
			// 
			this->label白炽SU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU10->Location = System::Drawing::Point(803, 83);
			this->label白炽SU10->Name = L"label白炽SU10";
			this->label白炽SU10->Size = System::Drawing::Size(62, 23);
			this->label白炽SU10->TabIndex = 69;
			this->label白炽SU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU9
			// 
			this->label白炽SU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU9->Location = System::Drawing::Point(735, 83);
			this->label白炽SU9->Name = L"label白炽SU9";
			this->label白炽SU9->Size = System::Drawing::Size(62, 23);
			this->label白炽SU9->TabIndex = 68;
			this->label白炽SU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU8
			// 
			this->label白炽SU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU8->Location = System::Drawing::Point(667, 83);
			this->label白炽SU8->Name = L"label白炽SU8";
			this->label白炽SU8->Size = System::Drawing::Size(62, 23);
			this->label白炽SU8->TabIndex = 67;
			this->label白炽SU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU7
			// 
			this->label白炽SU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU7->Location = System::Drawing::Point(599, 84);
			this->label白炽SU7->Name = L"label白炽SU7";
			this->label白炽SU7->Size = System::Drawing::Size(62, 23);
			this->label白炽SU7->TabIndex = 66;
			this->label白炽SU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU6
			// 
			this->label白炽SU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU6->Location = System::Drawing::Point(531, 83);
			this->label白炽SU6->Name = L"label白炽SU6";
			this->label白炽SU6->Size = System::Drawing::Size(62, 23);
			this->label白炽SU6->TabIndex = 65;
			this->label白炽SU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU5
			// 
			this->label白炽SU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU5->Location = System::Drawing::Point(463, 83);
			this->label白炽SU5->Name = L"label白炽SU5";
			this->label白炽SU5->Size = System::Drawing::Size(62, 23);
			this->label白炽SU5->TabIndex = 64;
			this->label白炽SU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU4
			// 
			this->label白炽SU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU4->Location = System::Drawing::Point(395, 83);
			this->label白炽SU4->Name = L"label白炽SU4";
			this->label白炽SU4->Size = System::Drawing::Size(62, 23);
			this->label白炽SU4->TabIndex = 63;
			this->label白炽SU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU3
			// 
			this->label白炽SU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU3->Location = System::Drawing::Point(327, 84);
			this->label白炽SU3->Name = L"label白炽SU3";
			this->label白炽SU3->Size = System::Drawing::Size(62, 23);
			this->label白炽SU3->TabIndex = 62;
			this->label白炽SU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU2
			// 
			this->label白炽SU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU2->Location = System::Drawing::Point(259, 84);
			this->label白炽SU2->Name = L"label白炽SU2";
			this->label白炽SU2->Size = System::Drawing::Size(62, 23);
			this->label白炽SU2->TabIndex = 61;
			this->label白炽SU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label白炽SU1
			// 
			this->label白炽SU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label白炽SU1->Location = System::Drawing::Point(193, 84);
			this->label白炽SU1->Name = L"label白炽SU1";
			this->label白炽SU1->Size = System::Drawing::Size(62, 23);
			this->label白炽SU1->TabIndex = 60;
			this->label白炽SU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(8, 44);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 23);
			this->label15->TabIndex = 58;
			this->label15->Text = L"实验结论";
			// 
			// label16
			// 
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(8, 175);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(176, 23);
			this->label16->TabIndex = 7;
			this->label16->Text = L"电流表读数I(mA)";
			// 
			// label17
			// 
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(6, 131);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(176, 23);
			this->label17->TabIndex = 6;
			this->label17->Text = L"电压表读数Ul(V)";
			// 
			// label18
			// 
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(8, 84);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(145, 23);
			this->label18->TabIndex = 5;
			this->label18->Text = L"电源电压U(V)";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &元件伏安特性测试::printDocument1_PrintPage);
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
			// 元件伏安特性测试
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1767, 732);
			this->Controls->Add(this->panel1);
			this->Name = L"元件伏安特性测试";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"元件伏安特性测试";
			this->Load += gcnew System::EventHandler(this, &元件伏安特性测试::元件伏安特性测试_Load);
			this->Click += gcnew System::EventHandler(this, &元件伏安特性测试::元件伏安特性测试_Click);
			this->panel1->ResumeLayout(false);
			this->groupBox线性->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart线性))->EndInit();
			this->groupBox稳压->ResumeLayout(false);
			this->groupBox稳压->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart稳压))->EndInit();
			this->groupBox硅管->ResumeLayout(false);
			this->groupBox硅管->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart硅管))->EndInit();
			this->groupBox锗管->ResumeLayout(false);
			this->groupBox锗管->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart锗管))->EndInit();
			this->groupBox白炽->ResumeLayout(false);
			this->groupBox白炽->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart白炽))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
			 void chart线性_load();
			 void chart白炽_load();
			 void chart稳压_load();
			 void chart锗管_load();
			 void chart硅管_load();

private: System::Void label稳压ZU3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox6_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	GenerateTotalGrades();
}

		 void GenerateTotalGrades();
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar != '\b') {
		if ((e->KeyChar < '0') || (e->KeyChar > '9'))//这是允许输入0-9数字  
		{
			e->Handled = true;
		}
		TextBox ^ t = (TextBox ^)sender;
		if( t->Text->Length >= 2) e->Handled = true;
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	GenerateTotalGrades();
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	GenerateTotalGrades();
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	GenerateTotalGrades();
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	GenerateTotalGrades();
}
private: System::Void label39_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	NowPrint = "线性";
	Priview();
}
		 String ^NowPrint = "线性";
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Bitmap ^ _NewBitmap;
	_NewBitmap = PrintLoad();
	int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
	int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
	e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	NowPrint = "线性";
	Print();
}
		 void Print();

		 Bitmap^ PrintLoad();
		 void Priview();

private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NowPrint = "线性";
	Priview();
	NowPrint = "白炽";
	Priview();
	NowPrint = "锗管";
	Priview();
	NowPrint = "硅管";
	Priview();
	NowPrint = "稳压";
	Priview();
}

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NowPrint = "线性";
	Print();
	NowPrint = "白炽";
	Print();
	NowPrint = "锗管";
	Print();
	NowPrint = "硅管";
	Print();
	NowPrint = "稳压";
	Print();
}
private: System::Void panel1_Click(System::Object^  sender, System::EventArgs^  e) {
	Control ^c = (Control^)sender ;
	MessageBox::Show(c->Name);


}
private: System::Void 元件伏安特性测试_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void 元件伏安特性测试_Click(System::Object^  sender, System::EventArgs^  e) {
	Control ^c = (Control^)sender;
	MessageBox::Show(c->Name);
}
		
private: System::Void groupBox线性_Enter(System::Object^  sender, System::EventArgs^  e) {
}

		 void SaveCorrectGrades();
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//保存学生成绩
	SaveCorrectGrades();
}
};
}
