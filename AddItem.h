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
	/// Summary for AddItem
	/// </summary>
	public ref class AddItem : public System::Windows::Forms::Form
	{
	public:
		AddItem(void)
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
		~AddItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtItem_Name;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtCategory;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtOrigin;

	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtCrew;

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
			this->txtItem_Name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCategory = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtOrigin = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtCrew = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtItem_Name
			// 
			this->txtItem_Name->Location = System::Drawing::Point(130, 59);
			this->txtItem_Name->Name = L"txtItem_Name";
			this->txtItem_Name->Size = System::Drawing::Size(100, 20);
			this->txtItem_Name->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tank:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Category:";
			// 
			// txtCategory
			// 
			this->txtCategory->Location = System::Drawing::Point(130, 88);
			this->txtCategory->Name = L"txtCategory";
			this->txtCategory->Size = System::Drawing::Size(100, 20);
			this->txtCategory->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(61, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Origin:";
			// 
			// txtOrigin
			// 
			this->txtOrigin->Location = System::Drawing::Point(130, 117);
			this->txtOrigin->Name = L"txtOrigin";
			this->txtOrigin->Size = System::Drawing::Size(100, 20);
			this->txtOrigin->TabIndex = 5;
			this->txtOrigin->TextChanged += gcnew System::EventHandler(this, &AddItem::txtOrigin_TextChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(179, 209);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 6;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddItem::btnAdd_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(38, 209);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddItem::btnCancel_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Crew:";
			// 
			// txtCrew
			// 
			this->txtCrew->Location = System::Drawing::Point(130, 147);
			this->txtCrew->Name = L"txtCrew";
			this->txtCrew->Size = System::Drawing::Size(100, 20);
			this->txtCrew->TabIndex = 9;
			// 
			// AddItem
			// 
			this->AcceptButton = this->btnAdd;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->txtCrew);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtOrigin);
			this->Controls->Add(this->txtCategory);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtItem_Name);
			this->Name = L"AddItem";
			this->Text = L"Add New Item";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	
	XmlDocument^DataFile = gcnew XmlDocument();
	DataFile->Load("Data.xml");
	XmlElement^NewItem = DataFile->CreateElement("item");
	NewItem->SetAttribute("Tank", this->txtItem_Name->Text); 
	NewItem->SetAttribute("Category", this->txtCategory->Text);
	NewItem->SetAttribute("Origin", this->txtOrigin->Text);
	NewItem->SetAttribute("Crew", this->txtCrew->Text);
	DataFile->DocumentElement->AppendChild(NewItem);
	DataFile->Save("Data.xml");
	Close();
}
private: System::Void txtOrigin_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
