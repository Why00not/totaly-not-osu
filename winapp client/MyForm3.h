#pragma once
#include <ctime>
namespace l1rpv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// —водка дл€ MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		int selected_stars;
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			selected_stars = 0;	
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ star_5;

	private: System::Windows::Forms::Button^ star_4;

	private: System::Windows::Forms::Button^ star_2;
	private: System::Windows::Forms::Button^ star_3;


	private: System::Windows::Forms::Button^ star_1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnNot;

	private: System::Windows::Forms::Button^ btnRemind;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Label^ labelMsg;



	private: System::Windows::Forms::Timer^ timer_delay;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::ComponentModel::IContainer^ components;


	protected:


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
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelMsg = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->star_5 = (gcnew System::Windows::Forms::Button());
			this->star_4 = (gcnew System::Windows::Forms::Button());
			this->star_2 = (gcnew System::Windows::Forms::Button());
			this->star_3 = (gcnew System::Windows::Forms::Button());
			this->star_1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnNot = (gcnew System::Windows::Forms::Button());
			this->btnRemind = (gcnew System::Windows::Forms::Button());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->timer_delay = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->labelMsg);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(282, 162);
			this->panel1->TabIndex = 0;
			// 
			// labelMsg
			// 
			this->labelMsg->Dock = System::Windows::Forms::DockStyle::Top;
			this->labelMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMsg->ForeColor = System::Drawing::Color::Yellow;
			this->labelMsg->Location = System::Drawing::Point(0, 117);
			this->labelMsg->Name = L"labelMsg";
			this->labelMsg->Size = System::Drawing::Size(282, 42);
			this->labelMsg->TabIndex = 2;
			this->labelMsg->Text = L"Click on a number to rate the app";
			this->labelMsg->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(0, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(282, 67);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enjoying \"Crosswords from Stepan\"\?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(282, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Before you leave...";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->star_5);
			this->panel2->Controls->Add(this->star_4);
			this->panel2->Controls->Add(this->star_2);
			this->panel2->Controls->Add(this->star_3);
			this->panel2->Controls->Add(this->star_1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 162);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(282, 48);
			this->panel2->TabIndex = 1;
			// 
			// star_5
			// 
			this->star_5->BackColor = System::Drawing::Color::White;
			this->star_5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->star_5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->star_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->star_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->star_5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->star_5->Location = System::Drawing::Point(229, 6);
			this->star_5->Name = L"star_5";
			this->star_5->Size = System::Drawing::Size(36, 36);
			this->star_5->TabIndex = 4;
			this->star_5->Text = L"5";
			this->toolTip1->SetToolTip(this->star_5, L"Perfect!");
			this->star_5->UseVisualStyleBackColor = false;
			this->star_5->Click += gcnew System::EventHandler(this, &MyForm3::star_5_Click);
			// 
			// star_4
			// 
			this->star_4->BackColor = System::Drawing::Color::White;
			this->star_4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->star_4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->star_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->star_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->star_4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->star_4->Location = System::Drawing::Point(176, 6);
			this->star_4->Name = L"star_4";
			this->star_4->Size = System::Drawing::Size(36, 36);
			this->star_4->TabIndex = 3;
			this->star_4->Text = L"4";
			this->toolTip1->SetToolTip(this->star_4, L"Good");
			this->star_4->UseVisualStyleBackColor = false;
			this->star_4->Click += gcnew System::EventHandler(this, &MyForm3::star_4_Click);
			// 
			// star_2
			// 
			this->star_2->BackColor = System::Drawing::Color::White;
			this->star_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->star_2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->star_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->star_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->star_2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->star_2->Location = System::Drawing::Point(70, 6);
			this->star_2->Name = L"star_2";
			this->star_2->Size = System::Drawing::Size(36, 36);
			this->star_2->TabIndex = 2;
			this->star_2->Text = L"2";
			this->toolTip1->SetToolTip(this->star_2, L"Bad");
			this->star_2->UseVisualStyleBackColor = false;
			this->star_2->Click += gcnew System::EventHandler(this, &MyForm3::star_2_Click);
			// 
			// star_3
			// 
			this->star_3->BackColor = System::Drawing::Color::White;
			this->star_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->star_3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->star_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->star_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->star_3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->star_3->Location = System::Drawing::Point(123, 6);
			this->star_3->Name = L"star_3";
			this->star_3->Size = System::Drawing::Size(36, 36);
			this->star_3->TabIndex = 1;
			this->star_3->Text = L"3";
			this->toolTip1->SetToolTip(this->star_3, L"Satisfactory");
			this->star_3->UseVisualStyleBackColor = false;
			this->star_3->Click += gcnew System::EventHandler(this, &MyForm3::star_3_Click);
			// 
			// star_1
			// 
			this->star_1->BackColor = System::Drawing::Color::White;
			this->star_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->star_1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->star_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->star_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->star_1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->star_1->Location = System::Drawing::Point(17, 6);
			this->star_1->Name = L"star_1";
			this->star_1->Size = System::Drawing::Size(36, 36);
			this->star_1->TabIndex = 0;
			this->star_1->Text = L"1";
			this->toolTip1->SetToolTip(this->star_1, L"Trash");
			this->star_1->UseVisualStyleBackColor = false;
			this->star_1->Click += gcnew System::EventHandler(this, &MyForm3::star_1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->btnNot);
			this->panel3->Controls->Add(this->btnRemind);
			this->panel3->Controls->Add(this->btnSubmit);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 210);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(282, 143);
			this->panel3->TabIndex = 2;
			// 
			// btnNot
			// 
			this->btnNot->BackColor = System::Drawing::Color::Red;
			this->btnNot->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNot->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnNot->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnNot->FlatAppearance->BorderSize = 2;
			this->btnNot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNot->ForeColor = System::Drawing::Color::White;
			this->btnNot->Location = System::Drawing::Point(0, 90);
			this->btnNot->Name = L"btnNot";
			this->btnNot->Size = System::Drawing::Size(282, 45);
			this->btnNot->TabIndex = 2;
			this->btnNot->Text = L"Don\'t ask again";
			this->toolTip1->SetToolTip(this->btnNot, L"Permanently disable");
			this->btnNot->UseVisualStyleBackColor = false;
			this->btnNot->Click += gcnew System::EventHandler(this, &MyForm3::btnNot_Click);
			// 
			// btnRemind
			// 
			this->btnRemind->BackColor = System::Drawing::Color::Red;
			this->btnRemind->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRemind->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRemind->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnRemind->FlatAppearance->BorderSize = 2;
			this->btnRemind->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRemind->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRemind->ForeColor = System::Drawing::Color::White;
			this->btnRemind->Location = System::Drawing::Point(0, 45);
			this->btnRemind->Name = L"btnRemind";
			this->btnRemind->Size = System::Drawing::Size(282, 45);
			this->btnRemind->TabIndex = 1;
			this->btnRemind->Text = L"Remind me later";
			this->toolTip1->SetToolTip(this->btnRemind, L"Postpone notification for a certain period of time");
			this->btnRemind->UseVisualStyleBackColor = false;
			this->btnRemind->Click += gcnew System::EventHandler(this, &MyForm3::btnRemind_Click);
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::Red;
			this->btnSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSubmit->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSubmit->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnSubmit->FlatAppearance->BorderSize = 2;
			this->btnSubmit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSubmit->ForeColor = System::Drawing::Color::White;
			this->btnSubmit->Location = System::Drawing::Point(0, 0);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(282, 45);
			this->btnSubmit->TabIndex = 0;
			this->btnSubmit->Text = L"Submit";
			this->toolTip1->SetToolTip(this->btnSubmit, L"Send a rating");
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &MyForm3::btnSubmit_Click);
			// 
			// timer_delay
			// 
			this->timer_delay->Interval = 3000;
			this->timer_delay->Tick += gcnew System::EventHandler(this, &MyForm3::timer_delay_Tick);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 353);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm3";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void star_1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (star_1->BackColor == Color::White)
			{
				star_1->BackColor = Color::Gold;
				selected_stars = 1;
			}
			else if (star_1->BackColor == Color::Gold)
			{
				star_1->BackColor = Color::White;
				star_2->BackColor = Color::White;
				star_3->BackColor = Color::White;
				star_4->BackColor = Color::White;
				star_5->BackColor = Color::White;
				selected_stars = 0;
			}
		}

		private: System::Void star_2_Click(System::Object^ sender, System::EventArgs^ e) {
			if (star_2->BackColor == Color::White)
			{
				star_1->BackColor = Color::Gold;
				star_2->BackColor = Color::Gold;
				selected_stars = 2;
			}
			else if (star_2->BackColor == Color::Gold)
			{
				star_2->BackColor = Color::White;
				star_3->BackColor = Color::White;
				star_4->BackColor = Color::White;
				star_5->BackColor = Color::White;
				selected_stars = 1;
			}

		}

		private: System::Void star_3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (star_3->BackColor == Color::White)
			{
				star_1->BackColor = Color::Gold;
				star_2->BackColor = Color::Gold;
				star_3->BackColor = Color::Gold;
				selected_stars = 3;
			}
			else if (star_3->BackColor == Color::Gold)
			{
				star_3->BackColor = Color::White;
				star_4->BackColor = Color::White;
				star_5->BackColor = Color::White;
				selected_stars = 2;
			}

		}

		private: System::Void star_4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (star_4->BackColor == Color::White)
			{
				star_1->BackColor = Color::Gold;
				star_2->BackColor = Color::Gold;
				star_3->BackColor = Color::Gold;
				star_4->BackColor = Color::Gold;
				selected_stars = 4;
			}
			else if (star_4->BackColor == Color::Gold)
			{
				star_4->BackColor = Color::White;
				star_5->BackColor = Color::White;
				selected_stars = 3;
			}
		}

		private: System::Void star_5_Click(System::Object^ sender, System::EventArgs^ e) {
			if (star_5->BackColor == Color::White)
			{
				star_1->BackColor = Color::Gold;
				star_2->BackColor = Color::Gold;
				star_3->BackColor = Color::Gold;
				star_4->BackColor = Color::Gold;
				star_5->BackColor = Color::Gold;
				selected_stars = 5;
			}
			else if (star_5->BackColor == Color::Gold)
			{
				star_5->BackColor = Color::White;
				selected_stars = 4;
			}
		}

		private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
			timer_delay->Start();
			if (selected_stars == 0)
			{
				labelMsg->Text = "You have not rated! Try again!";
			}
			else
			{
				if (selected_stars == 1)
				{
					labelMsg->Text = "Is it a joke?";
				}
				else if (selected_stars == 2)
				{
					labelMsg->Text = "Please, don't!";
				}
				else if (selected_stars == 3)
				{
					labelMsg->Text = "Have a good day!";
				}
				else if (selected_stars == 4)
				{
					labelMsg->Text = "Thank you very much!";
				}
				else if (selected_stars == 5)
				{
					labelMsg->Text = "God bless you!";
				}
			}

		}

		private: System::Void btnRemind_Click(System::Object^ sender, System::EventArgs^ e) {
			Close();
		}

		private: System::Void btnNot_Click(System::Object^ sender, System::EventArgs^ e) {
			Close();
		}

		private: System::Void timer_delay_Tick(System::Object^ sender, System::EventArgs^ e) {
			timer_delay->Stop();
			if (selected_stars == 0)
			{
				labelMsg->Text = "Click on a number to rate the app!";
			}
			else
			{
				Close();
			}
		}
	};
}
