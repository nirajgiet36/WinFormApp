#pragma once

namespace DekimoTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;

	/* create a delegate */
	public delegate void ListSentHandler(System::Windows::Forms::ListBox^ listbox);
	public delegate void cancelHandler();
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		public: event ListSentHandler^ ListboxSent;
		public: event cancelHandler^ CancelSent;
		public: static int sizeOfNumberList;
		Form^ obj;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		MyForm(Form^ obj1)
		{
			obj = obj1;
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
	private: System::Windows::Forms::ListBox^ NumberList;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton_Sum;
	private: System::Windows::Forms::RadioButton^ radioButton_Ave;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton_Unsort;
	private: System::Windows::Forms::RadioButton^ radioButton_Descending;
	private: System::Windows::Forms::RadioButton^ radioButton_Ascending;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;

	private: array<String^>^ listBoxCpoy;
	private: array<String^>^ listBoxCpoy1;
	private: array<Double^>^ listBoxDouble;

	private: NumberFormatInfo^ provider = gcnew NumberFormatInfo();

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
			this->NumberList = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton_Sum = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Ave = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton_Unsort = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Descending = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Ascending = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// NumberList
			// 
			this->NumberList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NumberList->FormattingEnabled = true;
			this->NumberList->ItemHeight = 17;
			this->NumberList->Location = System::Drawing::Point(12, 12);
			this->NumberList->Name = L"NumberList";
			this->NumberList->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->NumberList->Size = System::Drawing::Size(139, 242);
			this->NumberList->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(442, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 36);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(442, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 36);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton_Sum);
			this->groupBox1->Controls->Add(this->radioButton_Ave);
			this->groupBox1->Location = System::Drawing::Point(440, 128);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(136, 73);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ave_Sum";
			// 
			// radioButton_Sum
			// 
			this->radioButton_Sum->AutoSize = true;
			this->radioButton_Sum->Location = System::Drawing::Point(16, 49);
			this->radioButton_Sum->Name = L"radioButton_Sum";
			this->radioButton_Sum->Size = System::Drawing::Size(46, 17);
			this->radioButton_Sum->TabIndex = 1;
			this->radioButton_Sum->TabStop = true;
			this->radioButton_Sum->Text = L"Sum";
			this->radioButton_Sum->UseVisualStyleBackColor = true;
			this->radioButton_Sum->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_Sum_CheckedChanged);
			// 
			// radioButton_Ave
			// 
			this->radioButton_Ave->AutoSize = true;
			this->radioButton_Ave->Location = System::Drawing::Point(16, 22);
			this->radioButton_Ave->Name = L"radioButton_Ave";
			this->radioButton_Ave->Size = System::Drawing::Size(65, 17);
			this->radioButton_Ave->TabIndex = 0;
			this->radioButton_Ave->TabStop = true;
			this->radioButton_Ave->Text = L"Average";
			this->radioButton_Ave->UseVisualStyleBackColor = true;
			this->radioButton_Ave->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_Ave_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton_Unsort);
			this->groupBox2->Controls->Add(this->radioButton_Descending);
			this->groupBox2->Controls->Add(this->radioButton_Ascending);
			this->groupBox2->Location = System::Drawing::Point(440, 218);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(131, 103);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Sorting";
			// 
			// radioButton_Unsort
			// 
			this->radioButton_Unsort->AutoSize = true;
			this->radioButton_Unsort->Location = System::Drawing::Point(7, 76);
			this->radioButton_Unsort->Name = L"radioButton_Unsort";
			this->radioButton_Unsort->Size = System::Drawing::Size(56, 17);
			this->radioButton_Unsort->TabIndex = 2;
			this->radioButton_Unsort->TabStop = true;
			this->radioButton_Unsort->Text = L"Unsort";
			this->radioButton_Unsort->UseVisualStyleBackColor = true;
			this->radioButton_Unsort->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_Unsort_CheckedChanged);
			// 
			// radioButton_Descending
			// 
			this->radioButton_Descending->AutoSize = true;
			this->radioButton_Descending->Location = System::Drawing::Point(7, 49);
			this->radioButton_Descending->Name = L"radioButton_Descending";
			this->radioButton_Descending->Size = System::Drawing::Size(82, 17);
			this->radioButton_Descending->TabIndex = 1;
			this->radioButton_Descending->TabStop = true;
			this->radioButton_Descending->Text = L"Descending";
			this->radioButton_Descending->UseVisualStyleBackColor = true;
			this->radioButton_Descending->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_Descending_CheckedChanged);
			// 
			// radioButton_Ascending
			// 
			this->radioButton_Ascending->AutoSize = true;
			this->radioButton_Ascending->Location = System::Drawing::Point(7, 22);
			this->radioButton_Ascending->Name = L"radioButton_Ascending";
			this->radioButton_Ascending->Size = System::Drawing::Size(75, 17);
			this->radioButton_Ascending->TabIndex = 0;
			this->radioButton_Ascending->TabStop = true;
			this->radioButton_Ascending->Text = L"Ascending";
			this->radioButton_Ascending->UseVisualStyleBackColor = true;
			this->radioButton_Ascending->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_Ascending_CheckedChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(199, 308);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 38);
			this->button1->TabIndex = 15;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(289, 182);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(97, 20);
			this->textBox4->TabIndex = 23;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(289, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(97, 20);
			this->textBox3->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(289, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(97, 20);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(289, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(97, 20);
			this->textBox1->TabIndex = 20;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(195, 181);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 23);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Max :";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(195, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 23);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Min :";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(195, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 23);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Result :";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(195, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 23);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Value :";
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(324, 308);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 38);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Cancel";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(588, 382);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->NumberList);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	/* OK Button */
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		obj->Show();
		ListboxSent(NumberList);
	}


	/* Add Button */
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox1->Text == "")
		{
			MessageBox::Show("Please Enter a Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::None);
		}
		else
		{
			try
			{
				/* Check the validity of the Input */
				String^ checkStr = textBox1->Text;
				int countdot = 0;
				for (int i = 0; i < checkStr->Length; i++)
				{
					if (Char::IsDigit(checkStr[i]) || checkStr[i] == ',' || checkStr[0] == '-' || checkStr[0] == '+')
					{
						if (checkStr[i] == ',')
						{
							countdot++;
						}
					}
					else
					{
						throw gcnew System::Exception();
					}
				}
				if (countdot > 1)
				{
					throw gcnew System::Exception();
				}

				int exist = 0;
				for (int i = 0; i < NumberList->Items->Count; i++)
				{
					if (Convert::ToDouble(NumberList->Items[i]) == Convert::ToDouble(textBox1->Text))
					{
						exist++;
						break;
					}
				}
				if (exist == 0)
				{
					NumberList->Items->Add(textBox1->Text);
					textBox1->Text = "";
				}
				else
				{
					MessageBox::Show("Number already exists", "Error", MessageBoxButtons::OK, MessageBoxIcon::None);
					textBox1->Text = "";
				}
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Invalid Input", "Error", MessageBoxButtons::OK, MessageBoxIcon::None);
				textBox1->Text = "";
			}
		}
		/* Find Min value of the listbox */
		if (NumberList->Items->Count > 0)
		{
			int min_location = 0;
			for (int i = 1; i < NumberList->Items->Count; i++)
			{
				if (Convert::ToDouble(NumberList->Items[i]) < Convert::ToDouble(NumberList->Items[min_location]))
				{
					min_location = i;
				}
			}
			textBox3->Text = Convert::ToString(NumberList->Items[min_location]);
			/* Find Max value of the listbox */
			int max_location = 0;
			for (int i = 1; i < NumberList->Items->Count; i++)
			{
				if (Convert::ToDouble(NumberList->Items[i]) > Convert::ToDouble(NumberList->Items[max_location]))
				{
					max_location = i;
				}
			}
			textBox4->Text = Convert::ToString(NumberList->Items[max_location]);
		}
		/* Make a copy of Listbox items */
		sizeOfNumberList = NumberList->Items->Count;
		listBoxCpoy = gcnew array<String^>(sizeOfNumberList);
		for (int j = 0; j < NumberList->Items->Count; j++)
		{
			listBoxCpoy[j] = Convert::ToString(NumberList->Items[j]);
		}
	}


	/* Delete Button */
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (NumberList->Items->Count > 0)
		{
			for (int i = NumberList->SelectedIndices->Count - 1; i >= 0; i--)
			{
				int idx = NumberList->SelectedIndices[i];
				NumberList->Items->RemoveAt(idx);
			}
		}
		else
		{
			MessageBox::Show("Add a Number first", "Error", MessageBoxButtons::OK, MessageBoxIcon::None);
		}
		/* Fill Min and Max Fields */
		if (NumberList->Items->Count > 0)
		{
			/* Find Min value of the listbox */
			int min_location = 0;
			for (int i = 1; i < NumberList->Items->Count; i++)
			{
				if (Convert::ToDouble(NumberList->Items[i]) < Convert::ToDouble(NumberList->Items[min_location]))
				{
					min_location = i;
				}
			}
			textBox3->Text = Convert::ToString(NumberList->Items[min_location]);
			/* Find Max value of the listbox */
			int max_location = 0;
			for (int i = 1; i < NumberList->Items->Count; i++)
			{
				if (Convert::ToDouble(NumberList->Items[i]) > Convert::ToDouble(NumberList->Items[max_location]))
				{
					max_location = i;
				}
			}
			textBox4->Text = Convert::ToString(NumberList->Items[max_location]);
		}
		else
		{
			textBox3->Text = "";
			textBox4->Text = "";
		}
		/* Make a copy of Listbox items */
		sizeOfNumberList = NumberList->Items->Count;
		listBoxCpoy = gcnew array<String^>(sizeOfNumberList);
		for (int j = 0; j < NumberList->Items->Count; j++)
		{
			listBoxCpoy[j] = Convert::ToString(NumberList->Items[j]);
		}
	}


	/* Average Radio Button */
	private: System::Void radioButton_Ave_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (NumberList->Items->Count > 0)
		{
			double average = 0.0;
			double sum = 0.0;
			for (int i = 0; i < NumberList->Items->Count; i++)
			{
				sum = sum + Convert::ToDouble(NumberList->Items[i]);
			}
			average = sum / NumberList->Items->Count;
			textBox2->Text = Convert::ToString(average);
		}
		else
		{
			textBox2->Text = "";
		}
	}


	/* Sum Radio Button */
	private: System::Void radioButton_Sum_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (NumberList->Items->Count > 0)
		{
			double sum = 0.0;
			for (int i = 0; i < NumberList->Items->Count; i++)
			{
				sum = sum + Convert::ToDouble(NumberList->Items[i]);
			}
			textBox2->Text = Convert::ToString(sum);
		}
		else
		{
			textBox2->Text = "";
		}
	}


	/* Ascending Radio Button */
	private: System::Void radioButton_Ascending_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		bool swap = true;
		double temp;
		for (int i = 0; i < NumberList->Items->Count; i++)
		{
			swap = false;
			for (int j = 0; j < NumberList->Items->Count - 1; j++)
			{
				if (Convert::ToDouble(NumberList->Items[j]) > Convert::ToDouble(NumberList->Items[j + 1]))
				{
					temp = Convert::ToDouble(NumberList->Items[j]);
					NumberList->Items[j] = NumberList->Items[j + 1];
					NumberList->Items[j + 1] = Convert::ToString(temp);
					swap = true;
				}
			}
			/* If no two elements are swapped by inner loop then break */
			if (swap == false)
			{
				break;
			}
		}
	}


	/* Descending Radio Button */
	private: System::Void radioButton_Descending_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		bool swap = true;
		double temp;
		for (int i = 0; i < NumberList->Items->Count; i++)
		{
			swap = false;
			for (int j = 0; j < NumberList->Items->Count - 1; j++)
			{
				if (Convert::ToDouble(NumberList->Items[j]) < Convert::ToDouble(NumberList->Items[j + 1]))
				{
					temp = Convert::ToDouble(NumberList->Items[j]);
					NumberList->Items[j] = NumberList->Items[j + 1];
					NumberList->Items[j + 1] = Convert::ToString(temp);
					swap = true;
				}
			}
			/* If no two elements are swapped by inner loop then break */
			if (swap == false)
			{
				break;
			}
		}
	}


	/* Unsort Radio Button */
	private: System::Void radioButton_Unsort_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		/* Make a copy of Listbox items */
		int sizeOfNumberList1 = NumberList->Items->Count;
		listBoxCpoy1 = gcnew array<String^>(sizeOfNumberList1);
		for (int j = 0; j < NumberList->Items->Count; j++)
		{
			listBoxCpoy1[j] = Convert::ToString(NumberList->Items[j]);
		}
		for (int i = 0; i < sizeOfNumberList; i++)
		{
			for (int k = 0; k < NumberList->Items->Count; k++)
			{
				if (Convert::ToDouble(listBoxCpoy[i]) == Convert::ToDouble(listBoxCpoy1[k]))
				{
					NumberList->Items[i] = listBoxCpoy[i];
					break;
				}
			}
		}
	}


	/* Value Key Press */
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		/* Allow only Numbers */
		/*if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8)
		{
			e->Handled = true;
		}*/

	}


	/* Cancel Button */
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		obj->Show();
		CancelSent();
	}
};
}
