#pragma once
#pragma comment(lib,"ws2_32.lib")
#pragma warning(disable:4996)
#include"iostream"
#include"cmath"
#include <WinSock2.h>
#include <fstream>
#include "math.h"
#include <TlHelp32.h>
#include"thread"
#include"chrono"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
SOCKET sListen;
SOCKET connection;
int sizeofaddr;
int port = 9000;
double p, x, t0,t0_temp, t1, answer, scob, counter;
HANDLE process = { 0 };
//send(connection, msg, sizeof(msg), NULL);   recv(connection, msg, sizeof(msg), NULL);
//system string v string
//System::String^ managed = Convert::ToString(dataGridView1->Rows[0]->Cells[i]->Value);
//std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
//abc += unmanaged;
namespace l1rpv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
	
		MyForm(void)
		{
			
			
			InitializeComponent();
			

			ifstream fin;
			fin.open("save.xml");
			
			string t2,t5,t7,t8;
			fin >> t2;
			System::String^ strCLR22 = gcnew System::String(t2.c_str());
			textBox2->Text = strCLR22;
			fin >> t5;
			System::String^ strCLR25 = gcnew System::String(t5.c_str());
			textBox5->Text = strCLR25;
			fin >> t7;
			System::String^ strCLR27 = gcnew System::String(t7.c_str());
			textBox7->Text = strCLR27;
			fin >> t8;
			System::String^ strCLR28 = gcnew System::String(t8.c_str());
			textBox8->Text = strCLR28;
		
			//
			//TODO: добавьте код конструктора
			//
			

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
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;




	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ creditsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ licenseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ updatesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ recomendationsToolStripMenuItem;






	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->creditsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->licenseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updatesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recomendationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(770, 86);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(394, 82);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Рассчитать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 43);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series1->Legend = L"Legend1";
			series1->MarkerColor = System::Drawing::Color::Blue;
			series1->MarkerSize = 10;
			series1->Name = L"W = 1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Lime;
			series2->Legend = L"Legend1";
			series2->Name = L"W = 3";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Red;
			series3->Legend = L"Legend1";
			series3->Name = L"W = 5";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(752, 471);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(834, 253);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"500";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(834, 281);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"5";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1046, 253);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 5;
			this->textBox7->Text = L"0";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1046, 281);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 6;
			this->textBox8->Text = L"100";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(795, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"P = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(795, 284);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"X = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1007, 253);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"t0 = ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1007, 281);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"t1 = ";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(874, 318);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(169, 21);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"использовать клиент";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(874, 345);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(169, 21);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->Text = L"использовать сервер";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(770, 43);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(394, 22);
			this->textBox9->TabIndex = 13;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(767, 372);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(394, 69);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(770, 174);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(394, 73);
			this->button5->TabIndex = 15;
			this->button5->Text = L"рисовать через opengl";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(767, 447);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(394, 67);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Вывести в excel";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1177, 28);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripTextBox1,
					this->creditsToolStripMenuItem, this->licenseToolStripMenuItem, this->updatesToolStripMenuItem, this->recomendationsToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->helpToolStripMenuItem->Text = L"help\?";
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 27);
			this->toolStripTextBox1->Text = L"how it works";
			this->toolStripTextBox1->Click += gcnew System::EventHandler(this, &MyForm::toolStripTextBox1_Click);
			// 
			// creditsToolStripMenuItem
			// 
			this->creditsToolStripMenuItem->Name = L"creditsToolStripMenuItem";
			this->creditsToolStripMenuItem->Size = System::Drawing::Size(199, 26);
			this->creditsToolStripMenuItem->Text = L"credits";
			this->creditsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::creditsToolStripMenuItem_Click);
			// 
			// licenseToolStripMenuItem
			// 
			this->licenseToolStripMenuItem->Name = L"licenseToolStripMenuItem";
			this->licenseToolStripMenuItem->Size = System::Drawing::Size(199, 26);
			this->licenseToolStripMenuItem->Text = L"license";
			this->licenseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::licenseToolStripMenuItem_Click);
			// 
			// updatesToolStripMenuItem
			// 
			this->updatesToolStripMenuItem->Name = L"updatesToolStripMenuItem";
			this->updatesToolStripMenuItem->Size = System::Drawing::Size(199, 26);
			this->updatesToolStripMenuItem->Text = L"updates";
			this->updatesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::updatesToolStripMenuItem_Click);
			// 
			// recomendationsToolStripMenuItem
			// 
			this->recomendationsToolStripMenuItem->Name = L"recomendationsToolStripMenuItem";
			this->recomendationsToolStripMenuItem->Size = System::Drawing::Size(199, 26);
			this->recomendationsToolStripMenuItem->Text = L"recomendations";
			this->recomendationsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::recomendationsToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(1177, 526);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"time line";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		void work_20() {
			WSAData wsdata;
			WORD DLLVersion = MAKEWORD(2, 1);
			if (WSAStartup(DLLVersion, &wsdata) != 0) {

				exit(1);
			};
			SOCKADDR_IN addr;
			int sizeofaddr = sizeof(addr);
			addr.sin_addr.s_addr = inet_addr("127.0.0.1");
			addr.sin_port = htons(port);
			addr.sin_family = AF_INET;
			SOCKET connection = socket(AF_INET, SOCK_STREAM, NULL);
			if (connect(connection, (SOCKADDR*)&addr, sizeof(addr)) != 0) {
				textBox9->Text = "unable to connect";
			}
			else {
				char msg[40] = "hi server";
				send(connection, msg, sizeof(msg), NULL);
				textBox9->Text = "connected";
			}
			get_data();
			char msg[40];
			ofstream fout;
			fout.open("log.txt");
			sprintf(msg, "%f", p);
			send(connection, msg, sizeof(msg), NULL);
			sprintf(msg, "%f", x);
			send(connection, msg, sizeof(msg), NULL);
			sprintf(msg, "%f", t0);
			send(connection, msg, sizeof(msg), NULL);
			sprintf(msg, "%f", t1);
			send(connection, msg, sizeof(msg), NULL);
			sprintf(msg, "%f", scob);
			send(connection, msg, sizeof(msg), NULL);
			sprintf(msg, "%f", counter);
			send(connection, msg, sizeof(msg), NULL);
			fout << "info sended" << endl;
			char msgg[40];
			chart1->Series["W = 1"]->Points->Clear();
			chart1->Series["W = 3"]->Points->Clear();
			chart1->Series["W = 5"]->Points->Clear();
			while (t0 < t1) {
				recv(connection, msgg, sizeof(msgg), NULL);
				answer = atof(msgg);
				chart1->Series["W = 1"]->Points->AddXY(t0, answer);
				t0 += 0.5;
			}
			t0 = t0_temp;
			while (t0 < t1) {
				recv(connection, msgg, sizeof(msgg), NULL);
				answer = atof(msgg);
				chart1->Series["W = 3"]->Points->AddXY(t0, answer);
				t0 += 0.5;
			}
			t0 = t0_temp;
			while (t0 < t1) {
				recv(connection, msgg, sizeof(msgg), NULL);
				answer = atof(msgg);
				chart1->Series["W = 5"]->Points->AddXY(t0, answer);
				t0 += 0.5;
			}

			shutdown(connection, SD_SEND);
			closesocket(connection);
			WSACleanup();
		}
		void get_data() {
			scob = 0;
			counter = 1;
			p = Convert::ToDouble(textBox2->Text);
			x = Convert::ToDouble(textBox5->Text);
			t0 = Convert::ToDouble(textBox7->Text);
			t1 = Convert::ToDouble(textBox8->Text);
			t0_temp = t0;
		}
		void send_data() {
			
			char msg[40];

			sprintf(msg, "%f", p);
			send(connection, msg, sizeof(msg), NULL);
			sprintf(msg, "%f", x);
			send(connection, msg, sizeof(msg), NULL);
			sprintf(msg, "%f", t0);
			send(connection, msg, sizeof(msg), NULL);
			sprintf(msg, "%f", t1);
			send(connection, msg, sizeof(msg), NULL);
			sprintf(msg, "%f", scob);
			send(connection, msg, sizeof(msg), NULL);
			sprintf(msg, "%f", counter);
			send(connection, msg, sizeof(msg), NULL);
		}

		void calc1() {
			get_data();
			chart1->Series["W = 1"]->Points->Clear();
			while (t0 < t1) {
				scob += (1 / counter) * sin(counter * 1 * t0);
				answer = ((2 * p) / x) * scob;
				chart1->Series["W = 1"]->Points->AddXY(t0, answer);
				t0 += 0.5;
				
			}
			
		}
		void calc3() {
			get_data();
			chart1->Series["W = 3"]->Points->Clear();
			while (t0 < t1) {
				scob += 1 / counter * sin(counter * 3 * t0);
				answer = ((2 * p) / x) * scob;
				chart1->Series["W = 3"]->Points->AddXY(t0, answer);
				t0 += 0.5;
				
			}

		}
		void calc5() {
			get_data();
			chart1->Series["W = 5"]->Points->Clear();
			while (t0 < t1) {
				scob += 1 / counter * sin(counter * 5 * t0);
				answer = ((2 * p) / x) * scob;
				chart1->Series["W = 5"]->Points->AddXY(t0, answer);
				t0 += 0.5;
				
			}
		}
		int call_Opengl() {
			STARTUPINFO si = { 0 };
			PROCESS_INFORMATION pi = { 0 };
			const wchar_t exe[60] = L"D:\\gavno\\lintext\\Debug\\lintext.exe";
			if (!CreateProcess(exe, NULL,
				NULL, NULL, FALSE, NULL, NULL, NULL, &si, &pi))
				;
			HANDLE hsnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
			if (!hsnap) {
				return 1;
			}
			PROCESSENTRY32 pe = { 0 };
			pe.dwSize = sizeof(PROCESSENTRY32);
			Process32First(hsnap, &pe);
			do {
				if (!wcscmp(pe.szExeFile, L"winAPI_Console.exe"))
					process = OpenProcess(PROCESS_ALL_ACCESS, TRUE, pe.th32ProcessID);
			} while (Process32Next(hsnap, &pe));
			CloseHandle(hsnap);
			if (process) {
				TerminateProcess(process, 0);
				CloseHandle(process);
			}
			return 0;
		}
		int call_exc() {
			STARTUPINFO si = { 0 };
			PROCESS_INFORMATION pi = { 0 };
			const wchar_t exe[60] = L"D:\\раб.стол\\exc\\bin\\Debug\\netcoreapp3.1\\exc.exe";
			if (!CreateProcess(exe, NULL,
				NULL, NULL, FALSE, NULL, NULL, NULL, &si, &pi))
				;
			HANDLE hsnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
			if (!hsnap) {
				return 1;
			}
			PROCESSENTRY32 pe = { 0 };
			pe.dwSize = sizeof(PROCESSENTRY32);
			Process32First(hsnap, &pe);
			do {
				if (!wcscmp(pe.szExeFile, L"winAPI_Console.exe"))
					process = OpenProcess(PROCESS_ALL_ACCESS, TRUE, pe.th32ProcessID);
			} while (Process32Next(hsnap, &pe));
			CloseHandle(hsnap);
			if (process) {
				TerminateProcess(process, 0);
				CloseHandle(process);
			}
			return 0;
		}
#pragma endregion
	public: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
		   
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked) {
			calc1();
			calc3();
			calc5();
		}
		if (radioButton2->Checked) {
			work_20();
			
		}
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
		   
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["W = 1"]->Points->Clear();
	chart1->Series["W = 3"]->Points->Clear();
	chart1->Series["W = 5"]->Points->Clear();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream fout;
	fout.open("data_log.txt");
	p = Convert::ToDouble(textBox2->Text);
	x = Convert::ToDouble(textBox5->Text);
	t0 = Convert::ToDouble(textBox7->Text);
	fout << p << endl;
	fout << x << endl;
	fout << t0 << endl;
	fout << t1 << endl;
	fout.close();
	call_Opengl();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	call_exc();
	Sleep(10);
	//Process::Start("excel.exe", "C:\\Users\\44tap\\Desktop\\out.xlsx");
}
private: System::Void helpbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ f2 = gcnew MyForm1();
	f2->Show();

}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	ofstream fft;
	fft.open("save.xml  ");
	get_data();
	fft << p << endl;
	fft << x << endl;
	fft << t0 << endl;
	fft << t1 << endl;
}
private: System::Void toolStripTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ f2 = gcnew MyForm2();
	f2->Show();
}
private: System::Void creditsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm3^ f2 = gcnew MyForm3();
	f2->Show();
}
private: System::Void licenseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("notepad.exe", "D:\\Wn\\winapp client\\license.txt");
}
private: System::Void updatesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm5^ f2 = gcnew MyForm5();
	f2->Show();
}
private: System::Void recomendationsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ f2 = gcnew MyForm4();
	f2->Show();
	
}
};
}