#pragma once

namespace PBL2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Update_Form
	/// </summary>
	public ref class Update_Form : public System::Windows::Forms::Form
	{
	public:
		Form^ Main_Form;
		Update_Form(Form^ tmpForm)
		{
			Main_Form = tmpForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Update_Form(void)
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
		~Update_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_Clear;
	private: System::Windows::Forms::Button^ btn_Back;
	private: System::Windows::Forms::Button^ btn_Save;
	private: System::Windows::Forms::GroupBox^ groupBox1;
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
	private: System::Windows::Forms::ComboBox^ combo_box_txt_TypeofDV;
	private: System::Windows::Forms::Label^ label_ROM;
	private: System::Windows::Forms::TextBox^ txt_PriceE;
	private: System::Windows::Forms::TextBox^ txt_ROM;
	private: System::Windows::Forms::Label^ label3;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_Clear = (gcnew System::Windows::Forms::Button());
			this->btn_Back = (gcnew System::Windows::Forms::Button());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
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
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
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
			this->label1->Location = System::Drawing::Point(387, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(426, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"UPDATE PRODUCT";
			// 
			// btn_Clear
			// 
			this->btn_Clear->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Clear->Location = System::Drawing::Point(1018, 289);
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->Size = System::Drawing::Size(109, 40);
			this->btn_Clear->TabIndex = 8;
			this->btn_Clear->Text = L"Clear";
			this->btn_Clear->UseVisualStyleBackColor = true;
			// 
			// btn_Back
			// 
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Back->Location = System::Drawing::Point(1018, 349);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(109, 41);
			this->btn_Back->TabIndex = 6;
			this->btn_Back->Text = L"Back";
			this->btn_Back->UseVisualStyleBackColor = true;
			this->btn_Back->Click += gcnew System::EventHandler(this, &Update_Form::btn_Back_Click);
			// 
			// btn_Save
			// 
			this->btn_Save->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Save->Location = System::Drawing::Point(1018, 228);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(109, 41);
			this->btn_Save->TabIndex = 7;
			this->btn_Save->Text = L"Save";
			this->btn_Save->UseVisualStyleBackColor = true;
			this->btn_Save->Click += gcnew System::EventHandler(this, &Update_Form::btn_Save_Click);
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
			this->groupBox1->Location = System::Drawing::Point(77, 163);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(904, 299);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"General information";
			// 
			// txt_Size
			// 
			this->txt_Size->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Size->Location = System::Drawing::Point(640, 151);
			this->txt_Size->Name = L"txt_Size";
			this->txt_Size->Size = System::Drawing::Size(207, 27);
			this->txt_Size->TabIndex = 1;
			// 
			// label_Size
			// 
			this->label_Size->AutoSize = true;
			this->label_Size->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Size->Location = System::Drawing::Point(567, 150);
			this->label_Size->Name = L"label_Size";
			this->label_Size->Size = System::Drawing::Size(45, 25);
			this->label_Size->TabIndex = 0;
			this->label_Size->Text = L"Size";
			// 
			// txt_Card
			// 
			this->txt_Card->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Card->Location = System::Drawing::Point(640, 151);
			this->txt_Card->Name = L"txt_Card";
			this->txt_Card->Size = System::Drawing::Size(207, 27);
			this->txt_Card->TabIndex = 1;
			// 
			// label_Battery
			// 
			this->label_Battery->AutoSize = true;
			this->label_Battery->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Battery->Location = System::Drawing::Point(508, 194);
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
			this->labe_Card->Location = System::Drawing::Point(562, 152);
			this->labe_Card->Name = L"labe_Card";
			this->labe_Card->Size = System::Drawing::Size(50, 25);
			this->labe_Card->TabIndex = 0;
			this->labe_Card->Text = L"Card";
			// 
			// txt_Batterry
			// 
			this->txt_Batterry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Batterry->Location = System::Drawing::Point(640, 190);
			this->txt_Batterry->Name = L"txt_Batterry";
			this->txt_Batterry->Size = System::Drawing::Size(207, 27);
			this->txt_Batterry->TabIndex = 1;
			// 
			// label_RAM
			// 
			this->label_RAM->AutoSize = true;
			this->label_RAM->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_RAM->Location = System::Drawing::Point(560, 153);
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
			this->label_Weight->Location = System::Drawing::Point(540, 194);
			this->label_Weight->Name = L"label_Weight";
			this->label_Weight->Size = System::Drawing::Size(72, 25);
			this->label_Weight->TabIndex = 0;
			this->label_Weight->Text = L"Weight";
			// 
			// txt_Weight
			// 
			this->txt_Weight->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Weight->Location = System::Drawing::Point(640, 190);
			this->txt_Weight->Name = L"txt_Weight";
			this->txt_Weight->Size = System::Drawing::Size(207, 27);
			this->txt_Weight->TabIndex = 1;
			// 
			// txt_RAM
			// 
			this->txt_RAM->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_RAM->Location = System::Drawing::Point(640, 151);
			this->txt_RAM->Name = L"txt_RAM";
			this->txt_RAM->Size = System::Drawing::Size(207, 27);
			this->txt_RAM->TabIndex = 1;
			// 
			// combo_box_txt_TypeofDV
			// 
			this->combo_box_txt_TypeofDV->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->combo_box_txt_TypeofDV->FormattingEnabled = true;
			this->combo_box_txt_TypeofDV->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Smart Phone", L"Laptop", L"Smart Watch" });
			this->combo_box_txt_TypeofDV->Location = System::Drawing::Point(156, 61);
			this->combo_box_txt_TypeofDV->Name = L"combo_box_txt_TypeofDV";
			this->combo_box_txt_TypeofDV->Size = System::Drawing::Size(207, 28);
			this->combo_box_txt_TypeofDV->TabIndex = 2;
			// 
			// label_ROM
			// 
			this->label_ROM->AutoSize = true;
			this->label_ROM->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ROM->Location = System::Drawing::Point(558, 193);
			this->label_ROM->Name = L"label_ROM";
			this->label_ROM->Size = System::Drawing::Size(54, 25);
			this->label_ROM->TabIndex = 0;
			this->label_ROM->Text = L"ROM";
			// 
			// txt_PriceE
			// 
			this->txt_PriceE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_PriceE->Location = System::Drawing::Point(640, 106);
			this->txt_PriceE->Name = L"txt_PriceE";
			this->txt_PriceE->Size = System::Drawing::Size(207, 27);
			this->txt_PriceE->TabIndex = 1;
			// 
			// txt_ROM
			// 
			this->txt_ROM->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_ROM->Location = System::Drawing::Point(640, 191);
			this->txt_ROM->Name = L"txt_ROM";
			this->txt_ROM->Size = System::Drawing::Size(207, 27);
			this->txt_ROM->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(525, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Saleprice";
			// 
			// txt_PriceF
			// 
			this->txt_PriceF->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_PriceF->Location = System::Drawing::Point(640, 61);
			this->txt_PriceF->Name = L"txt_PriceF";
			this->txt_PriceF->Size = System::Drawing::Size(207, 27);
			this->txt_PriceF->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(496, 61);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Import Price";
			// 
			// txt_Color
			// 
			this->txt_Color->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Color->Location = System::Drawing::Point(156, 233);
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
			this->label6->Size = System::Drawing::Size(57, 25);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Color";
			// 
			// txt_Brand
			// 
			this->txt_Brand->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Brand->Location = System::Drawing::Point(156, 190);
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
			this->label5->Size = System::Drawing::Size(61, 25);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Brand";
			// 
			// txt_Name
			// 
			this->txt_Name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_Name->Location = System::Drawing::Point(156, 147);
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
			this->label4->Size = System::Drawing::Size(61, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(28, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 25);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Product Type";
			// 
			// txt_ID
			// 
			this->txt_ID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.8F));
			this->txt_ID->Location = System::Drawing::Point(156, 104);
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
			this->label2->Size = System::Drawing::Size(101, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Product ID";
			// 
			// Update_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 673);
			this->Controls->Add(this->btn_Clear);
			this->Controls->Add(this->btn_Back);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_Save);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Update_Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Update_Form";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btn_Save_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_Back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Main_Form->Show();
}
};
}
