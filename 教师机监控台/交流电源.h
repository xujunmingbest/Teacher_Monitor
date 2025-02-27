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
	/// 交流电源 摘要
	/// </summary>
	public ref class 交流电源 : public System::Windows::Forms::Form
	{
	public:
		交流电源(void)
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
		~交流电源()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox_V_ALL;
	private: System::Windows::Forms::TextBox^  textBox_V_D;
	private: System::Windows::Forms::TextBox^  textBox_V_C;
	private: System::Windows::Forms::TextBox^  textBox_V_B;
	private: System::Windows::Forms::TextBox^  textBox_V_A;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
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
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox_V_ALL = (gcnew System::Windows::Forms::TextBox());
			this->textBox_V_D = (gcnew System::Windows::Forms::TextBox());
			this->textBox_V_C = (gcnew System::Windows::Forms::TextBox());
			this->textBox_V_B = (gcnew System::Windows::Forms::TextBox());
			this->textBox_V_A = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox_V_ALL);
			this->panel1->Controls->Add(this->textBox_V_D);
			this->panel1->Controls->Add(this->textBox_V_C);
			this->panel1->Controls->Add(this->textBox_V_B);
			this->panel1->Controls->Add(this->textBox_V_A);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(51, 76);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(577, 415);
			this->panel1->TabIndex = 4;
			this->panel1->Click += gcnew System::EventHandler(this, &交流电源::panel1_Click);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &交流电源::panel1_Paint);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button11->Location = System::Drawing::Point(458, 331);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 29);
			this->button11->TabIndex = 36;
			this->button11->Text = L"锁定";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &交流电源::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->Location = System::Drawing::Point(458, 272);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 29);
			this->button12->TabIndex = 35;
			this->button12->Text = L"锁定";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &交流电源::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->Location = System::Drawing::Point(458, 214);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 29);
			this->button13->TabIndex = 34;
			this->button13->Text = L"锁定";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &交流电源::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->Location = System::Drawing::Point(458, 154);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 29);
			this->button14->TabIndex = 33;
			this->button14->Text = L"锁定";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &交流电源::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->Location = System::Drawing::Point(458, 97);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 29);
			this->button15->TabIndex = 32;
			this->button15->Text = L"锁定";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &交流电源::button15_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(354, 331);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 29);
			this->button6->TabIndex = 31;
			this->button6->Text = L"打开";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &交流电源::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(354, 272);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 29);
			this->button7->TabIndex = 30;
			this->button7->Text = L"打开";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &交流电源::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->Location = System::Drawing::Point(354, 214);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 29);
			this->button8->TabIndex = 29;
			this->button8->Text = L"打开";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &交流电源::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->Location = System::Drawing::Point(354, 154);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 29);
			this->button9->TabIndex = 28;
			this->button9->Text = L"打开";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &交流电源::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button10->Location = System::Drawing::Point(354, 97);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 29);
			this->button10->TabIndex = 27;
			this->button10->Text = L"打开";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &交流电源::button10_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(255, 332);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 29);
			this->button5->TabIndex = 26;
			this->button5->Text = L"确认";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &交流电源::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(255, 273);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 29);
			this->button4->TabIndex = 25;
			this->button4->Text = L"确认";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &交流电源::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(255, 215);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 29);
			this->button3->TabIndex = 24;
			this->button3->Text = L"确认";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &交流电源::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(255, 155);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 23;
			this->button2->Text = L"确认";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &交流电源::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(255, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 22;
			this->button1->Text = L"确认";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &交流电源::button1_Click);
			// 
			// textBox_V_ALL
			// 
			this->textBox_V_ALL->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_V_ALL->Location = System::Drawing::Point(118, 333);
			this->textBox_V_ALL->Name = L"textBox_V_ALL";
			this->textBox_V_ALL->Size = System::Drawing::Size(81, 30);
			this->textBox_V_ALL->TabIndex = 16;
			this->textBox_V_ALL->Text = L"5.00";
			// 
			// textBox_V_D
			// 
			this->textBox_V_D->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_V_D->Location = System::Drawing::Point(118, 274);
			this->textBox_V_D->Name = L"textBox_V_D";
			this->textBox_V_D->Size = System::Drawing::Size(81, 30);
			this->textBox_V_D->TabIndex = 15;
			this->textBox_V_D->Text = L"5.00";
			// 
			// textBox_V_C
			// 
			this->textBox_V_C->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_V_C->Location = System::Drawing::Point(118, 216);
			this->textBox_V_C->Name = L"textBox_V_C";
			this->textBox_V_C->Size = System::Drawing::Size(81, 30);
			this->textBox_V_C->TabIndex = 14;
			this->textBox_V_C->Text = L"5.00";
			// 
			// textBox_V_B
			// 
			this->textBox_V_B->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_V_B->Location = System::Drawing::Point(118, 156);
			this->textBox_V_B->Name = L"textBox_V_B";
			this->textBox_V_B->Size = System::Drawing::Size(81, 30);
			this->textBox_V_B->TabIndex = 13;
			this->textBox_V_B->Text = L"5.00";
			// 
			// textBox_V_A
			// 
			this->textBox_V_A->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox_V_A->Location = System::Drawing::Point(118, 98);
			this->textBox_V_A->Name = L"textBox_V_A";
			this->textBox_V_A->Size = System::Drawing::Size(81, 30);
			this->textBox_V_A->TabIndex = 11;
			this->textBox_V_A->Text = L"5.00";
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
			this->label6->Location = System::Drawing::Point(460, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 31);
			this->label6->TabIndex = 5;
			this->label6->Text = L"按键";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(355, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"输出";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(256, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"设定";
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
			this->label1->Location = System::Drawing::Point(169, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"交流电源控制";
			// 
			// 交流电源
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 519);
			this->Controls->Add(this->panel1);
			this->Name = L"交流电源";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"交流电源";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox_V_A->Text = FormatZeroDecimal(textBox_V_A->Text, 0, 30);
		textBox_V_B->Text = FormatZeroDecimal(textBox_V_B->Text, 0, 30);
		textBox_V_C->Text = FormatZeroDecimal(textBox_V_C->Text, 0, 30);
		textBox_V_D->Text = FormatZeroDecimal(textBox_V_D->Text, 0, 30);
		textBox_V_ALL->Text = FormatZeroDecimal(textBox_V_ALL->Text, 0, 30);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	numberHandle();
	int V = Convert::ToInt32(textBox_V_A->Text);
	SerialControlSource::AC_Confirm(ACA, V);

}
		 void numberHandle() {
			 textBox_V_A->Text = FormatZeroDecimal(textBox_V_A->Text, 0, 30);
			 textBox_V_B->Text = FormatZeroDecimal(textBox_V_B->Text, 0, 30);
			 textBox_V_C->Text = FormatZeroDecimal(textBox_V_C->Text, 0, 30);
			 textBox_V_D->Text = FormatZeroDecimal(textBox_V_D->Text, 0, 30);
			 textBox_V_ALL->Text = FormatZeroDecimal(textBox_V_ALL->Text, 0, 30);
		 }

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	numberHandle();
	int V = Convert::ToInt32(textBox_V_B->Text);
	SerialControlSource::AC_Confirm(ACB, V);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	numberHandle();
	int V = Convert::ToInt32(textBox_V_C->Text);
	SerialControlSource::AC_Confirm(ACC, V);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	numberHandle();
	int V = Convert::ToInt32(textBox_V_D->Text);
	SerialControlSource::AC_Confirm(ACD, V);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	numberHandle();
	int V = Convert::ToInt32(textBox_V_ALL->Text);
	SerialControlSource::AC_Confirm(ACCLASS, V);
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button10->Text == "打开") {
		button10->Text = "关闭";
		SerialControlSource::AC_OutputOpen(ACA);
	}
	else {
		button10->Text = "打开";
		SerialControlSource::AC_OutputClose(ACA);
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button9->Text == "打开") {
		button9->Text = "关闭";
		SerialControlSource::AC_OutputOpen(ACB);
	}
	else {
		button9->Text = "打开";
		SerialControlSource::AC_OutputClose(ACB);
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button8->Text == "打开") {
		button8->Text = "关闭";
		SerialControlSource::AC_OutputOpen(ACC);
	}
	else {
		button8->Text = "打开";
		SerialControlSource::AC_OutputClose(ACC);
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button7->Text == "打开") {
		button7->Text = "关闭";
		SerialControlSource::AC_OutputOpen(ACD);
	}
	else {
		button7->Text = "打开";
		SerialControlSource::AC_OutputClose(ACD);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button6->Text == "打开") {
		button6->Text = "关闭";
		SerialControlSource::AC_OutputOpen(ACCLASS);
	}
	else {
		button6->Text = "打开";
		SerialControlSource::AC_OutputClose(ACCLASS);
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button15->Text == "锁定") {
		button15->Text = "解锁";
		SerialControlSource::AC_Lock(ACA);
	}
	else {
		button15->Text = "锁定";
		SerialControlSource::AC_UnLock(ACA);
	}


}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button14->Text == "锁定") {
		button14->Text = "解锁";
		SerialControlSource::AC_Lock(ACB);
	}
	else {
		button14->Text = "锁定";
		SerialControlSource::AC_UnLock(ACB);
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button13->Text == "锁定") {
		button13->Text = "解锁";
		SerialControlSource::AC_Lock(ACC);
	}
	else {
		button13->Text = "锁定";
		SerialControlSource::AC_UnLock(ACC);
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button12->Text == "锁定") {
		button12->Text = "解锁";
		SerialControlSource::AC_Lock(ACD);
	}
	else {
		button12->Text = "锁定";
		SerialControlSource::AC_UnLock(ACD);
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button11->Text == "锁定") {
		button11->Text = "解锁";
		SerialControlSource::AC_Lock(ACCLASS);
	}
	else {
		button11->Text = "锁定";
		SerialControlSource::AC_UnLock(ACCLASS);
	}
}
};
}
