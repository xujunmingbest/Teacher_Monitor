#pragma once

namespace ��ʦ�����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// һ�׵�·����Ӧ���Լ�� ժҪ
	/// </summary>
	public ref class һ�׵�·����Ӧ���Լ�� : public System::Windows::Forms::Form
	{
	public:
		һ�׵�·����Ӧ���Լ��(void)
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
		~һ�׵�·����Ӧ���Լ��()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox2;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBoxtrial��;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBoxTrial3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::TextBox^  textBox����;
	private: System::Windows::Forms::Button^  button81;
	private: System::Windows::Forms::Label^  label105;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(һ�׵�·����Ӧ���Լ��::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxtrial�� = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTrial1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial2 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTrial3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->textBox���� = (gcnew System::Windows::Forms::TextBox());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1))->BeginInit();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBoxtrial��);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->pictureBoxTrial1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(12, 1321);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1296, 755);
			this->groupBox2->TabIndex = 89;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ʵ������һ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(1107, 664);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 33);
			this->button1->TabIndex = 92;
			this->button1->Text = L"��ȡ����";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBoxtrial��
			// 
			this->textBoxtrial��->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxtrial��->Location = System::Drawing::Point(199, 719);
			this->textBoxtrial��->Name = L"textBoxtrial��";
			this->textBoxtrial��->Size = System::Drawing::Size(284, 30);
			this->textBoxtrial��->TabIndex = 91;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(68, 719);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 25);
			this->label3->TabIndex = 90;
			this->label3->Text = L"ʱ�䳣����";
			// 
			// pictureBoxTrial1
			// 
			this->pictureBoxTrial1->Location = System::Drawing::Point(74, 199);
			this->pictureBoxTrial1->Name = L"pictureBoxTrial1";
			this->pictureBoxTrial1->Size = System::Drawing::Size(1014, 498);
			this->pictureBoxTrial1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial1->TabIndex = 89;
			this->pictureBoxTrial1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(33, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1100, 34);
			this->label2->TabIndex = 88;
			this->label2->Text = L"    �����ظı����ֵ�����ֵ�����Եع۲����Ӧ��Ӱ�죬��¼�۲쵽������";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(33, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1100, 111);
			this->label19->TabIndex = 87;
			this->label19->Text = resources->GetString(L"label19.Text");
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->pictureBox2);
			this->groupBox8->Controls->Add(this->pictureBox3);
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Controls->Add(this->pictureBox1);
			this->groupBox8->Controls->Add(this->label37);
			this->groupBox8->Controls->Add(this->label38);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(12, 12);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1296, 1290);
			this->groupBox8->TabIndex = 90;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"һ�׵�·����Ӧ����ʵ������";
			this->groupBox8->Enter += gcnew System::EventHandler(this, &һ�׵�·����Ӧ���Լ��::groupBox8_Enter);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(212, 963);
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
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(795, 441);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(607, 467);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ͼ6-3";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(119, 186);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1000, 266);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ���Լ��::pictureBox1_Click);
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(24, 54);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(913, 64);
			this->label37->TabIndex = 0;
			this->label37->Text = L"    ʵ��ǰ��������ߣ�ȷ���Ǳ�������ȷ�����̣����Խ�����ȷ���������ͨ�磻 \r\n\r\n    ��Դ���˲������߶�·������Դ����ָʾ������˵�����أ���ϵ����"
				L"·��";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(70, 128);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(912, 26);
			this->label38->TabIndex = 7;
			this->label38->Text = L"ʵ����·��Ľṹ��ͼ6��3��ʾ������R��CԪ���Ĳ��ּ�����ֵ�������ص�ͨ��λ�õȵȡ�";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->pictureBoxTrial2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 2094);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1296, 655);
			this->groupBox1->TabIndex = 91;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ʵ�����ݶ�";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(1096, 601);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 33);
			this->button2->TabIndex = 92;
			this->button2->Text = L"��ȡ����";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// pictureBoxTrial2
			// 
			this->pictureBoxTrial2->Location = System::Drawing::Point(62, 107);
			this->pictureBoxTrial2->Name = L"pictureBoxTrial2";
			this->pictureBoxTrial2->Size = System::Drawing::Size(1014, 527);
			this->pictureBoxTrial2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial2->TabIndex = 89;
			this->pictureBoxTrial2->TabStop = false;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(33, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1100, 52);
			this->label6->TabIndex = 87;
			this->label6->Text = L"    2����R��10K����C��0.1��F��K1��K16�պϣ������Ͽ������۲첢�����Ӧ�Ĳ��Σ���������Cֵ֮�����Եع۲����Ӧ��Ӱ�졣";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->pictureBoxTrial3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(12, 2765);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1296, 672);
			this->groupBox3->TabIndex = 92;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"ʵ��������";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(1096, 621);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 33);
			this->button3->TabIndex = 92;
			this->button3->Text = L"��ȡ����";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// pictureBoxTrial3
			// 
			this->pictureBoxTrial3->Location = System::Drawing::Point(72, 149);
			this->pictureBoxTrial3->Name = L"pictureBoxTrial3";
			this->pictureBoxTrial3->Size = System::Drawing::Size(1014, 505);
			this->pictureBoxTrial3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTrial3->TabIndex = 89;
			this->pictureBoxTrial3->TabStop = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(33, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1100, 95);
			this->label4->TabIndex = 87;
			this->label4->Text = L"    3��ѡ��̬���ϵ�R��CԪ���������ͼ6-2��a����ʾ��΢�ֵ�·����C��0.01��F��R��100������K4��K6�պϣ������Ͽ���\r\n    ��ͬ���ķ�����"
				L"���źţ�Um��2V��F =1KHz�������£��۲Ⲣ��漤������Ӧ�Ĳ��Ρ�\r\n����Rֵ֮�����Եع۲����Ӧ��Ӱ�죬������¼����R����1M��ʱ��������������кα���"
				L"�ϵ�����";
			// 
			// label106
			// 
			this->label106->BackColor = System::Drawing::Color::SkyBlue;
			this->label106->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label106->Location = System::Drawing::Point(6, 3526);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(1314, 52);
			this->label106->TabIndex = 187;
			this->label106->Text = L"�������";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox����
			// 
			this->textBox����->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox����->Location = System::Drawing::Point(199, 3450);
			this->textBox����->Name = L"textBox����";
			this->textBox����->Size = System::Drawing::Size(1002, 28);
			this->textBox����->TabIndex = 185;
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(560, 3484);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(195, 39);
			this->button81->TabIndex = 186;
			this->button81->Text = L"�ɼ���ɲ��ϴ�";
			this->button81->UseVisualStyleBackColor = true;
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label105->ForeColor = System::Drawing::Color::Black;
			this->label105->Location = System::Drawing::Point(12, 3450);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(95, 25);
			this->label105->TabIndex = 184;
			this->label105->Text = L"ʵ�����";
			// 
			// һ�׵�·����Ӧ���Լ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1354, 998);
			this->Controls->Add(this->label106);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox����);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->label105);
			this->Name = L"һ�׵�·����Ӧ���Լ��";
			this->Text = L"һ�׵�·����Ӧ���Լ��";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial1))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTrial3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public :void LoadData(ST_һ�׵�·����Ӧ���� &d);
	private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
