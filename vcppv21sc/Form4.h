#pragma once
#include <Windows.h>
#include <MMSystem.h>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#pragma comment(lib, "Winmm.lib")
namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Reflection;
	using namespace System::Resources;
	using namespace msclr::interop;

	/// <summary>
	/// Form4 摘要
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(139, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"版本：V2.1";
			this->label1->Click += gcnew System::EventHandler(this, &Form4::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(149, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"更新内容";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"1.优化界面";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(8, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(282, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"3.使用C++和.Net语言代替vb";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(281, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"4.修复了无法抽到32号的bug";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(128, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"2.移除了HIM";
			this->label6->Click += gcnew System::EventHandler(this, &Form4::label6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(90, 90);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(8, 228);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(227, 25);
			this->label7->TabIndex = 7;
			this->label7->Text = L"5.移除一些不常用功能";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(153, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 40);
			this->button1->TabIndex = 8;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 260);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form4";
			this->Text = L"关于";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 mciSendString(L"close mp3", NULL, 0, NULL);
			 HWND hWnd = FindWindow(NULL, L"关于");
			 PostMessage(hWnd, WM_CLOSE, 0, 0);
		 }
private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
			 // 加载资源文件
    ResourceManager^ rm = gcnew ResourceManager("test.Form4", Assembly::GetExecutingAssembly());

    // 从资源文件中获取音乐文件的字节流
    array<Byte>^ musicBytes = safe_cast<array<Byte>^>(rm->GetObject("1285660690-1-192"));

    // 将音乐文件的字节流写入临时文件
	System::String^ tempFilePath = System::Environment::GetEnvironmentVariable("temp") + "\\music.mp3"; // 临时文件路径
	System::IO::File::WriteAllBytes(tempFilePath, musicBytes);


    // 使用 MCI 命令播放临时文件
    pin_ptr<const wchar_t> wch = PtrToStringChars(tempFilePath);
    LPCWSTR wstr = wch;
	std::wstring wideString = L"open \"" + std::wstring(wstr) + L"\" type mpegvideo alias mp3";
	LPCWSTR lpcwstr = wideString.c_str();
	mciSendString(lpcwstr, NULL, 0, NULL);
    mciSendString(L"play mp3", NULL, 0, NULL);

    // 播放音乐
		 }
};
}
