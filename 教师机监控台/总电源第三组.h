#pragma once

namespace ��ʦ�����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace WeifenLuo::WinFormsUI::Docking;
	/// <summary>
	/// �ܵ�Դ������ ժҪ
	/// </summary>
	public ref class �ܵ�Դ������ : public DockContent
	{
	public:
		�ܵ�Դ������(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~�ܵ�Դ������()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
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
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->panel1->Location = System::Drawing::Point(22, 53);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(665, 327);
			this->panel1->TabIndex = 3;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button12->Location = System::Drawing::Point(268, 273);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 30);
			this->button12->TabIndex = 20;
			this->button12->Text = L"����";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button13->Location = System::Drawing::Point(148, 272);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 30);
			this->button13->TabIndex = 19;
			this->button13->Text = L"����";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button14->Location = System::Drawing::Point(510, 216);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 30);
			this->button14->TabIndex = 18;
			this->button14->Text = L"����";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button15->Location = System::Drawing::Point(390, 215);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 30);
			this->button15->TabIndex = 17;
			this->button15->Text = L"����";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button16->Location = System::Drawing::Point(268, 215);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 30);
			this->button16->TabIndex = 16;
			this->button16->Text = L"����";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button17->Location = System::Drawing::Point(148, 214);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 30);
			this->button17->TabIndex = 15;
			this->button17->Text = L"����";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button17_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(510, 153);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 30);
			this->button6->TabIndex = 14;
			this->button6->Text = L"����";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(390, 152);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 30);
			this->button7->TabIndex = 13;
			this->button7->Text = L"����";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button8->Location = System::Drawing::Point(268, 152);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 30);
			this->button8->TabIndex = 12;
			this->button8->Text = L"����";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button9->Location = System::Drawing::Point(148, 151);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 30);
			this->button9->TabIndex = 11;
			this->button9->Text = L"����";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button9_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(510, 95);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 30);
			this->button4->TabIndex = 10;
			this->button4->Text = L"����";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(390, 94);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 30);
			this->button5->TabIndex = 9;
			this->button5->Text = L"����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button5_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(268, 94);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 8;
			this->button3->Text = L"����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(148, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 7;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button2_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(34, 274);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 26);
			this->label5->TabIndex = 6;
			this->label5->Text = L"41-42";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(36, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 26);
			this->label6->TabIndex = 5;
			this->label6->Text = L"37-40";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(36, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 26);
			this->label4->TabIndex = 4;
			this->label4->Text = L"33-36";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(36, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 26);
			this->label3->TabIndex = 3;
			this->label3->Text = L"29-32";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(148, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &�ܵ�Դ������::button1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(34, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�ܿ���";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(286, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������";
			// 
			// �ܵ�Դ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 418);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->Name = L"�ܵ�Դ������";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�ܵ�Դ������";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (button1->Text == "����") {
			button1->Text = "�ر�";
			SerialControlSource::GS_Open(0x35);
		}
		else {
			button1->Text = "����";
			SerialControlSource::GS_Close(0x35);
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button2->Text == "����") {
		button2->Text = "�ر�";
		SerialControlSource::GS_Open(29);
	}
	else {
		button2->Text = "����";
		SerialControlSource::GS_Close(29);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button3->Text == "����") {
		button3->Text = "�ر�";
		SerialControlSource::GS_Open(30);
	}
	else {
		button3->Text = "����";
		SerialControlSource::GS_Close(30);
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button5->Text == "����") {
		button5->Text = "�ر�";
		SerialControlSource::GS_Open(31);
	}
	else {
		button5->Text = "����";
		SerialControlSource::GS_Close(31);
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button4->Text == "����") {
		button4->Text = "�ر�";
		SerialControlSource::GS_Open(32);
	}
	else {
		button4->Text = "����";
		SerialControlSource::GS_Close(32);
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button9->Text == "����") {
		button9->Text = "�ر�";
		SerialControlSource::GS_Open(33);
	}
	else {
		button9->Text = "����";
		SerialControlSource::GS_Close(33);
	}

}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button8->Text == "����") {
		button8->Text = "�ر�";
		SerialControlSource::GS_Open(34);
	}
	else {
		button8->Text = "����";
		SerialControlSource::GS_Close(34);
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button7->Text == "����") {
		button7->Text = "�ر�";
		SerialControlSource::GS_Open(35);
	}
	else {
		button7->Text = "����";
		SerialControlSource::GS_Close(35);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button8->Text == "����") {
		button8->Text = "�ر�";
		SerialControlSource::GS_Open(36);
	}
	else {
		button8->Text = "����";
		SerialControlSource::GS_Close(36);
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button17->Text == "����") {
		button17->Text = "�ر�";
		SerialControlSource::GS_Open(37);
	}
	else {
		button17->Text = "����";
		SerialControlSource::GS_Close(37);
	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button16->Text == "����") {
		button16->Text = "�ر�";
		SerialControlSource::GS_Open(38);
	}
	else {
		button16->Text = "����";
		SerialControlSource::GS_Close(38);
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button15->Text == "����") {
		button15->Text = "�ر�";
		SerialControlSource::GS_Open(39);
	}
	else {
		button15->Text = "����";
		SerialControlSource::GS_Close(39);
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button14->Text == "����") {
		button14->Text = "�ر�";
		SerialControlSource::GS_Open(40);
	}
	else {
		button14->Text = "����";
		SerialControlSource::GS_Close(40);
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button13->Text == "����") {
		button13->Text = "�ر�";
		SerialControlSource::GS_Open(41);
	}
	else {
		button13->Text = "����";
		SerialControlSource::GS_Close(41);
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (button12->Text == "����") {
		button12->Text = "�ر�";
		SerialControlSource::GS_Open(42);
	}
	else {
		button12->Text = "����";
		SerialControlSource::GS_Close(42);
	}
}
};
}
