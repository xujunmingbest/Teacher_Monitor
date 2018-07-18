#pragma once

namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Login 摘要
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(bool &Success)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((unsigned char)(134)));

			S = &Success;
			*S = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		bool *S ;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(75, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"用户名";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(96, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"密码";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(203, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 25);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(203, 169);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 25);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(293, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"登入";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(100, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 310);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"登入界面";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {



	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "" && textBox2->Text == "") {
		*S = true;
		this->Close();
	}
	else {
		MessageBox::Show("登入失败");
		*S = false;
	}
}
};
}
