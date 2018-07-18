#pragma once
#include "E:/c++/libsocket/libsocket/libsocket.h"
#include "tool.h"
#include "监控实验汇总.h"
namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 查看学生正在做的实验 摘要
	/// </summary>
	public ref class 查看学生正在做的实验 : public System::Windows::Forms::Form
	{
	public:
		查看学生正在做的实验(SOCKET &s)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			lcs.SendCmdGetNowTrial(s);
			this->s = &s;
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		SOCKET *s;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~查看学生正在做的实验()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(查看学生正在做的实验::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1259, 61);
			this->panel1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(184, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 45);
			this->button3->TabIndex = 6;
			this->button3->Text = L"恢复实验";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(326, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 45);
			this->button2->TabIndex = 5;
			this->button2->Text = L"强制交卷";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(12, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 45);
			this->button1->TabIndex = 4;
			this->button1->Text = L"强制停止实验";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(0, 80);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1259, 817);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &查看学生正在做的实验::panel2_Paint);
			// 
			// 查看学生正在做的实验
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1259, 878);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->IsMdiContainer = true;
			this->Name = L"查看学生正在做的实验";
			this->Text = L"查看学生正在做的实验";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		void CloseAllMidchild();
		Form^ GetWindowsChild(String ^FormName);
		public:  元件伏安特性监控^ Open元件伏安特性监控();
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
};
}
