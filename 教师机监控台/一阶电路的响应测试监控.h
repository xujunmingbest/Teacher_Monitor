#pragma once

namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 一阶电路的响应测试监控 摘要
	/// </summary>
	public ref class 一阶电路的响应测试监控 : public System::Windows::Forms::Form
	{
	public:
		一阶电路的响应测试监控(void)
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
		~一阶电路的响应测试监控()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_out;
	protected:
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_out;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial3_in;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2_in;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_out;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBoxtrialτ;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1_in;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::TextBox^  textBox结论;
	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button81;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::GroupBox^  groupBox8;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(一阶电路的响应测试监控::typeid));
			this->pictureBoxTrial2_out = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3_out = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3_in = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial2_in = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1_out = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxtrialτ = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1_in = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->textBox结论 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_out))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_out))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_in))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_in))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_out))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_in))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBoxTrial2_out
			// 
			this->pictureBoxTrial2_out->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_out.Image")));
			this->pictureBoxTrial2_out->Location = System::Drawing::Point(132, 652);
			this->pictureBoxTrial2_out->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial2_out->Name = L"pictureBoxTrial2_out";
			this->pictureBoxTrial2_out->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial2_out->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_out->TabIndex = 97;
			this->pictureBoxTrial2_out->TabStop = false;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(33, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1100, 52);
			this->label6->TabIndex = 87;
			this->label6->Text = L"    2．令R＝10KΩ，C＝0.1μF（K1、K16闭合，其他断开），观察并描绘响应的波形，继续增大C之值，定性地观察对响应的影响。";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->pictureBoxTrial3_out);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->pictureBoxTrial3_in);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(25, 3914);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(1296, 1194);
			this->groupBox3->TabIndex = 187;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"实验内容三";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(412, 1154);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(120, 25);
			this->label11->TabIndex = 100;
			this->label11->Text = L"输出波形";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(0, 666);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 32);
			this->button7->TabIndex = 99;
			this->button7->Text = L"获取波形";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// pictureBoxTrial3_out
			// 
			this->pictureBoxTrial3_out->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_out.Image")));
			this->pictureBoxTrial3_out->Location = System::Drawing::Point(132, 666);
			this->pictureBoxTrial3_out->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial3_out->Name = L"pictureBoxTrial3_out";
			this->pictureBoxTrial3_out->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_out->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_out->TabIndex = 98;
			this->pictureBoxTrial3_out->TabStop = false;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(412, 637);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(120, 25);
			this->label10->TabIndex = 97;
			this->label10->Text = L"输入波形";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(0, 149);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 32);
			this->button3->TabIndex = 92;
			this->button3->Text = L"获取波形";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// pictureBoxTrial3_in
			// 
			this->pictureBoxTrial3_in->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial3_in.Image")));
			this->pictureBoxTrial3_in->Location = System::Drawing::Point(132, 149);
			this->pictureBoxTrial3_in->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial3_in->Name = L"pictureBoxTrial3_in";
			this->pictureBoxTrial3_in->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial3_in->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3_in->TabIndex = 89;
			this->pictureBoxTrial3_in->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(33, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1100, 95);
			this->label4->TabIndex = 87;
			this->label4->Text = L"    3．选择动态板上的R、C元件，组成如图6-2（a）所示的微分电路，令C＝0.01μF，R＝100Ω。（K4、K6闭合，其他断开）\r\n    在同样的方波激"
				L"励信号（Um＝2V，F =1KHz）作用下，观测并描绘激励与响应的波形。\r\n增减R之值，定性地观察对响应的影响，并作记录，当R增至1MΩ时，输入输出波形有何本质"
				L"上的区别？";
			// 
			// pictureBoxTrial2_in
			// 
			this->pictureBoxTrial2_in->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial2_in.Image")));
			this->pictureBoxTrial2_in->Location = System::Drawing::Point(132, 108);
			this->pictureBoxTrial2_in->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial2_in->Name = L"pictureBoxTrial2_in";
			this->pictureBoxTrial2_in->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial2_in->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2_in->TabIndex = 89;
			this->pictureBoxTrial2_in->TabStop = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(22, 739);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 32);
			this->button5->TabIndex = 97;
			this->button5->Text = L"获取波形";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(459, 1233);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 25);
			this->label7->TabIndex = 96;
			this->label7->Text = L"输出波形";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(459, 690);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 25);
			this->label5->TabIndex = 95;
			this->label5->Text = L"输入波形";
			// 
			// pictureBoxTrial1_out
			// 
			this->pictureBoxTrial1_out->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_out.Image")));
			this->pictureBoxTrial1_out->Location = System::Drawing::Point(172, 739);
			this->pictureBoxTrial1_out->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial1_out->Name = L"pictureBoxTrial1_out";
			this->pictureBoxTrial1_out->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial1_out->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_out->TabIndex = 94;
			this->pictureBoxTrial1_out->TabStop = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(996, 1287);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(171, 32);
			this->button4->TabIndex = 93;
			this->button4->Text = L"方波与频率调整";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(22, 202);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 32);
			this->button1->TabIndex = 92;
			this->button1->Text = L"获取波形";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBoxtrialτ
			// 
			this->textBoxtrialτ->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxtrialτ->Location = System::Drawing::Point(199, 1294);
			this->textBoxtrialτ->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrialτ->Name = L"textBoxtrialτ";
			this->textBoxtrialτ->Size = System::Drawing::Size(284, 30);
			this->textBoxtrialτ->TabIndex = 91;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(68, 1294);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 25);
			this->label3->TabIndex = 90;
			this->label3->Text = L"时间常数τ";
			// 
			// pictureBoxTrial1_in
			// 
			this->pictureBoxTrial1_in->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTrial1_in.Image")));
			this->pictureBoxTrial1_in->Location = System::Drawing::Point(172, 202);
			this->pictureBoxTrial1_in->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTrial1_in->Name = L"pictureBoxTrial1_in";
			this->pictureBoxTrial1_in->Size = System::Drawing::Size(726, 474);
			this->pictureBoxTrial1_in->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1_in->TabIndex = 89;
			this->pictureBoxTrial1_in->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(33, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1100, 34);
			this->label2->TabIndex = 88;
			this->label2->Text = L"    少量地改变电容值或电阻值，定性地观察对响应的影响，记录观察到的现象  。";
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(14, 5258);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1315, 52);
			this->label106->TabIndex = 191;
			this->label106->Text = L"答题结束";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox结论
			// 
			this->textBox结论->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox结论->Location = System::Drawing::Point(208, 5181);
			this->textBox结论->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox结论->Name = L"textBox结论";
			this->textBox结论->Size = System::Drawing::Size(1001, 28);
			this->textBox结论->TabIndex = 189;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(21, 5181);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 188;
			this->label105->Text = L"实验结论";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(33, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1100, 91);
			this->label19->TabIndex = 87;
			this->label19->Text = L"    1．选择动态电路板上的R、C元件，令R＝30KΩ，C＝1000PF（K2、K11闭合，其他断开）组成如图6－1（b）所示的RC充放电电路，E为脉冲信号发生"
				L"器输出Um＝3V，F＝1KHz的方波电压信号，并通过两根同轴电缆线，将激励源E和响应Uc的信号分别连至示波器的两个输入口YA和YB，这时可在示波器的屏幕上观察到"
				L"激励与响应的变化规律，求测时间常数τ，并用方格纸按1：1的比例描绘波形 。";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(412, 1139);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 25);
			this->label9->TabIndex = 99;
			this->label9->Text = L"输入波形";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(412, 595);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 25);
			this->label8->TabIndex = 96;
			this->label8->Text = L"输入波形";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(6, 652);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 32);
			this->button6->TabIndex = 98;
			this->button6->Text = L"获取波形";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(569, 5215);
			this->button81->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 190;
			this->button81->Text = L"成绩完成并上传";
			this->button81->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_out);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2_in);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(25, 2698);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1296, 1186);
			this->groupBox1->TabIndex = 186;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验内容二";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(6, 108);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 32);
			this->button2->TabIndex = 92;
			this->button2->Text = L"获取波形";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1_out);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBoxtrialτ);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1_in);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(25, 1318);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1296, 1355);
			this->groupBox2->TabIndex = 185;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容一";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(212, 962);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(787, 308);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(212, 496);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(795, 441);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(605, 422);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"图6-3";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(117, 141);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1000, 266);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(57, 48);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(1239, 55);
			this->label38->TabIndex = 7;
			this->label38->Text = L"   实验线路板的结构如图6－3所示，认清R、C元件的布局及其标称值，各开关的通断位置等等。K1-K4往左拨为闭合，K5-K16往上拨为闭合。";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->pictureBox2);
			this->groupBox8->Controls->Add(this->pictureBox3);
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label38);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(25, 22);
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(1296, 1290);
			this->groupBox8->TabIndex = 184;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"一阶电路的响应测试实验内容";
			// 
			// 一阶电路的响应测试监控
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1354, 998);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->textBox结论);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox8);
			this->Name = L"一阶电路的响应测试监控";
			this->Text = L"一阶电路的响应测试监控";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_out))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_out))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3_in))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2_in))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_out))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1_in))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public :void LoadData(ST_一阶电路的响应测试 &d);
	private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
