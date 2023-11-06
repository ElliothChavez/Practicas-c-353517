//registro anidados (structs)
#include <iostream>
#include <string>
using namespace std;

struct fechaNacimiento
{
	int dia;
	int mes;
	int anio;
};
struct datospersona
{
	string nombre;
	char inicial;
	struct fechaNacimiento diaDeNacimiento;
	float calif;
 }; 
main(){
	datospersona persona;
	persona.nombre="Ellioth";
	persona.inicial='E';
	persona.diaDeNacimiento.dia=10;
	persona.diaDeNacimiento.mes=8;
	persona.diaDeNacimiento.anio=2002;
	persona.calif=7.5;
	return 0;
	
	
}
//llenar datos que faltan e imprimirlos

