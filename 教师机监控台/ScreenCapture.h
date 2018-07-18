#pragma once
#include "tool.h"
namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::Threading;
	/// <summary>
	/// ScreenCapture 摘要
	/// </summary>
	public ref class ScreenCapture : public System::Windows::Forms::Form
	{
	public:
		ScreenCapture(SOCKET &s)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			open();
			lcs.SendCmdCapture(s);
			this->s = &s;
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	private: System::Windows::Forms::Button^  button3;
	public:
		SOCKET *s;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~ScreenCapture()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ScreenCapture::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(2, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(487, 367);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ScreenCapture::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"强制停止实验";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ScreenCapture::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(327, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 45);
			this->button2->TabIndex = 2;
			this->button2->Text = L"强制交卷";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ScreenCapture::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(185, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"恢复实验";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ScreenCapture::button3_Click);
			// 
			// ScreenCapture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1529, 704);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ScreenCapture";
			this->Text = L"画面监控";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ScreenCapture::ScreenCapture_FormClosed);
			this->Load += gcnew System::EventHandler(this, &ScreenCapture::ScreenCapture_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Socket ^socketwatch;
		void open();
		void watchconnecting();
		void close();
		void RecvHandle(Object ^c);

		bool C = true;
	private: System::Void ScreenCapture_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ScreenCapture_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		close();
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	lcs.SendCmdStopTrial(*s);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	lcs.SendCmdRecoverTrial(*s);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	lcs.SendCmdForceCommitTrial(*s);
}
};
}
