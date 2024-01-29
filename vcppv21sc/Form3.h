#pragma once
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <Windows.h>
#include <cctype>
inline bool ValidateInput(const std::string& input) {
    if (input.empty()) {
        return false; // 字符串为空，不满足要求
    }

    for (size_t i = 1; i < input.size(); i++) {
        if (!std::isdigit(input[i])) {
            return false; // 除了第一位之外有非数字字符，不满足要求
        }
    }
	if (input[0] == '-'||std::isdigit(input[0])){
		return true;
	}
    return false; 
}

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form3 摘要
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}
		int min;
	private: System::Windows::Forms::Label^  label4;
	public: 
		int max;
		// 添加一个事件，用于通知 Form1 整数变量 a 的值已经准备好
		delegate void RangeReadyEventHandler(int minValue, int maxValue);
		event RangeReadyEventHandler^ RangeReady;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	protected: 

	protected: 

	protected: 





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(153, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"最小值（不能小于-99998）";
			this->label1->Click += gcnew System::EventHandler(this, &Form3::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(271, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"最大值（不能超过 99998）";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 14.9703F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(17, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(384, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"生成个数（懒得做了自己动手生成吧）";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(295, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(92, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(294, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(92, 22);
			this->textBox2->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 42.05941F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(69, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(265, 60);
			this->label4->TabIndex = 6;
			this->label4->Text = L"无效输入";
			this->label4->Visible = false;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 255);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form3";
			this->Text = L"设置";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
    // 检查输入的字符是否是数字
    if (ValidateInput(msclr::interop::marshal_as<std::string>(textBox1->Text)) && ValidateInput(msclr::interop::marshal_as<std::string>(textBox2->Text)))
    {
        int min = System::Convert::ToInt32(textBox1->Text);
        int max = System::Convert::ToInt32(textBox2->Text);
        if (max > min && min > -99999 && max < 99999)
        {
            RangeReady(min, max);
        }
        else
        {
            this->label4->Visible = true;
        }
    }
    else
    {
        this->label4->Visible = true;
    }
}


private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}