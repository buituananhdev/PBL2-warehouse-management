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
	private: System::Windows::Forms::Button^ button1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->panel1->Size = System::Drawing::Size(1186, 100);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(382, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(428, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SEARCH PRODUCT";
			// 
			// txt_Search
			// 
			this->txt_Search->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_Search->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.8F));
			this->txt_Search->Location = System::Drawing::Point(15, 9);
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
			this->panel2->Location = System::Drawing::Point(323, 146);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(552, 46);
			this->panel2->TabIndex = 2;
			// 
			// btn_Search
			// 
			this->btn_Search->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->btn_Search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Search.Image")));
			this->btn_Search->Location = System::Drawing::Point(504, 0);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(47, 46);
			this->btn_Search->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_Search->TabIndex = 3;
			this->btn_Search->TabStop = false;
			this->btn_Search->Click += gcnew System::EventHandler(this, &Search_Form::btn_Search_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 247);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1162, 340);
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
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(536, 612);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 40);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Search_Form::button1_Click);
			// 
			// Search_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 673);
			this->Controls->Add(this->button1);
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
	if (txt_Search->Text != "") {
		txt_Search->Text = "";
	}
}
private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
	/*SmartPhone arrayFound[MAX];
	int foundSP = 0;
	char indexSP[100];
	std::string tempStrIndex = marshal_as<std::string>(txt_Search->Text);
	char tempStrIndex1[100];
	strcpy(tempStrIndex1, tempStrIndex.c_str());
	for (int i = 0; i < 100; i++) {
		strcpy(indexSP, listSP[i].name.c_str());
		string index1 = strupr(indexSP);
		string index2 = strupr(tempStrIndex1);
		if (strstr(index1.c_str(), index2.c_str())) {
			foundSP = 1;
			if (Search_Device->Rows->Count <= 0) {
				Search_Device->Columns->Add("ID");
				Search_Device->Columns->Add("Ten");
				Search_Device->Columns->Add("Hang");
				Search_Device->Columns->Add("Mau");
				Search_Device->Columns->Add("Gia");
				Search_Device->Columns->Add("So luong ton");
				Search_Device->Columns->Add("Doanh so");
				Search_Device->Columns->Add("Doanh thu");
				Search_Device->Columns->Add("Trang thai");
				Search_Device->Columns->Add("Ngay nhap kho");
				Search_Device->Columns->Add("");
				Search_Device->Columns->Add("");
				string tmpPriceF = to_string(listSP[i].getPriceF());
				string tmpAmount = to_string(listSP[i].getAmount());
				string tmpSales = to_string(listSP[i].getSales());
				string tmpRevenue = to_string(listSP[i].getRevenue());

				Search_Device->Rows->Add(gcnew String(listSP[i].getID().c_str()), gcnew String(listSP[i].getName().c_str()), gcnew String(listSP[i].getBrand().c_str())
					, gcnew String(listSP[i].getColor().c_str()), gcnew String(tmpPriceF.c_str()), gcnew String(tmpAmount.c_str()), gcnew String(tmpSales.c_str())
					, gcnew String(tmpRevenue.c_str()), gcnew String(listSP[i].getStatus().c_str()), gcnew String(listSP[i].getInputDatetmp().c_str()), gcnew String(listSP[i].getRam().c_str()), gcnew String(listSP[i].getRom().c_str()));
				dataGridView1->DataSource = Search_Device;
				i++;
			}
			break;
		}
	}
	if (foundSP == 0) {
		MessageBox::Show("Sorry we couldn't find any matches for your keywords" + txt_Search->Text, "Error", MessageBoxButtons::OK
			, MessageBoxIcon::Error);
	} */
	
}
};
}
