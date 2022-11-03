#pragma once
#include "User.h"
#include "Manage.h"
#include "MainForm.h"
#include<fstream>
#include<stdlib.h>
#include<msclr\marshal_cppstd.h>
namespace PBL2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
		/* */
		bool flag = true;
		void Load_Data_Of_User()
		{
			string temp;
			ifstream data_user;
			data_user.open("db_user.csv");
			for (int i = 0; i < 100; i++)
			{
				if (data_user.eof())
				{
					break;
				}
				getline(data_user, temp, ',');
				list_User[i].setUsername(temp);
				getline(data_user, temp, '\n');
				list_User[i].setPassword(temp);
			}
			data_user.close();
		}
		void Save_Data_Of_User()
		{
			ofstream user;
			user.open("User.txt", ios::app);
			for (int i = 0; i < 100; i++)
			{
				user << list_User[i].getUsername() << ",";
				user << list_User[i].getPassword() << "\n" << endl;
			}
			user.close();
		}
	public:

		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Login;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txt_Password;

	private: System::Windows::Forms::TextBox^ txt_Username;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->btn_Login = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_Password = (gcnew System::Windows::Forms::TextBox());
			this->txt_Username = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_Login
			// 
			this->btn_Login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_Login->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_Login->Location = System::Drawing::Point(445, 473);
			this->btn_Login->Name = L"btn_Login";
			this->btn_Login->Size = System::Drawing::Size(134, 41);
			this->btn_Login->TabIndex = 0;
			this->btn_Login->Text = L"Xác nhận";
			this->btn_Login->UseVisualStyleBackColor = true;
			this->btn_Login->Click += gcnew System::EventHandler(this, &Login::btn_Login_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(399, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Đăng nhập";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->txt_Password);
			this->groupBox1->Controls->Add(this->txt_Username);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(257, 214);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(484, 244);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Nhập thông tin để đăng nhập";
			// 
			// txt_Password
			// 
			this->txt_Password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_Password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Password->Location = System::Drawing::Point(173, 145);
			this->txt_Password->Name = L"txt_Password";
			this->txt_Password->Size = System::Drawing::Size(276, 28);
			this->txt_Password->TabIndex = 1;
			this->txt_Password->UseSystemPasswordChar = true;
			// 
			// txt_Username
			// 
			this->txt_Username->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_Username->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Username->Location = System::Drawing::Point(173, 68);
			this->txt_Username->Name = L"txt_Username";
			this->txt_Username->Size = System::Drawing::Size(276, 28);
			this->txt_Username->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Password : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(43, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Username : ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Gold;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(980, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(980, 554);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_Login);
			this->Name = L"Login";
			this->Text = L"Login";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Login_Click(System::Object^ sender, System::EventArgs^ e) {
	SignIn:
		Load_Data_Of_User();
		std::string tempStr = marshal_as<std::string>(txt_Username->Text);
		std::string tempStr2 = marshal_as<std::string>(txt_Password->Text);
		int counter = 0;
		int found = 0;
		for (int i = 0; i < 100; i++)
		{
			if (txt_Username->Text == "" || txt_Password->Text == "")
			{

				MessageBox::Show("You may left to fill some fields!", "Error"
					, MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
			else if (list_User[i].getUsername() == tempStr && list_User[i].getPassword() == tempStr2)
			{
				found++;
				MessageBox::Show("Welcome " + gcnew String(list_User[i].getUsername().c_str())
					, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Hide();
				MainForm^ MainForm_Form = gcnew MainForm(this);
				MainForm_Form->Show();
				_Username = list_User[i].getUsername();
				break;
			}
		}
		if (found == 0 && txt_Username->Text != "" && txt_Password->Text != "")
		{
			MessageBox::Show("Username or password is incorrect! Please try again", "Error"
				, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
