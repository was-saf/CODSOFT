#pragma once
#include <iostream>
#include <random>
#include <string>


namespace Task1 {

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ guesstxt;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;



	protected:

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->guesstxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(273, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 61);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// guesstxt
			// 
			this->guesstxt->Location = System::Drawing::Point(273, 197);
			this->guesstxt->Name = L"guesstxt";
			this->guesstxt->Size = System::Drawing::Size(207, 20);
			this->guesstxt->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 197);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"After Clicking Generate, Guess the Number";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(273, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Submit your Guess";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(363, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->guesstxt);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		int random_number = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Random Number Generated", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(1, 100);
		random_number = dis(gen);

		//this->label2->Text = Convert::ToString(random_number);
	}



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ guessText = this->guesstxt->Text->Trim();
		if (guessText == "") {
			MessageBox::Show("Enter a Number to Guess before pressing the Submit Button, Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		int guess;
		if (!Int32::TryParse(guessText, guess)) {
			MessageBox::Show("Please Enter a Valid Integer from 1-100", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (guess == random_number) {
			MessageBox::Show("Congratulations! You guessed the correct number!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}	
		else if (guess < random_number){
			MessageBox::Show("Sorry, Guess too Low!","Incorrect Guess", MessageBoxButtons::OK, MessageBoxIcon::Information);
			guess = 0;
			guessText == "";
			this->guesstxt->Text == "";
		}
		else if (guess > random_number) {
			MessageBox::Show("Sorry, Guess too High!", "Incorrect Guess", MessageBoxButtons::OK, MessageBoxIcon::Information);
			guess = 0;
			guessText == "";
			this->guesstxt->Text == "";
		}
	}

};
}
