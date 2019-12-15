#pragma once
#include "Dict.h"
namespace ChastDict {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Dict* d;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			d = new Dict();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			//delete d;
		}
	private: System::Windows::Forms::TextBox^ TextDisplayTB;
	private: System::Windows::Forms::TextBox^ PathTB;

	private: System::Windows::Forms::Button^ Load;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ DictFromFileTB;
	private: System::Windows::Forms::Button^ FromFile;




	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::TextBox^ WordTB;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TextDisplayTB = (gcnew System::Windows::Forms::TextBox());
			this->PathTB = (gcnew System::Windows::Forms::TextBox());
			this->Load = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DictFromFileTB = (gcnew System::Windows::Forms::TextBox());
			this->FromFile = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->WordTB = (gcnew System::Windows::Forms::TextBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TextDisplayTB
			// 
			this->TextDisplayTB->Dock = System::Windows::Forms::DockStyle::Right;
			this->TextDisplayTB->Location = System::Drawing::Point(606, 0);
			this->TextDisplayTB->Multiline = true;
			this->TextDisplayTB->Name = L"TextDisplayTB";
			this->TextDisplayTB->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TextDisplayTB->Size = System::Drawing::Size(203, 231);
			this->TextDisplayTB->TabIndex = 0;
			// 
			// PathTB
			// 
			this->PathTB->Location = System::Drawing::Point(6, 33);
			this->PathTB->Name = L"PathTB";
			this->PathTB->Size = System::Drawing::Size(255, 20);
			this->PathTB->TabIndex = 1;
			// 
			// Load
			// 
			this->Load->Location = System::Drawing::Point(186, 59);
			this->Load->Name = L"Load";
			this->Load->Size = System::Drawing::Size(75, 23);
			this->Load->TabIndex = 2;
			this->Load->Text = L"Загрузить";
			this->Load->UseVisualStyleBackColor = true;
			this->Load->Click += gcnew System::EventHandler(this, &MyForm::Load_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Путь к файлу с текстом";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Путь к файлу со словарем";
			// 
			// DictFromFileTB
			// 
			this->DictFromFileTB->Location = System::Drawing::Point(9, 33);
			this->DictFromFileTB->Name = L"DictFromFileTB";
			this->DictFromFileTB->Size = System::Drawing::Size(254, 20);
			this->DictFromFileTB->TabIndex = 5;
			// 
			// FromFile
			// 
			this->FromFile->Location = System::Drawing::Point(188, 59);
			this->FromFile->Name = L"FromFile";
			this->FromFile->Size = System::Drawing::Size(75, 23);
			this->FromFile->TabIndex = 6;
			this->FromFile->Text = L"Загрузить";
			this->FromFile->UseVisualStyleBackColor = true;
			this->FromFile->Click += gcnew System::EventHandler(this, &MyForm::FromFile_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Red;
			this->groupBox2->Controls->Add(this->DictFromFileTB);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->FromFile);
			this->groupBox2->Location = System::Drawing::Point(307, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(289, 100);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Загрузить словарь";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Red;
			this->groupBox3->Controls->Add(this->PathTB);
			this->groupBox3->Controls->Add(this->Load);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Location = System::Drawing::Point(12, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(289, 100);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Создать словарь";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Red;
			this->groupBox1->Controls->Add(this->search);
			this->groupBox1->Controls->Add(this->WordTB);
			this->groupBox1->Location = System::Drawing::Point(12, 118);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(584, 100);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Поиск слова в словаре";
			// 
			// WordTB
			// 
			this->WordTB->Location = System::Drawing::Point(73, 28);
			this->WordTB->Name = L"WordTB";
			this->WordTB->Size = System::Drawing::Size(188, 20);
			this->WordTB->TabIndex = 0;
			// 
			// search
			// 
			this->search->Location = System::Drawing::Point(186, 54);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(75, 23);
			this->search->TabIndex = 1;
			this->search->Text = L"Поиск";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &MyForm::Search_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(809, 231);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->TextDisplayTB);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Load_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			try
			{
				d->read(PathTB->Text);
				TextDisplayTB->Text = d->getMap();
			}
			catch (...) 
			{
				MessageBox::Show("Ошибка при попытке чтения файла по пути " + PathTB->Text);
			}
		}

		private: System::Void FromFile_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			try
			{
				d->readFromFile(DictFromFileTB->Text);
				TextDisplayTB->Text = d->getMap();
			}
			catch (...)
			{
				MessageBox::Show("Ошибка при попытке чтения файла по пути " + DictFromFileTB->Text);
			}
		}

		private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (d->findWord(WordTB->Text) != -1)
				MessageBox::Show(WordTB->Text + "\t" + d->findWord(WordTB->Text).ToString());
			else 
				MessageBox::Show("Слова нету в словаре");
		}
};
}
