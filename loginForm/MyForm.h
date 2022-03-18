#pragma once
#include <iostream>
#include "Messages.h"
#include "LoginForm.h"
#include"HomeForm.h"
#include "RegisterForm.h"
using namespace std;
using System::Runtime::InteropServices::Marshal;
static std::string toStandardString(System::String^ string)
{
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);

	return returnString;
}
namespace loginForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			register_Panel->Hide();
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



	private: System::Windows::Forms::TextBox^ UserNameBox;




	private: System::Windows::Forms::TextBox^ PasswordBox;
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Button^ RegisterButton;
	private: System::Windows::Forms::Panel^ register_Panel;






	private: System::Windows::Forms::TextBox^ passwordConfirmBox;



	private: System::Windows::Forms::TextBox^ RegisterPasswordBox;



	private: System::Windows::Forms::TextBox^ ResgisterUserNameBox;



	private: System::Windows::Forms::TextBox^ IDBox;
	private: System::Windows::Forms::Button^ register_Button;




	private: System::Windows::Forms::Button^ loginPage_Button;

	private: System::Windows::Forms::Panel^ LoginPanel;





	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ exit_Button_regist;




	private: System::Windows::Forms::Panel^ Home_Panel;
	private: System::Windows::Forms::Button^ exit_Button_login;
	private: System::Windows::Forms::Button^ exit_Button_home;
	private: System::Windows::Forms::TextBox^ search_TextBox;

	private: System::Windows::Forms::Button^ search_Button;
	private: System::Windows::Forms::Button^ add_Button;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ logout_Button;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ SentM_Button;

	private: System::Windows::Forms::Button^ receivedM_Button;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ favorites_Button;
	private: System::Windows::Forms::Panel^ contact_Panel;
	private: System::Windows::Forms::Panel^ homeContainer_Panel;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ IDLabel;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::ListBox^ ContactsList;

	private: System::Windows::Forms::Panel^ sendMessagePanel;

	private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TextBox^ MessageContent;
private: System::Windows::Forms::Panel^ addContactPanel;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TextBox^ addTextBox;
private: System::Windows::Forms::Panel^ undoButtonPanel;
private: System::Windows::Forms::Label^ undoLabel;
private: System::Windows::Forms::Button^ undoButton;
private: System::Windows::Forms::TextBox^ messageReciverNameBox;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ button5;

private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;

private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::CheckBox^ makeAnonymous;















	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->UserNameBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->register_Panel = (gcnew System::Windows::Forms::Panel());
			this->exit_Button_regist = (gcnew System::Windows::Forms::Button());
			this->register_Button = (gcnew System::Windows::Forms::Button());
			this->loginPage_Button = (gcnew System::Windows::Forms::Button());
			this->passwordConfirmBox = (gcnew System::Windows::Forms::TextBox());
			this->RegisterPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->ResgisterUserNameBox = (gcnew System::Windows::Forms::TextBox());
			this->IDBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginPanel = (gcnew System::Windows::Forms::Panel());
			this->exit_Button_login = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->Home_Panel = (gcnew System::Windows::Forms::Panel());
			this->contact_Panel = (gcnew System::Windows::Forms::Panel());
			this->ContactsList = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->IDLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->search_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->search_Button = (gcnew System::Windows::Forms::Button());
			this->favorites_Button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SentM_Button = (gcnew System::Windows::Forms::Button());
			this->receivedM_Button = (gcnew System::Windows::Forms::Button());
			this->logout_Button = (gcnew System::Windows::Forms::Button());
			this->add_Button = (gcnew System::Windows::Forms::Button());
			this->exit_Button_home = (gcnew System::Windows::Forms::Button());
			this->homeContainer_Panel = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->undoButtonPanel = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->undoLabel = (gcnew System::Windows::Forms::Label());
			this->undoButton = (gcnew System::Windows::Forms::Button());
			this->addContactPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->addTextBox = (gcnew System::Windows::Forms::TextBox());
			this->sendMessagePanel = (gcnew System::Windows::Forms::Panel());
			this->makeAnonymous = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->messageReciverNameBox = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->MessageContent = (gcnew System::Windows::Forms::TextBox());
			this->register_Panel->SuspendLayout();
			this->LoginPanel->SuspendLayout();
			this->panel9->SuspendLayout();
			this->Home_Panel->SuspendLayout();
			this->contact_Panel->SuspendLayout();
			this->homeContainer_Panel->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->undoButtonPanel->SuspendLayout();
			this->addContactPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->sendMessagePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// UserNameBox
			// 
			this->UserNameBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->UserNameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserNameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserNameBox->ForeColor = System::Drawing::Color::White;
			this->UserNameBox->Location = System::Drawing::Point(199, 181);
			this->UserNameBox->Name = L"UserNameBox";
			this->UserNameBox->Size = System::Drawing::Size(192, 30);
			this->UserNameBox->TabIndex = 3;
			// 
			// PasswordBox
			// 
			this->PasswordBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->PasswordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordBox->ForeColor = System::Drawing::Color::White;
			this->PasswordBox->Location = System::Drawing::Point(200, 221);
			this->PasswordBox->Name = L"PasswordBox";
			this->PasswordBox->Size = System::Drawing::Size(191, 30);
			this->PasswordBox->TabIndex = 5;
			this->PasswordBox->UseSystemPasswordChar = true;
			this->PasswordBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::Transparent;
			this->LoginButton->FlatAppearance->BorderSize = 0;
			this->LoginButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->ForeColor = System::Drawing::Color::White;
			this->LoginButton->Location = System::Drawing::Point(235, 319);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(114, 28);
			this->LoginButton->TabIndex = 7;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// RegisterButton
			// 
			this->RegisterButton->BackColor = System::Drawing::Color::Transparent;
			this->RegisterButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->RegisterButton->FlatAppearance->BorderSize = 0;
			this->RegisterButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->RegisterButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->RegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->RegisterButton->Location = System::Drawing::Point(295, 265);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(81, 24);
			this->RegisterButton->TabIndex = 8;
			this->RegisterButton->Text = L"Register";
			this->RegisterButton->UseVisualStyleBackColor = false;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// register_Panel
			// 
			this->register_Panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"register_Panel.BackgroundImage")));
			this->register_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->register_Panel->Controls->Add(this->exit_Button_regist);
			this->register_Panel->Controls->Add(this->register_Button);
			this->register_Panel->Controls->Add(this->loginPage_Button);
			this->register_Panel->Controls->Add(this->passwordConfirmBox);
			this->register_Panel->Controls->Add(this->RegisterPasswordBox);
			this->register_Panel->Controls->Add(this->ResgisterUserNameBox);
			this->register_Panel->Controls->Add(this->IDBox);
			this->register_Panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->register_Panel->Location = System::Drawing::Point(0, 0);
			this->register_Panel->Name = L"register_Panel";
			this->register_Panel->Size = System::Drawing::Size(900, 600);
			this->register_Panel->TabIndex = 9;
			this->register_Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// exit_Button_regist
			// 
			this->exit_Button_regist->BackColor = System::Drawing::Color::Transparent;
			this->exit_Button_regist->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_Button_regist.BackgroundImage")));
			this->exit_Button_regist->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exit_Button_regist->FlatAppearance->BorderSize = 0;
			this->exit_Button_regist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_Button_regist->Location = System::Drawing::Point(12, 12);
			this->exit_Button_regist->Name = L"exit_Button_regist";
			this->exit_Button_regist->Size = System::Drawing::Size(22, 27);
			this->exit_Button_regist->TabIndex = 0;
			this->exit_Button_regist->UseVisualStyleBackColor = false;
			this->exit_Button_regist->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// register_Button
			// 
			this->register_Button->BackColor = System::Drawing::Color::Transparent;
			this->register_Button->FlatAppearance->BorderSize = 0;
			this->register_Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->register_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->register_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_Button->ForeColor = System::Drawing::Color::White;
			this->register_Button->Location = System::Drawing::Point(278, 355);
			this->register_Button->Name = L"register_Button";
			this->register_Button->Size = System::Drawing::Size(116, 29);
			this->register_Button->TabIndex = 18;
			this->register_Button->Text = L"Register";
			this->register_Button->UseVisualStyleBackColor = false;
			this->register_Button->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// loginPage_Button
			// 
			this->loginPage_Button->BackColor = System::Drawing::Color::Transparent;
			this->loginPage_Button->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->loginPage_Button->FlatAppearance->BorderSize = 0;
			this->loginPage_Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->loginPage_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginPage_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginPage_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->loginPage_Button->Location = System::Drawing::Point(346, 319);
			this->loginPage_Button->Name = L"loginPage_Button";
			this->loginPage_Button->Size = System::Drawing::Size(69, 25);
			this->loginPage_Button->TabIndex = 17;
			this->loginPage_Button->Text = L"Login";
			this->loginPage_Button->UseVisualStyleBackColor = false;
			this->loginPage_Button->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// passwordConfirmBox
			// 
			this->passwordConfirmBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->passwordConfirmBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordConfirmBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->passwordConfirmBox->ForeColor = System::Drawing::Color::White;
			this->passwordConfirmBox->Location = System::Drawing::Point(244, 275);
			this->passwordConfirmBox->Name = L"passwordConfirmBox";
			this->passwordConfirmBox->Size = System::Drawing::Size(191, 27);
			this->passwordConfirmBox->TabIndex = 15;
			this->passwordConfirmBox->UseSystemPasswordChar = true;
			// 
			// RegisterPasswordBox
			// 
			this->RegisterPasswordBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->RegisterPasswordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegisterPasswordBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegisterPasswordBox->ForeColor = System::Drawing::Color::White;
			this->RegisterPasswordBox->Location = System::Drawing::Point(244, 236);
			this->RegisterPasswordBox->Name = L"RegisterPasswordBox";
			this->RegisterPasswordBox->Size = System::Drawing::Size(184, 27);
			this->RegisterPasswordBox->TabIndex = 12;
			this->RegisterPasswordBox->UseSystemPasswordChar = true;
			// 
			// ResgisterUserNameBox
			// 
			this->ResgisterUserNameBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->ResgisterUserNameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ResgisterUserNameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ResgisterUserNameBox->ForeColor = System::Drawing::Color::White;
			this->ResgisterUserNameBox->Location = System::Drawing::Point(245, 198);
			this->ResgisterUserNameBox->Name = L"ResgisterUserNameBox";
			this->ResgisterUserNameBox->Size = System::Drawing::Size(190, 27);
			this->ResgisterUserNameBox->TabIndex = 9;
			// 
			// IDBox
			// 
			this->IDBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->IDBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->IDBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDBox->ForeColor = System::Drawing::Color::White;
			this->IDBox->Location = System::Drawing::Point(246, 159);
			this->IDBox->Name = L"IDBox";
			this->IDBox->Size = System::Drawing::Size(190, 27);
			this->IDBox->TabIndex = 6;
			// 
			// LoginPanel
			// 
			this->LoginPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LoginPanel.BackgroundImage")));
			this->LoginPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LoginPanel->Controls->Add(this->exit_Button_login);
			this->LoginPanel->Controls->Add(this->RegisterButton);
			this->LoginPanel->Controls->Add(this->LoginButton);
			this->LoginPanel->Controls->Add(this->PasswordBox);
			this->LoginPanel->Controls->Add(this->UserNameBox);
			this->LoginPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LoginPanel->Location = System::Drawing::Point(0, 0);
			this->LoginPanel->Name = L"LoginPanel";
			this->LoginPanel->Size = System::Drawing::Size(900, 600);
			this->LoginPanel->TabIndex = 10;
			// 
			// exit_Button_login
			// 
			this->exit_Button_login->BackColor = System::Drawing::Color::Transparent;
			this->exit_Button_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_Button_login.BackgroundImage")));
			this->exit_Button_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exit_Button_login->FlatAppearance->BorderSize = 0;
			this->exit_Button_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_Button_login->Location = System::Drawing::Point(12, 12);
			this->exit_Button_login->Name = L"exit_Button_login";
			this->exit_Button_login->Size = System::Drawing::Size(22, 27);
			this->exit_Button_login->TabIndex = 9;
			this->exit_Button_login->UseVisualStyleBackColor = false;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->Home_Panel);
			this->panel9->Controls->Add(this->register_Panel);
			this->panel9->Controls->Add(this->LoginPanel);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(900, 600);
			this->panel9->TabIndex = 12;
			// 
			// Home_Panel
			// 
			this->Home_Panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Home_Panel.BackgroundImage")));
			this->Home_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Home_Panel->Controls->Add(this->contact_Panel);
			this->Home_Panel->Controls->Add(this->label4);
			this->Home_Panel->Controls->Add(this->label5);
			this->Home_Panel->Controls->Add(this->label3);
			this->Home_Panel->Controls->Add(this->IDLabel);
			this->Home_Panel->Controls->Add(this->label2);
			this->Home_Panel->Controls->Add(this->label1);
			this->Home_Panel->Controls->Add(this->search_TextBox);
			this->Home_Panel->Controls->Add(this->search_Button);
			this->Home_Panel->Controls->Add(this->favorites_Button);
			this->Home_Panel->Controls->Add(this->button1);
			this->Home_Panel->Controls->Add(this->SentM_Button);
			this->Home_Panel->Controls->Add(this->receivedM_Button);
			this->Home_Panel->Controls->Add(this->logout_Button);
			this->Home_Panel->Controls->Add(this->add_Button);
			this->Home_Panel->Controls->Add(this->exit_Button_home);
			this->Home_Panel->Controls->Add(this->homeContainer_Panel);
			this->Home_Panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Home_Panel->Location = System::Drawing::Point(0, 0);
			this->Home_Panel->Name = L"Home_Panel";
			this->Home_Panel->Size = System::Drawing::Size(900, 600);
			this->Home_Panel->TabIndex = 11;
			// 
			// contact_Panel
			// 
			this->contact_Panel->Controls->Add(this->ContactsList);
			this->contact_Panel->Location = System::Drawing::Point(33, 177);
			this->contact_Panel->Name = L"contact_Panel";
			this->contact_Panel->Size = System::Drawing::Size(201, 346);
			this->contact_Panel->TabIndex = 6;
			// 
			// ContactsList
			// 
			this->ContactsList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ContactsList->FormattingEnabled = true;
			this->ContactsList->ItemHeight = 30;
			this->ContactsList->Location = System::Drawing::Point(0, 0);
			this->ContactsList->Name = L"ContactsList";
			this->ContactsList->Size = System::Drawing::Size(201, 304);
			this->ContactsList->TabIndex = 0;
			this->ContactsList->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::contactsList_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(549, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Favorites";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(638, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Send a Message";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(431, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Sent Messages";
			// 
			// IDLabel
			// 
			this->IDLabel->AutoSize = true;
			this->IDLabel->BackColor = System::Drawing::Color::Transparent;
			this->IDLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->IDLabel->Location = System::Drawing::Point(74, 61);
			this->IDLabel->Name = L"IDLabel";
			this->IDLabel->Size = System::Drawing::Size(37, 39);
			this->IDLabel->TabIndex = 4;
			this->IDLabel->Text = L"2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(290, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Received Messages";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(764, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"LogOut";
			// 
			// search_TextBox
			// 
			this->search_TextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_TextBox->Location = System::Drawing::Point(49, 146);
			this->search_TextBox->Multiline = true;
			this->search_TextBox->Name = L"search_TextBox";
			this->search_TextBox->Size = System::Drawing::Size(111, 19);
			this->search_TextBox->TabIndex = 3;
			this->search_TextBox->Tag = L"Search";
			this->search_TextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::search_TextBox_TextChanged);
			// 
			// search_Button
			// 
			this->search_Button->BackColor = System::Drawing::Color::Transparent;
			this->search_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_Button.BackgroundImage")));
			this->search_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->search_Button->FlatAppearance->BorderSize = 0;
			this->search_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_Button->Location = System::Drawing::Point(176, 144);
			this->search_Button->Name = L"search_Button";
			this->search_Button->Size = System::Drawing::Size(22, 23);
			this->search_Button->TabIndex = 2;
			this->search_Button->UseVisualStyleBackColor = false;
			this->search_Button->Click += gcnew System::EventHandler(this, &MyForm::search_Button_Click);
			// 
			// favorites_Button
			// 
			this->favorites_Button->BackColor = System::Drawing::Color::Transparent;
			this->favorites_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"favorites_Button.BackgroundImage")));
			this->favorites_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->favorites_Button->FlatAppearance->BorderSize = 0;
			this->favorites_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->favorites_Button->Location = System::Drawing::Point(553, 53);
			this->favorites_Button->Name = L"favorites_Button";
			this->favorites_Button->Size = System::Drawing::Size(45, 34);
			this->favorites_Button->TabIndex = 2;
			this->favorites_Button->UseVisualStyleBackColor = false;
			this->favorites_Button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(641, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 41);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_3);
			// 
			// SentM_Button
			// 
			this->SentM_Button->BackColor = System::Drawing::Color::Transparent;
			this->SentM_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SentM_Button.BackgroundImage")));
			this->SentM_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->SentM_Button->FlatAppearance->BorderSize = 0;
			this->SentM_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SentM_Button->Location = System::Drawing::Point(434, 46);
			this->SentM_Button->Name = L"SentM_Button";
			this->SentM_Button->Size = System::Drawing::Size(77, 41);
			this->SentM_Button->TabIndex = 2;
			this->SentM_Button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->SentM_Button->UseVisualStyleBackColor = false;
			this->SentM_Button->Click += gcnew System::EventHandler(this, &MyForm::SentM_Button_Click);
			// 
			// receivedM_Button
			// 
			this->receivedM_Button->BackColor = System::Drawing::Color::Transparent;
			this->receivedM_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"receivedM_Button.BackgroundImage")));
			this->receivedM_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->receivedM_Button->FlatAppearance->BorderSize = 0;
			this->receivedM_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->receivedM_Button->Location = System::Drawing::Point(306, 43);
			this->receivedM_Button->Name = L"receivedM_Button";
			this->receivedM_Button->Size = System::Drawing::Size(64, 56);
			this->receivedM_Button->TabIndex = 2;
			this->receivedM_Button->UseVisualStyleBackColor = false;
			this->receivedM_Button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			this->receivedM_Button->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::receivedM_Button_MouseClick);
			// 
			// logout_Button
			// 
			this->logout_Button->BackColor = System::Drawing::Color::Transparent;
			this->logout_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logout_Button.BackgroundImage")));
			this->logout_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logout_Button->FlatAppearance->BorderSize = 0;
			this->logout_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout_Button->Location = System::Drawing::Point(766, 48);
			this->logout_Button->Name = L"logout_Button";
			this->logout_Button->Size = System::Drawing::Size(48, 45);
			this->logout_Button->TabIndex = 2;
			this->logout_Button->UseVisualStyleBackColor = false;
			this->logout_Button->Click += gcnew System::EventHandler(this, &MyForm::logout_Button_Click);
			// 
			// add_Button
			// 
			this->add_Button->BackColor = System::Drawing::Color::Transparent;
			this->add_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_Button.BackgroundImage")));
			this->add_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->add_Button->FlatAppearance->BorderSize = 0;
			this->add_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_Button->Location = System::Drawing::Point(208, 144);
			this->add_Button->Name = L"add_Button";
			this->add_Button->Size = System::Drawing::Size(32, 23);
			this->add_Button->TabIndex = 2;
			this->add_Button->UseVisualStyleBackColor = false;
			this->add_Button->Click += gcnew System::EventHandler(this, &MyForm::add_Button_Click);
			// 
			// exit_Button_home
			// 
			this->exit_Button_home->BackColor = System::Drawing::Color::Transparent;
			this->exit_Button_home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_Button_home.BackgroundImage")));
			this->exit_Button_home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exit_Button_home->FlatAppearance->BorderSize = 0;
			this->exit_Button_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_Button_home->Location = System::Drawing::Point(7, 6);
			this->exit_Button_home->Name = L"exit_Button_home";
			this->exit_Button_home->Size = System::Drawing::Size(24, 32);
			this->exit_Button_home->TabIndex = 1;
			this->exit_Button_home->UseVisualStyleBackColor = false;
			this->exit_Button_home->Click += gcnew System::EventHandler(this, &MyForm::exit_Button_home_Click);
			// 
			// homeContainer_Panel
			// 
			this->homeContainer_Panel->Controls->Add(this->sendMessagePanel);
			this->homeContainer_Panel->Controls->Add(this->flowLayoutPanel1);
			this->homeContainer_Panel->Controls->Add(this->addContactPanel);
			this->homeContainer_Panel->Location = System::Drawing::Point(241, 116);
			this->homeContainer_Panel->Name = L"homeContainer_Panel";
			this->homeContainer_Panel->Size = System::Drawing::Size(612, 436);
			this->homeContainer_Panel->TabIndex = 5;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->Controls->Add(this->undoButtonPanel);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(612, 436);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Visible = false;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint);
			// 
			// undoButtonPanel
			// 
			this->undoButtonPanel->BackColor = System::Drawing::Color::Transparent;
			this->undoButtonPanel->Controls->Add(this->label9);
			this->undoButtonPanel->Controls->Add(this->undoLabel);
			this->undoButtonPanel->Controls->Add(this->undoButton);
			this->undoButtonPanel->Location = System::Drawing::Point(3, 3);
			this->undoButtonPanel->Name = L"undoButtonPanel";
			this->undoButtonPanel->Size = System::Drawing::Size(603, 63);
			this->undoButtonPanel->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(21, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(239, 46);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Undo Panel";
			// 
			// undoLabel
			// 
			this->undoLabel->AutoSize = true;
			this->undoLabel->BackColor = System::Drawing::Color::Transparent;
			this->undoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->undoLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->undoLabel->Location = System::Drawing::Point(535, 40);
			this->undoLabel->Name = L"undoLabel";
			this->undoLabel->Size = System::Drawing::Size(48, 18);
			this->undoLabel->TabIndex = 5;
			this->undoLabel->Text = L"Undo";
			this->undoLabel->Click += gcnew System::EventHandler(this, &MyForm::undoLabel_Click);
			// 
			// undoButton
			// 
			this->undoButton->BackColor = System::Drawing::Color::Transparent;
			this->undoButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"undoButton.BackgroundImage")));
			this->undoButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->undoButton->FlatAppearance->BorderSize = 0;
			this->undoButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->undoButton->Location = System::Drawing::Point(537, 3);
			this->undoButton->Name = L"undoButton";
			this->undoButton->Size = System::Drawing::Size(47, 48);
			this->undoButton->TabIndex = 3;
			this->undoButton->UseVisualStyleBackColor = false;
			this->undoButton->Click += gcnew System::EventHandler(this, &MyForm::undoButton_Click);
			// 
			// addContactPanel
			// 
			this->addContactPanel->Controls->Add(this->pictureBox2);
			this->addContactPanel->Controls->Add(this->pictureBox1);
			this->addContactPanel->Controls->Add(this->button5);
			this->addContactPanel->Controls->Add(this->label8);
			this->addContactPanel->Controls->Add(this->button3);
			this->addContactPanel->Controls->Add(this->addTextBox);
			this->addContactPanel->Location = System::Drawing::Point(0, 0);
			this->addContactPanel->Name = L"addContactPanel";
			this->addContactPanel->Size = System::Drawing::Size(611, 436);
			this->addContactPanel->TabIndex = 2;
			this->addContactPanel->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(275, 41);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(107, 106);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(506, 324);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(96, 104);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(525, 13);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(77, 41);
			this->button5->TabIndex = 7;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(95, 180);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 24);
			this->label8->TabIndex = 5;
			this->label8->Text = L"User Name:";
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Location = System::Drawing::Point(193, 262);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 60);
			this->button3->TabIndex = 1;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// addTextBox
			// 
			this->addTextBox->Location = System::Drawing::Point(197, 173);
			this->addTextBox->Name = L"addTextBox";
			this->addTextBox->Size = System::Drawing::Size(260, 37);
			this->addTextBox->TabIndex = 0;
			this->addTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::addTextBox_TextChanged);
			// 
			// sendMessagePanel
			// 
			this->sendMessagePanel->Controls->Add(this->makeAnonymous);
			this->sendMessagePanel->Controls->Add(this->pictureBox3);
			this->sendMessagePanel->Controls->Add(this->button8);
			this->sendMessagePanel->Controls->Add(this->button7);
			this->sendMessagePanel->Controls->Add(this->label7);
			this->sendMessagePanel->Controls->Add(this->label6);
			this->sendMessagePanel->Controls->Add(this->messageReciverNameBox);
			this->sendMessagePanel->Controls->Add(this->button2);
			this->sendMessagePanel->Controls->Add(this->MessageContent);
			this->sendMessagePanel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sendMessagePanel->Location = System::Drawing::Point(0, 0);
			this->sendMessagePanel->Name = L"sendMessagePanel";
			this->sendMessagePanel->Size = System::Drawing::Size(609, 433);
			this->sendMessagePanel->TabIndex = 1;
			this->sendMessagePanel->Visible = false;
			// 
			// makeAnonymous
			// 
			this->makeAnonymous->AutoSize = true;
			this->makeAnonymous->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->makeAnonymous->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->makeAnonymous->Location = System::Drawing::Point(265, 394);
			this->makeAnonymous->Name = L"makeAnonymous";
			this->makeAnonymous->Size = System::Drawing::Size(171, 25);
			this->makeAnonymous->TabIndex = 12;
			this->makeAnonymous->Text = L"send as Anonymous";
			this->makeAnonymous->UseVisualStyleBackColor = true;
			this->makeAnonymous->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(525, 381);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(84, 52);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(286, 7);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(91, 73);
			this->button8->TabIndex = 10;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(22, 374);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(74, 57);
			this->button7->TabIndex = 9;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(20, 138);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 24);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Message:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(4, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 24);
			this->label6->TabIndex = 5;
			this->label6->Text = L"User Name:";
			// 
			// messageReciverNameBox
			// 
			this->messageReciverNameBox->Location = System::Drawing::Point(118, 88);
			this->messageReciverNameBox->Name = L"messageReciverNameBox";
			this->messageReciverNameBox->Size = System::Drawing::Size(421, 37);
			this->messageReciverNameBox->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(217, 336);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 60);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_2);
			// 
			// MessageContent
			// 
			this->MessageContent->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MessageContent->Location = System::Drawing::Point(120, 132);
			this->MessageContent->Multiline = true;
			this->MessageContent->Name = L"MessageContent";
			this->MessageContent->Size = System::Drawing::Size(420, 198);
			this->MessageContent->TabIndex = 0;
			this->MessageContent->TextChanged += gcnew System::EventHandler(this, &MyForm::MessageContent_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->panel9);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::DarkCyan;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->register_Panel->ResumeLayout(false);
			this->register_Panel->PerformLayout();
			this->LoginPanel->ResumeLayout(false);
			this->LoginPanel->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->Home_Panel->ResumeLayout(false);
			this->Home_Panel->PerformLayout();
			this->contact_Panel->ResumeLayout(false);
			this->homeContainer_Panel->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->undoButtonPanel->ResumeLayout(false);
			this->undoButtonPanel->PerformLayout();
			this->addContactPanel->ResumeLayout(false);
			this->addContactPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->sendMessagePanel->ResumeLayout(false);
			this->sendMessagePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   RegisterForm registerForm;
		   LoginForm loginForm;
		   HomeForm homeForm;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	loginForm.CheckUser(UserNameBox->Text, PasswordBox->Text);
	if (loginForm.isUserMatched == 1) {
		IDLabel->Text = gcnew String(homeForm.getLiveUser().ID.c_str());
		refreshContactList();
		Home_Panel->Show();
		register_Panel->Hide();
		LoginPanel->Hide();
		UserNameBox->Clear();
		PasswordBox->Clear();
		IDBox->Clear();
		ResgisterUserNameBox->Clear();
		RegisterPasswordBox->Clear();
		passwordConfirmBox->Clear();
	}
	else {
		MessageBox::Show("user name or password is incorrect", "Incorret Id or pw", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		registerForm.setRegisterState(0);
		registerForm.RegisterCheck(ResgisterUserNameBox->Text,IDBox->Text,RegisterPasswordBox->Text,passwordConfirmBox->Text);
		if (registerForm.getRegisterState() == 1)
			MessageBox::Show(" user name already exists", "Done", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else if (registerForm.getRegisterState() == 2)
			MessageBox::Show(" passwords doesn't match", "Done", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else if (registerForm.getRegisterState() == 0) {
			MessageBox::Show("Succesfully Registered", "Done", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			Home_Panel->Hide();
			register_Panel->Hide();
			LoginPanel->Show();
		}
		}
	
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	register_Panel->Hide();
	LoginPanel->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginPanel->Hide();
	register_Panel->Show();



}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Environment::Exit(0);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (WindowState == FormWindowState::Maximized) {
		WindowState = FormWindowState::Normal;
	}
	else {
		WindowState = FormWindowState::Maximized;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	WindowState = FormWindowState::Minimized;
}

	   bool isAtFavourites = false;

private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	isAtFavourites = true;

	flowLayoutPanel1->Controls->Clear();
	sendMessagePanel->Hide();
	flowLayoutPanel1->Show();
	homeForm.uploadUserMessages();
	for (int i = homeForm.getLiveUser().Message.size()-1; i >=0 ; i--) {
		if(homeForm.getLiveUser().Message[i].isFavourite == true)
		createCard(homeForm.getMessage(i),i,true, "not sent");
	}
}


private: System::Void receivedM_Button_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	isAtFavourites = false;
	flowLayoutPanel1->Controls->Clear();
	sendMessagePanel->Hide();
	flowLayoutPanel1->Show();
	homeForm.uploadUserMessages(); 
	cout << "pressed" << endl;
	for (int i = homeForm.getLiveUser().Message.size()-1; i >=0 ; i--) {
		createCard(homeForm.getMessage(i),i,true,"not sent");
	}
}	
	   void refreshMessagesPanel() {
		   flowLayoutPanel1->Controls->Clear();
		   sendMessagePanel->Hide();
		   flowLayoutPanel1->Show();
		   for (int i = homeForm.getLiveUser().Message.size() - 1; i >= 0; i--) {
			   if (!isAtFavourites) {
				createCard(homeForm.getMessage(i),i, true, "not sent");
			   }
			   else {
				   if(homeForm.getMessage(i).isFavourite == true)
				   createCard(homeForm.getMessage(i),i, true, "not sent");
			   }
		   }
	   }
	   void refreshContactList() {
		   ContactsList->Items->Clear();
		   homeForm.uploadContanctsList();
		   for (int i = 0; i < homeForm.getLiveUser().ListOfContacts.size(); i++)
			   ContactsList->Items->Add(gcnew String(homeForm.getLiveUser().ListOfContacts[i].c_str()));
	   }
	   Button^ favouriteButton;
	   private: System::Void favouriteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		   
		   for (int i = homeForm.getLiveUser().Message.size()-1; i >=0 ; i--) {
			   if (sender->ToString()->Contains("     btn "+i)) {
				   if (homeForm.getLiveUser().Message[i].isFavourite == true)
					   homeForm.addToFavourites(i, false);
				   else
					   homeForm.addToFavourites(i, true);
			   }
		   }
		   refreshMessagesPanel();
	   }
	   void createCard(Messages s,int MsgIndex,bool isFaouriteNeeded,string panel) {
		   Panel^ messageTemplate = gcnew Panel();
		   Label^ messageSender = gcnew Label();
		   Label^ messageContent = gcnew Label();
		   favouriteButton = gcnew Button();
		   messageContent->Location = System::Drawing::Point(0, 30);
		   messageContent->Text = gcnew String(s.content.c_str());
		   messageContent->ForeColor = Color().White;
		   messageContent->Size = System::Drawing::Size(520, 100);
		   messageSender->Size = System::Drawing::Size(520,30);
		   if (panel == "sent panel") {
			   messageSender->Text = "To: ";
			   messageSender->Text += gcnew String(s.receiver.c_str());
		   }
		   else {
			   messageSender->Text = "From: ";
			   messageSender->Text += gcnew String(s.sender.c_str());
		   }
		   messageSender->ForeColor = Color().White;
		   messageTemplate->AutoSize = true;
		   //  messageTemplate->Size = System::Drawing::Size(500, 70);
		   messageTemplate->BackColor = Color().Gray;
		   if (isFaouriteNeeded) {
			   favouriteButton->Size = System::Drawing::Size(30, 30);
			   favouriteButton->Location = System::Drawing::Point(430, 20);
			   
			   if (!s.isFavourite)
				   favouriteButton->BackgroundImage = System::Drawing::Image::FromFile("non favourite.jpg");
			   else
				   favouriteButton->BackgroundImage = System::Drawing::Image::FromFile("favourite.png");


			   favouriteButton->BackgroundImageLayout = ImageLayout::Zoom;

			   favouriteButton->ForeColor = Color().Transparent;
			   
			   favouriteButton->Text = gcnew String("     btn " + MsgIndex);
			   favouriteButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			   favouriteButton->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			   
			   
			   favouriteButton->Click += gcnew System::EventHandler(this, &MyForm::favouriteButton_Click);
			   messageTemplate->Controls->Add(favouriteButton);
		   }

		   messageTemplate->Controls->Add(messageSender);
		   messageTemplate->Controls->Add(messageContent);
		   flowLayoutPanel1->Controls->Add(messageTemplate);
	   }
	private: System::Void search_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		ContactsList->Items->Clear();
		
			for (int i = 0; i < homeForm.getLiveUser().ListOfContacts.size(); i++) {
				String^ s = gcnew String(homeForm.getLiveUser().ListOfContacts[i].c_str());
				if (s->Contains(search_TextBox->Text))
					ContactsList->Items->Add(gcnew String(homeForm.getLiveUser().ListOfContacts[i].c_str()));
			}
	}
private: System::Void button1_Click_3(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel1->Hide();
	addContactPanel->Hide();
	sendMessagePanel->Show();
}
private: System::Void SentM_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	sendMessagePanel->Hide();
	addContactPanel->Hide();
	flowLayoutPanel1->Controls->Clear();
	homeForm.uploadUserSentMessages();
	flowLayoutPanel1->Show();
	flowLayoutPanel1->Controls->Add(undoButtonPanel);
	for (int i = homeForm.getLiveUser().sentMessages.size()-1; i >= 0 ; i--) {
		createCard(homeForm.getSentMessage(i),i,false,"sent panel");
	}

}
	private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
		try {
			Messages tmpMessage;
			if(makeAnonymous->Checked)
				tmpMessage.sender = "Anonymous";
			else
				tmpMessage.sender = homeForm.getLiveUser().Username;

			tmpMessage.receiver = toStandardString(ContactsList->SelectedItem->ToString());
			tmpMessage.content = toStandardString(MessageContent->Text);
			homeForm.sendMessage(tmpMessage);
			messageReciverNameBox->Clear();
			MessageContent->Clear();

	}
		catch (NullReferenceException^) {
			MessageBox::Show("Please, Choose a contact", "Done", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
private: System::Void add_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	sendMessagePanel->Hide();	
	flowLayoutPanel1->Hide();
	addContactPanel->Show();
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	bool AlreadyAdded=false;
		for (int i = 0; i < homeForm.getLiveUser().ListOfContacts.size(); i++) {
			if (toStandardString(addTextBox->Text) == homeForm.getLiveUser().ListOfContacts[i]) {
				MessageBox::Show("you already have him", "Done", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				AlreadyAdded = true;
				break;
			}
		}
	
	   if (!AlreadyAdded) {
		   homeForm.addContact(toStandardString(addTextBox->Text));
		   refreshContactList();
		   addTextBox->Clear();
	   }
}
private: System::Void logout_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginPanel->Show();
	register_Panel->Hide();
	Home_Panel->Hide();
	messageReciverNameBox->Clear();
	MessageContent->Clear();
	addTextBox->Clear();
	flowLayoutPanel1->Controls->Clear();
	addContactPanel->Hide();
	sendMessagePanel->Hide();
}
private: System::Void contactsList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	messageReciverNameBox->Text = ContactsList->SelectedItem->ToString();
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void undoButton_Click(System::Object^ sender, System::EventArgs^ e) {

	flowLayoutPanel1->Controls->Clear();
	flowLayoutPanel1->Controls->Add(undoButtonPanel);
	homeForm.undoLastMsg(); 
	for (int i = homeForm.getLiveUser().sentMessages.size() - 1; i >= 0; i--) {
			createCard(homeForm.getLiveUser().sentMessages[i], i, false, "sent panel");
	}
}
private: System::Void MessageContent_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void search_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	homeForm.uploadUserMessages();
	flowLayoutPanel1->Controls->Clear();
	flowLayoutPanel1->Show();

	try {
		for (int i = homeForm.getLiveUser().Message.size() - 1; i >= 0; i--) {
			if (homeForm.getLiveUser().Message[i].sender == toStandardString(ContactsList->SelectedItem->ToString())) {
				createCard(homeForm.getMessage(i), i, true, "not sent");
			}
		}
	}
	catch (Exception^ NullReferenceException) {
		cout << "noone there";
	}
}
private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {
	bool AlreadyAdded = false;
	
	for (int i = 0; i < homeForm.getLiveUser().ListOfContacts.size(); i++) {
		if (toStandardString(addTextBox->Text) == homeForm.getLiveUser().ListOfContacts[i]) {
			MessageBox::Show("you already have him", "Done", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			AlreadyAdded = true;
			
			break;
		}
	}

	if (!AlreadyAdded) {
		homeForm.addContact(toStandardString(addTextBox->Text));
		refreshContactList();
		addTextBox->Clear();
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void exit_Button_home_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void undoLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
