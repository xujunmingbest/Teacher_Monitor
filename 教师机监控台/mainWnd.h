#pragma once
#include "tool.h"
#include "成绩查询.h"
#include "无线控制.h"
namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// mainWnd 摘要
	/// </summary>
	public ref class mainWnd : public System::Windows::Forms::Form
	{
	public:
		mainWnd(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((unsigned char)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~mainWnd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  查看学生电脑ToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::ToolStripMenuItem^  查询ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  无线电源控制ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainWnd::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->查看学生电脑ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查询ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->无线电源控制ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::Color::Silver;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem4,
					this->查看学生电脑ToolStripMenuItem, this->toolStripMenuItem1, this->查询ToolStripMenuItem, this->toolStripMenuItem2, this->无线电源控制ToolStripMenuItem,
					this->toolStripMenuItem3
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1220, 79);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 查看学生电脑ToolStripMenuItem
			// 
			this->查看学生电脑ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"查看学生电脑ToolStripMenuItem.Image")));
			this->查看学生电脑ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->查看学生电脑ToolStripMenuItem->Name = L"查看学生电脑ToolStripMenuItem";
			this->查看学生电脑ToolStripMenuItem->Size = System::Drawing::Size(176, 75);
			this->查看学生电脑ToolStripMenuItem->Text = L"查看学生电脑";
			this->查看学生电脑ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::查看学生电脑ToolStripMenuItem_Click);
			// 
			// 查询ToolStripMenuItem
			// 
			this->查询ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"查询ToolStripMenuItem.Image")));
			this->查询ToolStripMenuItem->Name = L"查询ToolStripMenuItem";
			this->查询ToolStripMenuItem->Size = System::Drawing::Size(181, 75);
			this->查询ToolStripMenuItem->Text = L"查询历史学生成绩";
			this->查询ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::查询ToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 79);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1220, 626);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainWnd::panel1_Paint);
			// 
			// 无线电源控制ToolStripMenuItem
			// 
			this->无线电源控制ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"无线电源控制ToolStripMenuItem.Image")));
			this->无线电源控制ToolStripMenuItem->Name = L"无线电源控制ToolStripMenuItem";
			this->无线电源控制ToolStripMenuItem->Size = System::Drawing::Size(151, 75);
			this->无线电源控制ToolStripMenuItem->Text = L"无线电源控制";
			this->无线电源控制ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::无线电源控制ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(25, 75);
			this->toolStripMenuItem1->Text = L"|";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(25, 75);
			this->toolStripMenuItem2->Text = L"|";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(25, 75);
			this->toolStripMenuItem3->Text = L"|";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(25, 75);
			this->toolStripMenuItem4->Text = L"|";
			// 
			// mainWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1220, 705);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainWnd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"教师监控";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void 查看学生电脑ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		open查看学生电脑();
	}

			 Control^ GetWindowsChild(String ^FormName);
			 void open查看学生电脑();
			 void CloseAllMidchild();
			 void open成绩接收();
			 void openTrialReport(string &FileName);
			 void openTodayTrials();
			 void open成绩查询();
			 void open无线电源控制();
	private: System::Void 退出ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		exit(-1);
	}
private: System::Void 数据接收控制ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	open成绩接收();
}
private: System::Void 查询ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	open成绩查询();
	//openTrialReport(fileName);
}
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void 今天提交的实验ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	openTodayTrials();
}
private: System::Void 无线电源控制ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	open无线电源控制();
}
};
}
