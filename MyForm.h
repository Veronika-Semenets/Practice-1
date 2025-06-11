#pragma once

namespace Practice1 {

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
	private: System::Windows::Forms::Label^ labelSurname;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Label^ labelAge;
	private: System::Windows::Forms::Label^ labelResidence;
	private: System::Windows::Forms::TextBox^ textBoxSurname;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxAge;
	private: System::Windows::Forms::TextBox^ textBoxResidence;
	private: System::Windows::Forms::Button^ buttonSubmit;
	private: System::Windows::Forms::Label^ labelResult;

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
			this->labelSurname = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelAge = (gcnew System::Windows::Forms::Label());
			this->labelResidence = (gcnew System::Windows::Forms::Label());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAge = (gcnew System::Windows::Forms::TextBox());
			this->textBoxResidence = (gcnew System::Windows::Forms::TextBox());
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelSurname
			// 
			this->labelSurname->AutoSize = true;
			this->labelSurname->Location = System::Drawing::Point(25, 25);
			this->labelSurname->Name = L"labelSurname";
			this->labelSurname->Size = System::Drawing::Size(98, 13);
			this->labelSurname->TabIndex = 0;
			this->labelSurname->Text = L"Введіть прізвище:";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(25, 65);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(69, 13);
			this->labelName->TabIndex = 1;
			this->labelName->Text = L"Введіть ім\'я:";
			// 
			// labelAge
			// 
			this->labelAge->AutoSize = true;
			this->labelAge->Location = System::Drawing::Point(25, 105);
			this->labelAge->Name = L"labelAge";
			this->labelAge->Size = System::Drawing::Size(25, 13);
			this->labelAge->TabIndex = 2;
			this->labelAge->Text = L"Вік:";
			// 
			// labelResidence
			// 
			this->labelResidence->AutoSize = true;
			this->labelResidence->Location = System::Drawing::Point(25, 145);
			this->labelResidence->Name = L"labelResidence";
			this->labelResidence->Size = System::Drawing::Size(104, 13);
			this->labelResidence->TabIndex = 3;
			this->labelResidence->Text = L"Місце проживання:";
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Location = System::Drawing::Point(150, 25);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(120, 20);
			this->textBoxSurname->TabIndex = 4;
			this->textBoxSurname->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSurname_TextChanged);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(150, 65);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(120, 20);
			this->textBoxName->TabIndex = 5;
			// 
			// textBoxAge
			// 
			this->textBoxAge->Location = System::Drawing::Point(150, 105);
			this->textBoxAge->Name = L"textBoxAge";
			this->textBoxAge->Size = System::Drawing::Size(120, 20);
			this->textBoxAge->TabIndex = 6;
			// 
			// textBoxResidence
			// 
			this->textBoxResidence->Location = System::Drawing::Point(150, 145);
			this->textBoxResidence->Name = L"textBoxResidence";
			this->textBoxResidence->Size = System::Drawing::Size(120, 20);
			this->textBoxResidence->TabIndex = 7;
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->Location = System::Drawing::Point(105, 185);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(90, 25);
			this->buttonSubmit->TabIndex = 8;
			this->buttonSubmit->Text = L"Підтвердити";
			this->buttonSubmit->UseVisualStyleBackColor = true;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &MyForm::buttonSubmit_Click);
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(25, 225);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(0, 13);
			this->labelResult->TabIndex = 9;
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 320); // Increased height for better result display
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->buttonSubmit);
			this->Controls->Add(this->textBoxResidence);
			this->Controls->Add(this->textBoxAge);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->labelResidence);
			this->Controls->Add(this->labelAge);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->labelSurname);
			this->Name = L"MyForm";
			this->Text = L"Персональна інформація"; // Updated form title
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen; // Center form on screen
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		// Remove debug MessageBox
		try {
			String^ surname = textBoxSurname->Text;
			String^ name = textBoxName->Text;
			int age;
			
			// Validate input
			if (surname->Length == 0 || name->Length == 0 || textBoxAge->Text->Length == 0 || textBoxResidence->Text->Length == 0) {
				MessageBox::Show("Будь ласка, заповніть усі поля", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			
			// Try to parse age
			if (!Int32::TryParse(textBoxAge->Text, age)) {
				MessageBox::Show("Вік повинен бути числом", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			
			String^ residence = textBoxResidence->Text;
			
			// Display result
			String^ result = "Мене звати " + name + " " + surname + "\r\n" +
							"Мені " + age.ToString() + " років\r\n" +
							"Я живу у " + residence;
							
			labelResult->Text = result;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void textBoxSurname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
