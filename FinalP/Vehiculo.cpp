#include "pch.h"
#include "Vehiculo.h"
#include "Inicio.h"
#include "modificar.h"

Vehiculo::Vehiculo() //se iniciliza nuestro metodo constructor
{
	this->connectionString = "datasource=localhost; username=root; password=""; database=heacker;"; //iniciamos nuestra cadena de conexion a la base de datos
	this->Driver = gcnew MySqlConnection(this->connectionString);
}


void Vehiculo::AbrirConexion()
{
	this->Driver->Open();
}
void Vehiculo::CerrarConexion()
{
	this->Driver->Close();
}

DataTable^ Vehiculo::getData()
{
	String^ sql = "select * from civil";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->Driver);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void Vehiculo::create(String^ n, String^ a, String^ s, String^ m) {
	String^ sql = "Insert into civil (nombre, aniofabricacion, serie,marca) values ('" + n + "'," + a + ",'" + s + "','" + m + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->Driver);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ a)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(a->Message);

	}
}

void Vehiculo::update(String^ n, String^ a, String^ s, String^ m, String^ ref)
{
	String^ sql = "update civil set Nombre = '" + n + "', aniofabricacion = '" + a + "', Serie = '" + s + "', Marca = '" + m + "'where idvehiculo = '" + ref + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->Driver);
	try																//este es mi metodo modificar 
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void Vehiculo::remove(String^ idvehiculo) {
	String^ sql = "delete from civil where idVehiculo = " + idvehiculo;
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->Driver);
	try //este es mi metodo eliminar 
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado correctamente!");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
