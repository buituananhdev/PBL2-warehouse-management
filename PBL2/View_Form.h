#pragma once
#include "Manage.h"
#include <windows.h>
#define Excel  Microsoft::Office::Interop::Excel
namespace PBL2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for View_Form
	/// </summary>
	public ref class View_Form : public System::Windows::Forms::Form
	{
	public:
		
		View_Form(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DataTable^ Smartphone_Device = gcnew DataTable();
		DataTable^ Laptop_Device = gcnew DataTable();
		DataTable^ Smartwatch_Device = gcnew DataTable();
	public:int IndexCounterLT = 0;
	public:int IndexCounterSP = 0;
	public:int IndexCounterSW = 0;
private: System::Windows::Forms::DataGridView^ dataGridView2;
public:
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::Button^ btn_ExportToExcel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;







public:



	public:
		Form^ Main_Form;
		  View_Form(Form^ tmpForm)
		  {
			  Main_Form = tmpForm;
			  InitializeComponent();
			  /*if (turn)
			  {
				  Load_Data_Of_Device("db_laptop.csv");

			  }
			  for (int i = 0; i < 100; i++)
			  {
					  CreateNewRow();
			  } */

			  //
			  //TODO: Add the constructor code here
			  //
		  }
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~View_Form()
		{
			if (components)
			{
				delete components;
			}
		}

private: System::Windows::Forms::DataGridView^ dataGridView1;

	protected:

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btn_Show_SmartWatch;
	private: System::Windows::Forms::Button^ btn_Show_Laptop;
	private: System::Windows::Forms::Button^ btn_Show_Smartphone;
	private: System::Windows::Forms::Button^ btn_Back;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(View_Form::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Show_SmartWatch = (gcnew System::Windows::Forms::Button());
			this->btn_Show_Laptop = (gcnew System::Windows::Forms::Button());
			this->btn_Show_Smartphone = (gcnew System::Windows::Forms::Button());
			this->btn_Back = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_ExportToExcel = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(25, 258);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1252, 330);
			this->dataGridView1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->btn_Show_SmartWatch);
			this->groupBox1->Controls->Add(this->btn_Show_Laptop);
			this->groupBox1->Controls->Add(this->btn_Show_Smartphone);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(244, 121);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(908, 114);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select the type of product you want to see information about";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(367, 43);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(39, 37);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &View_Form::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(677, 42);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(44, 39);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &View_Form::pictureBox3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(56, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(39, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &View_Form::pictureBox1_Click);
			// 
			// btn_Show_SmartWatch
			// 
			this->btn_Show_SmartWatch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btn_Show_SmartWatch->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Show_SmartWatch->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Show_SmartWatch->Location = System::Drawing::Point(670, 37);
			this->btn_Show_SmartWatch->Name = L"btn_Show_SmartWatch";
			this->btn_Show_SmartWatch->Size = System::Drawing::Size(205, 49);
			this->btn_Show_SmartWatch->TabIndex = 0;
			this->btn_Show_SmartWatch->Text = L"        Smart Watch";
			this->btn_Show_SmartWatch->UseVisualStyleBackColor = false;
			this->btn_Show_SmartWatch->Click += gcnew System::EventHandler(this, &View_Form::btn_Show_SmartWatch_Click);
			// 
			// btn_Show_Laptop
			// 
			this->btn_Show_Laptop->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btn_Show_Laptop->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Show_Laptop->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Show_Laptop->Location = System::Drawing::Point(357, 37);
			this->btn_Show_Laptop->Name = L"btn_Show_Laptop";
			this->btn_Show_Laptop->Size = System::Drawing::Size(205, 49);
			this->btn_Show_Laptop->TabIndex = 0;
			this->btn_Show_Laptop->Text = L"       Laptop";
			this->btn_Show_Laptop->UseVisualStyleBackColor = false;
			this->btn_Show_Laptop->Click += gcnew System::EventHandler(this, &View_Form::btn_Show_Laptop_Click);
			// 
			// btn_Show_Smartphone
			// 
			this->btn_Show_Smartphone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btn_Show_Smartphone->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Show_Smartphone->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Show_Smartphone->Location = System::Drawing::Point(47, 37);
			this->btn_Show_Smartphone->Name = L"btn_Show_Smartphone";
			this->btn_Show_Smartphone->Size = System::Drawing::Size(205, 49);
			this->btn_Show_Smartphone->TabIndex = 0;
			this->btn_Show_Smartphone->Text = L"       Smart Phone";
			this->btn_Show_Smartphone->UseVisualStyleBackColor = false;
			this->btn_Show_Smartphone->Click += gcnew System::EventHandler(this, &View_Form::btn_Show_Smartphone_Click);
			// 
			// btn_Back
			// 
			this->btn_Back->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_Back->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back->Location = System::Drawing::Point(940, 615);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(164, 46);
			this->btn_Back->TabIndex = 3;
			this->btn_Back->Text = L"       Back";
			this->btn_Back->UseVisualStyleBackColor = false;
			this->btn_Back->Click += gcnew System::EventHandler(this, &View_Form::btn_Back_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(25, 258);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1252, 330);
			this->dataGridView2->TabIndex = 4;
			// 
			// dataGridView3
			// 
			this->dataGridView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView3->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(25, 258);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(1252, 330);
			this->dataGridView3->TabIndex = 5;
			// 
			// btn_ExportToExcel
			// 
			this->btn_ExportToExcel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_ExportToExcel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_ExportToExcel->Location = System::Drawing::Point(328, 624);
			this->btn_ExportToExcel->Name = L"btn_ExportToExcel";
			this->btn_ExportToExcel->Size = System::Drawing::Size(224, 37);
			this->btn_ExportToExcel->TabIndex = 6;
			this->btn_ExportToExcel->Text = L"Import To File";
			this->btn_ExportToExcel->UseVisualStyleBackColor = true;
			this->btn_ExportToExcel->Click += gcnew System::EventHandler(this, &View_Form::btn_ExportToExcel_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1299, 100);
			this->panel1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(383, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(705, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"VIEW INFORMATION PRODUCT";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(949, 619);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 39);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &View_Form::pictureBox4_Click);
			// 
			// View_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1299, 673);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->btn_ExportToExcel);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btn_Back);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"View_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"View_Form";
			this->Load += gcnew System::EventHandler(this, &View_Form::View_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:void CreateNewRow_LT()
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
	public:void CreateNewRow_SP()
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
	public:void CreateNewRow_SW()
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
	private: System::Void btn_Show_Laptop_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView2->Show();
		dataGridView1->Hide();
		dataGridView3->Hide();
		for (int i = 0; i < 100; i++)
		{
			CreateNewRow_LT();
			
		}
	}
	private: System::Void btn_Show_Smartphone_Click(System::Object^ sender, System::EventArgs^ e) {		
		dataGridView1->Show();
		dataGridView2->Hide();
		dataGridView3->Hide();
		for (int i = 0; i < 100; i++)
		{
			CreateNewRow_SP();
		}
	}
private: System::Void btn_Show_SmartWatch_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView3->Show();
		dataGridView1->Hide();
		dataGridView2->Hide();
		for (int i = 0; i < 100; i++)
		{
			CreateNewRow_SW();
		}
}
	private: System::Void btn_ExportToExcel_Click(System::Object^ sender, System::EventArgs^ e) {
		/* Excel::Application^ excel = gcnew Excel::ApplicationClass();
		Excel::Workbook^ workbook = gcnew Excel::WorkbookClass();
		Excel::Workbook^ worksheet = gcnew Excel::WorkbookClass();
		workbook = excel->Workbooks->Add(Type::Missing);
		excel->Visible = false;
		excel->DisplayAlerts = false;
		Excel::Application^ app = gcnew Excel::ApplicationClass();
		app->Visible = false;
		//tạo mới một Workbooks bằng phương thức add()
		Excel::Workbook^ workbook = app->Workbooks->Add(System::Type::Missing);

		Excel::Worksheet^ worksheet = safe_cast<Excel::Worksheet^>(app->ActiveSheet);
		worksheet->Name = "Test";
		//worksheet = (Excel::Worksheet); workbook->Sheets["Sheet1"];
		for (int i = 0; i < dataGridView1->ColumnCount; i++)
		{
			worksheet->Cells[1, i + 1] = dataGridView1->Columns[i]->HeaderText;
		}
		// export nội dung trong DataGridView
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++)
			{
				worksheet->Cells[i + 2, j + 1] = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
			}
		}
		// sử dụng phương thức SaveAs() để lưu workbook với filename
		workbook->SaveAs(System::Environment::CurrentDirectory + "Test/Test.xlsx",
			System::Type::Missing, System::Type::Missing, System::Type::Missing,
			false, false,
			Excel::XlSaveAsAccessMode::xlShared,
			false, false,
			System::Type::Missing, System::Type::Missing, System::Type::Missing
		);
		//đóng workbook
		workbook->Close(false, System::Type::Missing, System::Type::Missing);
		System::Runtime::InteropServices::Marshal::ReleaseComObject(workbook);

		app->Quit();

		System::Runtime::InteropServices::Marshal::ReleaseComObject(app);
		MessageBox::Show("Export to file successfully", "Success", MessageBoxButtons::OK
			, MessageBoxIcon::Information);
		}*/
		//Copy the file to a new folder and rename it.

		//CopyFile("D:/WorkSpace/PBL2_GUI/PBL2/PBL2/db_laptop.csv", "D:D:/WorkSpace/PBL2_GUI/PBL2/PBL2Test/Test.csv", true)
		
	}
private: System::Void View_Form_Load(System::Object^ sender, System::EventArgs^ e) {
	Load_Data_Of_Smartwatch();
	Load_Data_Of_Smartphone();
	Load_Data_Of_Laptop();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	btn_Show_Smartphone_Click(sender, e);
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	btn_Show_Laptop_Click(sender, e);
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	btn_Show_SmartWatch_Click(sender, e);
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	btn_Back_Click(sender, e);
}
};
}