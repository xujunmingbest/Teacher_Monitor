#pragma once
#include "tool.h"
namespace ��ʦ�����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ԫ���������Բ��� ժҪ
	/// </summary>
	public ref class Ԫ���������Բ��� : public System::Windows::Forms::Form
	{
	public:
		Ԫ���������Բ���(string &fileName)
		{
			InitializeComponent();
			LoadԪ���������Բ���Data(fileName);
			chart����_load();
			chart�׳�_load();
			chart��ѹ_load();
			chart���_load();
			chart���_load();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((unsigned char)(134)));
			this->fileName = &fileName;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}
		string *fileName = NULL;
		void LoadԪ���������Բ���Data(string &filename);
	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Ԫ���������Բ���()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox���;
	protected:

	private: System::Windows::Forms::Label^  label���ZI10;
	private: System::Windows::Forms::Label^  label���ZI9;
	private: System::Windows::Forms::Label^  label���ZI8;
	private: System::Windows::Forms::Label^  label���ZI7;
	private: System::Windows::Forms::Label^  label���ZI6;
	private: System::Windows::Forms::Label^  label���ZI5;
	private: System::Windows::Forms::Label^  label���ZI4;
	private: System::Windows::Forms::Label^  label���ZI3;
	private: System::Windows::Forms::Label^  label���ZI2;
	private: System::Windows::Forms::Label^  label���ZI1;
	private: System::Windows::Forms::Label^  label���FI10;
	private: System::Windows::Forms::Label^  label���ZU10;
	private: System::Windows::Forms::Label^  label���FI9;
	private: System::Windows::Forms::Label^  label���ZU9;
	private: System::Windows::Forms::Label^  label���FI8;
	private: System::Windows::Forms::Label^  label���ZU8;
	private: System::Windows::Forms::Label^  label���FI7;
	private: System::Windows::Forms::Label^  label���ZU7;
	private: System::Windows::Forms::Label^  label���FI6;
	private: System::Windows::Forms::Label^  label���ZU6;
	private: System::Windows::Forms::Label^  label���FI5;
	private: System::Windows::Forms::Label^  label���ZU5;
	private: System::Windows::Forms::Label^  label���FI4;
	private: System::Windows::Forms::Label^  label���ZU4;
	private: System::Windows::Forms::Label^  label���FI3;
	private: System::Windows::Forms::Label^  label���ZU3;
	private: System::Windows::Forms::Label^  label���FI2;
	private: System::Windows::Forms::Label^  label���ZU2;
	private: System::Windows::Forms::Label^  label���FI1;
	private: System::Windows::Forms::Label^  label���ZU1;
	private: System::Windows::Forms::Label^  label���FU10;
	private: System::Windows::Forms::Label^  label���FSU10;
	private: System::Windows::Forms::Label^  label���FU9;
	private: System::Windows::Forms::Label^  label���FSU9;
	private: System::Windows::Forms::Label^  label���FU8;
	private: System::Windows::Forms::Label^  label���FSU8;
	private: System::Windows::Forms::Label^  label���FU7;
	private: System::Windows::Forms::Label^  label���FSU7;
	private: System::Windows::Forms::Label^  label���FU6;
	private: System::Windows::Forms::Label^  label���FSU6;
	private: System::Windows::Forms::Label^  label���FU5;
	private: System::Windows::Forms::Label^  label���FSU5;
	private: System::Windows::Forms::Label^  label���FU4;
	private: System::Windows::Forms::Label^  label���FSU4;
	private: System::Windows::Forms::Label^  label���FU3;
	private: System::Windows::Forms::Label^  label���FSU3;
	private: System::Windows::Forms::Label^  label���FU2;
	private: System::Windows::Forms::Label^  label���FSU2;
	private: System::Windows::Forms::Label^  label���FU1;
	private: System::Windows::Forms::Label^  label���FSU1;
	private: System::Windows::Forms::Label^  label��ܽ���;

	private: System::Windows::Forms::Label^  label���ZSU10;
	private: System::Windows::Forms::Label^  label���ZSU9;
	private: System::Windows::Forms::Label^  label���ZSU8;
	private: System::Windows::Forms::Label^  label���ZSU7;
	private: System::Windows::Forms::Label^  label���ZSU6;
	private: System::Windows::Forms::Label^  label���ZSU5;
	private: System::Windows::Forms::Label^  label���ZSU4;
	private: System::Windows::Forms::Label^  label���ZSU3;
	private: System::Windows::Forms::Label^  label���ZSU2;
	private: System::Windows::Forms::Label^  label���ZSU1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::GroupBox^  groupBox�׳�;

	private: System::Windows::Forms::Label^  label�׳�I10;
	private: System::Windows::Forms::Label^  label�׳�I9;
	private: System::Windows::Forms::Label^  label�׳�I8;
	private: System::Windows::Forms::Label^  label�׳�I7;
	private: System::Windows::Forms::Label^  label�׳�I6;
	private: System::Windows::Forms::Label^  label�׳�I5;
	private: System::Windows::Forms::Label^  label�׳�I4;
	private: System::Windows::Forms::Label^  label�׳�I3;
	private: System::Windows::Forms::Label^  label�׳�I2;
	private: System::Windows::Forms::Label^  label�׳�I1;
	private: System::Windows::Forms::Label^  label�׳�U10;
	private: System::Windows::Forms::Label^  label�׳�U9;
	private: System::Windows::Forms::Label^  label�׳�U8;
	private: System::Windows::Forms::Label^  label�׳�U7;
	private: System::Windows::Forms::Label^  label�׳�U6;
	private: System::Windows::Forms::Label^  label�׳�U5;
	private: System::Windows::Forms::Label^  label�׳�U4;
	private: System::Windows::Forms::Label^  label�׳�U3;
	private: System::Windows::Forms::Label^  label�׳�U2;
	private: System::Windows::Forms::Label^  label�׳�U1;
	private: System::Windows::Forms::Label^  label�׳����;
	private: System::Windows::Forms::Label^  label�׳�SU10;
	private: System::Windows::Forms::Label^  label�׳�SU9;
	private: System::Windows::Forms::Label^  label�׳�SU8;
	private: System::Windows::Forms::Label^  label�׳�SU7;
	private: System::Windows::Forms::Label^  label�׳�SU6;
	private: System::Windows::Forms::Label^  label�׳�SU5;
	private: System::Windows::Forms::Label^  label�׳�SU4;
	private: System::Windows::Forms::Label^  label�׳�SU3;
	private: System::Windows::Forms::Label^  label�׳�SU2;
	private: System::Windows::Forms::Label^  label�׳�SU1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label���Խ���;
	private: System::Windows::Forms::Label^  label����I10;
	private: System::Windows::Forms::Label^  label����I9;
	private: System::Windows::Forms::Label^  label����I8;
	private: System::Windows::Forms::Label^  label����I7;
	private: System::Windows::Forms::Label^  label����I6;
	private: System::Windows::Forms::Label^  label����I5;
	private: System::Windows::Forms::Label^  label����I4;
	private: System::Windows::Forms::Label^  label����I3;
	private: System::Windows::Forms::Label^  label����I2;
	private: System::Windows::Forms::Label^  label����I1;
	private: System::Windows::Forms::Label^  label����U10;
	private: System::Windows::Forms::Label^  label����U9;
	private: System::Windows::Forms::Label^  label����U8;
	private: System::Windows::Forms::Label^  label����U7;
	private: System::Windows::Forms::Label^  label����U6;
	private: System::Windows::Forms::Label^  label����U5;
	private: System::Windows::Forms::Label^  label����U4;
	private: System::Windows::Forms::Label^  label����U3;
	private: System::Windows::Forms::Label^  label����U2;
	private: System::Windows::Forms::Label^  label����U1;
	private: System::Windows::Forms::Label^  label����SU10;
	private: System::Windows::Forms::Label^  label����SU9;
	private: System::Windows::Forms::Label^  label����SU8;
	private: System::Windows::Forms::Label^  label����SU7;
	private: System::Windows::Forms::Label^  label����SU6;
	private: System::Windows::Forms::Label^  label����SU5;
	private: System::Windows::Forms::Label^  label����SU4;
	private: System::Windows::Forms::Label^  label����SU3;
	private: System::Windows::Forms::Label^  label����SU2;
	private: System::Windows::Forms::Label^  label����SU1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::GroupBox^  groupBox��ѹ;

private: System::Windows::Forms::Label^  label��ѹFI10;
private: System::Windows::Forms::Label^  label��ѹFI9;
private: System::Windows::Forms::Label^  label��ѹFI8;
private: System::Windows::Forms::Label^  label��ѹFI7;
private: System::Windows::Forms::Label^  label��ѹFI6;
private: System::Windows::Forms::Label^  label��ѹFI5;
private: System::Windows::Forms::Label^  label��ѹFI4;
private: System::Windows::Forms::Label^  label��ѹFI3;
private: System::Windows::Forms::Label^  label��ѹFI2;
private: System::Windows::Forms::Label^  label��ѹFI1;
private: System::Windows::Forms::Label^  label��ѹFU10;
private: System::Windows::Forms::Label^  label��ѹFU9;
private: System::Windows::Forms::Label^  label��ѹFU8;
private: System::Windows::Forms::Label^  label��ѹFU7;
private: System::Windows::Forms::Label^  label��ѹFU6;
private: System::Windows::Forms::Label^  label��ѹFU5;
private: System::Windows::Forms::Label^  label��ѹFU4;
private: System::Windows::Forms::Label^  label��ѹFU3;
private: System::Windows::Forms::Label^  label��ѹFU2;
private: System::Windows::Forms::Label^  label��ѹFU1;
private: System::Windows::Forms::Label^  label��ѹZI10;
private: System::Windows::Forms::Label^  label��ѹZI9;
private: System::Windows::Forms::Label^  label��ѹZI8;
private: System::Windows::Forms::Label^  label��ѹZI7;
private: System::Windows::Forms::Label^  label��ѹZI6;
private: System::Windows::Forms::Label^  label��ѹZI5;
private: System::Windows::Forms::Label^  label��ѹZI4;
private: System::Windows::Forms::Label^  label��ѹZI3;
private: System::Windows::Forms::Label^  label��ѹZI2;
private: System::Windows::Forms::Label^  label��ѹZI1;
private: System::Windows::Forms::Label^  label��ѹZU10;
private: System::Windows::Forms::Label^  label��ѹZU9;
private: System::Windows::Forms::Label^  label��ѹZU8;
private: System::Windows::Forms::Label^  label��ѹZU7;
private: System::Windows::Forms::Label^  label��ѹZU6;
private: System::Windows::Forms::Label^  label��ѹZU5;
private: System::Windows::Forms::Label^  label��ѹZU4;
private: System::Windows::Forms::Label^  label��ѹZU3;
private: System::Windows::Forms::Label^  label��ѹZU2;
private: System::Windows::Forms::Label^  label��ѹZU1;
private: System::Windows::Forms::Label^  label��ѹFSU10;
private: System::Windows::Forms::Label^  label��ѹFSU9;
private: System::Windows::Forms::Label^  label��ѹFSU8;
private: System::Windows::Forms::Label^  label��ѹFSU7;
private: System::Windows::Forms::Label^  label��ѹFSU6;
private: System::Windows::Forms::Label^  label��ѹFSU5;
private: System::Windows::Forms::Label^  label��ѹFSU4;
private: System::Windows::Forms::Label^  label��ѹFSU3;
private: System::Windows::Forms::Label^  label��ѹFSU2;
private: System::Windows::Forms::Label^  label��ѹFSU1;
private: System::Windows::Forms::Label^  label��ѹ����;
private: System::Windows::Forms::Label^  label��ѹZSU10;
private: System::Windows::Forms::Label^  label��ѹZSU9;
private: System::Windows::Forms::Label^  label��ѹZSU8;
private: System::Windows::Forms::Label^  label��ѹZSU7;
private: System::Windows::Forms::Label^  label��ѹZSU6;
private: System::Windows::Forms::Label^  label��ѹZSU5;
private: System::Windows::Forms::Label^  label��ѹZSU4;
private: System::Windows::Forms::Label^  label��ѹZSU3;
private: System::Windows::Forms::Label^  label��ѹZSU2;
private: System::Windows::Forms::Label^  label��ѹZSU1;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::GroupBox^  groupBox���;

private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart���;

private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label1���FI10;
private: System::Windows::Forms::Label^  label1���FI9;
private: System::Windows::Forms::Label^  label1���FI8;
private: System::Windows::Forms::Label^  label1���FI7;
private: System::Windows::Forms::Label^  label1���FI6;
private: System::Windows::Forms::Label^  label1���FI5;
private: System::Windows::Forms::Label^  label1���FI4;
private: System::Windows::Forms::Label^  label1���FI3;
private: System::Windows::Forms::Label^  label1���FI2;
private: System::Windows::Forms::Label^  label1���FI1;
private: System::Windows::Forms::Label^  label1���FU10;
private: System::Windows::Forms::Label^  label1���FU9;
private: System::Windows::Forms::Label^  label1���FU8;
private: System::Windows::Forms::Label^  label1���FU7;
private: System::Windows::Forms::Label^  label1���FU6;
private: System::Windows::Forms::Label^  label1���FU5;
private: System::Windows::Forms::Label^  label1���FU4;
private: System::Windows::Forms::Label^  label1���FU3;
private: System::Windows::Forms::Label^  label1���FU2;
private: System::Windows::Forms::Label^  label1���FU1;
private: System::Windows::Forms::Label^  label���ZI10;
private: System::Windows::Forms::Label^  label���ZI9;
private: System::Windows::Forms::Label^  label���ZI8;
private: System::Windows::Forms::Label^  label���ZI7;
private: System::Windows::Forms::Label^  label���ZI6;
private: System::Windows::Forms::Label^  label���ZI5;
private: System::Windows::Forms::Label^  label���ZI4;
private: System::Windows::Forms::Label^  label���ZI3;
private: System::Windows::Forms::Label^  label���ZI2;
private: System::Windows::Forms::Label^  label���ZI1;
private: System::Windows::Forms::Label^  label���ZU10;
private: System::Windows::Forms::Label^  label���ZU9;
private: System::Windows::Forms::Label^  label���ZU8;
private: System::Windows::Forms::Label^  label���ZU7;
private: System::Windows::Forms::Label^  label���ZU6;
private: System::Windows::Forms::Label^  label���ZU5;
private: System::Windows::Forms::Label^  label���ZU4;
private: System::Windows::Forms::Label^  label���ZU3;
private: System::Windows::Forms::Label^  label���ZU2;
private: System::Windows::Forms::Label^  label���ZU1;
private: System::Windows::Forms::Label^  label���FSU10;
private: System::Windows::Forms::Label^  label���FSU9;
private: System::Windows::Forms::Label^  label���FSU8;
private: System::Windows::Forms::Label^  label���FSU7;
private: System::Windows::Forms::Label^  label���FSU6;
private: System::Windows::Forms::Label^  label���FSU5;
private: System::Windows::Forms::Label^  label���FSU4;
private: System::Windows::Forms::Label^  label���FSU3;
private: System::Windows::Forms::Label^  label���FSU2;
private: System::Windows::Forms::Label^  label���FSU1;
private: System::Windows::Forms::Label^  label��ܽ���;
private: System::Windows::Forms::Label^  label���ZSU10;
private: System::Windows::Forms::Label^  label���ZSU9;
private: System::Windows::Forms::Label^  label���ZSU8;
private: System::Windows::Forms::Label^  label���ZSU7;
private: System::Windows::Forms::Label^  label���ZSU6;
private: System::Windows::Forms::Label^  label���ZSU5;
private: System::Windows::Forms::Label^  label���ZSU4;
private: System::Windows::Forms::Label^  label���ZSU3;
private: System::Windows::Forms::Label^  label���ZSU2;
private: System::Windows::Forms::Label^  label���ZSU1;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart���;

private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart�׳�;


private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart����;

private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  labelTotalGrade;

private: System::Windows::Forms::Label^  label27;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart��ѹ;

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
private: System::Windows::Forms::GroupBox^  groupBox����;
private: System::Windows::Forms::Button^  button1;









	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Ԫ���������Բ���::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox���� = (gcnew System::Windows::Forms::GroupBox());
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
			this->chart���� = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label���Խ��� = (gcnew System::Windows::Forms::Label());
			this->label����I10 = (gcnew System::Windows::Forms::Label());
			this->label����I9 = (gcnew System::Windows::Forms::Label());
			this->label����I8 = (gcnew System::Windows::Forms::Label());
			this->label����I7 = (gcnew System::Windows::Forms::Label());
			this->label����I6 = (gcnew System::Windows::Forms::Label());
			this->label����I5 = (gcnew System::Windows::Forms::Label());
			this->label����I4 = (gcnew System::Windows::Forms::Label());
			this->label����I3 = (gcnew System::Windows::Forms::Label());
			this->label����I2 = (gcnew System::Windows::Forms::Label());
			this->label����I1 = (gcnew System::Windows::Forms::Label());
			this->label����U10 = (gcnew System::Windows::Forms::Label());
			this->label����U9 = (gcnew System::Windows::Forms::Label());
			this->label����U8 = (gcnew System::Windows::Forms::Label());
			this->label����U7 = (gcnew System::Windows::Forms::Label());
			this->label����U6 = (gcnew System::Windows::Forms::Label());
			this->label����U5 = (gcnew System::Windows::Forms::Label());
			this->label����U4 = (gcnew System::Windows::Forms::Label());
			this->label����U3 = (gcnew System::Windows::Forms::Label());
			this->label����U2 = (gcnew System::Windows::Forms::Label());
			this->label����U1 = (gcnew System::Windows::Forms::Label());
			this->label����SU10 = (gcnew System::Windows::Forms::Label());
			this->label����SU9 = (gcnew System::Windows::Forms::Label());
			this->label����SU8 = (gcnew System::Windows::Forms::Label());
			this->label����SU7 = (gcnew System::Windows::Forms::Label());
			this->label����SU6 = (gcnew System::Windows::Forms::Label());
			this->label����SU5 = (gcnew System::Windows::Forms::Label());
			this->label����SU4 = (gcnew System::Windows::Forms::Label());
			this->label����SU3 = (gcnew System::Windows::Forms::Label());
			this->label����SU2 = (gcnew System::Windows::Forms::Label());
			this->label����SU1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->groupBox��ѹ = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTotalGrade = (gcnew System::Windows::Forms::Label());
			this->chart��ѹ = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label��ѹFI10 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFI9 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFI8 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFI7 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFI6 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFI5 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFI4 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFI3 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFI2 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFI1 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFU10 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFU9 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFU8 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFU7 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFU6 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFU5 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFU4 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFU3 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFU2 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFU1 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZI10 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZI9 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZI8 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZI7 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZI6 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZI5 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZI4 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZI3 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZI2 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZI1 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZU10 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZU9 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZU8 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZU7 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZU6 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZU5 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZU4 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZU3 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZU2 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZU1 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFSU10 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFSU9 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFSU8 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFSU7 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFSU6 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFSU5 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFSU4 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFSU3 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFSU2 = (gcnew System::Windows::Forms::Label());
			this->label��ѹFSU1 = (gcnew System::Windows::Forms::Label());
			this->label��ѹ���� = (gcnew System::Windows::Forms::Label());
			this->label��ѹZSU10 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZSU9 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZSU8 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZSU7 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZSU6 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZSU5 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZSU4 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZSU3 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZSU2 = (gcnew System::Windows::Forms::Label());
			this->label��ѹZSU1 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->groupBox��� = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->chart��� = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1���FI10 = (gcnew System::Windows::Forms::Label());
			this->label1���FI9 = (gcnew System::Windows::Forms::Label());
			this->label1���FI8 = (gcnew System::Windows::Forms::Label());
			this->label1���FI7 = (gcnew System::Windows::Forms::Label());
			this->label1���FI6 = (gcnew System::Windows::Forms::Label());
			this->label1���FI5 = (gcnew System::Windows::Forms::Label());
			this->label1���FI4 = (gcnew System::Windows::Forms::Label());
			this->label1���FI3 = (gcnew System::Windows::Forms::Label());
			this->label1���FI2 = (gcnew System::Windows::Forms::Label());
			this->label1���FI1 = (gcnew System::Windows::Forms::Label());
			this->label1���FU10 = (gcnew System::Windows::Forms::Label());
			this->label1���FU9 = (gcnew System::Windows::Forms::Label());
			this->label1���FU8 = (gcnew System::Windows::Forms::Label());
			this->label1���FU7 = (gcnew System::Windows::Forms::Label());
			this->label1���FU6 = (gcnew System::Windows::Forms::Label());
			this->label1���FU5 = (gcnew System::Windows::Forms::Label());
			this->label1���FU4 = (gcnew System::Windows::Forms::Label());
			this->label1���FU3 = (gcnew System::Windows::Forms::Label());
			this->label1���FU2 = (gcnew System::Windows::Forms::Label());
			this->label1���FU1 = (gcnew System::Windows::Forms::Label());
			this->label���ZI10 = (gcnew System::Windows::Forms::Label());
			this->label���ZI9 = (gcnew System::Windows::Forms::Label());
			this->label���ZI8 = (gcnew System::Windows::Forms::Label());
			this->label���ZI7 = (gcnew System::Windows::Forms::Label());
			this->label���ZI6 = (gcnew System::Windows::Forms::Label());
			this->label���ZI5 = (gcnew System::Windows::Forms::Label());
			this->label���ZI4 = (gcnew System::Windows::Forms::Label());
			this->label���ZI3 = (gcnew System::Windows::Forms::Label());
			this->label���ZI2 = (gcnew System::Windows::Forms::Label());
			this->label���ZI1 = (gcnew System::Windows::Forms::Label());
			this->label���ZU10 = (gcnew System::Windows::Forms::Label());
			this->label���ZU9 = (gcnew System::Windows::Forms::Label());
			this->label���ZU8 = (gcnew System::Windows::Forms::Label());
			this->label���ZU7 = (gcnew System::Windows::Forms::Label());
			this->label���ZU6 = (gcnew System::Windows::Forms::Label());
			this->label���ZU5 = (gcnew System::Windows::Forms::Label());
			this->label���ZU4 = (gcnew System::Windows::Forms::Label());
			this->label���ZU3 = (gcnew System::Windows::Forms::Label());
			this->label���ZU2 = (gcnew System::Windows::Forms::Label());
			this->label���ZU1 = (gcnew System::Windows::Forms::Label());
			this->label���FSU10 = (gcnew System::Windows::Forms::Label());
			this->label���FSU9 = (gcnew System::Windows::Forms::Label());
			this->label���FSU8 = (gcnew System::Windows::Forms::Label());
			this->label���FSU7 = (gcnew System::Windows::Forms::Label());
			this->label���FSU6 = (gcnew System::Windows::Forms::Label());
			this->label���FSU5 = (gcnew System::Windows::Forms::Label());
			this->label���FSU4 = (gcnew System::Windows::Forms::Label());
			this->label���FSU3 = (gcnew System::Windows::Forms::Label());
			this->label���FSU2 = (gcnew System::Windows::Forms::Label());
			this->label���FSU1 = (gcnew System::Windows::Forms::Label());
			this->label��ܽ��� = (gcnew System::Windows::Forms::Label());
			this->label���ZSU10 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU9 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU8 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU7 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU6 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU5 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU4 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU3 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU2 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU1 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox��� = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->chart��� = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label���ZI10 = (gcnew System::Windows::Forms::Label());
			this->label���ZI9 = (gcnew System::Windows::Forms::Label());
			this->label���ZI8 = (gcnew System::Windows::Forms::Label());
			this->label���ZI7 = (gcnew System::Windows::Forms::Label());
			this->label���ZI6 = (gcnew System::Windows::Forms::Label());
			this->label���ZI5 = (gcnew System::Windows::Forms::Label());
			this->label���ZI4 = (gcnew System::Windows::Forms::Label());
			this->label���ZI3 = (gcnew System::Windows::Forms::Label());
			this->label���ZI2 = (gcnew System::Windows::Forms::Label());
			this->label���ZI1 = (gcnew System::Windows::Forms::Label());
			this->label���FI10 = (gcnew System::Windows::Forms::Label());
			this->label���ZU10 = (gcnew System::Windows::Forms::Label());
			this->label���FI9 = (gcnew System::Windows::Forms::Label());
			this->label���ZU9 = (gcnew System::Windows::Forms::Label());
			this->label���FI8 = (gcnew System::Windows::Forms::Label());
			this->label���ZU8 = (gcnew System::Windows::Forms::Label());
			this->label���FI7 = (gcnew System::Windows::Forms::Label());
			this->label���ZU7 = (gcnew System::Windows::Forms::Label());
			this->label���FI6 = (gcnew System::Windows::Forms::Label());
			this->label���ZU6 = (gcnew System::Windows::Forms::Label());
			this->label���FI5 = (gcnew System::Windows::Forms::Label());
			this->label���ZU5 = (gcnew System::Windows::Forms::Label());
			this->label���FI4 = (gcnew System::Windows::Forms::Label());
			this->label���ZU4 = (gcnew System::Windows::Forms::Label());
			this->label���FI3 = (gcnew System::Windows::Forms::Label());
			this->label���ZU3 = (gcnew System::Windows::Forms::Label());
			this->label���FI2 = (gcnew System::Windows::Forms::Label());
			this->label���ZU2 = (gcnew System::Windows::Forms::Label());
			this->label���FI1 = (gcnew System::Windows::Forms::Label());
			this->label���ZU1 = (gcnew System::Windows::Forms::Label());
			this->label���FU10 = (gcnew System::Windows::Forms::Label());
			this->label���FSU10 = (gcnew System::Windows::Forms::Label());
			this->label���FU9 = (gcnew System::Windows::Forms::Label());
			this->label���FSU9 = (gcnew System::Windows::Forms::Label());
			this->label���FU8 = (gcnew System::Windows::Forms::Label());
			this->label���FSU8 = (gcnew System::Windows::Forms::Label());
			this->label���FU7 = (gcnew System::Windows::Forms::Label());
			this->label���FSU7 = (gcnew System::Windows::Forms::Label());
			this->label���FU6 = (gcnew System::Windows::Forms::Label());
			this->label���FSU6 = (gcnew System::Windows::Forms::Label());
			this->label���FU5 = (gcnew System::Windows::Forms::Label());
			this->label���FSU5 = (gcnew System::Windows::Forms::Label());
			this->label���FU4 = (gcnew System::Windows::Forms::Label());
			this->label���FSU4 = (gcnew System::Windows::Forms::Label());
			this->label���FU3 = (gcnew System::Windows::Forms::Label());
			this->label���FSU3 = (gcnew System::Windows::Forms::Label());
			this->label���FU2 = (gcnew System::Windows::Forms::Label());
			this->label���FSU2 = (gcnew System::Windows::Forms::Label());
			this->label���FU1 = (gcnew System::Windows::Forms::Label());
			this->label���FSU1 = (gcnew System::Windows::Forms::Label());
			this->label��ܽ��� = (gcnew System::Windows::Forms::Label());
			this->label���ZSU10 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU9 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU8 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU7 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU6 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU5 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU4 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU3 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU2 = (gcnew System::Windows::Forms::Label());
			this->label���ZSU1 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox�׳� = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chart�׳� = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label�׳�I10 = (gcnew System::Windows::Forms::Label());
			this->label�׳�I9 = (gcnew System::Windows::Forms::Label());
			this->label�׳�I8 = (gcnew System::Windows::Forms::Label());
			this->label�׳�I7 = (gcnew System::Windows::Forms::Label());
			this->label�׳�I6 = (gcnew System::Windows::Forms::Label());
			this->label�׳�I5 = (gcnew System::Windows::Forms::Label());
			this->label�׳�I4 = (gcnew System::Windows::Forms::Label());
			this->label�׳�I3 = (gcnew System::Windows::Forms::Label());
			this->label�׳�I2 = (gcnew System::Windows::Forms::Label());
			this->label�׳�I1 = (gcnew System::Windows::Forms::Label());
			this->label�׳�U10 = (gcnew System::Windows::Forms::Label());
			this->label�׳�U9 = (gcnew System::Windows::Forms::Label());
			this->label�׳�U8 = (gcnew System::Windows::Forms::Label());
			this->label�׳�U7 = (gcnew System::Windows::Forms::Label());
			this->label�׳�U6 = (gcnew System::Windows::Forms::Label());
			this->label�׳�U5 = (gcnew System::Windows::Forms::Label());
			this->label�׳�U4 = (gcnew System::Windows::Forms::Label());
			this->label�׳�U3 = (gcnew System::Windows::Forms::Label());
			this->label�׳�U2 = (gcnew System::Windows::Forms::Label());
			this->label�׳�U1 = (gcnew System::Windows::Forms::Label());
			this->label�׳���� = (gcnew System::Windows::Forms::Label());
			this->label�׳�SU10 = (gcnew System::Windows::Forms::Label());
			this->label�׳�SU9 = (gcnew System::Windows::Forms::Label());
			this->label�׳�SU8 = (gcnew System::Windows::Forms::Label());
			this->label�׳�SU7 = (gcnew System::Windows::Forms::Label());
			this->label�׳�SU6 = (gcnew System::Windows::Forms::Label());
			this->label�׳�SU5 = (gcnew System::Windows::Forms::Label());
			this->label�׳�SU4 = (gcnew System::Windows::Forms::Label());
			this->label�׳�SU3 = (gcnew System::Windows::Forms::Label());
			this->label�׳�SU2 = (gcnew System::Windows::Forms::Label());
			this->label�׳�SU1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1->SuspendLayout();
			this->groupBox����->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart����))->BeginInit();
			this->groupBox��ѹ->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart��ѹ))->BeginInit();
			this->groupBox���->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart���))->BeginInit();
			this->groupBox���->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart���))->BeginInit();
			this->groupBox�׳�->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart�׳�))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->groupBox����);
			this->panel1->Controls->Add(this->label47);
			this->panel1->Controls->Add(this->label46);
			this->panel1->Controls->Add(this->label44);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->groupBox��ѹ);
			this->panel1->Controls->Add(this->groupBox���);
			this->panel1->Controls->Add(this->groupBox���);
			this->panel1->Controls->Add(this->groupBox�׳�);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1767, 732);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &Ԫ���������Բ���::panel1_Click);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Ԫ���������Բ���::panel1_Paint);
			// 
			// groupBox����
			// 
			this->groupBox����->Controls->Add(this->groupBox7);
			this->groupBox����->Controls->Add(this->groupBox1);
			this->groupBox����->Location = System::Drawing::Point(24, 29);
			this->groupBox����->Name = L"groupBox����";
			this->groupBox����->Size = System::Drawing::Size(1524, 981);
			this->groupBox����->TabIndex = 95;
			this->groupBox����->TabStop = false;
			this->groupBox����->Enter += gcnew System::EventHandler(this, &Ԫ���������Բ���::groupBox����_Enter);
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
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox7->Location = System::Drawing::Point(38, 24);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(909, 314);
			this->groupBox7->TabIndex = 195;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"ѧ��������Ϣ";
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
			this->label30->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->Location = System::Drawing::Point(21, 26);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(93, 20);
			this->label30->TabIndex = 172;
			this->label30->Text = L"ʵ������";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->Location = System::Drawing::Point(28, 149);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(51, 20);
			this->label28->TabIndex = 192;
			this->label28->Text = L"�༶";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->Location = System::Drawing::Point(28, 238);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(72, 20);
			this->label43->TabIndex = 183;
			this->label43->Text = L"ʵ����";
			// 
			// label215
			// 
			this->label215->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label215->Location = System::Drawing::Point(133, 26);
			this->label215->Name = L"label215";
			this->label215->Size = System::Drawing::Size(290, 23);
			this->label215->TabIndex = 191;
			this->label215->Text = L"Ԫ���������ԵĲ���";
			this->label215->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label42->Location = System::Drawing::Point(28, 276);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(93, 20);
			this->label42->TabIndex = 185;
			this->label42->Text = L"ָ����ʦ";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->Location = System::Drawing::Point(28, 69);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(51, 20);
			this->label35->TabIndex = 173;
			this->label35->Text = L"����";
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
			this->label36->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->Location = System::Drawing::Point(28, 111);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(51, 20);
			this->label36->TabIndex = 174;
			this->label36->Text = L"����";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label41->Location = System::Drawing::Point(28, 186);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(51, 20);
			this->label41->TabIndex = 181;
			this->label41->Text = L"רҵ";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label40->Location = System::Drawing::Point(258, 149);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(51, 20);
			this->label40->TabIndex = 187;
			this->label40->Text = L"���";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->Location = System::Drawing::Point(258, 69);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(51, 20);
			this->label37->TabIndex = 177;
			this->label37->Text = L"ѧ��";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->Location = System::Drawing::Point(258, 99);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(51, 20);
			this->label38->TabIndex = 178;
			this->label38->Text = L"ѧ��";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->Location = System::Drawing::Point(258, 183);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(51, 20);
			this->label39->TabIndex = 189;
			this->label39->Text = L"ʱ��";
			this->label39->Click += gcnew System::EventHandler(this, &Ԫ���������Բ���::label39_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->chart����);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label���Խ���);
			this->groupBox1->Controls->Add(this->label����I10);
			this->groupBox1->Controls->Add(this->label����I9);
			this->groupBox1->Controls->Add(this->label����I8);
			this->groupBox1->Controls->Add(this->label����I7);
			this->groupBox1->Controls->Add(this->label����I6);
			this->groupBox1->Controls->Add(this->label����I5);
			this->groupBox1->Controls->Add(this->label����I4);
			this->groupBox1->Controls->Add(this->label����I3);
			this->groupBox1->Controls->Add(this->label����I2);
			this->groupBox1->Controls->Add(this->label����I1);
			this->groupBox1->Controls->Add(this->label����U10);
			this->groupBox1->Controls->Add(this->label����U9);
			this->groupBox1->Controls->Add(this->label����U8);
			this->groupBox1->Controls->Add(this->label����U7);
			this->groupBox1->Controls->Add(this->label����U6);
			this->groupBox1->Controls->Add(this->label����U5);
			this->groupBox1->Controls->Add(this->label����U4);
			this->groupBox1->Controls->Add(this->label����U3);
			this->groupBox1->Controls->Add(this->label����U2);
			this->groupBox1->Controls->Add(this->label����U1);
			this->groupBox1->Controls->Add(this->label����SU10);
			this->groupBox1->Controls->Add(this->label����SU9);
			this->groupBox1->Controls->Add(this->label����SU8);
			this->groupBox1->Controls->Add(this->label����SU7);
			this->groupBox1->Controls->Add(this->label����SU6);
			this->groupBox1->Controls->Add(this->label����SU5);
			this->groupBox1->Controls->Add(this->label����SU4);
			this->groupBox1->Controls->Add(this->label����SU3);
			this->groupBox1->Controls->Add(this->label����SU2);
			this->groupBox1->Controls->Add(this->label����SU1);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(38, 390);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(909, 546);
			this->groupBox1->TabIndex = 65;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"�ⶨ���Ե������ķ�������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(653, 308);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 94;
			this->label2->Text = L"���֣�";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(653, 405);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 20);
			this->label1->TabIndex = 93;
			this->label1->Text = L"��ʵ���ܷ�20";
			// 
			// chart����
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart����->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart����->Legends->Add(legend1);
			this->chart����->Location = System::Drawing::Point(12, 231);
			this->chart����->Name = L"chart����";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart����->Series->Add(series1);
			this->chart����->Size = System::Drawing::Size(570, 300);
			this->chart����->TabIndex = 92;
			this->chart����->Text = L"chart����";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(657, 354);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 28);
			this->textBox1->TabIndex = 91;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Ԫ���������Բ���::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Ԫ���������Բ���::textBox1_KeyPress);
			// 
			// label���Խ���
			// 
			this->label���Խ���->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���Խ���->Location = System::Drawing::Point(193, 36);
			this->label���Խ���->Name = L"label���Խ���";
			this->label���Խ���->Size = System::Drawing::Size(672, 30);
			this->label���Խ���->TabIndex = 90;
			this->label���Խ���->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����I10
			// 
			this->label����I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����I10->Location = System::Drawing::Point(803, 175);
			this->label����I10->Name = L"label����I10";
			this->label����I10->Size = System::Drawing::Size(62, 23);
			this->label����I10->TabIndex = 89;
			this->label����I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����I9
			// 
			this->label����I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����I9->Location = System::Drawing::Point(735, 175);
			this->label����I9->Name = L"label����I9";
			this->label����I9->Size = System::Drawing::Size(62, 23);
			this->label����I9->TabIndex = 88;
			this->label����I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����I8
			// 
			this->label����I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����I8->Location = System::Drawing::Point(667, 175);
			this->label����I8->Name = L"label����I8";
			this->label����I8->Size = System::Drawing::Size(62, 23);
			this->label����I8->TabIndex = 87;
			this->label����I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����I7
			// 
			this->label����I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����I7->Location = System::Drawing::Point(599, 176);
			this->label����I7->Name = L"label����I7";
			this->label����I7->Size = System::Drawing::Size(62, 23);
			this->label����I7->TabIndex = 86;
			this->label����I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����I6
			// 
			this->label����I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����I6->Location = System::Drawing::Point(531, 175);
			this->label����I6->Name = L"label����I6";
			this->label����I6->Size = System::Drawing::Size(62, 23);
			this->label����I6->TabIndex = 85;
			this->label����I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����I5
			// 
			this->label����I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����I5->Location = System::Drawing::Point(463, 175);
			this->label����I5->Name = L"label����I5";
			this->label����I5->Size = System::Drawing::Size(62, 23);
			this->label����I5->TabIndex = 84;
			this->label����I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����I4
			// 
			this->label����I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����I4->Location = System::Drawing::Point(395, 175);
			this->label����I4->Name = L"label����I4";
			this->label����I4->Size = System::Drawing::Size(62, 23);
			this->label����I4->TabIndex = 83;
			this->label����I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����I3
			// 
			this->label����I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����I3->Location = System::Drawing::Point(327, 176);
			this->label����I3->Name = L"label����I3";
			this->label����I3->Size = System::Drawing::Size(62, 23);
			this->label����I3->TabIndex = 82;
			this->label����I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����I2
			// 
			this->label����I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����I2->Location = System::Drawing::Point(259, 176);
			this->label����I2->Name = L"label����I2";
			this->label����I2->Size = System::Drawing::Size(62, 23);
			this->label����I2->TabIndex = 81;
			this->label����I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����I1
			// 
			this->label����I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����I1->Location = System::Drawing::Point(193, 176);
			this->label����I1->Name = L"label����I1";
			this->label����I1->Size = System::Drawing::Size(62, 23);
			this->label����I1->TabIndex = 80;
			this->label����I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����U10
			// 
			this->label����U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����U10->Location = System::Drawing::Point(803, 129);
			this->label����U10->Name = L"label����U10";
			this->label����U10->Size = System::Drawing::Size(62, 23);
			this->label����U10->TabIndex = 79;
			this->label����U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����U9
			// 
			this->label����U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����U9->Location = System::Drawing::Point(735, 129);
			this->label����U9->Name = L"label����U9";
			this->label����U9->Size = System::Drawing::Size(62, 23);
			this->label����U9->TabIndex = 78;
			this->label����U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����U8
			// 
			this->label����U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����U8->Location = System::Drawing::Point(667, 129);
			this->label����U8->Name = L"label����U8";
			this->label����U8->Size = System::Drawing::Size(62, 23);
			this->label����U8->TabIndex = 77;
			this->label����U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����U7
			// 
			this->label����U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����U7->Location = System::Drawing::Point(599, 130);
			this->label����U7->Name = L"label����U7";
			this->label����U7->Size = System::Drawing::Size(62, 23);
			this->label����U7->TabIndex = 76;
			this->label����U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����U6
			// 
			this->label����U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����U6->Location = System::Drawing::Point(531, 129);
			this->label����U6->Name = L"label����U6";
			this->label����U6->Size = System::Drawing::Size(62, 23);
			this->label����U6->TabIndex = 75;
			this->label����U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����U5
			// 
			this->label����U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����U5->Location = System::Drawing::Point(463, 129);
			this->label����U5->Name = L"label����U5";
			this->label����U5->Size = System::Drawing::Size(62, 23);
			this->label����U5->TabIndex = 74;
			this->label����U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����U4
			// 
			this->label����U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����U4->Location = System::Drawing::Point(395, 129);
			this->label����U4->Name = L"label����U4";
			this->label����U4->Size = System::Drawing::Size(62, 23);
			this->label����U4->TabIndex = 73;
			this->label����U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����U3
			// 
			this->label����U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����U3->Location = System::Drawing::Point(327, 130);
			this->label����U3->Name = L"label����U3";
			this->label����U3->Size = System::Drawing::Size(62, 23);
			this->label����U3->TabIndex = 72;
			this->label����U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����U2
			// 
			this->label����U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����U2->Location = System::Drawing::Point(259, 130);
			this->label����U2->Name = L"label����U2";
			this->label����U2->Size = System::Drawing::Size(62, 23);
			this->label����U2->TabIndex = 71;
			this->label����U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����U1
			// 
			this->label����U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����U1->Location = System::Drawing::Point(193, 130);
			this->label����U1->Name = L"label����U1";
			this->label����U1->Size = System::Drawing::Size(62, 23);
			this->label����U1->TabIndex = 70;
			this->label����U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����SU10
			// 
			this->label����SU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����SU10->Location = System::Drawing::Point(803, 83);
			this->label����SU10->Name = L"label����SU10";
			this->label����SU10->Size = System::Drawing::Size(62, 23);
			this->label����SU10->TabIndex = 69;
			this->label����SU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����SU9
			// 
			this->label����SU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����SU9->Location = System::Drawing::Point(735, 83);
			this->label����SU9->Name = L"label����SU9";
			this->label����SU9->Size = System::Drawing::Size(62, 23);
			this->label����SU9->TabIndex = 68;
			this->label����SU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����SU8
			// 
			this->label����SU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����SU8->Location = System::Drawing::Point(667, 83);
			this->label����SU8->Name = L"label����SU8";
			this->label����SU8->Size = System::Drawing::Size(62, 23);
			this->label����SU8->TabIndex = 67;
			this->label����SU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����SU7
			// 
			this->label����SU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����SU7->Location = System::Drawing::Point(599, 84);
			this->label����SU7->Name = L"label����SU7";
			this->label����SU7->Size = System::Drawing::Size(62, 23);
			this->label����SU7->TabIndex = 66;
			this->label����SU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����SU6
			// 
			this->label����SU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����SU6->Location = System::Drawing::Point(531, 83);
			this->label����SU6->Name = L"label����SU6";
			this->label����SU6->Size = System::Drawing::Size(62, 23);
			this->label����SU6->TabIndex = 65;
			this->label����SU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����SU5
			// 
			this->label����SU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����SU5->Location = System::Drawing::Point(463, 83);
			this->label����SU5->Name = L"label����SU5";
			this->label����SU5->Size = System::Drawing::Size(62, 23);
			this->label����SU5->TabIndex = 64;
			this->label����SU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����SU4
			// 
			this->label����SU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����SU4->Location = System::Drawing::Point(395, 83);
			this->label����SU4->Name = L"label����SU4";
			this->label����SU4->Size = System::Drawing::Size(62, 23);
			this->label����SU4->TabIndex = 63;
			this->label����SU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����SU3
			// 
			this->label����SU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����SU3->Location = System::Drawing::Point(327, 84);
			this->label����SU3->Name = L"label����SU3";
			this->label����SU3->Size = System::Drawing::Size(62, 23);
			this->label����SU3->TabIndex = 62;
			this->label����SU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����SU2
			// 
			this->label����SU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����SU2->Location = System::Drawing::Point(259, 84);
			this->label����SU2->Name = L"label����SU2";
			this->label����SU2->Size = System::Drawing::Size(62, 23);
			this->label����SU2->TabIndex = 61;
			this->label����SU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label����SU1
			// 
			this->label����SU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label����SU1->Location = System::Drawing::Point(193, 84);
			this->label����SU1->Name = L"label����SU1";
			this->label����SU1->Size = System::Drawing::Size(62, 23);
			this->label����SU1->TabIndex = 60;
			this->label����SU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(8, 44);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(95, 23);
			this->label14->TabIndex = 58;
			this->label14->Text = L"ʵ�����";
			// 
			// label11
			// 
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(8, 175);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(176, 23);
			this->label11->TabIndex = 7;
			this->label11->Text = L"���������I(mA)";
			// 
			// label12
			// 
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(6, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(176, 23);
			this->label12->TabIndex = 6;
			this->label12->Text = L"��ѹ�����Ur(V)";
			// 
			// label13
			// 
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(8, 84);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(145, 23);
			this->label13->TabIndex = 5;
			this->label13->Text = L"��Դ��ѹU(V)";
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
			// groupBox��ѹ
			// 
			this->groupBox��ѹ->Controls->Add(this->button1);
			this->groupBox��ѹ->Controls->Add(this->button2);
			this->groupBox��ѹ->Controls->Add(this->button6);
			this->groupBox��ѹ->Controls->Add(this->label45);
			this->groupBox��ѹ->Controls->Add(this->label9);
			this->groupBox��ѹ->Controls->Add(this->label10);
			this->groupBox��ѹ->Controls->Add(this->groupBox5);
			this->groupBox��ѹ->Controls->Add(this->chart��ѹ);
			this->groupBox��ѹ->Controls->Add(this->textBox5);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFI10);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFI9);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFI8);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFI7);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFI6);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFI5);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFI4);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFI3);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFI2);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFI1);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFU10);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFU9);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFU8);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFU7);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFU6);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFU5);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFU4);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFU3);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFU2);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFU1);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZI10);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZI9);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZI8);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZI7);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZI6);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZI5);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZI4);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZI3);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZI2);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZI1);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZU10);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZU9);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZU8);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZU7);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZU6);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZU5);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZU4);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZU3);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZU2);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZU1);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFSU10);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFSU9);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFSU8);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFSU7);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFSU6);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFSU5);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFSU4);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFSU3);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFSU2);
			this->groupBox��ѹ->Controls->Add(this->label��ѹFSU1);
			this->groupBox��ѹ->Controls->Add(this->label��ѹ����);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZSU10);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZSU9);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZSU8);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZSU7);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZSU6);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZSU5);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZSU4);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZSU3);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZSU2);
			this->groupBox��ѹ->Controls->Add(this->label��ѹZSU1);
			this->groupBox��ѹ->Controls->Add(this->label31);
			this->groupBox��ѹ->Controls->Add(this->label32);
			this->groupBox��ѹ->Controls->Add(this->label33);
			this->groupBox��ѹ->Controls->Add(this->label34);
			this->groupBox��ѹ->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox��ѹ->Location = System::Drawing::Point(12, 2967);
			this->groupBox��ѹ->Name = L"groupBox��ѹ";
			this->groupBox��ѹ->Size = System::Drawing::Size(1544, 657);
			this->groupBox��ѹ->TabIndex = 72;
			this->groupBox��ѹ->TabStop = false;
			this->groupBox��ѹ->Text = L"�ⶨ��ѹ�����ܵķ�������";
			this->groupBox��ѹ->Enter += gcnew System::EventHandler(this, &Ԫ���������Բ���::groupBox6_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1170, 594);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 37);
			this->button1->TabIndex = 207;
			this->button1->Text = L"����ѧ���ɼ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ԫ���������Բ���::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1403, 594);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 206;
			this->button2->Text = L"��ӡ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ԫ���������Բ���::button2_Click_1);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1322, 594);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 37);
			this->button6->TabIndex = 205;
			this->button6->Text = L"Ԥ��";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Ԫ���������Բ���::button6_Click_1);
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
			this->label9->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(656, 296);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 20);
			this->label9->TabIndex = 169;
			this->label9->Text = L"���֣�";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(656, 393);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 20);
			this->label10->TabIndex = 168;
			this->label10->Text = L"��ʵ���ܷ�20";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->labelTotalGrade);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->Location = System::Drawing::Point(296, 558);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(640, 73);
			this->groupBox5->TabIndex = 171;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ԫ����������ʵ���ܷ�";
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
			// chart��ѹ
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart��ѹ->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart��ѹ->Legends->Add(legend2);
			this->chart��ѹ->Location = System::Drawing::Point(15, 219);
			this->chart��ѹ->Name = L"chart��ѹ";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart��ѹ->Series->Add(series2);
			this->chart��ѹ->Size = System::Drawing::Size(570, 300);
			this->chart��ѹ->TabIndex = 167;
			this->chart��ѹ->Text = L"chart";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(660, 342);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 30);
			this->textBox5->TabIndex = 166;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Ԫ���������Բ���::textBox5_TextChanged);
			// 
			// label��ѹFI10
			// 
			this->label��ѹFI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFI10->Location = System::Drawing::Point(1473, 174);
			this->label��ѹFI10->Name = L"label��ѹFI10";
			this->label��ѹFI10->Size = System::Drawing::Size(62, 23);
			this->label��ѹFI10->TabIndex = 161;
			this->label��ѹFI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFI9
			// 
			this->label��ѹFI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFI9->Location = System::Drawing::Point(1405, 174);
			this->label��ѹFI9->Name = L"label��ѹFI9";
			this->label��ѹFI9->Size = System::Drawing::Size(62, 23);
			this->label��ѹFI9->TabIndex = 160;
			this->label��ѹFI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFI8
			// 
			this->label��ѹFI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFI8->Location = System::Drawing::Point(1337, 174);
			this->label��ѹFI8->Name = L"label��ѹFI8";
			this->label��ѹFI8->Size = System::Drawing::Size(62, 23);
			this->label��ѹFI8->TabIndex = 159;
			this->label��ѹFI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFI7
			// 
			this->label��ѹFI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFI7->Location = System::Drawing::Point(1269, 175);
			this->label��ѹFI7->Name = L"label��ѹFI7";
			this->label��ѹFI7->Size = System::Drawing::Size(62, 23);
			this->label��ѹFI7->TabIndex = 158;
			this->label��ѹFI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFI6
			// 
			this->label��ѹFI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFI6->Location = System::Drawing::Point(1201, 174);
			this->label��ѹFI6->Name = L"label��ѹFI6";
			this->label��ѹFI6->Size = System::Drawing::Size(62, 23);
			this->label��ѹFI6->TabIndex = 157;
			this->label��ѹFI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFI5
			// 
			this->label��ѹFI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFI5->Location = System::Drawing::Point(1133, 174);
			this->label��ѹFI5->Name = L"label��ѹFI5";
			this->label��ѹFI5->Size = System::Drawing::Size(62, 23);
			this->label��ѹFI5->TabIndex = 156;
			this->label��ѹFI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFI4
			// 
			this->label��ѹFI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFI4->Location = System::Drawing::Point(1065, 174);
			this->label��ѹFI4->Name = L"label��ѹFI4";
			this->label��ѹFI4->Size = System::Drawing::Size(62, 23);
			this->label��ѹFI4->TabIndex = 155;
			this->label��ѹFI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFI3
			// 
			this->label��ѹFI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFI3->Location = System::Drawing::Point(997, 175);
			this->label��ѹFI3->Name = L"label��ѹFI3";
			this->label��ѹFI3->Size = System::Drawing::Size(62, 23);
			this->label��ѹFI3->TabIndex = 154;
			this->label��ѹFI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFI2
			// 
			this->label��ѹFI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFI2->Location = System::Drawing::Point(929, 175);
			this->label��ѹFI2->Name = L"label��ѹFI2";
			this->label��ѹFI2->Size = System::Drawing::Size(62, 23);
			this->label��ѹFI2->TabIndex = 153;
			this->label��ѹFI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFI1
			// 
			this->label��ѹFI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFI1->Location = System::Drawing::Point(863, 175);
			this->label��ѹFI1->Name = L"label��ѹFI1";
			this->label��ѹFI1->Size = System::Drawing::Size(62, 23);
			this->label��ѹFI1->TabIndex = 152;
			this->label��ѹFI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFU10
			// 
			this->label��ѹFU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFU10->Location = System::Drawing::Point(1473, 130);
			this->label��ѹFU10->Name = L"label��ѹFU10";
			this->label��ѹFU10->Size = System::Drawing::Size(62, 23);
			this->label��ѹFU10->TabIndex = 151;
			this->label��ѹFU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFU9
			// 
			this->label��ѹFU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFU9->Location = System::Drawing::Point(1405, 130);
			this->label��ѹFU9->Name = L"label��ѹFU9";
			this->label��ѹFU9->Size = System::Drawing::Size(62, 23);
			this->label��ѹFU9->TabIndex = 150;
			this->label��ѹFU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFU8
			// 
			this->label��ѹFU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFU8->Location = System::Drawing::Point(1336, 129);
			this->label��ѹFU8->Name = L"label��ѹFU8";
			this->label��ѹFU8->Size = System::Drawing::Size(62, 23);
			this->label��ѹFU8->TabIndex = 149;
			this->label��ѹFU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFU7
			// 
			this->label��ѹFU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFU7->Location = System::Drawing::Point(1269, 131);
			this->label��ѹFU7->Name = L"label��ѹFU7";
			this->label��ѹFU7->Size = System::Drawing::Size(62, 23);
			this->label��ѹFU7->TabIndex = 148;
			this->label��ѹFU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFU6
			// 
			this->label��ѹFU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFU6->Location = System::Drawing::Point(1201, 130);
			this->label��ѹFU6->Name = L"label��ѹFU6";
			this->label��ѹFU6->Size = System::Drawing::Size(62, 23);
			this->label��ѹFU6->TabIndex = 147;
			this->label��ѹFU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFU5
			// 
			this->label��ѹFU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFU5->Location = System::Drawing::Point(1133, 130);
			this->label��ѹFU5->Name = L"label��ѹFU5";
			this->label��ѹFU5->Size = System::Drawing::Size(62, 23);
			this->label��ѹFU5->TabIndex = 146;
			this->label��ѹFU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFU4
			// 
			this->label��ѹFU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFU4->Location = System::Drawing::Point(1065, 130);
			this->label��ѹFU4->Name = L"label��ѹFU4";
			this->label��ѹFU4->Size = System::Drawing::Size(62, 23);
			this->label��ѹFU4->TabIndex = 145;
			this->label��ѹFU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFU3
			// 
			this->label��ѹFU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFU3->Location = System::Drawing::Point(997, 131);
			this->label��ѹFU3->Name = L"label��ѹFU3";
			this->label��ѹFU3->Size = System::Drawing::Size(62, 23);
			this->label��ѹFU3->TabIndex = 144;
			this->label��ѹFU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFU2
			// 
			this->label��ѹFU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFU2->Location = System::Drawing::Point(929, 131);
			this->label��ѹFU2->Name = L"label��ѹFU2";
			this->label��ѹFU2->Size = System::Drawing::Size(62, 23);
			this->label��ѹFU2->TabIndex = 143;
			this->label��ѹFU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFU1
			// 
			this->label��ѹFU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFU1->Location = System::Drawing::Point(863, 131);
			this->label��ѹFU1->Name = L"label��ѹFU1";
			this->label��ѹFU1->Size = System::Drawing::Size(62, 23);
			this->label��ѹFU1->TabIndex = 142;
			this->label��ѹFU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZI10
			// 
			this->label��ѹZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZI10->Location = System::Drawing::Point(795, 175);
			this->label��ѹZI10->Name = L"label��ѹZI10";
			this->label��ѹZI10->Size = System::Drawing::Size(62, 23);
			this->label��ѹZI10->TabIndex = 141;
			this->label��ѹZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZI9
			// 
			this->label��ѹZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZI9->Location = System::Drawing::Point(727, 175);
			this->label��ѹZI9->Name = L"label��ѹZI9";
			this->label��ѹZI9->Size = System::Drawing::Size(62, 23);
			this->label��ѹZI9->TabIndex = 140;
			this->label��ѹZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZI8
			// 
			this->label��ѹZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZI8->Location = System::Drawing::Point(659, 175);
			this->label��ѹZI8->Name = L"label��ѹZI8";
			this->label��ѹZI8->Size = System::Drawing::Size(62, 23);
			this->label��ѹZI8->TabIndex = 139;
			this->label��ѹZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZI7
			// 
			this->label��ѹZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZI7->Location = System::Drawing::Point(591, 176);
			this->label��ѹZI7->Name = L"label��ѹZI7";
			this->label��ѹZI7->Size = System::Drawing::Size(62, 23);
			this->label��ѹZI7->TabIndex = 138;
			this->label��ѹZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZI6
			// 
			this->label��ѹZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZI6->Location = System::Drawing::Point(523, 175);
			this->label��ѹZI6->Name = L"label��ѹZI6";
			this->label��ѹZI6->Size = System::Drawing::Size(62, 23);
			this->label��ѹZI6->TabIndex = 137;
			this->label��ѹZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZI5
			// 
			this->label��ѹZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZI5->Location = System::Drawing::Point(455, 175);
			this->label��ѹZI5->Name = L"label��ѹZI5";
			this->label��ѹZI5->Size = System::Drawing::Size(62, 23);
			this->label��ѹZI5->TabIndex = 136;
			this->label��ѹZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZI4
			// 
			this->label��ѹZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZI4->Location = System::Drawing::Point(387, 175);
			this->label��ѹZI4->Name = L"label��ѹZI4";
			this->label��ѹZI4->Size = System::Drawing::Size(62, 23);
			this->label��ѹZI4->TabIndex = 135;
			this->label��ѹZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZI3
			// 
			this->label��ѹZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZI3->Location = System::Drawing::Point(319, 176);
			this->label��ѹZI3->Name = L"label��ѹZI3";
			this->label��ѹZI3->Size = System::Drawing::Size(62, 23);
			this->label��ѹZI3->TabIndex = 134;
			this->label��ѹZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZI2
			// 
			this->label��ѹZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZI2->Location = System::Drawing::Point(251, 176);
			this->label��ѹZI2->Name = L"label��ѹZI2";
			this->label��ѹZI2->Size = System::Drawing::Size(62, 23);
			this->label��ѹZI2->TabIndex = 133;
			this->label��ѹZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZI1
			// 
			this->label��ѹZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZI1->Location = System::Drawing::Point(185, 175);
			this->label��ѹZI1->Name = L"label��ѹZI1";
			this->label��ѹZI1->Size = System::Drawing::Size(62, 23);
			this->label��ѹZI1->TabIndex = 132;
			this->label��ѹZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZU10
			// 
			this->label��ѹZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZU10->Location = System::Drawing::Point(795, 130);
			this->label��ѹZU10->Name = L"label��ѹZU10";
			this->label��ѹZU10->Size = System::Drawing::Size(62, 23);
			this->label��ѹZU10->TabIndex = 131;
			this->label��ѹZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZU9
			// 
			this->label��ѹZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZU9->Location = System::Drawing::Point(727, 130);
			this->label��ѹZU9->Name = L"label��ѹZU9";
			this->label��ѹZU9->Size = System::Drawing::Size(62, 23);
			this->label��ѹZU9->TabIndex = 130;
			this->label��ѹZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZU8
			// 
			this->label��ѹZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZU8->Location = System::Drawing::Point(659, 130);
			this->label��ѹZU8->Name = L"label��ѹZU8";
			this->label��ѹZU8->Size = System::Drawing::Size(62, 23);
			this->label��ѹZU8->TabIndex = 129;
			this->label��ѹZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZU7
			// 
			this->label��ѹZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZU7->Location = System::Drawing::Point(591, 131);
			this->label��ѹZU7->Name = L"label��ѹZU7";
			this->label��ѹZU7->Size = System::Drawing::Size(62, 23);
			this->label��ѹZU7->TabIndex = 128;
			this->label��ѹZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZU6
			// 
			this->label��ѹZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZU6->Location = System::Drawing::Point(523, 130);
			this->label��ѹZU6->Name = L"label��ѹZU6";
			this->label��ѹZU6->Size = System::Drawing::Size(62, 23);
			this->label��ѹZU6->TabIndex = 127;
			this->label��ѹZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZU5
			// 
			this->label��ѹZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZU5->Location = System::Drawing::Point(455, 130);
			this->label��ѹZU5->Name = L"label��ѹZU5";
			this->label��ѹZU5->Size = System::Drawing::Size(62, 23);
			this->label��ѹZU5->TabIndex = 126;
			this->label��ѹZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZU4
			// 
			this->label��ѹZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZU4->Location = System::Drawing::Point(387, 130);
			this->label��ѹZU4->Name = L"label��ѹZU4";
			this->label��ѹZU4->Size = System::Drawing::Size(62, 23);
			this->label��ѹZU4->TabIndex = 125;
			this->label��ѹZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZU3
			// 
			this->label��ѹZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZU3->Location = System::Drawing::Point(319, 131);
			this->label��ѹZU3->Name = L"label��ѹZU3";
			this->label��ѹZU3->Size = System::Drawing::Size(62, 23);
			this->label��ѹZU3->TabIndex = 124;
			this->label��ѹZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label��ѹZU3->Click += gcnew System::EventHandler(this, &Ԫ���������Բ���::label��ѹZU3_Click);
			// 
			// label��ѹZU2
			// 
			this->label��ѹZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZU2->Location = System::Drawing::Point(251, 131);
			this->label��ѹZU2->Name = L"label��ѹZU2";
			this->label��ѹZU2->Size = System::Drawing::Size(62, 23);
			this->label��ѹZU2->TabIndex = 123;
			this->label��ѹZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZU1
			// 
			this->label��ѹZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZU1->Location = System::Drawing::Point(185, 131);
			this->label��ѹZU1->Name = L"label��ѹZU1";
			this->label��ѹZU1->Size = System::Drawing::Size(62, 23);
			this->label��ѹZU1->TabIndex = 122;
			this->label��ѹZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFSU10
			// 
			this->label��ѹFSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFSU10->Location = System::Drawing::Point(1474, 83);
			this->label��ѹFSU10->Name = L"label��ѹFSU10";
			this->label��ѹFSU10->Size = System::Drawing::Size(62, 23);
			this->label��ѹFSU10->TabIndex = 101;
			this->label��ѹFSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFSU9
			// 
			this->label��ѹFSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFSU9->Location = System::Drawing::Point(1406, 83);
			this->label��ѹFSU9->Name = L"label��ѹFSU9";
			this->label��ѹFSU9->Size = System::Drawing::Size(62, 23);
			this->label��ѹFSU9->TabIndex = 100;
			this->label��ѹFSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFSU8
			// 
			this->label��ѹFSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFSU8->Location = System::Drawing::Point(1338, 83);
			this->label��ѹFSU8->Name = L"label��ѹFSU8";
			this->label��ѹFSU8->Size = System::Drawing::Size(62, 23);
			this->label��ѹFSU8->TabIndex = 99;
			this->label��ѹFSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFSU7
			// 
			this->label��ѹFSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFSU7->Location = System::Drawing::Point(1270, 84);
			this->label��ѹFSU7->Name = L"label��ѹFSU7";
			this->label��ѹFSU7->Size = System::Drawing::Size(62, 23);
			this->label��ѹFSU7->TabIndex = 98;
			this->label��ѹFSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFSU6
			// 
			this->label��ѹFSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFSU6->Location = System::Drawing::Point(1202, 83);
			this->label��ѹFSU6->Name = L"label��ѹFSU6";
			this->label��ѹFSU6->Size = System::Drawing::Size(62, 23);
			this->label��ѹFSU6->TabIndex = 97;
			this->label��ѹFSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFSU5
			// 
			this->label��ѹFSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFSU5->Location = System::Drawing::Point(1134, 83);
			this->label��ѹFSU5->Name = L"label��ѹFSU5";
			this->label��ѹFSU5->Size = System::Drawing::Size(62, 23);
			this->label��ѹFSU5->TabIndex = 96;
			this->label��ѹFSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFSU4
			// 
			this->label��ѹFSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFSU4->Location = System::Drawing::Point(1066, 83);
			this->label��ѹFSU4->Name = L"label��ѹFSU4";
			this->label��ѹFSU4->Size = System::Drawing::Size(62, 23);
			this->label��ѹFSU4->TabIndex = 95;
			this->label��ѹFSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFSU3
			// 
			this->label��ѹFSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFSU3->Location = System::Drawing::Point(998, 84);
			this->label��ѹFSU3->Name = L"label��ѹFSU3";
			this->label��ѹFSU3->Size = System::Drawing::Size(62, 23);
			this->label��ѹFSU3->TabIndex = 94;
			this->label��ѹFSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFSU2
			// 
			this->label��ѹFSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFSU2->Location = System::Drawing::Point(930, 84);
			this->label��ѹFSU2->Name = L"label��ѹFSU2";
			this->label��ѹFSU2->Size = System::Drawing::Size(62, 23);
			this->label��ѹFSU2->TabIndex = 93;
			this->label��ѹFSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹFSU1
			// 
			this->label��ѹFSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹFSU1->Location = System::Drawing::Point(864, 84);
			this->label��ѹFSU1->Name = L"label��ѹFSU1";
			this->label��ѹFSU1->Size = System::Drawing::Size(62, 23);
			this->label��ѹFSU1->TabIndex = 92;
			this->label��ѹFSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹ����
			// 
			this->label��ѹ����->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹ����->Location = System::Drawing::Point(186, 43);
			this->label��ѹ����->Name = L"label��ѹ����";
			this->label��ѹ����->Size = System::Drawing::Size(1349, 23);
			this->label��ѹ����->TabIndex = 91;
			this->label��ѹ����->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZSU10
			// 
			this->label��ѹZSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZSU10->Location = System::Drawing::Point(796, 83);
			this->label��ѹZSU10->Name = L"label��ѹZSU10";
			this->label��ѹZSU10->Size = System::Drawing::Size(62, 23);
			this->label��ѹZSU10->TabIndex = 69;
			this->label��ѹZSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZSU9
			// 
			this->label��ѹZSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZSU9->Location = System::Drawing::Point(728, 83);
			this->label��ѹZSU9->Name = L"label��ѹZSU9";
			this->label��ѹZSU9->Size = System::Drawing::Size(62, 23);
			this->label��ѹZSU9->TabIndex = 68;
			this->label��ѹZSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZSU8
			// 
			this->label��ѹZSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZSU8->Location = System::Drawing::Point(660, 83);
			this->label��ѹZSU8->Name = L"label��ѹZSU8";
			this->label��ѹZSU8->Size = System::Drawing::Size(62, 23);
			this->label��ѹZSU8->TabIndex = 67;
			this->label��ѹZSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZSU7
			// 
			this->label��ѹZSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZSU7->Location = System::Drawing::Point(592, 84);
			this->label��ѹZSU7->Name = L"label��ѹZSU7";
			this->label��ѹZSU7->Size = System::Drawing::Size(62, 23);
			this->label��ѹZSU7->TabIndex = 66;
			this->label��ѹZSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZSU6
			// 
			this->label��ѹZSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZSU6->Location = System::Drawing::Point(524, 83);
			this->label��ѹZSU6->Name = L"label��ѹZSU6";
			this->label��ѹZSU6->Size = System::Drawing::Size(62, 23);
			this->label��ѹZSU6->TabIndex = 65;
			this->label��ѹZSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZSU5
			// 
			this->label��ѹZSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZSU5->Location = System::Drawing::Point(456, 83);
			this->label��ѹZSU5->Name = L"label��ѹZSU5";
			this->label��ѹZSU5->Size = System::Drawing::Size(62, 23);
			this->label��ѹZSU5->TabIndex = 64;
			this->label��ѹZSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZSU4
			// 
			this->label��ѹZSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZSU4->Location = System::Drawing::Point(388, 83);
			this->label��ѹZSU4->Name = L"label��ѹZSU4";
			this->label��ѹZSU4->Size = System::Drawing::Size(62, 23);
			this->label��ѹZSU4->TabIndex = 63;
			this->label��ѹZSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZSU3
			// 
			this->label��ѹZSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZSU3->Location = System::Drawing::Point(320, 84);
			this->label��ѹZSU3->Name = L"label��ѹZSU3";
			this->label��ѹZSU3->Size = System::Drawing::Size(62, 23);
			this->label��ѹZSU3->TabIndex = 62;
			this->label��ѹZSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZSU2
			// 
			this->label��ѹZSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZSU2->Location = System::Drawing::Point(252, 84);
			this->label��ѹZSU2->Name = L"label��ѹZSU2";
			this->label��ѹZSU2->Size = System::Drawing::Size(62, 23);
			this->label��ѹZSU2->TabIndex = 61;
			this->label��ѹZSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ѹZSU1
			// 
			this->label��ѹZSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ѹZSU1->Location = System::Drawing::Point(186, 84);
			this->label��ѹZSU1->Name = L"label��ѹZSU1";
			this->label��ѹZSU1->Size = System::Drawing::Size(62, 23);
			this->label��ѹZSU1->TabIndex = 60;
			this->label��ѹZSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label31
			// 
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(8, 44);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(95, 23);
			this->label31->TabIndex = 58;
			this->label31->Text = L"ʵ�����";
			// 
			// label32
			// 
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(8, 175);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(176, 23);
			this->label32->TabIndex = 7;
			this->label32->Text = L"���������I(mA)";
			// 
			// label33
			// 
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(6, 131);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(176, 23);
			this->label33->TabIndex = 6;
			this->label33->Text = L"��ѹ�����Ud(V)";
			// 
			// label34
			// 
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(8, 84);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(145, 23);
			this->label34->TabIndex = 5;
			this->label34->Text = L"��Դ��ѹU(V)";
			// 
			// groupBox���
			// 
			this->groupBox���->Controls->Add(this->label7);
			this->groupBox���->Controls->Add(this->label8);
			this->groupBox���->Controls->Add(this->chart���);
			this->groupBox���->Controls->Add(this->textBox4);
			this->groupBox���->Controls->Add(this->label1���FI10);
			this->groupBox���->Controls->Add(this->label1���FI9);
			this->groupBox���->Controls->Add(this->label1���FI8);
			this->groupBox���->Controls->Add(this->label1���FI7);
			this->groupBox���->Controls->Add(this->label1���FI6);
			this->groupBox���->Controls->Add(this->label1���FI5);
			this->groupBox���->Controls->Add(this->label1���FI4);
			this->groupBox���->Controls->Add(this->label1���FI3);
			this->groupBox���->Controls->Add(this->label1���FI2);
			this->groupBox���->Controls->Add(this->label1���FI1);
			this->groupBox���->Controls->Add(this->label1���FU10);
			this->groupBox���->Controls->Add(this->label1���FU9);
			this->groupBox���->Controls->Add(this->label1���FU8);
			this->groupBox���->Controls->Add(this->label1���FU7);
			this->groupBox���->Controls->Add(this->label1���FU6);
			this->groupBox���->Controls->Add(this->label1���FU5);
			this->groupBox���->Controls->Add(this->label1���FU4);
			this->groupBox���->Controls->Add(this->label1���FU3);
			this->groupBox���->Controls->Add(this->label1���FU2);
			this->groupBox���->Controls->Add(this->label1���FU1);
			this->groupBox���->Controls->Add(this->label���ZI10);
			this->groupBox���->Controls->Add(this->label���ZI9);
			this->groupBox���->Controls->Add(this->label���ZI8);
			this->groupBox���->Controls->Add(this->label���ZI7);
			this->groupBox���->Controls->Add(this->label���ZI6);
			this->groupBox���->Controls->Add(this->label���ZI5);
			this->groupBox���->Controls->Add(this->label���ZI4);
			this->groupBox���->Controls->Add(this->label���ZI3);
			this->groupBox���->Controls->Add(this->label���ZI2);
			this->groupBox���->Controls->Add(this->label���ZI1);
			this->groupBox���->Controls->Add(this->label���ZU10);
			this->groupBox���->Controls->Add(this->label���ZU9);
			this->groupBox���->Controls->Add(this->label���ZU8);
			this->groupBox���->Controls->Add(this->label���ZU7);
			this->groupBox���->Controls->Add(this->label���ZU6);
			this->groupBox���->Controls->Add(this->label���ZU5);
			this->groupBox���->Controls->Add(this->label���ZU4);
			this->groupBox���->Controls->Add(this->label���ZU3);
			this->groupBox���->Controls->Add(this->label���ZU2);
			this->groupBox���->Controls->Add(this->label���ZU1);
			this->groupBox���->Controls->Add(this->label���FSU10);
			this->groupBox���->Controls->Add(this->label���FSU9);
			this->groupBox���->Controls->Add(this->label���FSU8);
			this->groupBox���->Controls->Add(this->label���FSU7);
			this->groupBox���->Controls->Add(this->label���FSU6);
			this->groupBox���->Controls->Add(this->label���FSU5);
			this->groupBox���->Controls->Add(this->label���FSU4);
			this->groupBox���->Controls->Add(this->label���FSU3);
			this->groupBox���->Controls->Add(this->label���FSU2);
			this->groupBox���->Controls->Add(this->label���FSU1);
			this->groupBox���->Controls->Add(this->label��ܽ���);
			this->groupBox���->Controls->Add(this->label���ZSU10);
			this->groupBox���->Controls->Add(this->label���ZSU9);
			this->groupBox���->Controls->Add(this->label���ZSU8);
			this->groupBox���->Controls->Add(this->label���ZSU7);
			this->groupBox���->Controls->Add(this->label���ZSU6);
			this->groupBox���->Controls->Add(this->label���ZSU5);
			this->groupBox���->Controls->Add(this->label���ZSU4);
			this->groupBox���->Controls->Add(this->label���ZSU3);
			this->groupBox���->Controls->Add(this->label���ZSU2);
			this->groupBox���->Controls->Add(this->label���ZSU1);
			this->groupBox���->Controls->Add(this->label23);
			this->groupBox���->Controls->Add(this->label24);
			this->groupBox���->Controls->Add(this->label25);
			this->groupBox���->Controls->Add(this->label26);
			this->groupBox���->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox���->Location = System::Drawing::Point(12, 2364);
			this->groupBox���->Name = L"groupBox���";
			this->groupBox���->Size = System::Drawing::Size(1544, 531);
			this->groupBox���->TabIndex = 71;
			this->groupBox���->TabStop = false;
			this->groupBox���->Text = L"�ⶨ�뵼��ķ�������-���2CP15";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(653, 302);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 20);
			this->label7->TabIndex = 165;
			this->label7->Text = L"���֣�";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(653, 399);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 20);
			this->label8->TabIndex = 164;
			this->label8->Text = L"��ʵ���ܷ�20";
			// 
			// chart���
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart���->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart���->Legends->Add(legend3);
			this->chart���->Location = System::Drawing::Point(12, 225);
			this->chart���->Name = L"chart���";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart���->Series->Add(series3);
			this->chart���->Size = System::Drawing::Size(570, 300);
			this->chart���->TabIndex = 163;
			this->chart���->Text = L"chart���";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(657, 348);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 28);
			this->textBox4->TabIndex = 162;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Ԫ���������Բ���::textBox4_TextChanged);
			// 
			// label1���FI10
			// 
			this->label1���FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FI10->Location = System::Drawing::Point(1472, 174);
			this->label1���FI10->Name = L"label1���FI10";
			this->label1���FI10->Size = System::Drawing::Size(62, 23);
			this->label1���FI10->TabIndex = 161;
			this->label1���FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FI9
			// 
			this->label1���FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FI9->Location = System::Drawing::Point(1404, 174);
			this->label1���FI9->Name = L"label1���FI9";
			this->label1���FI9->Size = System::Drawing::Size(62, 23);
			this->label1���FI9->TabIndex = 160;
			this->label1���FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FI8
			// 
			this->label1���FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FI8->Location = System::Drawing::Point(1336, 174);
			this->label1���FI8->Name = L"label1���FI8";
			this->label1���FI8->Size = System::Drawing::Size(62, 23);
			this->label1���FI8->TabIndex = 159;
			this->label1���FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FI7
			// 
			this->label1���FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FI7->Location = System::Drawing::Point(1268, 175);
			this->label1���FI7->Name = L"label1���FI7";
			this->label1���FI7->Size = System::Drawing::Size(62, 23);
			this->label1���FI7->TabIndex = 158;
			this->label1���FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FI6
			// 
			this->label1���FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FI6->Location = System::Drawing::Point(1200, 174);
			this->label1���FI6->Name = L"label1���FI6";
			this->label1���FI6->Size = System::Drawing::Size(62, 23);
			this->label1���FI6->TabIndex = 157;
			this->label1���FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FI5
			// 
			this->label1���FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FI5->Location = System::Drawing::Point(1132, 174);
			this->label1���FI5->Name = L"label1���FI5";
			this->label1���FI5->Size = System::Drawing::Size(62, 23);
			this->label1���FI5->TabIndex = 156;
			this->label1���FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FI4
			// 
			this->label1���FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FI4->Location = System::Drawing::Point(1064, 174);
			this->label1���FI4->Name = L"label1���FI4";
			this->label1���FI4->Size = System::Drawing::Size(62, 23);
			this->label1���FI4->TabIndex = 155;
			this->label1���FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FI3
			// 
			this->label1���FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FI3->Location = System::Drawing::Point(996, 175);
			this->label1���FI3->Name = L"label1���FI3";
			this->label1���FI3->Size = System::Drawing::Size(62, 23);
			this->label1���FI3->TabIndex = 154;
			this->label1���FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FI2
			// 
			this->label1���FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FI2->Location = System::Drawing::Point(928, 175);
			this->label1���FI2->Name = L"label1���FI2";
			this->label1���FI2->Size = System::Drawing::Size(62, 23);
			this->label1���FI2->TabIndex = 153;
			this->label1���FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FI1
			// 
			this->label1���FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FI1->Location = System::Drawing::Point(862, 175);
			this->label1���FI1->Name = L"label1���FI1";
			this->label1���FI1->Size = System::Drawing::Size(62, 23);
			this->label1���FI1->TabIndex = 152;
			this->label1���FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FU10
			// 
			this->label1���FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FU10->Location = System::Drawing::Point(1472, 130);
			this->label1���FU10->Name = L"label1���FU10";
			this->label1���FU10->Size = System::Drawing::Size(62, 23);
			this->label1���FU10->TabIndex = 151;
			this->label1���FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FU9
			// 
			this->label1���FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FU9->Location = System::Drawing::Point(1404, 130);
			this->label1���FU9->Name = L"label1���FU9";
			this->label1���FU9->Size = System::Drawing::Size(62, 23);
			this->label1���FU9->TabIndex = 150;
			this->label1���FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FU8
			// 
			this->label1���FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FU8->Location = System::Drawing::Point(1336, 130);
			this->label1���FU8->Name = L"label1���FU8";
			this->label1���FU8->Size = System::Drawing::Size(62, 23);
			this->label1���FU8->TabIndex = 149;
			this->label1���FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FU7
			// 
			this->label1���FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FU7->Location = System::Drawing::Point(1268, 131);
			this->label1���FU7->Name = L"label1���FU7";
			this->label1���FU7->Size = System::Drawing::Size(62, 23);
			this->label1���FU7->TabIndex = 148;
			this->label1���FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FU6
			// 
			this->label1���FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FU6->Location = System::Drawing::Point(1200, 130);
			this->label1���FU6->Name = L"label1���FU6";
			this->label1���FU6->Size = System::Drawing::Size(62, 23);
			this->label1���FU6->TabIndex = 147;
			this->label1���FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FU5
			// 
			this->label1���FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FU5->Location = System::Drawing::Point(1132, 130);
			this->label1���FU5->Name = L"label1���FU5";
			this->label1���FU5->Size = System::Drawing::Size(62, 23);
			this->label1���FU5->TabIndex = 146;
			this->label1���FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FU4
			// 
			this->label1���FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FU4->Location = System::Drawing::Point(1064, 130);
			this->label1���FU4->Name = L"label1���FU4";
			this->label1���FU4->Size = System::Drawing::Size(62, 23);
			this->label1���FU4->TabIndex = 145;
			this->label1���FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FU3
			// 
			this->label1���FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FU3->Location = System::Drawing::Point(996, 131);
			this->label1���FU3->Name = L"label1���FU3";
			this->label1���FU3->Size = System::Drawing::Size(62, 23);
			this->label1���FU3->TabIndex = 144;
			this->label1���FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FU2
			// 
			this->label1���FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FU2->Location = System::Drawing::Point(928, 131);
			this->label1���FU2->Name = L"label1���FU2";
			this->label1���FU2->Size = System::Drawing::Size(62, 23);
			this->label1���FU2->TabIndex = 143;
			this->label1���FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1���FU1
			// 
			this->label1���FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1���FU1->Location = System::Drawing::Point(862, 131);
			this->label1���FU1->Name = L"label1���FU1";
			this->label1���FU1->Size = System::Drawing::Size(62, 23);
			this->label1���FU1->TabIndex = 142;
			this->label1���FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI10
			// 
			this->label���ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI10->Location = System::Drawing::Point(793, 174);
			this->label���ZI10->Name = L"label���ZI10";
			this->label���ZI10->Size = System::Drawing::Size(62, 23);
			this->label���ZI10->TabIndex = 141;
			this->label���ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI9
			// 
			this->label���ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI9->Location = System::Drawing::Point(725, 174);
			this->label���ZI9->Name = L"label���ZI9";
			this->label���ZI9->Size = System::Drawing::Size(62, 23);
			this->label���ZI9->TabIndex = 140;
			this->label���ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI8
			// 
			this->label���ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI8->Location = System::Drawing::Point(657, 174);
			this->label���ZI8->Name = L"label���ZI8";
			this->label���ZI8->Size = System::Drawing::Size(62, 23);
			this->label���ZI8->TabIndex = 139;
			this->label���ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI7
			// 
			this->label���ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI7->Location = System::Drawing::Point(589, 175);
			this->label���ZI7->Name = L"label���ZI7";
			this->label���ZI7->Size = System::Drawing::Size(62, 23);
			this->label���ZI7->TabIndex = 138;
			this->label���ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI6
			// 
			this->label���ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI6->Location = System::Drawing::Point(521, 174);
			this->label���ZI6->Name = L"label���ZI6";
			this->label���ZI6->Size = System::Drawing::Size(62, 23);
			this->label���ZI6->TabIndex = 137;
			this->label���ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI5
			// 
			this->label���ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI5->Location = System::Drawing::Point(453, 174);
			this->label���ZI5->Name = L"label���ZI5";
			this->label���ZI5->Size = System::Drawing::Size(62, 23);
			this->label���ZI5->TabIndex = 136;
			this->label���ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI4
			// 
			this->label���ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI4->Location = System::Drawing::Point(385, 174);
			this->label���ZI4->Name = L"label���ZI4";
			this->label���ZI4->Size = System::Drawing::Size(62, 23);
			this->label���ZI4->TabIndex = 135;
			this->label���ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI3
			// 
			this->label���ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI3->Location = System::Drawing::Point(317, 175);
			this->label���ZI3->Name = L"label���ZI3";
			this->label���ZI3->Size = System::Drawing::Size(62, 23);
			this->label���ZI3->TabIndex = 134;
			this->label���ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI2
			// 
			this->label���ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI2->Location = System::Drawing::Point(249, 175);
			this->label���ZI2->Name = L"label���ZI2";
			this->label���ZI2->Size = System::Drawing::Size(62, 23);
			this->label���ZI2->TabIndex = 133;
			this->label���ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI1
			// 
			this->label���ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI1->Location = System::Drawing::Point(183, 175);
			this->label���ZI1->Name = L"label���ZI1";
			this->label���ZI1->Size = System::Drawing::Size(62, 23);
			this->label���ZI1->TabIndex = 132;
			this->label���ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU10
			// 
			this->label���ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU10->Location = System::Drawing::Point(793, 128);
			this->label���ZU10->Name = L"label���ZU10";
			this->label���ZU10->Size = System::Drawing::Size(62, 23);
			this->label���ZU10->TabIndex = 131;
			this->label���ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU9
			// 
			this->label���ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU9->Location = System::Drawing::Point(725, 128);
			this->label���ZU9->Name = L"label���ZU9";
			this->label���ZU9->Size = System::Drawing::Size(62, 23);
			this->label���ZU9->TabIndex = 130;
			this->label���ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU8
			// 
			this->label���ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU8->Location = System::Drawing::Point(657, 128);
			this->label���ZU8->Name = L"label���ZU8";
			this->label���ZU8->Size = System::Drawing::Size(62, 23);
			this->label���ZU8->TabIndex = 129;
			this->label���ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU7
			// 
			this->label���ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU7->Location = System::Drawing::Point(589, 129);
			this->label���ZU7->Name = L"label���ZU7";
			this->label���ZU7->Size = System::Drawing::Size(62, 23);
			this->label���ZU7->TabIndex = 128;
			this->label���ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU6
			// 
			this->label���ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU6->Location = System::Drawing::Point(521, 128);
			this->label���ZU6->Name = L"label���ZU6";
			this->label���ZU6->Size = System::Drawing::Size(62, 23);
			this->label���ZU6->TabIndex = 127;
			this->label���ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU5
			// 
			this->label���ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU5->Location = System::Drawing::Point(453, 128);
			this->label���ZU5->Name = L"label���ZU5";
			this->label���ZU5->Size = System::Drawing::Size(62, 23);
			this->label���ZU5->TabIndex = 126;
			this->label���ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU4
			// 
			this->label���ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU4->Location = System::Drawing::Point(385, 128);
			this->label���ZU4->Name = L"label���ZU4";
			this->label���ZU4->Size = System::Drawing::Size(62, 23);
			this->label���ZU4->TabIndex = 125;
			this->label���ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU3
			// 
			this->label���ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU3->Location = System::Drawing::Point(317, 129);
			this->label���ZU3->Name = L"label���ZU3";
			this->label���ZU3->Size = System::Drawing::Size(62, 23);
			this->label���ZU3->TabIndex = 124;
			this->label���ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU2
			// 
			this->label���ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU2->Location = System::Drawing::Point(249, 129);
			this->label���ZU2->Name = L"label���ZU2";
			this->label���ZU2->Size = System::Drawing::Size(62, 23);
			this->label���ZU2->TabIndex = 123;
			this->label���ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU1
			// 
			this->label���ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU1->Location = System::Drawing::Point(183, 129);
			this->label���ZU1->Name = L"label���ZU1";
			this->label���ZU1->Size = System::Drawing::Size(62, 23);
			this->label���ZU1->TabIndex = 122;
			this->label���ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU10
			// 
			this->label���FSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU10->Location = System::Drawing::Point(1471, 84);
			this->label���FSU10->Name = L"label���FSU10";
			this->label���FSU10->Size = System::Drawing::Size(62, 23);
			this->label���FSU10->TabIndex = 101;
			this->label���FSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU9
			// 
			this->label���FSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU9->Location = System::Drawing::Point(1403, 84);
			this->label���FSU9->Name = L"label���FSU9";
			this->label���FSU9->Size = System::Drawing::Size(62, 23);
			this->label���FSU9->TabIndex = 100;
			this->label���FSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU8
			// 
			this->label���FSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU8->Location = System::Drawing::Point(1335, 84);
			this->label���FSU8->Name = L"label���FSU8";
			this->label���FSU8->Size = System::Drawing::Size(62, 23);
			this->label���FSU8->TabIndex = 99;
			this->label���FSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU7
			// 
			this->label���FSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU7->Location = System::Drawing::Point(1267, 85);
			this->label���FSU7->Name = L"label���FSU7";
			this->label���FSU7->Size = System::Drawing::Size(62, 23);
			this->label���FSU7->TabIndex = 98;
			this->label���FSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU6
			// 
			this->label���FSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU6->Location = System::Drawing::Point(1199, 84);
			this->label���FSU6->Name = L"label���FSU6";
			this->label���FSU6->Size = System::Drawing::Size(62, 23);
			this->label���FSU6->TabIndex = 97;
			this->label���FSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU5
			// 
			this->label���FSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU5->Location = System::Drawing::Point(1131, 84);
			this->label���FSU5->Name = L"label���FSU5";
			this->label���FSU5->Size = System::Drawing::Size(62, 23);
			this->label���FSU5->TabIndex = 96;
			this->label���FSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU4
			// 
			this->label���FSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU4->Location = System::Drawing::Point(1063, 84);
			this->label���FSU4->Name = L"label���FSU4";
			this->label���FSU4->Size = System::Drawing::Size(62, 23);
			this->label���FSU4->TabIndex = 95;
			this->label���FSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU3
			// 
			this->label���FSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU3->Location = System::Drawing::Point(995, 85);
			this->label���FSU3->Name = L"label���FSU3";
			this->label���FSU3->Size = System::Drawing::Size(62, 23);
			this->label���FSU3->TabIndex = 94;
			this->label���FSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU2
			// 
			this->label���FSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU2->Location = System::Drawing::Point(927, 85);
			this->label���FSU2->Name = L"label���FSU2";
			this->label���FSU2->Size = System::Drawing::Size(62, 23);
			this->label���FSU2->TabIndex = 93;
			this->label���FSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU1
			// 
			this->label���FSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU1->Location = System::Drawing::Point(861, 85);
			this->label���FSU1->Name = L"label���FSU1";
			this->label���FSU1->Size = System::Drawing::Size(62, 23);
			this->label���FSU1->TabIndex = 92;
			this->label���FSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ܽ���
			// 
			this->label��ܽ���->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ܽ���->Location = System::Drawing::Point(183, 44);
			this->label��ܽ���->Name = L"label��ܽ���";
			this->label��ܽ���->Size = System::Drawing::Size(1350, 23);
			this->label��ܽ���->TabIndex = 91;
			this->label��ܽ���->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU10
			// 
			this->label���ZSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU10->Location = System::Drawing::Point(793, 84);
			this->label���ZSU10->Name = L"label���ZSU10";
			this->label���ZSU10->Size = System::Drawing::Size(62, 23);
			this->label���ZSU10->TabIndex = 69;
			this->label���ZSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU9
			// 
			this->label���ZSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU9->Location = System::Drawing::Point(725, 84);
			this->label���ZSU9->Name = L"label���ZSU9";
			this->label���ZSU9->Size = System::Drawing::Size(62, 23);
			this->label���ZSU9->TabIndex = 68;
			this->label���ZSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU8
			// 
			this->label���ZSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU8->Location = System::Drawing::Point(657, 84);
			this->label���ZSU8->Name = L"label���ZSU8";
			this->label���ZSU8->Size = System::Drawing::Size(62, 23);
			this->label���ZSU8->TabIndex = 67;
			this->label���ZSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU7
			// 
			this->label���ZSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU7->Location = System::Drawing::Point(589, 85);
			this->label���ZSU7->Name = L"label���ZSU7";
			this->label���ZSU7->Size = System::Drawing::Size(62, 23);
			this->label���ZSU7->TabIndex = 66;
			this->label���ZSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU6
			// 
			this->label���ZSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU6->Location = System::Drawing::Point(521, 84);
			this->label���ZSU6->Name = L"label���ZSU6";
			this->label���ZSU6->Size = System::Drawing::Size(62, 23);
			this->label���ZSU6->TabIndex = 65;
			this->label���ZSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU5
			// 
			this->label���ZSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU5->Location = System::Drawing::Point(453, 84);
			this->label���ZSU5->Name = L"label���ZSU5";
			this->label���ZSU5->Size = System::Drawing::Size(62, 23);
			this->label���ZSU5->TabIndex = 64;
			this->label���ZSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU4
			// 
			this->label���ZSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU4->Location = System::Drawing::Point(385, 84);
			this->label���ZSU4->Name = L"label���ZSU4";
			this->label���ZSU4->Size = System::Drawing::Size(62, 23);
			this->label���ZSU4->TabIndex = 63;
			this->label���ZSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU3
			// 
			this->label���ZSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU3->Location = System::Drawing::Point(317, 85);
			this->label���ZSU3->Name = L"label���ZSU3";
			this->label���ZSU3->Size = System::Drawing::Size(62, 23);
			this->label���ZSU3->TabIndex = 62;
			this->label���ZSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU2
			// 
			this->label���ZSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU2->Location = System::Drawing::Point(249, 85);
			this->label���ZSU2->Name = L"label���ZSU2";
			this->label���ZSU2->Size = System::Drawing::Size(62, 23);
			this->label���ZSU2->TabIndex = 61;
			this->label���ZSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU1
			// 
			this->label���ZSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU1->Location = System::Drawing::Point(183, 85);
			this->label���ZSU1->Name = L"label���ZSU1";
			this->label���ZSU1->Size = System::Drawing::Size(62, 23);
			this->label���ZSU1->TabIndex = 60;
			this->label���ZSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label23
			// 
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(8, 44);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(95, 23);
			this->label23->TabIndex = 58;
			this->label23->Text = L"ʵ�����";
			// 
			// label24
			// 
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(8, 175);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(176, 23);
			this->label24->TabIndex = 7;
			this->label24->Text = L"���������I(mA)";
			// 
			// label25
			// 
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(6, 131);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(176, 23);
			this->label25->TabIndex = 6;
			this->label25->Text = L"��ѹ�����Ud(V)";
			// 
			// label26
			// 
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(8, 84);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(145, 23);
			this->label26->TabIndex = 5;
			this->label26->Text = L"��Դ��ѹU(V)";
			// 
			// groupBox���
			// 
			this->groupBox���->Controls->Add(this->label5);
			this->groupBox���->Controls->Add(this->label6);
			this->groupBox���->Controls->Add(this->chart���);
			this->groupBox���->Controls->Add(this->textBox3);
			this->groupBox���->Controls->Add(this->label���ZI10);
			this->groupBox���->Controls->Add(this->label���ZI9);
			this->groupBox���->Controls->Add(this->label���ZI8);
			this->groupBox���->Controls->Add(this->label���ZI7);
			this->groupBox���->Controls->Add(this->label���ZI6);
			this->groupBox���->Controls->Add(this->label���ZI5);
			this->groupBox���->Controls->Add(this->label���ZI4);
			this->groupBox���->Controls->Add(this->label���ZI3);
			this->groupBox���->Controls->Add(this->label���ZI2);
			this->groupBox���->Controls->Add(this->label���ZI1);
			this->groupBox���->Controls->Add(this->label���FI10);
			this->groupBox���->Controls->Add(this->label���ZU10);
			this->groupBox���->Controls->Add(this->label���FI9);
			this->groupBox���->Controls->Add(this->label���ZU9);
			this->groupBox���->Controls->Add(this->label���FI8);
			this->groupBox���->Controls->Add(this->label���ZU8);
			this->groupBox���->Controls->Add(this->label���FI7);
			this->groupBox���->Controls->Add(this->label���ZU7);
			this->groupBox���->Controls->Add(this->label���FI6);
			this->groupBox���->Controls->Add(this->label���ZU6);
			this->groupBox���->Controls->Add(this->label���FI5);
			this->groupBox���->Controls->Add(this->label���ZU5);
			this->groupBox���->Controls->Add(this->label���FI4);
			this->groupBox���->Controls->Add(this->label���ZU4);
			this->groupBox���->Controls->Add(this->label���FI3);
			this->groupBox���->Controls->Add(this->label���ZU3);
			this->groupBox���->Controls->Add(this->label���FI2);
			this->groupBox���->Controls->Add(this->label���ZU2);
			this->groupBox���->Controls->Add(this->label���FI1);
			this->groupBox���->Controls->Add(this->label���ZU1);
			this->groupBox���->Controls->Add(this->label���FU10);
			this->groupBox���->Controls->Add(this->label���FSU10);
			this->groupBox���->Controls->Add(this->label���FU9);
			this->groupBox���->Controls->Add(this->label���FSU9);
			this->groupBox���->Controls->Add(this->label���FU8);
			this->groupBox���->Controls->Add(this->label���FSU8);
			this->groupBox���->Controls->Add(this->label���FU7);
			this->groupBox���->Controls->Add(this->label���FSU7);
			this->groupBox���->Controls->Add(this->label���FU6);
			this->groupBox���->Controls->Add(this->label���FSU6);
			this->groupBox���->Controls->Add(this->label���FU5);
			this->groupBox���->Controls->Add(this->label���FSU5);
			this->groupBox���->Controls->Add(this->label���FU4);
			this->groupBox���->Controls->Add(this->label���FSU4);
			this->groupBox���->Controls->Add(this->label���FU3);
			this->groupBox���->Controls->Add(this->label���FSU3);
			this->groupBox���->Controls->Add(this->label���FU2);
			this->groupBox���->Controls->Add(this->label���FSU2);
			this->groupBox���->Controls->Add(this->label���FU1);
			this->groupBox���->Controls->Add(this->label���FSU1);
			this->groupBox���->Controls->Add(this->label��ܽ���);
			this->groupBox���->Controls->Add(this->label���ZSU10);
			this->groupBox���->Controls->Add(this->label���ZSU9);
			this->groupBox���->Controls->Add(this->label���ZSU8);
			this->groupBox���->Controls->Add(this->label���ZSU7);
			this->groupBox���->Controls->Add(this->label���ZSU6);
			this->groupBox���->Controls->Add(this->label���ZSU5);
			this->groupBox���->Controls->Add(this->label���ZSU4);
			this->groupBox���->Controls->Add(this->label���ZSU3);
			this->groupBox���->Controls->Add(this->label���ZSU2);
			this->groupBox���->Controls->Add(this->label���ZSU1);
			this->groupBox���->Controls->Add(this->label19);
			this->groupBox���->Controls->Add(this->label20);
			this->groupBox���->Controls->Add(this->label21);
			this->groupBox���->Controls->Add(this->label22);
			this->groupBox���->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox���->Location = System::Drawing::Point(16, 1736);
			this->groupBox���->Name = L"groupBox���";
			this->groupBox���->Size = System::Drawing::Size(1543, 553);
			this->groupBox���->TabIndex = 67;
			this->groupBox���->TabStop = false;
			this->groupBox���->Text = L"�ⶨ�뵼��ķ�������-���2AP9";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(656, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 20);
			this->label5->TabIndex = 145;
			this->label5->Text = L"���֣�";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(656, 401);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 20);
			this->label6->TabIndex = 144;
			this->label6->Text = L"��ʵ���ܷ�20";
			// 
			// chart���
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart���->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart���->Legends->Add(legend4);
			this->chart���->Location = System::Drawing::Point(15, 227);
			this->chart���->Name = L"chart���";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart���->Series->Add(series4);
			this->chart���->Size = System::Drawing::Size(570, 300);
			this->chart���->TabIndex = 143;
			this->chart���->Text = L"chart���";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(660, 350);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 28);
			this->textBox3->TabIndex = 142;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Ԫ���������Բ���::textBox3_TextChanged);
			// 
			// label���ZI10
			// 
			this->label���ZI10->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label���ZI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI10->Location = System::Drawing::Point(795, 172);
			this->label���ZI10->Name = L"label���ZI10";
			this->label���ZI10->Size = System::Drawing::Size(62, 23);
			this->label���ZI10->TabIndex = 141;
			this->label���ZI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI9
			// 
			this->label���ZI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI9->Location = System::Drawing::Point(727, 172);
			this->label���ZI9->Name = L"label���ZI9";
			this->label���ZI9->Size = System::Drawing::Size(62, 23);
			this->label���ZI9->TabIndex = 140;
			this->label���ZI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI8
			// 
			this->label���ZI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI8->Location = System::Drawing::Point(659, 172);
			this->label���ZI8->Name = L"label���ZI8";
			this->label���ZI8->Size = System::Drawing::Size(62, 23);
			this->label���ZI8->TabIndex = 139;
			this->label���ZI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI7
			// 
			this->label���ZI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI7->Location = System::Drawing::Point(591, 173);
			this->label���ZI7->Name = L"label���ZI7";
			this->label���ZI7->Size = System::Drawing::Size(62, 23);
			this->label���ZI7->TabIndex = 138;
			this->label���ZI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI6
			// 
			this->label���ZI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI6->Location = System::Drawing::Point(523, 172);
			this->label���ZI6->Name = L"label���ZI6";
			this->label���ZI6->Size = System::Drawing::Size(62, 23);
			this->label���ZI6->TabIndex = 137;
			this->label���ZI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI5
			// 
			this->label���ZI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI5->Location = System::Drawing::Point(455, 172);
			this->label���ZI5->Name = L"label���ZI5";
			this->label���ZI5->Size = System::Drawing::Size(62, 23);
			this->label���ZI5->TabIndex = 136;
			this->label���ZI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI4
			// 
			this->label���ZI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI4->Location = System::Drawing::Point(387, 172);
			this->label���ZI4->Name = L"label���ZI4";
			this->label���ZI4->Size = System::Drawing::Size(62, 23);
			this->label���ZI4->TabIndex = 135;
			this->label���ZI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI3
			// 
			this->label���ZI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI3->Location = System::Drawing::Point(319, 173);
			this->label���ZI3->Name = L"label���ZI3";
			this->label���ZI3->Size = System::Drawing::Size(62, 23);
			this->label���ZI3->TabIndex = 134;
			this->label���ZI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI2
			// 
			this->label���ZI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI2->Location = System::Drawing::Point(251, 173);
			this->label���ZI2->Name = L"label���ZI2";
			this->label���ZI2->Size = System::Drawing::Size(62, 23);
			this->label���ZI2->TabIndex = 133;
			this->label���ZI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZI1
			// 
			this->label���ZI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZI1->Location = System::Drawing::Point(185, 173);
			this->label���ZI1->Name = L"label���ZI1";
			this->label���ZI1->Size = System::Drawing::Size(62, 23);
			this->label���ZI1->TabIndex = 132;
			this->label���ZI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FI10
			// 
			this->label���FI10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FI10->Location = System::Drawing::Point(1473, 172);
			this->label���FI10->Name = L"label���FI10";
			this->label���FI10->Size = System::Drawing::Size(62, 23);
			this->label���FI10->TabIndex = 98;
			this->label���FI10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU10
			// 
			this->label���ZU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU10->Location = System::Drawing::Point(795, 130);
			this->label���ZU10->Name = L"label���ZU10";
			this->label���ZU10->Size = System::Drawing::Size(62, 23);
			this->label���ZU10->TabIndex = 131;
			this->label���ZU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FI9
			// 
			this->label���FI9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FI9->Location = System::Drawing::Point(1405, 172);
			this->label���FI9->Name = L"label���FI9";
			this->label���FI9->Size = System::Drawing::Size(62, 23);
			this->label���FI9->TabIndex = 97;
			this->label���FI9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU9
			// 
			this->label���ZU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU9->Location = System::Drawing::Point(727, 130);
			this->label���ZU9->Name = L"label���ZU9";
			this->label���ZU9->Size = System::Drawing::Size(62, 23);
			this->label���ZU9->TabIndex = 130;
			this->label���ZU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FI8
			// 
			this->label���FI8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FI8->Location = System::Drawing::Point(1337, 172);
			this->label���FI8->Name = L"label���FI8";
			this->label���FI8->Size = System::Drawing::Size(62, 23);
			this->label���FI8->TabIndex = 96;
			this->label���FI8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU8
			// 
			this->label���ZU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU8->Location = System::Drawing::Point(659, 130);
			this->label���ZU8->Name = L"label���ZU8";
			this->label���ZU8->Size = System::Drawing::Size(62, 23);
			this->label���ZU8->TabIndex = 129;
			this->label���ZU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FI7
			// 
			this->label���FI7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FI7->Location = System::Drawing::Point(1269, 173);
			this->label���FI7->Name = L"label���FI7";
			this->label���FI7->Size = System::Drawing::Size(62, 23);
			this->label���FI7->TabIndex = 95;
			this->label���FI7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU7
			// 
			this->label���ZU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU7->Location = System::Drawing::Point(591, 131);
			this->label���ZU7->Name = L"label���ZU7";
			this->label���ZU7->Size = System::Drawing::Size(62, 23);
			this->label���ZU7->TabIndex = 128;
			this->label���ZU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FI6
			// 
			this->label���FI6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FI6->Location = System::Drawing::Point(1201, 172);
			this->label���FI6->Name = L"label���FI6";
			this->label���FI6->Size = System::Drawing::Size(62, 23);
			this->label���FI6->TabIndex = 94;
			this->label���FI6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU6
			// 
			this->label���ZU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU6->Location = System::Drawing::Point(523, 130);
			this->label���ZU6->Name = L"label���ZU6";
			this->label���ZU6->Size = System::Drawing::Size(62, 23);
			this->label���ZU6->TabIndex = 127;
			this->label���ZU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FI5
			// 
			this->label���FI5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FI5->Location = System::Drawing::Point(1133, 172);
			this->label���FI5->Name = L"label���FI5";
			this->label���FI5->Size = System::Drawing::Size(62, 23);
			this->label���FI5->TabIndex = 93;
			this->label���FI5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU5
			// 
			this->label���ZU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU5->Location = System::Drawing::Point(455, 130);
			this->label���ZU5->Name = L"label���ZU5";
			this->label���ZU5->Size = System::Drawing::Size(62, 23);
			this->label���ZU5->TabIndex = 126;
			this->label���ZU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FI4
			// 
			this->label���FI4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FI4->Location = System::Drawing::Point(1065, 172);
			this->label���FI4->Name = L"label���FI4";
			this->label���FI4->Size = System::Drawing::Size(62, 23);
			this->label���FI4->TabIndex = 92;
			this->label���FI4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU4
			// 
			this->label���ZU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU4->Location = System::Drawing::Point(387, 130);
			this->label���ZU4->Name = L"label���ZU4";
			this->label���ZU4->Size = System::Drawing::Size(62, 23);
			this->label���ZU4->TabIndex = 125;
			this->label���ZU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FI3
			// 
			this->label���FI3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FI3->Location = System::Drawing::Point(997, 173);
			this->label���FI3->Name = L"label���FI3";
			this->label���FI3->Size = System::Drawing::Size(62, 23);
			this->label���FI3->TabIndex = 91;
			this->label���FI3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU3
			// 
			this->label���ZU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU3->Location = System::Drawing::Point(319, 131);
			this->label���ZU3->Name = L"label���ZU3";
			this->label���ZU3->Size = System::Drawing::Size(62, 23);
			this->label���ZU3->TabIndex = 124;
			this->label���ZU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FI2
			// 
			this->label���FI2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FI2->Location = System::Drawing::Point(929, 173);
			this->label���FI2->Name = L"label���FI2";
			this->label���FI2->Size = System::Drawing::Size(62, 23);
			this->label���FI2->TabIndex = 90;
			this->label���FI2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU2
			// 
			this->label���ZU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU2->Location = System::Drawing::Point(251, 131);
			this->label���ZU2->Name = L"label���ZU2";
			this->label���ZU2->Size = System::Drawing::Size(62, 23);
			this->label���ZU2->TabIndex = 123;
			this->label���ZU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FI1
			// 
			this->label���FI1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FI1->Location = System::Drawing::Point(863, 173);
			this->label���FI1->Name = L"label���FI1";
			this->label���FI1->Size = System::Drawing::Size(62, 23);
			this->label���FI1->TabIndex = 89;
			this->label���FI1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZU1
			// 
			this->label���ZU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZU1->Location = System::Drawing::Point(185, 131);
			this->label���ZU1->Name = L"label���ZU1";
			this->label���ZU1->Size = System::Drawing::Size(62, 23);
			this->label���ZU1->TabIndex = 122;
			this->label���ZU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FU10
			// 
			this->label���FU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FU10->Location = System::Drawing::Point(1473, 129);
			this->label���FU10->Name = L"label���FU10";
			this->label���FU10->Size = System::Drawing::Size(62, 23);
			this->label���FU10->TabIndex = 88;
			this->label���FU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU10
			// 
			this->label���FSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU10->Location = System::Drawing::Point(1473, 83);
			this->label���FSU10->Name = L"label���FSU10";
			this->label���FSU10->Size = System::Drawing::Size(62, 23);
			this->label���FSU10->TabIndex = 101;
			this->label���FSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FU9
			// 
			this->label���FU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FU9->Location = System::Drawing::Point(1405, 129);
			this->label���FU9->Name = L"label���FU9";
			this->label���FU9->Size = System::Drawing::Size(62, 23);
			this->label���FU9->TabIndex = 87;
			this->label���FU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU9
			// 
			this->label���FSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU9->Location = System::Drawing::Point(1405, 83);
			this->label���FSU9->Name = L"label���FSU9";
			this->label���FSU9->Size = System::Drawing::Size(62, 23);
			this->label���FSU9->TabIndex = 100;
			this->label���FSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FU8
			// 
			this->label���FU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FU8->Location = System::Drawing::Point(1337, 129);
			this->label���FU8->Name = L"label���FU8";
			this->label���FU8->Size = System::Drawing::Size(62, 23);
			this->label���FU8->TabIndex = 86;
			this->label���FU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU8
			// 
			this->label���FSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU8->Location = System::Drawing::Point(1337, 83);
			this->label���FSU8->Name = L"label���FSU8";
			this->label���FSU8->Size = System::Drawing::Size(62, 23);
			this->label���FSU8->TabIndex = 99;
			this->label���FSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FU7
			// 
			this->label���FU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FU7->Location = System::Drawing::Point(1269, 130);
			this->label���FU7->Name = L"label���FU7";
			this->label���FU7->Size = System::Drawing::Size(62, 23);
			this->label���FU7->TabIndex = 85;
			this->label���FU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU7
			// 
			this->label���FSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU7->Location = System::Drawing::Point(1269, 84);
			this->label���FSU7->Name = L"label���FSU7";
			this->label���FSU7->Size = System::Drawing::Size(62, 23);
			this->label���FSU7->TabIndex = 98;
			this->label���FSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FU6
			// 
			this->label���FU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FU6->Location = System::Drawing::Point(1201, 129);
			this->label���FU6->Name = L"label���FU6";
			this->label���FU6->Size = System::Drawing::Size(62, 23);
			this->label���FU6->TabIndex = 84;
			this->label���FU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU6
			// 
			this->label���FSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU6->Location = System::Drawing::Point(1201, 83);
			this->label���FSU6->Name = L"label���FSU6";
			this->label���FSU6->Size = System::Drawing::Size(62, 23);
			this->label���FSU6->TabIndex = 97;
			this->label���FSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FU5
			// 
			this->label���FU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FU5->Location = System::Drawing::Point(1133, 129);
			this->label���FU5->Name = L"label���FU5";
			this->label���FU5->Size = System::Drawing::Size(62, 23);
			this->label���FU5->TabIndex = 83;
			this->label���FU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU5
			// 
			this->label���FSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU5->Location = System::Drawing::Point(1133, 83);
			this->label���FSU5->Name = L"label���FSU5";
			this->label���FSU5->Size = System::Drawing::Size(62, 23);
			this->label���FSU5->TabIndex = 96;
			this->label���FSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FU4
			// 
			this->label���FU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FU4->Location = System::Drawing::Point(1065, 129);
			this->label���FU4->Name = L"label���FU4";
			this->label���FU4->Size = System::Drawing::Size(62, 23);
			this->label���FU4->TabIndex = 82;
			this->label���FU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU4
			// 
			this->label���FSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU4->Location = System::Drawing::Point(1065, 83);
			this->label���FSU4->Name = L"label���FSU4";
			this->label���FSU4->Size = System::Drawing::Size(62, 23);
			this->label���FSU4->TabIndex = 95;
			this->label���FSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FU3
			// 
			this->label���FU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FU3->Location = System::Drawing::Point(997, 130);
			this->label���FU3->Name = L"label���FU3";
			this->label���FU3->Size = System::Drawing::Size(62, 23);
			this->label���FU3->TabIndex = 81;
			this->label���FU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU3
			// 
			this->label���FSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU3->Location = System::Drawing::Point(997, 84);
			this->label���FSU3->Name = L"label���FSU3";
			this->label���FSU3->Size = System::Drawing::Size(62, 23);
			this->label���FSU3->TabIndex = 94;
			this->label���FSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FU2
			// 
			this->label���FU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FU2->Location = System::Drawing::Point(929, 130);
			this->label���FU2->Name = L"label���FU2";
			this->label���FU2->Size = System::Drawing::Size(62, 23);
			this->label���FU2->TabIndex = 80;
			this->label���FU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU2
			// 
			this->label���FSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU2->Location = System::Drawing::Point(929, 84);
			this->label���FSU2->Name = L"label���FSU2";
			this->label���FSU2->Size = System::Drawing::Size(62, 23);
			this->label���FSU2->TabIndex = 93;
			this->label���FSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FU1
			// 
			this->label���FU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FU1->Location = System::Drawing::Point(863, 130);
			this->label���FU1->Name = L"label���FU1";
			this->label���FU1->Size = System::Drawing::Size(62, 23);
			this->label���FU1->TabIndex = 79;
			this->label���FU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���FSU1
			// 
			this->label���FSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���FSU1->Location = System::Drawing::Point(863, 84);
			this->label���FSU1->Name = L"label���FSU1";
			this->label���FSU1->Size = System::Drawing::Size(62, 23);
			this->label���FSU1->TabIndex = 92;
			this->label���FSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label��ܽ���
			// 
			this->label��ܽ���->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label��ܽ���->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label��ܽ���->Location = System::Drawing::Point(185, 43);
			this->label��ܽ���->Name = L"label��ܽ���";
			this->label��ܽ���->Size = System::Drawing::Size(1350, 23);
			this->label��ܽ���->TabIndex = 91;
			this->label��ܽ���->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU10
			// 
			this->label���ZSU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU10->Location = System::Drawing::Point(795, 83);
			this->label���ZSU10->Name = L"label���ZSU10";
			this->label���ZSU10->Size = System::Drawing::Size(62, 23);
			this->label���ZSU10->TabIndex = 69;
			this->label���ZSU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU9
			// 
			this->label���ZSU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU9->Location = System::Drawing::Point(727, 83);
			this->label���ZSU9->Name = L"label���ZSU9";
			this->label���ZSU9->Size = System::Drawing::Size(62, 23);
			this->label���ZSU9->TabIndex = 68;
			this->label���ZSU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU8
			// 
			this->label���ZSU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU8->Location = System::Drawing::Point(659, 83);
			this->label���ZSU8->Name = L"label���ZSU8";
			this->label���ZSU8->Size = System::Drawing::Size(62, 23);
			this->label���ZSU8->TabIndex = 67;
			this->label���ZSU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU7
			// 
			this->label���ZSU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU7->Location = System::Drawing::Point(591, 84);
			this->label���ZSU7->Name = L"label���ZSU7";
			this->label���ZSU7->Size = System::Drawing::Size(62, 23);
			this->label���ZSU7->TabIndex = 66;
			this->label���ZSU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU6
			// 
			this->label���ZSU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU6->Location = System::Drawing::Point(523, 83);
			this->label���ZSU6->Name = L"label���ZSU6";
			this->label���ZSU6->Size = System::Drawing::Size(62, 23);
			this->label���ZSU6->TabIndex = 65;
			this->label���ZSU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU5
			// 
			this->label���ZSU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU5->Location = System::Drawing::Point(455, 83);
			this->label���ZSU5->Name = L"label���ZSU5";
			this->label���ZSU5->Size = System::Drawing::Size(62, 23);
			this->label���ZSU5->TabIndex = 64;
			this->label���ZSU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU4
			// 
			this->label���ZSU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU4->Location = System::Drawing::Point(387, 83);
			this->label���ZSU4->Name = L"label���ZSU4";
			this->label���ZSU4->Size = System::Drawing::Size(62, 23);
			this->label���ZSU4->TabIndex = 63;
			this->label���ZSU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU3
			// 
			this->label���ZSU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU3->Location = System::Drawing::Point(319, 84);
			this->label���ZSU3->Name = L"label���ZSU3";
			this->label���ZSU3->Size = System::Drawing::Size(62, 23);
			this->label���ZSU3->TabIndex = 62;
			this->label���ZSU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU2
			// 
			this->label���ZSU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU2->Location = System::Drawing::Point(251, 84);
			this->label���ZSU2->Name = L"label���ZSU2";
			this->label���ZSU2->Size = System::Drawing::Size(62, 23);
			this->label���ZSU2->TabIndex = 61;
			this->label���ZSU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label���ZSU1
			// 
			this->label���ZSU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label���ZSU1->Location = System::Drawing::Point(185, 84);
			this->label���ZSU1->Name = L"label���ZSU1";
			this->label���ZSU1->Size = System::Drawing::Size(62, 23);
			this->label���ZSU1->TabIndex = 60;
			this->label���ZSU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(8, 44);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(95, 23);
			this->label19->TabIndex = 58;
			this->label19->Text = L"ʵ�����";
			// 
			// label20
			// 
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(9, 175);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(176, 23);
			this->label20->TabIndex = 7;
			this->label20->Text = L"���������I(mA)";
			// 
			// label21
			// 
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(7, 131);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(176, 23);
			this->label21->TabIndex = 6;
			this->label21->Text = L"��ѹ�����Ud(V)";
			// 
			// label22
			// 
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(8, 84);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(145, 23);
			this->label22->TabIndex = 5;
			this->label22->Text = L"��Դ��ѹU(V)";
			// 
			// groupBox�׳�
			// 
			this->groupBox�׳�->Controls->Add(this->label3);
			this->groupBox�׳�->Controls->Add(this->label4);
			this->groupBox�׳�->Controls->Add(this->chart�׳�);
			this->groupBox�׳�->Controls->Add(this->textBox2);
			this->groupBox�׳�->Controls->Add(this->label�׳�I10);
			this->groupBox�׳�->Controls->Add(this->label�׳�I9);
			this->groupBox�׳�->Controls->Add(this->label�׳�I8);
			this->groupBox�׳�->Controls->Add(this->label�׳�I7);
			this->groupBox�׳�->Controls->Add(this->label�׳�I6);
			this->groupBox�׳�->Controls->Add(this->label�׳�I5);
			this->groupBox�׳�->Controls->Add(this->label�׳�I4);
			this->groupBox�׳�->Controls->Add(this->label�׳�I3);
			this->groupBox�׳�->Controls->Add(this->label�׳�I2);
			this->groupBox�׳�->Controls->Add(this->label�׳�I1);
			this->groupBox�׳�->Controls->Add(this->label�׳�U10);
			this->groupBox�׳�->Controls->Add(this->label�׳�U9);
			this->groupBox�׳�->Controls->Add(this->label�׳�U8);
			this->groupBox�׳�->Controls->Add(this->label�׳�U7);
			this->groupBox�׳�->Controls->Add(this->label�׳�U6);
			this->groupBox�׳�->Controls->Add(this->label�׳�U5);
			this->groupBox�׳�->Controls->Add(this->label�׳�U4);
			this->groupBox�׳�->Controls->Add(this->label�׳�U3);
			this->groupBox�׳�->Controls->Add(this->label�׳�U2);
			this->groupBox�׳�->Controls->Add(this->label�׳�U1);
			this->groupBox�׳�->Controls->Add(this->label�׳����);
			this->groupBox�׳�->Controls->Add(this->label�׳�SU10);
			this->groupBox�׳�->Controls->Add(this->label�׳�SU9);
			this->groupBox�׳�->Controls->Add(this->label�׳�SU8);
			this->groupBox�׳�->Controls->Add(this->label�׳�SU7);
			this->groupBox�׳�->Controls->Add(this->label�׳�SU6);
			this->groupBox�׳�->Controls->Add(this->label�׳�SU5);
			this->groupBox�׳�->Controls->Add(this->label�׳�SU4);
			this->groupBox�׳�->Controls->Add(this->label�׳�SU3);
			this->groupBox�׳�->Controls->Add(this->label�׳�SU2);
			this->groupBox�׳�->Controls->Add(this->label�׳�SU1);
			this->groupBox�׳�->Controls->Add(this->label15);
			this->groupBox�׳�->Controls->Add(this->label16);
			this->groupBox�׳�->Controls->Add(this->label17);
			this->groupBox�׳�->Controls->Add(this->label18);
			this->groupBox�׳�->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox�׳�->Location = System::Drawing::Point(12, 1084);
			this->groupBox�׳�->Name = L"groupBox�׳�";
			this->groupBox�׳�->Size = System::Drawing::Size(1544, 548);
			this->groupBox�׳�->TabIndex = 66;
			this->groupBox�׳�->TabStop = false;
			this->groupBox�׳�->Text = L"�ⶨ�׳���ݵķ�������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(656, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 20);
			this->label3->TabIndex = 115;
			this->label3->Text = L"���֣�";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(656, 393);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 20);
			this->label4->TabIndex = 114;
			this->label4->Text = L"��ʵ���ܷ�20";
			// 
			// chart�׳�
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart�׳�->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart�׳�->Legends->Add(legend5);
			this->chart�׳�->Location = System::Drawing::Point(15, 219);
			this->chart�׳�->Name = L"chart�׳�";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chart�׳�->Series->Add(series5);
			this->chart�׳�->Size = System::Drawing::Size(570, 300);
			this->chart�׳�->TabIndex = 113;
			this->chart�׳�->Text = L"chart�׳�";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(660, 342);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 28);
			this->textBox2->TabIndex = 112;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Ԫ���������Բ���::textBox2_TextChanged);
			// 
			// label�׳�I10
			// 
			this->label�׳�I10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�I10->Location = System::Drawing::Point(803, 175);
			this->label�׳�I10->Name = L"label�׳�I10";
			this->label�׳�I10->Size = System::Drawing::Size(62, 23);
			this->label�׳�I10->TabIndex = 111;
			this->label�׳�I10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�I9
			// 
			this->label�׳�I9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�I9->Location = System::Drawing::Point(735, 175);
			this->label�׳�I9->Name = L"label�׳�I9";
			this->label�׳�I9->Size = System::Drawing::Size(62, 23);
			this->label�׳�I9->TabIndex = 110;
			this->label�׳�I9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�I8
			// 
			this->label�׳�I8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�I8->Location = System::Drawing::Point(667, 175);
			this->label�׳�I8->Name = L"label�׳�I8";
			this->label�׳�I8->Size = System::Drawing::Size(62, 23);
			this->label�׳�I8->TabIndex = 109;
			this->label�׳�I8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�I7
			// 
			this->label�׳�I7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�I7->Location = System::Drawing::Point(599, 176);
			this->label�׳�I7->Name = L"label�׳�I7";
			this->label�׳�I7->Size = System::Drawing::Size(62, 23);
			this->label�׳�I7->TabIndex = 108;
			this->label�׳�I7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�I6
			// 
			this->label�׳�I6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�I6->Location = System::Drawing::Point(531, 175);
			this->label�׳�I6->Name = L"label�׳�I6";
			this->label�׳�I6->Size = System::Drawing::Size(62, 23);
			this->label�׳�I6->TabIndex = 107;
			this->label�׳�I6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�I5
			// 
			this->label�׳�I5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�I5->Location = System::Drawing::Point(463, 175);
			this->label�׳�I5->Name = L"label�׳�I5";
			this->label�׳�I5->Size = System::Drawing::Size(62, 23);
			this->label�׳�I5->TabIndex = 106;
			this->label�׳�I5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�I4
			// 
			this->label�׳�I4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�I4->Location = System::Drawing::Point(395, 175);
			this->label�׳�I4->Name = L"label�׳�I4";
			this->label�׳�I4->Size = System::Drawing::Size(62, 23);
			this->label�׳�I4->TabIndex = 105;
			this->label�׳�I4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�I3
			// 
			this->label�׳�I3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�I3->Location = System::Drawing::Point(327, 176);
			this->label�׳�I3->Name = L"label�׳�I3";
			this->label�׳�I3->Size = System::Drawing::Size(62, 23);
			this->label�׳�I3->TabIndex = 104;
			this->label�׳�I3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�I2
			// 
			this->label�׳�I2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�I2->Location = System::Drawing::Point(259, 176);
			this->label�׳�I2->Name = L"label�׳�I2";
			this->label�׳�I2->Size = System::Drawing::Size(62, 23);
			this->label�׳�I2->TabIndex = 103;
			this->label�׳�I2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�I1
			// 
			this->label�׳�I1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�I1->Location = System::Drawing::Point(193, 176);
			this->label�׳�I1->Name = L"label�׳�I1";
			this->label�׳�I1->Size = System::Drawing::Size(62, 23);
			this->label�׳�I1->TabIndex = 102;
			this->label�׳�I1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�U10
			// 
			this->label�׳�U10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�U10->Location = System::Drawing::Point(803, 129);
			this->label�׳�U10->Name = L"label�׳�U10";
			this->label�׳�U10->Size = System::Drawing::Size(62, 23);
			this->label�׳�U10->TabIndex = 101;
			this->label�׳�U10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�U9
			// 
			this->label�׳�U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�U9->Location = System::Drawing::Point(735, 129);
			this->label�׳�U9->Name = L"label�׳�U9";
			this->label�׳�U9->Size = System::Drawing::Size(62, 23);
			this->label�׳�U9->TabIndex = 100;
			this->label�׳�U9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�U8
			// 
			this->label�׳�U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�U8->Location = System::Drawing::Point(667, 129);
			this->label�׳�U8->Name = L"label�׳�U8";
			this->label�׳�U8->Size = System::Drawing::Size(62, 23);
			this->label�׳�U8->TabIndex = 99;
			this->label�׳�U8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�U7
			// 
			this->label�׳�U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�U7->Location = System::Drawing::Point(599, 130);
			this->label�׳�U7->Name = L"label�׳�U7";
			this->label�׳�U7->Size = System::Drawing::Size(62, 23);
			this->label�׳�U7->TabIndex = 98;
			this->label�׳�U7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�U6
			// 
			this->label�׳�U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�U6->Location = System::Drawing::Point(531, 129);
			this->label�׳�U6->Name = L"label�׳�U6";
			this->label�׳�U6->Size = System::Drawing::Size(62, 23);
			this->label�׳�U6->TabIndex = 97;
			this->label�׳�U6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�U5
			// 
			this->label�׳�U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�U5->Location = System::Drawing::Point(463, 129);
			this->label�׳�U5->Name = L"label�׳�U5";
			this->label�׳�U5->Size = System::Drawing::Size(62, 23);
			this->label�׳�U5->TabIndex = 96;
			this->label�׳�U5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�U4
			// 
			this->label�׳�U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�U4->Location = System::Drawing::Point(395, 129);
			this->label�׳�U4->Name = L"label�׳�U4";
			this->label�׳�U4->Size = System::Drawing::Size(62, 23);
			this->label�׳�U4->TabIndex = 95;
			this->label�׳�U4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�U3
			// 
			this->label�׳�U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�U3->Location = System::Drawing::Point(327, 130);
			this->label�׳�U3->Name = L"label�׳�U3";
			this->label�׳�U3->Size = System::Drawing::Size(62, 23);
			this->label�׳�U3->TabIndex = 94;
			this->label�׳�U3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�U2
			// 
			this->label�׳�U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�U2->Location = System::Drawing::Point(259, 130);
			this->label�׳�U2->Name = L"label�׳�U2";
			this->label�׳�U2->Size = System::Drawing::Size(62, 23);
			this->label�׳�U2->TabIndex = 93;
			this->label�׳�U2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�U1
			// 
			this->label�׳�U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�U1->Location = System::Drawing::Point(193, 130);
			this->label�׳�U1->Name = L"label�׳�U1";
			this->label�׳�U1->Size = System::Drawing::Size(62, 23);
			this->label�׳�U1->TabIndex = 92;
			this->label�׳�U1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳����
			// 
			this->label�׳����->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳����->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label�׳����->Location = System::Drawing::Point(193, 44);
			this->label�׳����->Name = L"label�׳����";
			this->label�׳����->Size = System::Drawing::Size(672, 23);
			this->label�׳����->TabIndex = 91;
			this->label�׳����->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�SU10
			// 
			this->label�׳�SU10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�SU10->Location = System::Drawing::Point(803, 83);
			this->label�׳�SU10->Name = L"label�׳�SU10";
			this->label�׳�SU10->Size = System::Drawing::Size(62, 23);
			this->label�׳�SU10->TabIndex = 69;
			this->label�׳�SU10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�SU9
			// 
			this->label�׳�SU9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�SU9->Location = System::Drawing::Point(735, 83);
			this->label�׳�SU9->Name = L"label�׳�SU9";
			this->label�׳�SU9->Size = System::Drawing::Size(62, 23);
			this->label�׳�SU9->TabIndex = 68;
			this->label�׳�SU9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�SU8
			// 
			this->label�׳�SU8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�SU8->Location = System::Drawing::Point(667, 83);
			this->label�׳�SU8->Name = L"label�׳�SU8";
			this->label�׳�SU8->Size = System::Drawing::Size(62, 23);
			this->label�׳�SU8->TabIndex = 67;
			this->label�׳�SU8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�SU7
			// 
			this->label�׳�SU7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�SU7->Location = System::Drawing::Point(599, 84);
			this->label�׳�SU7->Name = L"label�׳�SU7";
			this->label�׳�SU7->Size = System::Drawing::Size(62, 23);
			this->label�׳�SU7->TabIndex = 66;
			this->label�׳�SU7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�SU6
			// 
			this->label�׳�SU6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�SU6->Location = System::Drawing::Point(531, 83);
			this->label�׳�SU6->Name = L"label�׳�SU6";
			this->label�׳�SU6->Size = System::Drawing::Size(62, 23);
			this->label�׳�SU6->TabIndex = 65;
			this->label�׳�SU6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�SU5
			// 
			this->label�׳�SU5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�SU5->Location = System::Drawing::Point(463, 83);
			this->label�׳�SU5->Name = L"label�׳�SU5";
			this->label�׳�SU5->Size = System::Drawing::Size(62, 23);
			this->label�׳�SU5->TabIndex = 64;
			this->label�׳�SU5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�SU4
			// 
			this->label�׳�SU4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�SU4->Location = System::Drawing::Point(395, 83);
			this->label�׳�SU4->Name = L"label�׳�SU4";
			this->label�׳�SU4->Size = System::Drawing::Size(62, 23);
			this->label�׳�SU4->TabIndex = 63;
			this->label�׳�SU4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�SU3
			// 
			this->label�׳�SU3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�SU3->Location = System::Drawing::Point(327, 84);
			this->label�׳�SU3->Name = L"label�׳�SU3";
			this->label�׳�SU3->Size = System::Drawing::Size(62, 23);
			this->label�׳�SU3->TabIndex = 62;
			this->label�׳�SU3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�SU2
			// 
			this->label�׳�SU2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�SU2->Location = System::Drawing::Point(259, 84);
			this->label�׳�SU2->Name = L"label�׳�SU2";
			this->label�׳�SU2->Size = System::Drawing::Size(62, 23);
			this->label�׳�SU2->TabIndex = 61;
			this->label�׳�SU2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label�׳�SU1
			// 
			this->label�׳�SU1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label�׳�SU1->Location = System::Drawing::Point(193, 84);
			this->label�׳�SU1->Name = L"label�׳�SU1";
			this->label�׳�SU1->Size = System::Drawing::Size(62, 23);
			this->label�׳�SU1->TabIndex = 60;
			this->label�׳�SU1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(8, 44);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 23);
			this->label15->TabIndex = 58;
			this->label15->Text = L"ʵ�����";
			// 
			// label16
			// 
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(8, 175);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(176, 23);
			this->label16->TabIndex = 7;
			this->label16->Text = L"���������I(mA)";
			// 
			// label17
			// 
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(6, 131);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(176, 23);
			this->label17->TabIndex = 6;
			this->label17->Text = L"��ѹ�����Ul(V)";
			// 
			// label18
			// 
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(8, 84);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(145, 23);
			this->label18->TabIndex = 5;
			this->label18->Text = L"��Դ��ѹU(V)";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Ԫ���������Բ���::printDocument1_PrintPage);
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
			// Ԫ���������Բ���
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1767, 732);
			this->Controls->Add(this->panel1);
			this->Name = L"Ԫ���������Բ���";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ԫ���������Բ���";
			this->Load += gcnew System::EventHandler(this, &Ԫ���������Բ���::Ԫ���������Բ���_Load);
			this->Click += gcnew System::EventHandler(this, &Ԫ���������Բ���::Ԫ���������Բ���_Click);
			this->panel1->ResumeLayout(false);
			this->groupBox����->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart����))->EndInit();
			this->groupBox��ѹ->ResumeLayout(false);
			this->groupBox��ѹ->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart��ѹ))->EndInit();
			this->groupBox���->ResumeLayout(false);
			this->groupBox���->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart���))->EndInit();
			this->groupBox���->ResumeLayout(false);
			this->groupBox���->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart���))->EndInit();
			this->groupBox�׳�->ResumeLayout(false);
			this->groupBox�׳�->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart�׳�))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
			 void chart����_load();
			 void chart�׳�_load();
			 void chart��ѹ_load();
			 void chart���_load();
			 void chart���_load();

private: System::Void label��ѹZU3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox6_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	GenerateTotalGrades();
}

		 void GenerateTotalGrades();
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar != '\b') {
		if ((e->KeyChar < '0') || (e->KeyChar > '9'))//������������0-9����  
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
	NowPrint = "����";
	Priview();
}
		 String ^NowPrint = "����";
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Bitmap ^ _NewBitmap;
	_NewBitmap = PrintLoad();
	int x = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Height;
	int y = printDocument1->PrinterSettings->DefaultPageSettings->PaperSize->Width;
	e->Graphics->DrawImage(_NewBitmap, System::Drawing::Rectangle(0, 0, x, y), System::Drawing::Rectangle(0, 0, _NewBitmap->Width, _NewBitmap->Height), GraphicsUnit::Pixel);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	NowPrint = "����";
	Print();
}
		 void Print();

		 Bitmap^ PrintLoad();
		 void Priview();

private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NowPrint = "����";
	Priview();
	NowPrint = "�׳�";
	Priview();
	NowPrint = "���";
	Priview();
	NowPrint = "���";
	Priview();
	NowPrint = "��ѹ";
	Priview();
}

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NowPrint = "����";
	Print();
	NowPrint = "�׳�";
	Print();
	NowPrint = "���";
	Print();
	NowPrint = "���";
	Print();
	NowPrint = "��ѹ";
	Print();
}
private: System::Void panel1_Click(System::Object^  sender, System::EventArgs^  e) {
	Control ^c = (Control^)sender ;
	MessageBox::Show(c->Name);


}
private: System::Void Ԫ���������Բ���_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Ԫ���������Բ���_Click(System::Object^  sender, System::EventArgs^  e) {
	Control ^c = (Control^)sender;
	MessageBox::Show(c->Name);
}
		
private: System::Void groupBox����_Enter(System::Object^  sender, System::EventArgs^  e) {
}

		 void SaveCorrectGrades();
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//����ѧ���ɼ�
	SaveCorrectGrades();
}
};
}
