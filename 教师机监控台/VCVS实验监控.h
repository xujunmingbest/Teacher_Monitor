#pragma once

namespace 教师机监控台 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// VCVS实验监控 摘要
	/// </summary>
	public ref class VCVS实验监控 : public System::Windows::Forms::Form
	{
	public:
		VCVS实验监控(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void LoadData(ST_VCVS实验 &d);
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~VCVS实验监控()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button76;
	protected:
	private: System::Windows::Forms::Button^  button77;
	private: System::Windows::Forms::Button^  button78;
	private: System::Windows::Forms::Button^  button79;
	private: System::Windows::Forms::Button^  button80;
	private: System::Windows::Forms::Button^  button81;
	private: System::Windows::Forms::Button^  button82;
	private: System::Windows::Forms::Button^  button83;
	private: System::Windows::Forms::Label^  label144;
	private: System::Windows::Forms::TextBox^  textBoxtrial4_2RL_8;
	private: System::Windows::Forms::TextBox^  textBoxtrial4_2RL_7;
	private: System::Windows::Forms::TextBox^  textBoxtrial4_2RL_6;
	private: System::Windows::Forms::TextBox^  textBoxtrial4_2RL_5;
	private: System::Windows::Forms::GroupBox^  groupBox11;
	private: System::Windows::Forms::TextBox^  textBoxtrial4_2RL_4;
	private: System::Windows::Forms::TextBox^  textBoxtrial4_2RL_3;
	private: System::Windows::Forms::TextBox^  textBoxtrial4_2RL_2;
	private: System::Windows::Forms::TextBox^  textBoxtrial4_2RL_1;
	private: System::Windows::Forms::Button^  button86;
	private: System::Windows::Forms::Button^  button87;
	private: System::Windows::Forms::Label^  labeltrial4_2U2_8;
	private: System::Windows::Forms::Label^  labeltrial4_2IL_8;
	private: System::Windows::Forms::Button^  button88;
	private: System::Windows::Forms::Button^  button89;
	private: System::Windows::Forms::Button^  button90;
	private: System::Windows::Forms::Button^  button91;
	private: System::Windows::Forms::Button^  button92;
	private: System::Windows::Forms::Button^  button93;
	private: System::Windows::Forms::Button^  button94;
	private: System::Windows::Forms::Button^  button95;
	private: System::Windows::Forms::Button^  button96;
	private: System::Windows::Forms::Button^  button97;
	private: System::Windows::Forms::Button^  button98;
	private: System::Windows::Forms::Button^  button99;
	private: System::Windows::Forms::Label^  labeltrial4_2U2_7;
	private: System::Windows::Forms::Button^  button100;
	private: System::Windows::Forms::Button^  button101;
	private: System::Windows::Forms::Label^  labeltrial4_2U2_6;
	private: System::Windows::Forms::Label^  labeltrial4_2U2_5;
	private: System::Windows::Forms::Label^  labeltrial4_2U2_4;
	private: System::Windows::Forms::Label^  labeltrial4_2U2_3;
	private: System::Windows::Forms::Label^  labeltrial4_2U2_2;
	private: System::Windows::Forms::Label^  labeltrial4_2U2_1;
	private: System::Windows::Forms::Label^  label158;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial4_2;
	private: System::Windows::Forms::Button^  button102;
	private: System::Windows::Forms::Label^  labeltrial4_2IL_7;
	private: System::Windows::Forms::Label^  labeltrial4_2IL_6;
	private: System::Windows::Forms::Label^  labeltrial4_2IL_5;
	private: System::Windows::Forms::Label^  labeltrial4_2IL_4;
	private: System::Windows::Forms::Label^  labeltrial4_2IL_3;
	private: System::Windows::Forms::Label^  labeltrial4_2IL_2;
	private: System::Windows::Forms::Label^  labeltrial4_2IL_1;
	private: System::Windows::Forms::Label^  label173;
	private: System::Windows::Forms::Label^  label174;
	private: System::Windows::Forms::Label^  label175;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::GroupBox^  groupBox12;
	private: System::Windows::Forms::Button^  button103;
	private: System::Windows::Forms::Button^  button104;
	private: System::Windows::Forms::Button^  button105;
	private: System::Windows::Forms::Button^  button106;
	private: System::Windows::Forms::Button^  button107;
	private: System::Windows::Forms::Button^  button108;
	private: System::Windows::Forms::Button^  button109;
	private: System::Windows::Forms::Button^  button110;
	private: System::Windows::Forms::Button^  button111;
	private: System::Windows::Forms::Button^  button112;
	private: System::Windows::Forms::Button^  button113;
	private: System::Windows::Forms::Button^  button114;
	private: System::Windows::Forms::Button^  button115;
	private: System::Windows::Forms::Button^  button116;
	private: System::Windows::Forms::Button^  button117;
	private: System::Windows::Forms::Button^  button118;
	private: System::Windows::Forms::TextBox^  labeltrial4_1α;

	private: System::Windows::Forms::Label^  label176;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial4_1;
	private: System::Windows::Forms::Button^  button119;
	private: System::Windows::Forms::Label^  labeltrial4_1IL_8;
	private: System::Windows::Forms::Label^  labeltrial4_1IL_7;
	private: System::Windows::Forms::Label^  labeltrial4_1IL_6;
	private: System::Windows::Forms::Label^  labeltrial4_1IL_5;
	private: System::Windows::Forms::Label^  labeltrial4_1IL_4;
	private: System::Windows::Forms::Label^  labeltrial4_1IL_3;
	private: System::Windows::Forms::Label^  labeltrial4_1IL_2;
	private: System::Windows::Forms::Label^  labeltrial4_1IL_1;
	private: System::Windows::Forms::Label^  labeltrial4_1I1_8;
	private: System::Windows::Forms::Label^  labeltrial4_1I1_7;
	private: System::Windows::Forms::Label^  labeltrial4_1I1_6;
	private: System::Windows::Forms::Label^  labeltrial4_1I1_5;
	private: System::Windows::Forms::Label^  labeltrial4_1I1_4;
	private: System::Windows::Forms::Label^  labeltrial4_1I1_3;
	private: System::Windows::Forms::Label^  labeltrial4_1I1_2;
	private: System::Windows::Forms::Label^  labeltrial4_1I1_1;
	private: System::Windows::Forms::Label^  label193;
	private: System::Windows::Forms::Label^  label194;
	private: System::Windows::Forms::Label^  label195;
	private: System::Windows::Forms::Label^  label196;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button67;
	private: System::Windows::Forms::Button^  button68;
	private: System::Windows::Forms::Button^  button69;
	private: System::Windows::Forms::Button^  button70;
	private: System::Windows::Forms::Button^  button71;
	private: System::Windows::Forms::Button^  button72;
	private: System::Windows::Forms::Button^  button73;
	private: System::Windows::Forms::Button^  button74;
	private: System::Windows::Forms::TextBox^  textBoxtrial3_1rm;
	private: System::Windows::Forms::Label^  label124;
	private: System::Windows::Forms::Button^  button75;
	private: System::Windows::Forms::Label^  labeltrial3_1V2_8;
	private: System::Windows::Forms::Label^  labeltrial3_1V2_7;
	private: System::Windows::Forms::Label^  labeltrial3_1V2_6;
	private: System::Windows::Forms::Label^  labeltrial3_1V2_5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial3_1;
	private: System::Windows::Forms::Label^  labeltrial3_1V2_4;
	private: System::Windows::Forms::Label^  labeltrial2_1IL_3;
	private: System::Windows::Forms::Label^  labeltrial2_1IL_1;
	private: System::Windows::Forms::Label^  label100;
	private: System::Windows::Forms::Label^  label101;
	private: System::Windows::Forms::Label^  label102;
	private: System::Windows::Forms::Label^  label103;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::TextBox^  textBoxtrial3_2RL_8;
	private: System::Windows::Forms::TextBox^  textBoxtrial3_2RL_7;
	private: System::Windows::Forms::TextBox^  textBoxtrial3_2RL_6;
	private: System::Windows::Forms::TextBox^  textBoxtrial3_2RL_5;
	private: System::Windows::Forms::TextBox^  textBoxtrial3_2RL_4;
	private: System::Windows::Forms::TextBox^  textBoxtrial3_2RL_3;
	private: System::Windows::Forms::TextBox^  textBoxtrial3_2RL_2;
	private: System::Windows::Forms::TextBox^  textBoxtrial3_2RL_1;
	private: System::Windows::Forms::Button^  button84;
	private: System::Windows::Forms::Button^  button85;
	private: System::Windows::Forms::Label^  labeltrial3_2IL_8;
	private: System::Windows::Forms::Label^  labeltrial3_2U2_8;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Label^  labeltrial3_2IL_7;
	private: System::Windows::Forms::Button^  button64;
	private: System::Windows::Forms::Button^  button65;
	private: System::Windows::Forms::Label^  labeltrial3_2IL_6;
	private: System::Windows::Forms::Label^  labeltrial3_2IL_5;
	private: System::Windows::Forms::Label^  labeltrial3_2IL_4;
	private: System::Windows::Forms::Label^  labeltrial3_2IL_3;
	private: System::Windows::Forms::Label^  labeltrial3_2IL_2;
	private: System::Windows::Forms::Label^  labeltrial3_2IL_1;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial3_2;
	private: System::Windows::Forms::Button^  button66;
	private: System::Windows::Forms::Label^  labeltrial3_2U2_7;
	private: System::Windows::Forms::Label^  labeltrial3_2U2_6;
	private: System::Windows::Forms::Label^  labeltrial3_2U2_5;
	private: System::Windows::Forms::Label^  labeltrial3_2U2_4;
	private: System::Windows::Forms::Label^  labeltrial3_2U2_3;
	private: System::Windows::Forms::Label^  labeltrial3_2U2_2;
	private: System::Windows::Forms::Label^  labeltrial3_2U2_1;
	private: System::Windows::Forms::Label^  label121;
	private: System::Windows::Forms::Label^  label122;
	private: System::Windows::Forms::Label^  label123;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::Label^  labeltrial3_1V2_3;
	private: System::Windows::Forms::Label^  labeltrial3_1V2_2;
	private: System::Windows::Forms::Label^  labeltrial3_1V2_1;
	private: System::Windows::Forms::Label^  labeltrial3_1I1_8;
	private: System::Windows::Forms::Label^  labeltrial3_1I1_7;
	private: System::Windows::Forms::Label^  labeltrial3_1I1_6;
	private: System::Windows::Forms::Label^  labeltrial3_1I1_5;
	private: System::Windows::Forms::Label^  labeltrial3_1I1_4;
	private: System::Windows::Forms::Label^  labeltrial3_1I1_3;
	private: System::Windows::Forms::Label^  labeltrial3_1I1_2;
	private: System::Windows::Forms::Label^  labeltrial3_1I1_1;
	private: System::Windows::Forms::Label^  label141;
	private: System::Windows::Forms::Label^  label142;
	private: System::Windows::Forms::Label^  label143;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_2RL_1;
	private: System::Windows::Forms::Label^  labeltrial2_1IL_2;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_2RL_2;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_2RL_5;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_2RL_4;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_2RL_3;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_2RL_7;
	private: System::Windows::Forms::Label^  label166;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_2RL_6;
	private: System::Windows::Forms::Button^  button246;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_7;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_6;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_4;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_9;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_8;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_8;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial1_1;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_5;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_7;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_6;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_5;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_4;
	private: System::Windows::Forms::TextBox^  textBoxtrial1_1u;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_3;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_2;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_2;
	private: System::Windows::Forms::Label^  labeltrial1_2IL_1;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial1_2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_8;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_7;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_6;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_5;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  labeltrial1_1U2_1;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_3;
	private: System::Windows::Forms::Label^  labeltrial2_1IL_4;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Label^  labeltrial2_2V2_7;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Label^  labeltrial2_2V2_6;
	private: System::Windows::Forms::Label^  labeltrial2_2V2_5;
	private: System::Windows::Forms::Label^  labeltrial2_2V2_4;
	private: System::Windows::Forms::Label^  labeltrial2_2V2_3;
	private: System::Windows::Forms::Label^  labeltrial2_2V2_2;
	private: System::Windows::Forms::Label^  labeltrial2_2V2_1;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial2_2;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Label^  labeltrial2_2IL_7;
	private: System::Windows::Forms::Label^  labeltrial2_2IL_6;
	private: System::Windows::Forms::Label^  labeltrial2_2IL_5;
	private: System::Windows::Forms::Label^  labeltrial2_2IL_4;
	private: System::Windows::Forms::Label^  labeltrial2_2IL_3;
	private: System::Windows::Forms::Label^  labeltrial2_2IL_2;
	private: System::Windows::Forms::Label^  labeltrial2_2IL_1;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TextBox^  labeltrial2_1U1_8;
	private: System::Windows::Forms::TextBox^  labeltrial2_1U1_7;
	private: System::Windows::Forms::TextBox^  labeltrial2_1U1_6;
	private: System::Windows::Forms::TextBox^  labeltrial2_1U1_5;
	private: System::Windows::Forms::TextBox^  labeltrial2_1U1_4;
	private: System::Windows::Forms::TextBox^  labeltrial2_1U1_3;
	private: System::Windows::Forms::TextBox^  labeltrial2_1U1_2;
	private: System::Windows::Forms::TextBox^  labeltrial2_1U1_1;
	private: System::Windows::Forms::Button^  button129;
	private: System::Windows::Forms::Button^  button130;
	private: System::Windows::Forms::Button^  button131;
	private: System::Windows::Forms::Button^  button132;
	private: System::Windows::Forms::Button^  button133;
	private: System::Windows::Forms::Button^  button134;
	private: System::Windows::Forms::Button^  button135;
	private: System::Windows::Forms::Button^  button136;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::TextBox^  textBoxtrial2_1gm;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chartTrial2_1;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Label^  labeltrial2_1IL_8;
	private: System::Windows::Forms::Label^  labeltrial2_1IL_7;
	private: System::Windows::Forms::Label^  labeltrial2_1IL_6;
	private: System::Windows::Forms::Label^  labeltrial2_1IL_5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_2;
	private: System::Windows::Forms::Label^  labeltrial1_2V2_1;


	private: System::Windows::Forms::Label^  label2;





	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label19;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button120;
	private: System::Windows::Forms::Button^  button121;
	private: System::Windows::Forms::Button^  button122;
	private: System::Windows::Forms::Button^  button123;
	private: System::Windows::Forms::Button^  button124;
	private: System::Windows::Forms::Button^  button125;
	private: System::Windows::Forms::Button^  button126;
	private: System::Windows::Forms::Button^  button127;
	private: System::Windows::Forms::Button^  button128;
	private: System::Windows::Forms::TextBox^  labeltrial1_1U1_9;
	private: System::Windows::Forms::TextBox^  labeltrial1_1U1_8;
	private: System::Windows::Forms::TextBox^  labeltrial1_1U1_7;
	private: System::Windows::Forms::TextBox^  labeltrial1_1U1_6;
	private: System::Windows::Forms::TextBox^  labeltrial1_1U1_5;
	private: System::Windows::Forms::TextBox^  labeltrial1_1U1_4;
	private: System::Windows::Forms::TextBox^  labeltrial1_1U1_3;
	private: System::Windows::Forms::TextBox^  labeltrial1_1U1_2;
	private: System::Windows::Forms::TextBox^  labeltrial1_1U1_1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TextBox^  textBoxtrial1_2RL_8;
private: System::Windows::Forms::TextBox^  textBoxtrial1_2RL_7;
private: System::Windows::Forms::TextBox^  textBoxtrial1_2RL_6;
private: System::Windows::Forms::TextBox^  textBoxtrial1_2RL_5;
private: System::Windows::Forms::TextBox^  textBoxtrial1_2RL_4;
private: System::Windows::Forms::TextBox^  textBoxtrial1_2RL_3;
private: System::Windows::Forms::TextBox^  textBoxtrial1_2RL_2;
private: System::Windows::Forms::TextBox^  textBoxtrial1_2RL_1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VCVS实验监控::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial4_2RL_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial4_2RL_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial4_2RL_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial4_2RL_5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxtrial4_2RL_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial4_2RL_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial4_2RL_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial4_2RL_1 = (gcnew System::Windows::Forms::TextBox());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->labeltrial4_2U2_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_8 = (gcnew System::Windows::Forms::Label());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->labeltrial4_2U2_7 = (gcnew System::Windows::Forms::Label());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->labeltrial4_2U2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2U2_1 = (gcnew System::Windows::Forms::Label());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->chartTrial4_2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->labeltrial4_2IL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_2IL_1 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->button110 = (gcnew System::Windows::Forms::Button());
			this->button111 = (gcnew System::Windows::Forms::Button());
			this->button112 = (gcnew System::Windows::Forms::Button());
			this->button113 = (gcnew System::Windows::Forms::Button());
			this->button114 = (gcnew System::Windows::Forms::Button());
			this->button115 = (gcnew System::Windows::Forms::Button());
			this->button116 = (gcnew System::Windows::Forms::Button());
			this->button117 = (gcnew System::Windows::Forms::Button());
			this->button118 = (gcnew System::Windows::Forms::Button());
			this->labeltrial4_1α = (gcnew System::Windows::Forms::TextBox());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->chartTrial4_1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button119 = (gcnew System::Windows::Forms::Button());
			this->labeltrial4_1IL_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1IL_1 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial4_1I1_1 = (gcnew System::Windows::Forms::Label());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label194 = (gcnew System::Windows::Forms::Label());
			this->label195 = (gcnew System::Windows::Forms::Label());
			this->label196 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->textBoxtrial3_1rm = (gcnew System::Windows::Forms::TextBox());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->labeltrial3_1V2_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_5 = (gcnew System::Windows::Forms::Label());
			this->chartTrial3_1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labeltrial3_1V2_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_1 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxtrial3_2RL_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial3_2RL_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial3_2RL_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial3_2RL_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial3_2RL_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial3_2RL_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial3_2RL_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial3_2RL_1 = (gcnew System::Windows::Forms::TextBox());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->labeltrial3_2IL_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_8 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->labeltrial3_2IL_7 = (gcnew System::Windows::Forms::Label());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->labeltrial3_2IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2IL_1 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->chartTrial3_2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->labeltrial3_2U2_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_2U2_1 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->labeltrial3_1V2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1V2_1 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial3_1I1_1 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_2RL_1 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial2_1IL_2 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_2RL_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial2_2RL_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial2_2RL_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial2_2RL_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial2_2RL_7 = (gcnew System::Windows::Forms::TextBox());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial2_2RL_6 = (gcnew System::Windows::Forms::TextBox());
			this->button246 = (gcnew System::Windows::Forms::Button());
			this->labeltrial1_1U2_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_4 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->labeltrial1_1U2_9 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_8 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->labeltrial1_2IL_8 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->chartTrial1_1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labeltrial1_1U2_5 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->labeltrial1_2IL_7 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->labeltrial1_2IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_4 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial1_1u = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial1_1U2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_1U2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2IL_1 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->chartTrial1_2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labeltrial1_2V2_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_4 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labeltrial1_1U2_1 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_4 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->labeltrial2_2V2_7 = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->labeltrial2_2V2_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2V2_1 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->chartTrial2_2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->labeltrial2_2IL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_5 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_4 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_3 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_2IL_1 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->labeltrial2_1U1_8 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial2_1U1_7 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial2_1U1_6 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial2_1U1_5 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial2_1U1_4 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial2_1U1_3 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial2_1U1_2 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial2_1U1_1 = (gcnew System::Windows::Forms::TextBox());
			this->button129 = (gcnew System::Windows::Forms::Button());
			this->button130 = (gcnew System::Windows::Forms::Button());
			this->button131 = (gcnew System::Windows::Forms::Button());
			this->button132 = (gcnew System::Windows::Forms::Button());
			this->button133 = (gcnew System::Windows::Forms::Button());
			this->button134 = (gcnew System::Windows::Forms::Button());
			this->button135 = (gcnew System::Windows::Forms::Button());
			this->button136 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->textBoxtrial2_1gm = (gcnew System::Windows::Forms::TextBox());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->chartTrial2_1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->labeltrial2_1IL_8 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_7 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_6 = (gcnew System::Windows::Forms::Label());
			this->labeltrial2_1IL_5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->labeltrial1_2V2_2 = (gcnew System::Windows::Forms::Label());
			this->labeltrial1_2V2_1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button120 = (gcnew System::Windows::Forms::Button());
			this->button121 = (gcnew System::Windows::Forms::Button());
			this->button122 = (gcnew System::Windows::Forms::Button());
			this->button123 = (gcnew System::Windows::Forms::Button());
			this->button124 = (gcnew System::Windows::Forms::Button());
			this->button125 = (gcnew System::Windows::Forms::Button());
			this->button126 = (gcnew System::Windows::Forms::Button());
			this->button127 = (gcnew System::Windows::Forms::Button());
			this->button128 = (gcnew System::Windows::Forms::Button());
			this->labeltrial1_1U1_9 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial1_1U1_8 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial1_1U1_7 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial1_1U1_6 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial1_1U1_5 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial1_1U1_4 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial1_1U1_3 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial1_1U1_2 = (gcnew System::Windows::Forms::TextBox());
			this->labeltrial1_1U1_1 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxtrial1_2RL_8 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_2RL_7 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_2RL_6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_2RL_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_2RL_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_2RL_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_2RL_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrial1_2RL_1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial4_2))->BeginInit();
			this->groupBox10->SuspendLayout();
			this->groupBox12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial4_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial3_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial3_2))->BeginInit();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial1_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial1_2))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial2_2))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial2_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button76
			// 
			this->button76->ForeColor = System::Drawing::Color::Black;
			this->button76->Location = System::Drawing::Point(907, 158);
			this->button76->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(96, 29);
			this->button76->TabIndex = 129;
			this->button76->Text = L"获取";
			this->button76->UseVisualStyleBackColor = true;
			// 
			// button77
			// 
			this->button77->ForeColor = System::Drawing::Color::Black;
			this->button77->Location = System::Drawing::Point(796, 158);
			this->button77->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(96, 29);
			this->button77->TabIndex = 128;
			this->button77->Text = L"获取";
			this->button77->UseVisualStyleBackColor = true;
			// 
			// button78
			// 
			this->button78->ForeColor = System::Drawing::Color::Black;
			this->button78->Location = System::Drawing::Point(685, 158);
			this->button78->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(96, 29);
			this->button78->TabIndex = 127;
			this->button78->Text = L"获取";
			this->button78->UseVisualStyleBackColor = true;
			// 
			// button79
			// 
			this->button79->ForeColor = System::Drawing::Color::Black;
			this->button79->Location = System::Drawing::Point(572, 158);
			this->button79->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(96, 29);
			this->button79->TabIndex = 126;
			this->button79->Text = L"获取";
			this->button79->UseVisualStyleBackColor = true;
			// 
			// button80
			// 
			this->button80->ForeColor = System::Drawing::Color::Black;
			this->button80->Location = System::Drawing::Point(459, 158);
			this->button80->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(96, 29);
			this->button80->TabIndex = 125;
			this->button80->Text = L"获取";
			this->button80->UseVisualStyleBackColor = true;
			// 
			// button81
			// 
			this->button81->ForeColor = System::Drawing::Color::Black;
			this->button81->Location = System::Drawing::Point(344, 158);
			this->button81->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(96, 29);
			this->button81->TabIndex = 124;
			this->button81->Text = L"获取";
			this->button81->UseVisualStyleBackColor = true;
			// 
			// button82
			// 
			this->button82->ForeColor = System::Drawing::Color::Black;
			this->button82->Location = System::Drawing::Point(236, 158);
			this->button82->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(96, 29);
			this->button82->TabIndex = 123;
			this->button82->Text = L"获取";
			this->button82->UseVisualStyleBackColor = true;
			// 
			// button83
			// 
			this->button83->ForeColor = System::Drawing::Color::Black;
			this->button83->Location = System::Drawing::Point(124, 158);
			this->button83->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(96, 29);
			this->button83->TabIndex = 122;
			this->button83->Text = L"获取";
			this->button83->UseVisualStyleBackColor = true;
			// 
			// label144
			// 
			this->label144->ForeColor = System::Drawing::Color::Black;
			this->label144->Location = System::Drawing::Point(21, 55);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(973, 38);
			this->label144->TabIndex = 87;
			this->label144->Text = L"    3．测量受控源 CCVS的转移特性U2＝F（I1）与负载特性U2＝F（IL）。实验线路如图 8－4。";
			// 
			// textBoxtrial4_2RL_8
			// 
			this->textBoxtrial4_2RL_8->Location = System::Drawing::Point(973, 95);
			this->textBoxtrial4_2RL_8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial4_2RL_8->Name = L"textBoxtrial4_2RL_8";
			this->textBoxtrial4_2RL_8->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial4_2RL_8->TabIndex = 150;
			// 
			// textBoxtrial4_2RL_7
			// 
			this->textBoxtrial4_2RL_7->Location = System::Drawing::Point(864, 95);
			this->textBoxtrial4_2RL_7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial4_2RL_7->Name = L"textBoxtrial4_2RL_7";
			this->textBoxtrial4_2RL_7->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial4_2RL_7->TabIndex = 149;
			// 
			// textBoxtrial4_2RL_6
			// 
			this->textBoxtrial4_2RL_6->Location = System::Drawing::Point(752, 94);
			this->textBoxtrial4_2RL_6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial4_2RL_6->Name = L"textBoxtrial4_2RL_6";
			this->textBoxtrial4_2RL_6->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial4_2RL_6->TabIndex = 148;
			// 
			// textBoxtrial4_2RL_5
			// 
			this->textBoxtrial4_2RL_5->Location = System::Drawing::Point(640, 94);
			this->textBoxtrial4_2RL_5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial4_2RL_5->Name = L"textBoxtrial4_2RL_5";
			this->textBoxtrial4_2RL_5->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial4_2RL_5->TabIndex = 147;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->textBoxtrial4_2RL_8);
			this->groupBox11->Controls->Add(this->textBoxtrial4_2RL_7);
			this->groupBox11->Controls->Add(this->textBoxtrial4_2RL_6);
			this->groupBox11->Controls->Add(this->textBoxtrial4_2RL_5);
			this->groupBox11->Controls->Add(this->textBoxtrial4_2RL_4);
			this->groupBox11->Controls->Add(this->textBoxtrial4_2RL_3);
			this->groupBox11->Controls->Add(this->textBoxtrial4_2RL_2);
			this->groupBox11->Controls->Add(this->textBoxtrial4_2RL_1);
			this->groupBox11->Controls->Add(this->button86);
			this->groupBox11->Controls->Add(this->button87);
			this->groupBox11->Controls->Add(this->labeltrial4_2U2_8);
			this->groupBox11->Controls->Add(this->labeltrial4_2IL_8);
			this->groupBox11->Controls->Add(this->button88);
			this->groupBox11->Controls->Add(this->button89);
			this->groupBox11->Controls->Add(this->button90);
			this->groupBox11->Controls->Add(this->button91);
			this->groupBox11->Controls->Add(this->button92);
			this->groupBox11->Controls->Add(this->button93);
			this->groupBox11->Controls->Add(this->button94);
			this->groupBox11->Controls->Add(this->button95);
			this->groupBox11->Controls->Add(this->button96);
			this->groupBox11->Controls->Add(this->button97);
			this->groupBox11->Controls->Add(this->button98);
			this->groupBox11->Controls->Add(this->button99);
			this->groupBox11->Controls->Add(this->labeltrial4_2U2_7);
			this->groupBox11->Controls->Add(this->button100);
			this->groupBox11->Controls->Add(this->button101);
			this->groupBox11->Controls->Add(this->labeltrial4_2U2_6);
			this->groupBox11->Controls->Add(this->labeltrial4_2U2_5);
			this->groupBox11->Controls->Add(this->labeltrial4_2U2_4);
			this->groupBox11->Controls->Add(this->labeltrial4_2U2_3);
			this->groupBox11->Controls->Add(this->labeltrial4_2U2_2);
			this->groupBox11->Controls->Add(this->labeltrial4_2U2_1);
			this->groupBox11->Controls->Add(this->label158);
			this->groupBox11->Controls->Add(this->chartTrial4_2);
			this->groupBox11->Controls->Add(this->button102);
			this->groupBox11->Controls->Add(this->labeltrial4_2IL_7);
			this->groupBox11->Controls->Add(this->labeltrial4_2IL_6);
			this->groupBox11->Controls->Add(this->labeltrial4_2IL_5);
			this->groupBox11->Controls->Add(this->labeltrial4_2IL_4);
			this->groupBox11->Controls->Add(this->labeltrial4_2IL_3);
			this->groupBox11->Controls->Add(this->labeltrial4_2IL_2);
			this->groupBox11->Controls->Add(this->labeltrial4_2IL_1);
			this->groupBox11->Controls->Add(this->label173);
			this->groupBox11->Controls->Add(this->label174);
			this->groupBox11->Controls->Add(this->label175);
			this->groupBox11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox11->ForeColor = System::Drawing::Color::Red;
			this->groupBox11->Location = System::Drawing::Point(47, 1032);
			this->groupBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox11->Size = System::Drawing::Size(1188, 625);
			this->groupBox11->TabIndex = 111;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"第二组";
			// 
			// textBoxtrial4_2RL_4
			// 
			this->textBoxtrial4_2RL_4->Location = System::Drawing::Point(523, 95);
			this->textBoxtrial4_2RL_4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial4_2RL_4->Name = L"textBoxtrial4_2RL_4";
			this->textBoxtrial4_2RL_4->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial4_2RL_4->TabIndex = 146;
			// 
			// textBoxtrial4_2RL_3
			// 
			this->textBoxtrial4_2RL_3->Location = System::Drawing::Point(412, 95);
			this->textBoxtrial4_2RL_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial4_2RL_3->Name = L"textBoxtrial4_2RL_3";
			this->textBoxtrial4_2RL_3->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial4_2RL_3->TabIndex = 145;
			// 
			// textBoxtrial4_2RL_2
			// 
			this->textBoxtrial4_2RL_2->Location = System::Drawing::Point(301, 95);
			this->textBoxtrial4_2RL_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial4_2RL_2->Name = L"textBoxtrial4_2RL_2";
			this->textBoxtrial4_2RL_2->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial4_2RL_2->TabIndex = 144;
			// 
			// textBoxtrial4_2RL_1
			// 
			this->textBoxtrial4_2RL_1->Location = System::Drawing::Point(192, 95);
			this->textBoxtrial4_2RL_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial4_2RL_1->Name = L"textBoxtrial4_2RL_1";
			this->textBoxtrial4_2RL_1->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial4_2RL_1->TabIndex = 143;
			// 
			// button86
			// 
			this->button86->ForeColor = System::Drawing::Color::Black;
			this->button86->Location = System::Drawing::Point(976, 262);
			this->button86->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(96, 29);
			this->button86->TabIndex = 142;
			this->button86->Text = L"获取";
			this->button86->UseVisualStyleBackColor = true;
			// 
			// button87
			// 
			this->button87->ForeColor = System::Drawing::Color::Black;
			this->button87->Location = System::Drawing::Point(979, 174);
			this->button87->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(96, 29);
			this->button87->TabIndex = 141;
			this->button87->Text = L"获取";
			this->button87->UseVisualStyleBackColor = true;
			// 
			// labeltrial4_2U2_8
			// 
			this->labeltrial4_2U2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_8->Location = System::Drawing::Point(979, 220);
			this->labeltrial4_2U2_8->Name = L"labeltrial4_2U2_8";
			this->labeltrial4_2U2_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_8->TabIndex = 140;
			// 
			// labeltrial4_2IL_8
			// 
			this->labeltrial4_2IL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_8->Location = System::Drawing::Point(979, 141);
			this->labeltrial4_2IL_8->Name = L"labeltrial4_2IL_8";
			this->labeltrial4_2IL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_8->TabIndex = 139;
			// 
			// button88
			// 
			this->button88->ForeColor = System::Drawing::Color::Black;
			this->button88->Location = System::Drawing::Point(861, 262);
			this->button88->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(96, 29);
			this->button88->TabIndex = 137;
			this->button88->Text = L"获取";
			this->button88->UseVisualStyleBackColor = true;
			// 
			// button89
			// 
			this->button89->ForeColor = System::Drawing::Color::Black;
			this->button89->Location = System::Drawing::Point(749, 262);
			this->button89->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(96, 29);
			this->button89->TabIndex = 136;
			this->button89->Text = L"获取";
			this->button89->UseVisualStyleBackColor = true;
			// 
			// button90
			// 
			this->button90->ForeColor = System::Drawing::Color::Black;
			this->button90->Location = System::Drawing::Point(636, 262);
			this->button90->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(96, 29);
			this->button90->TabIndex = 135;
			this->button90->Text = L"获取";
			this->button90->UseVisualStyleBackColor = true;
			// 
			// button91
			// 
			this->button91->ForeColor = System::Drawing::Color::Black;
			this->button91->Location = System::Drawing::Point(524, 262);
			this->button91->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(96, 29);
			this->button91->TabIndex = 134;
			this->button91->Text = L"获取";
			this->button91->UseVisualStyleBackColor = true;
			// 
			// button92
			// 
			this->button92->ForeColor = System::Drawing::Color::Black;
			this->button92->Location = System::Drawing::Point(411, 262);
			this->button92->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(96, 29);
			this->button92->TabIndex = 133;
			this->button92->Text = L"获取";
			this->button92->UseVisualStyleBackColor = true;
			// 
			// button93
			// 
			this->button93->ForeColor = System::Drawing::Color::Black;
			this->button93->Location = System::Drawing::Point(301, 262);
			this->button93->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(96, 29);
			this->button93->TabIndex = 132;
			this->button93->Text = L"获取";
			this->button93->UseVisualStyleBackColor = true;
			// 
			// button94
			// 
			this->button94->ForeColor = System::Drawing::Color::Black;
			this->button94->Location = System::Drawing::Point(188, 262);
			this->button94->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(96, 29);
			this->button94->TabIndex = 131;
			this->button94->Text = L"获取";
			this->button94->UseVisualStyleBackColor = true;
			// 
			// button95
			// 
			this->button95->ForeColor = System::Drawing::Color::Black;
			this->button95->Location = System::Drawing::Point(864, 174);
			this->button95->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(96, 29);
			this->button95->TabIndex = 129;
			this->button95->Text = L"获取";
			this->button95->UseVisualStyleBackColor = true;
			// 
			// button96
			// 
			this->button96->ForeColor = System::Drawing::Color::Black;
			this->button96->Location = System::Drawing::Point(752, 174);
			this->button96->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(96, 29);
			this->button96->TabIndex = 128;
			this->button96->Text = L"获取";
			this->button96->UseVisualStyleBackColor = true;
			// 
			// button97
			// 
			this->button97->ForeColor = System::Drawing::Color::Black;
			this->button97->Location = System::Drawing::Point(637, 174);
			this->button97->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(96, 29);
			this->button97->TabIndex = 127;
			this->button97->Text = L"获取";
			this->button97->UseVisualStyleBackColor = true;
			// 
			// button98
			// 
			this->button98->ForeColor = System::Drawing::Color::Black;
			this->button98->Location = System::Drawing::Point(525, 174);
			this->button98->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(96, 29);
			this->button98->TabIndex = 126;
			this->button98->Text = L"获取";
			this->button98->UseVisualStyleBackColor = true;
			// 
			// button99
			// 
			this->button99->ForeColor = System::Drawing::Color::Black;
			this->button99->Location = System::Drawing::Point(412, 174);
			this->button99->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(96, 29);
			this->button99->TabIndex = 125;
			this->button99->Text = L"获取";
			this->button99->UseVisualStyleBackColor = true;
			// 
			// labeltrial4_2U2_7
			// 
			this->labeltrial4_2U2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_7->Location = System::Drawing::Point(864, 220);
			this->labeltrial4_2U2_7->Name = L"labeltrial4_2U2_7";
			this->labeltrial4_2U2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_7->TabIndex = 118;
			// 
			// button100
			// 
			this->button100->ForeColor = System::Drawing::Color::Black;
			this->button100->Location = System::Drawing::Point(304, 174);
			this->button100->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(96, 29);
			this->button100->TabIndex = 124;
			this->button100->Text = L"获取";
			this->button100->UseVisualStyleBackColor = true;
			// 
			// button101
			// 
			this->button101->ForeColor = System::Drawing::Color::Black;
			this->button101->Location = System::Drawing::Point(189, 174);
			this->button101->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(96, 29);
			this->button101->TabIndex = 123;
			this->button101->Text = L"获取";
			this->button101->UseVisualStyleBackColor = true;
			// 
			// labeltrial4_2U2_6
			// 
			this->labeltrial4_2U2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_6->Location = System::Drawing::Point(755, 220);
			this->labeltrial4_2U2_6->Name = L"labeltrial4_2U2_6";
			this->labeltrial4_2U2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_6->TabIndex = 117;
			// 
			// labeltrial4_2U2_5
			// 
			this->labeltrial4_2U2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_5->Location = System::Drawing::Point(640, 220);
			this->labeltrial4_2U2_5->Name = L"labeltrial4_2U2_5";
			this->labeltrial4_2U2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_5->TabIndex = 116;
			// 
			// labeltrial4_2U2_4
			// 
			this->labeltrial4_2U2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_4->Location = System::Drawing::Point(525, 220);
			this->labeltrial4_2U2_4->Name = L"labeltrial4_2U2_4";
			this->labeltrial4_2U2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_4->TabIndex = 115;
			// 
			// labeltrial4_2U2_3
			// 
			this->labeltrial4_2U2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_3->Location = System::Drawing::Point(412, 220);
			this->labeltrial4_2U2_3->Name = L"labeltrial4_2U2_3";
			this->labeltrial4_2U2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_3->TabIndex = 114;
			// 
			// labeltrial4_2U2_2
			// 
			this->labeltrial4_2U2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_2->Location = System::Drawing::Point(304, 220);
			this->labeltrial4_2U2_2->Name = L"labeltrial4_2U2_2";
			this->labeltrial4_2U2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_2->TabIndex = 113;
			// 
			// labeltrial4_2U2_1
			// 
			this->labeltrial4_2U2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2U2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2U2_1->Location = System::Drawing::Point(192, 220);
			this->labeltrial4_2U2_1->Name = L"labeltrial4_2U2_1";
			this->labeltrial4_2U2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2U2_1->TabIndex = 112;
			// 
			// label158
			// 
			this->label158->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label158->ForeColor = System::Drawing::Color::Black;
			this->label158->Location = System::Drawing::Point(23, 224);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(109, 26);
			this->label158->TabIndex = 111;
			this->label158->Text = L"U2（v）";
			// 
			// chartTrial4_2
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartTrial4_2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartTrial4_2->Legends->Add(legend1);
			this->chartTrial4_2->Location = System::Drawing::Point(376, 308);
			this->chartTrial4_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chartTrial4_2->Name = L"chartTrial4_2";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartTrial4_2->Series->Add(series1);
			this->chartTrial4_2->Size = System::Drawing::Size(459, 300);
			this->chartTrial4_2->TabIndex = 110;
			this->chartTrial4_2->Text = L"chartTrial4_2";
			// 
			// button102
			// 
			this->button102->ForeColor = System::Drawing::Color::Black;
			this->button102->Location = System::Drawing::Point(188, 318);
			this->button102->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(131, 34);
			this->button102->TabIndex = 109;
			this->button102->Text = L"曲线生成";
			this->button102->UseVisualStyleBackColor = true;
			// 
			// labeltrial4_2IL_7
			// 
			this->labeltrial4_2IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_7->Location = System::Drawing::Point(864, 141);
			this->labeltrial4_2IL_7->Name = L"labeltrial4_2IL_7";
			this->labeltrial4_2IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_7->TabIndex = 106;
			// 
			// labeltrial4_2IL_6
			// 
			this->labeltrial4_2IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_6->Location = System::Drawing::Point(755, 141);
			this->labeltrial4_2IL_6->Name = L"labeltrial4_2IL_6";
			this->labeltrial4_2IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_6->TabIndex = 105;
			// 
			// labeltrial4_2IL_5
			// 
			this->labeltrial4_2IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_5->Location = System::Drawing::Point(640, 141);
			this->labeltrial4_2IL_5->Name = L"labeltrial4_2IL_5";
			this->labeltrial4_2IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_5->TabIndex = 104;
			// 
			// labeltrial4_2IL_4
			// 
			this->labeltrial4_2IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_4->Location = System::Drawing::Point(525, 141);
			this->labeltrial4_2IL_4->Name = L"labeltrial4_2IL_4";
			this->labeltrial4_2IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_4->TabIndex = 103;
			// 
			// labeltrial4_2IL_3
			// 
			this->labeltrial4_2IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_3->Location = System::Drawing::Point(412, 141);
			this->labeltrial4_2IL_3->Name = L"labeltrial4_2IL_3";
			this->labeltrial4_2IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_3->TabIndex = 102;
			// 
			// labeltrial4_2IL_2
			// 
			this->labeltrial4_2IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_2->Location = System::Drawing::Point(304, 141);
			this->labeltrial4_2IL_2->Name = L"labeltrial4_2IL_2";
			this->labeltrial4_2IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_2->TabIndex = 101;
			// 
			// labeltrial4_2IL_1
			// 
			this->labeltrial4_2IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_2IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_2IL_1->Location = System::Drawing::Point(192, 141);
			this->labeltrial4_2IL_1->Name = L"labeltrial4_2IL_1";
			this->labeltrial4_2IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_2IL_1->TabIndex = 100;
			// 
			// label173
			// 
			this->label173->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label173->ForeColor = System::Drawing::Color::Black;
			this->label173->Location = System::Drawing::Point(23, 141);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(109, 26);
			this->label173->TabIndex = 90;
			this->label173->Text = L"IL（mA）";
			// 
			// label174
			// 
			this->label174->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label174->ForeColor = System::Drawing::Color::Black;
			this->label174->Location = System::Drawing::Point(23, 98);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(109, 26);
			this->label174->TabIndex = 89;
			this->label174->Text = L"RL（KΩ）";
			// 
			// label175
			// 
			this->label175->ForeColor = System::Drawing::Color::Black;
			this->label175->Location = System::Drawing::Point(5, 38);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(973, 34);
			this->label175->TabIndex = 88;
			this->label175->Text = L"（2）保持IS=0.5mA，令RL从0，100Ω，200Ω增至80KΩ，测出IL，绘制IL＝F（U2）曲线。";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->groupBox11);
			this->groupBox10->Controls->Add(this->groupBox12);
			this->groupBox10->Controls->Add(this->label196);
			this->groupBox10->Controls->Add(this->pictureBox4);
			this->groupBox10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox10->ForeColor = System::Drawing::Color::Red;
			this->groupBox10->Location = System::Drawing::Point(37, 5094);
			this->groupBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox10->Size = System::Drawing::Size(1407, 1686);
			this->groupBox10->TabIndex = 123;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"实验内容四";
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->button103);
			this->groupBox12->Controls->Add(this->button104);
			this->groupBox12->Controls->Add(this->button105);
			this->groupBox12->Controls->Add(this->button106);
			this->groupBox12->Controls->Add(this->button107);
			this->groupBox12->Controls->Add(this->button108);
			this->groupBox12->Controls->Add(this->button109);
			this->groupBox12->Controls->Add(this->button110);
			this->groupBox12->Controls->Add(this->button111);
			this->groupBox12->Controls->Add(this->button112);
			this->groupBox12->Controls->Add(this->button113);
			this->groupBox12->Controls->Add(this->button114);
			this->groupBox12->Controls->Add(this->button115);
			this->groupBox12->Controls->Add(this->button116);
			this->groupBox12->Controls->Add(this->button117);
			this->groupBox12->Controls->Add(this->button118);
			this->groupBox12->Controls->Add(this->labeltrial4_1α);
			this->groupBox12->Controls->Add(this->label176);
			this->groupBox12->Controls->Add(this->chartTrial4_1);
			this->groupBox12->Controls->Add(this->button119);
			this->groupBox12->Controls->Add(this->labeltrial4_1IL_8);
			this->groupBox12->Controls->Add(this->labeltrial4_1IL_7);
			this->groupBox12->Controls->Add(this->labeltrial4_1IL_6);
			this->groupBox12->Controls->Add(this->labeltrial4_1IL_5);
			this->groupBox12->Controls->Add(this->labeltrial4_1IL_4);
			this->groupBox12->Controls->Add(this->labeltrial4_1IL_3);
			this->groupBox12->Controls->Add(this->labeltrial4_1IL_2);
			this->groupBox12->Controls->Add(this->labeltrial4_1IL_1);
			this->groupBox12->Controls->Add(this->labeltrial4_1I1_8);
			this->groupBox12->Controls->Add(this->labeltrial4_1I1_7);
			this->groupBox12->Controls->Add(this->labeltrial4_1I1_6);
			this->groupBox12->Controls->Add(this->labeltrial4_1I1_5);
			this->groupBox12->Controls->Add(this->labeltrial4_1I1_4);
			this->groupBox12->Controls->Add(this->labeltrial4_1I1_3);
			this->groupBox12->Controls->Add(this->labeltrial4_1I1_2);
			this->groupBox12->Controls->Add(this->labeltrial4_1I1_1);
			this->groupBox12->Controls->Add(this->label193);
			this->groupBox12->Controls->Add(this->label194);
			this->groupBox12->Controls->Add(this->label195);
			this->groupBox12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox12->ForeColor = System::Drawing::Color::Red;
			this->groupBox12->Location = System::Drawing::Point(47, 402);
			this->groupBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox12->Size = System::Drawing::Size(1188, 624);
			this->groupBox12->TabIndex = 89;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"第一组";
			// 
			// button103
			// 
			this->button103->ForeColor = System::Drawing::Color::Black;
			this->button103->Location = System::Drawing::Point(907, 158);
			this->button103->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(96, 29);
			this->button103->TabIndex = 129;
			this->button103->Text = L"获取";
			this->button103->UseVisualStyleBackColor = true;
			// 
			// button104
			// 
			this->button104->ForeColor = System::Drawing::Color::Black;
			this->button104->Location = System::Drawing::Point(796, 158);
			this->button104->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(96, 29);
			this->button104->TabIndex = 128;
			this->button104->Text = L"获取";
			this->button104->UseVisualStyleBackColor = true;
			// 
			// button105
			// 
			this->button105->ForeColor = System::Drawing::Color::Black;
			this->button105->Location = System::Drawing::Point(685, 158);
			this->button105->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(96, 29);
			this->button105->TabIndex = 127;
			this->button105->Text = L"获取";
			this->button105->UseVisualStyleBackColor = true;
			// 
			// button106
			// 
			this->button106->ForeColor = System::Drawing::Color::Black;
			this->button106->Location = System::Drawing::Point(572, 158);
			this->button106->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(96, 29);
			this->button106->TabIndex = 126;
			this->button106->Text = L"获取";
			this->button106->UseVisualStyleBackColor = true;
			// 
			// button107
			// 
			this->button107->ForeColor = System::Drawing::Color::Black;
			this->button107->Location = System::Drawing::Point(459, 158);
			this->button107->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(96, 29);
			this->button107->TabIndex = 125;
			this->button107->Text = L"获取";
			this->button107->UseVisualStyleBackColor = true;
			// 
			// button108
			// 
			this->button108->ForeColor = System::Drawing::Color::Black;
			this->button108->Location = System::Drawing::Point(344, 158);
			this->button108->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(96, 29);
			this->button108->TabIndex = 124;
			this->button108->Text = L"获取";
			this->button108->UseVisualStyleBackColor = true;
			// 
			// button109
			// 
			this->button109->ForeColor = System::Drawing::Color::Black;
			this->button109->Location = System::Drawing::Point(236, 158);
			this->button109->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(96, 29);
			this->button109->TabIndex = 123;
			this->button109->Text = L"获取";
			this->button109->UseVisualStyleBackColor = true;
			// 
			// button110
			// 
			this->button110->ForeColor = System::Drawing::Color::Black;
			this->button110->Location = System::Drawing::Point(124, 158);
			this->button110->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button110->Name = L"button110";
			this->button110->Size = System::Drawing::Size(96, 29);
			this->button110->TabIndex = 122;
			this->button110->Text = L"获取";
			this->button110->UseVisualStyleBackColor = true;
			// 
			// button111
			// 
			this->button111->ForeColor = System::Drawing::Color::Black;
			this->button111->Location = System::Drawing::Point(909, 250);
			this->button111->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button111->Name = L"button111";
			this->button111->Size = System::Drawing::Size(96, 29);
			this->button111->TabIndex = 121;
			this->button111->Text = L"获取";
			this->button111->UseVisualStyleBackColor = true;
			// 
			// button112
			// 
			this->button112->ForeColor = System::Drawing::Color::Black;
			this->button112->Location = System::Drawing::Point(800, 250);
			this->button112->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button112->Name = L"button112";
			this->button112->Size = System::Drawing::Size(96, 29);
			this->button112->TabIndex = 120;
			this->button112->Text = L"获取";
			this->button112->UseVisualStyleBackColor = true;
			// 
			// button113
			// 
			this->button113->ForeColor = System::Drawing::Color::Black;
			this->button113->Location = System::Drawing::Point(691, 250);
			this->button113->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button113->Name = L"button113";
			this->button113->Size = System::Drawing::Size(96, 29);
			this->button113->TabIndex = 119;
			this->button113->Text = L"获取";
			this->button113->UseVisualStyleBackColor = true;
			// 
			// button114
			// 
			this->button114->ForeColor = System::Drawing::Color::Black;
			this->button114->Location = System::Drawing::Point(576, 250);
			this->button114->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button114->Name = L"button114";
			this->button114->Size = System::Drawing::Size(96, 29);
			this->button114->TabIndex = 118;
			this->button114->Text = L"获取";
			this->button114->UseVisualStyleBackColor = true;
			// 
			// button115
			// 
			this->button115->ForeColor = System::Drawing::Color::Black;
			this->button115->Location = System::Drawing::Point(461, 250);
			this->button115->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button115->Name = L"button115";
			this->button115->Size = System::Drawing::Size(96, 29);
			this->button115->TabIndex = 117;
			this->button115->Text = L"获取";
			this->button115->UseVisualStyleBackColor = true;
			// 
			// button116
			// 
			this->button116->ForeColor = System::Drawing::Color::Black;
			this->button116->Location = System::Drawing::Point(348, 250);
			this->button116->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button116->Name = L"button116";
			this->button116->Size = System::Drawing::Size(96, 29);
			this->button116->TabIndex = 116;
			this->button116->Text = L"获取";
			this->button116->UseVisualStyleBackColor = true;
			// 
			// button117
			// 
			this->button117->ForeColor = System::Drawing::Color::Black;
			this->button117->Location = System::Drawing::Point(240, 250);
			this->button117->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button117->Name = L"button117";
			this->button117->Size = System::Drawing::Size(96, 29);
			this->button117->TabIndex = 115;
			this->button117->Text = L"获取";
			this->button117->UseVisualStyleBackColor = true;
			// 
			// button118
			// 
			this->button118->ForeColor = System::Drawing::Color::Black;
			this->button118->Location = System::Drawing::Point(128, 250);
			this->button118->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button118->Name = L"button118";
			this->button118->Size = System::Drawing::Size(96, 29);
			this->button118->TabIndex = 114;
			this->button118->Text = L"获取";
			this->button118->UseVisualStyleBackColor = true;
			// 
			// labeltrial4_1α
			// 
			this->labeltrial4_1α->Location = System::Drawing::Point(769, 581);
			this->labeltrial4_1α->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial4_1α->Name = L"labeltrial4_1α";
			this->labeltrial4_1α->Size = System::Drawing::Size(132, 30);
			this->labeltrial4_1α->TabIndex = 113;
			// 
			// label176
			// 
			this->label176->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label176->ForeColor = System::Drawing::Color::Black;
			this->label176->Location = System::Drawing::Point(609, 585);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(147, 26);
			this->label176->TabIndex = 112;
			this->label176->Text = L"转移电流比α";
			// 
			// chartTrial4_1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartTrial4_1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartTrial4_1->Legends->Add(legend2);
			this->chartTrial4_1->Location = System::Drawing::Point(128, 311);
			this->chartTrial4_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chartTrial4_1->Name = L"chartTrial4_1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chartTrial4_1->Series->Add(series2);
			this->chartTrial4_1->Size = System::Drawing::Size(459, 300);
			this->chartTrial4_1->TabIndex = 110;
			this->chartTrial4_1->Text = L"chartTrial4_1";
			// 
			// button119
			// 
			this->button119->ForeColor = System::Drawing::Color::Black;
			this->button119->Location = System::Drawing::Point(5, 311);
			this->button119->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button119->Name = L"button119";
			this->button119->Size = System::Drawing::Size(127, 34);
			this->button119->TabIndex = 109;
			this->button119->Text = L"曲线生成";
			this->button119->UseVisualStyleBackColor = true;
			// 
			// labeltrial4_1IL_8
			// 
			this->labeltrial4_1IL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_8->Location = System::Drawing::Point(915, 215);
			this->labeltrial4_1IL_8->Name = L"labeltrial4_1IL_8";
			this->labeltrial4_1IL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_8->TabIndex = 107;
			// 
			// labeltrial4_1IL_7
			// 
			this->labeltrial4_1IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_7->Location = System::Drawing::Point(800, 215);
			this->labeltrial4_1IL_7->Name = L"labeltrial4_1IL_7";
			this->labeltrial4_1IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_7->TabIndex = 106;
			// 
			// labeltrial4_1IL_6
			// 
			this->labeltrial4_1IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_6->Location = System::Drawing::Point(691, 215);
			this->labeltrial4_1IL_6->Name = L"labeltrial4_1IL_6";
			this->labeltrial4_1IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_6->TabIndex = 105;
			// 
			// labeltrial4_1IL_5
			// 
			this->labeltrial4_1IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_5->Location = System::Drawing::Point(576, 215);
			this->labeltrial4_1IL_5->Name = L"labeltrial4_1IL_5";
			this->labeltrial4_1IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_5->TabIndex = 104;
			// 
			// labeltrial4_1IL_4
			// 
			this->labeltrial4_1IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_4->Location = System::Drawing::Point(461, 215);
			this->labeltrial4_1IL_4->Name = L"labeltrial4_1IL_4";
			this->labeltrial4_1IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_4->TabIndex = 103;
			// 
			// labeltrial4_1IL_3
			// 
			this->labeltrial4_1IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_3->Location = System::Drawing::Point(348, 215);
			this->labeltrial4_1IL_3->Name = L"labeltrial4_1IL_3";
			this->labeltrial4_1IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_3->TabIndex = 102;
			// 
			// labeltrial4_1IL_2
			// 
			this->labeltrial4_1IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_2->Location = System::Drawing::Point(240, 215);
			this->labeltrial4_1IL_2->Name = L"labeltrial4_1IL_2";
			this->labeltrial4_1IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_2->TabIndex = 101;
			// 
			// labeltrial4_1IL_1
			// 
			this->labeltrial4_1IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1IL_1->Location = System::Drawing::Point(128, 215);
			this->labeltrial4_1IL_1->Name = L"labeltrial4_1IL_1";
			this->labeltrial4_1IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial4_1IL_1->TabIndex = 100;
			// 
			// labeltrial4_1I1_8
			// 
			this->labeltrial4_1I1_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_8->Location = System::Drawing::Point(909, 119);
			this->labeltrial4_1I1_8->Name = L"labeltrial4_1I1_8";
			this->labeltrial4_1I1_8->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_8->TabIndex = 98;
			this->labeltrial4_1I1_8->Text = L" ";
			// 
			// labeltrial4_1I1_7
			// 
			this->labeltrial4_1I1_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_7->Location = System::Drawing::Point(796, 119);
			this->labeltrial4_1I1_7->Name = L"labeltrial4_1I1_7";
			this->labeltrial4_1I1_7->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_7->TabIndex = 97;
			this->labeltrial4_1I1_7->Text = L" ";
			// 
			// labeltrial4_1I1_6
			// 
			this->labeltrial4_1I1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_6->Location = System::Drawing::Point(685, 119);
			this->labeltrial4_1I1_6->Name = L"labeltrial4_1I1_6";
			this->labeltrial4_1I1_6->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_6->TabIndex = 96;
			this->labeltrial4_1I1_6->Text = L" ";
			// 
			// labeltrial4_1I1_5
			// 
			this->labeltrial4_1I1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_5->Location = System::Drawing::Point(572, 119);
			this->labeltrial4_1I1_5->Name = L"labeltrial4_1I1_5";
			this->labeltrial4_1I1_5->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_5->TabIndex = 95;
			this->labeltrial4_1I1_5->Text = L" ";
			// 
			// labeltrial4_1I1_4
			// 
			this->labeltrial4_1I1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_4->Location = System::Drawing::Point(459, 119);
			this->labeltrial4_1I1_4->Name = L"labeltrial4_1I1_4";
			this->labeltrial4_1I1_4->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_4->TabIndex = 94;
			this->labeltrial4_1I1_4->Text = L" ";
			// 
			// labeltrial4_1I1_3
			// 
			this->labeltrial4_1I1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_3->Location = System::Drawing::Point(344, 119);
			this->labeltrial4_1I1_3->Name = L"labeltrial4_1I1_3";
			this->labeltrial4_1I1_3->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_3->TabIndex = 93;
			this->labeltrial4_1I1_3->Text = L" ";
			// 
			// labeltrial4_1I1_2
			// 
			this->labeltrial4_1I1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_2->Location = System::Drawing::Point(236, 119);
			this->labeltrial4_1I1_2->Name = L"labeltrial4_1I1_2";
			this->labeltrial4_1I1_2->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_2->TabIndex = 92;
			this->labeltrial4_1I1_2->Text = L" ";
			// 
			// labeltrial4_1I1_1
			// 
			this->labeltrial4_1I1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial4_1I1_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial4_1I1_1->Location = System::Drawing::Point(128, 119);
			this->labeltrial4_1I1_1->Name = L"labeltrial4_1I1_1";
			this->labeltrial4_1I1_1->Size = System::Drawing::Size(100, 26);
			this->labeltrial4_1I1_1->TabIndex = 91;
			this->labeltrial4_1I1_1->Text = L" ";
			// 
			// label193
			// 
			this->label193->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label193->ForeColor = System::Drawing::Color::Black;
			this->label193->Location = System::Drawing::Point(21, 219);
			this->label193->Name = L"label193";
			this->label193->Size = System::Drawing::Size(101, 26);
			this->label193->TabIndex = 90;
			this->label193->Text = L"IL（mA）";
			// 
			// label194
			// 
			this->label194->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label194->ForeColor = System::Drawing::Color::Black;
			this->label194->Location = System::Drawing::Point(21, 119);
			this->label194->Name = L"label194";
			this->label194->Size = System::Drawing::Size(101, 26);
			this->label194->TabIndex = 89;
			this->label194->Text = L"I1（mA）";
			// 
			// label195
			// 
			this->label195->ForeColor = System::Drawing::Color::Black;
			this->label195->Location = System::Drawing::Point(28, 40);
			this->label195->Name = L"label195";
			this->label195->Size = System::Drawing::Size(973, 58);
			this->label195->TabIndex = 88;
			this->label195->Text = L"  （1）固定RL＝2KΩ，调节恒流源的输出电流IS，使其在0.05~0.7mA范围内取8个数值，测出IL，绘制IL＝F（I1）曲线，并由其线性部分求出转移电流比"
				L"α。";
			// 
			// label196
			// 
			this->label196->ForeColor = System::Drawing::Color::Black;
			this->label196->Location = System::Drawing::Point(21, 55);
			this->label196->Name = L"label196";
			this->label196->Size = System::Drawing::Size(973, 38);
			this->label196->TabIndex = 87;
			this->label196->Text = L"    4．测量受控源CCCS的转移特性 IL＝F（I1）及负载特性IL＝F（U2）。实验线路如图 8－5。";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(403, 96);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(389, 279);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 111;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(403, 96);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(389, 279);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 111;
			this->pictureBox3->TabStop = false;
			// 
			// button67
			// 
			this->button67->ForeColor = System::Drawing::Color::Black;
			this->button67->Location = System::Drawing::Point(909, 250);
			this->button67->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(96, 29);
			this->button67->TabIndex = 121;
			this->button67->Text = L"获取";
			this->button67->UseVisualStyleBackColor = true;
			// 
			// button68
			// 
			this->button68->ForeColor = System::Drawing::Color::Black;
			this->button68->Location = System::Drawing::Point(800, 250);
			this->button68->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(96, 29);
			this->button68->TabIndex = 120;
			this->button68->Text = L"获取";
			this->button68->UseVisualStyleBackColor = true;
			// 
			// button69
			// 
			this->button69->ForeColor = System::Drawing::Color::Black;
			this->button69->Location = System::Drawing::Point(691, 250);
			this->button69->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(96, 29);
			this->button69->TabIndex = 119;
			this->button69->Text = L"获取";
			this->button69->UseVisualStyleBackColor = true;
			// 
			// button70
			// 
			this->button70->ForeColor = System::Drawing::Color::Black;
			this->button70->Location = System::Drawing::Point(576, 250);
			this->button70->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(96, 29);
			this->button70->TabIndex = 118;
			this->button70->Text = L"获取";
			this->button70->UseVisualStyleBackColor = true;
			// 
			// button71
			// 
			this->button71->ForeColor = System::Drawing::Color::Black;
			this->button71->Location = System::Drawing::Point(461, 250);
			this->button71->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(96, 29);
			this->button71->TabIndex = 117;
			this->button71->Text = L"获取";
			this->button71->UseVisualStyleBackColor = true;
			// 
			// button72
			// 
			this->button72->ForeColor = System::Drawing::Color::Black;
			this->button72->Location = System::Drawing::Point(348, 250);
			this->button72->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(96, 29);
			this->button72->TabIndex = 116;
			this->button72->Text = L"获取";
			this->button72->UseVisualStyleBackColor = true;
			// 
			// button73
			// 
			this->button73->ForeColor = System::Drawing::Color::Black;
			this->button73->Location = System::Drawing::Point(240, 250);
			this->button73->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(96, 29);
			this->button73->TabIndex = 115;
			this->button73->Text = L"获取";
			this->button73->UseVisualStyleBackColor = true;
			// 
			// button74
			// 
			this->button74->ForeColor = System::Drawing::Color::Black;
			this->button74->Location = System::Drawing::Point(128, 250);
			this->button74->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(96, 29);
			this->button74->TabIndex = 114;
			this->button74->Text = L"获取";
			this->button74->UseVisualStyleBackColor = true;
			// 
			// textBoxtrial3_1rm
			// 
			this->textBoxtrial3_1rm->Location = System::Drawing::Point(769, 581);
			this->textBoxtrial3_1rm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial3_1rm->Name = L"textBoxtrial3_1rm";
			this->textBoxtrial3_1rm->Size = System::Drawing::Size(132, 30);
			this->textBoxtrial3_1rm->TabIndex = 113;
			// 
			// label124
			// 
			this->label124->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label124->ForeColor = System::Drawing::Color::Black;
			this->label124->Location = System::Drawing::Point(609, 585);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(147, 26);
			this->label124->TabIndex = 112;
			this->label124->Text = L"转移电阻rm";
			// 
			// button75
			// 
			this->button75->ForeColor = System::Drawing::Color::Black;
			this->button75->Location = System::Drawing::Point(5, 311);
			this->button75->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(127, 34);
			this->button75->TabIndex = 109;
			this->button75->Text = L"曲线生成";
			this->button75->UseVisualStyleBackColor = true;
			// 
			// labeltrial3_1V2_8
			// 
			this->labeltrial3_1V2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_8->Location = System::Drawing::Point(915, 215);
			this->labeltrial3_1V2_8->Name = L"labeltrial3_1V2_8";
			this->labeltrial3_1V2_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_8->TabIndex = 107;
			// 
			// labeltrial3_1V2_7
			// 
			this->labeltrial3_1V2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_7->Location = System::Drawing::Point(800, 215);
			this->labeltrial3_1V2_7->Name = L"labeltrial3_1V2_7";
			this->labeltrial3_1V2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_7->TabIndex = 106;
			// 
			// labeltrial3_1V2_6
			// 
			this->labeltrial3_1V2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_6->Location = System::Drawing::Point(691, 215);
			this->labeltrial3_1V2_6->Name = L"labeltrial3_1V2_6";
			this->labeltrial3_1V2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_6->TabIndex = 105;
			// 
			// labeltrial3_1V2_5
			// 
			this->labeltrial3_1V2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_5->Location = System::Drawing::Point(576, 215);
			this->labeltrial3_1V2_5->Name = L"labeltrial3_1V2_5";
			this->labeltrial3_1V2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_5->TabIndex = 104;
			// 
			// chartTrial3_1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartTrial3_1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chartTrial3_1->Legends->Add(legend3);
			this->chartTrial3_1->Location = System::Drawing::Point(128, 311);
			this->chartTrial3_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chartTrial3_1->Name = L"chartTrial3_1";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chartTrial3_1->Series->Add(series3);
			this->chartTrial3_1->Size = System::Drawing::Size(459, 300);
			this->chartTrial3_1->TabIndex = 110;
			this->chartTrial3_1->Text = L"chartTrial3_1";
			// 
			// labeltrial3_1V2_4
			// 
			this->labeltrial3_1V2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_4->Location = System::Drawing::Point(461, 215);
			this->labeltrial3_1V2_4->Name = L"labeltrial3_1V2_4";
			this->labeltrial3_1V2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_4->TabIndex = 103;
			// 
			// labeltrial2_1IL_3
			// 
			this->labeltrial2_1IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_3->Location = System::Drawing::Point(350, 201);
			this->labeltrial2_1IL_3->Name = L"labeltrial2_1IL_3";
			this->labeltrial2_1IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_3->TabIndex = 102;
			// 
			// labeltrial2_1IL_1
			// 
			this->labeltrial2_1IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_1->Location = System::Drawing::Point(130, 201);
			this->labeltrial2_1IL_1->Name = L"labeltrial2_1IL_1";
			this->labeltrial2_1IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_1->TabIndex = 100;
			// 
			// label100
			// 
			this->label100->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label100->ForeColor = System::Drawing::Color::Black;
			this->label100->Location = System::Drawing::Point(23, 204);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(101, 26);
			this->label100->TabIndex = 90;
			this->label100->Text = L"IL（mA）";
			// 
			// label101
			// 
			this->label101->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label101->ForeColor = System::Drawing::Color::Black;
			this->label101->Location = System::Drawing::Point(21, 119);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(101, 26);
			this->label101->TabIndex = 89;
			this->label101->Text = L"U1（v）";
			// 
			// label102
			// 
			this->label102->ForeColor = System::Drawing::Color::Black;
			this->label102->Location = System::Drawing::Point(28, 40);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(973, 58);
			this->label102->TabIndex = 88;
			this->label102->Text = L"   （1）固定RL＝2KΩ，调节稳压电源的输出电压U1，测出相应的IL值，绘制IL＝F（U1）曲线，并由其线性部分求出转移电导gm 。";
			// 
			// label103
			// 
			this->label103->ForeColor = System::Drawing::Color::Black;
			this->label103->Location = System::Drawing::Point(21, 55);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(973, 38);
			this->label103->TabIndex = 87;
			this->label103->Text = L"   2．测量受控源VCCS的转移特性IL=F（U1）及负载特性IL=F（U2），实验线路如图 8-3。\r\n";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(403, 96);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(389, 279);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 111;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->groupBox8);
			this->groupBox7->Controls->Add(this->groupBox9);
			this->groupBox7->Controls->Add(this->label144);
			this->groupBox7->Controls->Add(this->pictureBox3);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox7->ForeColor = System::Drawing::Color::Red;
			this->groupBox7->Location = System::Drawing::Point(37, 3388);
			this->groupBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox7->Size = System::Drawing::Size(1407, 1686);
			this->groupBox7->TabIndex = 122;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"实验内容三";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxtrial3_2RL_8);
			this->groupBox8->Controls->Add(this->textBoxtrial3_2RL_7);
			this->groupBox8->Controls->Add(this->textBoxtrial3_2RL_6);
			this->groupBox8->Controls->Add(this->textBoxtrial3_2RL_5);
			this->groupBox8->Controls->Add(this->textBoxtrial3_2RL_4);
			this->groupBox8->Controls->Add(this->textBoxtrial3_2RL_3);
			this->groupBox8->Controls->Add(this->textBoxtrial3_2RL_2);
			this->groupBox8->Controls->Add(this->textBoxtrial3_2RL_1);
			this->groupBox8->Controls->Add(this->button84);
			this->groupBox8->Controls->Add(this->button85);
			this->groupBox8->Controls->Add(this->labeltrial3_2IL_8);
			this->groupBox8->Controls->Add(this->labeltrial3_2U2_8);
			this->groupBox8->Controls->Add(this->button26);
			this->groupBox8->Controls->Add(this->button36);
			this->groupBox8->Controls->Add(this->button45);
			this->groupBox8->Controls->Add(this->button55);
			this->groupBox8->Controls->Add(this->button56);
			this->groupBox8->Controls->Add(this->button57);
			this->groupBox8->Controls->Add(this->button58);
			this->groupBox8->Controls->Add(this->button59);
			this->groupBox8->Controls->Add(this->button60);
			this->groupBox8->Controls->Add(this->button61);
			this->groupBox8->Controls->Add(this->button62);
			this->groupBox8->Controls->Add(this->button63);
			this->groupBox8->Controls->Add(this->labeltrial3_2IL_7);
			this->groupBox8->Controls->Add(this->button64);
			this->groupBox8->Controls->Add(this->button65);
			this->groupBox8->Controls->Add(this->labeltrial3_2IL_6);
			this->groupBox8->Controls->Add(this->labeltrial3_2IL_5);
			this->groupBox8->Controls->Add(this->labeltrial3_2IL_4);
			this->groupBox8->Controls->Add(this->labeltrial3_2IL_3);
			this->groupBox8->Controls->Add(this->labeltrial3_2IL_2);
			this->groupBox8->Controls->Add(this->labeltrial3_2IL_1);
			this->groupBox8->Controls->Add(this->label106);
			this->groupBox8->Controls->Add(this->chartTrial3_2);
			this->groupBox8->Controls->Add(this->button66);
			this->groupBox8->Controls->Add(this->labeltrial3_2U2_7);
			this->groupBox8->Controls->Add(this->labeltrial3_2U2_6);
			this->groupBox8->Controls->Add(this->labeltrial3_2U2_5);
			this->groupBox8->Controls->Add(this->labeltrial3_2U2_4);
			this->groupBox8->Controls->Add(this->labeltrial3_2U2_3);
			this->groupBox8->Controls->Add(this->labeltrial3_2U2_2);
			this->groupBox8->Controls->Add(this->labeltrial3_2U2_1);
			this->groupBox8->Controls->Add(this->label121);
			this->groupBox8->Controls->Add(this->label122);
			this->groupBox8->Controls->Add(this->label123);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox8->ForeColor = System::Drawing::Color::Red;
			this->groupBox8->Location = System::Drawing::Point(47, 1032);
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(1188, 625);
			this->groupBox8->TabIndex = 111;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"第二组";
			// 
			// textBoxtrial3_2RL_8
			// 
			this->textBoxtrial3_2RL_8->Location = System::Drawing::Point(974, 94);
			this->textBoxtrial3_2RL_8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial3_2RL_8->Name = L"textBoxtrial3_2RL_8";
			this->textBoxtrial3_2RL_8->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial3_2RL_8->TabIndex = 150;
			// 
			// textBoxtrial3_2RL_7
			// 
			this->textBoxtrial3_2RL_7->Location = System::Drawing::Point(860, 94);
			this->textBoxtrial3_2RL_7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial3_2RL_7->Name = L"textBoxtrial3_2RL_7";
			this->textBoxtrial3_2RL_7->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial3_2RL_7->TabIndex = 149;
			// 
			// textBoxtrial3_2RL_6
			// 
			this->textBoxtrial3_2RL_6->Location = System::Drawing::Point(752, 94);
			this->textBoxtrial3_2RL_6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial3_2RL_6->Name = L"textBoxtrial3_2RL_6";
			this->textBoxtrial3_2RL_6->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial3_2RL_6->TabIndex = 148;
			// 
			// textBoxtrial3_2RL_5
			// 
			this->textBoxtrial3_2RL_5->Location = System::Drawing::Point(640, 94);
			this->textBoxtrial3_2RL_5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial3_2RL_5->Name = L"textBoxtrial3_2RL_5";
			this->textBoxtrial3_2RL_5->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial3_2RL_5->TabIndex = 147;
			// 
			// textBoxtrial3_2RL_4
			// 
			this->textBoxtrial3_2RL_4->Location = System::Drawing::Point(522, 94);
			this->textBoxtrial3_2RL_4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial3_2RL_4->Name = L"textBoxtrial3_2RL_4";
			this->textBoxtrial3_2RL_4->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial3_2RL_4->TabIndex = 146;
			// 
			// textBoxtrial3_2RL_3
			// 
			this->textBoxtrial3_2RL_3->Location = System::Drawing::Point(410, 94);
			this->textBoxtrial3_2RL_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial3_2RL_3->Name = L"textBoxtrial3_2RL_3";
			this->textBoxtrial3_2RL_3->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial3_2RL_3->TabIndex = 145;
			// 
			// textBoxtrial3_2RL_2
			// 
			this->textBoxtrial3_2RL_2->Location = System::Drawing::Point(304, 94);
			this->textBoxtrial3_2RL_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial3_2RL_2->Name = L"textBoxtrial3_2RL_2";
			this->textBoxtrial3_2RL_2->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial3_2RL_2->TabIndex = 144;
			// 
			// textBoxtrial3_2RL_1
			// 
			this->textBoxtrial3_2RL_1->Location = System::Drawing::Point(192, 94);
			this->textBoxtrial3_2RL_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial3_2RL_1->Name = L"textBoxtrial3_2RL_1";
			this->textBoxtrial3_2RL_1->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial3_2RL_1->TabIndex = 143;
			// 
			// button84
			// 
			this->button84->ForeColor = System::Drawing::Color::Black;
			this->button84->Location = System::Drawing::Point(976, 262);
			this->button84->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(96, 29);
			this->button84->TabIndex = 142;
			this->button84->Text = L"获取";
			this->button84->UseVisualStyleBackColor = true;
			// 
			// button85
			// 
			this->button85->ForeColor = System::Drawing::Color::Black;
			this->button85->Location = System::Drawing::Point(979, 174);
			this->button85->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(96, 29);
			this->button85->TabIndex = 141;
			this->button85->Text = L"获取";
			this->button85->UseVisualStyleBackColor = true;
			// 
			// labeltrial3_2IL_8
			// 
			this->labeltrial3_2IL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_8->Location = System::Drawing::Point(979, 220);
			this->labeltrial3_2IL_8->Name = L"labeltrial3_2IL_8";
			this->labeltrial3_2IL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_8->TabIndex = 140;
			// 
			// labeltrial3_2U2_8
			// 
			this->labeltrial3_2U2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_8->Location = System::Drawing::Point(979, 141);
			this->labeltrial3_2U2_8->Name = L"labeltrial3_2U2_8";
			this->labeltrial3_2U2_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_8->TabIndex = 139;
			// 
			// button26
			// 
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(861, 262);
			this->button26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(96, 29);
			this->button26->TabIndex = 137;
			this->button26->Text = L"获取";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(749, 262);
			this->button36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(96, 29);
			this->button36->TabIndex = 136;
			this->button36->Text = L"获取";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(636, 262);
			this->button45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(96, 29);
			this->button45->TabIndex = 135;
			this->button45->Text = L"获取";
			this->button45->UseVisualStyleBackColor = true;
			// 
			// button55
			// 
			this->button55->ForeColor = System::Drawing::Color::Black;
			this->button55->Location = System::Drawing::Point(524, 262);
			this->button55->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(96, 29);
			this->button55->TabIndex = 134;
			this->button55->Text = L"获取";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// button56
			// 
			this->button56->ForeColor = System::Drawing::Color::Black;
			this->button56->Location = System::Drawing::Point(411, 262);
			this->button56->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(96, 29);
			this->button56->TabIndex = 133;
			this->button56->Text = L"获取";
			this->button56->UseVisualStyleBackColor = true;
			// 
			// button57
			// 
			this->button57->ForeColor = System::Drawing::Color::Black;
			this->button57->Location = System::Drawing::Point(301, 262);
			this->button57->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(96, 29);
			this->button57->TabIndex = 132;
			this->button57->Text = L"获取";
			this->button57->UseVisualStyleBackColor = true;
			// 
			// button58
			// 
			this->button58->ForeColor = System::Drawing::Color::Black;
			this->button58->Location = System::Drawing::Point(188, 262);
			this->button58->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(96, 29);
			this->button58->TabIndex = 131;
			this->button58->Text = L"获取";
			this->button58->UseVisualStyleBackColor = true;
			// 
			// button59
			// 
			this->button59->ForeColor = System::Drawing::Color::Black;
			this->button59->Location = System::Drawing::Point(864, 174);
			this->button59->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(96, 29);
			this->button59->TabIndex = 129;
			this->button59->Text = L"获取";
			this->button59->UseVisualStyleBackColor = true;
			// 
			// button60
			// 
			this->button60->ForeColor = System::Drawing::Color::Black;
			this->button60->Location = System::Drawing::Point(752, 174);
			this->button60->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(96, 29);
			this->button60->TabIndex = 128;
			this->button60->Text = L"获取";
			this->button60->UseVisualStyleBackColor = true;
			// 
			// button61
			// 
			this->button61->ForeColor = System::Drawing::Color::Black;
			this->button61->Location = System::Drawing::Point(637, 174);
			this->button61->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(96, 29);
			this->button61->TabIndex = 127;
			this->button61->Text = L"获取";
			this->button61->UseVisualStyleBackColor = true;
			// 
			// button62
			// 
			this->button62->ForeColor = System::Drawing::Color::Black;
			this->button62->Location = System::Drawing::Point(525, 174);
			this->button62->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(96, 29);
			this->button62->TabIndex = 126;
			this->button62->Text = L"获取";
			this->button62->UseVisualStyleBackColor = true;
			// 
			// button63
			// 
			this->button63->ForeColor = System::Drawing::Color::Black;
			this->button63->Location = System::Drawing::Point(412, 174);
			this->button63->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(96, 29);
			this->button63->TabIndex = 125;
			this->button63->Text = L"获取";
			this->button63->UseVisualStyleBackColor = true;
			// 
			// labeltrial3_2IL_7
			// 
			this->labeltrial3_2IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_7->Location = System::Drawing::Point(864, 220);
			this->labeltrial3_2IL_7->Name = L"labeltrial3_2IL_7";
			this->labeltrial3_2IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_7->TabIndex = 118;
			// 
			// button64
			// 
			this->button64->ForeColor = System::Drawing::Color::Black;
			this->button64->Location = System::Drawing::Point(304, 174);
			this->button64->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(96, 29);
			this->button64->TabIndex = 124;
			this->button64->Text = L"获取";
			this->button64->UseVisualStyleBackColor = true;
			// 
			// button65
			// 
			this->button65->ForeColor = System::Drawing::Color::Black;
			this->button65->Location = System::Drawing::Point(189, 174);
			this->button65->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(96, 29);
			this->button65->TabIndex = 123;
			this->button65->Text = L"获取";
			this->button65->UseVisualStyleBackColor = true;
			// 
			// labeltrial3_2IL_6
			// 
			this->labeltrial3_2IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_6->Location = System::Drawing::Point(755, 220);
			this->labeltrial3_2IL_6->Name = L"labeltrial3_2IL_6";
			this->labeltrial3_2IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_6->TabIndex = 117;
			// 
			// labeltrial3_2IL_5
			// 
			this->labeltrial3_2IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_5->Location = System::Drawing::Point(640, 220);
			this->labeltrial3_2IL_5->Name = L"labeltrial3_2IL_5";
			this->labeltrial3_2IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_5->TabIndex = 116;
			// 
			// labeltrial3_2IL_4
			// 
			this->labeltrial3_2IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_4->Location = System::Drawing::Point(525, 220);
			this->labeltrial3_2IL_4->Name = L"labeltrial3_2IL_4";
			this->labeltrial3_2IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_4->TabIndex = 115;
			// 
			// labeltrial3_2IL_3
			// 
			this->labeltrial3_2IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_3->Location = System::Drawing::Point(412, 220);
			this->labeltrial3_2IL_3->Name = L"labeltrial3_2IL_3";
			this->labeltrial3_2IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_3->TabIndex = 114;
			// 
			// labeltrial3_2IL_2
			// 
			this->labeltrial3_2IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_2->Location = System::Drawing::Point(304, 220);
			this->labeltrial3_2IL_2->Name = L"labeltrial3_2IL_2";
			this->labeltrial3_2IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_2->TabIndex = 113;
			// 
			// labeltrial3_2IL_1
			// 
			this->labeltrial3_2IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2IL_1->Location = System::Drawing::Point(192, 220);
			this->labeltrial3_2IL_1->Name = L"labeltrial3_2IL_1";
			this->labeltrial3_2IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2IL_1->TabIndex = 112;
			// 
			// label106
			// 
			this->label106->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label106->ForeColor = System::Drawing::Color::Black;
			this->label106->Location = System::Drawing::Point(23, 224);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(109, 26);
			this->label106->TabIndex = 111;
			this->label106->Text = L"IL（mA）";
			// 
			// chartTrial3_2
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartTrial3_2->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chartTrial3_2->Legends->Add(legend4);
			this->chartTrial3_2->Location = System::Drawing::Point(376, 308);
			this->chartTrial3_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chartTrial3_2->Name = L"chartTrial3_2";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chartTrial3_2->Series->Add(series4);
			this->chartTrial3_2->Size = System::Drawing::Size(459, 300);
			this->chartTrial3_2->TabIndex = 110;
			this->chartTrial3_2->Text = L"chartTrial3_2";
			// 
			// button66
			// 
			this->button66->ForeColor = System::Drawing::Color::Black;
			this->button66->Location = System::Drawing::Point(188, 318);
			this->button66->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(144, 34);
			this->button66->TabIndex = 109;
			this->button66->Text = L"曲线生成";
			this->button66->UseVisualStyleBackColor = true;
			// 
			// labeltrial3_2U2_7
			// 
			this->labeltrial3_2U2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_7->Location = System::Drawing::Point(864, 141);
			this->labeltrial3_2U2_7->Name = L"labeltrial3_2U2_7";
			this->labeltrial3_2U2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_7->TabIndex = 106;
			// 
			// labeltrial3_2U2_6
			// 
			this->labeltrial3_2U2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_6->Location = System::Drawing::Point(755, 141);
			this->labeltrial3_2U2_6->Name = L"labeltrial3_2U2_6";
			this->labeltrial3_2U2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_6->TabIndex = 105;
			// 
			// labeltrial3_2U2_5
			// 
			this->labeltrial3_2U2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_5->Location = System::Drawing::Point(640, 141);
			this->labeltrial3_2U2_5->Name = L"labeltrial3_2U2_5";
			this->labeltrial3_2U2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_5->TabIndex = 104;
			// 
			// labeltrial3_2U2_4
			// 
			this->labeltrial3_2U2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_4->Location = System::Drawing::Point(525, 141);
			this->labeltrial3_2U2_4->Name = L"labeltrial3_2U2_4";
			this->labeltrial3_2U2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_4->TabIndex = 103;
			// 
			// labeltrial3_2U2_3
			// 
			this->labeltrial3_2U2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_3->Location = System::Drawing::Point(412, 141);
			this->labeltrial3_2U2_3->Name = L"labeltrial3_2U2_3";
			this->labeltrial3_2U2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_3->TabIndex = 102;
			// 
			// labeltrial3_2U2_2
			// 
			this->labeltrial3_2U2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_2->Location = System::Drawing::Point(304, 141);
			this->labeltrial3_2U2_2->Name = L"labeltrial3_2U2_2";
			this->labeltrial3_2U2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_2->TabIndex = 101;
			// 
			// labeltrial3_2U2_1
			// 
			this->labeltrial3_2U2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_2U2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_2U2_1->Location = System::Drawing::Point(192, 141);
			this->labeltrial3_2U2_1->Name = L"labeltrial3_2U2_1";
			this->labeltrial3_2U2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_2U2_1->TabIndex = 100;
			// 
			// label121
			// 
			this->label121->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label121->ForeColor = System::Drawing::Color::Black;
			this->label121->Location = System::Drawing::Point(23, 141);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(109, 26);
			this->label121->TabIndex = 90;
			this->label121->Text = L"U2（v）";
			// 
			// label122
			// 
			this->label122->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label122->ForeColor = System::Drawing::Color::Black;
			this->label122->Location = System::Drawing::Point(23, 98);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(109, 26);
			this->label122->TabIndex = 89;
			this->label122->Text = L"RL（KΩ）";
			// 
			// label123
			// 
			this->label123->ForeColor = System::Drawing::Color::Black;
			this->label123->Location = System::Drawing::Point(5, 38);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(973, 32);
			this->label123->TabIndex = 88;
			this->label123->Text = L"（2）保持IS＝0.5mA，令RL从1KΩ增至8KΩ，测出U2及IL，绘制负载特性曲线U2＝F（IL）。";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->button76);
			this->groupBox9->Controls->Add(this->button77);
			this->groupBox9->Controls->Add(this->button78);
			this->groupBox9->Controls->Add(this->button79);
			this->groupBox9->Controls->Add(this->button80);
			this->groupBox9->Controls->Add(this->button81);
			this->groupBox9->Controls->Add(this->button82);
			this->groupBox9->Controls->Add(this->button83);
			this->groupBox9->Controls->Add(this->button67);
			this->groupBox9->Controls->Add(this->button68);
			this->groupBox9->Controls->Add(this->button69);
			this->groupBox9->Controls->Add(this->button70);
			this->groupBox9->Controls->Add(this->button71);
			this->groupBox9->Controls->Add(this->button72);
			this->groupBox9->Controls->Add(this->button73);
			this->groupBox9->Controls->Add(this->button74);
			this->groupBox9->Controls->Add(this->textBoxtrial3_1rm);
			this->groupBox9->Controls->Add(this->label124);
			this->groupBox9->Controls->Add(this->chartTrial3_1);
			this->groupBox9->Controls->Add(this->button75);
			this->groupBox9->Controls->Add(this->labeltrial3_1V2_8);
			this->groupBox9->Controls->Add(this->labeltrial3_1V2_7);
			this->groupBox9->Controls->Add(this->labeltrial3_1V2_6);
			this->groupBox9->Controls->Add(this->labeltrial3_1V2_5);
			this->groupBox9->Controls->Add(this->labeltrial3_1V2_4);
			this->groupBox9->Controls->Add(this->labeltrial3_1V2_3);
			this->groupBox9->Controls->Add(this->labeltrial3_1V2_2);
			this->groupBox9->Controls->Add(this->labeltrial3_1V2_1);
			this->groupBox9->Controls->Add(this->labeltrial3_1I1_8);
			this->groupBox9->Controls->Add(this->labeltrial3_1I1_7);
			this->groupBox9->Controls->Add(this->labeltrial3_1I1_6);
			this->groupBox9->Controls->Add(this->labeltrial3_1I1_5);
			this->groupBox9->Controls->Add(this->labeltrial3_1I1_4);
			this->groupBox9->Controls->Add(this->labeltrial3_1I1_3);
			this->groupBox9->Controls->Add(this->labeltrial3_1I1_2);
			this->groupBox9->Controls->Add(this->labeltrial3_1I1_1);
			this->groupBox9->Controls->Add(this->label141);
			this->groupBox9->Controls->Add(this->label142);
			this->groupBox9->Controls->Add(this->label143);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox9->ForeColor = System::Drawing::Color::Red;
			this->groupBox9->Location = System::Drawing::Point(47, 402);
			this->groupBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Size = System::Drawing::Size(1188, 624);
			this->groupBox9->TabIndex = 89;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"第一组";
			// 
			// labeltrial3_1V2_3
			// 
			this->labeltrial3_1V2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_3->Location = System::Drawing::Point(348, 215);
			this->labeltrial3_1V2_3->Name = L"labeltrial3_1V2_3";
			this->labeltrial3_1V2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_3->TabIndex = 102;
			// 
			// labeltrial3_1V2_2
			// 
			this->labeltrial3_1V2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_2->Location = System::Drawing::Point(240, 215);
			this->labeltrial3_1V2_2->Name = L"labeltrial3_1V2_2";
			this->labeltrial3_1V2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_2->TabIndex = 101;
			// 
			// labeltrial3_1V2_1
			// 
			this->labeltrial3_1V2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1V2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1V2_1->Location = System::Drawing::Point(128, 215);
			this->labeltrial3_1V2_1->Name = L"labeltrial3_1V2_1";
			this->labeltrial3_1V2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial3_1V2_1->TabIndex = 100;
			// 
			// labeltrial3_1I1_8
			// 
			this->labeltrial3_1I1_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_8->Location = System::Drawing::Point(909, 119);
			this->labeltrial3_1I1_8->Name = L"labeltrial3_1I1_8";
			this->labeltrial3_1I1_8->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_8->TabIndex = 98;
			this->labeltrial3_1I1_8->Text = L" ";
			// 
			// labeltrial3_1I1_7
			// 
			this->labeltrial3_1I1_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_7->Location = System::Drawing::Point(796, 119);
			this->labeltrial3_1I1_7->Name = L"labeltrial3_1I1_7";
			this->labeltrial3_1I1_7->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_7->TabIndex = 97;
			this->labeltrial3_1I1_7->Text = L" ";
			// 
			// labeltrial3_1I1_6
			// 
			this->labeltrial3_1I1_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_6->Location = System::Drawing::Point(685, 119);
			this->labeltrial3_1I1_6->Name = L"labeltrial3_1I1_6";
			this->labeltrial3_1I1_6->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_6->TabIndex = 96;
			this->labeltrial3_1I1_6->Text = L" ";
			// 
			// labeltrial3_1I1_5
			// 
			this->labeltrial3_1I1_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_5->Location = System::Drawing::Point(572, 119);
			this->labeltrial3_1I1_5->Name = L"labeltrial3_1I1_5";
			this->labeltrial3_1I1_5->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_5->TabIndex = 95;
			this->labeltrial3_1I1_5->Text = L" ";
			// 
			// labeltrial3_1I1_4
			// 
			this->labeltrial3_1I1_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_4->Location = System::Drawing::Point(459, 119);
			this->labeltrial3_1I1_4->Name = L"labeltrial3_1I1_4";
			this->labeltrial3_1I1_4->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_4->TabIndex = 94;
			this->labeltrial3_1I1_4->Text = L" ";
			// 
			// labeltrial3_1I1_3
			// 
			this->labeltrial3_1I1_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_3->Location = System::Drawing::Point(344, 119);
			this->labeltrial3_1I1_3->Name = L"labeltrial3_1I1_3";
			this->labeltrial3_1I1_3->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_3->TabIndex = 93;
			this->labeltrial3_1I1_3->Text = L" ";
			// 
			// labeltrial3_1I1_2
			// 
			this->labeltrial3_1I1_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_2->Location = System::Drawing::Point(236, 119);
			this->labeltrial3_1I1_2->Name = L"labeltrial3_1I1_2";
			this->labeltrial3_1I1_2->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_2->TabIndex = 92;
			this->labeltrial3_1I1_2->Text = L" ";
			// 
			// labeltrial3_1I1_1
			// 
			this->labeltrial3_1I1_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial3_1I1_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial3_1I1_1->Location = System::Drawing::Point(128, 119);
			this->labeltrial3_1I1_1->Name = L"labeltrial3_1I1_1";
			this->labeltrial3_1I1_1->Size = System::Drawing::Size(100, 26);
			this->labeltrial3_1I1_1->TabIndex = 91;
			this->labeltrial3_1I1_1->Text = L" ";
			// 
			// label141
			// 
			this->label141->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label141->ForeColor = System::Drawing::Color::Black;
			this->label141->Location = System::Drawing::Point(21, 219);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(101, 26);
			this->label141->TabIndex = 90;
			this->label141->Text = L"V2（v）";
			// 
			// label142
			// 
			this->label142->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label142->ForeColor = System::Drawing::Color::Black;
			this->label142->Location = System::Drawing::Point(21, 119);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(101, 26);
			this->label142->TabIndex = 89;
			this->label142->Text = L"I1（mA）";
			// 
			// label143
			// 
			this->label143->ForeColor = System::Drawing::Color::Black;
			this->label143->Location = System::Drawing::Point(28, 40);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(973, 58);
			this->label143->TabIndex = 88;
			this->label143->Text = L"  （1）固定RL＝2KΩ，调节恒流源的输出电流Is，使其在0.05~0.7mA范围内取8个数，测出U2，绘制U2=F（I1）曲线，并由线性部分求出转移电阻rm "
				L"。";
			// 
			// textBoxtrial2_2RL_1
			// 
			this->textBoxtrial2_2RL_1->Location = System::Drawing::Point(192, 96);
			this->textBoxtrial2_2RL_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial2_2RL_1->Name = L"textBoxtrial2_2RL_1";
			this->textBoxtrial2_2RL_1->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_2RL_1->TabIndex = 140;
			// 
			// labeltrial2_1IL_2
			// 
			this->labeltrial2_1IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_2->Location = System::Drawing::Point(242, 201);
			this->labeltrial2_1IL_2->Name = L"labeltrial2_1IL_2";
			this->labeltrial2_1IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_2->TabIndex = 101;
			// 
			// textBoxtrial2_2RL_2
			// 
			this->textBoxtrial2_2RL_2->Location = System::Drawing::Point(304, 96);
			this->textBoxtrial2_2RL_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial2_2RL_2->Name = L"textBoxtrial2_2RL_2";
			this->textBoxtrial2_2RL_2->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_2RL_2->TabIndex = 141;
			// 
			// textBoxtrial2_2RL_5
			// 
			this->textBoxtrial2_2RL_5->Location = System::Drawing::Point(640, 96);
			this->textBoxtrial2_2RL_5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial2_2RL_5->Name = L"textBoxtrial2_2RL_5";
			this->textBoxtrial2_2RL_5->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_2RL_5->TabIndex = 144;
			// 
			// textBoxtrial2_2RL_4
			// 
			this->textBoxtrial2_2RL_4->Location = System::Drawing::Point(522, 96);
			this->textBoxtrial2_2RL_4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial2_2RL_4->Name = L"textBoxtrial2_2RL_4";
			this->textBoxtrial2_2RL_4->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_2RL_4->TabIndex = 143;
			// 
			// textBoxtrial2_2RL_3
			// 
			this->textBoxtrial2_2RL_3->Location = System::Drawing::Point(410, 96);
			this->textBoxtrial2_2RL_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial2_2RL_3->Name = L"textBoxtrial2_2RL_3";
			this->textBoxtrial2_2RL_3->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_2RL_3->TabIndex = 142;
			// 
			// textBoxtrial2_2RL_7
			// 
			this->textBoxtrial2_2RL_7->Location = System::Drawing::Point(860, 96);
			this->textBoxtrial2_2RL_7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial2_2RL_7->Name = L"textBoxtrial2_2RL_7";
			this->textBoxtrial2_2RL_7->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_2RL_7->TabIndex = 146;
			// 
			// label166
			// 
			this->label166->BackColor = System::Drawing::Color::SkyBlue;
			this->label166->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label166->Location = System::Drawing::Point(31, 6892);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(1412, 52);
			this->label166->TabIndex = 125;
			this->label166->Text = L"答题结束";
			this->label166->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxtrial2_2RL_6
			// 
			this->textBoxtrial2_2RL_6->Location = System::Drawing::Point(752, 96);
			this->textBoxtrial2_2RL_6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial2_2RL_6->Name = L"textBoxtrial2_2RL_6";
			this->textBoxtrial2_2RL_6->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial2_2RL_6->TabIndex = 145;
			// 
			// button246
			// 
			this->button246->Location = System::Drawing::Point(639, 6852);
			this->button246->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button246->Name = L"button246";
			this->button246->Size = System::Drawing::Size(189, 38);
			this->button246->TabIndex = 124;
			this->button246->Text = L"成绩完成并上传";
			this->button246->UseVisualStyleBackColor = true;
			// 
			// labeltrial1_1U2_7
			// 
			this->labeltrial1_1U2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_7->Location = System::Drawing::Point(821, 162);
			this->labeltrial1_1U2_7->Name = L"labeltrial1_1U2_7";
			this->labeltrial1_1U2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_7->TabIndex = 106;
			// 
			// labeltrial1_1U2_6
			// 
			this->labeltrial1_1U2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_6->Location = System::Drawing::Point(711, 162);
			this->labeltrial1_1U2_6->Name = L"labeltrial1_1U2_6";
			this->labeltrial1_1U2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_6->TabIndex = 105;
			// 
			// labeltrial1_1U2_4
			// 
			this->labeltrial1_1U2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_4->Location = System::Drawing::Point(483, 162);
			this->labeltrial1_1U2_4->Name = L"labeltrial1_1U2_4";
			this->labeltrial1_1U2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_4->TabIndex = 103;
			// 
			// button18
			// 
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(976, 262);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(96, 29);
			this->button18->TabIndex = 138;
			this->button18->Text = L"获取";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(861, 262);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(96, 29);
			this->button19->TabIndex = 137;
			this->button19->Text = L"获取";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(749, 262);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(96, 29);
			this->button20->TabIndex = 136;
			this->button20->Text = L"获取";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(636, 262);
			this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(96, 29);
			this->button21->TabIndex = 135;
			this->button21->Text = L"获取";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(524, 262);
			this->button22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(96, 29);
			this->button22->TabIndex = 134;
			this->button22->Text = L"获取";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(411, 262);
			this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(96, 29);
			this->button23->TabIndex = 133;
			this->button23->Text = L"获取";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(301, 262);
			this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(96, 29);
			this->button24->TabIndex = 132;
			this->button24->Text = L"获取";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(188, 262);
			this->button25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(96, 29);
			this->button25->TabIndex = 131;
			this->button25->Text = L"获取";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(5, 250);
			this->button31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(131, 34);
			this->button31->TabIndex = 109;
			this->button31->Text = L"曲线生成";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// labeltrial1_1U2_9
			// 
			this->labeltrial1_1U2_9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_9->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_9->Location = System::Drawing::Point(1043, 162);
			this->labeltrial1_1U2_9->Name = L"labeltrial1_1U2_9";
			this->labeltrial1_1U2_9->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_9->TabIndex = 108;
			// 
			// labeltrial1_1U2_8
			// 
			this->labeltrial1_1U2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_8->Location = System::Drawing::Point(935, 162);
			this->labeltrial1_1U2_8->Name = L"labeltrial1_1U2_8";
			this->labeltrial1_1U2_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_8->TabIndex = 107;
			// 
			// button14
			// 
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(979, 174);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(96, 29);
			this->button14->TabIndex = 130;
			this->button14->Text = L"获取";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(864, 174);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(96, 29);
			this->button15->TabIndex = 129;
			this->button15->Text = L"获取";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(752, 174);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(96, 29);
			this->button16->TabIndex = 128;
			this->button16->Text = L"获取";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(525, 174);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(96, 29);
			this->button10->TabIndex = 126;
			this->button10->Text = L"获取";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// labeltrial1_2IL_8
			// 
			this->labeltrial1_2IL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_8->Location = System::Drawing::Point(979, 220);
			this->labeltrial1_2IL_8->Name = L"labeltrial1_2IL_8";
			this->labeltrial1_2IL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_8->TabIndex = 119;
			// 
			// label45
			// 
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label45->ForeColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(625, 524);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(147, 26);
			this->label45->TabIndex = 112;
			this->label45->Text = L"转移电压比μ";
			// 
			// chartTrial1_1
			// 
			chartArea5->Name = L"ChartArea1";
			this->chartTrial1_1->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chartTrial1_1->Legends->Add(legend5);
			this->chartTrial1_1->Location = System::Drawing::Point(149, 250);
			this->chartTrial1_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chartTrial1_1->Name = L"chartTrial1_1";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chartTrial1_1->Series->Add(series5);
			this->chartTrial1_1->Size = System::Drawing::Size(459, 300);
			this->chartTrial1_1->TabIndex = 110;
			this->chartTrial1_1->Text = L"chartTrial1_1";
			// 
			// labeltrial1_1U2_5
			// 
			this->labeltrial1_1U2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_5->Location = System::Drawing::Point(597, 162);
			this->labeltrial1_1U2_5->Name = L"labeltrial1_1U2_5";
			this->labeltrial1_1U2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_5->TabIndex = 104;
			// 
			// button17
			// 
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(637, 174);
			this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(96, 29);
			this->button17->TabIndex = 127;
			this->button17->Text = L"获取";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(149, 216);
			this->button32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(96, 29);
			this->button32->TabIndex = 114;
			this->button32->Text = L"获取";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(412, 174);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(96, 29);
			this->button11->TabIndex = 125;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// labeltrial1_2IL_7
			// 
			this->labeltrial1_2IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_7->Location = System::Drawing::Point(864, 220);
			this->labeltrial1_2IL_7->Name = L"labeltrial1_2IL_7";
			this->labeltrial1_2IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_7->TabIndex = 118;
			// 
			// button12
			// 
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(304, 174);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(96, 29);
			this->button12->TabIndex = 124;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(189, 174);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(96, 29);
			this->button13->TabIndex = 123;
			this->button13->Text = L"获取";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// labeltrial1_2IL_6
			// 
			this->labeltrial1_2IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_6->Location = System::Drawing::Point(755, 220);
			this->labeltrial1_2IL_6->Name = L"labeltrial1_2IL_6";
			this->labeltrial1_2IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_6->TabIndex = 117;
			// 
			// labeltrial1_2IL_5
			// 
			this->labeltrial1_2IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_5->Location = System::Drawing::Point(640, 220);
			this->labeltrial1_2IL_5->Name = L"labeltrial1_2IL_5";
			this->labeltrial1_2IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_5->TabIndex = 116;
			// 
			// labeltrial1_2IL_4
			// 
			this->labeltrial1_2IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_4->Location = System::Drawing::Point(525, 220);
			this->labeltrial1_2IL_4->Name = L"labeltrial1_2IL_4";
			this->labeltrial1_2IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_4->TabIndex = 115;
			// 
			// textBoxtrial1_1u
			// 
			this->textBoxtrial1_1u->Location = System::Drawing::Point(785, 520);
			this->textBoxtrial1_1u->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial1_1u->Name = L"textBoxtrial1_1u";
			this->textBoxtrial1_1u->Size = System::Drawing::Size(132, 30);
			this->textBoxtrial1_1u->TabIndex = 113;
			// 
			// labeltrial1_1U2_3
			// 
			this->labeltrial1_1U2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_3->Location = System::Drawing::Point(369, 162);
			this->labeltrial1_1U2_3->Name = L"labeltrial1_1U2_3";
			this->labeltrial1_1U2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_3->TabIndex = 102;
			// 
			// labeltrial1_1U2_2
			// 
			this->labeltrial1_1U2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_2->Location = System::Drawing::Point(261, 162);
			this->labeltrial1_1U2_2->Name = L"labeltrial1_1U2_2";
			this->labeltrial1_1U2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_2->TabIndex = 101;
			// 
			// labeltrial1_2IL_3
			// 
			this->labeltrial1_2IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_3->Location = System::Drawing::Point(412, 220);
			this->labeltrial1_2IL_3->Name = L"labeltrial1_2IL_3";
			this->labeltrial1_2IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_3->TabIndex = 114;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(43, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 26);
			this->label4->TabIndex = 90;
			this->label4->Text = L"U2(V)";
			// 
			// labeltrial1_2IL_2
			// 
			this->labeltrial1_2IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_2->Location = System::Drawing::Point(304, 220);
			this->labeltrial1_2IL_2->Name = L"labeltrial1_2IL_2";
			this->labeltrial1_2IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_2->TabIndex = 113;
			// 
			// labeltrial1_2IL_1
			// 
			this->labeltrial1_2IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2IL_1->Location = System::Drawing::Point(192, 220);
			this->labeltrial1_2IL_1->Name = L"labeltrial1_2IL_1";
			this->labeltrial1_2IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2IL_1->TabIndex = 112;
			// 
			// label46
			// 
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label46->ForeColor = System::Drawing::Color::Black;
			this->label46->Location = System::Drawing::Point(23, 224);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(109, 26);
			this->label46->TabIndex = 111;
			this->label46->Text = L"IL（mA）";
			// 
			// chartTrial1_2
			// 
			chartArea6->Name = L"ChartArea1";
			this->chartTrial1_2->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chartTrial1_2->Legends->Add(legend6);
			this->chartTrial1_2->Location = System::Drawing::Point(376, 308);
			this->chartTrial1_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chartTrial1_2->Name = L"chartTrial1_2";
			series6->ChartArea = L"ChartArea1";
			series6->Legend = L"Legend1";
			series6->Name = L"Series1";
			this->chartTrial1_2->Series->Add(series6);
			this->chartTrial1_2->Size = System::Drawing::Size(459, 300);
			this->chartTrial1_2->TabIndex = 110;
			this->chartTrial1_2->Text = L"chartTrial1_2";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(188, 318);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 34);
			this->button1->TabIndex = 109;
			this->button1->Text = L"曲线生成";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// labeltrial1_2V2_8
			// 
			this->labeltrial1_2V2_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_8->Location = System::Drawing::Point(979, 141);
			this->labeltrial1_2V2_8->Name = L"labeltrial1_2V2_8";
			this->labeltrial1_2V2_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_8->TabIndex = 107;
			// 
			// labeltrial1_2V2_7
			// 
			this->labeltrial1_2V2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_7->Location = System::Drawing::Point(864, 141);
			this->labeltrial1_2V2_7->Name = L"labeltrial1_2V2_7";
			this->labeltrial1_2V2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_7->TabIndex = 106;
			// 
			// labeltrial1_2V2_6
			// 
			this->labeltrial1_2V2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_6->Location = System::Drawing::Point(755, 141);
			this->labeltrial1_2V2_6->Name = L"labeltrial1_2V2_6";
			this->labeltrial1_2V2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_6->TabIndex = 105;
			// 
			// labeltrial1_2V2_5
			// 
			this->labeltrial1_2V2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_5->Location = System::Drawing::Point(640, 141);
			this->labeltrial1_2V2_5->Name = L"labeltrial1_2V2_5";
			this->labeltrial1_2V2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_5->TabIndex = 104;
			// 
			// labeltrial1_2V2_4
			// 
			this->labeltrial1_2V2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_4->Location = System::Drawing::Point(525, 141);
			this->labeltrial1_2V2_4->Name = L"labeltrial1_2V2_4";
			this->labeltrial1_2V2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_4->TabIndex = 103;
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(711, 216);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(96, 29);
			this->button6->TabIndex = 119;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(483, 216);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 29);
			this->button4->TabIndex = 117;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(369, 216);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 29);
			this->button3->TabIndex = 116;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(261, 216);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 29);
			this->button2->TabIndex = 115;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// labeltrial1_1U2_1
			// 
			this->labeltrial1_1U2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_1U2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_1U2_1->Location = System::Drawing::Point(149, 162);
			this->labeltrial1_1U2_1->Name = L"labeltrial1_1U2_1";
			this->labeltrial1_1U2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_1U2_1->TabIndex = 100;
			// 
			// labeltrial1_2V2_3
			// 
			this->labeltrial1_2V2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_3->Location = System::Drawing::Point(412, 141);
			this->labeltrial1_2V2_3->Name = L"labeltrial1_2V2_3";
			this->labeltrial1_2V2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_3->TabIndex = 102;
			// 
			// labeltrial2_1IL_4
			// 
			this->labeltrial2_1IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_4->Location = System::Drawing::Point(463, 201);
			this->labeltrial2_1IL_4->Name = L"labeltrial2_1IL_4";
			this->labeltrial2_1IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_4->TabIndex = 103;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox5);
			this->groupBox4->Controls->Add(this->groupBox6);
			this->groupBox4->Controls->Add(this->label103);
			this->groupBox4->Controls->Add(this->pictureBox2);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox4->ForeColor = System::Drawing::Color::Red;
			this->groupBox4->Location = System::Drawing::Point(37, 1682);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(1407, 1685);
			this->groupBox4->TabIndex = 121;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"实验内容二";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_7);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_6);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_5);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_4);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_3);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_2);
			this->groupBox5->Controls->Add(this->textBoxtrial2_2RL_1);
			this->groupBox5->Controls->Add(this->button27);
			this->groupBox5->Controls->Add(this->button28);
			this->groupBox5->Controls->Add(this->button29);
			this->groupBox5->Controls->Add(this->button30);
			this->groupBox5->Controls->Add(this->button33);
			this->groupBox5->Controls->Add(this->button34);
			this->groupBox5->Controls->Add(this->button35);
			this->groupBox5->Controls->Add(this->button37);
			this->groupBox5->Controls->Add(this->button38);
			this->groupBox5->Controls->Add(this->button39);
			this->groupBox5->Controls->Add(this->button40);
			this->groupBox5->Controls->Add(this->button41);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_7);
			this->groupBox5->Controls->Add(this->button42);
			this->groupBox5->Controls->Add(this->button43);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_6);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_5);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_4);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_3);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_2);
			this->groupBox5->Controls->Add(this->labeltrial2_2V2_1);
			this->groupBox5->Controls->Add(this->label61);
			this->groupBox5->Controls->Add(this->chartTrial2_2);
			this->groupBox5->Controls->Add(this->button44);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_7);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_6);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_5);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_4);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_3);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_2);
			this->groupBox5->Controls->Add(this->labeltrial2_2IL_1);
			this->groupBox5->Controls->Add(this->label78);
			this->groupBox5->Controls->Add(this->label79);
			this->groupBox5->Controls->Add(this->label80);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox5->ForeColor = System::Drawing::Color::Red;
			this->groupBox5->Location = System::Drawing::Point(52, 1051);
			this->groupBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox5->Size = System::Drawing::Size(1188, 630);
			this->groupBox5->TabIndex = 111;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"第二组";
			// 
			// button27
			// 
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(861, 262);
			this->button27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(96, 29);
			this->button27->TabIndex = 137;
			this->button27->Text = L"获取";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(749, 262);
			this->button28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(96, 29);
			this->button28->TabIndex = 136;
			this->button28->Text = L"获取";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(636, 262);
			this->button29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(96, 29);
			this->button29->TabIndex = 135;
			this->button29->Text = L"获取";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(524, 262);
			this->button30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(96, 29);
			this->button30->TabIndex = 134;
			this->button30->Text = L"获取";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(411, 262);
			this->button33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(96, 29);
			this->button33->TabIndex = 133;
			this->button33->Text = L"获取";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(301, 262);
			this->button34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(96, 29);
			this->button34->TabIndex = 132;
			this->button34->Text = L"获取";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(188, 262);
			this->button35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(96, 29);
			this->button35->TabIndex = 131;
			this->button35->Text = L"获取";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(864, 174);
			this->button37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(96, 29);
			this->button37->TabIndex = 129;
			this->button37->Text = L"获取";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(752, 174);
			this->button38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(96, 29);
			this->button38->TabIndex = 128;
			this->button38->Text = L"获取";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(637, 174);
			this->button39->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(96, 29);
			this->button39->TabIndex = 127;
			this->button39->Text = L"获取";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(525, 174);
			this->button40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(96, 29);
			this->button40->TabIndex = 126;
			this->button40->Text = L"获取";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(412, 174);
			this->button41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(96, 29);
			this->button41->TabIndex = 125;
			this->button41->Text = L"获取";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// labeltrial2_2V2_7
			// 
			this->labeltrial2_2V2_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_7->Location = System::Drawing::Point(864, 220);
			this->labeltrial2_2V2_7->Name = L"labeltrial2_2V2_7";
			this->labeltrial2_2V2_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_7->TabIndex = 118;
			// 
			// button42
			// 
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(304, 174);
			this->button42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(96, 29);
			this->button42->TabIndex = 124;
			this->button42->Text = L"获取";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(189, 174);
			this->button43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(96, 29);
			this->button43->TabIndex = 123;
			this->button43->Text = L"获取";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// labeltrial2_2V2_6
			// 
			this->labeltrial2_2V2_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_6->Location = System::Drawing::Point(755, 220);
			this->labeltrial2_2V2_6->Name = L"labeltrial2_2V2_6";
			this->labeltrial2_2V2_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_6->TabIndex = 117;
			// 
			// labeltrial2_2V2_5
			// 
			this->labeltrial2_2V2_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_5->Location = System::Drawing::Point(640, 220);
			this->labeltrial2_2V2_5->Name = L"labeltrial2_2V2_5";
			this->labeltrial2_2V2_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_5->TabIndex = 116;
			// 
			// labeltrial2_2V2_4
			// 
			this->labeltrial2_2V2_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_4->Location = System::Drawing::Point(525, 220);
			this->labeltrial2_2V2_4->Name = L"labeltrial2_2V2_4";
			this->labeltrial2_2V2_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_4->TabIndex = 115;
			// 
			// labeltrial2_2V2_3
			// 
			this->labeltrial2_2V2_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_3->Location = System::Drawing::Point(412, 220);
			this->labeltrial2_2V2_3->Name = L"labeltrial2_2V2_3";
			this->labeltrial2_2V2_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_3->TabIndex = 114;
			// 
			// labeltrial2_2V2_2
			// 
			this->labeltrial2_2V2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_2->Location = System::Drawing::Point(304, 220);
			this->labeltrial2_2V2_2->Name = L"labeltrial2_2V2_2";
			this->labeltrial2_2V2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_2->TabIndex = 113;
			// 
			// labeltrial2_2V2_1
			// 
			this->labeltrial2_2V2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2V2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2V2_1->Location = System::Drawing::Point(192, 220);
			this->labeltrial2_2V2_1->Name = L"labeltrial2_2V2_1";
			this->labeltrial2_2V2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2V2_1->TabIndex = 112;
			// 
			// label61
			// 
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label61->ForeColor = System::Drawing::Color::Black;
			this->label61->Location = System::Drawing::Point(23, 224);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(109, 26);
			this->label61->TabIndex = 111;
			this->label61->Text = L"V2（v）";
			// 
			// chartTrial2_2
			// 
			chartArea7->Name = L"ChartArea1";
			this->chartTrial2_2->ChartAreas->Add(chartArea7);
			legend7->Name = L"Legend1";
			this->chartTrial2_2->Legends->Add(legend7);
			this->chartTrial2_2->Location = System::Drawing::Point(376, 308);
			this->chartTrial2_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chartTrial2_2->Name = L"chartTrial2_2";
			series7->ChartArea = L"ChartArea1";
			series7->Legend = L"Legend1";
			series7->Name = L"Series1";
			this->chartTrial2_2->Series->Add(series7);
			this->chartTrial2_2->Size = System::Drawing::Size(459, 300);
			this->chartTrial2_2->TabIndex = 110;
			this->chartTrial2_2->Text = L"chartTrial2_2";
			// 
			// button44
			// 
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(188, 318);
			this->button44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(144, 34);
			this->button44->TabIndex = 109;
			this->button44->Text = L"曲线生成";
			this->button44->UseVisualStyleBackColor = true;
			// 
			// labeltrial2_2IL_7
			// 
			this->labeltrial2_2IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_7->Location = System::Drawing::Point(864, 141);
			this->labeltrial2_2IL_7->Name = L"labeltrial2_2IL_7";
			this->labeltrial2_2IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_7->TabIndex = 106;
			// 
			// labeltrial2_2IL_6
			// 
			this->labeltrial2_2IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_6->Location = System::Drawing::Point(755, 141);
			this->labeltrial2_2IL_6->Name = L"labeltrial2_2IL_6";
			this->labeltrial2_2IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_6->TabIndex = 105;
			// 
			// labeltrial2_2IL_5
			// 
			this->labeltrial2_2IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_5->Location = System::Drawing::Point(640, 141);
			this->labeltrial2_2IL_5->Name = L"labeltrial2_2IL_5";
			this->labeltrial2_2IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_5->TabIndex = 104;
			// 
			// labeltrial2_2IL_4
			// 
			this->labeltrial2_2IL_4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_4->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_4->Location = System::Drawing::Point(525, 141);
			this->labeltrial2_2IL_4->Name = L"labeltrial2_2IL_4";
			this->labeltrial2_2IL_4->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_4->TabIndex = 103;
			// 
			// labeltrial2_2IL_3
			// 
			this->labeltrial2_2IL_3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_3->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_3->Location = System::Drawing::Point(412, 141);
			this->labeltrial2_2IL_3->Name = L"labeltrial2_2IL_3";
			this->labeltrial2_2IL_3->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_3->TabIndex = 102;
			// 
			// labeltrial2_2IL_2
			// 
			this->labeltrial2_2IL_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_2->Location = System::Drawing::Point(304, 141);
			this->labeltrial2_2IL_2->Name = L"labeltrial2_2IL_2";
			this->labeltrial2_2IL_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_2->TabIndex = 101;
			// 
			// labeltrial2_2IL_1
			// 
			this->labeltrial2_2IL_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_2IL_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_2IL_1->Location = System::Drawing::Point(192, 141);
			this->labeltrial2_2IL_1->Name = L"labeltrial2_2IL_1";
			this->labeltrial2_2IL_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_2IL_1->TabIndex = 100;
			// 
			// label78
			// 
			this->label78->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label78->ForeColor = System::Drawing::Color::Black;
			this->label78->Location = System::Drawing::Point(23, 141);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(109, 26);
			this->label78->TabIndex = 90;
			this->label78->Text = L"IL（mA）";
			// 
			// label79
			// 
			this->label79->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label79->ForeColor = System::Drawing::Color::Black;
			this->label79->Location = System::Drawing::Point(23, 98);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(109, 26);
			this->label79->TabIndex = 89;
			this->label79->Text = L"RL（KΩ）";
			// 
			// label80
			// 
			this->label80->ForeColor = System::Drawing::Color::Black;
			this->label80->Location = System::Drawing::Point(5, 38);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(973, 32);
			this->label80->TabIndex = 88;
			this->label80->Text = L"（2）保持U1＝2V，令RL从大到小变化，测出相应的IL及U2，绘制IL＝F（U2）曲线。";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_8);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_7);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_6);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_5);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_4);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_3);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_2);
			this->groupBox6->Controls->Add(this->labeltrial2_1U1_1);
			this->groupBox6->Controls->Add(this->button129);
			this->groupBox6->Controls->Add(this->button130);
			this->groupBox6->Controls->Add(this->button131);
			this->groupBox6->Controls->Add(this->button132);
			this->groupBox6->Controls->Add(this->button133);
			this->groupBox6->Controls->Add(this->button134);
			this->groupBox6->Controls->Add(this->button135);
			this->groupBox6->Controls->Add(this->button136);
			this->groupBox6->Controls->Add(this->button46);
			this->groupBox6->Controls->Add(this->button47);
			this->groupBox6->Controls->Add(this->button48);
			this->groupBox6->Controls->Add(this->button49);
			this->groupBox6->Controls->Add(this->button50);
			this->groupBox6->Controls->Add(this->button51);
			this->groupBox6->Controls->Add(this->button52);
			this->groupBox6->Controls->Add(this->button53);
			this->groupBox6->Controls->Add(this->textBoxtrial2_1gm);
			this->groupBox6->Controls->Add(this->label81);
			this->groupBox6->Controls->Add(this->chartTrial2_1);
			this->groupBox6->Controls->Add(this->button54);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_8);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_7);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_6);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_5);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_4);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_3);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_2);
			this->groupBox6->Controls->Add(this->labeltrial2_1IL_1);
			this->groupBox6->Controls->Add(this->label100);
			this->groupBox6->Controls->Add(this->label101);
			this->groupBox6->Controls->Add(this->label102);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox6->ForeColor = System::Drawing::Color::Red;
			this->groupBox6->Location = System::Drawing::Point(47, 402);
			this->groupBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox6->Size = System::Drawing::Size(1188, 628);
			this->groupBox6->TabIndex = 89;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"第一组";
			// 
			// labeltrial2_1U1_8
			// 
			this->labeltrial2_1U1_8->Location = System::Drawing::Point(914, 117);
			this->labeltrial2_1U1_8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial2_1U1_8->Name = L"labeltrial2_1U1_8";
			this->labeltrial2_1U1_8->Size = System::Drawing::Size(100, 30);
			this->labeltrial2_1U1_8->TabIndex = 139;
			// 
			// labeltrial2_1U1_7
			// 
			this->labeltrial2_1U1_7->Location = System::Drawing::Point(800, 117);
			this->labeltrial2_1U1_7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial2_1U1_7->Name = L"labeltrial2_1U1_7";
			this->labeltrial2_1U1_7->Size = System::Drawing::Size(100, 30);
			this->labeltrial2_1U1_7->TabIndex = 138;
			// 
			// labeltrial2_1U1_6
			// 
			this->labeltrial2_1U1_6->Location = System::Drawing::Point(692, 117);
			this->labeltrial2_1U1_6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial2_1U1_6->Name = L"labeltrial2_1U1_6";
			this->labeltrial2_1U1_6->Size = System::Drawing::Size(100, 30);
			this->labeltrial2_1U1_6->TabIndex = 137;
			// 
			// labeltrial2_1U1_5
			// 
			this->labeltrial2_1U1_5->Location = System::Drawing::Point(580, 117);
			this->labeltrial2_1U1_5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial2_1U1_5->Name = L"labeltrial2_1U1_5";
			this->labeltrial2_1U1_5->Size = System::Drawing::Size(100, 30);
			this->labeltrial2_1U1_5->TabIndex = 136;
			// 
			// labeltrial2_1U1_4
			// 
			this->labeltrial2_1U1_4->Location = System::Drawing::Point(462, 117);
			this->labeltrial2_1U1_4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial2_1U1_4->Name = L"labeltrial2_1U1_4";
			this->labeltrial2_1U1_4->Size = System::Drawing::Size(100, 30);
			this->labeltrial2_1U1_4->TabIndex = 135;
			// 
			// labeltrial2_1U1_3
			// 
			this->labeltrial2_1U1_3->Location = System::Drawing::Point(350, 117);
			this->labeltrial2_1U1_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial2_1U1_3->Name = L"labeltrial2_1U1_3";
			this->labeltrial2_1U1_3->Size = System::Drawing::Size(100, 30);
			this->labeltrial2_1U1_3->TabIndex = 134;
			// 
			// labeltrial2_1U1_2
			// 
			this->labeltrial2_1U1_2->Location = System::Drawing::Point(244, 117);
			this->labeltrial2_1U1_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial2_1U1_2->Name = L"labeltrial2_1U1_2";
			this->labeltrial2_1U1_2->Size = System::Drawing::Size(100, 30);
			this->labeltrial2_1U1_2->TabIndex = 133;
			// 
			// labeltrial2_1U1_1
			// 
			this->labeltrial2_1U1_1->Location = System::Drawing::Point(132, 117);
			this->labeltrial2_1U1_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial2_1U1_1->Name = L"labeltrial2_1U1_1";
			this->labeltrial2_1U1_1->Size = System::Drawing::Size(100, 30);
			this->labeltrial2_1U1_1->TabIndex = 132;
			// 
			// button129
			// 
			this->button129->ForeColor = System::Drawing::Color::Black;
			this->button129->Location = System::Drawing::Point(911, 161);
			this->button129->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button129->Name = L"button129";
			this->button129->Size = System::Drawing::Size(96, 29);
			this->button129->TabIndex = 129;
			this->button129->Text = L"设置";
			this->button129->UseVisualStyleBackColor = true;
			// 
			// button130
			// 
			this->button130->ForeColor = System::Drawing::Color::Black;
			this->button130->Location = System::Drawing::Point(802, 161);
			this->button130->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button130->Name = L"button130";
			this->button130->Size = System::Drawing::Size(96, 29);
			this->button130->TabIndex = 128;
			this->button130->Text = L"设置";
			this->button130->UseVisualStyleBackColor = true;
			// 
			// button131
			// 
			this->button131->ForeColor = System::Drawing::Color::Black;
			this->button131->Location = System::Drawing::Point(693, 161);
			this->button131->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button131->Name = L"button131";
			this->button131->Size = System::Drawing::Size(96, 29);
			this->button131->TabIndex = 127;
			this->button131->Text = L"设置";
			this->button131->UseVisualStyleBackColor = true;
			// 
			// button132
			// 
			this->button132->ForeColor = System::Drawing::Color::Black;
			this->button132->Location = System::Drawing::Point(578, 161);
			this->button132->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button132->Name = L"button132";
			this->button132->Size = System::Drawing::Size(96, 29);
			this->button132->TabIndex = 126;
			this->button132->Text = L"设置";
			this->button132->UseVisualStyleBackColor = true;
			// 
			// button133
			// 
			this->button133->ForeColor = System::Drawing::Color::Black;
			this->button133->Location = System::Drawing::Point(463, 161);
			this->button133->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button133->Name = L"button133";
			this->button133->Size = System::Drawing::Size(96, 29);
			this->button133->TabIndex = 125;
			this->button133->Text = L"设置";
			this->button133->UseVisualStyleBackColor = true;
			// 
			// button134
			// 
			this->button134->ForeColor = System::Drawing::Color::Black;
			this->button134->Location = System::Drawing::Point(350, 161);
			this->button134->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button134->Name = L"button134";
			this->button134->Size = System::Drawing::Size(96, 29);
			this->button134->TabIndex = 124;
			this->button134->Text = L"设置";
			this->button134->UseVisualStyleBackColor = true;
			// 
			// button135
			// 
			this->button135->ForeColor = System::Drawing::Color::Black;
			this->button135->Location = System::Drawing::Point(242, 161);
			this->button135->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button135->Name = L"button135";
			this->button135->Size = System::Drawing::Size(96, 29);
			this->button135->TabIndex = 123;
			this->button135->Text = L"设置";
			this->button135->UseVisualStyleBackColor = true;
			// 
			// button136
			// 
			this->button136->ForeColor = System::Drawing::Color::Black;
			this->button136->Location = System::Drawing::Point(130, 161);
			this->button136->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button136->Name = L"button136";
			this->button136->Size = System::Drawing::Size(96, 29);
			this->button136->TabIndex = 122;
			this->button136->Text = L"设置";
			this->button136->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->ForeColor = System::Drawing::Color::Black;
			this->button46->Location = System::Drawing::Point(911, 254);
			this->button46->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(96, 29);
			this->button46->TabIndex = 121;
			this->button46->Text = L"获取";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->ForeColor = System::Drawing::Color::Black;
			this->button47->Location = System::Drawing::Point(802, 254);
			this->button47->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(96, 29);
			this->button47->TabIndex = 120;
			this->button47->Text = L"获取";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->ForeColor = System::Drawing::Color::Black;
			this->button48->Location = System::Drawing::Point(693, 254);
			this->button48->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(96, 29);
			this->button48->TabIndex = 119;
			this->button48->Text = L"获取";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button49
			// 
			this->button49->ForeColor = System::Drawing::Color::Black;
			this->button49->Location = System::Drawing::Point(578, 254);
			this->button49->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(96, 29);
			this->button49->TabIndex = 118;
			this->button49->Text = L"获取";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->ForeColor = System::Drawing::Color::Black;
			this->button50->Location = System::Drawing::Point(463, 254);
			this->button50->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(96, 29);
			this->button50->TabIndex = 117;
			this->button50->Text = L"获取";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->ForeColor = System::Drawing::Color::Black;
			this->button51->Location = System::Drawing::Point(350, 254);
			this->button51->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(96, 29);
			this->button51->TabIndex = 116;
			this->button51->Text = L"获取";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->ForeColor = System::Drawing::Color::Black;
			this->button52->Location = System::Drawing::Point(242, 254);
			this->button52->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(96, 29);
			this->button52->TabIndex = 115;
			this->button52->Text = L"获取";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// button53
			// 
			this->button53->ForeColor = System::Drawing::Color::Black;
			this->button53->Location = System::Drawing::Point(130, 254);
			this->button53->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(96, 29);
			this->button53->TabIndex = 114;
			this->button53->Text = L"获取";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// textBoxtrial2_1gm
			// 
			this->textBoxtrial2_1gm->Location = System::Drawing::Point(771, 576);
			this->textBoxtrial2_1gm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial2_1gm->Name = L"textBoxtrial2_1gm";
			this->textBoxtrial2_1gm->Size = System::Drawing::Size(132, 30);
			this->textBoxtrial2_1gm->TabIndex = 113;
			// 
			// label81
			// 
			this->label81->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label81->ForeColor = System::Drawing::Color::Black;
			this->label81->Location = System::Drawing::Point(611, 580);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(147, 26);
			this->label81->TabIndex = 112;
			this->label81->Text = L"转移电导gm=";
			// 
			// chartTrial2_1
			// 
			chartArea8->Name = L"ChartArea1";
			this->chartTrial2_1->ChartAreas->Add(chartArea8);
			legend8->Name = L"Legend1";
			this->chartTrial2_1->Legends->Add(legend8);
			this->chartTrial2_1->Location = System::Drawing::Point(130, 306);
			this->chartTrial2_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chartTrial2_1->Name = L"chartTrial2_1";
			series8->ChartArea = L"ChartArea1";
			series8->Legend = L"Legend1";
			series8->Name = L"Series1";
			this->chartTrial2_1->Series->Add(series8);
			this->chartTrial2_1->Size = System::Drawing::Size(459, 300);
			this->chartTrial2_1->TabIndex = 110;
			this->chartTrial2_1->Text = L"chartTrial2_1";
			// 
			// button54
			// 
			this->button54->ForeColor = System::Drawing::Color::Black;
			this->button54->Location = System::Drawing::Point(7, 306);
			this->button54->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(109, 34);
			this->button54->TabIndex = 109;
			this->button54->Text = L"曲线生成";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// labeltrial2_1IL_8
			// 
			this->labeltrial2_1IL_8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_8->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_8->Location = System::Drawing::Point(917, 201);
			this->labeltrial2_1IL_8->Name = L"labeltrial2_1IL_8";
			this->labeltrial2_1IL_8->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_8->TabIndex = 107;
			// 
			// labeltrial2_1IL_7
			// 
			this->labeltrial2_1IL_7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_7->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_7->Location = System::Drawing::Point(802, 201);
			this->labeltrial2_1IL_7->Name = L"labeltrial2_1IL_7";
			this->labeltrial2_1IL_7->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_7->TabIndex = 106;
			// 
			// labeltrial2_1IL_6
			// 
			this->labeltrial2_1IL_6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_6->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_6->Location = System::Drawing::Point(693, 201);
			this->labeltrial2_1IL_6->Name = L"labeltrial2_1IL_6";
			this->labeltrial2_1IL_6->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_6->TabIndex = 105;
			// 
			// labeltrial2_1IL_5
			// 
			this->labeltrial2_1IL_5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial2_1IL_5->ForeColor = System::Drawing::Color::Black;
			this->labeltrial2_1IL_5->Location = System::Drawing::Point(578, 201);
			this->labeltrial2_1IL_5->Name = L"labeltrial2_1IL_5";
			this->labeltrial2_1IL_5->Size = System::Drawing::Size(96, 30);
			this->labeltrial2_1IL_5->TabIndex = 104;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(412, 96);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(389, 279);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 111;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(597, 216);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 29);
			this->button5->TabIndex = 118;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// labeltrial1_2V2_2
			// 
			this->labeltrial1_2V2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_2->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_2->Location = System::Drawing::Point(304, 141);
			this->labeltrial1_2V2_2->Name = L"labeltrial1_2V2_2";
			this->labeltrial1_2V2_2->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_2->TabIndex = 101;
			// 
			// labeltrial1_2V2_1
			// 
			this->labeltrial1_2V2_1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labeltrial1_2V2_1->ForeColor = System::Drawing::Color::Black;
			this->labeltrial1_2V2_1->Location = System::Drawing::Point(192, 141);
			this->labeltrial1_2V2_1->Name = L"labeltrial1_2V2_1";
			this->labeltrial1_2V2_1->Size = System::Drawing::Size(96, 30);
			this->labeltrial1_2V2_1->TabIndex = 100;
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(43, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 26);
			this->label2->TabIndex = 89;
			this->label2->Text = L"U1(V)";
			// 
			// label42
			// 
			this->label42->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label42->ForeColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(23, 145);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(109, 26);
			this->label42->TabIndex = 90;
			this->label42->Text = L"V2（v）";
			// 
			// label43
			// 
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label43->ForeColor = System::Drawing::Color::Black;
			this->label43->Location = System::Drawing::Point(23, 101);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(109, 26);
			this->label43->TabIndex = 89;
			this->label43->Text = L"RL（Ω）";
			// 
			// label19
			// 
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(21, 55);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(973, 38);
			this->label19->TabIndex = 87;
			this->label19->Text = L"  1．测量受控源 VCVS的转移特性U2＝ F（U1）及负载特性 U2＝F（IL）实验线路如图 8－2。";
			// 
			// label3
			// 
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(5, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(973, 38);
			this->label3->TabIndex = 88;
			this->label3->Text = L"  （1）固定RL＝2KΩ，调节稳压电源输出电压U1，测量U1及相应的U2值，列表。";
			// 
			// label44
			// 
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(5, 26);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(973, 38);
			this->label44->TabIndex = 88;
			this->label44->Text = L"（2）保持U1＝2V，调节可变电阻箱RL的阻值，测U2及IL，绘制负载特性曲线U2＝F（IL）。";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::Red;
			this->groupBox2->Location = System::Drawing::Point(37, 82);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1407, 1578);
			this->groupBox2->TabIndex = 120;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"实验内容一";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBoxtrial1_2RL_8);
			this->groupBox3->Controls->Add(this->textBoxtrial1_2RL_7);
			this->groupBox3->Controls->Add(this->textBoxtrial1_2RL_6);
			this->groupBox3->Controls->Add(this->textBoxtrial1_2RL_5);
			this->groupBox3->Controls->Add(this->textBoxtrial1_2RL_4);
			this->groupBox3->Controls->Add(this->textBoxtrial1_2RL_3);
			this->groupBox3->Controls->Add(this->textBoxtrial1_2RL_2);
			this->groupBox3->Controls->Add(this->textBoxtrial1_2RL_1);
			this->groupBox3->Controls->Add(this->button18);
			this->groupBox3->Controls->Add(this->button19);
			this->groupBox3->Controls->Add(this->button20);
			this->groupBox3->Controls->Add(this->button21);
			this->groupBox3->Controls->Add(this->button22);
			this->groupBox3->Controls->Add(this->button23);
			this->groupBox3->Controls->Add(this->button24);
			this->groupBox3->Controls->Add(this->button25);
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->button15);
			this->groupBox3->Controls->Add(this->button16);
			this->groupBox3->Controls->Add(this->button17);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_8);
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_7);
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_6);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_5);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_4);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_3);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_2);
			this->groupBox3->Controls->Add(this->labeltrial1_2IL_1);
			this->groupBox3->Controls->Add(this->label46);
			this->groupBox3->Controls->Add(this->chartTrial1_2);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_8);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_7);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_6);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_5);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_4);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_3);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_2);
			this->groupBox3->Controls->Add(this->labeltrial1_2V2_1);
			this->groupBox3->Controls->Add(this->label42);
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Controls->Add(this->label44);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->ForeColor = System::Drawing::Color::Red;
			this->groupBox3->Location = System::Drawing::Point(47, 989);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(1188, 630);
			this->groupBox3->TabIndex = 111;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"第二组";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button120);
			this->groupBox1->Controls->Add(this->button121);
			this->groupBox1->Controls->Add(this->button122);
			this->groupBox1->Controls->Add(this->button123);
			this->groupBox1->Controls->Add(this->button124);
			this->groupBox1->Controls->Add(this->button125);
			this->groupBox1->Controls->Add(this->button126);
			this->groupBox1->Controls->Add(this->button127);
			this->groupBox1->Controls->Add(this->button128);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_9);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_8);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_7);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_6);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_5);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_4);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_3);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_2);
			this->groupBox1->Controls->Add(this->labeltrial1_1U1_1);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button32);
			this->groupBox1->Controls->Add(this->textBoxtrial1_1u);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->chartTrial1_1);
			this->groupBox1->Controls->Add(this->button31);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_9);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_8);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_7);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_6);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_5);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_4);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_3);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_2);
			this->groupBox1->Controls->Add(this->labeltrial1_1U2_1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::Red;
			this->groupBox1->Location = System::Drawing::Point(47, 380);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1188, 576);
			this->groupBox1->TabIndex = 89;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"第一组";
			// 
			// button120
			// 
			this->button120->ForeColor = System::Drawing::Color::Black;
			this->button120->Location = System::Drawing::Point(1043, 114);
			this->button120->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button120->Name = L"button120";
			this->button120->Size = System::Drawing::Size(96, 29);
			this->button120->TabIndex = 140;
			this->button120->Text = L"设置";
			this->button120->UseVisualStyleBackColor = true;
			// 
			// button121
			// 
			this->button121->ForeColor = System::Drawing::Color::Black;
			this->button121->Location = System::Drawing::Point(931, 114);
			this->button121->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button121->Name = L"button121";
			this->button121->Size = System::Drawing::Size(96, 29);
			this->button121->TabIndex = 139;
			this->button121->Text = L"设置";
			this->button121->UseVisualStyleBackColor = true;
			// 
			// button122
			// 
			this->button122->ForeColor = System::Drawing::Color::Black;
			this->button122->Location = System::Drawing::Point(821, 114);
			this->button122->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button122->Name = L"button122";
			this->button122->Size = System::Drawing::Size(96, 29);
			this->button122->TabIndex = 138;
			this->button122->Text = L"设置";
			this->button122->UseVisualStyleBackColor = true;
			// 
			// button123
			// 
			this->button123->ForeColor = System::Drawing::Color::Black;
			this->button123->Location = System::Drawing::Point(711, 114);
			this->button123->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button123->Name = L"button123";
			this->button123->Size = System::Drawing::Size(96, 29);
			this->button123->TabIndex = 137;
			this->button123->Text = L"设置";
			this->button123->UseVisualStyleBackColor = true;
			// 
			// button124
			// 
			this->button124->ForeColor = System::Drawing::Color::Black;
			this->button124->Location = System::Drawing::Point(597, 114);
			this->button124->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button124->Name = L"button124";
			this->button124->Size = System::Drawing::Size(96, 29);
			this->button124->TabIndex = 136;
			this->button124->Text = L"设置";
			this->button124->UseVisualStyleBackColor = true;
			// 
			// button125
			// 
			this->button125->ForeColor = System::Drawing::Color::Black;
			this->button125->Location = System::Drawing::Point(483, 114);
			this->button125->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button125->Name = L"button125";
			this->button125->Size = System::Drawing::Size(96, 29);
			this->button125->TabIndex = 135;
			this->button125->Text = L"设置";
			this->button125->UseVisualStyleBackColor = true;
			// 
			// button126
			// 
			this->button126->ForeColor = System::Drawing::Color::Black;
			this->button126->Location = System::Drawing::Point(369, 114);
			this->button126->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button126->Name = L"button126";
			this->button126->Size = System::Drawing::Size(96, 29);
			this->button126->TabIndex = 134;
			this->button126->Text = L"设置";
			this->button126->UseVisualStyleBackColor = true;
			// 
			// button127
			// 
			this->button127->ForeColor = System::Drawing::Color::Black;
			this->button127->Location = System::Drawing::Point(261, 114);
			this->button127->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button127->Name = L"button127";
			this->button127->Size = System::Drawing::Size(96, 29);
			this->button127->TabIndex = 133;
			this->button127->Text = L"设置";
			this->button127->UseVisualStyleBackColor = true;
			// 
			// button128
			// 
			this->button128->ForeColor = System::Drawing::Color::Black;
			this->button128->Location = System::Drawing::Point(149, 114);
			this->button128->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button128->Name = L"button128";
			this->button128->Size = System::Drawing::Size(96, 29);
			this->button128->TabIndex = 132;
			this->button128->Text = L"设置";
			this->button128->UseVisualStyleBackColor = true;
			// 
			// labeltrial1_1U1_9
			// 
			this->labeltrial1_1U1_9->Location = System::Drawing::Point(1039, 80);
			this->labeltrial1_1U1_9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial1_1U1_9->Name = L"labeltrial1_1U1_9";
			this->labeltrial1_1U1_9->Size = System::Drawing::Size(100, 30);
			this->labeltrial1_1U1_9->TabIndex = 131;
			// 
			// labeltrial1_1U1_8
			// 
			this->labeltrial1_1U1_8->Location = System::Drawing::Point(931, 80);
			this->labeltrial1_1U1_8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial1_1U1_8->Name = L"labeltrial1_1U1_8";
			this->labeltrial1_1U1_8->Size = System::Drawing::Size(100, 30);
			this->labeltrial1_1U1_8->TabIndex = 130;
			// 
			// labeltrial1_1U1_7
			// 
			this->labeltrial1_1U1_7->Location = System::Drawing::Point(817, 80);
			this->labeltrial1_1U1_7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial1_1U1_7->Name = L"labeltrial1_1U1_7";
			this->labeltrial1_1U1_7->Size = System::Drawing::Size(100, 30);
			this->labeltrial1_1U1_7->TabIndex = 129;
			// 
			// labeltrial1_1U1_6
			// 
			this->labeltrial1_1U1_6->Location = System::Drawing::Point(709, 80);
			this->labeltrial1_1U1_6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial1_1U1_6->Name = L"labeltrial1_1U1_6";
			this->labeltrial1_1U1_6->Size = System::Drawing::Size(100, 30);
			this->labeltrial1_1U1_6->TabIndex = 128;
			// 
			// labeltrial1_1U1_5
			// 
			this->labeltrial1_1U1_5->Location = System::Drawing::Point(597, 80);
			this->labeltrial1_1U1_5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial1_1U1_5->Name = L"labeltrial1_1U1_5";
			this->labeltrial1_1U1_5->Size = System::Drawing::Size(100, 30);
			this->labeltrial1_1U1_5->TabIndex = 127;
			// 
			// labeltrial1_1U1_4
			// 
			this->labeltrial1_1U1_4->Location = System::Drawing::Point(479, 80);
			this->labeltrial1_1U1_4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial1_1U1_4->Name = L"labeltrial1_1U1_4";
			this->labeltrial1_1U1_4->Size = System::Drawing::Size(100, 30);
			this->labeltrial1_1U1_4->TabIndex = 126;
			// 
			// labeltrial1_1U1_3
			// 
			this->labeltrial1_1U1_3->Location = System::Drawing::Point(367, 80);
			this->labeltrial1_1U1_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial1_1U1_3->Name = L"labeltrial1_1U1_3";
			this->labeltrial1_1U1_3->Size = System::Drawing::Size(100, 30);
			this->labeltrial1_1U1_3->TabIndex = 125;
			// 
			// labeltrial1_1U1_2
			// 
			this->labeltrial1_1U1_2->Location = System::Drawing::Point(261, 80);
			this->labeltrial1_1U1_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial1_1U1_2->Name = L"labeltrial1_1U1_2";
			this->labeltrial1_1U1_2->Size = System::Drawing::Size(100, 30);
			this->labeltrial1_1U1_2->TabIndex = 124;
			// 
			// labeltrial1_1U1_1
			// 
			this->labeltrial1_1U1_1->Location = System::Drawing::Point(149, 80);
			this->labeltrial1_1U1_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->labeltrial1_1U1_1->Name = L"labeltrial1_1U1_1";
			this->labeltrial1_1U1_1->Size = System::Drawing::Size(100, 30);
			this->labeltrial1_1U1_1->TabIndex = 123;
			// 
			// button9
			// 
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(1043, 216);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(96, 29);
			this->button9->TabIndex = 122;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(931, 216);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 29);
			this->button8->TabIndex = 121;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(821, 216);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(96, 29);
			this->button7->TabIndex = 120;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(455, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(484, 25);
			this->label1->TabIndex = 119;
			this->label1->Text = L"VCVS、VCCS、CCVS、CCCS实验 实验内容";
			// 
			// textBoxtrial1_2RL_8
			// 
			this->textBoxtrial1_2RL_8->Location = System::Drawing::Point(976, 97);
			this->textBoxtrial1_2RL_8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial1_2RL_8->Name = L"textBoxtrial1_2RL_8";
			this->textBoxtrial1_2RL_8->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_2RL_8->TabIndex = 327;
			// 
			// textBoxtrial1_2RL_7
			// 
			this->textBoxtrial1_2RL_7->Location = System::Drawing::Point(862, 97);
			this->textBoxtrial1_2RL_7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial1_2RL_7->Name = L"textBoxtrial1_2RL_7";
			this->textBoxtrial1_2RL_7->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_2RL_7->TabIndex = 326;
			// 
			// textBoxtrial1_2RL_6
			// 
			this->textBoxtrial1_2RL_6->Location = System::Drawing::Point(750, 97);
			this->textBoxtrial1_2RL_6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial1_2RL_6->Name = L"textBoxtrial1_2RL_6";
			this->textBoxtrial1_2RL_6->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_2RL_6->TabIndex = 325;
			// 
			// textBoxtrial1_2RL_5
			// 
			this->textBoxtrial1_2RL_5->Location = System::Drawing::Point(638, 97);
			this->textBoxtrial1_2RL_5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial1_2RL_5->Name = L"textBoxtrial1_2RL_5";
			this->textBoxtrial1_2RL_5->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_2RL_5->TabIndex = 324;
			// 
			// textBoxtrial1_2RL_4
			// 
			this->textBoxtrial1_2RL_4->Location = System::Drawing::Point(520, 97);
			this->textBoxtrial1_2RL_4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial1_2RL_4->Name = L"textBoxtrial1_2RL_4";
			this->textBoxtrial1_2RL_4->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_2RL_4->TabIndex = 323;
			// 
			// textBoxtrial1_2RL_3
			// 
			this->textBoxtrial1_2RL_3->Location = System::Drawing::Point(408, 97);
			this->textBoxtrial1_2RL_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial1_2RL_3->Name = L"textBoxtrial1_2RL_3";
			this->textBoxtrial1_2RL_3->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_2RL_3->TabIndex = 322;
			// 
			// textBoxtrial1_2RL_2
			// 
			this->textBoxtrial1_2RL_2->Location = System::Drawing::Point(302, 97);
			this->textBoxtrial1_2RL_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial1_2RL_2->Name = L"textBoxtrial1_2RL_2";
			this->textBoxtrial1_2RL_2->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_2RL_2->TabIndex = 321;
			// 
			// textBoxtrial1_2RL_1
			// 
			this->textBoxtrial1_2RL_1->Location = System::Drawing::Point(190, 97);
			this->textBoxtrial1_2RL_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxtrial1_2RL_1->Name = L"textBoxtrial1_2RL_1";
			this->textBoxtrial1_2RL_1->Size = System::Drawing::Size(100, 30);
			this->textBoxtrial1_2RL_1->TabIndex = 320;
			// 
			// VCVS实验监控
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1529, 752);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->label166);
			this->Controls->Add(this->button246);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Name = L"VCVS实验监控";
			this->Text = L"VCVS实验监控";
			this->Load += gcnew System::EventHandler(this, &VCVS实验监控::VCVS实验监控_Load);
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial4_2))->EndInit();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial4_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial3_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial3_2))->EndInit();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial1_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial1_2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial2_2))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTrial2_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void VCVS实验监控_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
