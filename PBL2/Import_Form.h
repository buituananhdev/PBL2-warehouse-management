#pragma once
#include "Manage.h"
#include "Invoice_Form.h"
#include<msclr\marshal_cppstd.h>>
namespace PBL2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Import_Form
	/// </summary>
	public ref class Import_Form : public System::Windows::Forms::Form
	{
	public:
		Form^ Main_Form;
		Import_Form(Form^ tmpForm)
		{
			Main_Form = tmpForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Import_Form(void)
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
		~Import_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ btn_Search;
	private: System::Windows::Forms::TextBox^ txt_Search;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_Select;
	private: System::Windows::Forms::Button^ btn_UnSelect;


	private: System::Windows::Forms::Button^ btn_Create;












	private: System::Windows::Forms::Button^ btn_Refesh;
	private: System::Windows::Forms::Panel^ panel_Invoice;
	private: System::Windows::Forms::Button^ btn_Back;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ btn_Confirm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_UnitPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_Amount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_Total;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Import_Form::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_Search = (gcnew System::Windows::Forms::PictureBox());
			this->txt_Search = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_Select = (gcnew System::Windows::Forms::Button());
			this->btn_UnSelect = (gcnew System::Windows::Forms::Button());
			this->btn_Create = (gcnew System::Windows::Forms::Button());
			this->btn_Refesh = (gcnew System::Windows::Forms::Button());
			this->panel_Invoice = (gcnew System::Windows::Forms::Panel());
			this->btn_Back = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Confirm = (gcnew System::Windows::Forms::Button());
			this->col_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_UnitPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_Amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Search))->BeginInit();
			this->panel_Invoice->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PeachPuff;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1186, 87);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(395, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(379, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"IMPORT GOODS";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(63, 192);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(357, 441);
			this->listBox1->TabIndex = 1;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 23;
			this->listBox2->Location = System::Drawing::Point(762, 192);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(357, 441);
			this->listBox2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.8F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ID", L"Name", L"Price" });
			this->comboBox1->Location = System::Drawing::Point(183, 115);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(154, 36);
			this->comboBox1->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->btn_Search);
			this->panel2->Controls->Add(this->txt_Search);
			this->panel2->Location = System::Drawing::Point(360, 113);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(551, 36);
			this->panel2->TabIndex = 8;
			// 
			// btn_Search
			// 
			this->btn_Search->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->btn_Search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Search.Image")));
			this->btn_Search->Location = System::Drawing::Point(507, -1);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(44, 38);
			this->btn_Search->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_Search->TabIndex = 3;
			this->btn_Search->TabStop = false;
			// 
			// txt_Search
			// 
			this->txt_Search->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_Search->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.8F));
			this->txt_Search->Location = System::Drawing::Point(13, 4);
			this->txt_Search->Name = L"txt_Search";
			this->txt_Search->Size = System::Drawing::Size(479, 27);
			this->txt_Search->TabIndex = 1;
			this->txt_Search->Text = L"What are you looking for...";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(59, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 23);
			this->label2->TabIndex = 10;
			this->label2->Text = L"List of products";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(758, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 23);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Selected list";
			// 
			// btn_Select
			// 
			this->btn_Select->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Select->Location = System::Drawing::Point(515, 227);
			this->btn_Select->Name = L"btn_Select";
			this->btn_Select->Size = System::Drawing::Size(162, 35);
			this->btn_Select->TabIndex = 11;
			this->btn_Select->Text = L">>>>>";
			this->btn_Select->UseVisualStyleBackColor = true;
			this->btn_Select->Click += gcnew System::EventHandler(this, &Import_Form::btn_Select_Click);
			// 
			// btn_UnSelect
			// 
			this->btn_UnSelect->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_UnSelect->Location = System::Drawing::Point(515, 290);
			this->btn_UnSelect->Name = L"btn_UnSelect";
			this->btn_UnSelect->Size = System::Drawing::Size(162, 35);
			this->btn_UnSelect->TabIndex = 11;
			this->btn_UnSelect->Text = L"<<<<<";
			this->btn_UnSelect->UseVisualStyleBackColor = true;
			this->btn_UnSelect->Click += gcnew System::EventHandler(this, &Import_Form::btn_UnSelect_Click);
			// 
			// btn_Create
			// 
			this->btn_Create->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Create->Location = System::Drawing::Point(540, 435);
			this->btn_Create->Name = L"btn_Create";
			this->btn_Create->Size = System::Drawing::Size(111, 44);
			this->btn_Create->TabIndex = 13;
			this->btn_Create->Text = L"Create";
			this->btn_Create->UseVisualStyleBackColor = true;
			this->btn_Create->Click += gcnew System::EventHandler(this, &Import_Form::btn_Create_Click);
			// 
			// btn_Refesh
			// 
			this->btn_Refesh->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Refesh->Location = System::Drawing::Point(540, 362);
			this->btn_Refesh->Name = L"btn_Refesh";
			this->btn_Refesh->Size = System::Drawing::Size(112, 43);
			this->btn_Refesh->TabIndex = 15;
			this->btn_Refesh->Text = L"Refesh";
			this->btn_Refesh->UseVisualStyleBackColor = true;
			this->btn_Refesh->Click += gcnew System::EventHandler(this, &Import_Form::btn_Refesh_Click);
			// 
			// panel_Invoice
			// 
			this->panel_Invoice->BackColor = System::Drawing::Color::White;
			this->panel_Invoice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Invoice->Controls->Add(this->btn_Back);
			this->panel_Invoice->Controls->Add(this->groupBox1);
			this->panel_Invoice->Controls->Add(this->btn_Confirm);
			this->panel_Invoice->Location = System::Drawing::Point(0, 87);
			this->panel_Invoice->Name = L"panel_Invoice";
			this->panel_Invoice->Size = System::Drawing::Size(1186, 585);
			this->panel_Invoice->TabIndex = 16;
			// 
			// btn_Back
			// 
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back->Location = System::Drawing::Point(886, 499);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(139, 46);
			this->btn_Back->TabIndex = 14;
			this->btn_Back->Text = L"Back";
			this->btn_Back->UseVisualStyleBackColor = true;
			this->btn_Back->Click += gcnew System::EventHandler(this, &Import_Form::btn_Back_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(42, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1089, 448);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Invoice Information";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(171, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 30);
			this->textBox2->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 28);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Ngày lập";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(171, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 30);
			this->textBox1->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 28);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Mã hóa đơn";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->col_Name,
					this->col_UnitPrice, this->col_Amount, this->col_Total
			});
			this->dataGridView1->Location = System::Drawing::Point(51, 151);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(988, 265);
			this->dataGridView1->TabIndex = 12;
			// 
			// btn_Confirm
			// 
			this->btn_Confirm->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Confirm->Location = System::Drawing::Point(682, 499);
			this->btn_Confirm->Name = L"btn_Confirm";
			this->btn_Confirm->Size = System::Drawing::Size(139, 46);
			this->btn_Confirm->TabIndex = 14;
			this->btn_Confirm->Text = L"Confirm";
			this->btn_Confirm->UseVisualStyleBackColor = true;
			// 
			// col_Name
			// 
			this->col_Name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->col_Name->DataPropertyName = L"Name";
			this->col_Name->HeaderText = L"Name";
			this->col_Name->MinimumWidth = 6;
			this->col_Name->Name = L"col_Name";
			this->col_Name->ReadOnly = true;
			// 
			// col_UnitPrice
			// 
			this->col_UnitPrice->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->Format = L"N0";
			dataGridViewCellStyle1->NullValue = L"0";
			this->col_UnitPrice->DefaultCellStyle = dataGridViewCellStyle1;
			this->col_UnitPrice->HeaderText = L"Unit Price";
			this->col_UnitPrice->MinimumWidth = 6;
			this->col_UnitPrice->Name = L"col_UnitPrice";
			this->col_UnitPrice->ReadOnly = true;
			// 
			// col_Amount
			// 
			this->col_Amount->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->NullValue = nullptr;
			this->col_Amount->DefaultCellStyle = dataGridViewCellStyle2;
			this->col_Amount->HeaderText = L"Amount";
			this->col_Amount->MinimumWidth = 6;
			this->col_Amount->Name = L"col_Amount";
			// 
			// col_Total
			// 
			this->col_Total->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->Format = L"N0";
			dataGridViewCellStyle3->NullValue = L"0";
			this->col_Total->DefaultCellStyle = dataGridViewCellStyle3;
			this->col_Total->HeaderText = L"Total";
			this->col_Total->MinimumWidth = 6;
			this->col_Total->Name = L"col_Total";
			this->col_Total->ReadOnly = true;
			// 
			// Import_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 673);
			this->Controls->Add(this->panel_Invoice);
			this->Controls->Add(this->btn_Refesh);
			this->Controls->Add(this->btn_Create);
			this->Controls->Add(this->btn_UnSelect);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->btn_Select);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Import_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Import_Form";
			this->Load += gcnew System::EventHandler(this, &Import_Form::Import_Form_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Search))->EndInit();
			this->panel_Invoice->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Import_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		panel_Invoice->Hide();
		int count = NumOfDV("db_laptop.csv") + NumOfDV("db_smartphone.csv") + NumOfDV("db_smartwatch.csv");
		for (int i = 0; i < count; i++) {
			listBox1->Items->Add(gcnew String(listSP[i].getName().c_str()));
			listBox1->Items->Add(gcnew String(listLT[i].getName().c_str()));
			listBox1->Items->Add(gcnew String(listSW[i].getName().c_str()));
		}
	}
private: System::Void btn_Select_Click(System::Object^ sender, System::EventArgs^ e) {
	while (listBox1->SelectedItems->Count > 0) {
		listBox2->Items->Add(listBox1->SelectedItem);
		listBox1->Items->Remove(listBox1->SelectedItem);
	}
}
private: System::Void btn_UnSelect_Click(System::Object^ sender, System::EventArgs^ e) {
	while (listBox2->SelectedItems->Count > 0) {
		listBox1->Items->Add(listBox2->SelectedItem);
		listBox2->Items->Remove(listBox2->SelectedItem);
	}
}
private: System::Void btn_Create_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_Invoice->Show();
	dataGridView1->Rows->Clear();
	int i;
	for (i = 0; i < listBox2->Items->Count; i++) {
		std::string index = marshal_as<std::string>(listBox2->Items[i]->ToString());
		for (int j = 0; j < NumOfDV("db_laptop.csv"); j++) {
			if (index == listLT[j].getName()) {
				dataGridView1->Rows->Add(listBox2->Items[i], listLT[j].getPriceF());
			}
			}
		}
	for (i = 0; i < listBox2->Items->Count; i++) {
		std::string index = marshal_as<std::string>(listBox2->Items[i]->ToString());
		for (int j = 0; j < NumOfDV("db_smartphone.csv"); j++) {
			if (index == listSP[j].getName()) {
				dataGridView1->Rows->Add(listBox2->Items[i], listSP[j].getPriceF());
			}
		}
	}
	for (i = 0; i < listBox2->Items->Count; i++) {
		std::string index = marshal_as<std::string>(listBox2->Items[i]->ToString());
		for (int j = 0; j < NumOfDV("db_smartwatch.csv"); j++) {
			if (index == listSW[j].getName()) {
				dataGridView1->Rows->Add(listBox2->Items[i], listSW[j].getPriceF());
			}
		}
	}
}
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int i = 1;
	dataGridView1->Rows[i]->Cells["Total"]->Value = (System::Convert::ToDouble(dataGridView1->Rows[i]->Cells["Unit Price"]->Value) * System::Convert::ToDouble(dataGridView1->Rows[i]->Cells["Amount"]->Value)).ToString();;
	//int i = dataGridView1->CurrentRow->Index;
	//if (dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[2]->Value != "0") {
		//string index = "a";
		
	//}
	//dataGridView1->Rows[i]->Cells[4]->Value = (System::Convert::ToDouble(dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[2]->Value) * System::Convert::ToDouble(dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells[4]->Value)).ToString();
}
private: System::Void btn_Refesh_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox2->Items->Clear();
	listBox1->Items->Clear();
	int count = NumOfDV("db_laptop.csv") + NumOfDV("db_smartphone.csv") + NumOfDV("db_smartwatch.csv");
	for (int i = 0; i < count; i++) {
		listBox1->Items->Add(gcnew String(listSP[i].getName().c_str()));
		listBox1->Items->Add(gcnew String(listLT[i].getName().c_str()));
		listBox1->Items->Add(gcnew String(listSW[i].getName().c_str()));
	}
}
private: System::Void btn_Back_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_Invoice->Hide();
}
};
}
