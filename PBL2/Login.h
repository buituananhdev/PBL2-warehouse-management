#pragma once
//#include "User.h"
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
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	public:
		Form^ Login_Form;
		Login(Form^ tmpForm)
		{
			Login_Form = tmpForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
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



	private: System::Windows::Forms::TextBox^ txt_Password;

	private: System::Windows::Forms::TextBox^ txt_Username;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

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
			this->txt_Password = (gcnew System::Windows::Forms::TextBox());
			this->txt_Username = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Login
			// 
			this->btn_Login->BackColor = System::Drawing::Color::PeachPuff;
			this->btn_Login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_Login->Location = System::Drawing::Point(519, 515);
			this->btn_Login->Name = L"btn_Login";
			this->btn_Login->Size = System::Drawing::Size(185, 47);
			this->btn_Login->TabIndex = 0;
			this->btn_Login->Text = L"LogIn";
			this->btn_Login->UseVisualStyleBackColor = false;
			this->btn_Login->Click += gcnew System::EventHandler(this, &Login::btn_Login_Click);
			// 
			// txt_Password
			// 
			this->txt_Password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_Password->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Password->Location = System::Drawing::Point(12, 14);
			this->txt_Password->Name = L"txt_Password";
			this->txt_Password->Size = System::Drawing::Size(321, 31);
			this->txt_Password->TabIndex = 1;
			this->txt_Password->Text = L"PassWord";
			this->txt_Password->UseSystemPasswordChar = true;
			this->txt_Password->Click += gcnew System::EventHandler(this, &Login::txt_Password_Click);
			// 
			// txt_Username
			// 
			this->txt_Username->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_Username->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Username->Location = System::Drawing::Point(11, 14);
			this->txt_Username->Name = L"txt_Username";
			this->txt_Username->Size = System::Drawing::Size(321, 31);
			this->txt_Username->TabIndex = 1;
			this->txt_Username->Text = L"Your Name";
			this->txt_Username->Click += gcnew System::EventHandler(this, &Login::txt_Username_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->txt_Username);
			this->panel1->Location = System::Drawing::Point(450, 307);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(346, 62);
			this->panel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->txt_Password);
			this->panel2->Location = System::Drawing::Point(450, 419);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(346, 62);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::PeachPuff;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1186, 63);
			this->panel3->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(711, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STORE MANAGEMENT APPLICATION OF TECHNOLOGY PRODUCTS";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1186, 673);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_Login);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_Login_Click(System::Object^ sender, System::EventArgs^ e) {
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
				MessageBox::Show("Login as " + gcnew String(list_User[i].getUsername().c_str())
					, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Hide();
				MainForm^ MainForm_Form = gcnew MainForm(this);
				MainForm_Form->Show();
				txt_Username->Text = "Your Name";
				txt_Password->Text = "PassWord";
				//_Username = list_User[i].getUsername();
				break;
			}
		}
		if (found == 0 && txt_Username->Text != "" && txt_Password->Text != "")
		{
			MessageBox::Show("Username or password is incorrect! Please try again", "Error"
				, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void txt_Username_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_Username->Text == "Your Name") {
			txt_Username->Text = "";
		}
	}
	private: System::Void txt_Password_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_Password->Text == "PassWord") {
			txt_Password->Text = "";
		}
	}
	};
}
