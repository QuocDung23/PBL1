#pragma once
#include "formMain.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class formLogin : public System::Windows::Forms::Form
	{
	public:
		formLogin(void)
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
		~formLogin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ txtuser;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ txtpassword;

	private: System::Windows::Forms::Label^ textpassword;

	private: System::Windows::Forms::TextBox^ textusername;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnLogin;


	private: System::ComponentModel::IContainer^ components;


	private: System::Void txtUsername_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			txtpassword->Focus();  // Chuyển focus sang txtPassword
			e->SuppressKeyPress = true;  // Chặn âm thanh 'ding' khi nhấn Enter
		}
	}

	private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			btnLogin->PerformClick();  // Gọi sự kiện Click của nút Login
			e->SuppressKeyPress = true;  // Chặn âm thanh 'ding' khi nhấn Enter
		}
	}


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
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txtpassword = (gcnew System::Windows::Forms::TextBox());
			this->textpassword = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textusername = (gcnew System::Windows::Forms::TextBox());
			this->txtuser = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Controls->Add(this->btnLogin);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(31, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(550, 229);
			this->panel1->TabIndex = 0;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(366, 172);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(94, 40);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &formLogin::btnExit_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(266, 172);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(94, 40);
			this->btnLogin->TabIndex = 1;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &formLogin::btnLogin_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->txtpassword);
			this->panel3->Controls->Add(this->textpassword);
			this->panel3->Location = System::Drawing::Point(3, 83);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(503, 74);
			this->panel3->TabIndex = 1;
			// 
			// txtpassword
			// 
			this->txtpassword->Location = System::Drawing::Point(162, 20);
			this->txtpassword->Name = L"txtpassword";
			this->txtpassword->Size = System::Drawing::Size(338, 22);
			this->txtpassword->TabIndex = 1;
			this->txtpassword->UseSystemPasswordChar = true;
			this->txtpassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &formLogin::txtpassword_KeyDown);
			// 
			// textpassword
			// 
			this->textpassword->AutoSize = true;
			this->textpassword->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textpassword->Location = System::Drawing::Point(19, 15);
			this->textpassword->Name = L"textpassword";
			this->textpassword->Size = System::Drawing::Size(141, 27);
			this->textpassword->TabIndex = 0;
			this->textpassword->Text = L"Password:  ";
			this->textpassword->Click += gcnew System::EventHandler(this, &formLogin::label2_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textusername);
			this->panel2->Controls->Add(this->txtuser);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(503, 74);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &formLogin::panel2_Paint);
			// 
			// textusername
			// 
			this->textusername->Location = System::Drawing::Point(162, 20);
			this->textusername->Name = L"textusername";
			this->textusername->Size = System::Drawing::Size(338, 22);
			this->textusername->TabIndex = 1;
			this->textusername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &formLogin::txtUsername_KeyDown);
			// 
			// txtuser
			// 
			this->txtuser->AutoSize = true;
			this->txtuser->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtuser->Location = System::Drawing::Point(19, 15);
			this->txtuser->Name = L"txtuser";
			this->txtuser->Size = System::Drawing::Size(137, 27);
			this->txtuser->TabIndex = 0;
			this->txtuser->Text = L"Username: ";
			this->txtuser->Click += gcnew System::EventHandler(this, &formLogin::label1_Click);
			// 
			// formLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 253);
			this->Controls->Add(this->panel1);
			this->Name = L"formLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &formLogin::formLogin_FormClosing_1);
			this->Load += gcnew System::EventHandler(this, &formLogin::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textusername_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	}
	private: System::Void txtpassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void formLogin_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	}
	private: System::Void formLogin_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	}
	private: System::Void formLogin_FormClosing_1(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (MessageBox::Show("Do you want to exit?", "thong bao", MessageBoxButtons::OKCancel) != System::Windows::Forms::DialogResult::OK)
		{
			e->Cancel = true;
		}
	}
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		formMain obj;
		this->Hide();
		obj.ShowDialog();
	}
};
};
