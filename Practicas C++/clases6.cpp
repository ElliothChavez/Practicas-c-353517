#include<iostream>
#include<string>

using namespace std;

class LibroCalificaciones {//poner la primera en mayusculas para identificar las clases (nomenclatura pascal)
	public:
		mostrarMensaje(string nombreCurso){
			cout<<"Bienvenido al libro de calificaciones para: "<<nombreCurso<<"!"<<endl;
		}//fin de la funcion miembro
};

int main(){
	string nombreDelCurso;
	LibroCalificaciones miLC,miLC2; //alias que en realidad es un objeto derivado de la clase
	cout<<"escribe el nombre del curso 1 :)  ";
	getline(cin,nombreDelCurso);
	miLC.mostrarMensaje(nombreDelCurso);
	cout<<"escribe el nombre del curso 2 :)  ";
	getline(cin,nombreDelCurso);
	miLC2.mostrarMensaje(nombreDelCurso);
	return 0;
	
}
	

