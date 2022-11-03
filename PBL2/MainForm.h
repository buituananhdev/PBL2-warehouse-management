#pragma once
#include "View_Form.h"

namespace PBL2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		Form^ Main_Form;
		MainForm(Form^ tmpForm)
		{
			Main_Form = tmpForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MainForm(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ xemToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ thêmToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ xóaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ cậpNhậtToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tìmKiếmToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sắpXếpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nhậpKhoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ xuấtKhoToolStripMenuItem;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->xemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thêmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->xóaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cậpNhậtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tìmKiếmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sắpXếpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nhậpKhoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->xuấtKhoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gold;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 495);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(932, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->xemToolStripMenuItem,
					this->thêmToolStripMenuItem, this->xóaToolStripMenuItem, this->toolStripMenuItem1, this->cậpNhậtToolStripMenuItem, this->tìmKiếmToolStripMenuItem,
					this->sắpXếpToolStripMenuItem, this->nhậpKhoToolStripMenuItem, this->xuấtKhoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(932, 36);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// xemToolStripMenuItem
			// 
			this->xemToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xemToolStripMenuItem->Name = L"xemToolStripMenuItem";
			this->xemToolStripMenuItem->Size = System::Drawing::Size(65, 32);
			this->xemToolStripMenuItem->Text = L"&Xem";
			this->xemToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::xemToolStripMenuItem_Click);
			// 
			// thêmToolStripMenuItem
			// 
			this->thêmToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->thêmToolStripMenuItem->Name = L"thêmToolStripMenuItem";
			this->thêmToolStripMenuItem->Size = System::Drawing::Size(74, 32);
			this->thêmToolStripMenuItem->Text = L"&Thêm";
			// 
			// xóaToolStripMenuItem
			// 
			this->xóaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xóaToolStripMenuItem->Name = L"xóaToolStripMenuItem";
			this->xóaToolStripMenuItem->Size = System::Drawing::Size(60, 32);
			this->xóaToolStripMenuItem->Text = L"&Xóa";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(23, 32);
			this->toolStripMenuItem1->Text = L"&";
			// 
			// cậpNhậtToolStripMenuItem
			// 
			this->cậpNhậtToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cậpNhậtToolStripMenuItem->Name = L"cậpNhậtToolStripMenuItem";
			this->cậpNhậtToolStripMenuItem->Size = System::Drawing::Size(104, 32);
			this->cậpNhậtToolStripMenuItem->Text = L"&Cập nhật";
			// 
			// tìmKiếmToolStripMenuItem
			// 
			this->tìmKiếmToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tìmKiếmToolStripMenuItem->Name = L"tìmKiếmToolStripMenuItem";
			this->tìmKiếmToolStripMenuItem->Size = System::Drawing::Size(105, 32);
			this->tìmKiếmToolStripMenuItem->Text = L"&Tìm kiếm";
			// 
			// sắpXếpToolStripMenuItem
			// 
			this->sắpXếpToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sắpXếpToolStripMenuItem->Name = L"sắpXếpToolStripMenuItem";
			this->sắpXếpToolStripMenuItem->Size = System::Drawing::Size(95, 32);
			this->sắpXếpToolStripMenuItem->Text = L"&Sắp xếp";
			// 
			// nhậpKhoToolStripMenuItem
			// 
			this->nhậpKhoToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nhậpKhoToolStripMenuItem->Name = L"nhậpKhoToolStripMenuItem";
			this->nhậpKhoToolStripMenuItem->Size = System::Drawing::Size(112, 32);
			this->nhậpKhoToolStripMenuItem->Text = L"&Nhập kho";
			// 
			// xuấtKhoToolStripMenuItem
			// 
			this->xuấtKhoToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xuấtKhoToolStripMenuItem->Name = L"xuấtKhoToolStripMenuItem";
			this->xuấtKhoToolStripMenuItem->Size = System::Drawing::Size(104, 32);
			this->xuấtKhoToolStripMenuItem->Text = L"&Xuất kho";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 541);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MainForm";
			this->Text = L"Manage Application";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void xemToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	View_Form^ tmpView_Form = gcnew View_Form(this);
	tmpView_Form->Show();
}
};
}
