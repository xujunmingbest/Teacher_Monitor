#pragma once
#include "tool.h"
#include "�ɼ���ѯ.h"
#include "���߿���.h"
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
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ߵ�Դ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;




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
			this->���ߵ�Դ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->�鿴ѧ������ToolStripMenuItem, this->toolStripMenuItem1, this->��ѯToolStripMenuItem, this->toolStripMenuItem2, this->���ߵ�Դ����ToolStripMenuItem,
					this->toolStripMenuItem3
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
			// ���ߵ�Դ����ToolStripMenuItem
			// 
			this->���ߵ�Դ����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"���ߵ�Դ����ToolStripMenuItem.Image")));
			this->���ߵ�Դ����ToolStripMenuItem->Name = L"���ߵ�Դ����ToolStripMenuItem";
			this->���ߵ�Դ����ToolStripMenuItem->Size = System::Drawing::Size(151, 75);
			this->���ߵ�Դ����ToolStripMenuItem->Text = L"���ߵ�Դ����";
			this->���ߵ�Դ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::���ߵ�Դ����ToolStripMenuItem_Click);
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

			 Control^ GetWindowsChild(String ^FormName);
			 void open�鿴ѧ������();
			 void CloseAllMidchild();
			 void open�ɼ�����();
			 void openTrialReport(string &FileName);
			 void openTodayTrials();
			 void open�ɼ���ѯ();
			 void open���ߵ�Դ����();
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
private: System::Void ���ߵ�Դ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	open���ߵ�Դ����();
}
};
}
