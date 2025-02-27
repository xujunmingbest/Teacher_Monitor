#pragma once

namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 负阻抗变换器监控 摘要
	/// </summary>
	public ref class 负阻抗变换器监控 : public System::Windows::Forms::Form
	{
	public:
		负阻抗变换器监控(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	public:void LoadData(ST_负阻抗变换器 &d);
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~负阻抗变换器监控()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button25;
	protected:
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_6;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_600_R_6;
	private: System::Windows::Forms::Label^  labelTrial1_600_U1_6;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_6;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_300_R_6;
	private: System::Windows::Forms::Label^  labelTrial1_300_U1_6;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_5;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_600_R_5;
	private: System::Windows::Forms::Label^  labelTrial1_600_U1_5;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_5;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_300_R_5;
	private: System::Windows::Forms::Label^  labelTrial1_300_U1_5;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_4;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_600_R_4;
	private: System::Windows::Forms::Label^  labelTrial1_600_U1_4;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_4;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_300_R_4;
	private: System::Windows::Forms::Label^  labelTrial1_300_U1_4;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_3;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_600_R_3;
	private: System::Windows::Forms::Label^  labelTrial1_600_U1_3;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_3;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_300_R_3;
	private: System::Windows::Forms::Label^  labelTrial1_300_U1_3;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_2;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_600_R_2;

	private: System::Windows::Forms::Label^  labelTrial1_600_U1_2;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_2;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_300_R_2;
	private: System::Windows::Forms::Label^  labelTrial1_300_U1_2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial1;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  labelTrial1_600_I1_1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_600_R_1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelTrial1_600_U1_1;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Label^  labelTrial1_300_I1_1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBoxTrial1_300_R_1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  labelTrial1_U1_line1;
	private: System::Windows::Forms::Label^  labelTrial1_300_U1_1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Button^  button102;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox_2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox_1;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label129;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label1;

	protected:













































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(负阻抗变换器监控::typeid));
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_600_I1_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_600_U1_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_6 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_6 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_300_U1_6 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_I1_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_600_U1_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_5 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_5 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_300_U1_5 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_I1_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_600_U1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_4 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_300_U1_4 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_I1_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_600_U1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_3 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_3 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_300_U1_3 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_600_I1_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_600_U1_2 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_I1_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_2 = (gcnew System::Windows::Forms::TextBox());
			this->labelTrial1_300_U1_2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->chartTrial1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_600_I1_1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_600_R_1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_600_U1_1 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_300_I1_1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxTrial1_300_R_1 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->labelTrial1_U1_line1 = (gcnew System::Windows::Forms::Label());
			this->labelTrial1_300_U1_1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox_2 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(918, 726);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(107, 27);
			this->button25->TabIndex = 218;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(805, 726);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(107, 27);
			this->button26->TabIndex = 217;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(692, 726);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(107, 27);
			this->button27->TabIndex = 216;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(579, 726);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(107, 27);
			this->button28->TabIndex = 215;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(466, 726);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(107, 27);
			this->button30->TabIndex = 214;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(353, 726);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(107, 27);
			this->button31->TabIndex = 213;
			this->button31->Text = L"获取";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(918, 647);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(107, 27);
			this->button19->TabIndex = 212;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(805, 647);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(107, 27);
			this->button20->TabIndex = 211;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(692, 647);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(107, 27);
			this->button21->TabIndex = 210;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(579, 647);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(107, 27);
			this->button22->TabIndex = 209;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(466, 647);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(107, 27);
			this->button23->TabIndex = 208;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(353, 647);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(107, 27);
			this->button24->TabIndex = 207;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(918, 463);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(107, 27);
			this->button13->TabIndex = 206;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(805, 463);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(107, 27);
			this->button14->TabIndex = 205;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(692, 463);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(107, 27);
			this->button15->TabIndex = 204;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(579, 463);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(107, 27);
			this->button16->TabIndex = 203;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(466, 463);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(107, 27);
			this->button17->TabIndex = 202;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(353, 463);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(107, 27);
			this->button18->TabIndex = 201;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(918, 393);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(107, 27);
			this->button10->TabIndex = 200;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(805, 393);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(107, 27);
			this->button11->TabIndex = 199;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(692, 393);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(107, 27);
			this->button12->TabIndex = 198;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(579, 393);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 27);
			this->button7->TabIndex = 197;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(466, 393);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 27);
			this->button6->TabIndex = 196;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(353, 393);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 27);
			this->button5->TabIndex = 195;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_600_I1_6
			// 
			this->labelTrial1_600_I1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_6->Location = System::Drawing::Point(918, 698);
			this->labelTrial1_600_I1_6->Name = L"labelTrial1_600_I1_6";
			this->labelTrial1_600_I1_6->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_6->TabIndex = 194;
			this->labelTrial1_600_I1_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_600_R_6
			// 
			this->textBoxTrial1_600_R_6->Location = System::Drawing::Point(918, 778);
			this->textBoxTrial1_600_R_6->Name = L"textBoxTrial1_600_R_6";
			this->textBoxTrial1_600_R_6->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_600_R_6->TabIndex = 193;
			// 
			// labelTrial1_600_U1_6
			// 
			this->labelTrial1_600_U1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_6->Location = System::Drawing::Point(918, 619);
			this->labelTrial1_600_U1_6->Name = L"labelTrial1_600_U1_6";
			this->labelTrial1_600_U1_6->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_6->TabIndex = 192;
			this->labelTrial1_600_U1_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_6
			// 
			this->labelTrial1_300_I1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_6->Location = System::Drawing::Point(918, 433);
			this->labelTrial1_300_I1_6->Name = L"labelTrial1_300_I1_6";
			this->labelTrial1_300_I1_6->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_6->TabIndex = 191;
			this->labelTrial1_300_I1_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_6
			// 
			this->textBoxTrial1_300_R_6->Location = System::Drawing::Point(918, 508);
			this->textBoxTrial1_300_R_6->Name = L"textBoxTrial1_300_R_6";
			this->textBoxTrial1_300_R_6->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_300_R_6->TabIndex = 190;
			// 
			// labelTrial1_300_U1_6
			// 
			this->labelTrial1_300_U1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_6->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_6->Location = System::Drawing::Point(918, 356);
			this->labelTrial1_300_U1_6->Name = L"labelTrial1_300_U1_6";
			this->labelTrial1_300_U1_6->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_6->TabIndex = 189;
			this->labelTrial1_300_U1_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_I1_5
			// 
			this->labelTrial1_600_I1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_5->Location = System::Drawing::Point(805, 698);
			this->labelTrial1_600_I1_5->Name = L"labelTrial1_600_I1_5";
			this->labelTrial1_600_I1_5->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_5->TabIndex = 188;
			this->labelTrial1_600_I1_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_600_R_5
			// 
			this->textBoxTrial1_600_R_5->Location = System::Drawing::Point(805, 778);
			this->textBoxTrial1_600_R_5->Name = L"textBoxTrial1_600_R_5";
			this->textBoxTrial1_600_R_5->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_600_R_5->TabIndex = 187;
			// 
			// labelTrial1_600_U1_5
			// 
			this->labelTrial1_600_U1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_5->Location = System::Drawing::Point(805, 619);
			this->labelTrial1_600_U1_5->Name = L"labelTrial1_600_U1_5";
			this->labelTrial1_600_U1_5->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_5->TabIndex = 186;
			this->labelTrial1_600_U1_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_5
			// 
			this->labelTrial1_300_I1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_5->Location = System::Drawing::Point(805, 433);
			this->labelTrial1_300_I1_5->Name = L"labelTrial1_300_I1_5";
			this->labelTrial1_300_I1_5->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_5->TabIndex = 185;
			this->labelTrial1_300_I1_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_5
			// 
			this->textBoxTrial1_300_R_5->Location = System::Drawing::Point(805, 508);
			this->textBoxTrial1_300_R_5->Name = L"textBoxTrial1_300_R_5";
			this->textBoxTrial1_300_R_5->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_300_R_5->TabIndex = 184;
			// 
			// labelTrial1_300_U1_5
			// 
			this->labelTrial1_300_U1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_5->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_5->Location = System::Drawing::Point(805, 356);
			this->labelTrial1_300_U1_5->Name = L"labelTrial1_300_U1_5";
			this->labelTrial1_300_U1_5->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_5->TabIndex = 183;
			this->labelTrial1_300_U1_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_I1_4
			// 
			this->labelTrial1_600_I1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_4->Location = System::Drawing::Point(692, 697);
			this->labelTrial1_600_I1_4->Name = L"labelTrial1_600_I1_4";
			this->labelTrial1_600_I1_4->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_4->TabIndex = 182;
			this->labelTrial1_600_I1_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_600_R_4
			// 
			this->textBoxTrial1_600_R_4->Location = System::Drawing::Point(692, 777);
			this->textBoxTrial1_600_R_4->Name = L"textBoxTrial1_600_R_4";
			this->textBoxTrial1_600_R_4->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_600_R_4->TabIndex = 181;
			// 
			// labelTrial1_600_U1_4
			// 
			this->labelTrial1_600_U1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_4->Location = System::Drawing::Point(692, 618);
			this->labelTrial1_600_U1_4->Name = L"labelTrial1_600_U1_4";
			this->labelTrial1_600_U1_4->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_4->TabIndex = 180;
			this->labelTrial1_600_U1_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_4
			// 
			this->labelTrial1_300_I1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_4->Location = System::Drawing::Point(692, 432);
			this->labelTrial1_300_I1_4->Name = L"labelTrial1_300_I1_4";
			this->labelTrial1_300_I1_4->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_4->TabIndex = 179;
			this->labelTrial1_300_I1_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_4
			// 
			this->textBoxTrial1_300_R_4->Location = System::Drawing::Point(692, 507);
			this->textBoxTrial1_300_R_4->Name = L"textBoxTrial1_300_R_4";
			this->textBoxTrial1_300_R_4->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_300_R_4->TabIndex = 178;
			// 
			// labelTrial1_300_U1_4
			// 
			this->labelTrial1_300_U1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_4->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_4->Location = System::Drawing::Point(692, 355);
			this->labelTrial1_300_U1_4->Name = L"labelTrial1_300_U1_4";
			this->labelTrial1_300_U1_4->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_4->TabIndex = 177;
			this->labelTrial1_300_U1_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_I1_3
			// 
			this->labelTrial1_600_I1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_3->Location = System::Drawing::Point(579, 698);
			this->labelTrial1_600_I1_3->Name = L"labelTrial1_600_I1_3";
			this->labelTrial1_600_I1_3->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_3->TabIndex = 176;
			this->labelTrial1_600_I1_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_600_R_3
			// 
			this->textBoxTrial1_600_R_3->Location = System::Drawing::Point(579, 778);
			this->textBoxTrial1_600_R_3->Name = L"textBoxTrial1_600_R_3";
			this->textBoxTrial1_600_R_3->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_600_R_3->TabIndex = 175;
			// 
			// labelTrial1_600_U1_3
			// 
			this->labelTrial1_600_U1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_3->Location = System::Drawing::Point(579, 619);
			this->labelTrial1_600_U1_3->Name = L"labelTrial1_600_U1_3";
			this->labelTrial1_600_U1_3->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_3->TabIndex = 174;
			this->labelTrial1_600_U1_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_3
			// 
			this->labelTrial1_300_I1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_3->Location = System::Drawing::Point(579, 433);
			this->labelTrial1_300_I1_3->Name = L"labelTrial1_300_I1_3";
			this->labelTrial1_300_I1_3->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_3->TabIndex = 173;
			this->labelTrial1_300_I1_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_3
			// 
			this->textBoxTrial1_300_R_3->Location = System::Drawing::Point(579, 508);
			this->textBoxTrial1_300_R_3->Name = L"textBoxTrial1_300_R_3";
			this->textBoxTrial1_300_R_3->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_300_R_3->TabIndex = 172;
			// 
			// labelTrial1_300_U1_3
			// 
			this->labelTrial1_300_U1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_3->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_3->Location = System::Drawing::Point(579, 356);
			this->labelTrial1_300_U1_3->Name = L"labelTrial1_300_U1_3";
			this->labelTrial1_300_U1_3->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_3->TabIndex = 171;
			this->labelTrial1_300_U1_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_600_I1_2
			// 
			this->labelTrial1_600_I1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_2->Location = System::Drawing::Point(466, 698);
			this->labelTrial1_600_I1_2->Name = L"labelTrial1_600_I1_2";
			this->labelTrial1_600_I1_2->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_2->TabIndex = 170;
			this->labelTrial1_600_I1_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_600_R_2
			// 
			this->textBoxTrial1_600_R_2->Location = System::Drawing::Point(466, 778);
			this->textBoxTrial1_600_R_2->Name = L"textBoxTrial1_600_R_2";
			this->textBoxTrial1_600_R_2->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_600_R_2->TabIndex = 169;
			// 
			// labelTrial1_600_U1_2
			// 
			this->labelTrial1_600_U1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_2->Location = System::Drawing::Point(466, 619);
			this->labelTrial1_600_U1_2->Name = L"labelTrial1_600_U1_2";
			this->labelTrial1_600_U1_2->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_2->TabIndex = 168;
			this->labelTrial1_600_U1_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTrial1_300_I1_2
			// 
			this->labelTrial1_300_I1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_2->Location = System::Drawing::Point(466, 433);
			this->labelTrial1_300_I1_2->Name = L"labelTrial1_300_I1_2";
			this->labelTrial1_300_I1_2->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_2->TabIndex = 167;
			this->labelTrial1_300_I1_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxTrial1_300_R_2
			// 
			this->textBoxTrial1_300_R_2->Location = System::Drawing::Point(466, 508);
			this->textBoxTrial1_300_R_2->Name = L"textBoxTrial1_300_R_2";
			this->textBoxTrial1_300_R_2->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_300_R_2->TabIndex = 166;
			// 
			// labelTrial1_300_U1_2
			// 
			this->labelTrial1_300_U1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_2->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_2->Location = System::Drawing::Point(466, 356);
			this->labelTrial1_300_U1_2->Name = L"labelTrial1_300_U1_2";
			this->labelTrial1_300_U1_2->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_2->TabIndex = 165;
			this->labelTrial1_300_U1_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(28, 1307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 38);
			this->button3->TabIndex = 164;
			this->button3->Text = L"曲线生成";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// chartTrial1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartTrial1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartTrial1->Legends->Add(legend1);
			this->chartTrial1->Location = System::Drawing::Point(146, 1312);
			this->chartTrial1->Name = L"chartTrial1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartTrial1->Series->Add(series1);
			this->chartTrial1->Size = System::Drawing::Size(866, 327);
			this->chartTrial1->TabIndex = 163;
			this->chartTrial1->Text = L"chart1";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(47, 1256);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(468, 27);
			this->label17->TabIndex = 162;
			this->label17->Text = L"（5）绘制负阻的伏安特性曲线   U1＝ F（I1）";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(241, 1183);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(113, 58);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 161;
			this->pictureBox4->TabStop = false;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(82, 1146);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(136, 27);
			this->label16->TabIndex = 160;
			this->label16->Text = L"电流增益：";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(398, 1105);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(172, 52);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 159;
			this->pictureBox3->TabStop = false;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(220, 1124);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(136, 27);
			this->label15->TabIndex = 158;
			this->label15->Text = L"　理论计算值";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(399, 1023);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 58);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 157;
			this->pictureBox2->TabStop = false;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(84, 1034);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(234, 27);
			this->label14->TabIndex = 156;
			this->label14->Text = L"等效负阻：　　　实测值    ";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(6, 861);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(1161, 158);
			this->label13->TabIndex = 155;
			this->label13->Text = L"    （1）调节负载电阻箱的电阻值，令 RL＝300Ω。\r\n\r\n    （2）令直流稳压源的输出电压在（0~1）V范围内的不同值时，分别测量INIC的输入电压U"
				L"1及输入电流I1。\r\n\r\n    （3）令 RL＝600Ω，重复上述的测量。\r\n\r\n    （4）计算：";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(956, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 27);
			this->button2->TabIndex = 154;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_600_I1_1
			// 
			this->labelTrial1_600_I1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_I1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_I1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_I1_1->Location = System::Drawing::Point(353, 698);
			this->labelTrial1_600_I1_1->Name = L"labelTrial1_600_I1_1";
			this->labelTrial1_600_I1_1->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_I1_1->TabIndex = 153;
			this->labelTrial1_600_I1_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(146, 780);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(191, 25);
			this->label8->TabIndex = 152;
			this->label8->Text = L"R_（KΩ）";
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(146, 698);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(191, 25);
			this->label12->TabIndex = 151;
			this->label12->Text = L"I1（mA）";
			// 
			// textBoxTrial1_600_R_1
			// 
			this->textBoxTrial1_600_R_1->Location = System::Drawing::Point(353, 778);
			this->textBoxTrial1_600_R_1->Name = L"textBoxTrial1_600_R_1";
			this->textBoxTrial1_600_R_1->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_600_R_1->TabIndex = 150;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(956, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 27);
			this->button1->TabIndex = 149;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_600_U1_1
			// 
			this->labelTrial1_600_U1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_600_U1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_600_U1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_600_U1_1->Location = System::Drawing::Point(353, 619);
			this->labelTrial1_600_U1_1->Name = L"labelTrial1_600_U1_1";
			this->labelTrial1_600_U1_1->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_600_U1_1->TabIndex = 148;
			this->labelTrial1_600_U1_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(956, 70);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(97, 27);
			this->button29->TabIndex = 147;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_300_I1_1
			// 
			this->labelTrial1_300_I1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_I1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_I1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_I1_1->Location = System::Drawing::Point(353, 433);
			this->labelTrial1_300_I1_1->Name = L"labelTrial1_300_I1_1";
			this->labelTrial1_300_I1_1->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_I1_1->TabIndex = 146;
			this->labelTrial1_300_I1_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(146, 510);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 25);
			this->label4->TabIndex = 145;
			this->label4->Text = L"R_（KΩ）";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(146, 433);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 25);
			this->label3->TabIndex = 144;
			this->label3->Text = L"I1（mA）";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button25);
			this->groupBox8->Controls->Add(this->button26);
			this->groupBox8->Controls->Add(this->button27);
			this->groupBox8->Controls->Add(this->button28);
			this->groupBox8->Controls->Add(this->button30);
			this->groupBox8->Controls->Add(this->button31);
			this->groupBox8->Controls->Add(this->button19);
			this->groupBox8->Controls->Add(this->button20);
			this->groupBox8->Controls->Add(this->button21);
			this->groupBox8->Controls->Add(this->button22);
			this->groupBox8->Controls->Add(this->button23);
			this->groupBox8->Controls->Add(this->button24);
			this->groupBox8->Controls->Add(this->button13);
			this->groupBox8->Controls->Add(this->button14);
			this->groupBox8->Controls->Add(this->button15);
			this->groupBox8->Controls->Add(this->button16);
			this->groupBox8->Controls->Add(this->button17);
			this->groupBox8->Controls->Add(this->button18);
			this->groupBox8->Controls->Add(this->button10);
			this->groupBox8->Controls->Add(this->button11);
			this->groupBox8->Controls->Add(this->button12);
			this->groupBox8->Controls->Add(this->button7);
			this->groupBox8->Controls->Add(this->button6);
			this->groupBox8->Controls->Add(this->button5);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_6);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_6);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_6);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_6);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_6);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_5);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_5);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_5);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_5);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_5);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_4);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_4);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_4);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_4);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_4);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_3);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_3);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_3);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_3);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_3);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_2);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_2);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_2);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_2);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_2);
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->chartTrial1);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->pictureBox4);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->pictureBox3);
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->pictureBox2);
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->labelTrial1_600_I1_1);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->textBoxTrial1_600_R_1);
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->labelTrial1_600_U1_1);
			this->groupBox8->Controls->Add(this->button29);
			this->groupBox8->Controls->Add(this->labelTrial1_300_I1_1);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->textBoxTrial1_300_R_1);
			this->groupBox8->Controls->Add(this->button9);
			this->groupBox8->Controls->Add(this->labelTrial1_U1_line1);
			this->groupBox8->Controls->Add(this->labelTrial1_300_U1_1);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label2);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 87);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 1645);
			this->groupBox8->TabIndex = 297;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"负阻抗变换器 实验内容1";
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(23, 619);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 189);
			this->label11->TabIndex = 64;
			this->label11->Text = L"RL=600Ω";
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(23, 356);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 179);
			this->label10->TabIndex = 63;
			this->label10->Text = L"RL=300Ω";
			// 
			// textBoxTrial1_300_R_1
			// 
			this->textBoxTrial1_300_R_1->Location = System::Drawing::Point(353, 508);
			this->textBoxTrial1_300_R_1->Name = L"textBoxTrial1_300_R_1";
			this->textBoxTrial1_300_R_1->Size = System::Drawing::Size(107, 30);
			this->textBoxTrial1_300_R_1->TabIndex = 62;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(956, 29);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(97, 27);
			this->button9->TabIndex = 59;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// labelTrial1_U1_line1
			// 
			this->labelTrial1_U1_line1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_U1_line1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_U1_line1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_U1_line1->Location = System::Drawing::Point(146, 619);
			this->labelTrial1_U1_line1->Name = L"labelTrial1_U1_line1";
			this->labelTrial1_U1_line1->Size = System::Drawing::Size(191, 25);
			this->labelTrial1_U1_line1->TabIndex = 56;
			this->labelTrial1_U1_line1->Text = L"U1（v）";
			// 
			// labelTrial1_300_U1_1
			// 
			this->labelTrial1_300_U1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTrial1_300_U1_1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->labelTrial1_300_U1_1->ForeColor = System::Drawing::Color::Black;
			this->labelTrial1_300_U1_1->Location = System::Drawing::Point(353, 356);
			this->labelTrial1_300_U1_1->Name = L"labelTrial1_300_U1_1";
			this->labelTrial1_300_U1_1->Size = System::Drawing::Size(107, 25);
			this->labelTrial1_300_U1_1->TabIndex = 50;
			this->labelTrial1_300_U1_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(146, 356);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(191, 25);
			this->label9->TabIndex = 46;
			this->label9->Text = L"U1（v）";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(437, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"      图 20-4";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(353, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(359, 140);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 45);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(1161, 38);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    1．测量负电阻的伏安特性，计算电流增益K及等值负阻。实验线路如图 20－4所示。    ";
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::SkyBlue;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(26, 3319);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1314, 52);
			this->label19->TabIndex = 300;
			this->label19->Text = L"答题结束";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(591, 3277);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(195, 39);
			this->button102->TabIndex = 299;
			this->button102->Text = L"成绩完成并上传";
			this->button102->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox_2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->pictureBox_1);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label129);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->label35);
			this->groupBox1->Controls->Add(this->pictureBox8);
			this->groupBox1->Controls->Add(this->label36);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(12, 1745);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 1505);
			this->groupBox1->TabIndex = 298;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"负阻抗变换器 实验内容2";
			// 
			// pictureBox_2
			// 
			this->pictureBox_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_2.Image")));
			this->pictureBox_2->Location = System::Drawing::Point(158, 1029);
			this->pictureBox_2->Name = L"pictureBox_2";
			this->pictureBox_2->Size = System::Drawing::Size(605, 395);
			this->pictureBox_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_2->TabIndex = 293;
			this->pictureBox_2->TabStop = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(10, 1029);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 27);
			this->button4->TabIndex = 292;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// pictureBox_1
			// 
			this->pictureBox_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_1.Image")));
			this->pictureBox_1->Location = System::Drawing::Point(158, 475);
			this->pictureBox_1->Name = L"pictureBox_1";
			this->pictureBox_1->Size = System::Drawing::Size(605, 395);
			this->pictureBox_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_1->TabIndex = 291;
			this->pictureBox_1->TabStop = false;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::SkyBlue;
			this->label18->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(-5, 996);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(1314, 12);
			this->label18->TabIndex = 290;
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label129
			// 
			this->label129->BackColor = System::Drawing::Color::SkyBlue;
			this->label129->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label129->Location = System::Drawing::Point(-5, 448);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(1314, 12);
			this->label129->TabIndex = 289;
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(10, 475);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 27);
			this->button8->TabIndex = 59;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(453, 385);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(199, 29);
			this->label35->TabIndex = 2;
			this->label35->Text = L"      图 20-5";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(369, 165);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(394, 195);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(24, 45);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(1161, 117);
			this->label36->TabIndex = 0;
			this->label36->Text = resources->GetString(L"label36.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(495, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 25);
			this->label1->TabIndex = 296;
			this->label1->Text = L"负阻抗变换器 实验内容";
			// 
			// 负阻抗变换器监控
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1451, 690);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"负阻抗变换器监控";
			this->Text = L"负阻抗变换器监控";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
