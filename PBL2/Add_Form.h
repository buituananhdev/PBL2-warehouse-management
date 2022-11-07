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
	/// Summary for Add_Form
	/// </summary>
	public ref class Add_Form : public System::Windows::Forms::Form
	{
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
		Add_Form(void)
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
	private: System::Windows::Forms::TextBox^ txt_PriceF;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_Color;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_Brand;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_Name;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_ID;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ combo_box_txt_TypeofDV;
	private: System::Windows::Forms::Button^ btn_Save;

	private: System::Windows::Forms::TextBox^ txt_PriceE;

	private: System::Windows::Forms::Label^ label3;
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
			this->txt_PriceE = (gcnew System::Windows::Forms::TextBox());
			this->txt_ROM = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_PriceF = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_Color = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_Brand = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_Name = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
			this->btn_Back = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_Clear = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(378, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(473, 62);
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
			this->groupBox1->Controls->Add(this->txt_PriceE);
			this->groupBox1->Controls->Add(this->txt_ROM);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txt_PriceF);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->txt_Color);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->txt_Brand);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txt_Name);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->txt_ID);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.2F, System::Drawing::FontStyle::Bold));
			this->groupBox1->Location = System::Drawing::Point(93, 134);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(821, 299);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Thông tin chung";
			// 
			// txt_Size
			// 
			this->txt_Size->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Size->Location = System::Drawing::Point(478, 151);
			this->txt_Size->Name = L"txt_Size";
			this->txt_Size->Size = System::Drawing::Size(207, 27);
			this->txt_Size->TabIndex = 1;
			// 
			// label_Size
			// 
			this->label_Size->AutoSize = true;
			this->label_Size->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Size->Location = System::Drawing::Point(403, 150);
			this->label_Size->Name = L"label_Size";
			this->label_Size->Size = System::Drawing::Size(45, 25);
			this->label_Size->TabIndex = 0;
			this->label_Size->Text = L"Size";
			// 
			// txt_Card
			// 
			this->txt_Card->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Card->Location = System::Drawing::Point(478, 150);
			this->txt_Card->Name = L"txt_Card";
			this->txt_Card->Size = System::Drawing::Size(207, 27);
			this->txt_Card->TabIndex = 1;
			// 
			// label_Battery
			// 
			this->label_Battery->AutoSize = true;
			this->label_Battery->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Battery->Location = System::Drawing::Point(361, 194);
			this->label_Battery->Name = L"label_Battery";
			this->label_Battery->Size = System::Drawing::Size(104, 25);
			this->label_Battery->TabIndex = 0;
			this->label_Battery->Text = L"Battery life";
			// 
			// labe_Card
			// 
			this->labe_Card->AutoSize = true;
			this->labe_Card->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labe_Card->Location = System::Drawing::Point(397, 150);
			this->labe_Card->Name = L"labe_Card";
			this->labe_Card->Size = System::Drawing::Size(50, 25);
			this->labe_Card->TabIndex = 0;
			this->labe_Card->Text = L"Card";
			// 
			// txt_Batterry
			// 
			this->txt_Batterry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Batterry->Location = System::Drawing::Point(478, 192);
			this->txt_Batterry->Name = L"txt_Batterry";
			this->txt_Batterry->Size = System::Drawing::Size(207, 27);
			this->txt_Batterry->TabIndex = 1;
			// 
			// label_RAM
			// 
			this->label_RAM->AutoSize = true;
			this->label_RAM->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_RAM->Location = System::Drawing::Point(379, 151);
			this->label_RAM->Name = L"label_RAM";
			this->label_RAM->Size = System::Drawing::Size(52, 25);
			this->label_RAM->TabIndex = 0;
			this->label_RAM->Text = L"RAM";
			// 
			// label_Weight
			// 
			this->label_Weight->AutoSize = true;
			this->label_Weight->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Weight->Location = System::Drawing::Point(355, 194);
			this->label_Weight->Name = L"label_Weight";
			this->label_Weight->Size = System::Drawing::Size(115, 25);
			this->label_Weight->TabIndex = 0;
			this->label_Weight->Text = L"Trọng lượng";
			// 
			// txt_Weight
			// 
			this->txt_Weight->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Weight->Location = System::Drawing::Point(478, 191);
			this->txt_Weight->Name = L"txt_Weight";
			this->txt_Weight->Size = System::Drawing::Size(207, 27);
			this->txt_Weight->TabIndex = 1;
			// 
			// txt_RAM
			// 
			this->txt_RAM->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_RAM->Location = System::Drawing::Point(478, 151);
			this->txt_RAM->Name = L"txt_RAM";
			this->txt_RAM->Size = System::Drawing::Size(207, 27);
			this->txt_RAM->TabIndex = 1;
			// 
			// combo_box_txt_TypeofDV
			// 
			this->combo_box_txt_TypeofDV->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->combo_box_txt_TypeofDV->FormattingEnabled = true;
			this->combo_box_txt_TypeofDV->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Smart Phone", L"Laptop", L"Smart Watch" });
			this->combo_box_txt_TypeofDV->Location = System::Drawing::Point(109, 62);
			this->combo_box_txt_TypeofDV->Name = L"combo_box_txt_TypeofDV";
			this->combo_box_txt_TypeofDV->Size = System::Drawing::Size(207, 28);
			this->combo_box_txt_TypeofDV->TabIndex = 2;
			this->combo_box_txt_TypeofDV->SelectedIndexChanged += gcnew System::EventHandler(this, &Add_Form::combo_box_txt_TypeofDV_SelectedIndexChanged);
			// 
			// label_ROM
			// 
			this->label_ROM->AutoSize = true;
			this->label_ROM->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ROM->Location = System::Drawing::Point(379, 192);
			this->label_ROM->Name = L"label_ROM";
			this->label_ROM->Size = System::Drawing::Size(54, 25);
			this->label_ROM->TabIndex = 0;
			this->label_ROM->Text = L"ROM";
			// 
			// txt_PriceE
			// 
			this->txt_PriceE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_PriceE->Location = System::Drawing::Point(478, 106);
			this->txt_PriceE->Name = L"txt_PriceE";
			this->txt_PriceE->Size = System::Drawing::Size(207, 27);
			this->txt_PriceE->TabIndex = 1;
			// 
			// txt_ROM
			// 
			this->txt_ROM->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_ROM->Location = System::Drawing::Point(478, 192);
			this->txt_ROM->Name = L"txt_ROM";
			this->txt_ROM->Size = System::Drawing::Size(207, 27);
			this->txt_ROM->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(390, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Giá bán";
			// 
			// txt_PriceF
			// 
			this->txt_PriceF->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_PriceF->Location = System::Drawing::Point(478, 59);
			this->txt_PriceF->Name = L"txt_PriceF";
			this->txt_PriceF->Size = System::Drawing::Size(207, 27);
			this->txt_PriceF->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(380, 58);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Giá nhập";
			// 
			// txt_Color
			// 
			this->txt_Color->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Color->Location = System::Drawing::Point(109, 234);
			this->txt_Color->Name = L"txt_Color";
			this->txt_Color->Size = System::Drawing::Size(207, 27);
			this->txt_Color->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 234);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 25);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Màu ";
			// 
			// txt_Brand
			// 
			this->txt_Brand->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Brand->Location = System::Drawing::Point(109, 191);
			this->txt_Brand->Name = L"txt_Brand";
			this->txt_Brand->Size = System::Drawing::Size(207, 27);
			this->txt_Brand->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 191);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 25);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Hãng";
			// 
			// txt_Name
			// 
			this->txt_Name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Name->Location = System::Drawing::Point(109, 148);
			this->txt_Name->Name = L"txt_Name";
			this->txt_Name->Size = System::Drawing::Size(207, 27);
			this->txt_Name->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Tên";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(28, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 25);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Loại SP";
			// 
			// txt_ID
			// 
			this->txt_ID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_ID->Location = System::Drawing::Point(109, 105);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(207, 27);
			this->txt_ID->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Mã SP";
			// 
			// btn_Save
			// 
			this->btn_Save->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Save->Location = System::Drawing::Point(992, 176);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(109, 41);
			this->btn_Save->TabIndex = 2;
			this->btn_Save->Text = L"Save";
			this->btn_Save->UseVisualStyleBackColor = true;
			this->btn_Save->Click += gcnew System::EventHandler(this, &Add_Form::btn_Save_Click);
			// 
			// btn_Back
			// 
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back->Location = System::Drawing::Point(992, 240);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(109, 41);
			this->btn_Back->TabIndex = 2;
			this->btn_Back->Text = L"Back";
			this->btn_Back->UseVisualStyleBackColor = true;
			this->btn_Back->Click += gcnew System::EventHandler(this, &Add_Form::btn_Back_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PeachPuff;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1186, 100);
			this->panel1->TabIndex = 3;
			// 
			// btn_Clear
			// 
			this->btn_Clear->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Clear->Location = System::Drawing::Point(992, 307);
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->Size = System::Drawing::Size(109, 40);
			this->btn_Clear->TabIndex = 4;
			this->btn_Clear->Text = L"Clear";
			this->btn_Clear->UseVisualStyleBackColor = true;
			this->btn_Clear->Click += gcnew System::EventHandler(this, &Add_Form::btn_Clear_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 457);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1161, 214);
			this->dataGridView1->TabIndex = 5;
			// 
			// Add_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 683);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_Clear);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_Back);
			this->Controls->Add(this->btn_Save);
			this->Controls->Add(this->groupBox1);
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
			this->ResumeLayout(false);

		}
#pragma endregion
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
	std::string tempStr2 = marshal_as<std::string>(txt_PriceE->Text);
	std::string tempStrID = marshal_as<std::string>(txt_ID->Text);
	std::string tempStrName = marshal_as<std::string>(txt_Name->Text);
	std::string tempStrBrand = marshal_as<std::string>(txt_Brand->Text);
	std::string tempStrColor = marshal_as<std::string>(txt_Color->Text);
	std::string tempStrPriceF = marshal_as<std::string>(txt_PriceF->Text);
	std::string tempStrPriceE = marshal_as<std::string>(txt_PriceE->Text);
	std::string tempStrCard = marshal_as<std::string>(txt_Card->Text);
	std::string tempStrWeight = marshal_as<std::string>(txt_Weight->Text);
	std::string tempStrRAM = marshal_as<std::string>(txt_RAM->Text);
	std::string tempStrROM = marshal_as<std::string>(txt_ROM->Text);
	std::string tempStrSize = marshal_as<std::string>(txt_Size->Text);
	std::string tempStrBattery = marshal_as<std::string>(txt_Batterry->Text);
	for (int i = 0; i < 999; i++) {
		if (txt_ID->Text == "" || txt_Brand->Text == "" || txt_Name->Text == "" ||
			txt_Color->Text == "" || txt_PriceF->Text == "" || txt_PriceE->Text == "") 
		{
			MessageBox::Show("Please Fill In All The Blanks", "Error", MessageBoxButtons::OK
				, MessageBoxIcon::Error);
			check = 0;
			break;
		}
		else if (listLT[i].getID() == tempStrID || listSP[i].getID() == tempStrID || listSW[i].getID() == tempStrID)
		{
			MessageBox::Show("This product ID already exists, please choose another!", "Error"
				, MessageBoxButtons::OK, MessageBoxIcon::Error);
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
					MessageBox::Show("*Gia goc* and *Gia ban* Should Be A Number", "Error", MessageBoxButtons::OK
						, MessageBoxIcon::Error);
					check = 0;
					break;
				}
			}
			if (check == 0)
			{
				break;
			}
			for (int i = 0; i < tempStr2.length(); i++)
			{
				if (tempStr2[i] != '0' && tempStr2[i] != '1' && tempStr2[i] != '2'
					&& tempStr2[i] != '3' && tempStr2[i] != '4' && tempStr2[i] != '5'
					&& tempStr2[i] != '6' && tempStr2[i] != '7' && tempStr2[i] != '8' && tempStr2[i] != '9')
				{
					MessageBox::Show("*Gia goc* and *Gia ban* Should Be A Number", "Error", MessageBoxButtons::OK
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
				int index = NumOfDV("db_smartphone.csv") + 1;
				listSP[index].setID(tempStrID);
				listSP[index].setName(tempStrName);
				listSP[index].setBrand(tempStrBrand);
				listSP[index].setColor(tempStrColor);
				double tempPriceF = stod(tempStrPriceF);
				double tempPriceE = stod(tempStrPriceE);
				listSP[index].setPriceF(tempPriceE);
				int tmpInt = 0;
				double tmpDouble = 0;
				listSP[index].setAmount(tmpInt);
				listSP[index].setSales(tmpInt);
				listSP[index].setRevenue(tmpDouble);
				string tmpStatus = "Het hang";
				string tmpDate = "NUL";
				listSP[index].setStatus(tmpStatus);
				listSP[index].setInputDatetmp(tmpDate);
				time_t now = time(0);
				tm* ltm = localtime(&now);
				string tmpInDate = to_string(ltm->tm_mday) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(1900 + ltm->tm_year);
				listSP[index].setInputDatetmp(tmpInDate);
				listSP[index].setRam(tempStrRAM);
				listSP[index].setRom(tempStrROM);
				MessageBox::Show("Item Updated Successfully", "Success", MessageBoxButtons::OK
					, MessageBoxIcon::Information);
				Save_Data_SmartPhone();
				break;
			}
			else 
			{
				MessageBox::Show("There is no product category named " + combo_box_txt_TypeofDV->Text, "Error", MessageBoxButtons::OK
					, MessageBoxIcon::Error);
				check = 0;
				break;
			}
		}
	}
}
private: System::Void btn_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	combo_box_txt_TypeofDV->Text = "";
	txt_ID->Text = "";
	txt_Brand->Text = "";
	txt_Name->Text = "";
	txt_Color->Text = "";
	txt_PriceF->Text = "";
	txt_PriceE->Text = "";
	txt_RAM->Text = "";
	txt_ROM->Text = "";
	txt_Card->Text = "";
	txt_Weight->Text = "";
	txt_Size->Text = "";
	txt_Batterry->Text = "";
}
};
}
