#pragma once

namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 扫频参数设置 摘要
	/// </summary>
	public ref class 扫频参数设置 : public System::Windows::Forms::Form
	{
	public:
		扫频参数设置(int duty, int waveType)
		{
			InitializeComponent();
			this->Duty = duty;
			this->WaveType = waveType;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~扫频参数设置()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox_E_Hz;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox_E_KHz;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox_E_MHz;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::TextBox^  textBox_S_Hz;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox_S_KHz;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox_S_MHz;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox_E_Hz = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_E_KHz = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_E_MHz = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox_S_Hz = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_S_KHz = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_S_MHz = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox_E_Hz);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox_E_KHz);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox_E_MHz);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->textBox_S_Hz);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->textBox_S_KHz);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox_S_MHz);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(658, 268);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &扫频参数设置::panel1_Paint);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(449, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 29);
			this->button1->TabIndex = 49;
			this->button1->Text = L"终止确认";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &扫频参数设置::button1_Click);
			// 
			// textBox_E_Hz
			// 
			this->textBox_E_Hz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_E_Hz->Location = System::Drawing::Point(449, 144);
			this->textBox_E_Hz->Name = L"textBox_E_Hz";
			this->textBox_E_Hz->Size = System::Drawing::Size(103, 30);
			this->textBox_E_Hz->TabIndex = 48;
			this->textBox_E_Hz->Text = L"10.00";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(558, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 31);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Hz";
			// 
			// textBox_E_KHz
			// 
			this->textBox_E_KHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_E_KHz->Location = System::Drawing::Point(449, 99);
			this->textBox_E_KHz->Name = L"textBox_E_KHz";
			this->textBox_E_KHz->Size = System::Drawing::Size(103, 30);
			this->textBox_E_KHz->TabIndex = 46;
			this->textBox_E_KHz->Text = L"10";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(558, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 31);
			this->label5->TabIndex = 45;
			this->label5->Text = L"KHz";
			// 
			// textBox_E_MHz
			// 
			this->textBox_E_MHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_E_MHz->Location = System::Drawing::Point(449, 56);
			this->textBox_E_MHz->Name = L"textBox_E_MHz";
			this->textBox_E_MHz->Size = System::Drawing::Size(103, 30);
			this->textBox_E_MHz->TabIndex = 44;
			this->textBox_E_MHz->Text = L"1";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(558, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 31);
			this->label6->TabIndex = 43;
			this->label6->Text = L"MHz";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(444, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(122, 30);
			this->label8->TabIndex = 42;
			this->label8->Text = L"终止频率";
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->Location = System::Drawing::Point(48, 205);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(103, 29);
			this->button16->TabIndex = 41;
			this->button16->Text = L"启始确认";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &扫频参数设置::button16_Click);
			// 
			// textBox_S_Hz
			// 
			this->textBox_S_Hz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_S_Hz->Location = System::Drawing::Point(48, 144);
			this->textBox_S_Hz->Name = L"textBox_S_Hz";
			this->textBox_S_Hz->Size = System::Drawing::Size(103, 30);
			this->textBox_S_Hz->TabIndex = 40;
			this->textBox_S_Hz->Text = L"10.00";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(157, 144);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 31);
			this->label7->TabIndex = 39;
			this->label7->Text = L"Hz";
			// 
			// textBox_S_KHz
			// 
			this->textBox_S_KHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_S_KHz->Location = System::Drawing::Point(48, 99);
			this->textBox_S_KHz->Name = L"textBox_S_KHz";
			this->textBox_S_KHz->Size = System::Drawing::Size(103, 30);
			this->textBox_S_KHz->TabIndex = 38;
			this->textBox_S_KHz->Text = L"10";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(157, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 31);
			this->label2->TabIndex = 37;
			this->label2->Text = L"KHz";
			// 
			// textBox_S_MHz
			// 
			this->textBox_S_MHz->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_S_MHz->Location = System::Drawing::Point(48, 56);
			this->textBox_S_MHz->Name = L"textBox_S_MHz";
			this->textBox_S_MHz->Size = System::Drawing::Size(103, 30);
			this->textBox_S_MHz->TabIndex = 11;
			this->textBox_S_MHz->Text = L"1";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(157, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 31);
			this->label3->TabIndex = 2;
			this->label3->Text = L"MHz";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(43, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"起始频率";
			// 
			// 扫频参数设置
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 300);
			this->Controls->Add(this->panel1);
			this->Name = L"扫频参数设置";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"扫频参数设置";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
			 void numberHandle() {
				 textBox_S_MHz->Text = FormatZeroDecimal(textBox_S_MHz->Text, 0, 9);
				 textBox_S_KHz->Text = FormatZeroDecimal(textBox_S_KHz->Text, 0, 999);
				 textBox_S_Hz->Text = FormatTwoDecimal(textBox_S_Hz->Text, 0, 999);

				 textBox_E_MHz->Text = FormatZeroDecimal(textBox_E_MHz->Text, 0, 9);
				 textBox_E_KHz->Text = FormatZeroDecimal(textBox_E_KHz->Text, 0, 999);
				 textBox_E_Hz->Text = FormatTwoDecimal(textBox_E_Hz->Text, 0, 999);
			 }
			 int Duty = 0;
			 int WaveType = 0;
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	numberHandle();
	int MHz = Convert::ToInt32(textBox_S_MHz->Text);
	int KHz = Convert::ToInt32(textBox_S_KHz->Text);
	int Hz = Convert::ToSingle(textBox_S_Hz->Text) * 100;
	SerialControlSource::FG_F_Start(WaveType, MHz, KHz, Hz, Duty);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	numberHandle();
	int MHz = Convert::ToInt32(textBox_E_MHz->Text);
	int KHz = Convert::ToInt32(textBox_E_KHz->Text);
	int Hz = Convert::ToSingle(textBox_E_Hz->Text) * 100;
	SerialControlSource::FG_F_End(WaveType, MHz, KHz, Hz, Duty);
}
};
}
