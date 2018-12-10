#pragma once
#include "扫频参数设置.h" 

namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 信号源控制 摘要
	/// </summary>
	public ref class 信号源控制 : public System::Windows::Forms::Form
	{
	public:
		信号源控制(void)
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
		~信号源控制()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:


	private: System::Windows::Forms::Button^  button14;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxHz;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxKHz;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBoxMHz;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBoxSweep;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBoxDuty;

	private: System::Windows::Forms::Label^  label12;




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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxSweep = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxDuty = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxHz = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxKHz = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxMHz = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->textBoxDuty);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->checkedListBox2);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->checkedListBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBoxHz);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBoxKHz);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->textBoxMHz);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(781, 469);
			this->panel1->TabIndex = 3;
			this->panel1->Click += gcnew System::EventHandler(this, &信号源控制::panel1_Click);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &信号源控制::panel1_Paint);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->textBoxSweep);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(377, 97);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(353, 124);
			this->groupBox1->TabIndex = 39;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"扫频";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(183, 76);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 42;
			this->button3->Text = L"启动";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &信号源控制::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(24, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 41;
			this->button2->Text = L"参数";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &信号源控制::button2_Click);
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(264, 26);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 32);
			this->label15->TabIndex = 40;
			this->label15->Text = L"S";
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
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(19, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(137, 32);
			this->label14->TabIndex = 38;
			this->label14->Text = L"扫频时间:";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(595, 52);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 32);
			this->label13->TabIndex = 38;
			this->label13->Text = L"%";
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
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(372, 52);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(115, 32);
			this->label12->TabIndex = 36;
			this->label12->Text = L"占空比:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(458, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 35;
			this->button1->Text = L"确认";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &信号源控制::button1_Click);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(372, 374);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 26);
			this->label11->TabIndex = 34;
			this->label11->Text = L"设定:";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(34, 374);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 26);
			this->label10->TabIndex = 33;
			this->label10->Text = L"按键:";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(34, 320);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 26);
			this->label9->TabIndex = 32;
			this->label9->Text = L"波形:";
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
			this->checkedListBox2->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &信号源控制::checkedListBox2_ItemCheck);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(34, 269);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 26);
			this->label8->TabIndex = 30;
			this->label8->Text = L"单位:";
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
			this->checkedListBox1->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &信号源控制::checkedListBox1_ItemCheck);
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &信号源控制::checkedListBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(278, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 26);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Hz";
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
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(34, 157);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 26);
			this->label6->TabIndex = 26;
			this->label6->Text = L"频率:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(278, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 26);
			this->label3->TabIndex = 25;
			this->label3->Text = L"KHz";
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
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(34, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 26);
			this->label4->TabIndex = 23;
			this->label4->Text = L"频率:";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(278, 52);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 26);
			this->label7->TabIndex = 22;
			this->label7->Text = L"MHz";
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
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->Location = System::Drawing::Point(148, 370);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 30);
			this->button14->TabIndex = 18;
			this->button14->Text = L"锁定";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &信号源控制::button14_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(34, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"频率:";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(330, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"信号源控制";
			// 
			// 信号源控制
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 536);
			this->Controls->Add(this->panel1);
			this->Name = L"信号源控制";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"信号源控制";
			this->Load += gcnew System::EventHandler(this, &信号源控制::信号源控制_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button14->Text == "锁定") {
		button14->Text = "解锁";
		SerialControlSource::FG_Lock();
	}
	else {
		button14->Text = "锁定";
		SerialControlSource::FG_UnLock();
	}
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {



}

private: System::Void checkedListBox1_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
	for (int i = 0; i < checkedListBox1->Items->Count; i++)
	{
		if (i == e->Index) {
		}
		else {
			checkedListBox1->SetItemCheckState(i, CheckState::Unchecked);
		}
	}
}

private: System::Void checkedListBox2_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
	for (int i = 0; i < checkedListBox2->Items->Count; i++)
	{
		if (i == e->Index) {
		}
		else {
			checkedListBox2->SetItemCheckState(i, CheckState::Unchecked);
		}
	}
}
private: System::Void 信号源控制_Load(System::Object^  sender, System::EventArgs^  e) {
	LoadFormat();
}
private: System::Void panel1_Click(System::Object^  sender, System::EventArgs^  e) {

	LoadFormat();
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

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadFormat();
	int Duty = Convert::ToInt32(textBoxDuty->Text);
	(gcnew 扫频参数设置(Duty,getWaverType()))->ShowDialog();
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

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadFormat();
	int MHz = Convert::ToInt32(textBoxMHz->Text);
	int KHz = Convert::ToInt32(textBoxKHz->Text);
	int Hz = Convert::ToSingle(textBoxHz->Text) *100;
	int Duty = Convert::ToInt32(textBoxDuty->Text);
	SerialControlSource::FG_Confirm(getWaverType(), MHz, KHz,Hz, Duty);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadFormat();
	int Sweep = Convert::ToInt32(textBoxSweep->Text);
	if (button3->Text == "启动") {
		button3->Text = "暂停";
		SerialControlSource::FG_F_Run(Sweep);
	}
	else {
		button3->Text = "启动";
		SerialControlSource::FG_F_Stop(Sweep);
	}
}
};
}
