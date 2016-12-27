#include "AddItem.h"

#pragma once

namespace Organizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Item_Name;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Category;
	private: System::Windows::Forms::ToolStripMenuItem^  addNewItemToolStripMenuItem;
	private: System::Windows::Forms::Button^  btnAddNew;
	private: System::Windows::Forms::Button^  btnClose;

	public:


		DataSet^dsList;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  MyGrid;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewItemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MyGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Item_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Category = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAddNew = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(484, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addNewItemToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// addNewItemToolStripMenuItem
			// 
			this->addNewItemToolStripMenuItem->Name = L"addNewItemToolStripMenuItem";
			this->addNewItemToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->addNewItemToolStripMenuItem->Text = L"Add New Item";
			this->addNewItemToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addNewItemToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// MyGrid
			// 
			this->MyGrid->AllowUserToAddRows = false;
			this->MyGrid->AllowUserToDeleteRows = false;
			this->MyGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MyGrid->Location = System::Drawing::Point(12, 56);
			this->MyGrid->Name = L"MyGrid";
			this->MyGrid->ReadOnly = true;
			this->MyGrid->Size = System::Drawing::Size(460, 294);
			this->MyGrid->TabIndex = 1;
			// 
			// Item_Name
			// 
			this->Item_Name->HeaderText = L"Item Name";
			this->Item_Name->Name = L"Item_Name";
			// 
			// Category
			// 
			this->Category->HeaderText = L"Category";
			this->Category->Name = L"Category";
			// 
			// btnAddNew
			// 
			this->btnAddNew->Location = System::Drawing::Point(12, 27);
			this->btnAddNew->Name = L"btnAddNew";
			this->btnAddNew->Size = System::Drawing::Size(105, 23);
			this->btnAddNew->TabIndex = 2;
			this->btnAddNew->Text = L"Add a New Item";
			this->btnAddNew->UseVisualStyleBackColor = true;
			this->btnAddNew->Click += gcnew System::EventHandler(this, &MyForm::btnAddNew_Click);
			// 
			// btnClose
			// 
			this->btnClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnClose->Location = System::Drawing::Point(355, 27);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(117, 23);
			this->btnClose->TabIndex = 3;
			this->btnClose->Text = L"Close the Organizer";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->btnAddNew;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnClose;
			this->ClientSize = System::Drawing::Size(484, 362);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnAddNew);
			this->Controls->Add(this->MyGrid);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyOrganizer";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		dsList = gcnew DataSet("list");
		this->dsList->ReadXml("Data.xml");
		this->MyGrid->DataSource = dsList;
		this->MyGrid->DataMember = "Item";
	}
private: System::Void addNewItemToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AddItem^AddItemWindow = gcnew AddItem();

	AddItemWindow->ShowDialog();
	this->dsList->Clear();
	this->dsList->ReadXml("Data.xml");
	MyGrid->DataSource = dsList;
	this->MyGrid->DataMember = "item";
}
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void btnAddNew_Click(System::Object^  sender, System::EventArgs^  e) {
	AddItem^AddItemWindow = gcnew AddItem();

	AddItemWindow->ShowDialog();
	this->dsList->Clear();
	this->dsList->ReadXml("Data.xml");
	MyGrid->DataSource = dsList;
	this->MyGrid->DataMember = "item";
}
};
}
