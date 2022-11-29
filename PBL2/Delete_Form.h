#pragma once
#include "Manage.h"
#include <cctype>
#include <msclr\marshal_cppstd.h>
namespace PBL2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Delete_Form
	/// </summary>
	public ref class Delete_Form : public System::Windows::Forms::Form
	{
	public:
		   DataTable^ Smartphone_Device = gcnew DataTable();
		   DataTable^ Laptop_Device = gcnew DataTable();
		   DataTable^ Smartwatch_Device = gcnew DataTable();
	public:int indexDelete = 0;
	public:int CheckTypeDelete = 0;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	public:
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::PictureBox^ btn_Search;
	private: System::Windows::Forms::Label^ label_Infor;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	public:

		   Form^ Main_Form;
		Delete_Form(Form^ tmpForm)
		{
			Main_Form = tmpForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Delete_Form(void)
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
		~Delete_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ txt_Index_Delete;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_Back;
	private: System::Windows::Forms::Button^ btn_Delete;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Delete_Form::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_Search = (gcnew System::Windows::Forms::PictureBox());
			this->txt_Index_Delete = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Back = (gcnew System::Windows::Forms::Button());
			this->btn_Delete = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label_Infor = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Search))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1289, 100);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(455, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(439, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REMOVE PRODUCT";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->btn_Search);
			this->panel2->Controls->Add(this->txt_Index_Delete);
			this->panel2->Location = System::Drawing::Point(382, 147);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(553, 45);
			this->panel2->TabIndex = 1;
			// 
			// btn_Search
			// 
			this->btn_Search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Search.Image")));
			this->btn_Search->Location = System::Drawing::Point(506, -1);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(47, 46);
			this->btn_Search->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_Search->TabIndex = 6;
			this->btn_Search->TabStop = false;
			this->btn_Search->Click += gcnew System::EventHandler(this, &Delete_Form::btn_Search_Click);
			// 
			// txt_Index_Delete
			// 
			this->txt_Index_Delete->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_Index_Delete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Index_Delete->Location = System::Drawing::Point(8, 7);
			this->txt_Index_Delete->Name = L"txt_Index_Delete";
			this->txt_Index_Delete->Size = System::Drawing::Size(472, 27);
			this->txt_Index_Delete->TabIndex = 0;
			this->txt_Index_Delete->Text = L"Enter the ID of the product you want to remove";
			this->txt_Index_Delete->Click += gcnew System::EventHandler(this, &Delete_Form::txt_Index_Delete_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(19, 255);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1252, 300);
			this->dataGridView1->TabIndex = 2;
			// 
			// btn_Back
			// 
			this->btn_Back->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back->Location = System::Drawing::Point(1055, 582);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(158, 51);
			this->btn_Back->TabIndex = 3;
			this->btn_Back->Text = L"      Back";
			this->btn_Back->UseVisualStyleBackColor = false;
			this->btn_Back->Click += gcnew System::EventHandler(this, &Delete_Form::btn_Back_Click);
			// 
			// btn_Delete
			// 
			this->btn_Delete->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Delete->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.8F, System::Drawing::FontStyle::Bold));
			this->btn_Delete->Location = System::Drawing::Point(841, 582);
			this->btn_Delete->Name = L"btn_Delete";
			this->btn_Delete->Size = System::Drawing::Size(162, 51);
			this->btn_Delete->TabIndex = 3;
			this->btn_Delete->Text = L"      Remove";
			this->btn_Delete->UseVisualStyleBackColor = false;
			this->btn_Delete->Click += gcnew System::EventHandler(this, &Delete_Form::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(19, 255);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1252, 300);
			this->dataGridView2->TabIndex = 4;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(19, 255);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(1252, 285);
			this->dataGridView3->TabIndex = 5;
			// 
			// label_Infor
			// 
			this->label_Infor->AutoSize = true;
			this->label_Infor->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Infor->Location = System::Drawing::Point(35, 229);
			this->label_Infor->Name = L"label_Infor";
			this->label_Infor->Size = System::Drawing::Size(0, 23);
			this->label_Infor->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1066, 589);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(41, 39);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Delete_Form::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(851, 590);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(42, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Delete_Form::pictureBox2_Click);
			// 
			// Delete_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1289, 673);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label_Infor);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btn_Delete);
			this->Controls->Add(this->btn_Back);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Delete_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Delete_Form";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Search))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:void CreateNewRow_LT(int IndexCounterLT)
	{
		string tmpPriceF = to_string(listLT[IndexCounterLT].getPriceF());
		string tmpPriceE = to_string(listLT[IndexCounterLT].getPriceE());
		string tmpAmount = to_string(listLT[IndexCounterLT].getAmount());
		string tmpSales = to_string(listLT[IndexCounterLT].getSales());
		string tmpRevenue = to_string(listLT[IndexCounterLT].getRevenue());
		if (Laptop_Device->Rows->Count <= 0) {
			Laptop_Device->Columns->Add("ID");
			Laptop_Device->Columns->Add("Name");
			Laptop_Device->Columns->Add("Brand");
			Laptop_Device->Columns->Add("Cost");
			Laptop_Device->Columns->Add("Price");
			Laptop_Device->Columns->Add("Quantity in stock");
			Laptop_Device->Columns->Add("Sales");
			Laptop_Device->Columns->Add("Revenue");
			Laptop_Device->Columns->Add("Status");
			Laptop_Device->Columns->Add("Input day");
			Laptop_Device->Columns->Add("Graphics card");
			Laptop_Device->Columns->Add("Weight");

			Laptop_Device->Rows->Add(gcnew String(listLT[IndexCounterLT].getID().c_str()), gcnew String(listLT[IndexCounterLT].getName().c_str()), gcnew String(listLT[IndexCounterLT].getBrand().c_str())
				, gcnew String(tmpPriceF.c_str()), gcnew String(tmpPriceE.c_str()), gcnew String(tmpAmount.c_str()), gcnew String(tmpSales.c_str())
				, gcnew String(tmpRevenue.c_str()), gcnew String(listLT[IndexCounterLT].getStatus().c_str()), gcnew String(listLT[IndexCounterLT].getInputDatetmp().c_str()), gcnew String(listLT[IndexCounterLT].getCard().c_str()), gcnew String(listLT[IndexCounterLT].getWeight().c_str()));
			IndexCounterLT++;
			dataGridView2->DataSource = Laptop_Device;
		}
		else {
			if (listLT[IndexCounterLT].getID() != "\0") {
				Laptop_Device->Rows->Add(gcnew String(listLT[IndexCounterLT].getID().c_str()), gcnew String(listLT[IndexCounterLT].getName().c_str()), gcnew String(listLT[IndexCounterLT].getBrand().c_str())
					, gcnew String(tmpPriceF.c_str()), gcnew String(tmpPriceE.c_str()), gcnew String(tmpAmount.c_str()), gcnew String(tmpSales.c_str())
					, gcnew String(tmpRevenue.c_str()), gcnew String(listLT[IndexCounterLT].getStatus().c_str()), gcnew String(listLT[IndexCounterLT].getInputDatetmp().c_str()), gcnew String(listLT[IndexCounterLT].getCard().c_str()), gcnew String(listLT[IndexCounterLT].getWeight().c_str()));
				dataGridView2->DataSource = Laptop_Device;
				IndexCounterLT++;
			}
		}
	}
	public:void CreateNewRow_SP(int IndexCounterSP)
	{
		string tmpPriceF = to_string(listSP[IndexCounterSP].getPriceF());
		string tmpPriceE = to_string(listSP[IndexCounterSP].getPriceE());
		string tmpAmount = to_string(listSP[IndexCounterSP].getAmount());
		string tmpSales = to_string(listSP[IndexCounterSP].getSales());
		string tmpRevenue = to_string(listSP[IndexCounterSP].getRevenue());
		if (Smartphone_Device->Rows->Count <= 0) {
			Smartphone_Device->Columns->Add("ID");
			Smartphone_Device->Columns->Add("Name");
			Smartphone_Device->Columns->Add("Brand");
			Smartphone_Device->Columns->Add("Cost");
			Smartphone_Device->Columns->Add("Price");
			Smartphone_Device->Columns->Add("Quantity in stock");
			Smartphone_Device->Columns->Add("Sales");
			Smartphone_Device->Columns->Add("Revenue");
			Smartphone_Device->Columns->Add("Status");
			Smartphone_Device->Columns->Add("Input day");
			Smartphone_Device->Columns->Add("RAM");
			Smartphone_Device->Columns->Add("ROM");

			Smartphone_Device->Rows->Add(gcnew String(listSP[IndexCounterSP].getID().c_str()), gcnew String(listSP[IndexCounterSP].getName().c_str()), gcnew String(listSP[IndexCounterSP].getBrand().c_str())
				, gcnew String(tmpPriceF.c_str()), gcnew String(tmpPriceE.c_str()), gcnew String(tmpAmount.c_str()), gcnew String(tmpSales.c_str())
				, gcnew String(tmpRevenue.c_str()), gcnew String(listSP[IndexCounterSP].getStatus().c_str()), gcnew String(listSP[IndexCounterSP].getInputDatetmp().c_str()), gcnew String(listSP[IndexCounterSP].getRam().c_str()), gcnew String(listSP[IndexCounterSP].getRom().c_str()));
			IndexCounterSP++;
			dataGridView1->DataSource = Smartphone_Device;
		}
		else {
			if (listSP[IndexCounterSP].getID() != "\0") {
				Smartphone_Device->Rows->Add(gcnew String(listSP[IndexCounterSP].getID().c_str()), gcnew String(listSP[IndexCounterSP].getName().c_str()), gcnew String(listSP[IndexCounterSP].getBrand().c_str())
					, gcnew String(tmpPriceF.c_str()), gcnew String(tmpPriceE.c_str()), gcnew String(tmpAmount.c_str()), gcnew String(tmpSales.c_str())
					, gcnew String(tmpRevenue.c_str()), gcnew String(listSP[IndexCounterSP].getStatus().c_str()), gcnew String(listSP[IndexCounterSP].getInputDatetmp().c_str()), gcnew String(listSP[IndexCounterSP].getRam().c_str()), gcnew String(listSP[IndexCounterSP].getRom().c_str()));
				dataGridView1->DataSource = Smartphone_Device;
				IndexCounterSP++;
			}
		}

	}
	public:void CreateNewRow_SW(int IndexCounterSW)
	{
		string tmpPriceF = to_string(listSW[IndexCounterSW].getPriceF());
		string tmpPriceE = to_string(listSW[IndexCounterSW].getPriceE());
		string tmpAmount = to_string(listSW[IndexCounterSW].getAmount());
		string tmpSales = to_string(listSW[IndexCounterSW].getSales());
		string tmpRevenue = to_string(listSW[IndexCounterSW].getRevenue());
		if (Smartwatch_Device->Rows->Count <= 0) {
			Smartwatch_Device->Columns->Add("ID");
			Smartwatch_Device->Columns->Add("Name");
			Smartwatch_Device->Columns->Add("Brand");
			Smartwatch_Device->Columns->Add("Cost");
			Smartwatch_Device->Columns->Add("Price");
			Smartwatch_Device->Columns->Add("Quantity in stock");
			Smartwatch_Device->Columns->Add("Sales");
			Smartwatch_Device->Columns->Add("Revenue");
			Smartwatch_Device->Columns->Add("Status");
			Smartwatch_Device->Columns->Add("Input day");
			Smartwatch_Device->Columns->Add("Battery life");
			Smartwatch_Device->Columns->Add("Size");

			Smartwatch_Device->Rows->Add(gcnew String(listSW[IndexCounterSW].getID().c_str()), gcnew String(listSW[IndexCounterSW].getName().c_str()), gcnew String(listSW[IndexCounterSW].getBrand().c_str())
				, gcnew String(tmpPriceF.c_str()), gcnew String(tmpPriceE.c_str()), gcnew String(tmpAmount.c_str()), gcnew String(tmpSales.c_str())
				, gcnew String(tmpRevenue.c_str()), gcnew String(listSW[IndexCounterSW].getStatus().c_str()), gcnew String(listSW[IndexCounterSW].getInputDatetmp().c_str()), gcnew String(listSW[IndexCounterSW].getBatteryTime().c_str()), gcnew String(listSW[IndexCounterSW].getSize().c_str()));
			IndexCounterSW++;
			dataGridView3->DataSource = Smartwatch_Device;
		}
		else {
			if (listSW[IndexCounterSW].getID() != "\0") {
				Smartwatch_Device->Rows->Add(gcnew String(listSW[IndexCounterSW].getID().c_str()), gcnew String(listSW[IndexCounterSW].getName().c_str()), gcnew String(listSW[IndexCounterSW].getBrand().c_str())
					, gcnew String(tmpPriceF.c_str()), gcnew String(tmpPriceE.c_str()), gcnew String(tmpAmount.c_str()), gcnew String(tmpSales.c_str())
					, gcnew String(tmpRevenue.c_str()), gcnew String(listSW[IndexCounterSW].getStatus().c_str()), gcnew String(listSW[IndexCounterSW].getInputDatetmp().c_str()), gcnew String(listSW[IndexCounterSW].getBatteryTime().c_str()), gcnew String(listSW[IndexCounterSW].getSize().c_str()));
				dataGridView3->DataSource = Smartwatch_Device;
				IndexCounterSW++;
			}
		}

	}
	private: System::Void btn_Back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Main_Form->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Are you sure you will delete the product with ID " + txt_Index_Delete->Text, "Error"
		, MessageBoxButtons::YesNo, MessageBoxIcon::Error);
	std::string index = marshal_as<std::string>(txt_Index_Delete->Text);
	if (indexDelete == 0) {
		MessageBox::Show("No product with ID is " + txt_Index_Delete->Text, "Error"
			, MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (CheckTypeDelete == 1)
		{
			listSP.Remove(indexDelete);
			Save_Data_SmartPhone();
		}
		else if (CheckTypeDelete == 2) {
			listLT.Remove(indexDelete);
			Save_Data_Laptop();
		}
		else if (CheckTypeDelete == 3) {
			listSW.Remove(indexDelete);
			Save_Data_SmartWatch();
		}
		MessageBox::Show("Remove Successfully", "Success", MessageBoxButtons::OK
			, MessageBoxIcon::Information);
	}
}
private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
	label_Infor->Text = "Here is the information of the product you are looking for...";
	std::string index = marshal_as<std::string>(txt_Index_Delete->Text);
	int check = 0;
	while (true) {
		for (int i = 0; i < NumOfDV("db_laptop.csv"); i++) {
			if (listLT[i].getID() == index) {
				indexDelete = i;
				dataGridView2->Show();
				dataGridView1->Hide();
				dataGridView3->Hide();
				CreateNewRow_LT(i);
				check = 1;
				CheckTypeDelete = 2;
				break;
			}
		}
		if (check == 1) {
			break;
		}
		for (int i = 0; i < NumOfDV("db_smartwatch.csv"); i++) {
			if (listSW[i].getID() == index) {
				indexDelete = i;
				dataGridView3->Show();
				dataGridView1->Hide();
				dataGridView2->Hide();
				CreateNewRow_SW(i);
				check = 1;
				CheckTypeDelete = 3;
				break;
			}
		}
		if (check == 1) {
			break;
		}
		for (int i = 0; i < NumOfDV("db_smartphone.csv"); i++) {
			if (listSP[i].getID() == index) {
				indexDelete = i;
				dataGridView1->Show();
				dataGridView2->Hide();
				dataGridView3->Hide();
				CreateNewRow_SP(i);
				CheckTypeDelete = 1;
				check = 1;
				break;
			}
		}
		if (check == 1) {
			break;
		}
		if (check == 0)
		{
			MessageBox::Show("No product with ID is " + txt_Index_Delete->Text, "Error"
				, MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
	}
}
private: System::Void txt_Index_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_Index_Delete->Text == "Enter the ID of the product you want to remove") {
		txt_Index_Delete->Text = "";
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	button1_Click(sender, e);
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	btn_Back_Click(sender, e);
}
};
}