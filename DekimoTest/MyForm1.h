#pragma once

namespace DekimoTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		MyForm1(Form^ obj1)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: NumberFormatInfo^ provider = gcnew NumberFormatInfo();

	private: array<String^>^ graphData;
	private: const int SIZE = 100;
	private: int file_size = 0;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(640, 54);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(120, 114);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sorting";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(8, 80);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(71, 21);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Unsort";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(8, 52);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(104, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Descending";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(8, 23);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(95, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"Ascending";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(229, 427);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(381, 427);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 39);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// chart1
			// 
			this->chart1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			this->chart1->BorderSkin->BorderColor = System::Drawing::Color::White;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(48, 15);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Graph";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(584, 369);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->InitialDirectory = L"C:\\Users\\niraj.roy\\source\\repos";
			this->openFileDialog1->Title = L"Select Chart Data File";
			this->openFileDialog1->DefaultExt = L"txt";
			this->openFileDialog1->Filter = L"Text Files | *.txt";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(776, 495);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		//MessageBox::Show("Press the OK Button to load the chart data", "OK", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
	/* OK Button */
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		/* Clear the chart points first */
		
		chart1->Series["Graph"]->Points->Clear();
		/* Create an array of 100 to store data for the graph for sorting usage */
		graphData = gcnew array<String^>(SIZE);
		try
		{
			openFileDialog1->ShowDialog(); // Open dialog to select chart data file
			System::IO::StreamReader^ reader = gcnew  System::IO::StreamReader(openFileDialog1->FileName);
			file_size = 0;
			do
			{
				graphData[file_size] = reader->ReadLine();
				file_size++;
			} while (reader->Peek() != -1);
			reader->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("No Data for graph is available", "Error", MessageBoxButtons::OK, MessageBoxIcon::None);
		}
		/* Draw the graph */
		for (int i = 0; i < file_size; i++)
		{
			this->chart1->Series["Graph"]->Points->AddXY(i + 1, Convert::ToDouble(graphData[i]));
		}
	}
	/* Cancel Button */
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		obj->Show();
	}
	/* Unsort Radio Button */
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		chart1->Series["Graph"]->Points->Clear();
		for (int i = 0; i < file_size; i++)
		{
			this->chart1->Series["Graph"]->Points->AddXY(i + 1, Convert::ToDouble(graphData[i]));
		}
	}
	/* Ascending Radio Button */
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		double arr[100] = {0};
		/* Copy All graph data to integer array */
		for (int i = 0; i < file_size; i++)
		{
			arr[i] = Convert::ToDouble(graphData[i]);
		}
		bool swap = true;
		double temp;
		for (int i = 0; i < file_size; i++)
		{
			swap = false;
			for (int j = 0; j < file_size - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = (temp);
					swap = true;
				}
			}
			/* If no two elements are swapped by inner loop then break */
			if (swap == false)
			{
				break;
			}
			chart1->Series["Graph"]->Points->Clear();
			for (int i = 0; i < file_size; i++)
			{
				this->chart1->Series["Graph"]->Points->AddXY(i + 1, Convert::ToDouble(arr[i]));
			}
		}
	}
	/* Descending Radio Button */
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		double arr[100] = { 0 };
		/* Copy All graph data to integer array */
		for (int i = 0; i < file_size; i++)
		{
			arr[i] = Convert::ToDouble(graphData[i]);
		}
		bool swap = true;
		double temp;
		for (int i = 0; i < file_size; i++)
		{
			swap = false;
			for (int j = 0; j < file_size - 1; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = (temp);
					swap = true;
				}
			}
			/* If no two elements are swapped by inner loop then break */
			if (swap == false)
			{
				break;
			}
			chart1->Series["Graph"]->Points->Clear();
			for (int i = 0; i < file_size; i++)
			{
				this->chart1->Series["Graph"]->Points->AddXY(i + 1, Convert::ToDouble(arr[i]));
			}
		}
	}
};
}
