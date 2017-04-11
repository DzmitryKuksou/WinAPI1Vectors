#pragma once

namespace UI_Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  SaveResultToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;

	protected:

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveResultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(682, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openFileToolStripMenuItem,
					this->SaveResultToolStripMenuItem, this->toolStripSeparator1, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->fileToolStripMenuItem->Text = L"Файл";
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->openFileToolStripMenuItem->Text = L"Открыть файл";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFileToolStripMenuItem_Click);
			// 
			// SaveResultToolStripMenuItem
			// 
			this->SaveResultToolStripMenuItem->Name = L"SaveResultToolStripMenuItem";
			this->SaveResultToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->SaveResultToolStripMenuItem->Text = L"Сохранить результат";
			this->SaveResultToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::SaveResultToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(185, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->exitToolStripMenuItem->Text = L"Выход";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(209, 49);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(96, 20);
			this->numericUpDown1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Количество векторов";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(40, 113);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(289, 178);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(209, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Найти векторы";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(352, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(352, 113);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(288, 178);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(126, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введённые векторы";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(427, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Коллинеарные векторы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(367, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Размер пространства";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(516, 49);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(96, 20);
			this->numericUpDown2->TabIndex = 10;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 346);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Визуал. Лаб. №2. Вариант 10. Коллинеарные векторы";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void textBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8) || (e->KeyChar == ' ') || (e->KeyChar == (char)Keys::Enter)) return;
			
			e->Handled = true; 
		}

				void SearchVectors(array<int, 2>^ &A, int size, int sizeprostr, String^ &str)
				 {
					 int *mashelp = new int[size]; 
					 for (int i = 0; i < size; i++) mashelp[i] = 0; 
					 for (int i = 0; i < size; i++) 
					 {
						 if (mashelp[i] != 0) continue; 
						 else 
						 {
							 for (int j = i+1; j < size; j++) 
							 {
								 if (mashelp[i] != 0) continue; 
								 else
								 {
									 double mod1 = 0.0, mod2 = 0.0, abs_scal = 0.0; 
									 for (int k = 0; k < sizeprostr; k++) {
										 mod1 += A[i, k] * A[i, k];
										 mod2 += A[j, k] * A[j, k];
										 abs_scal += A[i, k] * A[j, k];
									 }
									 mod1 = Math::Sqrt(mod1);
									 mod2 = Math::Sqrt(mod2);
									 abs_scal = Math::Abs(abs_scal);
									 if (mod1*mod2)
									 {
										 if (Math::Abs(abs_scal / (mod1*mod2) - 1.0) <= 0.001)
										 {
											 str = str->Format(str + "( ");
											 for (int k = 0; k < sizeprostr; k++) {
												 str = str->Format(str + "{0} ", A[i, k]);
											 }
											 str = str->Format(str + ") ( "); 
											 for (int k = 0; k < sizeprostr; k++) {
												 str = str->Format(str + "{0} ", A[j, k]);
											 }
											 str = str->Format(str + ") "); 
											 mashelp[i] = i; 
											 mashelp[j] = j;
										 }
									 }
								 }
							 }
							 if (str != "") str = str->Format(str + "\r\n");
						 }
					 }
				 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int size = System::Convert::ToInt32(numericUpDown1->Value); 
		int sizeprostr = System::Convert::ToInt32(numericUpDown2->Value); 
		if (textBox1->Lines->Length == 0) 
		{
			MessageBox::Show("Векторы не введены", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; 
		}
				if (textBox1->Lines->Length != size)
		{
			MessageBox::Show("Количество векторов не совпадает с введённым", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; 
		}

		String^ str = ""; 
		array<Char>^ ar; 
		ar = gcnew array<Char>(1); 
		ar[0] = ' '; 
		array<int, 2>^ A;
		A = gcnew array<int, 2>(size, sizeprostr); 
		array<String^>^ as; 
		for (int i = 0; i < size; i++) 
		{
			as = textBox1->Lines[i]->Split(ar); 
			for (int i = 0; i < size; i++)
				{
				if (as->Length != sizeprostr || as[0] == "") 
					{
					MessageBox::Show("Не введены все данные данные для векторов или количество данных превышает определённое!\nОбработка невозможна", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return; 
					}
				}
			for (int j = 0; j < sizeprostr; j++)
				A[i, j] = Convert::ToInt32(as[j]);
		}
		SearchVectors(A, size, sizeprostr, str);
		if(str == "") str = str->Format(str + "Коллинеарные векторы отсутствуют"); 
		textBox2->Text = str; 
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = "";
		textBox2->Text = "";
		numericUpDown1->Value = 0;
		numericUpDown2->Value = 1;
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close(); 
	}

	private: System::Void openFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		
		System::Windows::Forms::DialogResult dr; 
		String^ fn; 
		openFileDialog1->FileName = String::Empty; 
		dr = openFileDialog1->ShowDialog(); 
		if (dr == System::Windows::Forms::DialogResult::OK) 
		{
			fn = openFileDialog1->FileName; 
			try
			{
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(fn); 
				textBox1->Text = sr->ReadToEnd();
				sr->Close(); 
			}
			catch (System::IO::FileLoadException^ e) // 
			{
				MessageBox::Show("Ошибка ввода:\n" + e->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void SaveResultToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult dr; 
		String^ fn; 
		dr = saveFileDialog1->ShowDialog(); 
		if (dr == System::Windows::Forms::DialogResult::OK) 
		{
			fn = saveFileDialog1->FileName; 
			try
			{
				System::IO::FileInfo^ fi = gcnew System::IO::FileInfo(fn); 
				System::IO::StreamWriter^ sw = fi->CreateText(); 
				sw->Write(textBox2->Text);
				sw->Close(); 

			}
			catch (System::IO::IOException^ e) 
			{
				MessageBox::Show(e->ToString(), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
};
}
