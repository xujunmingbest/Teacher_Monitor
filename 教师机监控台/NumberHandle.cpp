#include "NumberHandle.h"

String ^FormatZeroDecimal(String^ Num, float min, float max) {
	try {
		float t = Convert::ToSingle(Num);
		if (t < min) return min.ToString("F0");
		else if (t > max) return max.ToString("F0");
		else return t.ToString("F0");
	}
	catch (System::Exception ^ E) {
		return "输入有误";
	}
}


String ^FormatTwoDecimal(String^ Num, float min, float max) {
	try {
		float t = Convert::ToSingle(Num);
		if (t < min) return min.ToString("F2");
		else if (t > max) return max.ToString("F2");
		else return t.ToString("F2");
	}
	catch (System::Exception ^ E) {
		return "输入有误";
	}
}


String ^FormatThreeDecimal(String^ Num, float min, float max) {
	try {
		float t = Convert::ToSingle(Num);
		if (t < min) return min.ToString("F3");
		else if (t > max) return max.ToString("F3");
		else return t.ToString("F3");
	}
	catch (System::Exception ^ E) {
		return "输入有误";
	}
}


bool SerialControl::serialPortOpen(String ^ PortName) {

	int count = 0;
	serialPort1->Close();
	try {
		serialPort1->PortName = PortName;
		serialPort1->ReceivedBytesThreshold = 1;
		serialPort1->DataBits = 8;
		serialPort1->Parity = System::IO::Ports::Parity::None; //无奇偶校验位
		serialPort1->ReadTimeout = 500;											   //serialPort1->StopBits = System::IO::Ports::StopBits::One;//设置停止位为1

		serialPort1->Open(); //串口打开
	}
	catch (System::Exception ^e) {
		//SYS_LOG_ERROR("打开串口失败", T_to_string(PortName));
		return false;
	}
	//SYS_LOG_INF("打开串口成功", T_to_string(PortName));
	return true;
}

void SerialControl::serialPort1Close() {
	serialPort1->Close();
}


uint crc16(uchar *buf, uchar len);

//高字节在前 低字节在后
uint TwoByteTouInt(char *buff)
{
	uint t = 0;
	t = ((uint)buff[0]) & 0xff;
	t = t << 8;
	t += ((uint)buff[1]) & 0xff;
	return t;
}

//两位crc的地址
bool SerialControl::check_crc16(string &in) {
	uint crcr = crc16((uchar*)in.c_str(), in.length() - 2);
	uint actcrcr = 0;
	uchar temp[3];
	temp[0] = (uchar)in[in.length() - 1];
	temp[1] = (uchar)in[in.length() - 2];
	actcrcr = TwoByteTouInt((char*)temp);


	if (crcr == actcrcr) {
		return true;
	}
	return false;
}

uint calccrc(uchar crcbuf, uint crc)			//校验算法
{
	uchar i;
	uchar chk;
	crc = crc ^ crcbuf;
	for (i = 0; i<8; i++)
	{
		chk = (uchar)(crc & 1);
		crc = crc >> 1;
		crc = crc & 0x7fff;
		if (chk == 1)
			crc = crc ^ 0xa001;
		crc = crc & 0xffff;
	}
	return crc;
}


uint crc16(uchar *buf, uchar len)			//校验函数 高位在前，低位在后
{
	uchar hi, lo, i;
	uint crc;
	crc = 0xFFFF;
	for (i = 0; i<len; i++)
	{
		crc = calccrc(*buf, crc);
		buf++;
	}
	hi = (uchar)(crc / 256);
	lo = (uchar)(crc % 256);
	crc = (((uint)(hi)) << 8) | lo;
	return crc;
}



bool SerialControl::Send(string &s) {

	int alen = s.length();
	cli::array<unsigned char>^ buffer = gcnew cli::array<unsigned char>(alen + 2);
	for (int i = 0; i < alen; i++)
	{
		buffer[i] = s[i];
	}
	try {

		uint Yu = 0xff;
		uint r = crc16((uchar*)s.c_str(), s.length());
		uchar buffr[2];
		buffr[0] = (r & 0xffff) >> 8;
		buffr[1] = r & 0xff;
		buffer[alen] = buffr[1];
		buffer[alen + 1] = buffr[0];

		serialPort1->Write(buffer, 0, alen + 2);//发送指令0x55
		if (alen == 0) {
			throw"发送0字节";
		}
	}
	catch (System::Exception ^e) {
		return false;
	}
	return true;
}

bool SerialControl::SendNoCrc(string &s) {
	int alen = s.length();
	cli::array<unsigned char>^ buffer = gcnew cli::array<unsigned char>(alen);
	for (int i = 0; i < alen; i++)
	{
		buffer[i] = s[i];
	}
	try {
		serialPort1->Write(buffer, 0, alen);//发送指令0x55
		if (alen == 0) {
			throw"发送0字节";
		}
	}
	catch (System::Exception ^e) {
		return false;
	}
	return true;
}

string SerialControl::Recv(int len) {
	string out;
	cli::array<unsigned char>^ rbuff = gcnew cli::array<unsigned char>(len);
	try {
		int actrecvlen = 0;
		cli::array<unsigned char>^ buff = gcnew cli::array<unsigned char>(100);
		while (actrecvlen < len) {
			int recvlen = serialPort1->Read(buff, 0, len - actrecvlen);// 估计是可以返回 字符串的 读取个数
			Array::Copy(buff, 0, rbuff, actrecvlen, recvlen);
			cli::pin_ptr<unsigned char> c = &rbuff[actrecvlen];
			char *pinp = (char *)c;
			out += string(pinp, recvlen);
			actrecvlen += recvlen;
			if (recvlen <= 0) {
				throw "串口退出";
			}
		}
	}
	catch (System::Exception ^e) {


		return "";
	}

	//crc16检验
	if (!check_crc16(out))
		return "";

	return out;
}
string SerialControl::RecvNoCrc(int len)
{
	string out;
	cli::array<unsigned char>^ rbuff = gcnew cli::array<unsigned char>(len);
	try {
		int actrecvlen = 0;
		cli::array<unsigned char>^ buff = gcnew cli::array<unsigned char>(100);
		while (actrecvlen < len) {
			int recvlen = serialPort1->Read(buff, 0, len - actrecvlen);// 估计是可以返回 字符串的 读取个数
			Array::Copy(buff, 0, rbuff, actrecvlen, recvlen);
			cli::pin_ptr<unsigned char> c = &rbuff[actrecvlen];
			char *pinp = (char *)c;
			out += string(pinp, recvlen);
			actrecvlen += recvlen;
			//cout << "actrecvlen" << actrecvlen << endl;
			if (recvlen <= 0) {
				throw "串口退出";
			}
		}
	}
	catch (System::Exception ^e) {

		cout << "串口退出" << endl;
		return "";
	}

	return out;
}

bool SerialControlSource::SerialControlSourceInit(String ^PortName) {
	return scs->serialPortOpen(PortName);
}
void SerialControlSource::SerialControlSourceClose() {
	scs->serialPort1Close();
}

void SerialControlSource::DC1_Confirm(char Id,int V,int I) {
	
	//发送 电压
	char buffV[6];
	buffV[0] = Id;
	buffV[1] = 0x06;
	buffV[2] = 0x00;
	buffV[3] = 0x01;
	buffV[4] = (V & 0xffff) >> 8;
	buffV[5] = V & 0xff;

	if (!scs->Send(string(buffV, 6))) {
	}
	Thread::Sleep(300); //间隔为300毫秒 ，要有间隔时间
	//发送 电流
	char buffI[6];
	buffI[0] = 0x01;
	buffI[1] = 0x06;
	buffI[2] = 0x00;
	buffI[3] = 0x00;
	buffI[4] = (I & 0xffff) >> 8;
	buffI[5] = I & 0xff;
	if (!scs->Send(string(buffI, 6))) {
	}
}

void SerialControlSource::DC1_OutputOpen(char Id ) {
	char buffV[6];
	buffV[0] = Id;
	buffV[1] = 0x06;
	buffV[2] = 0x00;
	buffV[3] = 0x02;
	buffV[4] = 0x00;
	buffV[5] = 0x01;

	if (!scs->Send(string(buffV, 6))) {
	}
}
void SerialControlSource::DC1_OutputClose(char Id) {
	char buffV[6];
	buffV[0] = Id;
	buffV[1] = 0x06;
	buffV[2] = 0x00;
	buffV[3] = 0x02;
	buffV[4] = 0x00;
	buffV[5] = 0x00;

	if (!scs->Send(string(buffV, 6))) {
	}
}

void SerialControlSource::DC1_Lock(char Id) {
	char buffV[6];
	buffV[0] = Id;
	buffV[1] = 0x06;
	buffV[2] = 0x00;
	buffV[3] = 0x03;
	buffV[4] = 0x00;
	buffV[5] = 0x01;

	if (!scs->Send(string(buffV, 6))) {
	}

}
void SerialControlSource::DC1_UnLock(char Id) {
	char buffV[6];
	buffV[0] = Id;
	buffV[1] = 0x06;
	buffV[2] = 0x00;
	buffV[3] = 0x03;
	buffV[4] = 0x00;
	buffV[5] = 0x00;

	if (!scs->Send(string(buffV, 6))) {
	}
}


void SerialControlSource::AC_Confirm(char Id, int V) {
	char buff[8];
	snprintf(buff + 5, 3, "%02d", V);
	buff[0] = 'A';
	buff[1] = 'C';
	buff[2] = '_';
	buff[3] = Id;
	buff[4] = 'u';
	buff[7] = 0x0A;
	if (!scs->SendNoCrc(string(buff, 8))) {
	}
}

void SerialControlSource::AC_OutputOpen(char Id) {
	char buff[8];

	buff[0] = 'A';
	buff[1] = 'C';
	buff[2] = '_';
	buff[3] = Id;
	buff[4] = 'o';
	buff[5] = '1';
	buff[6] = 0x0D;
	buff[7] = 0x0A;
	if (!scs->SendNoCrc(string(buff, 8))) {
	}
}
void SerialControlSource::AC_OutputClose(char Id) {
	char buff[8];

	buff[0] = 'A';
	buff[1] = 'C';
	buff[2] = '_';
	buff[3] = Id;
	buff[4] = 'o';
	buff[5] = '0';
	buff[6] = 0x0D;
	buff[7] = 0x0A;
	if (!scs->SendNoCrc(string(buff, 8))) {
	}
}
void SerialControlSource::AC_Lock(char Id) {
	char buff[7];

	buff[0] = 'A';
	buff[1] = 'C';
	buff[2] = '_';
	buff[3] = Id;
	buff[4] = 'k';
	buff[5] = '1';
	buff[6] = 0x0A;
	if (!scs->SendNoCrc(string(buff, 7))) {
	}
}

void SerialControlSource::AC_UnLock(char Id) {
	char buff[7];

	buff[0] = 'A';
	buff[1] = 'C';
	buff[2] = '_';
	buff[3] = Id;
	buff[4] = 'k';
	buff[5] = '0';
	buff[6] = 0x0A;
	if (!scs->SendNoCrc(string(buff, 7))) {
	}
}

void SerialControlSource::GS_Open(char Id) {
	char buff[3];

	buff[0] = Id+ 0x80;
	buff[1] = 0x0D;
	buff[2] = 0x0A;

	if (!scs->SendNoCrc(string(buff, 3))) {
	}
}
void SerialControlSource::GS_Close(char Id) {
	char buff[3];

	buff[0] = Id;
	buff[1] = 0x0D;
	buff[2] = 0x0A;

	if (!scs->SendNoCrc(string(buff, 3))) {
	}
}

void SerialControlSource::FG_Lock() {
	char buff[4];

	buff[0] = 'b';
	buff[1] = 'k';
	buff[2] = '1';
	buff[3] = 0x0A;

	if (!scs->SendNoCrc(string(buff, 4))) {
	}
}

void SerialControlSource::FG_UnLock() {
	char buff[4];

	buff[0] = 'b';
	buff[1] = 'k';
	buff[2] = '0';
	buff[3] = 0x0A;

	if (!scs->SendNoCrc(string(buff, 4))) {
	}
}
void SerialControlSource::FG_Confirm(int WaveType, int MHz, int KHz, int Hz,int Duty) {
	
	//发送波形选择
	char buff[4];
	buff[0] = 'b';
	buff[1] = 'w';
	buff[3] = 0x0A;
	switch (WaveType) {
	case SINWAVE:
		buff[2] = '0'; break;
	case TRIANGULARWAVE:
		buff[2] = '1'; break;
	case SQUAREWAVE:
		buff[2] = '2'; break;
	}

	if (!scs->SendNoCrc(string(buff, 4))) {
	}
	Thread::Sleep(TIMEINTERVAL);
	//发送 频率改变
	char buff_f[12];
	buff_f[0] = 'b';
	buff_f[1] = 'f';
	snprintf(buff_f+2, 2, "%1d", MHz);
	snprintf(buff_f + 3, 4, "%03d", KHz);
	snprintf(buff_f + 6, 6, "%05d", Hz);
	buff_f[11] = 0x0a;
	if (!scs->SendNoCrc(string(buff_f, 12))) {
	}
	Thread::Sleep(TIMEINTERVAL);
	//占空比
	char buff_Duty[5];
	buff_Duty[0] = 'b';
	buff_Duty[1] = 'd';
	snprintf(buff_Duty + 2, 3, "%02d", Duty);
	buff_Duty[4] = 0x0a;
	if (!scs->SendNoCrc(string(buff_Duty, 5))) {
	}
	Thread::Sleep(TIMEINTERVAL);
}
void SerialControlSource::FG_F_Start(int WaveType, int MHz, int KHz, int Hz, int Duty) {
	FG_Confirm(WaveType, MHz, KHz, Hz, Duty);
	char buff[4];
	buff[0] = 'b';
	buff[1] = 's';
	buff[2] = '1';
	buff[3] = 0x0A;
	if (!scs->SendNoCrc(string(buff, 4))) {
	}
}

void SerialControlSource::FG_F_End(int WaveType, int MHz, int KHz, int Hz, int Duty) {
	FG_Confirm(WaveType, MHz, KHz, Hz, Duty);
	char buff[4];
	buff[0] = 'b';
	buff[1] = 's';
	buff[2] = '2';
	buff[3] = 0x0A;
	if (!scs->SendNoCrc(string(buff, 4))) {
	}
}

void SerialControlSource::FG_F_Run(int Sweep) {
	//时间间隔
	char buff_t[5];
	buff_t[0] = 'b';
	buff_t[1] = 't';
	buff_t[2] = '2';
	snprintf(buff_t + 2, 3, "%02d", Sweep);
	buff_t[4] = 0x0A;
	if (!scs->SendNoCrc(string(buff_t, 5))) {
	}
	Thread::Sleep(TIMEINTERVAL);
	//启动
	char buff_r[4];
	buff_r[0] = 'b';
	buff_r[1] = 'r';
	buff_r[2] = '1';
	buff_r[3] = 0x0A;
	if (!scs->SendNoCrc(string(buff_r, 4))) {
	}
}
void SerialControlSource::FG_F_Stop(int Sweep) {
	//时间间隔
	char buff_t[5];
	buff_t[0] = 'b';
	buff_t[1] = 't';
	buff_t[2] = '2';
	snprintf(buff_t + 2, 3, "%02d", Sweep);
	buff_t[4] = 0x0A;
	if (!scs->SendNoCrc(string(buff_t, 5))) {
	}
	Thread::Sleep(TIMEINTERVAL);
	//启动
	char buff_r[4];
	buff_r[0] = 'b';
	buff_r[1] = 'r';
	buff_r[2] = '0';
	buff_r[3] = 0x0A;
	if (!scs->SendNoCrc(string(buff_r, 4))) {
	}
}