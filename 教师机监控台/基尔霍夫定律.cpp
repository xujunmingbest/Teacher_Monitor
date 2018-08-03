#include "����������.h"
using namespace ��ʦ�����̨;

void ����������::SaveCorrectGrades() {
	fileSql f;
	ST_���������� s;
	string data = f.ReadStruct(*fileName, sizeof(ST_����������));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ�����ʧ��");
		return;
	}
	memcpy(&s, data.c_str(), sizeof(ST_����������));
	try {
		s.ti.totalscore = Convert::ToInt32(textBoxscore->Text);
		if (s.ti.totalscore == -1) s.ti.totalscore = 0;


		if (f.WriteStruct(*fileName, string((char*)&s, sizeof(ST_����������)))) {

			MessageBox::Show("�ɼ�����ɹ�");
		}
		else {
			MessageBox::Show("�ɼ�����ʧ��");
		}
	}
	catch (Exception^e) {
		MessageBox::Show("�ɼ�����ʧ��,�гɼ�û�д��");
	}
}



void ����������::Load����������Data(string &filename) {
	fileName = &filename;
	fileSql f;
	ST_���������� d;
	string path = filename;

	string data = f.ReadStruct(path, sizeof(ST_����������));
	if (data.length() == 0) {
		MessageBox::Show("ѧ���ɼ���ȡʧ��");
		return;
	}
	memcpy(&d, data.c_str(), sizeof(ST_����������));

	TrialInfo ti = d.ti;
	labelTrialName->Text = gcnew String(ti.TrialName);
	labelstuName1->Text = gcnew String(ti.stuName1);
	labelstuName2->Text = gcnew String(ti.stuName2);
	labelxuehao1->Text = gcnew String(ti.XueHao1);
	labelxuehao2->Text = gcnew String(ti.XueHao2);
	labelseriesnum->Text = gcnew String(ti.SeriaNumber);
	labelclass->Text = gcnew String(ti.Class);
	labellab->Text = gcnew String(ti.Lab);
	labelmajor->Text = gcnew String(ti.major);
	labeldate->Text = gcnew String(ti.date);
	textBoxteacher->Text = gcnew String(ti.teacher);

	textBoxscore->Text = ti.totalscore.ToString();
	labelmeaI1->Text   = gcnew String(d.����I1 );   
	labelmeaI2->Text   = gcnew String(d.����I2 );   
	labelmeaI3->Text   = gcnew String(d.����I3 );   
	labelmeaU11->Text  = gcnew String(d.����U11);   
	labelmeaU12->Text  = gcnew String(d.����U12);   
	labelmeaUDE->Text  = gcnew String(d.����UDE);   
	labelmeaUFA->Text  = gcnew String(d.����UFA);   
	labelmeaUAB->Text  = gcnew String(d.����UAB);   
	labelmeaUBC->Text  = gcnew String(d.����UBC);   
	labelmeaUCD->Text  = gcnew String(d.����UCD);   

	labelrelaI1->Text  = gcnew String(d.���I1 );   
	labelrelaI2->Text  = gcnew String(d.���I2 );   
	labelrelaI3->Text  = gcnew String(d.���I3 );   
	labelrelaU11->Text = gcnew String(d.���U11);   
	labelrelaU12->Text = gcnew String(d.���U12);   
	labelrelaUDE->Text = gcnew String(d.���UDE);   
	labelrelaUFA->Text = gcnew String(d.���UFA);   
	labelrelaUAB->Text = gcnew String(d.���UAB);   
	labelrelaUBC->Text = gcnew String(d.���UBC);   
	labelrelaUCD->Text = gcnew String(d.���UCD);   

	labelcalI1->Text  = gcnew String(d.����I1 );   
	labelcalI2->Text  = gcnew String(d.����I2 );   
	labelcalI3->Text  = gcnew String(d.����I3 );   
	labelcalU11->Text = gcnew String(d.����U11);   
	labelcalU12->Text = gcnew String(d.����U12);   
	labelcalUDE->Text = gcnew String(d.����UDE);   
	labelcalUFA->Text = gcnew String(d.����UFA);   
	labelcalUAB->Text = gcnew String(d.����UAB);   
	labelcalUBC->Text = gcnew String(d.����UBC);   
	labelcalUCD->Text = gcnew String(d.����UCD);   

    label����->Text = gcnew String(d.summing_up);

}


