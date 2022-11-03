#pragma once
#include "Manage.h"

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
		void Load_Data_Of_Device(string filename) {
			string temp;
			int temp1;
			double temp2;
			ifstream data_lib;
			data_lib.open("db_laptop.txt");
			for (int i = 0; i < 100; i++)
			{
				if (data_lib.eof())
				{
					break;
				}
				getline(data_lib, temp, ',');
				list[i]->setID(temp);
				getline(data_lib, temp, ',');
				list[i]->setBrand(temp);
				getline(data_lib, temp, ',');
				list[i]->setColor(temp);
				getline(data_lib, temp, ',');
				list[i]->setBrand(temp);
				data_lib >> temp2;
				data_lib.ignore(1, ',');
				list[i]->setPriceF(temp2);
				data_lib >> temp1;
				data_lib.ignore(1, ',');
				list[i]->setAmount(temp1);
				data_lib >> temp1;
				data_lib.ignore(1, ',');
				list[i]->setSales(temp1);
				data_lib >> temp2;
				data_lib.ignore(1, ',');
				list[i]->setRevenue(temp2);
				getline(data_lib, temp, ',');
				list[i]->setStatus(temp);
				getline(data_lib, temp, ',');
				list[i]->setID(temp);
				getline(data_lib, temp, ',');
				list[i]->setCard(temp);
				getline(data_lib, temp, '\n');
				list[i]->setWeight(temp);
			}
			data_lib.close();
		}

		View_Form(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DataTable^ All_Device = gcnew DataTable();
	public:int IndexCounter = 1;
		  int turn = 1;
		  Form^ Main_Form;
		  View_Form(Form^ tmpForm)
		  {
			  Main_Form = tmpForm;
			  InitializeComponent();
			  if (turn)
			  {
				  Load_Data_Of_Device("db_laptop.csv");

			  }
			  for (int i = 0; i < 100; i++)
			  {
					  CreateNewRow();
			  }
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btn_Show_SmartWatch;
	private: System::Windows::Forms::Button^ btn_Show_Laptop;
	private: System::Windows::Forms::Button^ btn_Show_Smartphone;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(View_Form::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Show_SmartWatch = (gcnew System::Windows::Forms::Button());
			this->btn_Show_Laptop = (gcnew System::Windows::Forms::Button());
			this->btn_Show_Smartphone = (gcnew System::Windows::Forms::Button());
			this->btn_Back = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gold;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(999, 84);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(31, 228);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(933, 284);
			this->dataGridView1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_Show_SmartWatch);
			this->groupBox1->Controls->Add(this->btn_Show_Laptop);
			this->groupBox1->Controls->Add(this->btn_Show_Smartphone);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(209, 112);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(593, 100);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Chọn loại sản phẩm muốn xem thông tin";
			// 
			// btn_Show_SmartWatch
			// 
			this->btn_Show_SmartWatch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Show_SmartWatch->Location = System::Drawing::Point(399, 35);
			this->btn_Show_SmartWatch->Name = L"btn_Show_SmartWatch";
			this->btn_Show_SmartWatch->Size = System::Drawing::Size(176, 39);
			this->btn_Show_SmartWatch->TabIndex = 0;
			this->btn_Show_SmartWatch->Text = L"Smart Watch";
			this->btn_Show_SmartWatch->UseVisualStyleBackColor = true;
			// 
			// btn_Show_Laptop
			// 
			this->btn_Show_Laptop->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Show_Laptop->Location = System::Drawing::Point(230, 35);
			this->btn_Show_Laptop->Name = L"btn_Show_Laptop";
			this->btn_Show_Laptop->Size = System::Drawing::Size(145, 39);
			this->btn_Show_Laptop->TabIndex = 0;
			this->btn_Show_Laptop->Text = L"Laptop";
			this->btn_Show_Laptop->UseVisualStyleBackColor = true;
			// 
			// btn_Show_Smartphone
			// 
			this->btn_Show_Smartphone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Show_Smartphone->Location = System::Drawing::Point(34, 35);
			this->btn_Show_Smartphone->Name = L"btn_Show_Smartphone";
			this->btn_Show_Smartphone->Size = System::Drawing::Size(170, 39);
			this->btn_Show_Smartphone->TabIndex = 0;
			this->btn_Show_Smartphone->Text = L"Smart Phone";
			this->btn_Show_Smartphone->UseVisualStyleBackColor = true;
			// 
			// btn_Back
			// 
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_Back->Location = System::Drawing::Point(393, 518);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(221, 34);
			this->btn_Back->TabIndex = 3;
			this->btn_Back->Text = L"Quay lại";
			this->btn_Back->UseVisualStyleBackColor = true;
			this->btn_Back->Click += gcnew System::EventHandler(this, &View_Form::btn_Back_Click);
			// 
			// View_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 564);
			this->Controls->Add(this->btn_Back);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"View_Form";
			this->Text = L"View_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
public:void CreateNewRow() 
{
	
	
}
private: System::Void btn_Back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Main_Form->ShowDialog();
}
};
}
