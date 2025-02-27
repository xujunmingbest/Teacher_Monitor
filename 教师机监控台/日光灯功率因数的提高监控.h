#pragma once

namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 日光灯功率因数的提高监控 摘要
	/// </summary>
	public ref class 日光灯功率因数的提高监控 : public System::Windows::Forms::Form
	{
	public:
		日光灯功率因数的提高监控(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	public:  void LoadData(ST_日光灯功率因数的提高 &d);
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~日光灯功率因数的提高监控()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxTrial3_cal_I_line4;
	protected:
	private: System::Windows::Forms::TextBox^  textBoxTrial3_cal_I_line3;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_cal_I_line2;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_cal_I_line1;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_cal_cos_line4;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_cal_cos_line3;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_cal_cos_line2;
	private: System::Windows::Forms::Label^  labelTrial3_mea_IC_line4;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Label^  labelTrial3_mea_IC_line3;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Label^  labelTrial3_mea_IC_line2;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Label^  labelTrial3_mea_IC_line1;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Label^  labelTrial3_mea_IL_line4;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Label^  labelTrial3_mea_IL_line3;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Label^  labelTrial3_mea_IL_line2;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Label^  labelTrial3_mea_IL_line1;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Label^  labelTrial3_mea_I_line4;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Label^  labelTrial3_mea_I_line3;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Label^  labelTrial3_mea_I_line2;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Label^  labelTrial3_mea_I_line1;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Label^  labelTrial3_mea_U_line4;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Label^  labelTrial3_mea_U_line3;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Label^  label129;
	private: System::Windows::Forms::Label^  labelTrial3_mea_U_line2;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Label^  labelTrial3_mea_P_line4;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Label^  labelTrial3_mea_P_line3;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  labelTrial3_mea_P_line2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  labelTrial3_mea_U_line1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::TextBox^  textBoxTrial3_cal_cos_line1;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  labelTrial3_mea_P_line1;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Button^  button102;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_cos_cal_line2;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_Cal_UU;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_Mea_DU;
	private: System::Windows::Forms::Label^  labelTrial1_Mea_UC;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  labelTrial1_Mea_UR;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  labelTrial1_Mea_U;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_cos_cal_line1;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_R_line2;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_R_line1;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_cos_line2;
	private: System::Windows::Forms::Label^  labelTrial2_UA_line2;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  labelTrial2_UA_line1;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  labelTrial2_UL_line2;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  labelTrial2_UL_line1;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  labelTrial2_U_line2;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  labelTrial2_U_line1;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  labelTrial2_I_line2;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  labelTrial2_I_line1;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  labelTrial2_P_line2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  labelTrial2_P_line1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBoxTrial2_cos_line1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  labelTrial1_F;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_Cal_U;
	private: System::Windows::Forms::Label^  labelTrial1_R_Ur;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::GroupBox^  groupBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(日光灯功率因数的提高监控::typeid));
			this->textBoxTrial3_cal_I_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_cal_I_line3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_cal_I_line2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_cal_I_line1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_cal_cos_line4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_cal_cos_line3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial3_cal_cos_line2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial3_mea_IC_line4 = (gcnew System::Windows::Forms::Label());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_IC_line3 = (gcnew System::Windows::Forms::Label());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_IC_line2 = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_IC_line1 = (gcnew System::Windows::Forms::Label());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_IL_line4 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_IL_line3 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_IL_line2 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_IL_line1 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_I_line4 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_I_line3 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_I_line2 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_I_line1 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_U_line4 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_U_line3 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->labelTrial3_mea_U_line2 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_P_line4 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_P_line3 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_P_line2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelTrial3_mea_U_line1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial3_cal_cos_line1 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->labelTrial3_mea_P_line1 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_cos_cal_line2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_Cal_UU = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial1_Mea_DU = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_Mea_UC = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Mea_UR = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_Mea_U = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_cos_cal_line1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_R_line2 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTrial2_R_line1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTrial2_cos_line2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial2_UA_line2 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UA_line1 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_UL_line2 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_UL_line1 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_U_line2 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_U_line1 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_I_line2 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labelTrial2_I_line1 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->labelTrial2_P_line2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelTrial2_P_line1 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial2_cos_line1 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_F = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_Cal_U = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_R_Ur = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxTrial3_cal_I_line4
			// 
			this->textBoxTrial3_cal_I_line4->Location = System::Drawing::Point(763, 913);
			this->textBoxTrial3_cal_I_line4->Name = L"textBoxTrial3_cal_I_line4";
			this->textBoxTrial3_cal_I_line4->Size = System::Drawing::Size(113, 30);
			this->textBoxTrial3_cal_I_line4->TabIndex = 134;
			// 
			// textBoxTrial3_cal_I_line3
			// 
			this->textBoxTrial3_cal_I_line3->Location = System::Drawing::Point(763, 833);
			this->textBoxTrial3_cal_I_line3->Name = L"textBoxTrial3_cal_I_line3";
			this->textBoxTrial3_cal_I_line3->Size = System::Drawing::Size(113, 30);
			this->textBoxTrial3_cal_I_line3->TabIndex = 133;
			// 
			// textBoxTrial3_cal_I_line2
			// 
			this->textBoxTrial3_cal_I_line2->Location = System::Drawing::Point(763, 753);
			this->textBoxTrial3_cal_I_line2->Name = L"textBoxTrial3_cal_I_line2";
			this->textBoxTrial3_cal_I_line2->Size = System::Drawing::Size(113, 30);
			this->textBoxTrial3_cal_I_line2->TabIndex = 132;
			// 
			// textBoxTrial3_cal_I_line1
			// 
			this->textBoxTrial3_cal_I_line1->Location = System::Drawing::Point(763, 676);
			this->textBoxTrial3_cal_I_line1->Name = L"textBoxTrial3_cal_I_line1";
			this->textBoxTrial3_cal_I_line1->Size = System::Drawing::Size(113, 30);
			this->textBoxTrial3_cal_I_line1->TabIndex = 131;
			// 
			// textBoxTrial3_cal_cos_line4
			// 
			this->textBoxTrial3_cal_cos_line4->Location = System::Drawing::Point(882, 914);
			this->textBoxTrial3_cal_cos_line4->Name = L"textBoxTrial3_cal_cos_line4";
			this->textBoxTrial3_cal_cos_line4->Size = System::Drawing::Size(127, 30);
			this->textBoxTrial3_cal_cos_line4->TabIndex = 130;
			// 
			// textBoxTrial3_cal_cos_line3
			// 
			this->textBoxTrial3_cal_cos_line3->Location = System::Drawing::Point(882, 834);
			this->textBoxTrial3_cal_cos_line3->Name = L"textBoxTrial3_cal_cos_line3";
			this->textBoxTrial3_cal_cos_line3->Size = System::Drawing::Size(127, 30);
			this->textBoxTrial3_cal_cos_line3->TabIndex = 129;
			// 
			// textBoxTrial3_cal_cos_line2
			// 
			this->textBoxTrial3_cal_cos_line2->Location = System::Drawing::Point(882, 754);
			this->textBoxTrial3_cal_cos_line2->Name = L"textBoxTrial3_cal_cos_line2";
			this->textBoxTrial3_cal_cos_line2->Size = System::Drawing::Size(127, 30);
			this->textBoxTrial3_cal_cos_line2->TabIndex = 128;
			// 
			// labelTrial3_mea_IC_line4
			// 
			this->labelTrial3_mea_IC_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IC_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IC_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IC_line4->Location = System::Drawing::Point(642, 917);
			this->labelTrial3_mea_IC_line4->Name = L"labelTrial3_mea_IC_line4";
			this->labelTrial3_mea_IC_line4->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_IC_line4->TabIndex = 119;
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(642, 945);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(97, 31);
			this->button33->TabIndex = 118;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_IC_line3
			// 
			this->labelTrial3_mea_IC_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IC_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IC_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IC_line3->Location = System::Drawing::Point(642, 836);
			this->labelTrial3_mea_IC_line3->Name = L"labelTrial3_mea_IC_line3";
			this->labelTrial3_mea_IC_line3->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_IC_line3->TabIndex = 117;
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(642, 864);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(97, 31);
			this->button34->TabIndex = 116;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_IC_line2
			// 
			this->labelTrial3_mea_IC_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IC_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IC_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IC_line2->Location = System::Drawing::Point(642, 757);
			this->labelTrial3_mea_IC_line2->Name = L"labelTrial3_mea_IC_line2";
			this->labelTrial3_mea_IC_line2->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_IC_line2->TabIndex = 115;
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(642, 785);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(97, 31);
			this->button35->TabIndex = 114;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_IC_line1
			// 
			this->labelTrial3_mea_IC_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IC_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IC_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IC_line1->Location = System::Drawing::Point(642, 677);
			this->labelTrial3_mea_IC_line1->Name = L"labelTrial3_mea_IC_line1";
			this->labelTrial3_mea_IC_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_IC_line1->TabIndex = 113;
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(642, 705);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(97, 31);
			this->button36->TabIndex = 112;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_IL_line4
			// 
			this->labelTrial3_mea_IL_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IL_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IL_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IL_line4->Location = System::Drawing::Point(531, 917);
			this->labelTrial3_mea_IL_line4->Name = L"labelTrial3_mea_IL_line4";
			this->labelTrial3_mea_IL_line4->Size = System::Drawing::Size(106, 25);
			this->labelTrial3_mea_IL_line4->TabIndex = 111;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(531, 945);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(106, 31);
			this->button29->TabIndex = 110;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_IL_line3
			// 
			this->labelTrial3_mea_IL_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IL_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IL_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IL_line3->Location = System::Drawing::Point(531, 836);
			this->labelTrial3_mea_IL_line3->Name = L"labelTrial3_mea_IL_line3";
			this->labelTrial3_mea_IL_line3->Size = System::Drawing::Size(106, 25);
			this->labelTrial3_mea_IL_line3->TabIndex = 109;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(531, 864);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(106, 31);
			this->button30->TabIndex = 108;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_IL_line2
			// 
			this->labelTrial3_mea_IL_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IL_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IL_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IL_line2->Location = System::Drawing::Point(531, 757);
			this->labelTrial3_mea_IL_line2->Name = L"labelTrial3_mea_IL_line2";
			this->labelTrial3_mea_IL_line2->Size = System::Drawing::Size(106, 25);
			this->labelTrial3_mea_IL_line2->TabIndex = 107;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(531, 785);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(106, 31);
			this->button31->TabIndex = 106;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_IL_line1
			// 
			this->labelTrial3_mea_IL_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_IL_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_IL_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_IL_line1->Location = System::Drawing::Point(531, 677);
			this->labelTrial3_mea_IL_line1->Name = L"labelTrial3_mea_IL_line1";
			this->labelTrial3_mea_IL_line1->Size = System::Drawing::Size(106, 25);
			this->labelTrial3_mea_IL_line1->TabIndex = 105;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(531, 705);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(106, 31);
			this->button32->TabIndex = 104;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_I_line4
			// 
			this->labelTrial3_mea_I_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_I_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_I_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_I_line4->Location = System::Drawing::Point(426, 917);
			this->labelTrial3_mea_I_line4->Name = L"labelTrial3_mea_I_line4";
			this->labelTrial3_mea_I_line4->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_I_line4->TabIndex = 103;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(426, 945);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(97, 31);
			this->button24->TabIndex = 102;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_I_line3
			// 
			this->labelTrial3_mea_I_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_I_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_I_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_I_line3->Location = System::Drawing::Point(426, 836);
			this->labelTrial3_mea_I_line3->Name = L"labelTrial3_mea_I_line3";
			this->labelTrial3_mea_I_line3->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_I_line3->TabIndex = 101;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(426, 864);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(97, 31);
			this->button25->TabIndex = 100;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_I_line2
			// 
			this->labelTrial3_mea_I_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_I_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_I_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_I_line2->Location = System::Drawing::Point(426, 757);
			this->labelTrial3_mea_I_line2->Name = L"labelTrial3_mea_I_line2";
			this->labelTrial3_mea_I_line2->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_I_line2->TabIndex = 99;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(426, 785);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(97, 31);
			this->button27->TabIndex = 98;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_I_line1
			// 
			this->labelTrial3_mea_I_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_I_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_I_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_I_line1->Location = System::Drawing::Point(426, 677);
			this->labelTrial3_mea_I_line1->Name = L"labelTrial3_mea_I_line1";
			this->labelTrial3_mea_I_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_I_line1->TabIndex = 97;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(426, 705);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(97, 31);
			this->button28->TabIndex = 96;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_U_line4
			// 
			this->labelTrial3_mea_U_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_U_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_U_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_U_line4->Location = System::Drawing::Point(323, 917);
			this->labelTrial3_mea_U_line4->Name = L"labelTrial3_mea_U_line4";
			this->labelTrial3_mea_U_line4->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_U_line4->TabIndex = 95;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(323, 945);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(97, 31);
			this->button23->TabIndex = 94;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_U_line3
			// 
			this->labelTrial3_mea_U_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_U_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_U_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_U_line3->Location = System::Drawing::Point(323, 836);
			this->labelTrial3_mea_U_line3->Name = L"labelTrial3_mea_U_line3";
			this->labelTrial3_mea_U_line3->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_U_line3->TabIndex = 93;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(323, 864);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(97, 31);
			this->button22->TabIndex = 92;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(75, 2185);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 52);
			this->label129->TabIndex = 197;
			this->label129->Text = L"答题结束";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial3_mea_U_line2
			// 
			this->labelTrial3_mea_U_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_U_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_U_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_U_line2->Location = System::Drawing::Point(323, 757);
			this->labelTrial3_mea_U_line2->Name = L"labelTrial3_mea_U_line2";
			this->labelTrial3_mea_U_line2->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_U_line2->TabIndex = 91;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(323, 785);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(97, 31);
			this->button21->TabIndex = 90;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_P_line4
			// 
			this->labelTrial3_mea_P_line4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_P_line4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_P_line4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_P_line4->Location = System::Drawing::Point(208, 916);
			this->labelTrial3_mea_P_line4->Name = L"labelTrial3_mea_P_line4";
			this->labelTrial3_mea_P_line4->Size = System::Drawing::Size(109, 25);
			this->labelTrial3_mea_P_line4->TabIndex = 89;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(208, 944);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(109, 31);
			this->button20->TabIndex = 88;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_P_line3
			// 
			this->labelTrial3_mea_P_line3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_P_line3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_P_line3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_P_line3->Location = System::Drawing::Point(208, 837);
			this->labelTrial3_mea_P_line3->Name = L"labelTrial3_mea_P_line3";
			this->labelTrial3_mea_P_line3->Size = System::Drawing::Size(109, 25);
			this->labelTrial3_mea_P_line3->TabIndex = 87;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(208, 865);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(109, 31);
			this->button19->TabIndex = 86;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_P_line2
			// 
			this->labelTrial3_mea_P_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_P_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_P_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_P_line2->Location = System::Drawing::Point(208, 757);
			this->labelTrial3_mea_P_line2->Name = L"labelTrial3_mea_P_line2";
			this->labelTrial3_mea_P_line2->Size = System::Drawing::Size(109, 25);
			this->labelTrial3_mea_P_line2->TabIndex = 85;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(208, 785);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 31);
			this->button3->TabIndex = 84;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// labelTrial3_mea_U_line1
			// 
			this->labelTrial3_mea_U_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_U_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_U_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_U_line1->Location = System::Drawing::Point(323, 677);
			this->labelTrial3_mea_U_line1->Name = L"labelTrial3_mea_U_line1";
			this->labelTrial3_mea_U_line1->Size = System::Drawing::Size(97, 25);
			this->labelTrial3_mea_U_line1->TabIndex = 83;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(323, 705);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 31);
			this->button1->TabIndex = 82;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label62
			// 
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label62->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label62->ForeColor = System::Drawing::Color::Black;
			this->label62->Location = System::Drawing::Point(84, 677);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(112, 25);
			this->label62->TabIndex = 81;
			this->label62->Text = L"无";
			// 
			// label61
			// 
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label61->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label61->ForeColor = System::Drawing::Color::Black;
			this->label61->Location = System::Drawing::Point(84, 916);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(112, 25);
			this->label61->TabIndex = 80;
			this->label61->Text = L"4.7uf";
			// 
			// label40
			// 
			this->label40->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label40->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(84, 837);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(112, 25);
			this->label40->TabIndex = 79;
			this->label40->Text = L"2.2uf";
			// 
			// label60
			// 
			this->label60->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label60->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label60->ForeColor = System::Drawing::Color::Black;
			this->label60->Location = System::Drawing::Point(208, 605);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(531, 25);
			this->label60->TabIndex = 78;
			this->label60->Text = L"测  量  数  值";
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label35
			// 
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(882, 641);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(127, 25);
			this->label35->TabIndex = 76;
			this->label35->Text = L"cosφ";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial3_cal_cos_line1
			// 
			this->textBoxTrial3_cal_cos_line1->Location = System::Drawing::Point(882, 677);
			this->textBoxTrial3_cal_cos_line1->Name = L"textBoxTrial3_cal_cos_line1";
			this->textBoxTrial3_cal_cos_line1->Size = System::Drawing::Size(127, 30);
			this->textBoxTrial3_cal_cos_line1->TabIndex = 75;
			// 
			// label36
			// 
			this->label36->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(763, 641);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(113, 25);
			this->label36->TabIndex = 73;
			this->label36->Text = L"I′（A）";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label43
			// 
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label43->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(643, 641);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(96, 25);
			this->label43->TabIndex = 61;
			this->label43->Text = L"IC(A)";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(531, 641);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(106, 25);
			this->label46->TabIndex = 56;
			this->label46->Text = L"IL(A)";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label49
			// 
			this->label49->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label49->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(426, 641);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(99, 25);
			this->label49->TabIndex = 51;
			this->label49->Text = L"I（A）";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label50
			// 
			this->label50->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label50->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->ForeColor = System::Drawing::Color::Black;
			this->label50->Location = System::Drawing::Point(323, 641);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(97, 25);
			this->label50->TabIndex = 50;
			this->label50->Text = L"U(v)";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label52
			// 
			this->label52->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->ForeColor = System::Drawing::Color::Black;
			this->label52->Location = System::Drawing::Point(80, 512);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(913, 61);
			this->label52->TabIndex = 47;
			this->label52->Text = L"    经指导老师检查后，接通市电，将自耦调压器的输出调至220V，记录功率表，电压表读数，通过电流表分别测得三条支路的电流，改变电容值，进行三次重复测量。";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(194, 99);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(870, 363);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 46;
			this->pictureBox2->TabStop = false;
			// 
			// labelTrial3_mea_P_line1
			// 
			this->labelTrial3_mea_P_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial3_mea_P_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial3_mea_P_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial3_mea_P_line1->Location = System::Drawing::Point(208, 677);
			this->labelTrial3_mea_P_line1->Name = L"labelTrial3_mea_P_line1";
			this->labelTrial3_mea_P_line1->Size = System::Drawing::Size(109, 25);
			this->labelTrial3_mea_P_line1->TabIndex = 41;
			// 
			// label54
			// 
			this->label54->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label54->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label54->ForeColor = System::Drawing::Color::Black;
			this->label54->Location = System::Drawing::Point(84, 757);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(112, 25);
			this->label54->TabIndex = 39;
			this->label54->Text = L"1uf";
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(208, 705);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(109, 31);
			this->button26->TabIndex = 12;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// label55
			// 
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label55->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label55->ForeColor = System::Drawing::Color::Black;
			this->label55->Location = System::Drawing::Point(763, 605);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(246, 25);
			this->label55->TabIndex = 10;
			this->label55->Text = L"计  算  值";
			// 
			// label56
			// 
			this->label56->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label56->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label56->ForeColor = System::Drawing::Color::Black;
			this->label56->Location = System::Drawing::Point(208, 641);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(109, 25);
			this->label56->TabIndex = 7;
			this->label56->Text = L"P（W）";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label57
			// 
			this->label57->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label57->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label57->ForeColor = System::Drawing::Color::Black;
			this->label57->Location = System::Drawing::Point(84, 641);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(112, 25);
			this->label57->TabIndex = 4;
			this->label57->Text = L"（μF）";
			this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label58
			// 
			this->label58->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label58->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label58->ForeColor = System::Drawing::Color::Black;
			this->label58->Location = System::Drawing::Point(84, 604);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(112, 25);
			this->label58->TabIndex = 2;
			this->label58->Text = L"电容值";
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(629, 2143);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 39);
			this->button102->TabIndex = 196;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(498, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(390, 25);
			this->label1->TabIndex = 192;
			this->label1->Text = L"日光灯功率因数的提高 实验内容";
			// 
			// textBoxTrial2_cos_cal_line2
			// 
			this->textBoxTrial2_cos_cal_line2->Location = System::Drawing::Point(852, 635);
			this->textBoxTrial2_cos_cal_line2->Name = L"textBoxTrial2_cos_cal_line2";
			this->textBoxTrial2_cos_cal_line2->Size = System::Drawing::Size(82, 30);
			this->textBoxTrial2_cos_cal_line2->TabIndex = 77;
			// 
			// textBoxTrial1_Cal_UU
			// 
			this->textBoxTrial1_Cal_UU->Location = System::Drawing::Point(1080, 216);
			this->textBoxTrial1_Cal_UU->Name = L"textBoxTrial1_Cal_UU";
			this->textBoxTrial1_Cal_UU->Size = System::Drawing::Size(147, 30);
			this->textBoxTrial1_Cal_UU->TabIndex = 45;
			// 
			// textBoxTrial1_Mea_DU
			// 
			this->textBoxTrial1_Mea_DU->Location = System::Drawing::Point(915, 214);
			this->textBoxTrial1_Mea_DU->Name = L"textBoxTrial1_Mea_DU";
			this->textBoxTrial1_Mea_DU->Size = System::Drawing::Size(147, 30);
			this->textBoxTrial1_Mea_DU->TabIndex = 44;
			// 
			// labelTrial1_Mea_UC
			// 
			this->labelTrial1_Mea_UC->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Mea_UC->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Mea_UC->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Mea_UC->Location = System::Drawing::Point(446, 216);
			this->labelTrial1_Mea_UC->Name = L"labelTrial1_Mea_UC";
			this->labelTrial1_Mea_UC->Size = System::Drawing::Size(145, 25);
			this->labelTrial1_Mea_UC->TabIndex = 43;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(446, 260);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(145, 31);
			this->button9->TabIndex = 42;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Mea_UR
			// 
			this->labelTrial1_Mea_UR->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Mea_UR->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Mea_UR->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Mea_UR->Location = System::Drawing::Point(257, 216);
			this->labelTrial1_Mea_UR->Name = L"labelTrial1_Mea_UR";
			this->labelTrial1_Mea_UR->Size = System::Drawing::Size(145, 25);
			this->labelTrial1_Mea_UR->TabIndex = 41;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(257, 260);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(145, 31);
			this->button8->TabIndex = 40;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_Mea_U
			// 
			this->labelTrial1_Mea_U->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_Mea_U->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_Mea_U->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_Mea_U->Location = System::Drawing::Point(70, 216);
			this->labelTrial1_Mea_U->Name = L"labelTrial1_Mea_U";
			this->labelTrial1_Mea_U->Size = System::Drawing::Size(145, 25);
			this->labelTrial1_Mea_U->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(1080, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 25);
			this->label6->TabIndex = 38;
			this->label6->Text = L"△U/U";
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(915, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 25);
			this->label7->TabIndex = 37;
			this->label7->Text = L"△U";
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(852, 520);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(82, 25);
			this->label34->TabIndex = 76;
			this->label34->Text = L"cosφ";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxTrial2_cos_cal_line1
			// 
			this->textBoxTrial2_cos_cal_line1->Location = System::Drawing::Point(852, 558);
			this->textBoxTrial2_cos_cal_line1->Name = L"textBoxTrial2_cos_cal_line1";
			this->textBoxTrial2_cos_cal_line1->Size = System::Drawing::Size(82, 30);
			this->textBoxTrial2_cos_cal_line1->TabIndex = 75;
			// 
			// textBoxTrial2_R_line2
			// 
			this->textBoxTrial2_R_line2->Location = System::Drawing::Point(749, 635);
			this->textBoxTrial2_R_line2->Name = L"textBoxTrial2_R_line2";
			this->textBoxTrial2_R_line2->Size = System::Drawing::Size(82, 30);
			this->textBoxTrial2_R_line2->TabIndex = 74;
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(749, 520);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(82, 25);
			this->label33->TabIndex = 73;
			this->label33->Text = L"R（Ω）";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(653, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(243, 25);
			this->label5->TabIndex = 36;
			this->label5->Text = L"U′（UR，UC组成Rt △）";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(446, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 25);
			this->label2->TabIndex = 35;
			this->label2->Text = L"UC（v）";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(560, 761);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 31);
			this->button6->TabIndex = 34;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(560, 720);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(102, 31);
			this->button7->TabIndex = 33;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxTrial2_cos_cal_line2);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->textBoxTrial2_cos_cal_line1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_R_line2);
			this->groupBox1->Controls->Add(this->label33);
			this->groupBox1->Controls->Add(this->textBoxTrial2_R_line1);
			this->groupBox1->Controls->Add(this->textBoxTrial2_cos_line2);
			this->groupBox1->Controls->Add(this->labelTrial2_UA_line2);
			this->groupBox1->Controls->Add(this->button17);
			this->groupBox1->Controls->Add(this->labelTrial2_UA_line1);
			this->groupBox1->Controls->Add(this->button18);
			this->groupBox1->Controls->Add(this->label32);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_line2);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->labelTrial2_UL_line1);
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->labelTrial2_U_line2);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->labelTrial2_U_line1);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->labelTrial2_I_line2);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->labelTrial2_I_line1);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->labelTrial2_P_line2);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->labelTrial2_P_line1);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->textBoxTrial2_cos_line1);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(99, 408);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 707);
			this->groupBox1->TabIndex = 194;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"日光灯功率因数的提高 实验内容2";
			// 
			// textBoxTrial2_R_line1
			// 
			this->textBoxTrial2_R_line1->Location = System::Drawing::Point(749, 558);
			this->textBoxTrial2_R_line1->Name = L"textBoxTrial2_R_line1";
			this->textBoxTrial2_R_line1->Size = System::Drawing::Size(82, 30);
			this->textBoxTrial2_R_line1->TabIndex = 72;
			// 
			// textBoxTrial2_cos_line2
			// 
			this->textBoxTrial2_cos_line2->Location = System::Drawing::Point(291, 635);
			this->textBoxTrial2_cos_line2->Name = L"textBoxTrial2_cos_line2";
			this->textBoxTrial2_cos_line2->Size = System::Drawing::Size(82, 30);
			this->textBoxTrial2_cos_line2->TabIndex = 71;
			// 
			// labelTrial2_UA_line2
			// 
			this->labelTrial2_UA_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UA_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_UA_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_UA_line2->Location = System::Drawing::Point(643, 636);
			this->labelTrial2_UA_line2->Name = L"labelTrial2_UA_line2";
			this->labelTrial2_UA_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_UA_line2->TabIndex = 70;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(643, 664);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(82, 31);
			this->button17->TabIndex = 69;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_UA_line1
			// 
			this->labelTrial2_UA_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UA_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_UA_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_UA_line1->Location = System::Drawing::Point(643, 560);
			this->labelTrial2_UA_line1->Name = L"labelTrial2_UA_line1";
			this->labelTrial2_UA_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_UA_line1->TabIndex = 68;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(643, 588);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(82, 31);
			this->button18->TabIndex = 67;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(643, 520);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(82, 25);
			this->label32->TabIndex = 66;
			this->label32->Text = L"UA（v）";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_UL_line2
			// 
			this->labelTrial2_UL_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_UL_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_UL_line2->Location = System::Drawing::Point(555, 636);
			this->labelTrial2_UL_line2->Name = L"labelTrial2_UL_line2";
			this->labelTrial2_UL_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_UL_line2->TabIndex = 65;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(555, 664);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(82, 31);
			this->button15->TabIndex = 64;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_UL_line1
			// 
			this->labelTrial2_UL_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_UL_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_UL_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_UL_line1->Location = System::Drawing::Point(555, 560);
			this->labelTrial2_UL_line1->Name = L"labelTrial2_UL_line1";
			this->labelTrial2_UL_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_UL_line1->TabIndex = 63;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(555, 588);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(82, 31);
			this->button16->TabIndex = 62;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label29->ForeColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(555, 520);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(82, 25);
			this->label29->TabIndex = 61;
			this->label29->Text = L"UL（L）";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_U_line2
			// 
			this->labelTrial2_U_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_U_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_U_line2->Location = System::Drawing::Point(467, 636);
			this->labelTrial2_U_line2->Name = L"labelTrial2_U_line2";
			this->labelTrial2_U_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_U_line2->TabIndex = 60;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(467, 664);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(82, 31);
			this->button13->TabIndex = 59;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_U_line1
			// 
			this->labelTrial2_U_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_U_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_U_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_U_line1->Location = System::Drawing::Point(467, 560);
			this->labelTrial2_U_line1->Name = L"labelTrial2_U_line1";
			this->labelTrial2_U_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_U_line1->TabIndex = 58;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(467, 588);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(82, 31);
			this->button14->TabIndex = 57;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(467, 520);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(82, 25);
			this->label26->TabIndex = 56;
			this->label26->Text = L"U（v）";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_I_line2
			// 
			this->labelTrial2_I_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_I_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_I_line2->Location = System::Drawing::Point(379, 636);
			this->labelTrial2_I_line2->Name = L"labelTrial2_I_line2";
			this->labelTrial2_I_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_I_line2->TabIndex = 55;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(379, 664);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(82, 31);
			this->button10->TabIndex = 54;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// labelTrial2_I_line1
			// 
			this->labelTrial2_I_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_I_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_I_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_I_line1->Location = System::Drawing::Point(379, 560);
			this->labelTrial2_I_line1->Name = L"labelTrial2_I_line1";
			this->labelTrial2_I_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_I_line1->TabIndex = 53;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(379, 588);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(82, 31);
			this->button11->TabIndex = 52;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(379, 520);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(82, 25);
			this->label15->TabIndex = 51;
			this->label15->Text = L"I（A）";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(291, 520);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(82, 25);
			this->label25->TabIndex = 50;
			this->label25->Text = L"cosφ";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTrial2_P_line2
			// 
			this->labelTrial2_P_line2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_line2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P_line2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P_line2->Location = System::Drawing::Point(194, 636);
			this->labelTrial2_P_line2->Name = L"labelTrial2_P_line2";
			this->labelTrial2_P_line2->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_P_line2->TabIndex = 49;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(194, 664);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(82, 31);
			this->button5->TabIndex = 48;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(66, 391);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(913, 77);
			this->label23->TabIndex = 47;
			this->label23->Text = L"    调节自耦调压器的输出U1V1=0V，断电按图17-3组成线路，经指导教师检查后接通电源，使其输出电压缓慢增大，直到日光灯刚启辉点亮为至，记下三表的指示值。"
				L"然后将电压调至220V，测量功率P，电流I，电压 U，UL，UA等值，验证电压、电流相量关系。";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(157, 78);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(780, 284);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 46;
			this->pictureBox1->TabStop = false;
			// 
			// labelTrial2_P_line1
			// 
			this->labelTrial2_P_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial2_P_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial2_P_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial2_P_line1->Location = System::Drawing::Point(194, 560);
			this->labelTrial2_P_line1->Name = L"labelTrial2_P_line1";
			this->labelTrial2_P_line1->Size = System::Drawing::Size(82, 25);
			this->labelTrial2_P_line1->TabIndex = 41;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(70, 635);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(112, 25);
			this->label13->TabIndex = 39;
			this->label13->Text = L"正常工作值";
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(194, 588);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(82, 31);
			this->button12->TabIndex = 12;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(749, 484);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(185, 25);
			this->label18->TabIndex = 10;
			this->label18->Text = L"计  算  值";
			// 
			// textBoxTrial2_cos_line1
			// 
			this->textBoxTrial2_cos_line1->Location = System::Drawing::Point(291, 558);
			this->textBoxTrial2_cos_line1->Name = L"textBoxTrial2_cos_line1";
			this->textBoxTrial2_cos_line1->Size = System::Drawing::Size(82, 30);
			this->textBoxTrial2_cos_line1->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(194, 520);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(82, 25);
			this->label19->TabIndex = 7;
			this->label19->Text = L"P（W）";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(70, 559);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(112, 25);
			this->label20->TabIndex = 4;
			this->label20->Text = L"启辉值";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(70, 483);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(655, 25);
			this->label21->TabIndex = 2;
			this->label21->Text = L"测 量 值";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(24, 45);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(913, 30);
			this->label22->TabIndex = 0;
			this->label22->Text = L"    2．日光灯线路接线与测量。";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(560, 627);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 31);
			this->button4->TabIndex = 25;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label59
			// 
			this->label59->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(24, 45);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(913, 51);
			this->label59->TabIndex = 0;
			this->label59->Text = L"    3．并联电路 — 电路功率因数的改善。\r\n    按图17－4组成实验线路。";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(70, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 31);
			this->button2->TabIndex = 12;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_F
			// 
			this->labelTrial1_F->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_F->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_F->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_F->Location = System::Drawing::Point(653, 132);
			this->labelTrial1_F->Name = L"labelTrial1_F";
			this->labelTrial1_F->Size = System::Drawing::Size(574, 25);
			this->labelTrial1_F->TabIndex = 10;
			this->labelTrial1_F->Text = L"计  算  值";
			// 
			// textBoxTrial1_Cal_U
			// 
			this->textBoxTrial1_Cal_U->Location = System::Drawing::Point(653, 216);
			this->textBoxTrial1_Cal_U->Name = L"textBoxTrial1_Cal_U";
			this->textBoxTrial1_Cal_U->Size = System::Drawing::Size(243, 30);
			this->textBoxTrial1_Cal_U->TabIndex = 9;
			// 
			// labelTrial1_R_Ur
			// 
			this->labelTrial1_R_Ur->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_R_Ur->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_R_Ur->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_R_Ur->Location = System::Drawing::Point(255, 173);
			this->labelTrial1_R_Ur->Name = L"labelTrial1_R_Ur";
			this->labelTrial1_R_Ur->Size = System::Drawing::Size(147, 25);
			this->labelTrial1_R_Ur->TabIndex = 7;
			this->labelTrial1_R_Ur->Text = L"UR（v）";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(70, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"U（v）";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(70, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(523, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"测 量 值";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxTrial1_Cal_UU);
			this->groupBox8->Controls->Add(this->textBoxTrial1_Mea_DU);
			this->groupBox8->Controls->Add(this->labelTrial1_Mea_UC);
			this->groupBox8->Controls->Add(this->button9);
			this->groupBox8->Controls->Add(this->labelTrial1_Mea_UR);
			this->groupBox8->Controls->Add(this->button8);
			this->groupBox8->Controls->Add(this->labelTrial1_Mea_U);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->button6);
			this->groupBox8->Controls->Add(this->button7);
			this->groupBox8->Controls->Add(this->button4);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->labelTrial1_F);
			this->groupBox8->Controls->Add(this->textBoxTrial1_Cal_U);
			this->groupBox8->Controls->Add(this->labelTrial1_R_Ur);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(99, 85);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 298);
			this->groupBox8->TabIndex = 193;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"日光灯功率因数的提高 实验内容1";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 45);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(913, 64);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    1．调节调压器输出U1V1=AC220V，断电用一只 220V/40W的日光灯和4.7μF/450V电容器组成如图 17-2所示的实验电路，经指导教师检查"
				L"后，接通市电。记录U、UR、UC值，验证电压三角形关系。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_I_line4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_I_line3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_I_line2);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_I_line1);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_cos_line4);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_cos_line3);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_cos_line2);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IC_line4);
			this->groupBox2->Controls->Add(this->button33);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IC_line3);
			this->groupBox2->Controls->Add(this->button34);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IC_line2);
			this->groupBox2->Controls->Add(this->button35);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IC_line1);
			this->groupBox2->Controls->Add(this->button36);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IL_line4);
			this->groupBox2->Controls->Add(this->button29);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IL_line3);
			this->groupBox2->Controls->Add(this->button30);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IL_line2);
			this->groupBox2->Controls->Add(this->button31);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_IL_line1);
			this->groupBox2->Controls->Add(this->button32);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_I_line4);
			this->groupBox2->Controls->Add(this->button24);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_I_line3);
			this->groupBox2->Controls->Add(this->button25);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_I_line2);
			this->groupBox2->Controls->Add(this->button27);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_I_line1);
			this->groupBox2->Controls->Add(this->button28);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_U_line4);
			this->groupBox2->Controls->Add(this->button23);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_U_line3);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_U_line2);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_P_line4);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_P_line3);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_P_line2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_U_line1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label62);
			this->groupBox2->Controls->Add(this->label61);
			this->groupBox2->Controls->Add(this->label40);
			this->groupBox2->Controls->Add(this->label60);
			this->groupBox2->Controls->Add(this->label35);
			this->groupBox2->Controls->Add(this->textBoxTrial3_cal_cos_line1);
			this->groupBox2->Controls->Add(this->label36);
			this->groupBox2->Controls->Add(this->label43);
			this->groupBox2->Controls->Add(this->label46);
			this->groupBox2->Controls->Add(this->label49);
			this->groupBox2->Controls->Add(this->label50);
			this->groupBox2->Controls->Add(this->label52);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->labelTrial3_mea_P_line1);
			this->groupBox2->Controls->Add(this->label54);
			this->groupBox2->Controls->Add(this->button26);
			this->groupBox2->Controls->Add(this->label55);
			this->groupBox2->Controls->Add(this->label56);
			this->groupBox2->Controls->Add(this->label57);
			this->groupBox2->Controls->Add(this->label58);
			this->groupBox2->Controls->Add(this->label59);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(99, 1136);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 1001);
			this->groupBox2->TabIndex = 195;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"日光灯功率因数的提高 实验内容3";
			// 
			// 日光灯功率因数的提高监控
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1528, 707);
			this->Controls->Add(this->label129);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox2);
			this->Name = L"日光灯功率因数的提高监控";
			this->Text = L"日光灯功率因数的提高监控";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
