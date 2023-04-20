#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxOutput;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ buttonAddition;
	private: System::Windows::Forms::Button^ buttonSubstraction;
	private: System::Windows::Forms::Button^ buttonEquals;






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
			this->textBoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->buttonAddition = (gcnew System::Windows::Forms::Button());
			this->buttonSubstraction = (gcnew System::Windows::Forms::Button());
			this->buttonEquals = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxOutput
			// 
			this->textBoxOutput->Location = System::Drawing::Point(74, 56);
			this->textBoxOutput->Name = L"textBoxOutput";
			this->textBoxOutput->Size = System::Drawing::Size(518, 22);
			this->textBoxOutput->TabIndex = 0;
			
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 69);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(197, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 69);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(334, 116);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 69);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(74, 205);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 69);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(197, 205);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 69);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(334, 205);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 69);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(74, 296);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 65);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(197, 296);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 65);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(334, 296);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 65);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(197, 386);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 63);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// buttonAddition
			// 
			this->buttonAddition->Location = System::Drawing::Point(74, 386);
			this->buttonAddition->Name = L"buttonAddition";
			this->buttonAddition->Size = System::Drawing::Size(75, 63);
			this->buttonAddition->TabIndex = 11;
			this->buttonAddition->Text = L"+";
			this->buttonAddition->UseVisualStyleBackColor = true;
			// 
			// buttonSubstraction
			// 
			this->buttonSubstraction->Location = System::Drawing::Point(334, 386);
			this->buttonSubstraction->Name = L"buttonSubstraction";
			this->buttonSubstraction->Size = System::Drawing::Size(75, 63);
			this->buttonSubstraction->TabIndex = 12;
			this->buttonSubstraction->Text = L"-";
			this->buttonSubstraction->UseVisualStyleBackColor = true;
			// 
			// buttonEquals
			// 
			this->buttonEquals->BackColor = System::Drawing::Color::Goldenrod;
			this->buttonEquals->Location = System::Drawing::Point(487, 116);
			this->buttonEquals->Name = L"buttonEquals";
			this->buttonEquals->Size = System::Drawing::Size(75, 69);
			this->buttonEquals->TabIndex = 13;
			this->buttonEquals->Text = L"=";
			this->buttonEquals->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 550);
			this->Controls->Add(this->buttonEquals);
			this->Controls->Add(this->buttonSubstraction);
			this->Controls->Add(this->buttonAddition);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxOutput);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void buttonEquals_Click(System::Object^ sender, System::EventArgs^ e){
	if()c
};

