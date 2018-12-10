#pragma once

using namespace System;

String ^FormatZeroDecimal(String^ Num, float min, float max);
String ^FormatTwoDecimal(String^ Num, float min, float max);
String ^FormatThreeDecimal(String^ Num, float min, float max);


using namespace System::IO;
using namespace System::IO::Ports;
using namespace System::Threading;
#include <iostream>
using namespace std;

#define uint unsigned int
#define uchar unsigned char
uint crc16(uchar *buf, uchar len);

public ref class SerialControl {
private:
	SerialPort^  serialPort1 = gcnew SerialPort;
public:
	bool serialPortOpen(String ^ PortName);
	void serialPort1Close();
	bool Send(string &s);
	bool SendNoCrc(string &s);
	string Recv(int len);
	string RecvNoCrc(int len);
	bool check_crc16(string &in);
};


#define DC1A 0x01
#define DC1B 0x02
#define DC1C 0x03
#define DC1D 0x04
#define DC1CLASS 0xff
#define DC2A 0x05
#define DC2B 0x06
#define DC2C 0x07
#define DC2D 0x08
#define DC2CLASS 0xff
#define ACA 'A'
#define ACB 'B'
#define ACC 'C'
#define ACD 'D'
#define ACCLASS 'E'

#define ACA 'A'
#define ACB 'B'
#define ACC 'C'

#define SINWAVE 0
#define TRIANGULARWAVE 1
#define SQUAREWAVE 2

#define TIMEINTERVAL 200


public ref class SerialControlSource {
private:
	static SerialControl^  scs = gcnew SerialControl;
public:
	static bool SerialControlSourceInit(String ^PortName);
	static void SerialControlSourceClose();
	//直流电源1A组 确认按钮
	static void DC1_Confirm(char Id,int V,int I);
	static void DC1_OutputOpen(char Id);
	static void DC1_OutputClose(char Id);
	static void DC1_Lock(char Id);
	static void DC1_UnLock(char Id);

	//交流控制
	static void AC_Confirm(char Id, int V);
	static void AC_OutputOpen(char Id);
	static void AC_OutputClose(char Id);
	static void AC_Lock(char Id);
	static void AC_UnLock(char Id);

	//总电源控制
	static void GS_Open(char Id);
	static void GS_Close(char Id);

	//函数信号发生器
	static void FG_Lock();
	static void FG_UnLock();
	static void FG_Confirm(int WaveType, int MHz, int KHz, int Hz, int Duty);
	static void FG_F_Start(int WaveType, int MHz, int KHz, int Hz, int Duty);
	static void FG_F_End(int WaveType, int MHz, int KHz, int Hz, int Duty);
	static void FG_F_Run(int Sweep);
	static void FG_F_Stop(int Sweep);
};