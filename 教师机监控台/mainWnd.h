#pragma once
#include "tool.h"
#include "�ɼ���ѯ.h"
namespace ��ʦ�����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// mainWnd ժҪ
	/// </summary>
	public ref class mainWnd : public System::Windows::Forms::Form
	{
	public:
		mainWnd(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((unsigned char)(134)));

			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
	private: System::Windows::Forms::ToolStripMenuItem^  �鿴ѧ������ToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::ToolStripMenuItem^  ��ѯToolStripMenuItem;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainWnd::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�鿴ѧ������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ѯToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::Color::Silver;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�鿴ѧ������ToolStripMenuItem,
					this->��ѯToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1220, 79);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �鿴ѧ������ToolStripMenuItem
			// 
			this->�鿴ѧ������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�鿴ѧ������ToolStripMenuItem.Image")));
			this->�鿴ѧ������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->�鿴ѧ������ToolStripMenuItem->Name = L"�鿴ѧ������ToolStripMenuItem";
			this->�鿴ѧ������ToolStripMenuItem->Size = System::Drawing::Size(176, 75);
			this->�鿴ѧ������ToolStripMenuItem->Text = L"�鿴ѧ������";
			this->�鿴ѧ������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::�鿴ѧ������ToolStripMenuItem_Click);
			// 
			// ��ѯToolStripMenuItem
			// 
			this->��ѯToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ѯToolStripMenuItem.Image")));
			this->��ѯToolStripMenuItem->Name = L"��ѯToolStripMenuItem";
			this->��ѯToolStripMenuItem->Size = System::Drawing::Size(181, 75);
			this->��ѯToolStripMenuItem->Text = L"��ѯ��ʷѧ���ɼ�";
			this->��ѯToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::��ѯToolStripMenuItem_Click);
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
			this->Text = L"��ʦ���";
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
	private: System::Void �鿴ѧ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		open�鿴ѧ������();
	}

			 bool GetWindowsChild(String ^FormName);
			 void open�鿴ѧ������();
			 void CloseAllMidchild();
			 void open�ɼ�����();
			 void openTrialReport(string &FileName);
			 void openTodayTrials();
			 void open�ɼ���ѯ();
	private: System::Void �˳�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		exit(-1);
	}
private: System::Void ���ݽ��տ���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	open�ɼ�����();
}
private: System::Void ��ѯToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	open�ɼ���ѯ();
	//openTrialReport(fileName);
}
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void �����ύ��ʵ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	openTodayTrials();
}
};
}
