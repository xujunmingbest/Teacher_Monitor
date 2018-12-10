#pragma once

namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace WeifenLuo::WinFormsUI::Docking;

	/// <summary>
	/// 总电源第一组 摘要
	/// </summary>
	public ref class 总电源第一组 : public DockContent
	{
	public:
		总电源第一组(void)
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
		~总电源第一组()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button3;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(231, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"第一组";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 22);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(597, 327);
			this->panel1->TabIndex = 1;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->Location = System::Drawing::Point(236, 271);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 30);
			this->button12->TabIndex = 20;
			this->button12->Text = L"开启";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &总电源第一组::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->Location = System::Drawing::Point(116, 270);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 30);
			this->button13->TabIndex = 19;
			this->button13->Text = L"开启";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &总电源第一组::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->Location = System::Drawing::Point(478, 214);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 30);
			this->button14->TabIndex = 18;
			this->button14->Text = L"开启";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &总电源第一组::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->Location = System::Drawing::Point(358, 213);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 30);
			this->button15->TabIndex = 17;
			this->button15->Text = L"开启";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &总电源第一组::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->Location = System::Drawing::Point(236, 213);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 30);
			this->button16->TabIndex = 16;
			this->button16->Text = L"开启";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &总电源第一组::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->Location = System::Drawing::Point(116, 212);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 30);
			this->button17->TabIndex = 15;
			this->button17->Text = L"开启";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &总电源第一组::button17_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(478, 151);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 30);
			this->button6->TabIndex = 14;
			this->button6->Text = L"开启";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &总电源第一组::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(358, 150);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 30);
			this->button7->TabIndex = 13;
			this->button7->Text = L"开启";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &总电源第一组::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->Location = System::Drawing::Point(236, 150);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 30);
			this->button8->TabIndex = 12;
			this->button8->Text = L"开启";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &总电源第一组::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->Location = System::Drawing::Point(116, 149);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 30);
			this->button9->TabIndex = 11;
			this->button9->Text = L"开启";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &总电源第一组::button9_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(478, 93);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 30);
			this->button4->TabIndex = 10;
			this->button4->Text = L"开启";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &总电源第一组::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(358, 92);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 30);
			this->button5->TabIndex = 9;
			this->button5->Text = L"开启";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &总电源第一组::button5_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(236, 92);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 8;
			this->button3->Text = L"开启";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &总电源第一组::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(116, 91);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 7;
			this->button2->Text = L"开启";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &总电源第一组::button2_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(16, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 26);
			this->label5->TabIndex = 6;
			this->label5->Text = L"13-14";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(27, 213);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 26);
			this->label6->TabIndex = 5;
			this->label6->Text = L"9-12";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(36, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 26);
			this->label4->TabIndex = 4;
			this->label4->Text = L"5-8";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(36, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 26);
			this->label3->TabIndex = 3;
			this->label3->Text = L"1-4";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(162, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"开启";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &总电源第一组::button1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(16, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"总开关";
			// 
			// 总电源第一组
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(647, 367);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->Name = L"总电源第一组";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"总电源第一组";
			this->Load += gcnew System::EventHandler(this, &总电源第一组::总电源第一组_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 总电源第一组_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (button2->Text == "开启"){
			button2->Text = "关闭";
		    SerialControlSource::GS_Open(1);
		}
		else {
			button2->Text = "开启";
			SerialControlSource::GS_Close(1);
		}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button3->Text == "开启") {
		button3->Text = "关闭";
		SerialControlSource::GS_Open(2);
	}
	else {
		button3->Text = "开启";
		SerialControlSource::GS_Close(2);
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button5->Text == "开启") {
		button5->Text = "关闭";
		SerialControlSource::GS_Open(3);
	}
	else {
		button5->Text = "开启";
		SerialControlSource::GS_Close(3);
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button4->Text == "开启") {
		button4->Text = "关闭";
		SerialControlSource::GS_Open(4);
	}
	else {
		button4->Text = "开启";
		SerialControlSource::GS_Close(4);
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button9->Text == "开启") {
		button9->Text = "关闭";
		SerialControlSource::GS_Open(5);
	}
	else {
		button9->Text = "开启";
		SerialControlSource::GS_Close(5);
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button8->Text == "开启") {
		button8->Text = "关闭";
		SerialControlSource::GS_Open(6);
	}
	else {
		button8->Text = "开启";
		SerialControlSource::GS_Close(6);
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button7->Text == "开启") {
		button7->Text = "关闭";
		SerialControlSource::GS_Open(7);
	}
	else {
		button7->Text = "开启";
		SerialControlSource::GS_Close(7);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button6->Text == "开启") {
		button6->Text = "关闭";
		SerialControlSource::GS_Open(8);
	}
	else {
		button6->Text = "开启";
		SerialControlSource::GS_Close(8);
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button17->Text == "开启") {
		button17->Text = "关闭";
		SerialControlSource::GS_Open(9);
	}
	else {
		button17->Text = "开启";
		SerialControlSource::GS_Close(9);
	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button16->Text == "开启") {
		button16->Text = "关闭";
		SerialControlSource::GS_Open(10);
	}
	else {
		button16->Text = "开启";
		SerialControlSource::GS_Close(10);
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button15->Text == "开启") {
		button15->Text = "关闭";
		SerialControlSource::GS_Open(11);
	}
	else {
		button15->Text = "开启";
		SerialControlSource::GS_Close(11);
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button14->Text == "开启") {
		button14->Text = "关闭";
		SerialControlSource::GS_Open(12);
	}
	else {
		button14->Text = "开启";
		SerialControlSource::GS_Close(12);
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button13->Text == "开启") {
		button13->Text = "关闭";
		SerialControlSource::GS_Open(13);
	}
	else {
		button13->Text = "开启";
		SerialControlSource::GS_Close(13);
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button12->Text == "开启") {
		button12->Text = "关闭";
		SerialControlSource::GS_Open(14);
	}
	else {
		button12->Text = "开启";
		SerialControlSource::GS_Close(14);
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button1->Text == "开启") {
		button1->Text = "关闭";
		SerialControlSource::GS_Open(0x33);
	}
	else {
		button1->Text = "开启";
		SerialControlSource::GS_Close(0x33);
	}
}
};
}
