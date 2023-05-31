#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;
ref class Vehiculo //nombre de la clase
{
private:
	String^ connectionString;  //objetos 
	MySqlConnection^ Driver;
public:
	Vehiculo();
	DataTable^ getData();	//aqui debemos de modificar las indicaciones especificas del ing
	void AbrirConexion();	//metodos
	void CerrarConexion();
	void create(String^, String^, String^, String^);
	void update(String^, String^ , String^, String^, String^);
	void remove(String^);
};

