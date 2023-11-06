// manejo  de cadenas de texto
#include <iostream>
#include <string>
using namespace std;

int main() {
	string texto1,texto2,texto3;
	cout<<"Escribe tu nombre:  ";
	cin>>texto1;
	cout<<"Escribe tu apellido:  ";
	cin>>texto2;
	texto3= texto1+" "+texto2;
	cout<<"tu nombre es: "<<texto3<<endl;
	string texto4, texto5;
	texto4.assign(texto1);
	texto4.append(" ");
	texto4.append(texto2);
	cout<<"o tambien: "<<texto4<<endl;

	cout<<"los caracteres almacenados en texto 3 son: "<<texto3.length()<<endl;
	texto5=texto3.substr(0,4);//sub cadenas de texto
	cout<<"y las primeras 4 letras son "<<texto5<<endl;
	cout<<"tu primeralletra del dombre es: "<<texto3[0]<<endl;
	cout<<"la segunda letra capturada es: "<<texto3.at(1)<<endl;
	if(texto3.compare(texto5)==0) {
		cout<<"son iguales"<<endl;
	} else
		cout<<"NO son iguales "<<endl;
	return 0;
}
