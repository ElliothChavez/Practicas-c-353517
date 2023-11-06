//Manejo de Archivos
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ofstream archivo("prueba1.txt");//ofstream equivale a "W"
	archivo << "Esta es una Linea" << endl;
	archivo << "esta es otra" << endl;
	archivo << "y esta es despues de la anterior "  << endl;
	archivo.close();
	
	return 0;
}
