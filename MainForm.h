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
	private: System::Windows::Forms::Label^ lbl_fst_nm;
	private: System::Windows::Forms::TextBox^ tb_fst_nm;
	protected:


	private: System::Windows::Forms::Label^ lbl_lst_nm;
	private: System::Windows::Forms::TextBox^ tb_lst_nm;




	private: System::Windows::Forms::Button^ btn_submit;



	private: System::Windows::Forms::Label^ lbWelcome;
	private: System::Windows::Forms::Label^ lbl_emp_id;
	private: System::Windows::Forms::TextBox^ tb_emp_id;
	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_fst_nm = (gcnew System::Windows::Forms::Label());
			this->tb_fst_nm = (gcnew System::Windows::Forms::TextBox());
			this->lbl_lst_nm = (gcnew System::Windows::Forms::Label());
			this->tb_lst_nm = (gcnew System::Windows::Forms::TextBox());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->lbl_emp_id = (gcnew System::Windows::Forms::Label());
			this->tb_emp_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_fst_nm
			// 
			this->lbl_fst_nm->AutoSize = true;
			this->lbl_fst_nm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_fst_nm->Location = System::Drawing::Point(30, 78);
			this->lbl_fst_nm->Name = L"lbl_fst_nm";
			this->lbl_fst_nm->Size = System::Drawing::Size(126, 15);
			this->lbl_fst_nm->TabIndex = 0;
			this->lbl_fst_nm->Text = L"Enter Your First Name";
			// 
			// tb_fst_nm
			// 
			this->tb_fst_nm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_fst_nm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_fst_nm->Location = System::Drawing::Point(33, 108);
			this->tb_fst_nm->Name = L"tb_fst_nm";
			this->tb_fst_nm->Size = System::Drawing::Size(347, 21);
			this->tb_fst_nm->TabIndex = 1;
			// 
			// lbl_lst_nm
			// 
			this->lbl_lst_nm->AutoSize = true;
			this->lbl_lst_nm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_lst_nm->Location = System::Drawing::Point(30, 149);
			this->lbl_lst_nm->Name = L"lbl_lst_nm";
			this->lbl_lst_nm->Size = System::Drawing::Size(123, 15);
			this->lbl_lst_nm->TabIndex = 2;
			this->lbl_lst_nm->Text = L"Enter Your Last Name";
			// 
			// tb_lst_nm
			// 
			this->tb_lst_nm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_lst_nm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_lst_nm->Location = System::Drawing::Point(33, 171);
			this->tb_lst_nm->Name = L"tb_lst_nm";
			this->tb_lst_nm->Size = System::Drawing::Size(347, 21);
			this->tb_lst_nm->TabIndex = 3;
			// 
			// btn_submit
			// 
			this->btn_submit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_submit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_submit->Location = System::Drawing::Point(33, 288);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(170, 36);
			this->btn_submit->TabIndex = 4;
			this->btn_submit->Text = L"Submit";
			this->btn_submit->UseVisualStyleBackColor = true;
			this->btn_submit->Click += gcnew System::EventHandler(this, &MainForm::btnsubmit_Click);
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
			// lbl_emp_id
			// 
			this->lbl_emp_id->AutoSize = true;
			this->lbl_emp_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_emp_id->Location = System::Drawing::Point(30, 24);
			this->lbl_emp_id->Name = L"lbl_emp_id";
			this->lbl_emp_id->Size = System::Drawing::Size(107, 15);
			this->lbl_emp_id->TabIndex = 6;
			this->lbl_emp_id->Text = L"Enter Employee ID";
			// 
			// tb_emp_id
			// 
			this->tb_emp_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_emp_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_emp_id->Location = System::Drawing::Point(33, 42);
			this->tb_emp_id->Name = L"tb_emp_id";
			this->tb_emp_id->Size = System::Drawing::Size(347, 22);
			this->tb_emp_id->TabIndex = 7;
			// 
			// btn_search
			// 
			this->btn_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(208, 288);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(172, 36);
			this->btn_search->TabIndex = 8;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &MainForm::btnsearch_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->Location = System::Drawing::Point(33, 244);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(170, 38);
			this->btn_delete->TabIndex = 9;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MainForm::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->Location = System::Drawing::Point(209, 244);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(171, 38);
			this->btn_update->TabIndex = 10;
			this->btn_update->Text = L"Update";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MainForm::btn_update_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(406, 336);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->tb_emp_id);
			this->Controls->Add(this->lbl_emp_id);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->btn_submit);
			this->Controls->Add(this->tb_lst_nm);
			this->Controls->Add(this->lbl_lst_nm);
			this->Controls->Add(this->tb_fst_nm);
			this->Controls->Add(this->lbl_fst_nm);
			this->Name = L"MainForm";
			this->Text = L"WELCOME";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*
		Purpose =
		Input Arguments =
		1 - sender = Object : contains information about user
		2 - EventArg = Array : contain
		Output Arguments = void

		Version = 1.0.0
		Author =
		Date Created =
		Modifed By = null
		Modified Date= null



		*/
	private: System::Void btnsubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		int emp_id = System::Convert::ToInt32(tb_emp_id->Text);
		String^ firstName = this->tb_fst_nm->Text;
		String^ lastName = this->tb_lst_nm->Text;

		//std::ifstream infile("C:/Users/aliya.akhtar/Desktop/employee_data.txt");
		std::ifstream infile("C:/Users/Shabana/Desktop/employer_data.txt");

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
			//std::ofstream outfile("C:/Users/aliya.akhtar/Desktop/employee_data.txt", std::ios::app);
			std::ofstream outfile("C:/Users/Shabana/Desktop/employer_data.txt", std::ios::app);

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
		int emp_id = System::Convert::ToInt32(tb_emp_id->Text);

		//std::ifstream infile("C:/Users/aliya.akhtar/Desktop/employee_data.txt");
		std::ifstream infile("C:/Users/Shabana/Desktop/employer_data.txt");

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

						// Display the data
						String^ firstNameStr = gcnew String(firstName.c_str());
						String^ lastNameStr = gcnew String(lastName.c_str());

						tb_fst_nm->Text = firstNameStr;
						tb_lst_nm->Text = lastNameStr;

						infile.close();
						return;
					}
				}
			}

			infile.close();
		}

		// If the record was not found
		tb_fst_nm->Text = "";
		tb_lst_nm->Text = "";

		// Show an error message
		System::Windows::Forms::MessageBox::Show("Record for the entered ID does not exist.");
	}

	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		int emp_id = System::Convert::ToInt32(tb_emp_id->Text);

		// Read all records from the file into a vector, excluding separating lines
		std::ifstream infile("C:/Users/Shabana/Desktop/employer_data.txt");
		std::vector<std::string> records;
		std::string line;

		if (infile.is_open()) {
			bool skipNextLine = false;

			while (std::getline(infile, line)) {
				if (!skipNextLine) {
					records.push_back(line);
				}

				// Toggle the skipNextLine flag for the separating line
				skipNextLine = !skipNextLine;

				if (line.empty()) {
					// Reset the skipNextLine flag when an empty line is encountered
					skipNextLine = false;
				}
			}
			infile.close();
		}

		// Find and remove the record corresponding to the entered ID
		bool recordFound = false;
		for (auto it = records.begin(); it != records.end(); ++it) {
			std::istringstream iss(*it);
			int id;
			iss >> id;

			if (id == emp_id) {
				it = records.erase(it);  // Remove the record
				recordFound = true;
				break;
			}
		}

		if (recordFound) {
			std::ofstream outfile("C:/Users/Shabana/Desktop/employer_data.txt");

			if (outfile.is_open()) {
				bool deleteNextEmptyLine = false;

				for (const std::string& record : records) {
					if (deleteNextEmptyLine) {
						deleteNextEmptyLine = false;  // Reset the flag
					}
					else {
						outfile << record << "\n";

						if (record.empty()) {
							deleteNextEmptyLine = true;  // Set the flag to delete the next empty line
						}
					}
				}

				outfile.close();
				System::Windows::Forms::MessageBox::Show("Record deleted successfully.");
			}
			else {
				System::Windows::Forms::MessageBox::Show("Error in opening the file for writing.");
			}
		}

	};
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		int emp_id = System::Convert::ToInt32(tb_emp_id->Text);

		// Read all records from the file into a vector, excluding separating lines
		std::ifstream infile("C:/Users/Shabana/Desktop/employer_data.txt");
		std::vector<std::string> records;
		std::string line;

		if (infile.is_open()) {
			bool skipNextLine = false;

			while (std::getline(infile, line)) {
				if (!skipNextLine) {
					records.push_back(line);
				}

				// Toggle the skipNextLine flag for the separating line
				skipNextLine = !skipNextLine;

				if (line.empty()) {
					// Reset the skipNextLine flag when an empty line is encountered
					skipNextLine = false;
				}
			}
			infile.close();
		}

		// Find and update the record corresponding to the entered ID
		bool recordFound = false;
		for (auto& record : records) {
			std::istringstream iss(record);
			int id;
			iss >> id;

			if (id == emp_id) {
				// Update the first name and last name with the new values
				String^ firstName = tb_fst_nm->Text;
				String^ lastName = tb_lst_nm->Text;

				std::string firstNameStr, lastNameStr;
				if (firstName != nullptr)
					firstNameStr = msclr::interop::marshal_as<std::string>(firstName);
				if (lastName != nullptr)
					lastNameStr = msclr::interop::marshal_as<std::string>(lastName);

				// Replace the existing record with the updated one
				record = std::to_string(emp_id) + " | " + firstNameStr + " | " + lastNameStr;
				recordFound = true;
				break;
			}
		}

		if (recordFound) {
			// Write the updated records back to the file, overwriting the old data
			std::ofstream outfile("C:/Users/Shabana/Desktop/employer_data.txt");

			if (outfile.is_open()) {
				for (const std::string& record : records) {
					outfile << record << "\n";
				}

				outfile.close();
				System::Windows::Forms::MessageBox::Show("Record updated successfully.");
			}
			else {
				System::Windows::Forms::MessageBox::Show("Error in opening the file for writing.");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Record for the entered ID does not exist.");
		}
	}

};
};