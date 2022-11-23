#pragma once
#include "Manage.h"
#include "Add_Form.h"
#include "View_Form.h"
#include "Search_Form.h"
#include "Update_Form.h"
#include "Delete_Form.h"
#include "Import_Form.h"
namespace PBL2 {

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
		
		Form^ Main_Form;
		MainForm(Form^ tmpForm)
		{
			Main_Form = tmpForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MainForm(void) {
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


	private: System::Windows::Forms::Button^ btn_Logout;

	private: System::Windows::Forms::Button^ btn_Export;

	private: System::Windows::Forms::Button^ btn_Import;



	private: System::Windows::Forms::Button^ btn_Search;

	private: System::Windows::Forms::Button^ btn_Delete;

	private: System::Windows::Forms::Button^ btn_Update;

	private: System::Windows::Forms::Button^ btn_Add;

	private: System::Windows::Forms::Button^ btn_View;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;




































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
			this->btn_Logout = (gcnew System::Windows::Forms::Button());
			this->btn_Export = (gcnew System::Windows::Forms::Button());
			this->btn_Import = (gcnew System::Windows::Forms::Button());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->btn_Delete = (gcnew System::Windows::Forms::Button());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->btn_View = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Logout
			// 
			this->btn_Logout->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Logout->Location = System::Drawing::Point(45, 513);
			this->btn_Logout->Name = L"btn_Logout";
			this->btn_Logout->Size = System::Drawing::Size(170, 57);
			this->btn_Logout->TabIndex = 0;
			this->btn_Logout->Text = L"Log out";
			this->btn_Logout->UseVisualStyleBackColor = true;
			this->btn_Logout->Click += gcnew System::EventHandler(this, &MainForm::btn_Logout_Click);
			// 
			// btn_Export
			// 
			this->btn_Export->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Export->Location = System::Drawing::Point(45, 450);
			this->btn_Export->Name = L"btn_Export";
			this->btn_Export->Size = System::Drawing::Size(170, 57);
			this->btn_Export->TabIndex = 0;
			this->btn_Export->Text = L"Export Goods";
			this->btn_Export->UseVisualStyleBackColor = true;
			// 
			// btn_Import
			// 
			this->btn_Import->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Import->Location = System::Drawing::Point(45, 387);
			this->btn_Import->Name = L"btn_Import";
			this->btn_Import->Size = System::Drawing::Size(170, 57);
			this->btn_Import->TabIndex = 0;
			this->btn_Import->Text = L"Import Goods";
			this->btn_Import->UseVisualStyleBackColor = true;
			this->btn_Import->Click += gcnew System::EventHandler(this, &MainForm::btn_Import_Click);
			// 
			// btn_Search
			// 
			this->btn_Search->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Search->Location = System::Drawing::Point(45, 324);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(170, 57);
			this->btn_Search->TabIndex = 0;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = true;
			this->btn_Search->Click += gcnew System::EventHandler(this, &MainForm::btn_Search_Click);
			// 
			// btn_Delete
			// 
			this->btn_Delete->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Delete->Location = System::Drawing::Point(45, 260);
			this->btn_Delete->Name = L"btn_Delete";
			this->btn_Delete->Size = System::Drawing::Size(170, 57);
			this->btn_Delete->TabIndex = 0;
			this->btn_Delete->Text = L"Delete";
			this->btn_Delete->UseVisualStyleBackColor = true;
			this->btn_Delete->Click += gcnew System::EventHandler(this, &MainForm::btn_Delete_Click);
			// 
			// btn_Update
			// 
			this->btn_Update->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Update->Location = System::Drawing::Point(45, 197);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(170, 57);
			this->btn_Update->TabIndex = 0;
			this->btn_Update->Text = L"Update ";
			this->btn_Update->UseVisualStyleBackColor = true;
			this->btn_Update->Click += gcnew System::EventHandler(this, &MainForm::btn_Update_Click);
			// 
			// btn_Add
			// 
			this->btn_Add->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Add->Location = System::Drawing::Point(45, 133);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(170, 57);
			this->btn_Add->TabIndex = 0;
			this->btn_Add->Text = L"Add New Product";
			this->btn_Add->UseVisualStyleBackColor = true;
			this->btn_Add->Click += gcnew System::EventHandler(this, &MainForm::btn_Add_Click);
			// 
			// btn_View
			// 
			this->btn_View->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_View->Location = System::Drawing::Point(45, 69);
			this->btn_View->Name = L"btn_View";
			this->btn_View->Size = System::Drawing::Size(170, 57);
			this->btn_View->TabIndex = 0;
			this->btn_View->Text = L"View Information";
			this->btn_View->UseVisualStyleBackColor = true;
			this->btn_View->Click += gcnew System::EventHandler(this, &MainForm::btn_View_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 41);
			this->label1->TabIndex = 1;
			this->label1->Text = L"All Feature";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PeachPuff;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btn_Logout);
			this->panel1->Controls->Add(this->btn_Export);
			this->panel1->Controls->Add(this->btn_Import);
			this->panel1->Controls->Add(this->btn_Search);
			this->panel1->Controls->Add(this->btn_Delete);
			this->panel1->Controls->Add(this->btn_Update);
			this->panel1->Controls->Add(this->btn_Add);
			this->panel1->Controls->Add(this->btn_View);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(266, 673);
			this->panel1->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 673);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Manage Application";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btn_View_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	View_Form^ tmpView_Form = gcnew View_Form(this);
	tmpView_Form->Show();
}
private: System::Void btn_Logout_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("You will log out!"
		, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Hide();
	Main_Form->Show();
}
private: System::Void btn_Add_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Add_Form^ tmpView_Form = gcnew Add_Form(this);
	tmpView_Form->Show();
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Load_Data_Of_Smartwatch();
	Load_Data_Of_Smartphone();
	Load_Data_Of_Laptop();
}
private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Search_Form^ tmpView_Form = gcnew Search_Form(this);
	tmpView_Form->Show();
}
private: System::Void btn_Update_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Update_Form^ tmpView_Form = gcnew Update_Form(this);
	tmpView_Form->Show();
}
private: System::Void btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Delete_Form^ tmpView_Form = gcnew Delete_Form(this);
	tmpView_Form->Show();
}
private: System::Void btn_Import_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Import_Form^ tmpView_Form = gcnew Import_Form(this);
	tmpView_Form->Show();
}
};
}
