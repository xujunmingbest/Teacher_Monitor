#include "ScreenCapture.h"

using namespace ��ʦ�����̨;


void ScreenCapture::open() {
	socketwatch = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);
	//����˷�����Ϣ��Ҫһ��IP��ַ�Ͷ˿ں�  
	//��IP��ַ�Ͷ˿ںŰ󶨵�����ڵ�point��  
	IPEndPoint^ point = gcnew IPEndPoint(IPAddress::Any, 1237);
	socketwatch->Bind(point);

	//���׽��ֵļ������г�������Ϊ200  
	socketwatch->Listen(200);
	Thread ^threadwatch = gcnew Thread(gcnew ThreadStart(this, &ScreenCapture::watchconnecting));

	//�����߳�     
	threadwatch->Start();

}

void ScreenCapture::watchconnecting()
{
	Socket^ connection = nullptr;

	//�������ϼ����ͻ��˷���������     
	while (true)
	{
		try
		{
			connection = socketwatch->Accept();
		}
		catch (System::Exception^ ex)
		{
			//��ʾ�׽��ּ����쳣     
			Console::WriteLine(ex->Message);
			break;
		}

		//��ȡ�ͻ��˵�IP�Ͷ˿ں�  
		IPAddress^ clientIP = ((IPEndPoint^)connection->RemoteEndPoint)->Address;
		int clientPort = ((IPEndPoint^)connection->RemoteEndPoint)->Port;

		//�ÿͻ���ʾ"���ӳɹ���"����Ϣ  
		String^ sendmsg = "���ӷ���˳ɹ���\r\n" + "����IP:" + clientIP + "�����ض˿�" + clientPort.ToString();
		//�ͻ����������
		ParameterizedThreadStart ^pt = gcnew  ParameterizedThreadStart(this, &ScreenCapture::RecvHandle);
		Thread ^ t = gcnew Thread(pt);
		t->Start(connection);
	}
}

void ScreenCapture::RecvHandle(Object ^c) {
	Socket^ connection = (Socket^)c;
	try {
		cli::array<unsigned char>^ arrlen = gcnew cli::array<unsigned char>(4);

		while (C) {
			int rl = connection->Receive(arrlen);
			cout << rl << endl;
			if (rl <= 0) break;
			unsigned int l;
			l = arrlen[0] & 0xff;
			l = l << 8;
			l += arrlen[1] & 0xff;
			l = l << 8;
			l += arrlen[2] & 0xff;
			l = l << 8;
			l += arrlen[3] & 0xff;
			cli::array<unsigned char>^ arr = gcnew cli::array<unsigned char>(l);

			int actualLen = 0;
			while (actualLen < l) {
				cli::array<unsigned char>^ temp = gcnew cli::array<unsigned char>(l - actualLen);
				int rl = connection->Receive(temp);
				Array::Copy(temp, 0, arr, actualLen, l - actualLen);
				actualLen += rl;
			}
			MemoryStream^ memoryStream = gcnew MemoryStream(arr, 0, arr->Length);
			memoryStream->Write(arr, 0, arr->Length);         //ת��ͼƬ      
			pictureBox1->Image = Image::FromStream(memoryStream);
		}
	}
	catch (Exception ^e) {
	
	}
	cli::array<unsigned char> ^retClose = gcnew cli::array<unsigned char>(1);
	retClose[0] = 'c';

	connection->Send(retClose);
	connection->Close();
}

void ScreenCapture::close() {
	socketwatch->Close();
	C = false;
}