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
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((unsigned char)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}
		Mutex ^ mutex = gcnew Mutex;

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
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;



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
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
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
			this->panel1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->statusStrip1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->comboBox1);
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
			// comboBox3
			// 
			this->comboBox3->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(27, 355);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(327, 28);
			this->comboBox3->TabIndex = 13;
			// 
			// comboBox2
			// 
			this->comboBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(27, 251);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(327, 28);
			this->comboBox2->TabIndex = 12;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &成绩查询::comboBox2_SelectedIndexChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dateTimePicker1->Location = System::Drawing::Point(27, 141);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(328, 30);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(27, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(327, 39);
			this->label5->TabIndex = 10;
			this->label5->Text = L"查询日期";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(27, 190);
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
			this->button1->Location = System::Drawing::Point(136, 531);
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
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(27, 463);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(327, 28);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &成绩查询::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(27, 409);
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
			this->label2->Location = System::Drawing::Point(27, 303);
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
			this->label1->Location = System::Drawing::Point(10, 22);
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
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(406, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(836, 866);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &成绩查询::listView1_ColumnClick);
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
	try {
		LoadListBox1();
	}
	catch (Exception ^e) {
		Console::WriteLine(e->Message);
	}
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


		 void LoadcomboBox3(int index);
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->SelectedIndex >= 0) {
		LoadcomboBox3(comboBox2->SelectedIndex);
	}
}

		 public :ref class ListViewSort :IComparer
		 {
		 private :int col;
		 private: bool descK;
		 public: ListViewSort()
			 {
				 col = 0;
			 }
		 public: ListViewSort(int column, bool Desc)
			 {
				 descK = Desc;
				 col = column; //当前列,0,1,2...,参数由ListView控件的ColumnClick事件传递 
			 }
		 public: int Compare(Object^ x, Object^ y) override
			 {
				 int tempInt = String::Compare(((ListViewItem^)x)->SubItems[col]->Text, ((ListViewItem^)y)->SubItems[col]->Text);
				 if (descK) return -tempInt;
				 else return tempInt;
			 }
		 };

private: System::Void listView1_ColumnClick(System::Object^  sender, System::Windows::Forms::ColumnClickEventArgs^  e) {
	static bool sortType = true;
	try {
		if (e->Column >= 0 ) {
			sortType = !sortType;
			this->listView1->ListViewItemSorter = gcnew ListViewSort(e->Column, sortType);
			this->listView1->Sort();//对列表进行自定义排序  
		}
	}
	catch (Exception ^e) {
		Console::WriteLine(e->Message);
	}
}
};
}
