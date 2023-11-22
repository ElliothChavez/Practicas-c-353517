//Practica 17 manejo de archivos para agregar información a un archivo llamado alumno.txt
//Mediante un while y que pida nombre, matricula, semestre
#include<iostream>
#include<fstream>

using namespace std;
int main() {
	int i=1;
	string nombrea;
	int matricula;
	int semestre;
	string nombre="alumno.txt";
	ofstream archivo;
	//archivo.open(nombre.c_str(),ios_base::app);
	while(i!=0) {
		//system ("cls");
		cout<<"Escriba el nombre: "<<endl;
		getline(cin,nombrea);
		cout<<"Escriba la matricula: "<<endl;
		cin>>matricula;
		cout<<"Escriba el semestre: "<<endl;
		cin>>semestre;
		cin.ignore();
		archivo<<"-"<<nombrea<<"-"<<matricula<<" de "<<semestre<<" semestre "<<endl;
		cout<<"desea agregar informacion de alumno al archivo"<<endl;
		cout<<"agregar informacion 1/si o 0/no"<<endl;
		cin>>i;
		cin.ignore();
		
	}
	archivo.close();
	return 0;
}
