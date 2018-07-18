#include "ScreenCapture.h"

using namespace 教师机监控台;


void ScreenCapture::open() {
	socketwatch = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);
	//服务端发送信息需要一个IP地址和端口号  
	//将IP地址和端口号绑定到网络节点point上  
	IPEndPoint^ point = gcnew IPEndPoint(IPAddress::Any, 1237);
	socketwatch->Bind(point);

	//将套接字的监听队列长度限制为200  
	socketwatch->Listen(200);
	Thread ^threadwatch = gcnew Thread(gcnew ThreadStart(this, &ScreenCapture::watchconnecting));

	//启动线程     
	threadwatch->Start();

}

void ScreenCapture::watchconnecting()
{
	Socket^ connection = nullptr;

	//持续不断监听客户端发来的请求     
	while (true)
	{
		try
		{
			connection = socketwatch->Accept();
		}
		catch (System::Exception^ ex)
		{
			//提示套接字监听异常     
			Console::WriteLine(ex->Message);
			break;
		}

		//获取客户端的IP和端口号  
		IPAddress^ clientIP = ((IPEndPoint^)connection->RemoteEndPoint)->Address;
		int clientPort = ((IPEndPoint^)connection->RemoteEndPoint)->Port;

		//让客户显示"连接成功的"的信息  
		String^ sendmsg = "连接服务端成功！\r\n" + "本地IP:" + clientIP + "，本地端口" + clientPort.ToString();
		//客户端网络结点号
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
			memoryStream->Write(arr, 0, arr->Length);         //转成图片      
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