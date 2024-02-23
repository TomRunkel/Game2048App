#pragma once
#include "Game2048.h"
#include <array>

#define COLOR_0 Silver
#define COLOR_2 WhiteSmoke
#define COLOR_4 PaleGreen
#define COLOR_8 MediumSpringGreen
#define COLOR_16 MediumSeaGreen
#define COLOR_32 SeaGreen
#define COLOR_64 LightSeaGreen
#define COLOR_128 Teal
#define COLOR_256 SteelBlue
#define COLOR_512 RoyalBlue
#define COLOR_1024 MediumBlue
#define COLOR_2048 MidnightBlue

namespace Game2048App { 

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Game2048::Game Game1;



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
	private: System::Windows::Forms::Label^ label_headline;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ Message;
	internal: System::Windows::Forms::Panel^ GameBackground;
	private:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label_headline = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Message = (gcnew System::Windows::Forms::Label());
			this->GameBackground = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->GameBackground->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_headline
			// 
			this->label_headline->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_headline->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_headline->ForeColor = System::Drawing::Color::Gainsboro;
			this->label_headline->Location = System::Drawing::Point(71, 31);
			this->label_headline->Name = L"label_headline";
			this->label_headline->Size = System::Drawing::Size(352, 44);
			this->label_headline->TabIndex = 0;
			this->label_headline->Text = L"2048";
			this->label_headline->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_headline->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Gainsboro;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(166, 511);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 52);
			this->button1->TabIndex = 1;
			this->button1->Text = L"New Game";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &MyForm::button1_PreviewKeyDown);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(74, 74);
			this->label1->TabIndex = 2;
			this->label1->Text = L"2048";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->label1);
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(8, 8);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(80, 80);
			this->panel1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 3);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(74, 74);
			this->label2->TabIndex = 2;
			this->label2->Text = L"2048";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Silver;
			this->panel2->Controls->Add(this->label2);
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel2->Location = System::Drawing::Point(93, 8);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(80, 80);
			this->panel2->TabIndex = 4;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Silver;
			this->panel3->Controls->Add(this->label3);
			this->panel3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel3->Location = System::Drawing::Point(178, 8);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(80, 80);
			this->panel3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 3);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label3->Size = System::Drawing::Size(74, 74);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2048";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Visible = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Silver;
			this->panel4->Controls->Add(this->label4);
			this->panel4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel4->Location = System::Drawing::Point(263, 8);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(80, 80);
			this->panel4->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 3);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label4->Size = System::Drawing::Size(74, 74);
			this->label4->TabIndex = 2;
			this->label4->Text = L"2048";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Silver;
			this->panel5->Controls->Add(this->label5);
			this->panel5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel5->Location = System::Drawing::Point(8, 93);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(80, 80);
			this->panel5->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 3);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label5->Size = System::Drawing::Size(74, 74);
			this->label5->TabIndex = 2;
			this->label5->Text = L"2048";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Visible = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Silver;
			this->panel6->Controls->Add(this->label6);
			this->panel6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel6->Location = System::Drawing::Point(93, 93);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(80, 80);
			this->panel6->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 3);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label6->Size = System::Drawing::Size(74, 74);
			this->label6->TabIndex = 2;
			this->label6->Text = L"2048";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Visible = false;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Silver;
			this->panel7->Controls->Add(this->label7);
			this->panel7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel7->Location = System::Drawing::Point(178, 93);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(80, 80);
			this->panel7->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 3);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label7->Size = System::Drawing::Size(74, 74);
			this->label7->TabIndex = 2;
			this->label7->Text = L"2048";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Visible = false;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Silver;
			this->panel8->Controls->Add(this->label8);
			this->panel8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel8->Location = System::Drawing::Point(263, 93);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(80, 80);
			this->panel8->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(3, 3);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label8->Size = System::Drawing::Size(74, 74);
			this->label8->TabIndex = 2;
			this->label8->Text = L"2048";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Visible = false;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Silver;
			this->panel9->Controls->Add(this->label9);
			this->panel9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel9->Location = System::Drawing::Point(8, 178);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(80, 80);
			this->panel9->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 3);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label9->Size = System::Drawing::Size(74, 74);
			this->label9->TabIndex = 2;
			this->label9->Text = L"2048";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Visible = false;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Silver;
			this->panel10->Controls->Add(this->label10);
			this->panel10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel10->Location = System::Drawing::Point(93, 178);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(80, 80);
			this->panel10->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(3, 3);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label10->Size = System::Drawing::Size(74, 74);
			this->label10->TabIndex = 2;
			this->label10->Text = L"2048";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Visible = false;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Silver;
			this->panel11->Controls->Add(this->label11);
			this->panel11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel11->Location = System::Drawing::Point(178, 178);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(80, 80);
			this->panel11->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(3, 3);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label11->Size = System::Drawing::Size(74, 74);
			this->label11->TabIndex = 2;
			this->label11->Text = L"2048";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Visible = false;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Silver;
			this->panel12->Controls->Add(this->label12);
			this->panel12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel12->Location = System::Drawing::Point(263, 178);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(80, 80);
			this->panel12->TabIndex = 11;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 3);
			this->label12->Name = L"label12";
			this->label12->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label12->Size = System::Drawing::Size(74, 74);
			this->label12->TabIndex = 2;
			this->label12->Text = L"2048";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label12->Visible = false;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Silver;
			this->panel13->Controls->Add(this->label13);
			this->panel13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel13->Location = System::Drawing::Point(8, 263);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(80, 80);
			this->panel13->TabIndex = 14;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 3);
			this->label13->Name = L"label13";
			this->label13->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label13->Size = System::Drawing::Size(74, 74);
			this->label13->TabIndex = 2;
			this->label13->Text = L"2048";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Visible = false;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Silver;
			this->panel14->Controls->Add(this->label14);
			this->panel14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel14->Location = System::Drawing::Point(93, 263);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(80, 80);
			this->panel14->TabIndex = 13;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(3, 3);
			this->label14->Name = L"label14";
			this->label14->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label14->Size = System::Drawing::Size(74, 74);
			this->label14->TabIndex = 2;
			this->label14->Text = L"2048";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label14->Visible = false;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Silver;
			this->panel15->Controls->Add(this->label15);
			this->panel15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel15->Location = System::Drawing::Point(178, 263);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(80, 80);
			this->panel15->TabIndex = 12;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(3, 3);
			this->label15->Name = L"label15";
			this->label15->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label15->Size = System::Drawing::Size(74, 74);
			this->label15->TabIndex = 2;
			this->label15->Text = L"2048";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label15->Visible = false;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Silver;
			this->panel16->Controls->Add(this->label16);
			this->panel16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel16->Location = System::Drawing::Point(263, 263);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(80, 80);
			this->panel16->TabIndex = 11;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(3, 3);
			this->label16->Name = L"label16";
			this->label16->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label16->Size = System::Drawing::Size(74, 74);
			this->label16->TabIndex = 2;
			this->label16->Text = L"2048";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label16->Visible = false;
			// 
			// Message
			// 
			this->Message->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Message->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Message->Location = System::Drawing::Point(68, 447);
			this->Message->Name = L"Message";
			this->Message->Size = System::Drawing::Size(355, 63);
			this->Message->TabIndex = 15;
			this->Message->Text = L"Message";
			this->Message->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Message->Visible = false;
			// 
			// GameBackground
			// 
			this->GameBackground->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GameBackground->BackColor = System::Drawing::Color::DarkGray;
			this->GameBackground->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->GameBackground->Controls->Add(this->panel13);
			this->GameBackground->Controls->Add(this->panel9);
			this->GameBackground->Controls->Add(this->panel14);
			this->GameBackground->Controls->Add(this->panel15);
			this->GameBackground->Controls->Add(this->panel5);
			this->GameBackground->Controls->Add(this->panel16);
			this->GameBackground->Controls->Add(this->panel10);
			this->GameBackground->Controls->Add(this->panel11);
			this->GameBackground->Controls->Add(this->panel4);
			this->GameBackground->Controls->Add(this->panel12);
			this->GameBackground->Controls->Add(this->panel6);
			this->GameBackground->Controls->Add(this->panel3);
			this->GameBackground->Controls->Add(this->panel7);
			this->GameBackground->Controls->Add(this->panel2);
			this->GameBackground->Controls->Add(this->panel8);
			this->GameBackground->Controls->Add(this->panel1);
			this->GameBackground->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameBackground->Location = System::Drawing::Point(71, 92);
			this->GameBackground->Name = L"GameBackground";
			this->GameBackground->Size = System::Drawing::Size(352, 352);
			this->GameBackground->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(495, 597);
			this->Controls->Add(this->GameBackground);
			this->Controls->Add(this->Message);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_headline);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->GameBackground->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Game1 = Game2048::Game::Game();
		Game1.newTwo();
		Game1.newTwo();

		for (int i = 0; i < 16; i++)
		{
			this->Message->Visible = false;
			Game2048::Controls::gameLabels[i]->Text = Game1.print(i / 4, i % 4).ToString();
			if (Game2048::Controls::gameLabels[i]->Text == "0")
			{
				Game2048::Controls::gameLabels[i]->Visible = false;
				Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_0;
			}
			else
			{
				Game2048::Controls::gameLabels[i]->Visible = true;
				Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_2;
			}
		}
	}
	


private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	switch (e->KeyCode)
	{
	case Keys::Up:
		Game1.up(false);
		break;
	case Keys::Down:
		Game1.down(false);
		break;
	case Keys::Left:
		Game1.left(false);
		break;
	case Keys::Right:
		Game1.right(false);
		break;
	default:
		break;
	}
}
private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
{
	for (int i = 0; i < 16; i++)
	{
		Game2048::Controls::gameLabels[i]->Text = Game1.print(i / 4, i % 4).ToString();
		if (Game2048::Controls::gameLabels[i]->Text == "0")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_0;
			Game2048::Controls::gameLabels[i]->Visible = false;
		} else Game2048::Controls::gameLabels[i]->Visible = true;
		if (Game2048::Controls::gameLabels[i]->Text == "2")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_2;
		}
		if (Game2048::Controls::gameLabels[i]->Text == "4")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_4;
		}
		if (Game2048::Controls::gameLabels[i]->Text == "8")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_8;
		}
		if (Game2048::Controls::gameLabels[i]->Text == "16")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_16;
		}
		if (Game2048::Controls::gameLabels[i]->Text == "32")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_32;
		}
		if (Game2048::Controls::gameLabels[i]->Text == "64")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_64;
		}
		if (Game2048::Controls::gameLabels[i]->Text == "128")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_128;
		}
		if (Game2048::Controls::gameLabels[i]->Text == "256")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_256;
		}
		if (Game2048::Controls::gameLabels[i]->Text == "512")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_512;
		}
		if (Game2048::Controls::gameLabels[i]->Text == "1024")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_1024;
		}
		if (Game2048::Controls::gameLabels[i]->Text == "2048")
		{
			Game2048::Controls::gamePanels[i]->BackColor = System::Drawing::Color::COLOR_2048;
		}
	}

	if (Game1.checkDefeat() == true)
	{
		this->Message->Text = "Game over!";
		this->Message->Visible = true;
		return;
	}
	if (Game1.checkVictory() == true)
	{
		this->Message->Text = "CONGRATULATIONS!\nYou won!";
		this->Message->Visible = true;
		return;
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
	Game2048::Controls::gameLabels[0] = label1;
	Game2048::Controls::gameLabels[1] = label2;
	Game2048::Controls::gameLabels[2] = label3;
	Game2048::Controls::gameLabels[3] = label4;
	Game2048::Controls::gameLabels[4] = label5;
	Game2048::Controls::gameLabels[5] = label6;
	Game2048::Controls::gameLabels[6] = label7;
	Game2048::Controls::gameLabels[7] = label8;
	Game2048::Controls::gameLabels[8] = label9;
	Game2048::Controls::gameLabels[9] = label10;
	Game2048::Controls::gameLabels[10] = label11;
	Game2048::Controls::gameLabels[11] = label12;
	Game2048::Controls::gameLabels[12] = label13;
	Game2048::Controls::gameLabels[13] = label14;
	Game2048::Controls::gameLabels[14] = label15;
	Game2048::Controls::gameLabels[15] = label16;

	Game2048::Controls::gamePanels[0] = panel1;
	Game2048::Controls::gamePanels[1] = panel2;
	Game2048::Controls::gamePanels[2] = panel3;
	Game2048::Controls::gamePanels[3] = panel4;
	Game2048::Controls::gamePanels[4] = panel5;
	Game2048::Controls::gamePanels[5] = panel6;
	Game2048::Controls::gamePanels[6] = panel7;
	Game2048::Controls::gamePanels[7] = panel8;
	Game2048::Controls::gamePanels[8] = panel9;
	Game2048::Controls::gamePanels[9] = panel10;
	Game2048::Controls::gamePanels[10] = panel11;
	Game2048::Controls::gamePanels[11] = panel12;
	Game2048::Controls::gamePanels[12] = panel13;
	Game2048::Controls::gamePanels[13] = panel14;
	Game2048::Controls::gamePanels[14] = panel15;
	Game2048::Controls::gamePanels[15] = panel16;
}
private: System::Void button1_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e) 
{
	e->IsInputKey = true;
}
};
}





