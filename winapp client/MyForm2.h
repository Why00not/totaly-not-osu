#pragma once

namespace l1rpv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Diagnostics;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::LinkLabel^ linkToVitaly;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::LinkLabel^ linkToVovka;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::LinkLabel^ linkToStepan;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panelReadFiles;
	private: System::Windows::Forms::LinkLabel^ Versions;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::LinkLabel^ License;
	private: System::Windows::Forms::LinkLabel^ PrivacyPolicy;
	private: System::Windows::Forms::LinkLabel^ TermsOfUse;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->linkToVitaly = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->linkToVovka = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->linkToStepan = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelReadFiles = (gcnew System::Windows::Forms::Panel());
			this->Versions = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->License = (gcnew System::Windows::Forms::LinkLabel());
			this->PrivacyPolicy = (gcnew System::Windows::Forms::LinkLabel());
			this->TermsOfUse = (gcnew System::Windows::Forms::LinkLabel());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panelReadFiles->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(20, 20);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 263);
			this->panel1->TabIndex = 0;
			this->toolTip1->SetToolTip(this->panel1, L"Read the greeting");
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(0, 40);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(398, 221);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(398, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"GENERAL INFORMATION";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(469, 21);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(488, 250);
			this->panel2->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->linkToVitaly);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox2->Location = System::Drawing::Point(123, 110);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(240, 54);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Astashkevich";
			// 
			// linkToVitaly
			// 
			this->linkToVitaly->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkToVitaly->Dock = System::Windows::Forms::DockStyle::Fill;
			this->linkToVitaly->Location = System::Drawing::Point(3, 23);
			this->linkToVitaly->Name = L"linkToVitaly";
			this->linkToVitaly->Size = System::Drawing::Size(234, 28);
			this->linkToVitaly->TabIndex = 0;
			this->linkToVitaly->TabStop = true;
			this->linkToVitaly->Text = L"https://vk.com/id191152138";
			this->linkToVitaly->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->linkToVitaly, L"Click on the link");
			this->linkToVitaly->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm2::linkToVitaly_LinkClicked);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->linkToVovka);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox3->Location = System::Drawing::Point(123, 170);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(240, 54);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Savitski";
			// 
			// linkToVovka
			// 
			this->linkToVovka->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkToVovka->Dock = System::Windows::Forms::DockStyle::Fill;
			this->linkToVovka->Location = System::Drawing::Point(3, 23);
			this->linkToVovka->Name = L"linkToVovka";
			this->linkToVovka->Size = System::Drawing::Size(234, 28);
			this->linkToVovka->TabIndex = 0;
			this->linkToVovka->TabStop = true;
			this->linkToVovka->Text = L"https://vk.com/vtuteyshy";
			this->linkToVovka->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->linkToVovka, L"Click on the link");
			this->linkToVovka->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm2::linkToVovka_LinkClicked);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->linkToStepan);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox1->Location = System::Drawing::Point(123, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(240, 54);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Asvetimsky";
			// 
			// linkToStepan
			// 
			this->linkToStepan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkToStepan->Dock = System::Windows::Forms::DockStyle::Fill;
			this->linkToStepan->Location = System::Drawing::Point(3, 23);
			this->linkToStepan->Name = L"linkToStepan";
			this->linkToStepan->Size = System::Drawing::Size(234, 28);
			this->linkToStepan->TabIndex = 0;
			this->linkToStepan->TabStop = true;
			this->linkToStepan->Text = L"https://vk.com/i_why_not_i";
			this->linkToStepan->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->linkToStepan, L"Click on the link");
			this->linkToStepan->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm2::linkToStepan_LinkClicked);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(486, 40);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Contact center";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelReadFiles
			// 
			this->panelReadFiles->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->panelReadFiles->BackColor = System::Drawing::Color::OldLace;
			this->panelReadFiles->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelReadFiles->Controls->Add(this->Versions);
			this->panelReadFiles->Controls->Add(this->label5);
			this->panelReadFiles->Controls->Add(this->License);
			this->panelReadFiles->Controls->Add(this->PrivacyPolicy);
			this->panelReadFiles->Controls->Add(this->TermsOfUse);
			this->panelReadFiles->Location = System::Drawing::Point(469, 291);
			this->panelReadFiles->Name = L"panelReadFiles";
			this->panelReadFiles->Size = System::Drawing::Size(488, 261);
			this->panelReadFiles->TabIndex = 16;
			// 
			// Versions
			// 
			this->Versions->AutoSize = true;
			this->Versions->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Versions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Versions->Location = System::Drawing::Point(190, 179);
			this->Versions->Name = L"Versions";
			this->Versions->Size = System::Drawing::Size(106, 20);
			this->Versions->TabIndex = 9;
			this->Versions->TabStop = true;
			this->Versions->Text = L"Version 1.0.7";
			this->toolTip1->SetToolTip(this->Versions, L"Click on the link");
			this->Versions->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm2::Versions_LinkClicked);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::AntiqueWhite;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Dock = System::Windows::Forms::DockStyle::Top;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(486, 60);
			this->label5->TabIndex = 7;
			this->label5->Text = L"For successful use of the program, read the data from the files by\r\nclicking on t"
				L"he links.";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// License
			// 
			this->License->AutoSize = true;
			this->License->Cursor = System::Windows::Forms::Cursors::Hand;
			this->License->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->License->Location = System::Drawing::Point(118, 139);
			this->License->Name = L"License";
			this->License->Size = System::Drawing::Size(250, 20);
			this->License->TabIndex = 3;
			this->License->TabStop = true;
			this->License->Text = L"Terms of the license agreement.";
			this->toolTip1->SetToolTip(this->License, L"Click on the link");
			this->License->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm2::License_LinkClicked);
			// 
			// PrivacyPolicy
			// 
			this->PrivacyPolicy->AutoSize = true;
			this->PrivacyPolicy->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PrivacyPolicy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PrivacyPolicy->Location = System::Drawing::Point(186, 99);
			this->PrivacyPolicy->Name = L"PrivacyPolicy";
			this->PrivacyPolicy->Size = System::Drawing::Size(114, 20);
			this->PrivacyPolicy->TabIndex = 2;
			this->PrivacyPolicy->TabStop = true;
			this->PrivacyPolicy->Text = L"Privacy Policy";
			this->toolTip1->SetToolTip(this->PrivacyPolicy, L"Click on the link");
			this->PrivacyPolicy->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm2::PrivacyPolicy_LinkClicked);
			// 
			// TermsOfUse
			// 
			this->TermsOfUse->AutoSize = true;
			this->TermsOfUse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TermsOfUse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TermsOfUse->Location = System::Drawing::Point(188, 59);
			this->TermsOfUse->Name = L"TermsOfUse";
			this->TermsOfUse->Size = System::Drawing::Size(111, 20);
			this->TermsOfUse->TabIndex = 1;
			this->TermsOfUse->TabStop = true;
			this->TermsOfUse->Text = L"Terms of Use";
			this->toolTip1->SetToolTip(this->TermsOfUse, L"Click on the link");
			this->TermsOfUse->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm2::TermsOfUse_LinkClicked);
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(20, 290);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(400, 263);
			this->panel3->TabIndex = 2;
			this->toolTip1->SetToolTip(this->panel3, L"Read rules of the game");
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(0, 40);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(398, 221);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = resources->GetString(L"textBox2.Text");
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Blue;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Lime;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(398, 40);
			this->label3->TabIndex = 0;
			this->label3->Text = L"RULES OF THE GAME";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(982, 593);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panelReadFiles);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->panelReadFiles->ResumeLayout(false);
			this->panelReadFiles->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void linkToStepan_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			Process::Start("https://vk.com/id191152138");
		}
		private: System::Void linkToVitaly_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			Process::Start("https://vk.com/i_why_not_i");
		}
		private: System::Void linkToVovka_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			Process::Start("https://vk.com/vtuteyshy");
		}
		private: System::Void TermsOfUse_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			Process::Start("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\Terms of use.txt");
		}
		private: System::Void PrivacyPolicy_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			Process::Start("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\Privacy Policy.txt");
		}
		private: System::Void License_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			Process::Start("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\License Agreement.txt");
		}
		private: System::Void Versions_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			Process::Start("D:\\БНТУ\\2 курс\\4 семестр\\КСИС\\Курсовая\\Versions.txt");
		}
	};
}
