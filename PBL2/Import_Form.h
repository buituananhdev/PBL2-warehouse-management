#pragma once
#include "Manage.h"
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

	protected:

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_Select;
	private: System::Windows::Forms::Button^ btn_UnSelect;


	private: System::Windows::Forms::Button^ btn_Create;












	private: System::Windows::Forms::Button^ btn_Refesh;

























	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_Back1;
	private: System::Windows::Forms::Panel^ panel_Invoice;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btn_Back;
	private: System::Windows::Forms::TextBox^ txt_Date;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btn_Confirm;
	private: System::Windows::Forms::TextBox^ txt_StaffName;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_CusName;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_CodeBill;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_Select = (gcnew System::Windows::Forms::Button());
			this->btn_UnSelect = (gcnew System::Windows::Forms::Button());
			this->btn_Create = (gcnew System::Windows::Forms::Button());
			this->btn_Refesh = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_Back1 = (gcnew System::Windows::Forms::Button());
			this->panel_Invoice = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Back = (gcnew System::Windows::Forms::Button());
			this->txt_Date = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_Confirm = (gcnew System::Windows::Forms::Button());
			this->txt_StaffName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_CusName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_CodeBill = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->col_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_UnitPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_Amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->panel_Invoice->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(90, 171);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(313, 441);
			this->listBox1->TabIndex = 1;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 23;
			this->listBox2->Location = System::Drawing::Point(804, 171);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(313, 441);
			this->listBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(85, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 28);
			this->label2->TabIndex = 10;
			this->label2->Text = L"List of products";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(801, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 28);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Selected list";
			// 
			// btn_Select
			// 
			this->btn_Select->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Select->Location = System::Drawing::Point(528, 258);
			this->btn_Select->Name = L"btn_Select";
			this->btn_Select->Size = System::Drawing::Size(173, 44);
			this->btn_Select->TabIndex = 11;
			this->btn_Select->Text = L">>>>>";
			this->btn_Select->UseVisualStyleBackColor = true;
			this->btn_Select->Click += gcnew System::EventHandler(this, &Import_Form::btn_Select_Click);
			// 
			// btn_UnSelect
			// 
			this->btn_UnSelect->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_UnSelect->Location = System::Drawing::Point(528, 326);
			this->btn_UnSelect->Name = L"btn_UnSelect";
			this->btn_UnSelect->Size = System::Drawing::Size(173, 43);
			this->btn_UnSelect->TabIndex = 11;
			this->btn_UnSelect->Text = L"<<<<<";
			this->btn_UnSelect->UseVisualStyleBackColor = true;
			this->btn_UnSelect->Click += gcnew System::EventHandler(this, &Import_Form::btn_UnSelect_Click);
			// 
			// btn_Create
			// 
			this->btn_Create->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Create->Location = System::Drawing::Point(528, 460);
			this->btn_Create->Name = L"btn_Create";
			this->btn_Create->Size = System::Drawing::Size(173, 47);
			this->btn_Create->TabIndex = 13;
			this->btn_Create->Text = L"Create";
			this->btn_Create->UseVisualStyleBackColor = true;
			this->btn_Create->Click += gcnew System::EventHandler(this, &Import_Form::btn_Create_Click);
			// 
			// btn_Refesh
			// 
			this->btn_Refesh->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Refesh->Location = System::Drawing::Point(528, 390);
			this->btn_Refesh->Name = L"btn_Refesh";
			this->btn_Refesh->Size = System::Drawing::Size(173, 46);
			this->btn_Refesh->TabIndex = 15;
			this->btn_Refesh->Text = L"Refesh";
			this->btn_Refesh->UseVisualStyleBackColor = true;
			this->btn_Refesh->Click += gcnew System::EventHandler(this, &Import_Form::btn_Refesh_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(423, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(376, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"IMPORT GOODS";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1186, 100);
			this->panel1->TabIndex = 17;
			// 
			// btn_Back1
			// 
			this->btn_Back1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back1->Location = System::Drawing::Point(528, 530);
			this->btn_Back1->Name = L"btn_Back1";
			this->btn_Back1->Size = System::Drawing::Size(173, 47);
			this->btn_Back1->TabIndex = 18;
			this->btn_Back1->Text = L"Back";
			this->btn_Back1->UseVisualStyleBackColor = true;
			this->btn_Back1->Click += gcnew System::EventHandler(this, &Import_Form::btn_Back1_Click);
			// 
			// panel_Invoice
			// 
			this->panel_Invoice->BackColor = System::Drawing::Color::White;
			this->panel_Invoice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Invoice->Controls->Add(this->groupBox1);
			this->panel_Invoice->Location = System::Drawing::Point(0, 100);
			this->panel_Invoice->Name = L"panel_Invoice";
			this->panel_Invoice->Size = System::Drawing::Size(1186, 609);
			this->panel_Invoice->TabIndex = 19;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_Back);
			this->groupBox1->Controls->Add(this->txt_Date);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->btn_Confirm);
			this->groupBox1->Controls->Add(this->txt_StaffName);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->txt_CusName);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->txt_CodeBill);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(-1, -1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1186, 609);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Invoice Information";
			// 
			// btn_Back
			// 
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back->Location = System::Drawing::Point(818, 542);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(122, 49);
			this->btn_Back->TabIndex = 14;
			this->btn_Back->Text = L"Back";
			this->btn_Back->UseVisualStyleBackColor = true;
			this->btn_Back->Click += gcnew System::EventHandler(this, &Import_Form::btn_Back_Click_1);
			// 
			// txt_Date
			// 
			this->txt_Date->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Date->Location = System::Drawing::Point(265, 106);
			this->txt_Date->Name = L"txt_Date";
			this->txt_Date->ReadOnly = true;
			this->txt_Date->Size = System::Drawing::Size(196, 30);
			this->txt_Date->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(124, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 28);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Time Created";
			// 
			// btn_Confirm
			// 
			this->btn_Confirm->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Confirm->Location = System::Drawing::Point(637, 542);
			this->btn_Confirm->Name = L"btn_Confirm";
			this->btn_Confirm->Size = System::Drawing::Size(122, 49);
			this->btn_Confirm->TabIndex = 14;
			this->btn_Confirm->Text = L"Confirm";
			this->btn_Confirm->UseVisualStyleBackColor = true;
			this->btn_Confirm->Click += gcnew System::EventHandler(this, &Import_Form::btn_Confirm_Click_1);
			// 
			// txt_StaffName
			// 
			this->txt_StaffName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_StaffName->Location = System::Drawing::Point(855, 53);
			this->txt_StaffName->Name = L"txt_StaffName";
			this->txt_StaffName->ReadOnly = true;
			this->txt_StaffName->Size = System::Drawing::Size(196, 30);
			this->txt_StaffName->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(678, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 28);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Staff Name";
			// 
			// txt_CusName
			// 
			this->txt_CusName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_CusName->Location = System::Drawing::Point(855, 110);
			this->txt_CusName->Name = L"txt_CusName";
			this->txt_CusName->Size = System::Drawing::Size(196, 30);
			this->txt_CusName->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(678, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 28);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Customer Name";
			// 
			// txt_CodeBill
			// 
			this->txt_CodeBill->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_CodeBill->Location = System::Drawing::Point(265, 53);
			this->txt_CodeBill->Name = L"txt_CodeBill";
			this->txt_CodeBill->ReadOnly = true;
			this->txt_CodeBill->Size = System::Drawing::Size(196, 30);
			this->txt_CodeBill->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(124, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 28);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Code Bill";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->col_Name,
					this->col_UnitPrice, this->col_Amount, this->col_Total
			});
			this->dataGridView1->Location = System::Drawing::Point(121, 168);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(930, 368);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Import_Form::dataGridView1_CellEndEdit_1);
			// 
			// col_Name
			// 
			this->col_Name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->col_Name->DataPropertyName = L"Name";
			this->col_Name->HeaderText = L"Product Name";
			this->col_Name->MinimumWidth = 6;
			this->col_Name->Name = L"col_Name";
			this->col_Name->ReadOnly = true;
			// 
			// col_UnitPrice
			// 
			this->col_UnitPrice->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->Format = L"#,####";
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
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->Format = L"#,####";
			dataGridViewCellStyle3->NullValue = L"0";
			this->col_Total->DefaultCellStyle = dataGridViewCellStyle3;
			this->col_Total->HeaderText = L"Total";
			this->col_Total->MinimumWidth = 6;
			this->col_Total->Name = L"col_Total";
			this->col_Total->ReadOnly = true;
			// 
			// Import_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1186, 703);
			this->Controls->Add(this->panel_Invoice);
			this->Controls->Add(this->btn_Back1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_Refesh);
			this->Controls->Add(this->btn_Create);
			this->Controls->Add(this->btn_UnSelect);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->btn_Select);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Import_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Import_Form";
			this->Load += gcnew System::EventHandler(this, &Import_Form::Import_Form_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
		for (int i = 0; i < NumOfDV("db_smartphone.csv"); i++) {
			listBox1->Items->Add(gcnew String(listSP[i].getName().c_str()));
		}
		for (int i = 0; i < NumOfDV("db_laptop.csv"); i++)
		{
			listBox1->Items->Add(gcnew String(listLT[i].getName().c_str()));
		}
		for (int i = 0; i < NumOfDV("db_smartwatch.csv"); i++)
		{
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
	time_t now = time(0);
	tm* ltm = localtime(&now);
	string tmpDate = to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + " " + to_string(ltm->tm_mday) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(1900 + ltm->tm_year);
	txt_Date->Text = gcnew String(tmpDate.c_str());
	txt_StaffName->Text = gcnew String(Staff_Name.c_str());
	srand((int)time(0));
	txt_CodeBill->Text = "HD" + gcnew String(to_string(rand()).c_str());
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
private: System::Void btn_Refesh_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox2->Items->Clear();
	listBox1->Items->Clear();
	for (int i = 0; i < NumOfDV("db_smartphone.csv"); i++) {
		listBox1->Items->Add(gcnew String(listSP[i].getName().c_str()));
	}
	for (int i = 0; i < NumOfDV("db_laptop.csv"); i++)
	{
		listBox1->Items->Add(gcnew String(listLT[i].getName().c_str()));
	}
	for (int i = 0; i < NumOfDV("db_smartwatch.csv"); i++)
	{
		listBox1->Items->Add(gcnew String(listSW[i].getName().c_str()));
	}
}
private: System::Void btn_Back_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_Invoice->Hide();
}

private: System::Void btn_Back1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Main_Form->Show();
}
private: System::Void dataGridView1_CellEndEdit_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int indexCurrentRow = dataGridView1->CurrentRow->Index;
	dataGridView1->Rows[indexCurrentRow]->Cells[3]->Value =
		(System::Convert::ToDouble(dataGridView1->Rows[indexCurrentRow]->Cells[1]->Value)
			* System::Convert::ToDouble(dataGridView1->Rows[indexCurrentRow]->Cells[2]->Value)).ToString();;
	double totalAmount = 0;
	double total = 0;
	for (int i = 0; i < listBox2->Items->Count; i++) {
		total += System::Convert::ToDouble(dataGridView1->Rows[i]->Cells[3]->Value);
		totalAmount += System::Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value);
	}
	dataGridView1->Rows[listBox2->Items->Count]->Cells[3]->Value = total;
	dataGridView1->Rows[listBox2->Items->Count]->Cells[2]->Value = totalAmount;
}
private: System::Void btn_Confirm_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (txt_CusName->Text == "") {
		MessageBox::Show("Please enter customer name!", "Error"
			, MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		for (int i = 0; i < dataGridView1->Rows->Count; i++)
		{
			string tmpStatus = "Stocking";
			string tmpName = marshal_as<std::string>(System::Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value));
			int tmpAmount = System::Convert::ToInt64(dataGridView1->Rows[i]->Cells[2]->Value);
			if (tmpAmount > 0)
			{
				for (int j = 0; j < NumOfDV("db_smartphone.csv"); j++) {
					if (listSP[j].getName() == tmpName)
					{
						listSP[j].UpdateAmount(tmpAmount);
						listSP[j].setStatus(tmpStatus);
					}
				}
				for (int j = 0; j < NumOfDV("db_laptop.csv"); j++) {
					if (tmpName == listLT[j].getName())
					{
						listLT[j].UpdateAmount(tmpAmount);
						listLT[j].setStatus(tmpStatus);
					}
				}
				for (int j = 0; j < NumOfDV("db_smartwatch.csv"); j++) {
					if (tmpName == listSW[j].getName())
					{
						listSW[j].UpdateAmount(tmpAmount);
						listSW[j].setStatus(tmpStatus);
					}
				}
			}
			else
			{
				MessageBox::Show("Amount must be greater than 0! Please re-enter", "Error"
					, MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		Save_Data_Laptop();
		Save_Data_SmartPhone();
		Save_Data_SmartWatch();
		MessageBox::Show("Done"
			, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void btn_Back_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panel_Invoice->Hide();
}
};
}