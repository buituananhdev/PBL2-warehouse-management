﻿#pragma once
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




	private: System::Windows::Forms::Button^ btn_Create;












	private: System::Windows::Forms::Button^ btn_Refesh;

























	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_Back1;



















private: System::Windows::Forms::PictureBox^ pic_Select;
private: System::Windows::Forms::PictureBox^ pic_unSelect;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Panel^ panel_Invoice;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox3;
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
private: System::Windows::Forms::PictureBox^ pictureBox5;
















































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_Create = (gcnew System::Windows::Forms::Button());
			this->btn_Refesh = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_Back1 = (gcnew System::Windows::Forms::Button());
			this->pic_Select = (gcnew System::Windows::Forms::PictureBox());
			this->pic_unSelect = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_Invoice = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
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
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_Select))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_unSelect))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel_Invoice->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
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
			// btn_Create
			// 
			this->btn_Create->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Create->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Create->Location = System::Drawing::Point(528, 460);
			this->btn_Create->Name = L"btn_Create";
			this->btn_Create->Size = System::Drawing::Size(173, 47);
			this->btn_Create->TabIndex = 13;
			this->btn_Create->Text = L"       Create";
			this->btn_Create->UseVisualStyleBackColor = false;
			this->btn_Create->Click += gcnew System::EventHandler(this, &Import_Form::btn_Create_Click);
			// 
			// btn_Refesh
			// 
			this->btn_Refesh->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Refesh->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Refesh->Location = System::Drawing::Point(528, 390);
			this->btn_Refesh->Name = L"btn_Refesh";
			this->btn_Refesh->Size = System::Drawing::Size(173, 46);
			this->btn_Refesh->TabIndex = 15;
			this->btn_Refesh->Text = L"       Refesh";
			this->btn_Refesh->UseVisualStyleBackColor = false;
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
			this->btn_Back1->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Back1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back1->Location = System::Drawing::Point(528, 530);
			this->btn_Back1->Name = L"btn_Back1";
			this->btn_Back1->Size = System::Drawing::Size(173, 47);
			this->btn_Back1->TabIndex = 18;
			this->btn_Back1->Text = L"     Back";
			this->btn_Back1->UseVisualStyleBackColor = false;
			this->btn_Back1->Click += gcnew System::EventHandler(this, &Import_Form::btn_Back1_Click);
			// 
			// pic_Select
			// 
			this->pic_Select->BackColor = System::Drawing::SystemColors::Control;
			this->pic_Select->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pic_Select->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic_Select.Image")));
			this->pic_Select->Location = System::Drawing::Point(528, 244);
			this->pic_Select->Name = L"pic_Select";
			this->pic_Select->Size = System::Drawing::Size(173, 44);
			this->pic_Select->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic_Select->TabIndex = 20;
			this->pic_Select->TabStop = false;
			this->pic_Select->Click += gcnew System::EventHandler(this, &Import_Form::pic_Select_Click);
			// 
			// pic_unSelect
			// 
			this->pic_unSelect->BackColor = System::Drawing::SystemColors::Control;
			this->pic_unSelect->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pic_unSelect->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic_unSelect.Image")));
			this->pic_unSelect->Location = System::Drawing::Point(528, 317);
			this->pic_unSelect->Name = L"pic_unSelect";
			this->pic_unSelect->Size = System::Drawing::Size(173, 44);
			this->pic_unSelect->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic_unSelect->TabIndex = 21;
			this->pic_unSelect->TabStop = false;
			this->pic_unSelect->Click += gcnew System::EventHandler(this, &Import_Form::pic_unSelect_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(541, 393);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(39, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(541, 464);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(39, 40);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// panel_Invoice
			// 
			this->panel_Invoice->BackColor = System::Drawing::Color::White;
			this->panel_Invoice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Invoice->Controls->Add(this->groupBox1);
			this->panel_Invoice->Location = System::Drawing::Point(-1, 99);
			this->panel_Invoice->Name = L"panel_Invoice";
			this->panel_Invoice->Size = System::Drawing::Size(1187, 609);
			this->panel_Invoice->TabIndex = 23;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->pictureBox3);
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
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(983, 543);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(39, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(788, 543);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(39, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// btn_Back
			// 
			this->btn_Back->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back->Location = System::Drawing::Point(976, 535);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(168, 51);
			this->btn_Back->TabIndex = 14;
			this->btn_Back->Text = L"      Back";
			this->btn_Back->UseVisualStyleBackColor = false;
			this->btn_Back->Click += gcnew System::EventHandler(this, &Import_Form::btn_Back_Click_2);
			// 
			// txt_Date
			// 
			this->txt_Date->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Date->Location = System::Drawing::Point(266, 92);
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
			this->label5->Location = System::Drawing::Point(125, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 28);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Time Created";
			// 
			// btn_Confirm
			// 
			this->btn_Confirm->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Confirm->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Confirm->Location = System::Drawing::Point(780, 535);
			this->btn_Confirm->Name = L"btn_Confirm";
			this->btn_Confirm->Size = System::Drawing::Size(168, 51);
			this->btn_Confirm->TabIndex = 14;
			this->btn_Confirm->Text = L"         Confirm";
			this->btn_Confirm->UseVisualStyleBackColor = false;
			this->btn_Confirm->Click += gcnew System::EventHandler(this, &Import_Form::btn_Confirm_Click);
			// 
			// txt_StaffName
			// 
			this->txt_StaffName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_StaffName->Location = System::Drawing::Point(856, 39);
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
			this->label7->Location = System::Drawing::Point(679, 41);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 28);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Staff Name";
			// 
			// txt_CusName
			// 
			this->txt_CusName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_CusName->Location = System::Drawing::Point(856, 96);
			this->txt_CusName->Name = L"txt_CusName";
			this->txt_CusName->Size = System::Drawing::Size(196, 30);
			this->txt_CusName->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(679, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 28);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Customer Name";
			// 
			// txt_CodeBill
			// 
			this->txt_CodeBill->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_CodeBill->Location = System::Drawing::Point(266, 39);
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
			this->label4->Location = System::Drawing::Point(125, 41);
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
			this->dataGridView1->Location = System::Drawing::Point(122, 154);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(930, 365);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Import_Form::dataGridView1_CellEndEdit);
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
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->Format = L"#,####";
			dataGridViewCellStyle4->NullValue = L"0";
			this->col_UnitPrice->DefaultCellStyle = dataGridViewCellStyle4;
			this->col_UnitPrice->HeaderText = L"Unit Price";
			this->col_UnitPrice->MinimumWidth = 6;
			this->col_UnitPrice->Name = L"col_UnitPrice";
			this->col_UnitPrice->ReadOnly = true;
			// 
			// col_Amount
			// 
			this->col_Amount->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->NullValue = nullptr;
			this->col_Amount->DefaultCellStyle = dataGridViewCellStyle5;
			this->col_Amount->HeaderText = L"Amount";
			this->col_Amount->MinimumWidth = 6;
			this->col_Amount->Name = L"col_Amount";
			// 
			// col_Total
			// 
			this->col_Total->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->Format = L"#,####";
			dataGridViewCellStyle6->NullValue = L"0";
			this->col_Total->DefaultCellStyle = dataGridViewCellStyle6;
			this->col_Total->HeaderText = L"Total";
			this->col_Total->MinimumWidth = 6;
			this->col_Total->Name = L"col_Total";
			this->col_Total->ReadOnly = true;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(540, 534);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(39, 40);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			// 
			// Import_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1186, 703);
			this->Controls->Add(this->panel_Invoice);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pic_unSelect);
			this->Controls->Add(this->pic_Select);
			this->Controls->Add(this->btn_Back1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_Refesh);
			this->Controls->Add(this->btn_Create);
			this->Controls->Add(this->listBox2);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_Select))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_unSelect))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel_Invoice->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
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
private: System::Void btn_Create_Click(System::Object^ sender, System::EventArgs^ e) {
	time_t now = time(0);
	tm* ltm = localtime(&now);
	string tmpDate = to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + " " + to_string(ltm->tm_mday) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(1900 + ltm->tm_year);
	txt_Date->Text = gcnew String(tmpDate.c_str());
	txt_StaffName->Text = gcnew String(Staff_Name.c_str());
	srand((int)time(0));
	txt_CodeBill->Text = "IG_" + gcnew String(to_string(rand()).c_str());
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

private: System::Void btn_Back1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Main_Form->Show();
}
private: System::Void btn_Back_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panel_Invoice->Hide();
}
private: System::Void pic_Select_Click(System::Object^ sender, System::EventArgs^ e) {
	while (listBox1->SelectedItems->Count > 0) {
		listBox2->Items->Add(listBox1->SelectedItem);
		listBox1->Items->Remove(listBox1->SelectedItem);
	}
}
private: System::Void pic_unSelect_Click(System::Object^ sender, System::EventArgs^ e) {
	while (listBox2->SelectedItems->Count > 0) {
		listBox1->Items->Add(listBox2->SelectedItem);
		listBox2->Items->Remove(listBox2->SelectedItem);
	}

}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
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
private: System::Void btn_Confirm_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_CusName->Text == "") {
		MessageBox::Show("Please enter customer name!", "Error"
			, MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		string tmpCodebill = marshal_as<std::string>(txt_CodeBill->Text);
		string tmpStaffname = marshal_as<std::string>(txt_StaffName->Text);
		string tmpCusname = marshal_as<std::string>(txt_CusName->Text);
		string tmpDate = marshal_as<std::string>(txt_Date->Text);
		for (int i = 0; i < dataGridView1->Rows->Count; i++)
		{
			Invoice tmp;
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
private: System::Void btn_Back_Click_2(System::Object^ sender, System::EventArgs^ e) {
	panel_Invoice->Hide();
}
};
}