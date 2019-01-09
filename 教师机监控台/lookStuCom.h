#pragma once
#include "tool.h"
#include "LongConnectServ.h"
namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// lookStuCom 摘要
	/// </summary>
	public ref class lookStuCom : public System::Windows::Forms::Form
	{
	public:
		lookStuCom(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((unsigned char)(134)));
			StartThreadCallTeacher();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~lookStuCom()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  停止实验ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  恢复实验ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  强制提交成绩ToolStripMenuItem;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ListView^  listView1;
	private: 日志控件::UserControl1^  userLog;

	private: System::Windows::Forms::Label^  label1;













	private: System::ComponentModel::IContainer^  components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(lookStuCom::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->停止实验ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->恢复实验ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->强制提交成绩ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->userLog = (gcnew 日志控件::UserControl1());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->imageList1->Images->SetKeyName(0, L"电脑.png");
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(159, 641);
			this->panel2->TabIndex = 2;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &lookStuCom::panel2_Paint);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(0, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"导入学生列表";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &lookStuCom::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(0, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"刷新";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &lookStuCom::button1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->停止实验ToolStripMenuItem,
					this->恢复实验ToolStripMenuItem, this->强制提交成绩ToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(169, 76);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &lookStuCom::contextMenuStrip1_Opening);
			// 
			// 停止实验ToolStripMenuItem
			// 
			this->停止实验ToolStripMenuItem->Name = L"停止实验ToolStripMenuItem";
			this->停止实验ToolStripMenuItem->Size = System::Drawing::Size(168, 24);
			this->停止实验ToolStripMenuItem->Text = L"停止实验";
			this->停止实验ToolStripMenuItem->Click += gcnew System::EventHandler(this, &lookStuCom::停止实验ToolStripMenuItem_Click);
			// 
			// 恢复实验ToolStripMenuItem
			// 
			this->恢复实验ToolStripMenuItem->Name = L"恢复实验ToolStripMenuItem";
			this->恢复实验ToolStripMenuItem->Size = System::Drawing::Size(168, 24);
			this->恢复实验ToolStripMenuItem->Text = L"恢复实验";
			this->恢复实验ToolStripMenuItem->Click += gcnew System::EventHandler(this, &lookStuCom::恢复实验ToolStripMenuItem_Click);
			// 
			// 强制提交成绩ToolStripMenuItem
			// 
			this->强制提交成绩ToolStripMenuItem->Name = L"强制提交成绩ToolStripMenuItem";
			this->强制提交成绩ToolStripMenuItem->Size = System::Drawing::Size(168, 24);
			this->强制提交成绩ToolStripMenuItem->Text = L"强制提交成绩";
			this->强制提交成绩ToolStripMenuItem->Click += gcnew System::EventHandler(this, &lookStuCom::强制提交成绩ToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->listView1);
			this->panel1->Controls->Add(this->userLog);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(159, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(778, 641);
			this->panel1->TabIndex = 3;
			// 
			// userLog
			// 
			this->userLog->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->userLog->Location = System::Drawing::Point(0, 329);
			this->userLog->Name = L"userLog";
			this->userLog->Size = System::Drawing::Size(778, 312);
			this->userLog->TabIndex = 2;
			// 
			// listView1
			// 
			this->listView1->ContextMenuStrip = this->contextMenuStrip1;
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->LargeImageList = this->imageList1;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(778, 329);
			this->listView1->SmallImageList = this->imageList1;
			this->listView1->StateImageList = this->imageList1;
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(6, 329);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"学生求助信息";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lookStuCom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(937, 641);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"lookStuCom";
			this->Text = L"查看学生电脑";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &lookStuCom::lookStuCom_FormClosed);
			this->Load += gcnew System::EventHandler(this, &lookStuCom::lookStuCom_Load);
			this->panel2->ResumeLayout(false);
			this->contextMenuStrip1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lookStuCom_Load(System::Object^  sender, System::EventArgs^  e) {
		ComputerLoad();
	}
			 void GetComputers();
			 void ShowLight() {
			 
			 }
			 Thread ^ t_CallTeacher;
			 void StartThreadCallTeacher();
			 void RecvCallTeacherMessage();
			 Mutex ^mutex = gcnew Mutex;
			 void GetGetLANIps();
			 void ComputerLoad();
			 void SearchComLoad();
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	ComputerLoad();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//ComLoad();
}
		 void SearchLANIps();

private: System::Void listView1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedItems->Count > 0) {
		TrialStatus_s tss;
		lcs.FindCominfo(T_to_string(listView1->SelectedItems[0]->Name), tss);
		lcs.SendCmdGetNowTrial(tss.s);
		//(gcnew 查看学生正在做的实验(tss.s))->ShowDialog();
	}
}
private: System::Void lookStuCom_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

}
private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void 停止实验ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedItems->Count > 0) {
		TrialStatus_s tss;
		lcs.FindCominfo(T_to_string(listView1->SelectedItems[0]->Name), tss);
		lcs.SendCmdStopTrial(tss.s);
		//(gcnew 查看学生正在做的实验(tss.s))->ShowDialog();
	}
}
private: System::Void 恢复实验ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedItems->Count > 0) {
		TrialStatus_s tss;
		lcs.FindCominfo(T_to_string(listView1->SelectedItems[0]->Name), tss);
		lcs.SendCmdRecoverTrial(tss.s);
		//(gcnew 查看学生正在做的实验(tss.s))->ShowDialog();
	}
}
private: System::Void 强制提交成绩ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedItems->Count > 0) {
		TrialStatus_s tss;
		lcs.FindCominfo(T_to_string(listView1->SelectedItems[0]->Name), tss);
		lcs.SendCmdForceCommitTrial(tss.s);
	}
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	folderBrowserDialog1->SelectedPath = "E:\\clr中腾\\教师机监控台\\Release\\学生信息\\"; 
	System::Windows::Forms::DialogResult d=  folderBrowserDialog1->ShowDialog();
	if (d == ::DialogResult::OK) {
		MessageBox::Show("选定的学生目录:\n"+folderBrowserDialog1->SelectedPath);
		lcs.GetStudents(T_to_string(folderBrowserDialog1->SelectedPath));
		MessageBox::Show("导入成功");
	}
}
};
}
 