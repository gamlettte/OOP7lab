#pragma once
#include "Array.h"

namespace lab7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dGwA;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridView^ dGwB;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridView^ dGwC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ SumB;
	private: System::Windows::Forms::Button^ ExtrB;
	private: System::Windows::Forms::Button^ MultB;
	private: System::Windows::Forms::Button^ tbScalar;
	private: System::Windows::Forms::TextBox^ tBInp;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ taScalar;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;



	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dGwA = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dGwB = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dGwC = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SumB = (gcnew System::Windows::Forms::Button());
			this->ExtrB = (gcnew System::Windows::Forms::Button());
			this->MultB = (gcnew System::Windows::Forms::Button());
			this->tbScalar = (gcnew System::Windows::Forms::Button());
			this->tBInp = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->taScalar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGwA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGwB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGwC))->BeginInit();
			this->SuspendLayout();
			// 
			// dGwA
			// 
			this->dGwA->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dGwA->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dGwA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGwA->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dGwA->Location = System::Drawing::Point(12, 131);
			this->dGwA->Name = L"dGwA";
			this->dGwA->RowHeadersWidth = 51;
			this->dGwA->RowTemplate->Height = 24;
			this->dGwA->Size = System::Drawing::Size(189, 375);
			this->dGwA->TabIndex = 2;
			this->dGwA->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dGwA_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"First Array";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 102;
			// 
			// dGwB
			// 
			this->dGwB->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dGwB->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dGwB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGwB->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column2 });
			this->dGwB->Location = System::Drawing::Point(328, 131);
			this->dGwB->Name = L"dGwB";
			this->dGwB->RowHeadersWidth = 51;
			this->dGwB->RowTemplate->Height = 24;
			this->dGwB->Size = System::Drawing::Size(189, 375);
			this->dGwB->TabIndex = 3;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Second Array";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 123;
			// 
			// dGwC
			// 
			this->dGwC->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dGwC->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dGwC->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGwC->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column3 });
			this->dGwC->Enabled = false;
			this->dGwC->Location = System::Drawing::Point(545, 131);
			this->dGwC->Name = L"dGwC";
			this->dGwC->RowHeadersWidth = 51;
			this->dGwC->RowTemplate->Height = 24;
			this->dGwC->Size = System::Drawing::Size(189, 375);
			this->dGwC->TabIndex = 4;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Result Array";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 115;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(523, 216);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"=";
			// 
			// SumB
			// 
			this->SumB->Location = System::Drawing::Point(228, 131);
			this->SumB->Name = L"SumB";
			this->SumB->Size = System::Drawing::Size(75, 77);
			this->SumB->TabIndex = 6;
			this->SumB->Text = L"+";
			this->SumB->UseVisualStyleBackColor = true;
			this->SumB->Click += gcnew System::EventHandler(this, &MyForm::SumB_Click);
			// 
			// ExtrB
			// 
			this->ExtrB->Location = System::Drawing::Point(228, 214);
			this->ExtrB->Name = L"ExtrB";
			this->ExtrB->Size = System::Drawing::Size(75, 77);
			this->ExtrB->TabIndex = 7;
			this->ExtrB->Text = L"-";
			this->ExtrB->UseVisualStyleBackColor = true;
			this->ExtrB->Click += gcnew System::EventHandler(this, &MyForm::ExtrB_Click);
			// 
			// MultB
			// 
			this->MultB->Location = System::Drawing::Point(228, 304);
			this->MultB->Name = L"MultB";
			this->MultB->Size = System::Drawing::Size(75, 77);
			this->MultB->TabIndex = 8;
			this->MultB->Text = L"*";
			this->MultB->UseVisualStyleBackColor = true;
			this->MultB->Click += gcnew System::EventHandler(this, &MyForm::MultB_Click);
			// 
			// tbScalar
			// 
			this->tbScalar->Location = System::Drawing::Point(328, 90);
			this->tbScalar->Name = L"tbScalar";
			this->tbScalar->Size = System::Drawing::Size(75, 35);
			this->tbScalar->TabIndex = 9;
			this->tbScalar->Text = L"*";
			this->tbScalar->UseVisualStyleBackColor = true;
			this->tbScalar->Click += gcnew System::EventHandler(this, &MyForm::tbScalar_Click);
			// 
			// tBInp
			// 
			this->tBInp->Location = System::Drawing::Point(89, 103);
			this->tBInp->Name = L"tBInp";
			this->tBInp->Size = System::Drawing::Size(112, 22);
			this->tBInp->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(409, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 22);
			this->textBox1->TabIndex = 12;
			// 
			// taScalar
			// 
			this->taScalar->Location = System::Drawing::Point(12, 90);
			this->taScalar->Name = L"taScalar";
			this->taScalar->Size = System::Drawing::Size(71, 35);
			this->taScalar->TabIndex = 11;
			this->taScalar->Text = L"*";
			this->taScalar->UseVisualStyleBackColor = true;
			this->taScalar->Click += gcnew System::EventHandler(this, &MyForm::taScalar_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Downscale";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Upscale";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(328, 61);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Downscale";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(328, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Upscale";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(807, 559);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->taScalar);
			this->Controls->Add(this->tBInp);
			this->Controls->Add(this->tbScalar);
			this->Controls->Add(this->MultB);
			this->Controls->Add(this->ExtrB);
			this->Controls->Add(this->SumB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dGwC);
			this->Controls->Add(this->dGwB);
			this->Controls->Add(this->dGwA);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGwA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGwB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGwC))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void SumB_Click(System::Object^ sender, System::EventArgs^ e) {
		MyArray a (dGwA->RowCount-1);
		MyArray b(dGwB->RowCount-1);
		a >> dGwA;
		b >> dGwB;
		a+b << dGwC;
	}
private: System::Void ExtrB_Click(System::Object^ sender, System::EventArgs^ e) {
	MyArray a(dGwA->RowCount - 1);
	MyArray b(dGwB->RowCount - 1);
	a >> dGwA;
	b >> dGwB;
	a - b << dGwC;
}
private: System::Void MultB_Click(System::Object^ sender, System::EventArgs^ e) {
	MyArray a(dGwA->RowCount - 1);
	MyArray b(dGwB->RowCount - 1);
	a >> dGwA;
	b >> dGwB;
	a * b << dGwC;
	a 
}
private: System::Void tbScalar_Click(System::Object^ sender, System::EventArgs^ e) {
	MyArray a(dGwB->RowCount - 1);
	a >> dGwB;
	a * System::Convert::ToInt16(textBox1->Text) << dGwB;
}
private: System::Void taScalar_Click(System::Object^ sender, System::EventArgs^ e) {
	MyArray a(dGwA->RowCount - 1);
	a >> dGwA;
	a * System::Convert::ToInt16(tBInp->Text) << dGwA;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MyArray a(dGwA->RowCount - 1);
	a >> dGwA;
	a.DownScaleSelectionSort();
	a << dGwA;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyArray a(dGwA->RowCount - 1);
	a >> dGwA;
	a.UpScaleBubbleSort();
	a << dGwA;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyArray a(dGwB->RowCount - 1);
	a >> dGwB;
	a.DownScaleSelectionSort();
	a << dGwB;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyArray a(dGwB->RowCount - 1);
	a >> dGwB;
	a.UpScaleBubbleSort();
	a << dGwB;
}
private: System::Void dGwA_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
