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
	/// Summary for Add_Form
	/// </summary>
	public ref class Add_Form : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
		   DataTable^ Smartphone_Device = gcnew DataTable();
		   DataTable^ Laptop_Device = gcnew DataTable();
		   DataTable^ Smartwatch_Device = gcnew DataTable();
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	public:
		Form^ Main_Form;
		Add_Form(Form^ tmpForm)
		{
			Main_Form = tmpForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Add_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txt_PriceE;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_PriceF;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_Brand;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_Name;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::ComboBox^ combo_box_txt_TypeofDV;
	private: System::Windows::Forms::Button^ btn_Save;




	private: System::Windows::Forms::TextBox^ txt_Size;
	private: System::Windows::Forms::Label^ label_Size;
	private: System::Windows::Forms::TextBox^ txt_Card;
	private: System::Windows::Forms::Label^ label_Battery;
	private: System::Windows::Forms::Label^ labe_Card;
	private: System::Windows::Forms::TextBox^ txt_Batterry;

	private: System::Windows::Forms::Label^ label_RAM;
	private: System::Windows::Forms::Label^ label_Weight;
	private: System::Windows::Forms::TextBox^ txt_Weight;
	private: System::Windows::Forms::TextBox^ txt_RAM;
	private: System::Windows::Forms::Label^ label_ROM;
	private: System::Windows::Forms::TextBox^ txt_ROM;
	private: System::Windows::Forms::Button^ btn_Back;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_Clear;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Add_Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_Size = (gcnew System::Windows::Forms::TextBox());
			this->label_Size = (gcnew System::Windows::Forms::Label());
			this->txt_Card = (gcnew System::Windows::Forms::TextBox());
			this->label_Battery = (gcnew System::Windows::Forms::Label());
			this->labe_Card = (gcnew System::Windows::Forms::Label());
			this->txt_Batterry = (gcnew System::Windows::Forms::TextBox());
			this->label_RAM = (gcnew System::Windows::Forms::Label());
			this->label_Weight = (gcnew System::Windows::Forms::Label());
			this->txt_Weight = (gcnew System::Windows::Forms::TextBox());
			this->txt_RAM = (gcnew System::Windows::Forms::TextBox());
			this->combo_box_txt_TypeofDV = (gcnew System::Windows::Forms::ComboBox());
			this->label_ROM = (gcnew System::Windows::Forms::Label());
			this->txt_ROM = (gcnew System::Windows::Forms::TextBox());
			this->txt_PriceE = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_PriceF = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_Brand = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_Name = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
			this->btn_Back = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_Clear = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(437, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(474, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADD NEW PRODUCT";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txt_Size);
			this->groupBox1->Controls->Add(this->label_Size);
			this->groupBox1->Controls->Add(this->txt_Card);
			this->groupBox1->Controls->Add(this->label_Battery);
			this->groupBox1->Controls->Add(this->labe_Card);
			this->groupBox1->Controls->Add(this->txt_Batterry);
			this->groupBox1->Controls->Add(this->label_RAM);
			this->groupBox1->Controls->Add(this->label_Weight);
			this->groupBox1->Controls->Add(this->txt_Weight);
			this->groupBox1->Controls->Add(this->txt_RAM);
			this->groupBox1->Controls->Add(this->combo_box_txt_TypeofDV);
			this->groupBox1->Controls->Add(this->label_ROM);
			this->groupBox1->Controls->Add(this->txt_ROM);
			this->groupBox1->Controls->Add(this->txt_PriceE);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->txt_PriceF);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->txt_Brand);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txt_Name);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.2F, System::Drawing::FontStyle::Bold));
			this->groupBox1->Location = System::Drawing::Point(138, 129);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(904, 256);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"General information";
			// 
			// txt_Size
			// 
			this->txt_Size->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Size->Location = System::Drawing::Point(640, 110);
			this->txt_Size->Name = L"txt_Size";
			this->txt_Size->Size = System::Drawing::Size(207, 34);
			this->txt_Size->TabIndex = 1;
			// 
			// label_Size
			// 
			this->label_Size->AutoSize = true;
			this->label_Size->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Size->Location = System::Drawing::Point(484, 111);
			this->label_Size->Name = L"label_Size";
			this->label_Size->Size = System::Drawing::Size(51, 30);
			this->label_Size->TabIndex = 0;
			this->label_Size->Text = L"Size";
			// 
			// txt_Card
			// 
			this->txt_Card->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Card->Location = System::Drawing::Point(640, 110);
			this->txt_Card->Name = L"txt_Card";
			this->txt_Card->Size = System::Drawing::Size(207, 34);
			this->txt_Card->TabIndex = 1;
			// 
			// label_Battery
			// 
			this->label_Battery->AutoSize = true;
			this->label_Battery->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Battery->Location = System::Drawing::Point(486, 156);
			this->label_Battery->Name = L"label_Battery";
			this->label_Battery->Size = System::Drawing::Size(120, 30);
			this->label_Battery->TabIndex = 0;
			this->label_Battery->Text = L"Battery life";
			// 
			// labe_Card
			// 
			this->labe_Card->AutoSize = true;
			this->labe_Card->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.8F, System::Drawing::FontStyle::Bold));
			this->labe_Card->Location = System::Drawing::Point(489, 112);
			this->labe_Card->Name = L"labe_Card";
			this->labe_Card->Size = System::Drawing::Size(59, 30);
			this->labe_Card->TabIndex = 0;
			this->labe_Card->Text = L"Card";
			// 
			// txt_Batterry
			// 
			this->txt_Batterry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Batterry->Location = System::Drawing::Point(640, 157);
			this->txt_Batterry->Name = L"txt_Batterry";
			this->txt_Batterry->Size = System::Drawing::Size(207, 34);
			this->txt_Batterry->TabIndex = 1;
			// 
			// label_RAM
			// 
			this->label_RAM->AutoSize = true;
			this->label_RAM->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.8F, System::Drawing::FontStyle::Bold));
			this->label_RAM->Location = System::Drawing::Point(484, 112);
			this->label_RAM->Name = L"label_RAM";
			this->label_RAM->Size = System::Drawing::Size(62, 30);
			this->label_RAM->TabIndex = 0;
			this->label_RAM->Text = L"RAM";
			// 
			// label_Weight
			// 
			this->label_Weight->AutoSize = true;
			this->label_Weight->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.8F, System::Drawing::FontStyle::Bold));
			this->label_Weight->Location = System::Drawing::Point(489, 157);
			this->label_Weight->Name = L"label_Weight";
			this->label_Weight->Size = System::Drawing::Size(85, 30);
			this->label_Weight->TabIndex = 0;
			this->label_Weight->Text = L"Weight";
			// 
			// txt_Weight
			// 
			this->txt_Weight->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Weight->Location = System::Drawing::Point(640, 157);
			this->txt_Weight->Name = L"txt_Weight";
			this->txt_Weight->Size = System::Drawing::Size(207, 34);
			this->txt_Weight->TabIndex = 1;
			// 
			// txt_RAM
			// 
			this->txt_RAM->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_RAM->Location = System::Drawing::Point(640, 110);
			this->txt_RAM->Name = L"txt_RAM";
			this->txt_RAM->Size = System::Drawing::Size(207, 34);
			this->txt_RAM->TabIndex = 1;
			// 
			// combo_box_txt_TypeofDV
			// 
			this->combo_box_txt_TypeofDV->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_box_txt_TypeofDV->FormattingEnabled = true;
			this->combo_box_txt_TypeofDV->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Smart Phone", L"Laptop", L"Smart Watch" });
			this->combo_box_txt_TypeofDV->Location = System::Drawing::Point(188, 62);
			this->combo_box_txt_TypeofDV->Name = L"combo_box_txt_TypeofDV";
			this->combo_box_txt_TypeofDV->Size = System::Drawing::Size(207, 36);
			this->combo_box_txt_TypeofDV->TabIndex = 2;
			this->combo_box_txt_TypeofDV->SelectedIndexChanged += gcnew System::EventHandler(this, &Add_Form::combo_box_txt_TypeofDV_SelectedIndexChanged);
			// 
			// label_ROM
			// 
			this->label_ROM->AutoSize = true;
			this->label_ROM->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.8F, System::Drawing::FontStyle::Bold));
			this->label_ROM->Location = System::Drawing::Point(484, 156);
			this->label_ROM->Name = L"label_ROM";
			this->label_ROM->Size = System::Drawing::Size(64, 30);
			this->label_ROM->TabIndex = 0;
			this->label_ROM->Text = L"ROM";
			// 
			// txt_ROM
			// 
			this->txt_ROM->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ROM->Location = System::Drawing::Point(640, 157);
			this->txt_ROM->Name = L"txt_ROM";
			this->txt_ROM->Size = System::Drawing::Size(207, 34);
			this->txt_ROM->TabIndex = 1;
			// 
			// txt_PriceE
			// 
			this->txt_PriceE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_PriceE->Location = System::Drawing::Point(640, 63);
			this->txt_PriceE->Name = L"txt_PriceE";
			this->txt_PriceE->Size = System::Drawing::Size(207, 34);
			this->txt_PriceE->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(486, 61);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 30);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Price";
			// 
			// txt_PriceF
			// 
			this->txt_PriceF->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_PriceF->Location = System::Drawing::Point(188, 201);
			this->txt_PriceF->Name = L"txt_PriceF";
			this->txt_PriceF->Size = System::Drawing::Size(207, 34);
			this->txt_PriceF->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 30);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Cost";
			// 
			// txt_Brand
			// 
			this->txt_Brand->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Brand->Location = System::Drawing::Point(188, 158);
			this->txt_Brand->Name = L"txt_Brand";
			this->txt_Brand->Size = System::Drawing::Size(207, 34);
			this->txt_Brand->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 30);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Brand";
			// 
			// txt_Name
			// 
			this->txt_Name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Name->Location = System::Drawing::Point(188, 110);
			this->txt_Name->Name = L"txt_Name";
			this->txt_Name->Size = System::Drawing::Size(207, 34);
			this->txt_Name->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 30);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(28, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 30);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Product Type";
			// 
			// btn_Save
			// 
			this->btn_Save->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Save->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Save->Location = System::Drawing::Point(1091, 164);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(153, 51);
			this->btn_Save->TabIndex = 2;
			this->btn_Save->Text = L"      Save";
			this->btn_Save->UseVisualStyleBackColor = false;
			this->btn_Save->Click += gcnew System::EventHandler(this, &Add_Form::btn_Save_Click);
			// 
			// btn_Back
			// 
			this->btn_Back->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back->Location = System::Drawing::Point(1091, 309);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(153, 49);
			this->btn_Back->TabIndex = 2;
			this->btn_Back->Text = L"      Back";
			this->btn_Back->UseVisualStyleBackColor = false;
			this->btn_Back->Click += gcnew System::EventHandler(this, &Add_Form::btn_Back_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1289, 100);
			this->panel1->TabIndex = 3;
			// 
			// btn_Clear
			// 
			this->btn_Clear->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Clear->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Clear->Location = System::Drawing::Point(1091, 236);
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->Size = System::Drawing::Size(153, 51);
			this->btn_Clear->TabIndex = 4;
			this->btn_Clear->Text = L"      Clear";
			this->btn_Clear->UseVisualStyleBackColor = false;
			this->btn_Clear->Click += gcnew System::EventHandler(this, &Add_Form::btn_Clear_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(20, 441);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1252, 185);
			this->dataGridView1->TabIndex = 5;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::Color::White;
			this->dataGridView2->Location = System::Drawing::Point(20, 441);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1252, 185);
			this->dataGridView2->TabIndex = 6;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->GridColor = System::Drawing::Color::White;
			this->dataGridView3->Location = System::Drawing::Point(20, 441);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(1252, 185);
			this->dataGridView3->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1100, 171);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(45, 38);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Add_Form::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1101, 243);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(44, 38);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Add_Form::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1100, 315);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(45, 38);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Add_Form::pictureBox3_Click);
			// 
			// Add_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1289, 683);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_Clear);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_Back);
			this->Controls->Add(this->btn_Save);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Add_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add_Form";
			this->Load += gcnew System::EventHandler(this, &Add_Form::Add_Form_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

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
	private: System::Void combo_box_txt_TypeofDV_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (combo_box_txt_TypeofDV->SelectedItem == "Smart Phone") {
			labe_Card->Hide(); txt_Card->Hide();
			label_Weight->Hide(); txt_Weight->Hide();
			label_Battery->Hide(); txt_Batterry->Hide();
			label_Size->Hide(); txt_Size->Hide();
			label_RAM->Show(); txt_RAM->Show();
			label_ROM->Show(); txt_ROM->Show();
		}
		else if (combo_box_txt_TypeofDV->SelectedItem == "Laptop") {
			label_RAM->Hide(); txt_RAM->Hide();
			label_ROM->Hide(); txt_ROM->Hide();
			label_Battery->Hide(); txt_Batterry->Hide();
			label_Size->Hide(); txt_Size->Hide();
			labe_Card->Show(); txt_Card->Show();
			label_Weight->Show(); txt_Weight->Show();
		}
		else if (combo_box_txt_TypeofDV->SelectedItem == "Smart Watch") {
			label_RAM->Hide(); txt_RAM->Hide();
			label_ROM->Hide(); txt_ROM->Hide();
			labe_Card->Hide(); txt_Card->Hide();
			label_Weight->Hide(); txt_Weight->Hide();
			label_Battery->Show(); txt_Batterry->Show();
			label_Size->Show(); txt_Size->Show();
		}
	}
	private: System::Void btn_Back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Main_Form->Show();
	}
	private: System::Void Add_Form_Load(System::Object^ sender, System::EventArgs^ e) {
		labe_Card->Hide(); txt_Card->Hide();
		label_Weight->Hide(); txt_Weight->Hide();
		label_Battery->Hide(); txt_Batterry->Hide();
		label_Size->Hide(); txt_Size->Hide();
		label_RAM->Hide(); txt_RAM->Hide();
		label_ROM->Hide(); txt_ROM->Hide();
	}

	private: System::Void btn_Save_Click(System::Object^ sender, System::EventArgs^ e) {
		int check = 1;
		std::string tempStr1 = marshal_as<std::string>(txt_PriceF->Text);
		std::string tempStrName = marshal_as<std::string>(txt_Name->Text);
		std::string tempStrBrand = marshal_as<std::string>(txt_Brand->Text);
		std::string tempStrPriceF = marshal_as<std::string>(txt_PriceF->Text);
		std::string tempStrPriceE = marshal_as<std::string>(txt_PriceE->Text);
		std::string tempStrCard = marshal_as<std::string>(txt_Card->Text);
		std::string tempStrWeight = marshal_as<std::string>(txt_Weight->Text);
		std::string tempStrRAM = marshal_as<std::string>(txt_RAM->Text);
		std::string tempStrROM = marshal_as<std::string>(txt_ROM->Text);
		std::string tempStrSize = marshal_as<std::string>(txt_Size->Text);
		std::string tempStrBattery = marshal_as<std::string>(txt_Batterry->Text);
		for (int i = 0; i < 999; i++) {
			if (txt_Brand->Text == "" || txt_Name->Text == "" ||
				txt_PriceE->Text == "" || txt_PriceF->Text == "" || ((combo_box_txt_TypeofDV->Text == "Smart Phone") && (txt_RAM->Text == "" || txt_ROM->Text == "") || ((combo_box_txt_TypeofDV->Text == "Smart Watch") && (txt_Batterry->Text == "" || txt_Size->Text == "")) || ((combo_box_txt_TypeofDV->Text == "Laptop") && (txt_Card->Text == "" || txt_Weight->Text == ""))))
			{
				MessageBox::Show("Please Fill In All The Blanks", "Error", MessageBoxButtons::OK
					, MessageBoxIcon::Error);
				check = 0;
				break;
			}
			if (check == 0)
			{
				break;
			}
			else
			{

				for (int i = 0; i < tempStr1.length(); i++)
				{
					if (tempStr1[i] != '0' && tempStr1[i] != '1' && tempStr1[i] != '2'
						&& tempStr1[i] != '3' && tempStr1[i] != '4' && tempStr1[i] != '5'
						&& tempStr1[i] != '6' && tempStr1[i] != '7' && tempStr1[i] != '8' && tempStr1[i] != '9')
					{
						MessageBox::Show("Price Should Be A Number", "Error", MessageBoxButtons::OK
							, MessageBoxIcon::Error);
						check = 0;
						break;
					}
				}
				if (check == 0)
				{
					break;
				}
				if (combo_box_txt_TypeofDV->Text == "Smart Phone")
				{
					SmartPhone tmp;
					string tempStrID = "SP0" + to_string(NumOfDV("db_smartphone.csv") + 1);
					tmp.setID(tempStrID);
					tmp.setName(tempStrName);
					tmp.setBrand(tempStrBrand);
					double tmpPriceE = stod(tempStrPriceE);
					tmp.setPriceE(tmpPriceE);
					double tempPriceF = stod(tempStrPriceF);
					tmp.setPriceF(tempPriceF);
					int tmpInt = 0;
					double tmpDouble = 0;
					tmp.setAmount(tmpInt);
					tmp.setSales(tmpInt);
					tmp.setRevenue(tmpDouble);
					string tmpStatus = "Out of stock";
					tmp.setStatus(tmpStatus);
					time_t now = time(0);
					tm* ltm = localtime(&now);
					string tmpInDate = to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + " " + to_string(ltm->tm_mday) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(1900 + ltm->tm_year);
					tmp.setInputDatetmp(tmpInDate);
					tmp.setRam(tempStrRAM);
					tmp.setRom(tempStrROM);
					listSP.InsertLast(tmp);
					MessageBox::Show("Item Updated Successfully", "Success", MessageBoxButtons::OK
						, MessageBoxIcon::Information);
					Save_Data_SmartPhone();
					Load_Data_Of_Smartphone();
					CreateNewRow_SP(NumOfDV("db_smartphone.csv") - 1);
					dataGridView1->Show();
					dataGridView2->Hide();
					dataGridView3->Hide();
					break;
				}
				else if (combo_box_txt_TypeofDV->Text == "Laptop")
				{
					Laptop tmp;
					string tempStrID = "LT0" + to_string(NumOfDV("db_laptop.csv") + 1);
					tmp.setID(tempStrID);
					tmp.setName(tempStrName);
					tmp.setBrand(tempStrBrand);
					double tmpPriceE = stod(tempStrPriceE);
					tmp.setPriceE(tmpPriceE);
					double tempPriceF = stod(tempStrPriceF);
					tmp.setPriceF(tempPriceF);
					int tmpInt = 0;
					double tmpDouble = 0;
					tmp.setAmount(tmpInt);
					tmp.setSales(tmpInt);
					tmp.setRevenue(tmpDouble);
					string tmpStatus = "Out of stock";
					tmp.setStatus(tmpStatus);
					time_t now = time(0);
					tm* ltm = localtime(&now);
					string tmpInDate = to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + " " + to_string(ltm->tm_mday) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(1900 + ltm->tm_year);
					tmp.setInputDatetmp(tmpInDate);
					tmp.setCard(tempStrCard);
					tmp.setWeight(tempStrWeight);
					listLT.InsertLast(tmp);
					MessageBox::Show("Item Updated Successfully", "Success", MessageBoxButtons::OK
						, MessageBoxIcon::Information);
					Save_Data_Laptop();
					Load_Data_Of_Laptop();
					CreateNewRow_LT(NumOfDV("db_laptop.csv") - 1);
					dataGridView2->Show();
					dataGridView1->Hide();
					dataGridView3->Hide();
					break;
				}
				else if (combo_box_txt_TypeofDV->Text == "Smart Watch")
				{
					SmartWatch tmp;
					string tempStrID = "SW0" + to_string(NumOfDV("db_laptop.csv") + 1);
					tmp.setID(tempStrID);
					tmp.setName(tempStrName);
					tmp.setBrand(tempStrBrand);
					double tmpPriceE = stod(tempStrPriceE);
					tmp.setPriceE(tmpPriceE);
					double tempPriceF = stod(tempStrPriceF);
					tmp.setPriceF(tempPriceF);
					int tmpInt = 0;
					double tmpDouble = 0;
					tmp.setAmount(tmpInt);
					tmp.setSales(tmpInt);
					tmp.setRevenue(tmpDouble);
					string tmpStatus = "Out of stock";
					tmp.setStatus(tmpStatus);
					time_t now = time(0);
					tm* ltm = localtime(&now);
					string tmpInDate = to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + " " + to_string(ltm->tm_mday) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(1900 + ltm->tm_year);
					tmp.setInputDatetmp(tmpInDate);
					tmp.setBatteryTime(tempStrBattery);
					tmp.setSize(tempStrSize);
					listSW.InsertLast(tmp);
					MessageBox::Show("Item Updated Successfully", "Success", MessageBoxButtons::OK
						, MessageBoxIcon::Information);
					Save_Data_SmartWatch();
					Load_Data_Of_Smartwatch();
					CreateNewRow_SW(NumOfDV("db_smartwatch.csv") - 1);
					dataGridView3->Show();
					dataGridView1->Hide();
					dataGridView2->Hide();
					break;
				}
				else
				{
					MessageBox::Show("There is no product category named : " + combo_box_txt_TypeofDV->Text, "Error", MessageBoxButtons::OK
						, MessageBoxIcon::Error);
					check = 0;
					break;
				}
			}
		}
	}
	private: System::Void btn_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		combo_box_txt_TypeofDV->Text = "";
		txt_Brand->Text = "";
		txt_Name->Text = "";
		txt_PriceE->Text = "";
		txt_PriceF->Text = "";
		txt_RAM->Text = "";
		txt_ROM->Text = "";
		txt_Card->Text = "";
		txt_Weight->Text = "";
		txt_Size->Text = "";
		txt_Batterry->Text = "";
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		btn_Save_Click(sender, e);
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	btn_Clear_Click(sender, e);
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	btn_Back_Click(sender, e);
}
};
}
