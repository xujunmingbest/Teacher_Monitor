#pragma once
#include "E:/c++/libsocket/libsocket/libsocket.h"
#include "tool.h"
#include "���ʵ�����.h"
namespace ��ʦ�����̨ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// �鿴ѧ����������ʵ�� ժҪ
	/// </summary>
	public ref class �鿴ѧ����������ʵ�� : public System::Windows::Forms::Form
	{
	public:
		�鿴ѧ����������ʵ��(SOCKET &s)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			lcs.SendCmdGetNowTrial(s);
			this->s = &s;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}
		SOCKET *s;
	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~�鿴ѧ����������ʵ��()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(�鿴ѧ����������ʵ��::typeid));
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
			this->button3->Text = L"�ָ�ʵ��";
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
			this->button2->Text = L"ǿ�ƽ���";
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
			this->button1->Text = L"ǿ��ֹͣʵ��";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(0, 80);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1259, 817);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &�鿴ѧ����������ʵ��::panel2_Paint);
			// 
			// �鿴ѧ����������ʵ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1259, 878);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->IsMdiContainer = true;
			this->Name = L"�鿴ѧ����������ʵ��";
			this->Text = L"�鿴ѧ����������ʵ��";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		void CloseAllMidchild();
		Form^ GetWindowsChild(String ^FormName);
		public:  Ԫ���������Լ��^ OpenԪ���������Լ��();
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
};
}
