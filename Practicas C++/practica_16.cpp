//Manejo de Archivos para agregar informacion a un archivo
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	string nombre="prueba1.txt";
	ofstream archivo;
	archivo.open(nombre.c_str(),ios_base::app);
	archivo <<"Nueva linea que se adjunta al final cada que se ejecuta"<< endl;
	//archivo <<  "Nueva linea que se adjunta al final cada que se ejecuta\n";
	archivo.close();
	std::getline(std::cin,nombre);
	return 0;
}
