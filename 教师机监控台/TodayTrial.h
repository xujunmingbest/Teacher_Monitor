#pragma once

#include "E:/clr中腾/电工电路试验台/电工电路试验台/tool/gradeSubmit.h"
#include "元件伏安特性测试.h"
#include <windows.h>
#include <vector>
using namespace std;


namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// TodayTrial 摘要
	/// </summary>
	public ref class TodayTrial : public System::Windows::Forms::Form
	{
	public:
		TodayTrial(void)
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
		~TodayTrial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  刷新ToolStripMenuItem;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->刷新ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7
			});
			this->listView1->ContextMenuStrip = this->contextMenuStrip1;
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(956, 505);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &TodayTrial::listView1_SelectedIndexChanged);
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &TodayTrial::listView1_DoubleClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"班级";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"姓名1";
			this->columnHeader2->Width = 75;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"姓名2";
			this->columnHeader3->Width = 84;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"实验名称";
			this->columnHeader4->Width = 97;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"交卷时间";
			this->columnHeader5->Width = 118;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"分数";
			this->columnHeader6->Width = 86;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->刷新ToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(109, 28);
			// 
			// 刷新ToolStripMenuItem
			// 
			this->刷新ToolStripMenuItem->Name = L"刷新ToolStripMenuItem";
			this->刷新ToolStripMenuItem->Size = System::Drawing::Size(108, 24);
			this->刷新ToolStripMenuItem->Text = L"刷新";
			this->刷新ToolStripMenuItem->Click += gcnew System::EventHandler(this, &TodayTrial::刷新ToolStripMenuItem_Click);
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"状态";
			// 
			// TodayTrial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(956, 505);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"TodayTrial";
			this->Text = L"查看今天做的实验";
			this->Load += gcnew System::EventHandler(this, &TodayTrial::TodayTrial_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		void LoadTodayTrial();
		bool _GetAllFiles(string& Path, vector<string> &FData);
		void LoadTodayFiles();
		 void OpenTrial(string &TrialName);
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void TodayTrial_Load(System::Object^  sender, System::EventArgs^  e) {
	LoadTodayTrial();
}
private: System::Void listView1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedItems->Count > 0) {
		OpenTrial(T_to_string(listView1->SelectedItems[0]->Name));
	}
}
		 Mutex^mutex = gcnew Mutex;
private: System::Void 刷新ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadTodayTrial();
}
};
}
