#pragma once
#include <iostream>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <sstream>
#include <algorithm>

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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tb_id;
	private: System::Windows::Forms::Button^ btnsearch;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_id = (gcnew System::Windows::Forms::TextBox());
			this->btnsearch = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 78);
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
			this->tbFirstName->Location = System::Drawing::Point(33, 108);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(347, 21);
			this->tbFirstName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 149);
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
			this->tbLastName->Location = System::Drawing::Point(33, 171);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(347, 21);
			this->tbLastName->TabIndex = 3;
			// 
			// btnsubmit
			// 
			this->btnsubmit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnsubmit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsubmit->Location = System::Drawing::Point(33, 288);
			this->btnsubmit->Name = L"btnsubmit";
			this->btnsubmit->Size = System::Drawing::Size(170, 33);
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
			this->lbWelcome->Size = System::Drawing::Size(0, 19);
			this->lbWelcome->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Enter Employee ID";
			// 
			// tb_id
			// 
			this->tb_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_id->Location = System::Drawing::Point(33, 42);
			this->tb_id->Name = L"tb_id";
			this->tb_id->Size = System::Drawing::Size(347, 22);
			this->tb_id->TabIndex = 7;
			//this->tb_id->TextChanged += gcnew System::EventHandler(this, &MainForm::tb_id_TextChanged);
			// 
			// btnsearch
			// 
			this->btnsearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnsearch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsearch->Location = System::Drawing::Point(208, 288);
			this->btnsearch->Name = L"btnsearch";
			this->btnsearch->Size = System::Drawing::Size(172, 33);
			this->btnsearch->TabIndex = 8;
			this->btnsearch->Text = L"Search";
			this->btnsearch->UseVisualStyleBackColor = true;
			this->btnsearch->Click += gcnew System::EventHandler(this, &MainForm::btnsearch_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(406, 336);
			this->Controls->Add(this->btnsearch);
			this->Controls->Add(this->tb_id);
			this->Controls->Add(this->label3);
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
		int emp_id = System::Convert::ToInt32(tb_id->Text);
		String^ firstName = this->tbFirstName->Text;
		String^ lastName = this->tbLastName->Text;

		std::ifstream infile("C:/Users/aliya.akhtar/Desktop/employee_data.txt");
		std::string line;
		bool idExists = false;

		if (infile.is_open()) {
			while (std::getline(infile, line)) {
				// Split the line into ID, first name, and last name using '|'
				std::istringstream iss(line);
				int id;
				iss >> id;

				// Check if the ID exists
				if (id == emp_id) {
					idExists = true;
					break;
				}
			}
			infile.close();
		}

		if (idExists) {
			System::Windows::Forms::MessageBox::Show("Employee ID already exists.");
		}
		else {
			// Open the file for appending
			std::ofstream outfile("C:/Users/aliya.akhtar/Desktop/employee_data.txt", std::ios::app);

			if (outfile.is_open()) {
				std::string firstNameStr, lastNameStr;
				if (firstName != nullptr)
					firstNameStr = msclr::interop::marshal_as<std::string>(firstName);
				if (lastName != nullptr)
					lastNameStr = msclr::interop::marshal_as<std::string>(lastName);

				outfile << emp_id << "" << " | " << firstNameStr << "" << " | " << lastNameStr << "\n";
				outfile << "-----------------------------------------------" << "\n";

				outfile.close();

				System::Windows::Forms::MessageBox::Show("Record added to file!");
			}
			else {
				System::Windows::Forms::MessageBox::Show("Error in opening the file");
			}
		}
	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->lbWelcome->Text = "";
	}

	private: System::Void btnsearch_Click(System::Object^ sender, System::EventArgs^ e) {
		int emp_id = System::Convert::ToInt32(tb_id->Text);

		// Open the file for reading
		std::ifstream infile("C:/Users/aliya.akhtar/Desktop/employee_data.txt");
		std::string line;

		if (infile.is_open()) {
			while (std::getline(infile, line)) {
				std::istringstream iss(line);
				int id;
				std::string data;

				// Extract ID
				iss >> id;

				if (id == emp_id) {
					// Extract the remaining data as a single string
					std::getline(iss, data);

					// Find the positions of the '|' delimiter
					size_t pos1 = data.find("|");
					size_t pos2 = data.find("|", pos1 + 1);

					if (pos1 != std::string::npos && pos2 != std::string::npos) {
						// Extract the first name and last name
						std::string firstName = data.substr(pos1 + 1, pos2 - pos1 - 1);
						std::string lastName = data.substr(pos2 + 1);

						// Display the found data
						String^ firstNameStr = gcnew String(firstName.c_str());
						String^ lastNameStr = gcnew String(lastName.c_str());

						tbFirstName->Text = firstNameStr;
						tbLastName->Text = lastNameStr;

						infile.close();
						return; // Exit the function since we found the record
					}
				}
			}

			infile.close();
		}

		// If the code reaches this point, the record was not found
		tbFirstName->Text = ""; 
		tbLastName->Text = "";  

		// Show an error message
		System::Windows::Forms::MessageBox::Show("Record for the entered ID does not exist.");
	}



};
}
