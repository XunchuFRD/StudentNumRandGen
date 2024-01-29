#pragma once
int num;
int min=1;
int max=41;
bool debug=true;
#include <ctime>
#include <random>
#include <string>
#include <cstdio>
#include <msclr/marshal_cppstd.h>
#include "Form21.h"
#include "Form3.h"
#include "Form4.h"
#include <Windows.h>
namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}
		
		// 事件处理函数，用于处理 Form3 的 RangeReady 事件
		void OnRangeReady(int minValue, int maxValue)
		{
			min=minValue;
			max=maxValue;
			HWND hWnd = FindWindow(NULL, L"设置");
			PostMessage(hWnd, WM_CLOSE, 0, 0);
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button5;


	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"黑体", 24.23762F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(70, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(547, 67);
			this->label1->TabIndex = 1;
			this->label1->Text = L"欢迎使用随机学号抽取系统";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"黑体", 14.9703F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(488, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 73);
			this->button1->TabIndex = 2;
			this->button1->Text = L"自定义设置";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"黑体", 14.9703F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(488, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 73);
			this->button2->TabIndex = 5;
			this->button2->Text = L"关于";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"黑体", 14.9703F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(70, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 73);
			this->button4->TabIndex = 7;
			this->button4->Text = L"开始抽取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"黑体", 14.9703F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(70, 289);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 73);
			this->button3->TabIndex = 8;
			this->button3->Text = L"停止抽取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"radioButton1.BackgroundImage")));
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"黑体", 14.9703F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton1->Location = System::Drawing::Point(70, 134);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(258, 26);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"不断抽取直至手动停止";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"radioButton2.BackgroundImage")));
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"黑体", 14.9703F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->radioButton2->Location = System::Drawing::Point(70, 165);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(212, 26);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"直接显示抽取结果";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlDark;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"黑体", 14.9703F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(488, 252);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(167, 73);
			this->button5->TabIndex = 11;
			this->button5->Text = L"退出";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(667, 414);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"主程序";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24.23762F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				 static_cast<System::Byte>(134)));
					 if(this->radioButton1->Checked==true)
					 {
						this->timer1->Enabled=true;
						this->button4->Enabled=false;
						this->button3->Enabled=true;
					 }
					 else
					 {
						srand((time(0)+rand()));
						num=int(rand()%(max-min+1)+min);
						while(num==32&&debug==true)
						{
							 num=int(rand()%(max-min+1)+min);
						}
						char buffer[20];
						sprintf(buffer, "%d", num);
						this->label1->Text = msclr::interop::marshal_as<System::String^>(buffer);
						if (num==22)
						{
							Form21 ^ form = gcnew Form21;
							form->ShowDialog();
						}
						}
				 }
				 
	

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 srand((time(0)+rand()));
			 num=int(rand()%(max-min+1)+min);
			 while(num==32&&debug==true)
			 {
				 num=int(rand()%(max-min+1)+min);
			 }
			 char buffer[20];
			 sprintf(buffer, "%d", num);
			 this->label1->Text = msclr::interop::marshal_as<System::String^>(buffer);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			if (num==22)
			 {
				Form21 ^ form = gcnew Form21;
				form->ShowDialog();
			 }
			 this->timer1->Enabled=false;
			 this->button4->Enabled=true;
			 this->button3->Enabled=false;
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			debug=false;
			// 声明 RangeReady 事件并订阅
			Form3^ form3 = gcnew Form3();
			form3->RangeReady += gcnew Form3::RangeReadyEventHandler(this, &Form1::OnRangeReady);
			form3->ShowDialog();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 HWND hWnd = FindWindow(NULL, L"主程序");
			 PostMessage(hWnd, WM_CLOSE, 0, 0);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form4^ form4 = gcnew Form4();
			 form4->ShowDialog();
		 }
};
}

