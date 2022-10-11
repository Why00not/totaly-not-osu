
#include"cmath"
#pragma once
#pragma comment(lib,"ws2_32.lib")
#include <WinSock2.h>
#include <iostream>
#pragma warning(disable:4996)
#include "Windows.h"
#include <fstream>
#include <string>
#include <TlHelp32.h>
#include <ctime>
#include "MyForm1.h";
#include "MyForm2.h";
#include "MyForm3.h";
#include "MyForm4.h";

SOCKET sListen;
SOCKET connection;
HANDLE process = { 0 };
int sizeofaddr;
int iter = 0;
int port = 9000;
int size = 20;


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
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Form^ currentChildForm;
		Button^ currentBtn;
		// Цвета для окрашивания кнопок при активации
		Color color_1 = Color::FromArgb(0, 0, 255);
		Color color_2 = Color::FromArgb(102, 255, 0);
		Color color_3 = Color::FromArgb(255, 215, 0);
		Color color_4 = Color::FromArgb(70, 246, 241);

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonTextColor;
	private: System::Windows::Forms::Label^ label7;

	public:


		MyForm(void)
		{
			/*Process::Start("C:\\Users\\idea\\Downloads\\intro_ksis.mp4");
			Sleep(15000);*/
			InitializeComponent();
			//textBox2->Text = "20";
			//
			//TODO: добавьте код конструктора
			//
			for (int i = 0; i < 20; i++) {
				dataGridView4->Rows->Add(Convert::ToString(i+1));
			}
			dataGridView4->Rows->Add(Convert::ToString(""));
			for (int i = 0; i < 20; i++) {
				dataGridView5->Rows->Add(Convert::ToString(i + 1));
			}
			dataGridView5->Rows->Add(Convert::ToString(""));
			btnBack->Enabled = false;
			
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ с20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c10;




	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Panel^ panelDesktop;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Button^ btnExit;



	private: System::Windows::Forms::Button^ btnUpdates;
	private: System::Windows::Forms::Button^ btnAbout;




	private: System::Windows::Forms::Button^ btnSettings;


	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::LinkLabel^ linkToMe;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBoxQuestions;

	private: System::Windows::Forms::Button^ buttonLoad;

	private: System::Windows::Forms::Panel^ panelSettings;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
private: System::Windows::Forms::Button^ buttonHelp;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::ToolTip^ info_smth;



private: System::Windows::Forms::DataGridView^ dataGridView2;







private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
private: System::Windows::Forms::DataGridView^ dataGridView4;

private: System::Windows::Forms::DataGridViewButtonColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::Button^ btnBack;
private: System::Windows::Forms::Label^ labelTemp;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Panel^ panelLock;
private: System::Windows::Forms::CheckBox^ checkBoxLock;
private: System::Windows::Forms::Panel^ TextIconMenu;
private: System::Windows::Forms::Label^ labelMenu;
private: System::Windows::Forms::PictureBox^ buttonMenu;







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
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->с20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->panelDesktop = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBoxQuestions = (gcnew System::Windows::Forms::TextBox());
			this->buttonLoad = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->TextIconMenu = (gcnew System::Windows::Forms::Panel());
			this->labelMenu = (gcnew System::Windows::Forms::Label());
			this->buttonMenu = (gcnew System::Windows::Forms::PictureBox());
			this->buttonHelp = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->btnUpdates = (gcnew System::Windows::Forms::Button());
			this->panelSettings = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonTextColor = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->panelLock = (gcnew System::Windows::Forms::Panel());
			this->checkBoxLock = (gcnew System::Windows::Forms::CheckBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->linkToMe = (gcnew System::Windows::Forms::LinkLabel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->info_smth = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->labelTemp = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelDesktop->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->TextIconMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonMenu))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->panelSettings->SuspendLayout();
			this->panelLock->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(20) {
				this->с20, this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->c2, this->c3, this->c4, this->c5, this->c6, this->c7, this->c8, this->c9, this->c10
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->Location = System::Drawing::Point(25, 25);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(401, 480);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// с20
			// 
			this->с20->HeaderText = L"Column1";
			this->с20->MinimumWidth = 6;
			this->с20->Name = L"с20";
			this->с20->Width = 20;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 20;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"1";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 20;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"1";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 20;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"1";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 20;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"1";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 20;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"1";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 20;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"1";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 20;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"1";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 20;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"1";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 20;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"1";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 20;
			// 
			// c2
			// 
			this->c2->HeaderText = L"Column1";
			this->c2->MinimumWidth = 6;
			this->c2->Name = L"c2";
			this->c2->Width = 20;
			// 
			// c3
			// 
			this->c3->HeaderText = L"Column1";
			this->c3->MinimumWidth = 6;
			this->c3->Name = L"c3";
			this->c3->Width = 20;
			// 
			// c4
			// 
			this->c4->HeaderText = L"Column1";
			this->c4->MinimumWidth = 6;
			this->c4->Name = L"c4";
			this->c4->Width = 20;
			// 
			// c5
			// 
			this->c5->HeaderText = L"Column1";
			this->c5->MinimumWidth = 6;
			this->c5->Name = L"c5";
			this->c5->Width = 20;
			// 
			// c6
			// 
			this->c6->HeaderText = L"Column1";
			this->c6->MinimumWidth = 6;
			this->c6->Name = L"c6";
			this->c6->Width = 20;
			// 
			// c7
			// 
			this->c7->HeaderText = L"Column1";
			this->c7->MinimumWidth = 6;
			this->c7->Name = L"c7";
			this->c7->Width = 20;
			// 
			// c8
			// 
			this->c8->HeaderText = L"Column1";
			this->c8->MinimumWidth = 6;
			this->c8->Name = L"c8";
			this->c8->Width = 20;
			// 
			// c9
			// 
			this->c9->HeaderText = L"Column1";
			this->c9->MinimumWidth = 6;
			this->c9->Name = L"c9";
			this->c9->Width = 20;
			// 
			// c10
			// 
			this->c10->HeaderText = L"Column1";
			this->c10->MinimumWidth = 6;
			this->c10->Name = L"c10";
			this->c10->Width = 20;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Violet;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Poor Richard", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkRed;
			this->button3->Location = System::Drawing::Point(508, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(300, 60);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Connect \\ send results";
			this->info_smth->SetToolTip(this->button3, L"Connect or send results");
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(508, 20);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(300, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Status...";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"127.0.0.1", L"192.168.43.45" });
			this->comboBox1->Location = System::Drawing::Point(508, 116);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(300, 24);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->Text = L"127.0.0.1";
			// 
			// radioButton1
			// 
			this->radioButton1->Checked = true;
			this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton1->Location = System::Drawing::Point(3, 3);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->radioButton1->Size = System::Drawing::Size(150, 30);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Theme 1";
			this->info_smth->SetToolTip(this->radioButton1, L"Easy level");
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton2->Location = System::Drawing::Point(159, 3);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->radioButton2->Size = System::Drawing::Size(150, 30);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->Text = L"Theme 2";
			this->info_smth->SetToolTip(this->radioButton2, L"Average level");
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// panelDesktop
			// 
			this->panelDesktop->BackColor = System::Drawing::Color::MintCream;
			this->panelDesktop->Controls->Add(this->label6);
			this->panelDesktop->Controls->Add(this->panel1);
			this->panelDesktop->Controls->Add(this->groupBox1);
			this->panelDesktop->Controls->Add(this->panel5);
			this->panelDesktop->Controls->Add(this->button3);
			this->panelDesktop->Controls->Add(this->textBox2);
			this->panelDesktop->Controls->Add(this->comboBox1);
			this->panelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktop->Location = System::Drawing::Point(240, 87);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(982, 591);
			this->panelDesktop->TabIndex = 10;
			this->panelDesktop->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panelDesktop_MouseClick);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(170, 557);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 23);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Scores: ";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->dataGridView3);
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Controls->Add(this->dataGridView4);
			this->panel1->Controls->Add(this->dataGridView5);
			this->panel1->Location = System::Drawing::Point(20, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(453, 532);
			this->panel1->TabIndex = 17;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView3->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView3->ColumnHeadersHeight = 25;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(20) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17,
					this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19, this->dataGridViewTextBoxColumn20
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->NullValue = nullptr;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView3->GridColor = System::Drawing::Color::White;
			this->dataGridView3->Location = System::Drawing::Point(25, 0);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 30;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			this->dataGridView3->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView3->ShowCellErrors = false;
			this->dataGridView3->ShowCellToolTips = false;
			this->dataGridView3->ShowEditingIcon = false;
			this->dataGridView3->ShowRowErrors = false;
			this->dataGridView3->Size = System::Drawing::Size(401, 25);
			this->dataGridView3->TabIndex = 14;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn1->FillWeight = 91.73054F;
			this->dataGridViewTextBoxColumn1->Frozen = true;
			this->dataGridViewTextBoxColumn1->HeaderText = L"1";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn1->Width = 20;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn2->FillWeight = 95.66006F;
			this->dataGridViewTextBoxColumn2->Frozen = true;
			this->dataGridViewTextBoxColumn2->HeaderText = L"2";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn2->Width = 20;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn3->FillWeight = 100.0601F;
			this->dataGridViewTextBoxColumn3->Frozen = true;
			this->dataGridViewTextBoxColumn3->HeaderText = L"3";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn3->Width = 20;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn4->FillWeight = 104.9872F;
			this->dataGridViewTextBoxColumn4->Frozen = true;
			this->dataGridViewTextBoxColumn4->HeaderText = L"4";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn4->Width = 20;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn5->FillWeight = 110.5043F;
			this->dataGridViewTextBoxColumn5->Frozen = true;
			this->dataGridViewTextBoxColumn5->HeaderText = L"5";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn5->Width = 20;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->FillWeight = 116.6822F;
			this->dataGridViewTextBoxColumn6->HeaderText = L"6";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn6->Width = 20;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->FillWeight = 58.91924F;
			this->dataGridViewTextBoxColumn7->HeaderText = L"7";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn7->Width = 20;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->FillWeight = 123.5999F;
			this->dataGridViewTextBoxColumn8->HeaderText = L"8";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn8->Width = 20;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->FillWeight = 131.3461F;
			this->dataGridViewTextBoxColumn9->HeaderText = L"9";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn9->Width = 20;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->FillWeight = 140.02F;
			this->dataGridViewTextBoxColumn10->HeaderText = L"10";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn10->Width = 20;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->FillWeight = 149.7326F;
			this->dataGridViewTextBoxColumn11->HeaderText = L"11";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn11->Width = 20;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->FillWeight = 58.91924F;
			this->dataGridViewTextBoxColumn12->HeaderText = L"12";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn12->Width = 20;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->FillWeight = 58.91924F;
			this->dataGridViewTextBoxColumn13->HeaderText = L"13";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn13->Width = 20;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->FillWeight = 58.91924F;
			this->dataGridViewTextBoxColumn14->HeaderText = L"14";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			this->dataGridViewTextBoxColumn14->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn14->Width = 20;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"15";
			this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->Width = 20;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"16";
			this->dataGridViewTextBoxColumn16->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->ReadOnly = true;
			this->dataGridViewTextBoxColumn16->Width = 20;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"17";
			this->dataGridViewTextBoxColumn17->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->ReadOnly = true;
			this->dataGridViewTextBoxColumn17->Width = 20;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"18";
			this->dataGridViewTextBoxColumn18->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->ReadOnly = true;
			this->dataGridViewTextBoxColumn18->Width = 20;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"19";
			this->dataGridViewTextBoxColumn19->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->ReadOnly = true;
			this->dataGridViewTextBoxColumn19->Width = 20;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"20";
			this->dataGridViewTextBoxColumn20->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->ReadOnly = true;
			this->dataGridViewTextBoxColumn20->Width = 20;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView2->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->ColumnHeadersHeight = 25;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(20) {
				this->Column11,
					this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18, this->Column19,
					this->Column20, this->Column21, this->Column22, this->Column23, this->Column24, this->Column25, this->Column26, this->Column27,
					this->Column28, this->Column29, this->Column30
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->NullValue = nullptr;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView2->GridColor = System::Drawing::Color::White;
			this->dataGridView2->Location = System::Drawing::Point(25, 505);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 30;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::Color::White;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->ShowCellErrors = false;
			this->dataGridView2->ShowCellToolTips = false;
			this->dataGridView2->ShowEditingIcon = false;
			this->dataGridView2->ShowRowErrors = false;
			this->dataGridView2->Size = System::Drawing::Size(401, 25);
			this->dataGridView2->TabIndex = 13;
			// 
			// Column11
			// 
			this->Column11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::White;
			this->Column11->DefaultCellStyle = dataGridViewCellStyle7;
			this->Column11->FillWeight = 91.73054F;
			this->Column11->Frozen = true;
			this->Column11->HeaderText = L"1";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column11->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column11->Width = 20;
			// 
			// Column12
			// 
			this->Column12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column12->FillWeight = 95.66006F;
			this->Column12->Frozen = true;
			this->Column12->HeaderText = L"2";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column12->Width = 20;
			// 
			// Column13
			// 
			this->Column13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column13->FillWeight = 100.0601F;
			this->Column13->Frozen = true;
			this->Column13->HeaderText = L"3";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column13->Width = 20;
			// 
			// Column14
			// 
			this->Column14->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column14->FillWeight = 104.9872F;
			this->Column14->Frozen = true;
			this->Column14->HeaderText = L"4";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			this->Column14->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column14->Width = 20;
			// 
			// Column15
			// 
			this->Column15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column15->FillWeight = 110.5043F;
			this->Column15->Frozen = true;
			this->Column15->HeaderText = L"5";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			this->Column15->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column15->Width = 20;
			// 
			// Column16
			// 
			this->Column16->FillWeight = 116.6822F;
			this->Column16->HeaderText = L"6";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			this->Column16->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column16->Width = 20;
			// 
			// Column17
			// 
			this->Column17->FillWeight = 58.91924F;
			this->Column17->HeaderText = L"7";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			this->Column17->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column17->Width = 20;
			// 
			// Column18
			// 
			this->Column18->FillWeight = 123.5999F;
			this->Column18->HeaderText = L"8";
			this->Column18->MinimumWidth = 6;
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			this->Column18->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column18->Width = 20;
			// 
			// Column19
			// 
			this->Column19->FillWeight = 131.3461F;
			this->Column19->HeaderText = L"9";
			this->Column19->MinimumWidth = 6;
			this->Column19->Name = L"Column19";
			this->Column19->ReadOnly = true;
			this->Column19->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column19->Width = 20;
			// 
			// Column20
			// 
			this->Column20->FillWeight = 140.02F;
			this->Column20->HeaderText = L"10";
			this->Column20->MinimumWidth = 6;
			this->Column20->Name = L"Column20";
			this->Column20->ReadOnly = true;
			this->Column20->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column20->Width = 20;
			// 
			// Column21
			// 
			this->Column21->FillWeight = 149.7326F;
			this->Column21->HeaderText = L"11";
			this->Column21->MinimumWidth = 6;
			this->Column21->Name = L"Column21";
			this->Column21->ReadOnly = true;
			this->Column21->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column21->Width = 20;
			// 
			// Column22
			// 
			this->Column22->FillWeight = 58.91924F;
			this->Column22->HeaderText = L"12";
			this->Column22->MinimumWidth = 6;
			this->Column22->Name = L"Column22";
			this->Column22->ReadOnly = true;
			this->Column22->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column22->Width = 20;
			// 
			// Column23
			// 
			this->Column23->FillWeight = 58.91924F;
			this->Column23->HeaderText = L"13";
			this->Column23->MinimumWidth = 6;
			this->Column23->Name = L"Column23";
			this->Column23->ReadOnly = true;
			this->Column23->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column23->Width = 20;
			// 
			// Column24
			// 
			this->Column24->FillWeight = 58.91924F;
			this->Column24->HeaderText = L"14";
			this->Column24->MinimumWidth = 6;
			this->Column24->Name = L"Column24";
			this->Column24->ReadOnly = true;
			this->Column24->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column24->Width = 20;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"15";
			this->Column25->MinimumWidth = 6;
			this->Column25->Name = L"Column25";
			this->Column25->ReadOnly = true;
			this->Column25->Width = 20;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"16";
			this->Column26->MinimumWidth = 6;
			this->Column26->Name = L"Column26";
			this->Column26->ReadOnly = true;
			this->Column26->Width = 20;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"17";
			this->Column27->MinimumWidth = 6;
			this->Column27->Name = L"Column27";
			this->Column27->ReadOnly = true;
			this->Column27->Width = 20;
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"18";
			this->Column28->MinimumWidth = 6;
			this->Column28->Name = L"Column28";
			this->Column28->ReadOnly = true;
			this->Column28->Width = 20;
			// 
			// Column29
			// 
			this->Column29->HeaderText = L"19";
			this->Column29->MinimumWidth = 6;
			this->Column29->Name = L"Column29";
			this->Column29->ReadOnly = true;
			this->Column29->Width = 20;
			// 
			// Column30
			// 
			this->Column30->HeaderText = L"20";
			this->Column30->MinimumWidth = 6;
			this->Column30->Name = L"Column30";
			this->Column30->ReadOnly = true;
			this->Column30->Width = 20;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView4->ColumnHeadersHeight = 25;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column31 });
			this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Left;
			this->dataGridView4->Location = System::Drawing::Point(0, 0);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle11->NullValue = nullptr;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 50;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView4->Size = System::Drawing::Size(25, 530);
			this->dataGridView4->TabIndex = 15;
			// 
			// Column31
			// 
			this->Column31->HeaderText = L"";
			this->Column31->MinimumWidth = 2;
			this->Column31->Name = L"Column31";
			this->Column31->ReadOnly = true;
			this->Column31->Width = 25;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView5->ColumnHeadersHeight = 25;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn21 });
			this->dataGridView5->Dock = System::Windows::Forms::DockStyle::Right;
			this->dataGridView5->Location = System::Drawing::Point(426, 0);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle12->NullValue = nullptr;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView5->RowHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->RowHeadersWidth = 50;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView5->Size = System::Drawing::Size(25, 530);
			this->dataGridView5->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"";
			this->dataGridViewTextBoxColumn21->MinimumWidth = 2;
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->ReadOnly = true;
			this->dataGridViewTextBoxColumn21->Width = 25;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->groupBox1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->groupBox1->Controls->Add(this->flowLayoutPanel1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(623, 168);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(320, 100);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Choose a crossword theme";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->radioButton1);
			this->flowLayoutPanel1->Controls->Add(this->radioButton2);
			this->flowLayoutPanel1->Controls->Add(this->radioButton3);
			this->flowLayoutPanel1->Controls->Add(this->radioButton4);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 26);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(314, 71);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// radioButton3
			// 
			this->radioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton3->Location = System::Drawing::Point(3, 39);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->radioButton3->Size = System::Drawing::Size(150, 30);
			this->radioButton3->TabIndex = 10;
			this->radioButton3->Text = L"Theme 3";
			this->info_smth->SetToolTip(this->radioButton3, L"Hard level");
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->radioButton4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton4->Location = System::Drawing::Point(159, 39);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->radioButton4->Size = System::Drawing::Size(150, 30);
			this->radioButton4->TabIndex = 18;
			this->radioButton4->Text = L"Theme 4";
			this->info_smth->SetToolTip(this->radioButton4, L"Profi level");
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->BackColor = System::Drawing::Color::Maroon;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->textBoxQuestions);
			this->panel5->Controls->Add(this->buttonLoad);
			this->panel5->Location = System::Drawing::Point(508, 299);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(436, 250);
			this->panel5->TabIndex = 11;
			// 
			// textBoxQuestions
			// 
			this->textBoxQuestions->BackColor = System::Drawing::Color::White;
			this->textBoxQuestions->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxQuestions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxQuestions->Location = System::Drawing::Point(0, 41);
			this->textBoxQuestions->Multiline = true;
			this->textBoxQuestions->Name = L"textBoxQuestions";
			this->textBoxQuestions->ReadOnly = true;
			this->textBoxQuestions->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxQuestions->Size = System::Drawing::Size(434, 207);
			this->textBoxQuestions->TabIndex = 11;
			this->textBoxQuestions->Text = resources->GetString(L"textBoxQuestions.Text");
			// 
			// buttonLoad
			// 
			this->buttonLoad->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonLoad->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonLoad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLoad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonLoad->ForeColor = System::Drawing::Color::Red;
			this->buttonLoad->Location = System::Drawing::Point(0, 0);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(434, 41);
			this->buttonLoad->TabIndex = 10;
			this->buttonLoad->Text = L"Click here to load questions";
			this->info_smth->SetToolTip(this->buttonLoad, L"Click here to load questions");
			this->buttonLoad->UseVisualStyleBackColor = true;
			this->buttonLoad->Click += gcnew System::EventHandler(this, &MyForm::buttonLoad_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Controls->Add(this->TextIconMenu);
			this->panel2->Controls->Add(this->buttonHelp);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1222, 60);
			this->panel2->TabIndex = 11;
			// 
			// TextIconMenu
			// 
			this->TextIconMenu->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TextIconMenu->Controls->Add(this->labelMenu);
			this->TextIconMenu->Controls->Add(this->buttonMenu);
			this->TextIconMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->TextIconMenu->Location = System::Drawing::Point(0, 0);
			this->TextIconMenu->Name = L"TextIconMenu";
			this->TextIconMenu->Size = System::Drawing::Size(240, 60);
			this->TextIconMenu->TabIndex = 3;
			// 
			// labelMenu
			// 
			this->labelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelMenu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMenu->ForeColor = System::Drawing::Color::White;
			this->labelMenu->Location = System::Drawing::Point(0, 0);
			this->labelMenu->Name = L"labelMenu";
			this->labelMenu->Padding = System::Windows::Forms::Padding(60, 0, 0, 0);
			this->labelMenu->Size = System::Drawing::Size(178, 58);
			this->labelMenu->TabIndex = 19;
			this->labelMenu->Text = L"MENU";
			this->labelMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonMenu
			// 
			this->buttonMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMenu->Dock = System::Windows::Forms::DockStyle::Right;
			this->buttonMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMenu.Image")));
			this->buttonMenu->Location = System::Drawing::Point(178, 0);
			this->buttonMenu->Name = L"buttonMenu";
			this->buttonMenu->Size = System::Drawing::Size(60, 58);
			this->buttonMenu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->buttonMenu->TabIndex = 18;
			this->buttonMenu->TabStop = false;
			this->buttonMenu->Click += gcnew System::EventHandler(this, &MyForm::buttonMenu_Click);
			// 
			// buttonHelp
			// 
			this->buttonHelp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonHelp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonHelp->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->buttonHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHelp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonHelp->ForeColor = System::Drawing::Color::White;
			this->buttonHelp->Location = System::Drawing::Point(1170, 10);
			this->buttonHelp->Name = L"buttonHelp";
			this->buttonHelp->Size = System::Drawing::Size(40, 40);
			this->buttonHelp->TabIndex = 2;
			this->buttonHelp->Text = L"\?";
			this->buttonHelp->UseVisualStyleBackColor = true;
			this->buttonHelp->Click += gcnew System::EventHandler(this, &MyForm::buttonHelp_Click);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->BackColor = System::Drawing::Color::Red;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(440, 11);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(618, 39);
			this->label8->TabIndex = 1;
			this->label8->Text = L"CROSSWORD FROM STEPAN";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::Maroon;
			this->panelMenu->Controls->Add(this->btnAbout);
			this->panelMenu->Controls->Add(this->btnUpdates);
			this->panelMenu->Controls->Add(this->panelSettings);
			this->panelMenu->Controls->Add(this->btnExit);
			this->panelMenu->Controls->Add(this->btnSettings);
			this->panelMenu->Controls->Add(this->panelLock);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 87);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(240, 591);
			this->panelMenu->TabIndex = 12;
			// 
			// btnAbout
			// 
			this->btnAbout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAbout->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAbout->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAbout->ForeColor = System::Drawing::Color::White;
			this->btnAbout->Location = System::Drawing::Point(0, 403);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(240, 50);
			this->btnAbout->TabIndex = 1;
			this->btnAbout->Tag = L"ABOUT";
			this->btnAbout->Text = L"ABOUT";
			this->info_smth->SetToolTip(this->btnAbout, L"About");
			this->btnAbout->UseVisualStyleBackColor = true;
			this->btnAbout->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// btnUpdates
			// 
			this->btnUpdates->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUpdates->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnUpdates->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnUpdates->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdates->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnUpdates->ForeColor = System::Drawing::Color::White;
			this->btnUpdates->Location = System::Drawing::Point(0, 353);
			this->btnUpdates->Name = L"btnUpdates";
			this->btnUpdates->Size = System::Drawing::Size(240, 50);
			this->btnUpdates->TabIndex = 2;
			this->btnUpdates->Tag = L"UPDATES";
			this->btnUpdates->Text = L"UPDATES";
			this->info_smth->SetToolTip(this->btnUpdates, L"Updates");
			this->btnUpdates->UseVisualStyleBackColor = true;
			this->btnUpdates->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panelSettings
			// 
			this->panelSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panelSettings->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelSettings->Controls->Add(this->label7);
			this->panelSettings->Controls->Add(this->buttonTextColor);
			this->panelSettings->Controls->Add(this->button8);
			this->panelSettings->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSettings->Location = System::Drawing::Point(0, 50);
			this->panelSettings->Name = L"panelSettings";
			this->panelSettings->Size = System::Drawing::Size(240, 303);
			this->panelSettings->TabIndex = 5;
			this->panelSettings->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(30, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(185, 17);
			this->label7->TabIndex = 2;
			this->label7->Text = L"settings for the main window";
			// 
			// buttonTextColor
			// 
			this->buttonTextColor->BackColor = System::Drawing::Color::Red;
			this->buttonTextColor->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonTextColor->FlatAppearance->BorderSize = 3;
			this->buttonTextColor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTextColor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTextColor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonTextColor->Location = System::Drawing::Point(33, 167);
			this->buttonTextColor->Name = L"buttonTextColor";
			this->buttonTextColor->Size = System::Drawing::Size(170, 50);
			this->buttonTextColor->TabIndex = 1;
			this->buttonTextColor->Text = L"Set text color";
			this->buttonTextColor->UseVisualStyleBackColor = false;
			this->buttonTextColor->Click += gcnew System::EventHandler(this, &MyForm::buttonTextColor_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Red;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->FlatAppearance->BorderSize = 3;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(33, 51);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(170, 50);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Set background color";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// btnExit
			// 
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnExit->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->Location = System::Drawing::Point(0, 495);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(240, 50);
			this->btnExit->TabIndex = 3;
			this->btnExit->Tag = L"EXIT";
			this->btnExit->Text = L"EXIT";
			this->info_smth->SetToolTip(this->btnExit, L"Exit");
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// btnSettings
			// 
			this->btnSettings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSettings->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSettings->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSettings->ForeColor = System::Drawing::Color::White;
			this->btnSettings->Location = System::Drawing::Point(0, 0);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Size = System::Drawing::Size(240, 50);
			this->btnSettings->TabIndex = 0;
			this->btnSettings->Tag = L"SETTINGS";
			this->btnSettings->Text = L"SETTINGS";
			this->info_smth->SetToolTip(this->btnSettings, L"Settings");
			this->btnSettings->UseVisualStyleBackColor = true;
			this->btnSettings->Visible = false;
			this->btnSettings->Click += gcnew System::EventHandler(this, &MyForm::btnSettings_Click);
			// 
			// panelLock
			// 
			this->panelLock->Controls->Add(this->checkBoxLock);
			this->panelLock->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelLock->Location = System::Drawing::Point(0, 545);
			this->panelLock->Name = L"panelLock";
			this->panelLock->Size = System::Drawing::Size(240, 46);
			this->panelLock->TabIndex = 18;
			// 
			// checkBoxLock
			// 
			this->checkBoxLock->AutoSize = true;
			this->checkBoxLock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBoxLock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxLock->ForeColor = System::Drawing::Color::White;
			this->checkBoxLock->Location = System::Drawing::Point(54, 11);
			this->checkBoxLock->Name = L"checkBoxLock";
			this->checkBoxLock->Size = System::Drawing::Size(133, 24);
			this->checkBoxLock->TabIndex = 6;
			this->checkBoxLock->Text = L"Lock this area";
			this->checkBoxLock->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->dateTimePicker1);
			this->panel4->Controls->Add(this->linkToMe);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(0, 678);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1222, 25);
			this->panel4->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Font = (gcnew System::Drawing::Font(L"Forte", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(774, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(270, 23);
			this->label11->TabIndex = 5;
			this->label11->Text = L"and please give everyone 10 points!))))";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Dock = System::Windows::Forms::DockStyle::Right;
			this->dateTimePicker1->Location = System::Drawing::Point(1044, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(176, 22);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// linkToMe
			// 
			this->linkToMe->Dock = System::Windows::Forms::DockStyle::Left;
			this->linkToMe->Font = (gcnew System::Drawing::Font(L"Forte", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkToMe->Location = System::Drawing::Point(595, 0);
			this->linkToMe->Name = L"linkToMe";
			this->linkToMe->Size = System::Drawing::Size(179, 23);
			this->linkToMe->TabIndex = 4;
			this->linkToMe->TabStop = true;
			this->linkToMe->Text = L"www.SavaEntertainment.by";
			this->linkToMe->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkToMe->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkToMe_LinkClicked);
			// 
			// label9
			// 
			this->label9->Dock = System::Windows::Forms::DockStyle::Left;
			this->label9->Font = (gcnew System::Drawing::Font(L"Forte", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->label9->Size = System::Drawing::Size(595, 23);
			this->label9->TabIndex = 2;
			this->label9->Text = L"To get more features and functionality, buy the official version of the app by cl"
				L"icking on the link";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->labelTemp);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->btnBack);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1222, 27);
			this->panel3->TabIndex = 3;
			// 
			// labelTemp
			// 
			this->labelTemp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelTemp->Dock = System::Windows::Forms::DockStyle::Left;
			this->labelTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTemp->ForeColor = System::Drawing::Color::White;
			this->labelTemp->Location = System::Drawing::Point(130, 0);
			this->labelTemp->Name = L"labelTemp";
			this->labelTemp->Size = System::Drawing::Size(100, 25);
			this->labelTemp->TabIndex = 2;
			this->labelTemp->Text = L"Main";
			this->labelTemp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Dock = System::Windows::Forms::DockStyle::Left;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(80, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"CFS - ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Black;
			this->btnBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBack->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnBack->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->ForeColor = System::Drawing::Color::White;
			this->btnBack->Location = System::Drawing::Point(0, 0);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(80, 25);
			this->btnBack->TabIndex = 0;
			this->btnBack->Text = L"<- Back";
			this->btnBack->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(1222, 703);
			this->Controls->Add(this->panelDesktop);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Name = L"MyForm";
			this->Text = L"client_part.exe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelDesktop->ResumeLayout(false);
			this->panelDesktop->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->TextIconMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buttonMenu))->EndInit();
			this->panelMenu->ResumeLayout(false);
			this->panelSettings->ResumeLayout(false);
			this->panelSettings->PerformLayout();
			this->panelLock->ResumeLayout(false);
			this->panelLock->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		void work_proc() {
			char cur_ip[20] = { Convert::ToChar(comboBox1->Text) };
			WSAData wsdata;
			WORD DLLVersion = MAKEWORD(2, 1);
			if (WSAStartup(DLLVersion, &wsdata) != 0) {

				exit(1);
			};
			SOCKADDR_IN addr;
			int sizeofaddr = sizeof(addr);
			addr.sin_addr.s_addr = inet_addr(cur_ip);
			addr.sin_port = htons(port);
			addr.sin_family = AF_INET;
			SOCKET connection = socket(AF_INET, SOCK_STREAM, NULL);
			if (connect(connection, (SOCKADDR*)&addr, sizeof(addr)) != 0) {
				textBox2->Text = "unable to connect";
			}
			if (radioButton1->Checked) {
				char msg[256] = "1";
				send(connection, msg, sizeof(msg), NULL);
			}
			if (radioButton1->Checked) {
				char msg[256] = "2";
				send(connection, msg, sizeof(msg), NULL);
			}

			//считывание таблицы и отправка на сервер
			char answers[256];
			char answer[3];
			int a = 0;
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (dataGridView1->Rows[i]->Cells[j]->Value) {
						answer[0] = Convert::ToChar(dataGridView1->Rows[i]->Cells[j]->Value);
						answers[a] = answer[0];
					}
					else
						answers[a] = '0';
					a++;
				}
			}
			send(connection, answers, sizeof(answers), NULL);
			char msgget[256];
			recv(connection, msgget, sizeof(msgget), NULL);
			int b = 0;//перекраска ячеек по результатам
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (msgget[b] == '1') {
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Green;
					}
					if (msgget[b] == '0') {
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Red;
					}
					b++;
				}
			}
			port++;
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
				textBox2->Text = "unable to connect";
			}	
			if (radioButton1->Checked) {
				char msg[456] = "1";
				send(connection, msg, sizeof(msg), NULL);
			}
			if (radioButton2->Checked) {
				char msg[456] = "2";
				send(connection, msg, sizeof(msg), NULL);
			}
			//получение и проверка условий 
			//считывание таблицы и отправка на сервер
			char answers[456];
			char answer[3];
			int a = 0;
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (dataGridView1->Rows[i]->Cells[j]->Value) {
						answer[0] = Convert::ToChar(dataGridView1->Rows[i]->Cells[j]->Value);
						answers[a] = answer[0];
					}
					else
						answers[a] = '0';
					a++;
				}
			}
			send(connection, answers, sizeof(answers), NULL);
			char msgget[456];
			recv(connection, msgget, sizeof(msgget), NULL);
			int b = 0;//перекраска ячеек по результатам
			int count = 0;
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (msgget[b] == '1') {
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Green;
						count++;
					}
					if (msgget[b] == '0') {
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Red;
					}

					b++;
				}
			}
			label6->Text = "Scores: " + Convert::ToString(count);
			if (count == 400) {
				MyForm3^ form3 = gcnew MyForm3();
				form3->ShowDialog();
			}
			shutdown(connection, SD_SEND);
			closesocket(connection);
			WSACleanup();
			//port++;
		}
#pragma endregion
		
		public: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			dataGridView1->RowCount = size;  // Хадаем количество строк
		}

		private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		}

		// Заполнение
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (iter == 0) {
			
				for (int i = 0; i < size; i++) {
					for (int j = 0; j < size; j++) {
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::White;
					}
				}
				iter++;
			}
			else
				work_20();
		}

		// Дополнительные функции для режима админа и победы
		private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (textBox2->Text == "admin") { 
				btnSettings->Visible = true;
			}
			if (textBox2->Text == "win") {
				label6->Text = "Scores: 400";
				MyForm4^ form4 = gcnew MyForm4();
				form4->ShowDialog();
				MyForm3^ form3 = gcnew MyForm3();
				form3->ShowDialog();
				Close();
			}
		}
		   
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	  
		private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}

		// Кнопка обновлений (в зависимости от выбранного режима выводит определенное сообщение)
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(btnUpdates, color_2);   // Активаци якнопки
			labelTemp->Text = "Updates";
			if (textBox2->Text == "admin") {
				MessageBox::Show("There will never be any updates again.Our company has gone bankruptand you are our last hope.Please give everyone a rating of 10!!\n", 
					"Update center", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
				MessageBox::Show("You have all the latest updates installed!\n" +
					"Last check time: today", "Update center", MessageBoxButtons::OK, MessageBoxIcon::Information);
			labelTemp->Text = "Main";
			DisableButton();  // Деактивация кнопки
		}

		// Кнопка информации
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(btnAbout, color_3);   // Активация кнопки
			btnBack->Enabled = true;
			labelTemp->Text = "About";
			MyForm2^ form2 = gcnew MyForm2();
			if (currentChildForm != nullptr)
			{
				currentChildForm->Close();
			}
			// Окно с информацией выводим на передний план вместо рабочей области
			currentChildForm = form2;
			form2->TopLevel = false;
			form2->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			form2->Dock = DockStyle::Fill;
			panelDesktop->Controls->Add(form2);
			form2->BringToFront();
			form2->Show();	
		}
		
		// Изменение фона рабочей области
		private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			colorDialog1->ShowDialog();
			panelDesktop->BackColor = colorDialog1->Color;
		}
		
		// кнопка настроек (работает в режиме админа)
		private: System::Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(btnSettings, color_1);
			if (panelMenu->Width != 80) {
				if (panelSettings->Visible == true) {
					panelSettings->Visible = false;
					labelTemp->Text = "Main";
				}
				else {
					panelSettings->Visible = true;
					labelTemp->Text = "Settings";
				}
			}	
		}
		
		// Функция активации кнопки
		void ActivateButton(Button^ senderBtn, Color clr)   // Активация кнопки
		{
			if (senderBtn != nullptr)
			{
				DisableButton();   // Деактивируем активные кнопки
				currentBtn = senderBtn;  // Новая активная кнопка
				currentBtn->BackColor = Color::Red;   // Цвет активной кнопки
				currentBtn->ForeColor = clr;  // Текст активной кнопки
			}
		}

		void DisableButton()  // Деактивация кнопки
		{
			if (currentBtn != nullptr)
			{
				currentBtn->BackColor = Color::Maroon;  // Стандартный фон
				currentBtn->ForeColor = Color::White;   // Стандартный цвет текста
			}
		}

		// Выход из программы
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			ActivateButton(btnExit, color_4);
			btnBack->Enabled = false;
			MyForm3^ form3 = gcnew MyForm3();
			form3->ShowDialog();
			Close();
		}
		
		// Загрузка вопросов/ответов в зависимости от выбранного режима
		private: System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e) {
			if (radioButton1->Checked) {
				if (textBox2->Text == "admin") {
					textBoxQuestions->Text = System::IO::File::ReadAllText("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\winapp client\\answers1.txt", System::Text::Encoding::Default);
				}
				else 
					textBoxQuestions->Text = System::IO::File::ReadAllText("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\winapp client\\1_copy.txt", System::Text::Encoding::Default);
			}

			if (radioButton2->Checked) {
				if (textBox2->Text == "admin")
					textBoxQuestions->Text = System::IO::File::ReadAllText("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\winapp client\\answers2.txt", System::Text::Encoding::Default);
				else
					textBoxQuestions->Text = System::IO::File::ReadAllText("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\winapp client\\2_copy.txt", System::Text::Encoding::Default);
			}

			if (radioButton3->Checked) {
				if (textBox2->Text == "admin") {
					textBoxQuestions->Text = System::IO::File::ReadAllText("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\winapp client\\answers1.txt", System::Text::Encoding::Default);
				}
				else
					textBoxQuestions->Text = System::IO::File::ReadAllText("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\winapp client\\1_copy.txt", System::Text::Encoding::Default);
			}

			if (radioButton4->Checked) {
				if (textBox2->Text == "admin")
					textBoxQuestions->Text = System::IO::File::ReadAllText("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\winapp client\\answer2.txt", System::Text::Encoding::Default);
				else
					textBoxQuestions->Text = System::IO::File::ReadAllText("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\winapp client\\2_copy.txt", System::Text::Encoding::Default);
			}
		}

		// Ссылка на вальдемарскую страницу
		private: System::Void linkToMe_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			Process::Start("https://vk.com/vtuteyshy");
		}
		
		// Функция сворачивания бокового меню
		void Collapsemenu() {
			buttonMenu->Dock = DockStyle::Fill;
			TextIconMenu->Width = 80;
			panelSettings->Visible = false;
			panelLock->Visible = false;
			panelMenu->Width = 80;
			btnSettings->Text = "S";
			btnAbout->Text = "I";
			btnUpdates->Text = "U";
			btnExit->Text = "E";
			this->Width -= 160;
			buttonMenu->Width -= 160;
		}

		private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {	
		}

		// Кнопка навигации (возврат к главному окну)
		private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
			btnBack->Enabled = false;
			DisableButton();
			if (currentChildForm != nullptr)
			{
				currentChildForm->Close();
				labelTemp->Text = "Main";
			}
		}

		// Клик мыши по форме для сворачивания бокового меню
		private: System::Void panelDesktop_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (checkBoxLock->Checked == false && panelMenu->Width != 80) {
				Collapsemenu();
				labelMenu->Visible = false;
				info_smth->SetToolTip(this->buttonMenu, "Expand Panel Menu");
			}
		}

		// Клик по кнопке меню
		private: System::Void buttonMenu_Click(System::Object^ sender, System::EventArgs^ e) {
			if (panelMenu->Width == 240) { // Сворачиваем боковое меню
				Collapsemenu();
				labelMenu->Visible = false;
				info_smth->SetToolTip(this->buttonMenu, "Expand Panel Menu");
			}
			else {  // Разворачиваем боковое меню
				panelMenu->Width = 240;
				TextIconMenu->Width = 240;
				buttonMenu->Dock = DockStyle::Right;
				buttonMenu->Width = 60;
				labelMenu->Visible = true;
				btnSettings->Text = btnSettings->Tag->ToString();
				btnAbout->Text = btnAbout->Tag->ToString();
				btnUpdates->Text = btnUpdates->Tag->ToString();
				btnExit->Text = btnExit->Tag->ToString();
				panelLock->Visible = true;
				this->Width += 160;
				info_smth->SetToolTip(this->buttonMenu, "Collapse Panel Menu");
			}
		}

		// Изменение цвета текста (доступно при админском режиме)
		private: System::Void buttonTextColor_Click(System::Object^ sender, System::EventArgs^ e) {
			colorDialog1->ShowDialog();
			groupBox1->ForeColor = colorDialog1->Color;
			button3->ForeColor = colorDialog1->Color;
			buttonLoad->ForeColor = colorDialog1->Color;
			comboBox1->ForeColor = colorDialog1->Color;
			textBox2->ForeColor = colorDialog1->Color;
			label6->ForeColor = colorDialog1->Color;
			dataGridView3->ForeColor = colorDialog1->Color;
		}
	private: System::Void buttonHelp_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("D:\\Справочник\\NewProject\\NewProject.chm");
	}
};
}
	