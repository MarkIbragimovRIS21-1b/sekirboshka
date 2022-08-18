#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include <msclr\marshal_cppstd.h>

namespace sekirboshka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			srand(time(NULL));
			std::ifstream fin;
			fin.open("Words.txt");
			if (!fin.is_open())
			{
				MessageBox::Show(L"Ошибка чтения файла Words.txt", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				exit(1);
			}

			InitializeComponent();
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
	private: string* word = new string;
		   string* word1 = new string;
		   string* word_game = new string;
		   string* help = new string;
		   int picture = 0;
		   int star = 0;
		   int num;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ buttonClose;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelWord;

	private: System::Windows::Forms::Button^ buttonNewWord;
	private: System::Windows::Forms::Label^ labelHelp;


	private: System::Windows::Forms::Button^ buttonHelp;

	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelWord = (gcnew System::Windows::Forms::Label());
			this->buttonNewWord = (gcnew System::Windows::Forms::Button());
			this->labelHelp = (gcnew System::Windows::Forms::Label());
			this->buttonHelp = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(26, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 500);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Location = System::Drawing::Point(552, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"А";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Location = System::Drawing::Point(607, 274);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Б";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(662, 274);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 41);
			this->button3->TabIndex = 3;
			this->button3->Text = L"В";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(717, 275);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 41);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Г";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Enabled = false;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(772, 274);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 41);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Д";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Enabled = false;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(827, 275);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 41);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Е";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Enabled = false;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(882, 275);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 41);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Ё";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Enabled = false;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(937, 275);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 41);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Ж";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Enabled = false;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(992, 275);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 41);
			this->button9->TabIndex = 9;
			this->button9->Text = L"З";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Enabled = false;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(1047, 275);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 41);
			this->button10->TabIndex = 10;
			this->button10->Text = L"И";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Enabled = false;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(552, 321);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(49, 41);
			this->button11->TabIndex = 11;
			this->button11->Text = L"Й";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->Enabled = false;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(607, 322);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(49, 41);
			this->button12->TabIndex = 12;
			this->button12->Text = L"К";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->Enabled = false;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(662, 322);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(49, 41);
			this->button13->TabIndex = 13;
			this->button13->Text = L"Л";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->Enabled = false;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(717, 322);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(49, 41);
			this->button14->TabIndex = 14;
			this->button14->Text = L"М";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->Enabled = false;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(772, 322);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 41);
			this->button15->TabIndex = 15;
			this->button15->Text = L"Н";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->Enabled = false;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(827, 322);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(49, 41);
			this->button16->TabIndex = 16;
			this->button16->Text = L"О";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->Enabled = false;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(882, 321);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 41);
			this->button17->TabIndex = 17;
			this->button17->Text = L"П";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->Enabled = false;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(937, 322);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(49, 41);
			this->button18->TabIndex = 18;
			this->button18->Text = L"Р";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button19->Enabled = false;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(992, 322);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(49, 41);
			this->button19->TabIndex = 19;
			this->button19->Text = L"С";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button20->Enabled = false;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(1047, 322);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(49, 41);
			this->button20->TabIndex = 20;
			this->button20->Text = L"Т";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->Enabled = false;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(552, 368);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(49, 41);
			this->button21->TabIndex = 21;
			this->button21->Text = L"У";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Enabled = false;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(607, 368);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(49, 41);
			this->button22->TabIndex = 22;
			this->button22->Text = L"Ф";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->Enabled = false;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(662, 369);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(49, 41);
			this->button23->TabIndex = 23;
			this->button23->Text = L"Х";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button24->Enabled = false;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(717, 369);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(49, 41);
			this->button24->TabIndex = 24;
			this->button24->Text = L"Ц";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button25->Enabled = false;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(772, 369);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(49, 41);
			this->button25->TabIndex = 25;
			this->button25->Text = L"Ч";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button26->Enabled = false;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(827, 369);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(49, 41);
			this->button26->TabIndex = 26;
			this->button26->Text = L"Ш";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button27->Enabled = false;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(882, 368);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(49, 41);
			this->button27->TabIndex = 27;
			this->button27->Text = L"Щ";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button28->Enabled = false;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(937, 369);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(49, 41);
			this->button28->TabIndex = 28;
			this->button28->Text = L"Ъ";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button29->Enabled = false;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(992, 368);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(49, 41);
			this->button29->TabIndex = 29;
			this->button29->Text = L"Ы";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.BackgroundImage")));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button30->Enabled = false;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(1047, 369);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(49, 41);
			this->button30->TabIndex = 30;
			this->button30->Text = L"Ь";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.BackgroundImage")));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button31->Enabled = false;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(552, 415);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(49, 41);
			this->button31->TabIndex = 31;
			this->button31->Text = L"Э";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.BackgroundImage")));
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button32->Enabled = false;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(607, 416);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(49, 41);
			this->button32->TabIndex = 32;
			this->button32->Text = L"Ю";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::White;
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button33->Enabled = false;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 1.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(662, 416);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(49, 41);
			this->button33->TabIndex = 33;
			this->button33->Text = L"Я";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// buttonClose
			// 
			this->buttonClose->BackColor = System::Drawing::Color::Transparent;
			this->buttonClose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonClose.BackgroundImage")));
			this->buttonClose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClose->Location = System::Drawing::Point(937, 450);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(166, 64);
			this->buttonClose->TabIndex = 34;
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &MyForm::buttonClose_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(637, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 42);
			this->label1->TabIndex = 35;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// labelWord
			// 
			this->labelWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelWord->Location = System::Drawing::Point(600, 36);
			this->labelWord->Name = L"labelWord";
			this->labelWord->Size = System::Drawing::Size(448, 89);
			this->labelWord->TabIndex = 36;
			this->labelWord->Text = L"СЛОВО";
			this->labelWord->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonNewWord
			// 
			this->buttonNewWord->BackColor = System::Drawing::Color::Transparent;
			this->buttonNewWord->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonNewWord.BackgroundImage")));
			this->buttonNewWord->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonNewWord->Enabled = false;
			this->buttonNewWord->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNewWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNewWord->Location = System::Drawing::Point(739, 450);
			this->buttonNewWord->Name = L"buttonNewWord";
			this->buttonNewWord->Size = System::Drawing::Size(172, 64);
			this->buttonNewWord->TabIndex = 37;
			this->buttonNewWord->UseVisualStyleBackColor = false;
			this->buttonNewWord->Click += gcnew System::EventHandler(this, &MyForm::buttonNewWord_Click);
			// 
			// labelHelp
			// 
			this->labelHelp->BackColor = System::Drawing::Color::Olive;
			this->labelHelp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHelp->Location = System::Drawing::Point(600, 146);
			this->labelHelp->Name = L"labelHelp";
			this->labelHelp->Size = System::Drawing::Size(448, 89);
			this->labelHelp->TabIndex = 38;
			this->labelHelp->Text = L"ПОДСКАЗКА";
			this->labelHelp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonHelp
			// 
			this->buttonHelp->BackColor = System::Drawing::Color::Transparent;
			this->buttonHelp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonHelp.BackgroundImage")));
			this->buttonHelp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonHelp->Enabled = false;
			this->buttonHelp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonHelp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonHelp->Location = System::Drawing::Point(592, 146);
			this->buttonHelp->Name = L"buttonHelp";
			this->buttonHelp->Size = System::Drawing::Size(456, 89);
			this->buttonHelp->TabIndex = 39;
			this->buttonHelp->UseVisualStyleBackColor = false;
			this->buttonHelp->Click += gcnew System::EventHandler(this, &MyForm::buttonHelp_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->BackColor = System::Drawing::Color::Transparent;
			this->buttonStart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonStart.BackgroundImage")));
			this->buttonStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStart->Location = System::Drawing::Point(552, 32);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(544, 225);
			this->buttonStart->TabIndex = 40;
			this->buttonStart->UseVisualStyleBackColor = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(26, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(500, 500);
			this->pictureBox2->TabIndex = 41;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(26, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(500, 500);
			this->pictureBox3->TabIndex = 42;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(26, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(500, 500);
			this->pictureBox4->TabIndex = 43;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(26, 14);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(500, 500);
			this->pictureBox5->TabIndex = 44;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(26, 14);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(500, 500);
			this->pictureBox6->TabIndex = 45;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(26, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(500, 500);
			this->pictureBox7->TabIndex = 46;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(26, 14);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(500, 500);
			this->pictureBox8->TabIndex = 47;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Location = System::Drawing::Point(26, 14);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(500, 500);
			this->pictureBox9->TabIndex = 48;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->Location = System::Drawing::Point(26, 12);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(500, 500);
			this->pictureBox10->TabIndex = 49;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1115, 526);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->buttonHelp);
			this->Controls->Add(this->labelHelp);
			this->Controls->Add(this->buttonNewWord);
			this->Controls->Add(this->labelWord);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int i = 0;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	//Кнопка, отвечающая за сброс игры и начала заново с новым словом
	private: System::Void buttonNewWord_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonHelp->Visible = true;
		button1->Visible = true;
		button2->Visible = true;
		button3->Visible = true;
		button4->Visible = true;
		button5->Visible = true;
		button6->Visible = true;
		button7->Visible = true;
		button8->Visible = true;
		button9->Visible = true;
		button10->Visible = true;
		button11->Visible = true;
		button12->Visible = true;
		button13->Visible = true;
		button14->Visible = true;
		button15->Visible = true;
		button16->Visible = true;
		button17->Visible = true;
		button18->Visible = true;
		button19->Visible = true;
		button20->Visible = true;
		button21->Visible = true;
		button22->Visible = true;
		button23->Visible = true;
		button24->Visible = true;
		button25->Visible = true;
		button26->Visible = true;
		button27->Visible = true;
		button28->Visible = true;
		button29->Visible = true;
		button30->Visible = true;
		button31->Visible = true;
		button32->Visible = true;
		button33->Visible = true;
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		pictureBox8->Visible = false;
		pictureBox9->Visible = false;
		pictureBox10->Visible = false;
		WordRand();
		HelpRand();
	}

	//Кнопка, отвечающая за открытие подсказки
	private: System::Void buttonHelp_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonHelp->Visible = false;
	}

	//Кнопка, отвечающая за закрытие окна
	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	//Кнопка начала игры
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonStart->Visible = false;
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
		button6->Enabled = true;
		button7->Enabled = true;
		button8->Enabled = true;
		button9->Enabled = true;
		button10->Enabled = true;
		button11->Enabled = true;
		button12->Enabled = true;
		button13->Enabled = true;
		button14->Enabled = true;
		button15->Enabled = true;
		button16->Enabled = true;
		button17->Enabled = true;
		button18->Enabled = true;
		button19->Enabled = true;
		button20->Enabled = true;
		button21->Enabled = true;
		button22->Enabled = true;
		button23->Enabled = true;
		button24->Enabled = true;
		button25->Enabled = true;
		button26->Enabled = true;
		button27->Enabled = true;
		button28->Enabled = true;
		button29->Enabled = true;
		button30->Enabled = true;
		button31->Enabled = true;
		button32->Enabled = true;
		button33->Enabled = true;
		buttonHelp->Enabled = true;
		buttonNewWord->Enabled = true;
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		pictureBox8->Visible = false;
		pictureBox9->Visible = false;
		pictureBox10->Visible = false;
		WordRand();
		HelpRand();
	}

	//Кнопки, отвечающие за буквы русского алфавита (номер кнопки = номер буквы в алфавите)
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Visible = false;
		Answer(button1);

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->Visible = false;
		Answer(button2);

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		button3->Visible = false;
		Answer(button3);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		button4->Visible = false;
		Answer(button4);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		button5->Visible = false;
		Answer(button5);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		button6->Visible = false;
		Answer(button6);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		button7->Visible = false;
		Answer(button7);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		button8->Visible = false;
		Answer(button8);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		button9->Visible = false;
		Answer(button9);
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		button10->Visible = false;
		Answer(button10);
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		button11->Visible = false;
		Answer(button11);
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		button12->Visible = false;
		Answer(button12);
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		button13->Visible = false;
		Answer(button13);
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		button14->Visible = false;
		Answer(button14);
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		button15->Visible = false;
		Answer(button15);
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		button16->Visible = false;
		Answer(button16);
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		button17->Visible = false;
		Answer(button17);
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		button18->Visible = false;
		Answer(button18);
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		button19->Visible = false;
		Answer(button19);
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		button20->Visible = false;
		Answer(button20);
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		button21->Visible = false;
		Answer(button21);
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		button22->Visible = false;
		Answer(button22);
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		button23->Visible = false;
		Answer(button23);
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		button24->Visible = false;
		Answer(button24);
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		button25->Visible = false;
		Answer(button25);
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		button26->Visible = false;
		Answer(button26);
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		button27->Visible = false;
		Answer(button27);
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		button28->Visible = false;
		Answer(button28);
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		button29->Visible = false;
		Answer(button29);
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		button30->Visible = false;
		Answer(button30);
	}
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
		button31->Visible = false;
		Answer(button31);
	}
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
		button32->Visible = false;
		Answer(button32);
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
		button33->Visible = false;
		Answer(button33);
	}
	private: void WordRand()
	{
	   ifstream file;
	   string line = "";
	   file.open("Words.txt", ifstream::app);
	   int random = rand() % 12 + 1;
	   num = random;
	   int i = 0;
	   word1[0] = "";
	   while (getline(file, line) && i < random)
	   {
		   i++;
	   }
	   String^ line2 = gcnew String(line.c_str());
	   word[0] = line;
	   star = word->size();
	   for (int i = 0; i < star; i++)
	   {
		   word1[0] += "*";
	   }
	   String^ line3 = gcnew String(word1[0].c_str());
	   labelWord->Text = line3;
	   word_game[0] = word1[0];
	}
	private: void HelpRand()
	{
	   ifstream file;
	   string line = "";
	   file.open("Help.txt", ifstream::app);
	   int random1 = num;
	   int i = 0;
	   while (getline(file, line) && i < random1)
	   {
		   i++;
	   }
	   String^ line2 = gcnew String(line.c_str());
	   help[0] = line;
	   labelHelp->Text = line2;
	}

	void Mistake()
	{
		switch (picture)
		{
		case 1:
		{
			pictureBox1->Visible = false;
			pictureBox2->Visible = true;
			break;
		}
		case 2:
		{
			pictureBox2->Visible = false;
			pictureBox3->Visible = true;
			break;
		}
		case 3:
		{
			pictureBox3->Visible = false;
			pictureBox4->Visible = true;
			break;
		}
		case 4:
		{
			pictureBox4->Visible = false;
			pictureBox5->Visible = true;
			break;
		}
		case 5:
		{
			pictureBox5->Visible = false;
			pictureBox6->Visible = true;
			break;
		}
		case 6:
		{
			pictureBox6->Visible = false;
			pictureBox7->Visible = true;
			break;
		}
		case 7:
		{
			pictureBox7->Visible = false;
			pictureBox8->Visible = true;
			break;
		}
		case 8:
		{
			pictureBox8->Visible = false;
			pictureBox9->Visible = true;
			buttonHelp->Visible = false;
			labelHelp->Text = L"ВЫ ПРОИГРАЛИ";
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
			button10->Enabled = false;
			button11->Enabled = false;
			button12->Enabled = false;
			button13->Enabled = false;
			button14->Enabled = false;
			button15->Enabled = false;
			button16->Enabled = false;
			button17->Enabled = false;
			button18->Enabled = false;
			button19->Enabled = false;
			button20->Enabled = false;
			button21->Enabled = false;
			button22->Enabled = false;
			button23->Enabled = false;
			button24->Enabled = false;
			button25->Enabled = false;
			button26->Enabled = false;
			button27->Enabled = false;
			button28->Enabled = false;
			button29->Enabled = false;
			button30->Enabled = false;
			button31->Enabled = false;
			button32->Enabled = false;
			button33->Enabled = false;
			break;
		}
		}
	}

			void Answer(System::Object^ sender)
			{
				string letter = "";
				Button^ button = (Button^)sender;
				msclr::interop::marshal_context context;
				letter += context.marshal_as<string>(button->Text);
				int counter = 0;
				int index = ///

				for (int i = 0; i < word[0].length(); i++)
				{
					if (word->find(letter) != -1)
					{
						//counter++;
						i = word->find(letter);
						word1[counter] = word_game[i];
						if (word[0].find("*") != -1)
						{
							pictureBox1->Visible = false;
							pictureBox10->Visible = true;
							buttonHelp->Visible = false;
							labelHelp->Text = L"ВЫ УГАДАЛИ СЛОВО";
						}
					}
					else
					{
						picture++;
						Mistake();
					}
				}
		    }
};
}