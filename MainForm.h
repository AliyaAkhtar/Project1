#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbFirstName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::Button^ btnsubmit;


	private: System::Windows::Forms::Label^ lbWelcome;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->btnsubmit = (gcnew System::Windows::Forms::Button());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Your First Name";
			// 
			// tbFirstName
			// 
			this->tbFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFirstName->Location = System::Drawing::Point(33, 31);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(359, 21);
			this->tbFirstName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Your Last Name";
			// 
			// tbLastName
			// 
			this->tbLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbLastName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbLastName->Location = System::Drawing::Point(33, 94);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(359, 21);
			this->tbLastName->TabIndex = 3;
			// 
			// btnsubmit
			// 
			this->btnsubmit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnsubmit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsubmit->Location = System::Drawing::Point(33, 210);
			this->btnsubmit->Name = L"btnsubmit";
			this->btnsubmit->Size = System::Drawing::Size(359, 33);
			this->btnsubmit->TabIndex = 4;
			this->btnsubmit->Text = L"Submit";
			this->btnsubmit->UseVisualStyleBackColor = true;
			this->btnsubmit->Click += gcnew System::EventHandler(this, &MainForm::btnsubmit_Click);
			// 
			// lbWelcome
			// 
			this->lbWelcome->AutoSize = true;
			this->lbWelcome->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbWelcome->Location = System::Drawing::Point(33, 149);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(50, 19);
			this->lbWelcome->TabIndex = 5;
			this->lbWelcome->Text = L"label3";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(418, 261);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->btnsubmit);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"WELCOME";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnsubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ firstName = this->tbFirstName->Text;
		String^ lastName = this->tbLastName->Text;
		this->lbWelcome->Text = "Hello " + firstName + " " + lastName;
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->lbWelcome->Text = "";
	}
};
}
