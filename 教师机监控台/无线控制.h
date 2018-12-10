#pragma once
#include "NumberHandle.h"

namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 无线控制 摘要
	/// </summary>
	public ref class 无线控制 : public System::Windows::Forms::Form
	{
	public:
		无线控制(void)
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
		~无线控制()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::TextBox^  textBoxD1_A_ALL;

	private: System::Windows::Forms::TextBox^  textBoxD1_A_D;

	private: System::Windows::Forms::TextBox^  textBoxD1_A_C;

	private: System::Windows::Forms::TextBox^  textBoxD1_A_B;

	private: System::Windows::Forms::TextBox^  textBoxD1_V_ALL;

	private: System::Windows::Forms::TextBox^  textBoxD1_V_D;

	private: System::Windows::Forms::TextBox^  textBoxD1_V_C;

	private: System::Windows::Forms::TextBox^  textBoxD1_V_B;
	private: System::Windows::Forms::TextBox^  textBoxD1_A_A;


	private: System::Windows::Forms::TextBox^  textBoxD1_V_A;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::TextBox^  textBoxD2_A_ALL;

	private: System::Windows::Forms::TextBox^  textBoxD2_A_D;

	private: System::Windows::Forms::TextBox^  textBoxD2_A_C;

	private: System::Windows::Forms::TextBox^  textBoxD2_A_B;

	private: System::Windows::Forms::TextBox^  textBoxD2_V_ALL;

	private: System::Windows::Forms::TextBox^  textBoxD2_V_D;

	private: System::Windows::Forms::TextBox^  textBoxD2_V_C;

	private: System::Windows::Forms::TextBox^  textBoxD2_V_B;
	private: System::Windows::Forms::TextBox^  textBoxD2_A_A;




	private: System::Windows::Forms::TextBox^  textBoxD2_V_A;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
private: System::Windows::Forms::Button^  button100;
private: System::Windows::Forms::TextBox^  textBoxAC_V_ALL;



private: System::Windows::Forms::TextBox^  textBoxAC_V_D;

private: System::Windows::Forms::TextBox^  textBoxAC_V_C;

private: System::Windows::Forms::TextBox^  textBoxAC_V_B;

private: System::Windows::Forms::TextBox^  textBoxAC_V_A;

	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Button^  button48;
private: System::Windows::Forms::Button^  button49;
private: System::Windows::Forms::Button^  button50;
private: System::Windows::Forms::Button^  button51;
private: System::Windows::Forms::Button^  button52;
private: System::Windows::Forms::Button^  button53;
private: System::Windows::Forms::Button^  button54;
private: System::Windows::Forms::Button^  button55;
private: System::Windows::Forms::Button^  button56;
private: System::Windows::Forms::Button^  button57;
private: System::Windows::Forms::Button^  button58;
private: System::Windows::Forms::Button^  button59;
private: System::Windows::Forms::Button^  button60;
private: System::Windows::Forms::Button^  button61;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Button^  button62;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Button^  button63;
private: System::Windows::Forms::Button^  button64;
private: System::Windows::Forms::Button^  button65;
private: System::Windows::Forms::Button^  button66;
private: System::Windows::Forms::Button^  button67;
private: System::Windows::Forms::Button^  button68;
private: System::Windows::Forms::Button^  button69;
private: System::Windows::Forms::Button^  button70;
private: System::Windows::Forms::Button^  button71;
private: System::Windows::Forms::Button^  button72;
private: System::Windows::Forms::Button^  button73;
private: System::Windows::Forms::Button^  button74;
private: System::Windows::Forms::Button^  button75;
private: System::Windows::Forms::Button^  button76;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Button^  button77;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Button^  button78;
private: System::Windows::Forms::Button^  button79;
private: System::Windows::Forms::Button^  button80;
private: System::Windows::Forms::Button^  button81;
private: System::Windows::Forms::Button^  button82;
private: System::Windows::Forms::Button^  button83;
private: System::Windows::Forms::Button^  button84;
private: System::Windows::Forms::Button^  button85;
private: System::Windows::Forms::Button^  button86;
private: System::Windows::Forms::Button^  button87;
private: System::Windows::Forms::Button^  button88;
private: System::Windows::Forms::Button^  button89;
private: System::Windows::Forms::Button^  button90;
private: System::Windows::Forms::Button^  button91;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Button^  button92;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::Button^  button93;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Button^  button98;
private: System::Windows::Forms::TextBox^  textBox_E_Hz;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::TextBox^  textBox_E_KHz;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::TextBox^  textBox_E_MHz;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Button^  button99;
private: System::Windows::Forms::TextBox^  textBox_S_Hz;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::TextBox^  textBox_S_KHz;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::TextBox^  textBox_S_MHz;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::Panel^  panel8;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Button^  button94;
private: System::Windows::Forms::Button^  button95;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::TextBox^  textBoxSweep;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::TextBox^  textBoxDuty;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Button^  button96;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::TextBox^  textBoxHz;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::TextBox^  textBoxKHz;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::TextBox^  textBoxMHz;
private: System::Windows::Forms::Button^  button97;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;















































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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBoxD1_A_ALL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD1_A_D = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD1_A_C = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD1_A_B = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD1_V_ALL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD1_V_D = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD1_V_C = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD1_V_B = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD1_A_A = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD1_V_A = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->textBoxD2_A_ALL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD2_A_D = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD2_A_C = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD2_A_B = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD2_V_ALL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD2_V_D = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD2_V_C = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD2_V_B = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD2_A_A = (gcnew System::Windows::Forms::TextBox());
			this->textBoxD2_V_A = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->textBoxAC_V_ALL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAC_V_D = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAC_V_C = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAC_V_B = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAC_V_A = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->textBox_E_Hz = (gcnew System::Windows::Forms::TextBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->textBox_E_KHz = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->textBox_E_MHz = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->textBox_S_Hz = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->textBox_S_KHz = (gcnew System::Windows::Forms::TextBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->textBox_S_MHz = (gcnew System::Windows::Forms::TextBox());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->textBoxSweep = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->textBoxDuty = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->textBoxHz = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->textBoxKHz = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->textBoxMHz = (gcnew System::Windows::Forms::TextBox());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(615, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(322, 112);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"无线控制串口";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(142, 62);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(114, 28);
			this->button8->TabIndex = 10;
			this->button8->Text = L"串口关闭";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &无线控制::button8_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(30) {
				L"COM1", L"COM2", L"COM3", L"COM4", L"COM5", L"COM6",
					L"COM7", L"COM8", L"COM9", L"COM10", L"COM11", L"COM12", L"COM13", L"COM14", L"COM15", L"COM16", L"COM17", L"COM18", L"COM19",
					L"COM20", L"COM21", L"COM22", L"COM23", L"COM24", L"COM25", L"COM26", L"COM27", L"COM28", L"COM29", L"COM30"
			});
			this->comboBox1->Location = System::Drawing::Point(6, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 8;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(142, 28);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(114, 28);
			this->button7->TabIndex = 9;
			this->button7->Text = L"串口打开";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &无线控制::button7_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->textBoxD1_A_ALL);
			this->panel1->Controls->Add(this->textBoxD1_A_D);
			this->panel1->Controls->Add(this->textBoxD1_A_C);
			this->panel1->Controls->Add(this->textBoxD1_A_B);
			this->panel1->Controls->Add(this->textBoxD1_V_ALL);
			this->panel1->Controls->Add(this->textBoxD1_V_D);
			this->panel1->Controls->Add(this->textBoxD1_V_C);
			this->panel1->Controls->Add(this->textBoxD1_V_B);
			this->panel1->Controls->Add(this->textBoxD1_A_A);
			this->panel1->Controls->Add(this->textBoxD1_V_A);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(68, 595);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(781, 399);
			this->panel1->TabIndex = 12;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &无线控制::panel1_Paint);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->Location = System::Drawing::Point(604, 331);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 29);
			this->button11->TabIndex = 36;
			this->button11->Text = L"锁定";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &无线控制::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->Location = System::Drawing::Point(604, 272);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 29);
			this->button12->TabIndex = 35;
			this->button12->Text = L"锁定";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &无线控制::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->Location = System::Drawing::Point(604, 214);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 29);
			this->button13->TabIndex = 34;
			this->button13->Text = L"锁定";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &无线控制::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->Location = System::Drawing::Point(604, 154);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 29);
			this->button14->TabIndex = 33;
			this->button14->Text = L"锁定";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &无线控制::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->Location = System::Drawing::Point(604, 97);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 29);
			this->button15->TabIndex = 32;
			this->button15->Text = L"锁定";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &无线控制::button15_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(500, 331);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 29);
			this->button6->TabIndex = 31;
			this->button6->Text = L"打开";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &无线控制::button6_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(500, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 30;
			this->button1->Text = L"打开";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &无线控制::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(500, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 29;
			this->button2->Text = L"打开";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &无线控制::button2_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->Location = System::Drawing::Point(500, 154);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 29);
			this->button9->TabIndex = 28;
			this->button9->Text = L"打开";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &无线控制::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->Location = System::Drawing::Point(500, 97);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 29);
			this->button10->TabIndex = 27;
			this->button10->Text = L"打开";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &无线控制::button10_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(401, 332);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 29);
			this->button5->TabIndex = 26;
			this->button5->Text = L"确认";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &无线控制::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(401, 273);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 29);
			this->button4->TabIndex = 25;
			this->button4->Text = L"确认";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &无线控制::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(401, 215);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 29);
			this->button3->TabIndex = 24;
			this->button3->Text = L"确认";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &无线控制::button3_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->Location = System::Drawing::Point(401, 155);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 29);
			this->button16->TabIndex = 23;
			this->button16->Text = L"确认";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &无线控制::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->Location = System::Drawing::Point(401, 98);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 29);
			this->button17->TabIndex = 22;
			this->button17->Text = L"确认";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &无线控制::button17_Click);
			// 
			// textBoxD1_A_ALL
			// 
			this->textBoxD1_A_ALL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD1_A_ALL->Location = System::Drawing::Point(240, 333);
			this->textBoxD1_A_ALL->Name = L"textBoxD1_A_ALL";
			this->textBoxD1_A_ALL->Size = System::Drawing::Size(92, 30);
			this->textBoxD1_A_ALL->TabIndex = 21;
			this->textBoxD1_A_ALL->Text = L"5.00";
			// 
			// textBoxD1_A_D
			// 
			this->textBoxD1_A_D->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD1_A_D->Location = System::Drawing::Point(240, 274);
			this->textBoxD1_A_D->Name = L"textBoxD1_A_D";
			this->textBoxD1_A_D->Size = System::Drawing::Size(92, 30);
			this->textBoxD1_A_D->TabIndex = 20;
			this->textBoxD1_A_D->Text = L"5.00";
			// 
			// textBoxD1_A_C
			// 
			this->textBoxD1_A_C->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD1_A_C->Location = System::Drawing::Point(240, 216);
			this->textBoxD1_A_C->Name = L"textBoxD1_A_C";
			this->textBoxD1_A_C->Size = System::Drawing::Size(92, 30);
			this->textBoxD1_A_C->TabIndex = 19;
			this->textBoxD1_A_C->Text = L"5.00";
			// 
			// textBoxD1_A_B
			// 
			this->textBoxD1_A_B->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD1_A_B->Location = System::Drawing::Point(240, 156);
			this->textBoxD1_A_B->Name = L"textBoxD1_A_B";
			this->textBoxD1_A_B->Size = System::Drawing::Size(92, 30);
			this->textBoxD1_A_B->TabIndex = 18;
			this->textBoxD1_A_B->Text = L"5.00";
			// 
			// textBoxD1_V_ALL
			// 
			this->textBoxD1_V_ALL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD1_V_ALL->Location = System::Drawing::Point(118, 333);
			this->textBoxD1_V_ALL->Name = L"textBoxD1_V_ALL";
			this->textBoxD1_V_ALL->Size = System::Drawing::Size(81, 30);
			this->textBoxD1_V_ALL->TabIndex = 16;
			this->textBoxD1_V_ALL->Text = L"5.00";
			// 
			// textBoxD1_V_D
			// 
			this->textBoxD1_V_D->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD1_V_D->Location = System::Drawing::Point(118, 274);
			this->textBoxD1_V_D->Name = L"textBoxD1_V_D";
			this->textBoxD1_V_D->Size = System::Drawing::Size(81, 30);
			this->textBoxD1_V_D->TabIndex = 15;
			this->textBoxD1_V_D->Text = L"5.00";
			// 
			// textBoxD1_V_C
			// 
			this->textBoxD1_V_C->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD1_V_C->Location = System::Drawing::Point(118, 216);
			this->textBoxD1_V_C->Name = L"textBoxD1_V_C";
			this->textBoxD1_V_C->Size = System::Drawing::Size(81, 30);
			this->textBoxD1_V_C->TabIndex = 14;
			this->textBoxD1_V_C->Text = L"5.00";
			// 
			// textBoxD1_V_B
			// 
			this->textBoxD1_V_B->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD1_V_B->Location = System::Drawing::Point(118, 156);
			this->textBoxD1_V_B->Name = L"textBoxD1_V_B";
			this->textBoxD1_V_B->Size = System::Drawing::Size(81, 30);
			this->textBoxD1_V_B->TabIndex = 13;
			this->textBoxD1_V_B->Text = L"5.00";
			// 
			// textBoxD1_A_A
			// 
			this->textBoxD1_A_A->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD1_A_A->Location = System::Drawing::Point(240, 99);
			this->textBoxD1_A_A->Name = L"textBoxD1_A_A";
			this->textBoxD1_A_A->Size = System::Drawing::Size(92, 30);
			this->textBoxD1_A_A->TabIndex = 12;
			this->textBoxD1_A_A->Text = L"5.00";
			// 
			// textBoxD1_V_A
			// 
			this->textBoxD1_V_A->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD1_V_A->Location = System::Drawing::Point(118, 98);
			this->textBoxD1_V_A->Name = L"textBoxD1_V_A";
			this->textBoxD1_V_A->Size = System::Drawing::Size(81, 30);
			this->textBoxD1_V_A->TabIndex = 11;
			this->textBoxD1_V_A->Text = L"5.00";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(25, 338);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 25);
			this->label11->TabIndex = 10;
			this->label11->Text = L"全班";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(25, 276);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 25);
			this->label9->TabIndex = 9;
			this->label9->Text = L"D组";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(25, 215);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 25);
			this->label10->TabIndex = 8;
			this->label10->Text = L"C组";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(25, 159);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"B组";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(25, 98);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 34);
			this->label7->TabIndex = 6;
			this->label7->Text = L"A组";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(606, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"按键";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(501, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"输出";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(402, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"设定";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(235, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"电流（A）";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(113, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"电压V";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(312, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"直流电源1控制";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->button19);
			this->panel2->Controls->Add(this->button20);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Controls->Add(this->button23);
			this->panel2->Controls->Add(this->button24);
			this->panel2->Controls->Add(this->button25);
			this->panel2->Controls->Add(this->button26);
			this->panel2->Controls->Add(this->button27);
			this->panel2->Controls->Add(this->button28);
			this->panel2->Controls->Add(this->button29);
			this->panel2->Controls->Add(this->button30);
			this->panel2->Controls->Add(this->button31);
			this->panel2->Controls->Add(this->button32);
			this->panel2->Controls->Add(this->textBoxD2_A_ALL);
			this->panel2->Controls->Add(this->textBoxD2_A_D);
			this->panel2->Controls->Add(this->textBoxD2_A_C);
			this->panel2->Controls->Add(this->textBoxD2_A_B);
			this->panel2->Controls->Add(this->textBoxD2_V_ALL);
			this->panel2->Controls->Add(this->textBoxD2_V_D);
			this->panel2->Controls->Add(this->textBoxD2_V_C);
			this->panel2->Controls->Add(this->textBoxD2_V_B);
			this->panel2->Controls->Add(this->textBoxD2_A_A);
			this->panel2->Controls->Add(this->textBoxD2_V_A);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Location = System::Drawing::Point(874, 595);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(780, 399);
			this->panel2->TabIndex = 13;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &无线控制::panel2_Paint);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->Location = System::Drawing::Point(604, 331);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 29);
			this->button18->TabIndex = 36;
			this->button18->Text = L"锁定";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &无线控制::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->Location = System::Drawing::Point(604, 272);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 29);
			this->button19->TabIndex = 35;
			this->button19->Text = L"锁定";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &无线控制::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->Location = System::Drawing::Point(604, 214);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 29);
			this->button20->TabIndex = 34;
			this->button20->Text = L"锁定";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &无线控制::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->Location = System::Drawing::Point(604, 154);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 29);
			this->button21->TabIndex = 33;
			this->button21->Text = L"锁定";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &无线控制::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->Location = System::Drawing::Point(604, 97);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 29);
			this->button22->TabIndex = 32;
			this->button22->Text = L"锁定";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &无线控制::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->Location = System::Drawing::Point(500, 331);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 29);
			this->button23->TabIndex = 31;
			this->button23->Text = L"打开";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &无线控制::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->Location = System::Drawing::Point(500, 272);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 29);
			this->button24->TabIndex = 30;
			this->button24->Text = L"打开";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &无线控制::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->Location = System::Drawing::Point(500, 214);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 29);
			this->button25->TabIndex = 29;
			this->button25->Text = L"打开";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &无线控制::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->Location = System::Drawing::Point(500, 154);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 29);
			this->button26->TabIndex = 28;
			this->button26->Text = L"打开";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &无线控制::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->Location = System::Drawing::Point(500, 97);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 29);
			this->button27->TabIndex = 27;
			this->button27->Text = L"打开";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &无线控制::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->Location = System::Drawing::Point(401, 332);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 29);
			this->button28->TabIndex = 26;
			this->button28->Text = L"确认";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &无线控制::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->Location = System::Drawing::Point(401, 273);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(75, 29);
			this->button29->TabIndex = 25;
			this->button29->Text = L"确认";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &无线控制::button29_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->Location = System::Drawing::Point(401, 215);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 29);
			this->button30->TabIndex = 24;
			this->button30->Text = L"确认";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &无线控制::button30_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->Location = System::Drawing::Point(401, 155);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(75, 29);
			this->button31->TabIndex = 23;
			this->button31->Text = L"确认";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &无线控制::button31_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->Location = System::Drawing::Point(401, 98);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(75, 29);
			this->button32->TabIndex = 22;
			this->button32->Text = L"确认";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &无线控制::button32_Click);
			// 
			// textBoxD2_A_ALL
			// 
			this->textBoxD2_A_ALL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD2_A_ALL->Location = System::Drawing::Point(240, 333);
			this->textBoxD2_A_ALL->Name = L"textBoxD2_A_ALL";
			this->textBoxD2_A_ALL->Size = System::Drawing::Size(92, 30);
			this->textBoxD2_A_ALL->TabIndex = 21;
			this->textBoxD2_A_ALL->Text = L"5.00";
			// 
			// textBoxD2_A_D
			// 
			this->textBoxD2_A_D->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD2_A_D->Location = System::Drawing::Point(240, 274);
			this->textBoxD2_A_D->Name = L"textBoxD2_A_D";
			this->textBoxD2_A_D->Size = System::Drawing::Size(92, 30);
			this->textBoxD2_A_D->TabIndex = 20;
			this->textBoxD2_A_D->Text = L"5.00";
			// 
			// textBoxD2_A_C
			// 
			this->textBoxD2_A_C->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD2_A_C->Location = System::Drawing::Point(240, 216);
			this->textBoxD2_A_C->Name = L"textBoxD2_A_C";
			this->textBoxD2_A_C->Size = System::Drawing::Size(92, 30);
			this->textBoxD2_A_C->TabIndex = 19;
			this->textBoxD2_A_C->Text = L"5.00";
			// 
			// textBoxD2_A_B
			// 
			this->textBoxD2_A_B->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD2_A_B->Location = System::Drawing::Point(240, 156);
			this->textBoxD2_A_B->Name = L"textBoxD2_A_B";
			this->textBoxD2_A_B->Size = System::Drawing::Size(92, 30);
			this->textBoxD2_A_B->TabIndex = 18;
			this->textBoxD2_A_B->Text = L"5.00";
			// 
			// textBoxD2_V_ALL
			// 
			this->textBoxD2_V_ALL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD2_V_ALL->Location = System::Drawing::Point(118, 333);
			this->textBoxD2_V_ALL->Name = L"textBoxD2_V_ALL";
			this->textBoxD2_V_ALL->Size = System::Drawing::Size(81, 30);
			this->textBoxD2_V_ALL->TabIndex = 16;
			this->textBoxD2_V_ALL->Text = L"5.00";
			// 
			// textBoxD2_V_D
			// 
			this->textBoxD2_V_D->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD2_V_D->Location = System::Drawing::Point(118, 274);
			this->textBoxD2_V_D->Name = L"textBoxD2_V_D";
			this->textBoxD2_V_D->Size = System::Drawing::Size(81, 30);
			this->textBoxD2_V_D->TabIndex = 15;
			this->textBoxD2_V_D->Text = L"5.00";
			// 
			// textBoxD2_V_C
			// 
			this->textBoxD2_V_C->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD2_V_C->Location = System::Drawing::Point(118, 216);
			this->textBoxD2_V_C->Name = L"textBoxD2_V_C";
			this->textBoxD2_V_C->Size = System::Drawing::Size(81, 30);
			this->textBoxD2_V_C->TabIndex = 14;
			this->textBoxD2_V_C->Text = L"5.00";
			// 
			// textBoxD2_V_B
			// 
			this->textBoxD2_V_B->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD2_V_B->Location = System::Drawing::Point(118, 156);
			this->textBoxD2_V_B->Name = L"textBoxD2_V_B";
			this->textBoxD2_V_B->Size = System::Drawing::Size(81, 30);
			this->textBoxD2_V_B->TabIndex = 13;
			this->textBoxD2_V_B->Text = L"5.00";
			// 
			// textBoxD2_A_A
			// 
			this->textBoxD2_A_A->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD2_A_A->Location = System::Drawing::Point(240, 99);
			this->textBoxD2_A_A->Name = L"textBoxD2_A_A";
			this->textBoxD2_A_A->Size = System::Drawing::Size(92, 30);
			this->textBoxD2_A_A->TabIndex = 12;
			this->textBoxD2_A_A->Text = L"5.00";
			// 
			// textBoxD2_V_A
			// 
			this->textBoxD2_V_A->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxD2_V_A->Location = System::Drawing::Point(118, 98);
			this->textBoxD2_V_A->Name = L"textBoxD2_V_A";
			this->textBoxD2_V_A->Size = System::Drawing::Size(81, 30);
			this->textBoxD2_V_A->TabIndex = 11;
			this->textBoxD2_V_A->Text = L"5.00";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(25, 338);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 25);
			this->label12->TabIndex = 10;
			this->label12->Text = L"全班";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(25, 276);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(84, 25);
			this->label13->TabIndex = 9;
			this->label13->Text = L"D组";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(25, 215);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 25);
			this->label14->TabIndex = 8;
			this->label14->Text = L"C组";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(25, 159);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(84, 25);
			this->label15->TabIndex = 7;
			this->label15->Text = L"B组";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(25, 98);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(84, 34);
			this->label16->TabIndex = 6;
			this->label16->Text = L"A组";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(606, 55);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(73, 31);
			this->label17->TabIndex = 5;
			this->label17->Text = L"按键";
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(501, 55);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(74, 31);
			this->label18->TabIndex = 4;
			this->label18->Text = L"输出";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(402, 55);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(74, 31);
			this->label19->TabIndex = 3;
			this->label19->Text = L"设定";
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(235, 55);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(130, 31);
			this->label20->TabIndex = 2;
			this->label20->Text = L"电流（A）";
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(113, 55);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(83, 31);
			this->label21->TabIndex = 1;
			this->label21->Text = L"电压V";
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(312, 12);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(217, 30);
			this->label22->TabIndex = 0;
			this->label22->Text = L"直流电源2控制";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->button33);
			this->panel3->Controls->Add(this->button34);
			this->panel3->Controls->Add(this->button35);
			this->panel3->Controls->Add(this->button36);
			this->panel3->Controls->Add(this->button37);
			this->panel3->Controls->Add(this->button38);
			this->panel3->Controls->Add(this->button39);
			this->panel3->Controls->Add(this->button40);
			this->panel3->Controls->Add(this->button41);
			this->panel3->Controls->Add(this->button42);
			this->panel3->Controls->Add(this->button43);
			this->panel3->Controls->Add(this->button44);
			this->panel3->Controls->Add(this->button45);
			this->panel3->Controls->Add(this->button46);
			this->panel3->Controls->Add(this->button100);
			this->panel3->Controls->Add(this->textBoxAC_V_ALL);
			this->panel3->Controls->Add(this->textBoxAC_V_D);
			this->panel3->Controls->Add(this->textBoxAC_V_C);
			this->panel3->Controls->Add(this->textBoxAC_V_B);
			this->panel3->Controls->Add(this->textBoxAC_V_A);
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->label24);
			this->panel3->Controls->Add(this->label25);
			this->panel3->Controls->Add(this->label26);
			this->panel3->Controls->Add(this->label27);
			this->panel3->Controls->Add(this->label28);
			this->panel3->Controls->Add(this->label29);
			this->panel3->Controls->Add(this->label30);
			this->panel3->Controls->Add(this->label31);
			this->panel3->Controls->Add(this->label32);
			this->panel3->Location = System::Drawing::Point(68, 1015);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(781, 380);
			this->panel3->TabIndex = 14;
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button33->Location = System::Drawing::Point(458, 331);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(75, 29);
			this->button33->TabIndex = 36;
			this->button33->Text = L"锁定";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &无线控制::button33_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button34->Location = System::Drawing::Point(458, 272);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(75, 29);
			this->button34->TabIndex = 35;
			this->button34->Text = L"锁定";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &无线控制::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button35->Location = System::Drawing::Point(458, 214);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(75, 29);
			this->button35->TabIndex = 34;
			this->button35->Text = L"锁定";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &无线控制::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button36->Location = System::Drawing::Point(458, 154);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(75, 29);
			this->button36->TabIndex = 33;
			this->button36->Text = L"锁定";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &无线控制::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button37->Location = System::Drawing::Point(458, 97);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(75, 29);
			this->button37->TabIndex = 32;
			this->button37->Text = L"锁定";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &无线控制::button37_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button38->Location = System::Drawing::Point(354, 331);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(75, 29);
			this->button38->TabIndex = 31;
			this->button38->Text = L"打开";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &无线控制::button38_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button39->Location = System::Drawing::Point(354, 272);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(75, 29);
			this->button39->TabIndex = 30;
			this->button39->Text = L"打开";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &无线控制::button39_Click);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button40->Location = System::Drawing::Point(354, 214);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(75, 29);
			this->button40->TabIndex = 29;
			this->button40->Text = L"打开";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &无线控制::button40_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button41->Location = System::Drawing::Point(354, 154);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(75, 29);
			this->button41->TabIndex = 28;
			this->button41->Text = L"打开";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &无线控制::button41_Click);
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button42->Location = System::Drawing::Point(354, 97);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(75, 29);
			this->button42->TabIndex = 27;
			this->button42->Text = L"打开";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &无线控制::button42_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button43->Location = System::Drawing::Point(255, 332);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(75, 29);
			this->button43->TabIndex = 26;
			this->button43->Text = L"确认";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &无线控制::button43_Click);
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button44->Location = System::Drawing::Point(255, 273);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(75, 29);
			this->button44->TabIndex = 25;
			this->button44->Text = L"确认";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &无线控制::button44_Click);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button45->Location = System::Drawing::Point(255, 215);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(75, 29);
			this->button45->TabIndex = 24;
			this->button45->Text = L"确认";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &无线控制::button45_Click);
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button46->Location = System::Drawing::Point(255, 155);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(75, 29);
			this->button46->TabIndex = 23;
			this->button46->Text = L"确认";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &无线控制::button46_Click);
			// 
			// button100
			// 
			this->button100->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button100->Location = System::Drawing::Point(255, 98);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(75, 29);
			this->button100->TabIndex = 22;
			this->button100->Text = L"确认";
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &无线控制::button100_Click);
			// 
			// textBoxAC_V_ALL
			// 
			this->textBoxAC_V_ALL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxAC_V_ALL->Location = System::Drawing::Point(118, 333);
			this->textBoxAC_V_ALL->Name = L"textBoxAC_V_ALL";
			this->textBoxAC_V_ALL->Size = System::Drawing::Size(81, 30);
			this->textBoxAC_V_ALL->TabIndex = 16;
			this->textBoxAC_V_ALL->Text = L"5.00";
			// 
			// textBoxAC_V_D
			// 
			this->textBoxAC_V_D->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxAC_V_D->Location = System::Drawing::Point(118, 274);
			this->textBoxAC_V_D->Name = L"textBoxAC_V_D";
			this->textBoxAC_V_D->Size = System::Drawing::Size(81, 30);
			this->textBoxAC_V_D->TabIndex = 15;
			this->textBoxAC_V_D->Text = L"5.00";
			// 
			// textBoxAC_V_C
			// 
			this->textBoxAC_V_C->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxAC_V_C->Location = System::Drawing::Point(118, 216);
			this->textBoxAC_V_C->Name = L"textBoxAC_V_C";
			this->textBoxAC_V_C->Size = System::Drawing::Size(81, 30);
			this->textBoxAC_V_C->TabIndex = 14;
			this->textBoxAC_V_C->Text = L"5.00";
			// 
			// textBoxAC_V_B
			// 
			this->textBoxAC_V_B->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxAC_V_B->Location = System::Drawing::Point(118, 156);
			this->textBoxAC_V_B->Name = L"textBoxAC_V_B";
			this->textBoxAC_V_B->Size = System::Drawing::Size(81, 30);
			this->textBoxAC_V_B->TabIndex = 13;
			this->textBoxAC_V_B->Text = L"5.00";
			// 
			// textBoxAC_V_A
			// 
			this->textBoxAC_V_A->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxAC_V_A->Location = System::Drawing::Point(118, 98);
			this->textBoxAC_V_A->Name = L"textBoxAC_V_A";
			this->textBoxAC_V_A->Size = System::Drawing::Size(81, 30);
			this->textBoxAC_V_A->TabIndex = 11;
			this->textBoxAC_V_A->Text = L"5.00";
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->Location = System::Drawing::Point(25, 338);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(84, 25);
			this->label23->TabIndex = 10;
			this->label23->Text = L"全班";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(25, 276);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(84, 25);
			this->label24->TabIndex = 9;
			this->label24->Text = L"D组";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->Location = System::Drawing::Point(25, 215);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(84, 25);
			this->label25->TabIndex = 8;
			this->label25->Text = L"C组";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->Location = System::Drawing::Point(25, 159);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(84, 25);
			this->label26->TabIndex = 7;
			this->label26->Text = L"B组";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label27->Location = System::Drawing::Point(25, 98);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(84, 34);
			this->label27->TabIndex = 6;
			this->label27->Text = L"A组";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label28->Location = System::Drawing::Point(460, 55);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(73, 31);
			this->label28->TabIndex = 5;
			this->label28->Text = L"按键";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->Location = System::Drawing::Point(355, 55);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(74, 31);
			this->label29->TabIndex = 4;
			this->label29->Text = L"输出";
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label30->Location = System::Drawing::Point(256, 55);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(74, 31);
			this->label30->TabIndex = 3;
			this->label30->Text = L"设定";
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label31->Location = System::Drawing::Point(113, 55);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(83, 31);
			this->label31->TabIndex = 1;
			this->label31->Text = L"电压V";
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->Location = System::Drawing::Point(169, 14);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(217, 30);
			this->label32->TabIndex = 0;
			this->label32->Text = L"交流电源控制";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->button48);
			this->panel4->Controls->Add(this->button49);
			this->panel4->Controls->Add(this->button50);
			this->panel4->Controls->Add(this->button51);
			this->panel4->Controls->Add(this->button52);
			this->panel4->Controls->Add(this->button53);
			this->panel4->Controls->Add(this->button54);
			this->panel4->Controls->Add(this->button55);
			this->panel4->Controls->Add(this->button56);
			this->panel4->Controls->Add(this->button57);
			this->panel4->Controls->Add(this->button58);
			this->panel4->Controls->Add(this->button59);
			this->panel4->Controls->Add(this->button60);
			this->panel4->Controls->Add(this->button61);
			this->panel4->Controls->Add(this->label33);
			this->panel4->Controls->Add(this->label34);
			this->panel4->Controls->Add(this->label35);
			this->panel4->Controls->Add(this->label36);
			this->panel4->Controls->Add(this->button62);
			this->panel4->Controls->Add(this->label37);
			this->panel4->Controls->Add(this->label38);
			this->panel4->Location = System::Drawing::Point(874, 1015);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(780, 380);
			this->panel4->TabIndex = 15;
			// 
			// button48
			// 
			this->button48->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button48->Location = System::Drawing::Point(236, 271);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(75, 30);
			this->button48->TabIndex = 20;
			this->button48->Text = L"开启";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &无线控制::button48_Click);
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button49->Location = System::Drawing::Point(116, 270);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(75, 30);
			this->button49->TabIndex = 19;
			this->button49->Text = L"开启";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &无线控制::button49_Click);
			// 
			// button50
			// 
			this->button50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button50->Location = System::Drawing::Point(478, 214);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(75, 30);
			this->button50->TabIndex = 18;
			this->button50->Text = L"开启";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &无线控制::button50_Click);
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button51->Location = System::Drawing::Point(358, 213);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(75, 30);
			this->button51->TabIndex = 17;
			this->button51->Text = L"开启";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &无线控制::button51_Click);
			// 
			// button52
			// 
			this->button52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button52->Location = System::Drawing::Point(236, 213);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(75, 30);
			this->button52->TabIndex = 16;
			this->button52->Text = L"开启";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &无线控制::button52_Click);
			// 
			// button53
			// 
			this->button53->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button53->Location = System::Drawing::Point(116, 212);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(75, 30);
			this->button53->TabIndex = 15;
			this->button53->Text = L"开启";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &无线控制::button53_Click);
			// 
			// button54
			// 
			this->button54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button54->Location = System::Drawing::Point(478, 151);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(75, 30);
			this->button54->TabIndex = 14;
			this->button54->Text = L"开启";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &无线控制::button54_Click);
			// 
			// button55
			// 
			this->button55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button55->Location = System::Drawing::Point(358, 150);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(75, 30);
			this->button55->TabIndex = 13;
			this->button55->Text = L"开启";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &无线控制::button55_Click);
			// 
			// button56
			// 
			this->button56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button56->Location = System::Drawing::Point(236, 150);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(75, 30);
			this->button56->TabIndex = 12;
			this->button56->Text = L"开启";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &无线控制::button56_Click);
			// 
			// button57
			// 
			this->button57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button57->Location = System::Drawing::Point(116, 149);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(75, 30);
			this->button57->TabIndex = 11;
			this->button57->Text = L"开启";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &无线控制::button57_Click);
			// 
			// button58
			// 
			this->button58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button58->Location = System::Drawing::Point(478, 93);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(75, 30);
			this->button58->TabIndex = 10;
			this->button58->Text = L"开启";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &无线控制::button58_Click);
			// 
			// button59
			// 
			this->button59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button59->Location = System::Drawing::Point(358, 92);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(75, 30);
			this->button59->TabIndex = 9;
			this->button59->Text = L"开启";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &无线控制::button59_Click);
			// 
			// button60
			// 
			this->button60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button60->Location = System::Drawing::Point(236, 92);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(75, 30);
			this->button60->TabIndex = 8;
			this->button60->Text = L"开启";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &无线控制::button60_Click);
			// 
			// button61
			// 
			this->button61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button61->Location = System::Drawing::Point(116, 91);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(75, 30);
			this->button61->TabIndex = 7;
			this->button61->Text = L"开启";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &无线控制::button61_Click);
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->Location = System::Drawing::Point(16, 275);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(84, 26);
			this->label33->TabIndex = 6;
			this->label33->Text = L"13-14";
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->Location = System::Drawing::Point(27, 213);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(73, 26);
			this->label34->TabIndex = 5;
			this->label34->Text = L"9-12";
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->Location = System::Drawing::Point(36, 153);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(64, 26);
			this->label35->TabIndex = 4;
			this->label35->Text = L"5-8";
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->Location = System::Drawing::Point(36, 92);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(64, 26);
			this->label36->TabIndex = 3;
			this->label36->Text = L"1-4";
			// 
			// button62
			// 
			this->button62->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button62->Location = System::Drawing::Point(162, 51);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(75, 30);
			this->button62->TabIndex = 2;
			this->button62->Text = L"开启";
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &无线控制::button62_Click);
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->Location = System::Drawing::Point(16, 51);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(94, 26);
			this->label37->TabIndex = 1;
			this->label37->Text = L"总开关";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->Location = System::Drawing::Point(231, 11);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(175, 35);
			this->label38->TabIndex = 0;
			this->label38->Text = L"总电源第一组";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label44);
			this->panel5->Controls->Add(this->button63);
			this->panel5->Controls->Add(this->button64);
			this->panel5->Controls->Add(this->button65);
			this->panel5->Controls->Add(this->button66);
			this->panel5->Controls->Add(this->button67);
			this->panel5->Controls->Add(this->button68);
			this->panel5->Controls->Add(this->button69);
			this->panel5->Controls->Add(this->button70);
			this->panel5->Controls->Add(this->button71);
			this->panel5->Controls->Add(this->button72);
			this->panel5->Controls->Add(this->button73);
			this->panel5->Controls->Add(this->button74);
			this->panel5->Controls->Add(this->button75);
			this->panel5->Controls->Add(this->button76);
			this->panel5->Controls->Add(this->label39);
			this->panel5->Controls->Add(this->label40);
			this->panel5->Controls->Add(this->label41);
			this->panel5->Controls->Add(this->label42);
			this->panel5->Controls->Add(this->button77);
			this->panel5->Controls->Add(this->label43);
			this->panel5->Location = System::Drawing::Point(71, 1413);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(778, 327);
			this->panel5->TabIndex = 16;
			// 
			// label44
			// 
			this->label44->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label44->Location = System::Drawing::Point(228, 12);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(175, 35);
			this->label44->TabIndex = 21;
			this->label44->Text = L"总电源第二组";
			// 
			// button63
			// 
			this->button63->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button63->Location = System::Drawing::Point(268, 273);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(75, 30);
			this->button63->TabIndex = 20;
			this->button63->Text = L"开启";
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &无线控制::button63_Click);
			// 
			// button64
			// 
			this->button64->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button64->Location = System::Drawing::Point(148, 272);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(75, 30);
			this->button64->TabIndex = 19;
			this->button64->Text = L"开启";
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &无线控制::button64_Click);
			// 
			// button65
			// 
			this->button65->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button65->Location = System::Drawing::Point(510, 216);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(75, 30);
			this->button65->TabIndex = 18;
			this->button65->Text = L"开启";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &无线控制::button65_Click);
			// 
			// button66
			// 
			this->button66->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button66->Location = System::Drawing::Point(390, 215);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(75, 30);
			this->button66->TabIndex = 17;
			this->button66->Text = L"开启";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &无线控制::button66_Click);
			// 
			// button67
			// 
			this->button67->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button67->Location = System::Drawing::Point(268, 215);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(75, 30);
			this->button67->TabIndex = 16;
			this->button67->Text = L"开启";
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &无线控制::button67_Click);
			// 
			// button68
			// 
			this->button68->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button68->Location = System::Drawing::Point(148, 214);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(75, 30);
			this->button68->TabIndex = 15;
			this->button68->Text = L"开启";
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &无线控制::button68_Click);
			// 
			// button69
			// 
			this->button69->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button69->Location = System::Drawing::Point(510, 153);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(75, 30);
			this->button69->TabIndex = 14;
			this->button69->Text = L"开启";
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &无线控制::button69_Click);
			// 
			// button70
			// 
			this->button70->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button70->Location = System::Drawing::Point(390, 152);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(75, 30);
			this->button70->TabIndex = 13;
			this->button70->Text = L"开启";
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &无线控制::button70_Click);
			// 
			// button71
			// 
			this->button71->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button71->Location = System::Drawing::Point(268, 152);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(75, 30);
			this->button71->TabIndex = 12;
			this->button71->Text = L"开启";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &无线控制::button71_Click);
			// 
			// button72
			// 
			this->button72->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button72->Location = System::Drawing::Point(148, 151);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(75, 30);
			this->button72->TabIndex = 11;
			this->button72->Text = L"开启";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &无线控制::button72_Click);
			// 
			// button73
			// 
			this->button73->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button73->Location = System::Drawing::Point(510, 95);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(75, 30);
			this->button73->TabIndex = 10;
			this->button73->Text = L"开启";
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &无线控制::button73_Click);
			// 
			// button74
			// 
			this->button74->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button74->Location = System::Drawing::Point(390, 94);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(75, 30);
			this->button74->TabIndex = 9;
			this->button74->Text = L"开启";
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &无线控制::button74_Click);
			// 
			// button75
			// 
			this->button75->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button75->Location = System::Drawing::Point(268, 94);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(75, 30);
			this->button75->TabIndex = 8;
			this->button75->Text = L"开启";
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &无线控制::button75_Click);
			// 
			// button76
			// 
			this->button76->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button76->Location = System::Drawing::Point(148, 93);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(75, 30);
			this->button76->TabIndex = 7;
			this->button76->Text = L"开启";
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &无线控制::button76_Click);
			// 
			// label39
			// 
			this->label39->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label39->Location = System::Drawing::Point(34, 274);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(84, 26);
			this->label39->TabIndex = 6;
			this->label39->Text = L"27-28";
			// 
			// label40
			// 
			this->label40->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label40->Location = System::Drawing::Point(36, 214);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(91, 26);
			this->label40->TabIndex = 5;
			this->label40->Text = L"23-26";
			// 
			// label41
			// 
			this->label41->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label41->Location = System::Drawing::Point(36, 153);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(97, 26);
			this->label41->TabIndex = 4;
			this->label41->Text = L"19-22";
			// 
			// label42
			// 
			this->label42->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label42->Location = System::Drawing::Point(36, 92);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(82, 26);
			this->label42->TabIndex = 3;
			this->label42->Text = L"15-18";
			// 
			// button77
			// 
			this->button77->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button77->Location = System::Drawing::Point(148, 51);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(75, 30);
			this->button77->TabIndex = 2;
			this->button77->Text = L"开启";
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &无线控制::button77_Click);
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->Location = System::Drawing::Point(34, 52);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(94, 26);
			this->label43->TabIndex = 1;
			this->label43->Text = L"总开关";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->label51);
			this->panel6->Controls->Add(this->button78);
			this->panel6->Controls->Add(this->button79);
			this->panel6->Controls->Add(this->button80);
			this->panel6->Controls->Add(this->button81);
			this->panel6->Controls->Add(this->button82);
			this->panel6->Controls->Add(this->button83);
			this->panel6->Controls->Add(this->button84);
			this->panel6->Controls->Add(this->button85);
			this->panel6->Controls->Add(this->button86);
			this->panel6->Controls->Add(this->button87);
			this->panel6->Controls->Add(this->button88);
			this->panel6->Controls->Add(this->button89);
			this->panel6->Controls->Add(this->button90);
			this->panel6->Controls->Add(this->button91);
			this->panel6->Controls->Add(this->label45);
			this->panel6->Controls->Add(this->label46);
			this->panel6->Controls->Add(this->label47);
			this->panel6->Controls->Add(this->label48);
			this->panel6->Controls->Add(this->button92);
			this->panel6->Controls->Add(this->label49);
			this->panel6->Location = System::Drawing::Point(874, 1413);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(780, 327);
			this->panel6->TabIndex = 17;
			// 
			// label51
			// 
			this->label51->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->Location = System::Drawing::Point(223, 12);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(175, 35);
			this->label51->TabIndex = 22;
			this->label51->Text = L"总电源第三组";
			// 
			// button78
			// 
			this->button78->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button78->Location = System::Drawing::Point(268, 273);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(75, 30);
			this->button78->TabIndex = 20;
			this->button78->Text = L"开启";
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &无线控制::button78_Click);
			// 
			// button79
			// 
			this->button79->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button79->Location = System::Drawing::Point(148, 272);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(75, 30);
			this->button79->TabIndex = 19;
			this->button79->Text = L"开启";
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &无线控制::button79_Click);
			// 
			// button80
			// 
			this->button80->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button80->Location = System::Drawing::Point(510, 216);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(75, 30);
			this->button80->TabIndex = 18;
			this->button80->Text = L"开启";
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &无线控制::button80_Click);
			// 
			// button81
			// 
			this->button81->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button81->Location = System::Drawing::Point(390, 215);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(75, 30);
			this->button81->TabIndex = 17;
			this->button81->Text = L"开启";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &无线控制::button81_Click);
			// 
			// button82
			// 
			this->button82->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button82->Location = System::Drawing::Point(268, 215);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(75, 30);
			this->button82->TabIndex = 16;
			this->button82->Text = L"开启";
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &无线控制::button82_Click);
			// 
			// button83
			// 
			this->button83->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button83->Location = System::Drawing::Point(148, 214);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(75, 30);
			this->button83->TabIndex = 15;
			this->button83->Text = L"开启";
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &无线控制::button83_Click);
			// 
			// button84
			// 
			this->button84->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button84->Location = System::Drawing::Point(510, 153);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(75, 30);
			this->button84->TabIndex = 14;
			this->button84->Text = L"开启";
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &无线控制::button84_Click);
			// 
			// button85
			// 
			this->button85->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button85->Location = System::Drawing::Point(390, 152);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(75, 30);
			this->button85->TabIndex = 13;
			this->button85->Text = L"开启";
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &无线控制::button85_Click);
			// 
			// button86
			// 
			this->button86->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button86->Location = System::Drawing::Point(268, 152);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(75, 30);
			this->button86->TabIndex = 12;
			this->button86->Text = L"开启";
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &无线控制::button86_Click);
			// 
			// button87
			// 
			this->button87->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button87->Location = System::Drawing::Point(148, 151);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(75, 30);
			this->button87->TabIndex = 11;
			this->button87->Text = L"开启";
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &无线控制::button87_Click);
			// 
			// button88
			// 
			this->button88->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button88->Location = System::Drawing::Point(510, 95);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(75, 30);
			this->button88->TabIndex = 10;
			this->button88->Text = L"开启";
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &无线控制::button88_Click);
			// 
			// button89
			// 
			this->button89->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button89->Location = System::Drawing::Point(390, 94);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(75, 30);
			this->button89->TabIndex = 9;
			this->button89->Text = L"开启";
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &无线控制::button89_Click);
			// 
			// button90
			// 
			this->button90->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button90->Location = System::Drawing::Point(268, 94);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(75, 30);
			this->button90->TabIndex = 8;
			this->button90->Text = L"开启";
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &无线控制::button90_Click);
			// 
			// button91
			// 
			this->button91->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button91->Location = System::Drawing::Point(148, 93);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(75, 30);
			this->button91->TabIndex = 7;
			this->button91->Text = L"开启";
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &无线控制::button91_Click);
			// 
			// label45
			// 
			this->label45->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label45->Location = System::Drawing::Point(34, 274);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(84, 26);
			this->label45->TabIndex = 6;
			this->label45->Text = L"41-42";
			// 
			// label46
			// 
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->Location = System::Drawing::Point(36, 214);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(91, 26);
			this->label46->TabIndex = 5;
			this->label46->Text = L"37-40";
			// 
			// label47
			// 
			this->label47->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->Location = System::Drawing::Point(36, 153);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(97, 26);
			this->label47->TabIndex = 4;
			this->label47->Text = L"33-36";
			// 
			// label48
			// 
			this->label48->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->Location = System::Drawing::Point(36, 92);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(82, 26);
			this->label48->TabIndex = 3;
			this->label48->Text = L"29-32";
			// 
			// button92
			// 
			this->button92->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button92->Location = System::Drawing::Point(148, 51);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(75, 30);
			this->button92->TabIndex = 2;
			this->button92->Text = L"开启";
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &无线控制::button92_Click);
			// 
			// label49
			// 
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->Location = System::Drawing::Point(34, 52);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(94, 26);
			this->label49->TabIndex = 1;
			this->label49->Text = L"总开关";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->button93);
			this->panel7->Controls->Add(this->label50);
			this->panel7->Controls->Add(this->label52);
			this->panel7->Location = System::Drawing::Point(528, 1746);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(659, 104);
			this->panel7->TabIndex = 18;
			// 
			// button93
			// 
			this->button93->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button93->Location = System::Drawing::Point(344, 60);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(75, 30);
			this->button93->TabIndex = 2;
			this->button93->Text = L"开启";
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &无线控制::button93_Click);
			// 
			// label50
			// 
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->Location = System::Drawing::Point(230, 61);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(94, 26);
			this->label50->TabIndex = 1;
			this->label50->Text = L"总开关";
			// 
			// label52
			// 
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->Location = System::Drawing::Point(242, 16);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(214, 27);
			this->label52->TabIndex = 0;
			this->label52->Text = L"总电源全班控制";
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->Controls->Add(this->label76);
			this->panel9->Controls->Add(this->button98);
			this->panel9->Controls->Add(this->textBox_E_Hz);
			this->panel9->Controls->Add(this->label68);
			this->panel9->Controls->Add(this->textBox_E_KHz);
			this->panel9->Controls->Add(this->label69);
			this->panel9->Controls->Add(this->textBox_E_MHz);
			this->panel9->Controls->Add(this->label70);
			this->panel9->Controls->Add(this->label71);
			this->panel9->Controls->Add(this->button99);
			this->panel9->Controls->Add(this->textBox_S_Hz);
			this->panel9->Controls->Add(this->label72);
			this->panel9->Controls->Add(this->textBox_S_KHz);
			this->panel9->Controls->Add(this->label73);
			this->panel9->Controls->Add(this->textBox_S_MHz);
			this->panel9->Controls->Add(this->label74);
			this->panel9->Controls->Add(this->label75);
			this->panel9->Location = System::Drawing::Point(874, 171);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(780, 418);
			this->panel9->TabIndex = 22;
			// 
			// label76
			// 
			this->label76->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label76->Location = System::Drawing::Point(228, 14);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(186, 33);
			this->label76->TabIndex = 40;
			this->label76->Text = L"扫频参数设置";
			// 
			// button98
			// 
			this->button98->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button98->Location = System::Drawing::Point(431, 257);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(103, 29);
			this->button98->TabIndex = 49;
			this->button98->Text = L"终止确认";
			this->button98->UseVisualStyleBackColor = true;
			// 
			// textBox_E_Hz
			// 
			this->textBox_E_Hz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_E_Hz->Location = System::Drawing::Point(431, 196);
			this->textBox_E_Hz->Name = L"textBox_E_Hz";
			this->textBox_E_Hz->Size = System::Drawing::Size(103, 30);
			this->textBox_E_Hz->TabIndex = 48;
			this->textBox_E_Hz->Text = L"10.00";
			// 
			// label68
			// 
			this->label68->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label68->Location = System::Drawing::Point(540, 196);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(83, 31);
			this->label68->TabIndex = 47;
			this->label68->Text = L"Hz";
			// 
			// textBox_E_KHz
			// 
			this->textBox_E_KHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_E_KHz->Location = System::Drawing::Point(431, 151);
			this->textBox_E_KHz->Name = L"textBox_E_KHz";
			this->textBox_E_KHz->Size = System::Drawing::Size(103, 30);
			this->textBox_E_KHz->TabIndex = 46;
			this->textBox_E_KHz->Text = L"10";
			// 
			// label69
			// 
			this->label69->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label69->Location = System::Drawing::Point(540, 151);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(83, 31);
			this->label69->TabIndex = 45;
			this->label69->Text = L"KHz";
			// 
			// textBox_E_MHz
			// 
			this->textBox_E_MHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_E_MHz->Location = System::Drawing::Point(431, 108);
			this->textBox_E_MHz->Name = L"textBox_E_MHz";
			this->textBox_E_MHz->Size = System::Drawing::Size(103, 30);
			this->textBox_E_MHz->TabIndex = 44;
			this->textBox_E_MHz->Text = L"1";
			// 
			// label70
			// 
			this->label70->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label70->Location = System::Drawing::Point(540, 108);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(83, 31);
			this->label70->TabIndex = 43;
			this->label70->Text = L"MHz";
			// 
			// label71
			// 
			this->label71->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label71->Location = System::Drawing::Point(426, 66);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(122, 30);
			this->label71->TabIndex = 42;
			this->label71->Text = L"终止频率";
			// 
			// button99
			// 
			this->button99->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button99->Location = System::Drawing::Point(30, 257);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(103, 29);
			this->button99->TabIndex = 41;
			this->button99->Text = L"启始确认";
			this->button99->UseVisualStyleBackColor = true;
			// 
			// textBox_S_Hz
			// 
			this->textBox_S_Hz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_S_Hz->Location = System::Drawing::Point(30, 196);
			this->textBox_S_Hz->Name = L"textBox_S_Hz";
			this->textBox_S_Hz->Size = System::Drawing::Size(103, 30);
			this->textBox_S_Hz->TabIndex = 40;
			this->textBox_S_Hz->Text = L"10.00";
			// 
			// label72
			// 
			this->label72->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label72->Location = System::Drawing::Point(139, 196);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(83, 31);
			this->label72->TabIndex = 39;
			this->label72->Text = L"Hz";
			// 
			// textBox_S_KHz
			// 
			this->textBox_S_KHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_S_KHz->Location = System::Drawing::Point(30, 151);
			this->textBox_S_KHz->Name = L"textBox_S_KHz";
			this->textBox_S_KHz->Size = System::Drawing::Size(103, 30);
			this->textBox_S_KHz->TabIndex = 38;
			this->textBox_S_KHz->Text = L"10";
			// 
			// label73
			// 
			this->label73->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label73->Location = System::Drawing::Point(139, 151);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(83, 31);
			this->label73->TabIndex = 37;
			this->label73->Text = L"KHz";
			// 
			// textBox_S_MHz
			// 
			this->textBox_S_MHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_S_MHz->Location = System::Drawing::Point(30, 108);
			this->textBox_S_MHz->Name = L"textBox_S_MHz";
			this->textBox_S_MHz->Size = System::Drawing::Size(103, 30);
			this->textBox_S_MHz->TabIndex = 11;
			this->textBox_S_MHz->Text = L"1";
			// 
			// label74
			// 
			this->label74->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label74->Location = System::Drawing::Point(139, 108);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(83, 31);
			this->label74->TabIndex = 2;
			this->label74->Text = L"MHz";
			// 
			// label75
			// 
			this->label75->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label75->Location = System::Drawing::Point(25, 66);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(122, 30);
			this->label75->TabIndex = 0;
			this->label75->Text = L"起始频率";
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Controls->Add(this->groupBox2);
			this->panel8->Controls->Add(this->label55);
			this->panel8->Controls->Add(this->textBoxDuty);
			this->panel8->Controls->Add(this->label56);
			this->panel8->Controls->Add(this->button96);
			this->panel8->Controls->Add(this->label57);
			this->panel8->Controls->Add(this->label58);
			this->panel8->Controls->Add(this->label59);
			this->panel8->Controls->Add(this->checkedListBox2);
			this->panel8->Controls->Add(this->label60);
			this->panel8->Controls->Add(this->checkedListBox1);
			this->panel8->Controls->Add(this->label61);
			this->panel8->Controls->Add(this->textBoxHz);
			this->panel8->Controls->Add(this->label62);
			this->panel8->Controls->Add(this->label63);
			this->panel8->Controls->Add(this->textBoxKHz);
			this->panel8->Controls->Add(this->label64);
			this->panel8->Controls->Add(this->label65);
			this->panel8->Controls->Add(this->textBoxMHz);
			this->panel8->Controls->Add(this->button97);
			this->panel8->Controls->Add(this->label66);
			this->panel8->Controls->Add(this->label67);
			this->panel8->Location = System::Drawing::Point(68, 171);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(781, 418);
			this->panel8->TabIndex = 21;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button94);
			this->groupBox2->Controls->Add(this->button95);
			this->groupBox2->Controls->Add(this->label53);
			this->groupBox2->Controls->Add(this->textBoxSweep);
			this->groupBox2->Controls->Add(this->label54);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(377, 97);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(353, 124);
			this->groupBox2->TabIndex = 39;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"扫频";
			// 
			// button94
			// 
			this->button94->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button94->Location = System::Drawing::Point(183, 76);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(75, 30);
			this->button94->TabIndex = 42;
			this->button94->Text = L"启动";
			this->button94->UseVisualStyleBackColor = true;
			// 
			// button95
			// 
			this->button95->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button95->Location = System::Drawing::Point(24, 76);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(132, 30);
			this->button95->TabIndex = 41;
			this->button95->Text = L"参数见右框";
			this->button95->UseVisualStyleBackColor = true;
			// 
			// label53
			// 
			this->label53->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->Location = System::Drawing::Point(264, 26);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(34, 32);
			this->label53->TabIndex = 40;
			this->label53->Text = L"S";
			// 
			// textBoxSweep
			// 
			this->textBoxSweep->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxSweep->Location = System::Drawing::Point(162, 26);
			this->textBoxSweep->Name = L"textBoxSweep";
			this->textBoxSweep->Size = System::Drawing::Size(96, 30);
			this->textBoxSweep->TabIndex = 39;
			this->textBoxSweep->Text = L"0";
			// 
			// label54
			// 
			this->label54->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label54->Location = System::Drawing::Point(19, 26);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(137, 32);
			this->label54->TabIndex = 38;
			this->label54->Text = L"扫频时间:";
			// 
			// label55
			// 
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->Location = System::Drawing::Point(595, 52);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(31, 32);
			this->label55->TabIndex = 38;
			this->label55->Text = L"%";
			// 
			// textBoxDuty
			// 
			this->textBoxDuty->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxDuty->Location = System::Drawing::Point(493, 52);
			this->textBoxDuty->Name = L"textBoxDuty";
			this->textBoxDuty->Size = System::Drawing::Size(96, 30);
			this->textBoxDuty->TabIndex = 37;
			this->textBoxDuty->Text = L"0";
			// 
			// label56
			// 
			this->label56->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label56->Location = System::Drawing::Point(372, 52);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(115, 32);
			this->label56->TabIndex = 36;
			this->label56->Text = L"占空比:";
			// 
			// button96
			// 
			this->button96->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button96->Location = System::Drawing::Point(458, 370);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(75, 30);
			this->button96->TabIndex = 35;
			this->button96->Text = L"确认";
			this->button96->UseVisualStyleBackColor = true;
			// 
			// label57
			// 
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->Location = System::Drawing::Point(372, 374);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(94, 26);
			this->label57->TabIndex = 34;
			this->label57->Text = L"设定:";
			// 
			// label58
			// 
			this->label58->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label58->Location = System::Drawing::Point(34, 374);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(94, 26);
			this->label58->TabIndex = 33;
			this->label58->Text = L"按键:";
			// 
			// label59
			// 
			this->label59->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label59->Location = System::Drawing::Point(34, 320);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(94, 26);
			this->label59->TabIndex = 32;
			this->label59->Text = L"波形:";
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"正弦", L"三角", L"脉冲" });
			this->checkedListBox2->Location = System::Drawing::Point(148, 317);
			this->checkedListBox2->MultiColumn = true;
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(486, 29);
			this->checkedListBox2->TabIndex = 31;
			// 
			// label60
			// 
			this->label60->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label60->Location = System::Drawing::Point(34, 269);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(94, 26);
			this->label60->TabIndex = 30;
			this->label60->Text = L"单位:";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"MHz", L"KHz", L"Hz" });
			this->checkedListBox1->Location = System::Drawing::Point(148, 266);
			this->checkedListBox1->MultiColumn = true;
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(486, 29);
			this->checkedListBox1->TabIndex = 29;
			// 
			// label61
			// 
			this->label61->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label61->Location = System::Drawing::Point(278, 157);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(76, 26);
			this->label61->TabIndex = 28;
			this->label61->Text = L"Hz";
			// 
			// textBoxHz
			// 
			this->textBoxHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxHz->Location = System::Drawing::Point(148, 153);
			this->textBoxHz->Name = L"textBoxHz";
			this->textBoxHz->Size = System::Drawing::Size(113, 30);
			this->textBoxHz->TabIndex = 27;
			this->textBoxHz->Text = L"5.00";
			// 
			// label62
			// 
			this->label62->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label62->Location = System::Drawing::Point(34, 157);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(94, 26);
			this->label62->TabIndex = 26;
			this->label62->Text = L"频率:";
			// 
			// label63
			// 
			this->label63->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label63->Location = System::Drawing::Point(278, 101);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(76, 26);
			this->label63->TabIndex = 25;
			this->label63->Text = L"KHz";
			// 
			// textBoxKHz
			// 
			this->textBoxKHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxKHz->Location = System::Drawing::Point(148, 97);
			this->textBoxKHz->Name = L"textBoxKHz";
			this->textBoxKHz->Size = System::Drawing::Size(113, 30);
			this->textBoxKHz->TabIndex = 24;
			this->textBoxKHz->Text = L"5";
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label64->Location = System::Drawing::Point(34, 101);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(94, 26);
			this->label64->TabIndex = 23;
			this->label64->Text = L"频率:";
			// 
			// label65
			// 
			this->label65->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label65->Location = System::Drawing::Point(278, 52);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(76, 26);
			this->label65->TabIndex = 22;
			this->label65->Text = L"MHz";
			// 
			// textBoxMHz
			// 
			this->textBoxMHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxMHz->Location = System::Drawing::Point(148, 48);
			this->textBoxMHz->Name = L"textBoxMHz";
			this->textBoxMHz->Size = System::Drawing::Size(113, 30);
			this->textBoxMHz->TabIndex = 21;
			this->textBoxMHz->Text = L"5";
			// 
			// button97
			// 
			this->button97->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button97->Location = System::Drawing::Point(148, 370);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(75, 30);
			this->button97->TabIndex = 18;
			this->button97->Text = L"锁定";
			this->button97->UseVisualStyleBackColor = true;
			// 
			// label66
			// 
			this->label66->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label66->Location = System::Drawing::Point(34, 52);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(94, 26);
			this->label66->TabIndex = 1;
			this->label66->Text = L"频率:";
			// 
			// label67
			// 
			this->label67->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label67->Location = System::Drawing::Point(330, 16);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(179, 33);
			this->label67->TabIndex = 0;
			this->label67->Text = L"信号源控制";
			// 
			// 无线控制
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1671, 886);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->Name = L"无线控制";
			this->Text = L"无线控制";
			this->Load += gcnew System::EventHandler(this, &无线控制::无线控制_Load);
			this->groupBox1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

	}

			 void DC1Handle() {
				 textBoxD1_V_A->Text = FormatTwoDecimal(textBoxD1_V_A->Text, 0, 30);
				 textBoxD1_V_B->Text = FormatTwoDecimal(textBoxD1_V_B->Text, 0, 30);
				 textBoxD1_V_C->Text = FormatTwoDecimal(textBoxD1_V_C->Text, 0, 30);
				 textBoxD1_V_D->Text = FormatTwoDecimal(textBoxD1_V_D->Text, 0, 30);
				 textBoxD1_V_ALL->Text = FormatTwoDecimal(textBoxD1_V_ALL->Text, 0, 30);

				 textBoxD1_A_A->Text = FormatTwoDecimal(textBoxD1_A_A->Text, 0, 5);
				 textBoxD1_A_B->Text = FormatTwoDecimal(textBoxD1_A_B->Text, 0, 5);
				 textBoxD1_A_C->Text = FormatTwoDecimal(textBoxD1_A_C->Text, 0, 5);
				 textBoxD1_A_D->Text = FormatTwoDecimal(textBoxD1_A_D->Text, 0, 5);
				 textBoxD1_A_ALL->Text = FormatTwoDecimal(textBoxD1_A_ALL->Text, 0, 5);
			 }

private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	DC1Handle();
	int V = Convert::ToSingle(textBoxD1_V_A->Text) * 100;
	int I = Convert::ToSingle(textBoxD1_A_A->Text) * 100;
	SerialControlSource::DC1_Confirm(DC1A, V, I);
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	DC1Handle();
	int V = Convert::ToSingle(textBoxD1_V_B->Text) * 100;
	int I = Convert::ToSingle(textBoxD1_A_B->Text) * 100;
	SerialControlSource::DC1_Confirm(DC1B, V, I);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	DC1Handle();
	int V = Convert::ToSingle(textBoxD1_V_C->Text) * 100;
	int I = Convert::ToSingle(textBoxD1_A_C->Text) * 100;
	SerialControlSource::DC1_Confirm(DC1C, V, I);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	DC1Handle();
	int V = Convert::ToSingle(textBoxD1_V_D->Text) * 100;
	int I = Convert::ToSingle(textBoxD1_A_D->Text) * 100;
	SerialControlSource::DC1_Confirm(DC1D, V, I);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	DC1Handle();
	int V = Convert::ToSingle(textBoxD1_V_ALL->Text) * 100;
	int I = Convert::ToSingle(textBoxD1_A_ALL->Text) * 100;
	SerialControlSource::DC1_Confirm(DC1CLASS, V, I);
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button10->Text == "打开") {
		button10->Text = "关闭";
		SerialControlSource::DC1_OutputOpen(DC1A);
	}
	else {
		button10->Text = "打开";
		SerialControlSource::DC1_OutputClose(DC1A);
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button9->Text == "打开") {
		button9->Text = "关闭";
		SerialControlSource::DC1_OutputOpen(DC1B);
	}
	else {
		button9->Text = "打开";
		SerialControlSource::DC1_OutputClose(DC1B);
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button2->Text == "打开") {
		button2->Text = "关闭";
		SerialControlSource::DC1_OutputOpen(DC1C);
	}
	else {
		button2->Text = "打开";
		SerialControlSource::DC1_OutputClose(DC1C);
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button1->Text == "打开") {
		button1->Text = "关闭";
		SerialControlSource::DC1_OutputOpen(DC1D);
	}
	else {
		button1->Text = "打开";
		SerialControlSource::DC1_OutputClose(DC1D);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button6->Text == "打开") {
		button6->Text = "关闭";
		SerialControlSource::DC1_OutputOpen(DC1CLASS);
	}
	else {
		button6->Text = "打开";
		SerialControlSource::DC1_OutputClose(DC1CLASS);
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button15->Text == "锁定") {
		button15->Text = "解锁";
		SerialControlSource::DC1_Lock(DC1A);
	}
	else {
		button15->Text = "锁定";
		SerialControlSource::DC1_UnLock(DC1A);
	}

}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button14->Text == "锁定") {
		button14->Text = "解锁";
		SerialControlSource::DC1_Lock(DC1B);
	}
	else {
		button14->Text = "锁定";
		SerialControlSource::DC1_UnLock(DC1B);
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button13->Text == "锁定") {
		button13->Text = "解锁";
		SerialControlSource::DC1_Lock(DC1C);
	}
	else {
		button13->Text = "锁定";
		SerialControlSource::DC1_UnLock(DC1C);
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button12->Text == "锁定") {
		button12->Text = "解锁";
		SerialControlSource::DC1_Lock(DC1D);
	}
	else {
		button12->Text = "锁定";
		SerialControlSource::DC1_UnLock(DC1D);
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button11->Text == "锁定") {
		button11->Text = "解锁";
		SerialControlSource::DC1_Lock(DC1CLASS);
	}
	else {
		button11->Text = "锁定";
		SerialControlSource::DC1_UnLock(DC1CLASS);
	}
}
		 void DC2Handle() {
			 textBoxD2_V_A->Text = FormatTwoDecimal(textBoxD2_V_A->Text, 0, 30);
			 textBoxD2_V_B->Text = FormatTwoDecimal(textBoxD2_V_B->Text, 0, 30);
			 textBoxD2_V_C->Text = FormatTwoDecimal(textBoxD2_V_C->Text, 0, 30);
			 textBoxD2_V_D->Text = FormatTwoDecimal(textBoxD2_V_D->Text, 0, 30);
			 textBoxD2_V_ALL->Text = FormatTwoDecimal(textBoxD2_V_ALL->Text, 0, 30);

			 textBoxD2_A_A->Text = FormatTwoDecimal(textBoxD2_A_A->Text, 0, 5);
			 textBoxD2_A_B->Text = FormatTwoDecimal(textBoxD2_A_B->Text, 0, 5);
			 textBoxD2_A_C->Text = FormatTwoDecimal(textBoxD2_A_C->Text, 0, 5);
			 textBoxD2_A_D->Text = FormatTwoDecimal(textBoxD2_A_D->Text, 0, 5);
			 textBoxD2_A_ALL->Text = FormatTwoDecimal(textBoxD2_A_ALL->Text, 0, 5);
		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {

	DC2Handle();
	int V = Convert::ToSingle(textBoxD2_V_A->Text) * 100;
	int I = Convert::ToSingle(textBoxD2_A_A->Text) * 100;
	SerialControlSource::DC1_Confirm(DC2A, V, I);
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	DC2Handle();
	int V = Convert::ToSingle(textBoxD2_V_B->Text) * 100;
	int I = Convert::ToSingle(textBoxD2_A_B->Text) * 100;
	SerialControlSource::DC1_Confirm(DC2B, V, I);
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	DC2Handle();
	int V = Convert::ToSingle(textBoxD2_V_C->Text) * 100;
	int I = Convert::ToSingle(textBoxD2_A_C->Text) * 100;
	SerialControlSource::DC1_Confirm(DC2C, V, I);
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	DC2Handle();
	int V = Convert::ToSingle(textBoxD2_V_D->Text) * 100;
	int I = Convert::ToSingle(textBoxD2_A_D->Text) * 100;
	SerialControlSource::DC1_Confirm(DC2D, V, I);
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	DC2Handle();
	int V = Convert::ToSingle(textBoxD2_V_ALL->Text) * 100;
	int I = Convert::ToSingle(textBoxD2_A_ALL->Text) * 100;
	SerialControlSource::DC1_Confirm(DC2CLASS, V, I);
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button27->Text == "打开") {
		button27->Text = "关闭";
		SerialControlSource::DC1_OutputOpen(DC2A);
	}
	else {
		button27->Text = "打开";
		SerialControlSource::DC1_OutputClose(DC2A);
	}
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button26->Text == "打开") {
		button26->Text = "关闭";
		SerialControlSource::DC1_OutputOpen(DC2B);
	}
	else {
		button26->Text = "打开";
		SerialControlSource::DC1_OutputClose(DC2B);
	}
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button25->Text == "打开") {
		button25->Text = "关闭";
		SerialControlSource::DC1_OutputOpen(DC2C);
	}
	else {
		button25->Text = "打开";
		SerialControlSource::DC1_OutputClose(DC2C);
	}
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button24->Text == "打开") {
		button24->Text = "关闭";
		SerialControlSource::DC1_OutputOpen(DC2D);
	}
	else {
		button24->Text = "打开";
		SerialControlSource::DC1_OutputClose(DC2D);
	}
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button23->Text == "打开") {
		button23->Text = "关闭";
		SerialControlSource::DC1_OutputOpen(DC2CLASS);
	}
	else {
		button23->Text = "打开";
		SerialControlSource::DC1_OutputClose(DC2CLASS);
	}
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button22->Text == "锁定") {
		button22->Text = "解锁";
		SerialControlSource::DC1_Lock(DC2A);
	}
	else {
		button22->Text = "锁定";
		SerialControlSource::DC1_UnLock(DC2A);
	}
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button21->Text == "锁定") {
		button21->Text = "解锁";
		SerialControlSource::DC1_Lock(DC2B);
	}
	else {
		button21->Text = "锁定";
		SerialControlSource::DC1_UnLock(DC2B);
	}
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button20->Text == "锁定") {
		button20->Text = "解锁";
		SerialControlSource::DC1_Lock(DC2C);
	}
	else {
		button20->Text = "锁定";
		SerialControlSource::DC1_UnLock(DC2C);
	}
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button19->Text == "锁定") {
		button19->Text = "解锁";
		SerialControlSource::DC1_Lock(DC2D);
	}
	else {
		button19->Text = "锁定";
		SerialControlSource::DC1_UnLock(DC2D);
	}
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button18->Text == "锁定") {
		button18->Text = "解锁";
		SerialControlSource::DC1_Lock(DC2CLASS);
	}
	else {
		button18->Text = "锁定";
		SerialControlSource::DC1_UnLock(DC2CLASS);
	}
}
		 void ACHandle() {
			 textBoxAC_V_A->Text = FormatZeroDecimal(textBoxAC_V_A->Text, 0, 30);
			 textBoxAC_V_B->Text = FormatZeroDecimal(textBoxAC_V_B->Text, 0, 30);
			 textBoxAC_V_C->Text = FormatZeroDecimal(textBoxAC_V_C->Text, 0, 30);
			 textBoxAC_V_D->Text = FormatZeroDecimal(textBoxAC_V_D->Text, 0, 30);
			 textBoxAC_V_ALL->Text = FormatZeroDecimal(textBoxAC_V_ALL->Text, 0, 30);
		 }

private: System::Void button100_Click(System::Object^  sender, System::EventArgs^  e) {
	ACHandle();
	int V = Convert::ToInt32(textBoxAC_V_A->Text);
	SerialControlSource::AC_Confirm(ACA, V);
}
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	ACHandle();
	int V = Convert::ToInt32(textBoxAC_V_B->Text);
	SerialControlSource::AC_Confirm(ACB, V);
}
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	ACHandle();
	int V = Convert::ToInt32(textBoxAC_V_C->Text);
	SerialControlSource::AC_Confirm(ACC, V);
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	ACHandle();
	int V = Convert::ToInt32(textBoxAC_V_D->Text);
	SerialControlSource::AC_Confirm(ACD, V);
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	ACHandle();
	int V = Convert::ToInt32(textBoxAC_V_ALL->Text);
	SerialControlSource::AC_Confirm(ACCLASS, V);
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button42->Text == "打开") {
		button42->Text = "关闭";
		SerialControlSource::AC_OutputOpen(ACA);
	}
	else {
		button42->Text = "打开";
		SerialControlSource::AC_OutputClose(ACA);
	}
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button41->Text == "打开") {
		button41->Text = "关闭";
		SerialControlSource::AC_OutputOpen(ACB);
	}
	else {
		button41->Text = "打开";
		SerialControlSource::AC_OutputClose(ACB);
	}
}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button40->Text == "打开") {
		button40->Text = "关闭";
		SerialControlSource::AC_OutputOpen(ACC);
	}
	else {
		button40->Text = "打开";
		SerialControlSource::AC_OutputClose(ACC);
	}
}
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button39->Text == "打开") {
		button39->Text = "关闭";
		SerialControlSource::AC_OutputOpen(ACD);
	}
	else {
		button39->Text = "打开";
		SerialControlSource::AC_OutputClose(ACD);
	}
}
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button38->Text == "打开") {
		button38->Text = "关闭";
		SerialControlSource::AC_OutputOpen(ACCLASS);
	}
	else {
		button38->Text = "打开";
		SerialControlSource::AC_OutputClose(ACCLASS);
	}
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button37->Text == "锁定") {
		button37->Text = "解锁";
		SerialControlSource::AC_Lock(ACA);
	}
	else {
		button37->Text = "锁定";
		SerialControlSource::AC_UnLock(ACA);
	}

}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button36->Text == "锁定") {
		button36->Text = "解锁";
		SerialControlSource::AC_Lock(ACB);
	}
	else {
		button36->Text = "锁定";
		SerialControlSource::AC_UnLock(ACB);
	}
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button35->Text == "锁定") {
		button35->Text = "解锁";
		SerialControlSource::AC_Lock(ACC);
	}
	else {
		button35->Text = "锁定";
		SerialControlSource::AC_UnLock(ACC);
	}
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button34->Text == "锁定") {
		button34->Text = "解锁";
		SerialControlSource::AC_Lock(ACD);
	}
	else {
		button34->Text = "锁定";
		SerialControlSource::AC_UnLock(ACD);
	}
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button33->Text == "锁定") {
		button33->Text = "解锁";
		SerialControlSource::AC_Lock(ACCLASS);
	}
	else {
		button33->Text = "锁定";
		SerialControlSource::AC_UnLock(ACCLASS);
	}
}
private: System::Void button62_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(0x33);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(0x33);
	}
}
private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(1);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(1);
	}
}
private: System::Void button60_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(2);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(2);
	}
}
private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(3);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(3);
	}
}
private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(4);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(4);
	}
}
private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(5);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(5);
	}
}
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(6);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(6);
	}
}
private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(7);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(7);
	}
}
private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(8);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(8);
	}
}
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(9);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(9);
	}
}
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(10);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(10);
	}
}
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(11);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(11);
	}
}
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(12);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(12);
	}
}
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(13);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(13);
	}
}
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(14);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(14);
	}
}
private: System::Void button77_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(0x34);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(0x34);
	}
	}
private: System::Void button76_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(15);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(15);
	}
}
private: System::Void button75_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(16);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(16);
	}
}
private: System::Void button74_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(17);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(17);
	}
}
private: System::Void button73_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(18);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(18);
	}
}
private: System::Void button72_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(19);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(19);
	}
}
private: System::Void button71_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(20);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(20);
	}
}
private: System::Void button70_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(21);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(21);
	}
}
private: System::Void button69_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(22);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(22);
	}
}
private: System::Void button68_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(23);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(23);
	}
}
private: System::Void button67_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(24);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(24);
	}
}
private: System::Void button66_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(25);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(25);
	}
}
private: System::Void button65_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(26);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(26);
	}
}
private: System::Void button64_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(27);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(27);
	}
}
private: System::Void button63_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(28);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(28);
	}
}
private: System::Void button92_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(0x35);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(0x35);
	}
}
private: System::Void button91_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(29);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(29);
	}
}
private: System::Void button90_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(30);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(30);
	}
}
private: System::Void button89_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(31);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(31);
	}
}
private: System::Void button88_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(32);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(32);
	}
}
private: System::Void button87_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(33);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(33);
	}
}
private: System::Void button86_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(34);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(34);
	}
}
private: System::Void button85_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(35);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(35);
	}
}
private: System::Void button84_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(36);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(36);
	}
}
private: System::Void button83_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(37);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(37);
	}
}
private: System::Void button82_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(38);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(38);
	}
}
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(39);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(39);
	}
}
private: System::Void button80_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(40);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(40);
	}
}
private: System::Void button79_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(41);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(41);
	}
}
private: System::Void button78_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^button = (Button ^)sender;
	if (button->Text == "开启") {
		button->Text = "关闭";
		SerialControlSource::GS_Open(42);
	}
	else {
		button->Text = "开启";
		SerialControlSource::GS_Close(42);
	}
}
private: System::Void button93_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button93->Text == "开启") {
		button93->Text = "关闭";
		SerialControlSource::GS_Open(0x32);
	}
	else {
		button93->Text = "开启";
		SerialControlSource::GS_Close(0x32);
	}
}	 
		 void LoadFormat() {
	int checkedListBox1Count = 0;
	int checkedListBox2Count = 0;
	for (int i = 0; i < checkedListBox1->Items->Count; i++)
	{
		if (checkedListBox1->GetItemChecked(i)) {
			checkedListBox1Count++;
		}
	}
	for (int i = 0; i < checkedListBox2->Items->Count; i++)
	{
		if (checkedListBox2->GetItemChecked(i)) {
			checkedListBox2Count++;
		}
	}
	if (checkedListBox1Count == 0) checkedListBox1->SetItemCheckState(0, CheckState::Checked);
	if (checkedListBox2Count == 0) checkedListBox2->SetItemCheckState(0, CheckState::Checked);

	textBoxMHz->Text = FormatZeroDecimal(textBoxMHz->Text, 0, 5);
	textBoxKHz->Text = FormatZeroDecimal(textBoxKHz->Text, 0, 999);
	textBoxHz->Text = FormatTwoDecimal(textBoxHz->Text, 0, 999);
	textBoxDuty->Text = FormatZeroDecimal(textBoxDuty->Text, 0, 99);
	textBoxSweep->Text = FormatZeroDecimal(textBoxSweep->Text, 0, 99);
}
private: System::Void 无线控制_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button95_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button94_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadFormat();
	int Sweep = Convert::ToInt32(textBoxSweep->Text);
	if (button94->Text == "启动") {
		button94->Text = "暂停";
		SerialControlSource::FG_F_Run(Sweep);
	}
	else {
		button94->Text = "启动";
		SerialControlSource::FG_F_Stop(Sweep);
	}
}
private: System::Void button97_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button97->Text == "锁定") {
		button97->Text = "解锁";
		SerialControlSource::FG_Lock();
	}
	else {
		button97->Text = "锁定";
		SerialControlSource::FG_UnLock();
	}
}	
		 int getWaverType() {

	for (int i = 0; i < checkedListBox2->Items->Count; i++)
	{
		if (checkedListBox2->GetItemChecked(i)) {
			return i;
		}
	}
	return SINWAVE;
}
private: System::Void button96_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadFormat();
	int MHz = Convert::ToInt32(textBoxMHz->Text);
	int KHz = Convert::ToInt32(textBoxKHz->Text);
	int Hz = Convert::ToSingle(textBoxHz->Text) * 100;
	int Duty = Convert::ToInt32(textBoxDuty->Text);
	SerialControlSource::FG_Confirm(getWaverType(), MHz, KHz, Hz, Duty);
}

		 void numberHandle() {
			 textBox_S_MHz->Text = FormatZeroDecimal(textBox_S_MHz->Text, 0, 9);
			 textBox_S_KHz->Text = FormatZeroDecimal(textBox_S_KHz->Text, 0, 999);
			 textBox_S_Hz->Text = FormatTwoDecimal(textBox_S_Hz->Text, 0, 999);

			 textBox_E_MHz->Text = FormatZeroDecimal(textBox_E_MHz->Text, 0, 9);
			 textBox_E_KHz->Text = FormatZeroDecimal(textBox_E_KHz->Text, 0, 999);
			 textBox_E_Hz->Text = FormatTwoDecimal(textBox_E_Hz->Text, 0, 999);
		 }

private: System::Void button99_Click(System::Object^  sender, System::EventArgs^  e) {
	numberHandle();
	int MHz = Convert::ToInt32(textBox_S_MHz->Text);
	int KHz = Convert::ToInt32(textBox_S_KHz->Text);
	int Hz = Convert::ToSingle(textBox_S_Hz->Text) * 100;
	int Duty = Convert::ToInt32(textBoxDuty->Text);
	SerialControlSource::FG_F_Start(getWaverType(), MHz, KHz, Hz, Duty);

}
private: System::Void button98_Click(System::Object^  sender, System::EventArgs^  e) {
	numberHandle();
	int MHz = Convert::ToInt32(textBox_E_MHz->Text);
	int KHz = Convert::ToInt32(textBox_E_KHz->Text);
	int Hz = Convert::ToSingle(textBox_E_Hz->Text) * 100;
	int Duty = Convert::ToInt32(textBoxDuty->Text);
	SerialControlSource::FG_F_End(getWaverType(), MHz, KHz, Hz, Duty);
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (SerialControlSource::SerialControlSourceInit(comboBox1->Text)) {
		MessageBox::Show("串口打开成功");
	}
	else {
		MessageBox::Show("串口打开失败");
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	SerialControlSource::SerialControlSourceClose();
}
};
}

