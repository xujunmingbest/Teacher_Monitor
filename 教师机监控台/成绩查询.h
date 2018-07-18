#pragma once
#include <vector>
#include "tool.h"
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
	/// 成绩查询 摘要
	/// </summary>
	public ref class 成绩查询 : public System::Windows::Forms::Form
	{
	public:
		成绩查询()
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		Mutex ^ mutex = gcnew Mutex;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

	public:
	private: System::Windows::Forms::Label^  label4;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~成绩查询()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(成绩查询::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->statusStrip1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(406, 866);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &成绩查询::panel1_Paint);
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(20, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(327, 39);
			this->label5->TabIndex = 10;
			this->label5->Text = L"查询日期";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(20, 258);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(326, 25);
			this->textBox2->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(20, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(327, 39);
			this->label4->TabIndex = 8;
			this->label4->Text = L"班级";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 837);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(402, 25);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(39, 20);
			this->toolStripStatusLabel1->Text = L"就绪";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(129, 538);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 53);
			this->button1->TabIndex = 6;
			this->button1->Text = L"查询";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &成绩查询::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(20, 470);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(327, 23);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &成绩查询::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 370);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(326, 25);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(20, 419);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(327, 39);
			this->label3->TabIndex = 2;
			this->label3->Text = L"查询实验名称";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(20, 328);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(327, 39);
			this->label2->TabIndex = 1;
			this->label2->Text = L"学生姓名";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(3, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(345, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"查询条件";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(406, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(836, 866);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &成绩查询::listView1_SelectedIndexChanged);
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &成绩查询::listView1_DoubleClick);
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
			// columnHeader7
			// 
			this->columnHeader7->Text = L"状态";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(92, 175);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(188, 25);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// 成绩查询
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1242, 866);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"成绩查询";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"成绩查询";
			this->Load += gcnew System::EventHandler(this, &成绩查询::成绩查询_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


			 void LoadAllTrial();
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void 成绩查询_Load(System::Object^  sender, System::EventArgs^  e) {
	LoadAllTrial();
}


private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedItem == nullptr) return;
	toolStripStatusLabel1->Text = comboBox1->SelectedItem->ToString();
}
		 void LoadListBox1();
		 void GetCondition(vector<string> &contitions);
		 void GetDataByCondition(vector<string> &files, vector<string> &contitions);

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadListBox1();
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 void OpenTrial(string &TrialName);
private: System::Void listView1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	if (listView1->SelectedItems->Count > 0) {
		OpenTrial(T_to_string(listView1->SelectedItems[0]->Name));
	}
}

};
}
