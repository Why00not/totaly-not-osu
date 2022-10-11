#include"iostream"
#include"cmath"
#pragma once
#pragma comment(lib,"ws2_32.lib")
#include <WinSock2.h>
#include <iostream>
#pragma warning(disable:4996)
#include <fstream>

#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;

SOCKET sListen;
SOCKET connection;
int sizeofaddr;
char answers[456];
int iter = 0;
char msgget[456] = "connect";
int port = 9000;
const int size = 20;
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


	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//textBox2->Text = "20";
			//
			//TODO: добавьте код конструктора
			//
			this->Width = 430;
			this->Height = 325;
			panel1->Dock = DockStyle::Fill;
			panel1->BorderStyle = BorderStyle::Fixed3D;

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



	private: System::Windows::Forms::Button^ button4;
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
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Panel^ panel1;















	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(20) {
				this->с20, this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->c2, this->c3, this->c4, this->c5, this->c6, this->c7, this->c8, this->c9, this->c10
			});
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 50;
			this->dataGridView1->RowTemplate->Height = 25;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(400, 505);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->Visible = false;
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
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rockwell", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(18, 167);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(394, 82);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Create server";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->textBox2->Location = System::Drawing::Point(90, 28);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(251, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(455, 333);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(394, 81);
			this->button4->TabIndex = 3;
			this->button4->Text = L"autocreate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"127.0.0.1" });
			this->comboBox2->Location = System::Drawing::Point(18, 97);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(394, 24);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->Text = L"127.0.0.1";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(427, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(431, 325);
			this->panel1->TabIndex = 9;
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(861, 537);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"server_part.exe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->RowCount = 20;
	}
	void fill2() {
		char text[] = "diskinglassociationturitypographysiotheocbilizationaturecorleaialgorithmeasurgaosttilityrannosauenpgisnbdgametamorprmiyyoiearngnessenchuetrmtgsraiochemiseosnionroseodtancentrsttotaolepbnymnertreibinestonorahrelarymsuofctnceratpogufiooucnlhienlutsofreptunpkeoncmobespsolihpmyeerwikhianguhctekramrtancestseninromurdeltdeiriaurpretnerrotacirarumoinegnidliubpihsnoqrofsnartekcitehtsarnilerehpsonoitazinag";
		int a = 0;
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToChar(text[a]);
				a++;
			}
		}
	}
	void fill1() {
		char text[] = "advertisementechnololanthropistandardizgysitarianismithereayhssaurustinessestetmpeogynecologistraninmcyoedientertaiabsoayehlrlitiesubjnillnsnntogiogistsuemgialinihhnblionuckcehsviuilcciaotileletnthenmnniysncamsgemitfmmebaonsiinzsdiooveoeerrcioplmoiloponilrnnvectioaritacudezewtteliptrnegnizihtapasallpmauaohcyspihsdryleaoecenoitazinorhcnisrcdifitnedicinnarytsgserbwolfnoitcafsitaeorygolotamreddetraeh";
		int a = 0;
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToChar(text[a]);
				a++;
			}
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
		   void work_proc() {
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
			   SOCKET sListen = socket(AF_INET, SOCK_STREAM, NULL);
			   //прив€зка адреса сокету
			   bind(sListen, (SOCKADDR*)&addr, sizeof(addr));
			   //слушаем
			   listen(sListen, SOMAXCONN);
			   connection = accept(sListen, (SOCKADDR*)&addr, &sizeofaddr);

			   if (recv(connection, msgget, sizeof(msgget), NULL))
				   textBox2->Text = Convert::ToString(1);

			   //считывание таблицы
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
						   answers[a] = ' ';
					   a++;
				   }
			   }
			   //проверка и отправка результата
			   char msgsend[256];
			   recv(connection, msgget, sizeof(msgget), NULL);
			   for (int i = 0; i < 100; i++) {
				   if (msgget[i] == answers[i])
					   msgsend[i] = '1';
				   else
					   msgsend[i] = '0';
			   }
			   send(connection, msgsend, sizeof(msgsend), NULL);
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

			   std::string abc = marshal_as<std::string>(comboBox2->Text);
			   char cur_ip[20];
			   strcpy(cur_ip, abc.c_str());;

			   addr.sin_addr.s_addr = inet_addr(cur_ip);//127.0.0.1
			   addr.sin_port = htons(port);
			   addr.sin_family = AF_INET;
			   SOCKET sListen = socket(AF_INET, SOCK_STREAM, NULL);
			   //прив€зка адреса сокету
			   bind(sListen, (SOCKADDR*)&addr, sizeof(addr));
			   //слушаем
			   listen(sListen, SOMAXCONN);
			   connection = accept(sListen, (SOCKADDR*)&addr, &sizeofaddr);


			   if (recv(connection, msgget, sizeof(msgget), NULL)) {
				   if (msgget[0] == '1')
					   fill1();
				   if (msgget[0] == '2')
					   fill2();
				   textBox2->Text = Convert::ToString("client connected");
			   }
			   Sleep(5);



			   //считывание таблицы
			   char answers[456];
			   char answer[3];
			   int a = 0;
			   for (int i = 0; i < 20; i++) {
				   for (int j = 0; j < 20; j++) {
					   if (dataGridView1->Rows[i]->Cells[j]->Value) {
						   answer[0] = Convert::ToChar(dataGridView1->Rows[i]->Cells[j]->Value);
						   answers[a] = answer[0];
					   }
					   else
						   answers[a] = ' ';
					   a++;
				   }
			   }
			   //проверка и отправка результата
			   char msgsend[456];
			   recv(connection, msgget, sizeof(msgget), NULL);
			   for (int i = 0; i < 20*20; i++) {
				   if (msgget[i] == answers[i])
					   msgsend[i] = '1';
				   else
					   msgsend[i] = '0';
			   }
			   send(connection, msgsend, sizeof(msgsend), NULL);
			   shutdown(connection, SD_SEND);
			   closesocket(connection);
			   WSACleanup();
			   //port++;
		   }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		while (true) {
			work_20();
		}
		
		
	}
	
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	fill2();
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "ru");
	ofstream fout;
	fout.open("data.txt");
	string res_text;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			res_text += Convert::ToChar(dataGridView1->Rows[i]->Cells[j]->Value);
		}
	}
	fout << res_text;
	fout.close();
	textBox2->Text = "data saved";
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}