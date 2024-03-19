#pragma once
#include <iostream>
#include <string>

namespace Task2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ resultLabel;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Simple Calculator";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Number 1:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(180, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Number 2:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(37, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 58);
			this->button1->TabIndex = 5;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(110, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 58);
			this->button2->TabIndex = 6;
			this->button2->Text = L"-";
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(110, 174);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 58);
			this->button3->TabIndex = 7;
			this->button3->Text = L"/";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(37, 174);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 58);
			this->button4->TabIndex = 8;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(183, 110);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 58);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Clear";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultLabel->Location = System::Drawing::Point(215, 190);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(55, 16);
			this->resultLabel->TabIndex = 10;
			this->resultLabel->Text = L"Result:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(384, 261);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int number1, number2, result;

	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ number1txt = this->textBox1->Text->Trim();
		String^ number2txt = this->textBox2->Text->Trim();

	
		if (!Int32::TryParse(number1txt, number1)) {
			MessageBox::Show("Please Enter a Valid Integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (!Int32::TryParse(number2txt, number2)) {
			MessageBox::Show("Please Enter a Valid Integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		result = number1 + number2;
		this->resultLabel->Text = "Result:" + Convert::ToString(result);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ number1txt = this->textBox1->Text->Trim();
		String^ number2txt = this->textBox2->Text->Trim();


		if (!Int32::TryParse(number1txt, number1)) {
			MessageBox::Show("Please Enter a Valid Integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (!Int32::TryParse(number2txt, number2)) {
			MessageBox::Show("Please Enter a Valid Integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		result = number1 - number2;
		this->resultLabel->Text = "Result:" + Convert::ToString(result);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ number1txt = this->textBox1->Text->Trim();
		String^ number2txt = this->textBox2->Text->Trim();


		if (!Int32::TryParse(number1txt, number1)) {
			MessageBox::Show("Please Enter a Valid Integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (!Int32::TryParse(number2txt, number2)) {
			MessageBox::Show("Please Enter a Valid Integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		result = number1 * number2;
		this->resultLabel->Text = "Result:" + Convert::ToString(result);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ number1txt = this->textBox1->Text->Trim();
		String^ number2txt = this->textBox2->Text->Trim();


		if (!Int32::TryParse(number1txt, number1)) {
			MessageBox::Show("Please Enter a Valid Integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (!Int32::TryParse(number2txt, number2)) {
			MessageBox::Show("Please Enter a Valid Integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		result = number1 / number2;
		this->resultLabel->Text = "Result:" + Convert::ToString(result);
	}

	public: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		number1 = 0;
		number2 = 0;
		result = 0;
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->resultLabel->Text = "Result:";
	}

};
}
