//captura de texto y variables numericas por teclado e impresion
//de  dichas variables

#include<iostream>
#include<string>

int main()
{
	int edad;
	int numEmpleado;
	std::string nombre;
	//Captura
	std::cout<<"Escribe tu nombre ";
	//std::cin>>nombre;
	std::getline(std::cin,nombre);
	std::cout<<"Escribe tu edad: ";
	std::cin>>edad;
	std::cout<<"Escribe tu numero de empleado: ";
	std::cin>>numEmpleado; 
	//Impresion
	std::cout<<"Bienvenido ;)"<<std::endl;
	std::cout<<"Nombre: "<<nombre<<std::endl;
	std::cout<<"Edad: "<<edad<<std::endl;
 	std::cout<<"Matricula: "<<numEmpleado<<std::endl;
 	
 	return 0;
	
}
