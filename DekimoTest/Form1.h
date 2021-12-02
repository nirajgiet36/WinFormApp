#pragma once
#include "MyForm.h"
#include "MyForm1.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		static int sizeOfListBox = 0;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label_Interval;
	private: System::Windows::Forms::Label^ label_Result;
	private: System::Windows::Forms::TextBox^ textBox_INTERVAL;
	private: System::Windows::Forms::TextBox^ textBox_RESULT;
	private: System::Windows::Forms::Button^ button_Quit;

	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
		   array<String^>^ listBoxItem;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label_Interval = (gcnew System::Windows::Forms::Label());
			this->label_Result = (gcnew System::Windows::Forms::Label());
			this->textBox_INTERVAL = (gcnew System::Windows::Forms::TextBox());
			this->textBox_RESULT = (gcnew System::Windows::Forms::TextBox());
			this->button_Quit = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(48, 37);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(209, 37);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 53);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(375, 37);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 53);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Edit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(539, 37);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 53);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Graph";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label_Interval
			// 
			this->label_Interval->AutoSize = true;
			this->label_Interval->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Interval->Location = System::Drawing::Point(72, 198);
			this->label_Interval->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_Interval->Name = L"label_Interval";
			this->label_Interval->Size = System::Drawing::Size(91, 25);
			this->label_Interval->TabIndex = 5;
			this->label_Interval->Text = L"Inverval :";
			// 
			// label_Result
			// 
			this->label_Result->AutoSize = true;
			this->label_Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Result->Location = System::Drawing::Point(83, 266);
			this->label_Result->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_Result->Name = L"label_Result";
			this->label_Result->Size = System::Drawing::Size(77, 25);
			this->label_Result->TabIndex = 6;
			this->label_Result->Text = L"Result :";
			// 
			// textBox_INTERVAL
			// 
			this->textBox_INTERVAL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_INTERVAL->Location = System::Drawing::Point(209, 194);
			this->textBox_INTERVAL->Margin = System::Windows::Forms::Padding(4);
			this->textBox_INTERVAL->Name = L"textBox_INTERVAL";
			this->textBox_INTERVAL->Size = System::Drawing::Size(143, 30);
			this->textBox_INTERVAL->TabIndex = 7;
			this->textBox_INTERVAL->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox_INTERVAL_keyPress);
			// 
			// textBox_RESULT
			// 
			this->textBox_RESULT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_RESULT->Location = System::Drawing::Point(209, 258);
			this->textBox_RESULT->Margin = System::Windows::Forms::Padding(4);
			this->textBox_RESULT->Name = L"textBox_RESULT";
			this->textBox_RESULT->Size = System::Drawing::Size(143, 30);
			this->textBox_RESULT->TabIndex = 8;
			// 
			// button_Quit
			// 
			this->button_Quit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Quit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Quit->Location = System::Drawing::Point(517, 244);
			this->button_Quit->Margin = System::Windows::Forms::Padding(4);
			this->button_Quit->Name = L"button_Quit";
			this->button_Quit->Size = System::Drawing::Size(140, 47);
			this->button_Quit->TabIndex = 9;
			this->button_Quit->Text = L"Quit";
			this->button_Quit->UseVisualStyleBackColor = true;
			this->button_Quit->Click += gcnew System::EventHandler(this, &Form1::button_Quit_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->InitialDirectory = L"C:\\Users\\niraj.roy\\source\\repos\\DekimoTest\\DekimoTest";
			this->openFileDialog1->Title = L"Open File";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"txt";
			this->saveFileDialog1->Filter = L"Text Files | *.txt";
			this->saveFileDialog1->InitialDirectory = L"C:\\Users\\niraj.roy\\source\\repos";
			this->saveFileDialog1->Title = L"Save File";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(691, 378);
			this->Controls->Add(this->button_Quit);
			this->Controls->Add(this->textBox_RESULT);
			this->Controls->Add(this->textBox_INTERVAL);
			this->Controls->Add(this->label_Result);
			this->Controls->Add(this->label_Interval);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/* Edit Button */
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		DekimoTest::MyForm^ f2 = gcnew DekimoTest::MyForm(this);
		f2->ListboxSent += gcnew DekimoTest::ListSentHandler(this, &CppCLRWinformsProjekt::Form1::OnListboxSent);
		f2->CancelSent += gcnew DekimoTest::cancelHandler(this, &CppCLRWinformsProjekt::Form1::OnCancelSent);
		f2->ShowDialog();
	}
		   /* Load Button */
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			openFileDialog1->ShowDialog();
			System::IO::StreamReader^ reader = gcnew  System::IO::StreamReader(openFileDialog1->FileName);
			if (textBox_INTERVAL->Text == "")
			{
				/* Set the default interval to 1 second*/
				do
				{
					textBox_RESULT->Text = (reader->ReadLine());
					System::Threading::Thread::Sleep(1000);
					System::Windows::Forms::Application::DoEvents();
				} while (reader->Peek() != -1);
				reader->Close();
			}
			else
			{
				do
				{
					textBox_RESULT->Text = (reader->ReadLine());
					System::Threading::Thread::Sleep((Convert::ToInt32(textBox_INTERVAL->Text) * 1000));
					System::Windows::Forms::Application::DoEvents();
				} while (reader->Peek() != -1);
				reader->Close();
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("No Valid list exists", "Error", MessageBoxButtons::OK, MessageBoxIcon::None);
		}

	}
		   /* Save Button */
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			saveFileDialog1->ShowDialog();
			System::IO::StreamWriter^ SaveFile = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);
			for (int i = 0; i < sizeOfListBox; i++)
			{
				SaveFile->WriteLine(listBoxItem[i]);
			}
			SaveFile->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("File not saved", "Error", MessageBoxButtons::OK, MessageBoxIcon::None);
		}
	}
		   /* Load Form Event */
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	 void OnListboxSent(System::Windows::Forms::ListBox^ listbox);

	private: System::Void textBox_INTERVAL_keyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		/* Allow only Numbers */
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8)
		{
			e->Handled = true;
		}
	}
		   void OnCancelSent();
	/* Graph Button */
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		DekimoTest::MyForm1^ f2 = gcnew DekimoTest::MyForm1(this);
		f2->ShowDialog();
	}
	/* Quit Button */
	private: System::Void button_Quit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Environment::Exit(1);
	}
};
}


void CppCLRWinformsProjekt::Form1::OnListboxSent(System::Windows::Forms::ListBox^ listbox)
{
	sizeOfListBox = listbox->Items->Count;
	listBoxItem = gcnew array<String^>(sizeOfListBox);
	for (int j = 0; j < listbox->Items->Count; j++)
	{
		listBoxItem[j] = Convert::ToString(listbox->Items[j]);
	}
	if (textBox_INTERVAL->Text == "")
	{
		/* Set the default interval to 1 second*/
		for (int i = 0; i < listbox->Items->Count; i++)
		{
			textBox_RESULT->Text = Convert::ToString(listbox->Items[i]);
			System::Threading::Thread::Sleep(1000);
			System::Windows::Forms::Application::DoEvents();
		}
	}
	else
	{
		for (int i = 0; i < listbox->Items->Count; i++)
		{
			textBox_RESULT->Text = Convert::ToString(listbox->Items[i]);
			System::Threading::Thread::Sleep((Convert::ToInt32(textBox_INTERVAL->Text) * 1000));
			System::Windows::Forms::Application::DoEvents();
		}
	}
	//throw gcnew System::NotImplementedException();
}


void CppCLRWinformsProjekt::Form1::OnCancelSent()
{
	System::IO::StreamReader^ reader = gcnew  System::IO::StreamReader("List.txt");
	if (textBox_INTERVAL->Text == "")
	{
		/* Set the default interval to 1 second*/
		do
		{
			textBox_RESULT->Text = (reader->ReadLine());
			System::Threading::Thread::Sleep(1000);
			System::Windows::Forms::Application::DoEvents();
		} while (reader->Peek() != -1);
		reader->Close();
	}
	else
	{
		do
		{
			textBox_RESULT->Text = (reader->ReadLine());
			System::Threading::Thread::Sleep((Convert::ToInt32(textBox_INTERVAL->Text) * 1000));
			System::Windows::Forms::Application::DoEvents();
		} while (reader->Peek() != -1);
		reader->Close();
	}
	//throw gcnew System::NotImplementedException();
}
