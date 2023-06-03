#pragma once
#include "Inicio.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=123; database=heacker;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Button^ btn_ingresar;
	private: System::Windows::Forms::TextBox^ txt_usuario;
	private: System::Windows::Forms::TextBox^ txt_contrasena;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



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
			this->txt_usuario = (gcnew System::Windows::Forms::TextBox());
			this->txt_contrasena = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_ingresar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_usuario
			// 
			this->txt_usuario->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_usuario->Location = System::Drawing::Point(118, 83);
			this->txt_usuario->Multiline = true;
			this->txt_usuario->Name = L"txt_usuario";
			this->txt_usuario->Size = System::Drawing::Size(250, 71);
			this->txt_usuario->TabIndex = 0;
			this->txt_usuario->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_contrasena
			// 
			this->txt_contrasena->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_contrasena->Location = System::Drawing::Point(118, 240);
			this->txt_contrasena->Multiline = true;
			this->txt_contrasena->Name = L"txt_contrasena";
			this->txt_contrasena->PasswordChar = '*';
			this->txt_contrasena->Size = System::Drawing::Size(250, 71);
			this->txt_contrasena->TabIndex = 1;
			this->txt_contrasena->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(124, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 27);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Usuario";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(124, 210);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 27);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contraseña";
			// 
			// btn_ingresar
			// 
			this->btn_ingresar->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_ingresar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ingresar->Font = (gcnew System::Drawing::Font(L"Lucida Console", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ingresar->ForeColor = System::Drawing::Color::White;
			this->btn_ingresar->Location = System::Drawing::Point(107, 346);
			this->btn_ingresar->Name = L"btn_ingresar";
			this->btn_ingresar->Size = System::Drawing::Size(261, 57);
			this->btn_ingresar->TabIndex = 4;
			this->btn_ingresar->Text = L"Ingresar";
			this->btn_ingresar->UseVisualStyleBackColor = false;
			this->btn_ingresar->Click += gcnew System::EventHandler(this, &Form1::btn_ingresar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(466, 455);
			this->Controls->Add(this->btn_ingresar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_contrasena);
			this->Controls->Add(this->txt_usuario);
			this->Name = L"Form1";
			this->Text = L"Login de Ingreso";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void btn_ingresar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sql = "select * from registros where usuario = '" + txt_usuario->Text + "' and contrasena = '" + txt_contrasena->Text + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	try {
	this->conn->Open();
	dataReader = cursor->ExecuteReader();
			   if (dataReader->Read()) {
				   FinalP::Inicio^ segundoForm = gcnew FinalP::Inicio();
				   this->Visible = false;
				   segundoForm->ShowDialog();
				   this->Close();
				
			   }
			   else {
				   // Cerrar la conexión actual
				   this->conn->Close();

				   // Restablecer la conexión
				   this->conn = gcnew MySqlConnection("datasource=localhost; username=root; password=""; database=heacker;");

				   MessageBox::Show(L"Usario o Contraseña incorrecta, colococa tu usuario Correcto!");
				
			   }
		   }
		   catch (Exception^ x) {
			   MessageBox::Show(x->Message);
		   }
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
