#pragma once

namespace PBL2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Search_Form
	/// </summary>
	public ref class Search_Form : public System::Windows::Forms::Form
	{
	public:
		DataTable^ Search_Device = gcnew DataTable();
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	public:
	public:
		Form^ Main_Form;
		Search_Form(Form^ tmpForm)
		{
			Main_Form = tmpForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Search_Form(void)
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
		~Search_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_Search;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ btn_Search;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label_ShowIndexSearch;
	private: System::Windows::Forms::Button^ btn_Back;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Search_Form::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_Search = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_Search = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label_ShowIndexSearch = (gcnew System::Windows::Forms::Label());
			this->btn_Back = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Search))->BeginInit();
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
			this->panel1->Size = System::Drawing::Size(1289, 100);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(479, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(428, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SEARCH PRODUCT";
			// 
			// txt_Search
			// 
			this->txt_Search->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_Search->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.8F));
			this->txt_Search->Location = System::Drawing::Point(13, 6);
			this->txt_Search->Name = L"txt_Search";
			this->txt_Search->Size = System::Drawing::Size(479, 27);
			this->txt_Search->TabIndex = 1;
			this->txt_Search->Text = L"What are you looking for...";
			this->txt_Search->Click += gcnew System::EventHandler(this, &Search_Form::txt_Search_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->btn_Search);
			this->panel2->Controls->Add(this->txt_Search);
			this->panel2->Location = System::Drawing::Point(415, 154);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(551, 36);
			this->panel2->TabIndex = 2;
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
			this->btn_Search->Click += gcnew System::EventHandler(this, &Search_Form::btn_Search_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(40, 303);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1219, 284);
			this->dataGridView1->TabIndex = 3;
			// 
			// label_ShowIndexSearch
			// 
			this->label_ShowIndexSearch->AutoSize = true;
			this->label_ShowIndexSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ShowIndexSearch->Location = System::Drawing::Point(12, 219);
			this->label_ShowIndexSearch->Name = L"label_ShowIndexSearch";
			this->label_ShowIndexSearch->Size = System::Drawing::Size(17, 25);
			this->label_ShowIndexSearch->TabIndex = 4;
			this->label_ShowIndexSearch->Text = L".";
			// 
			// btn_Back
			// 
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.8F, System::Drawing::FontStyle::Bold));
			this->btn_Back->Location = System::Drawing::Point(578, 607);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(130, 50);
			this->btn_Back->TabIndex = 5;
			this->btn_Back->Text = L"Back";
			this->btn_Back->UseVisualStyleBackColor = true;
			this->btn_Back->Click += gcnew System::EventHandler(this, &Search_Form::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 267);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(467, 23);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Here is the information of the product you are looking for...";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.8F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ID", L"Name", L"Price" });
			this->comboBox1->Location = System::Drawing::Point(238, 156);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(154, 36);
			this->comboBox1->TabIndex = 7;
			// 
			// Search_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1289, 673);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_Back);
			this->Controls->Add(this->label_ShowIndexSearch);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Search_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Search_Form";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Search))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Main_Form->Show();
}
private: System::Void txt_Search_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_Search->Text == "What are you looking for...") {
		txt_Search->Text = "";
	}
}
private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
};
}
