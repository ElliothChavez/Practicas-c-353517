//Crear un programa en C++ que actúe como una calculadora simple. El usuario debe ingresar dos números y
//una operación (suma, resta, multiplicación o división). El programa debe realizar la operación y mostrar
// el resultado. por medio de un switch.

#include<iostream>
#include<cmath>

int main() {
	int opcion;
	int num1, num2;
	float res;
	int x;
	while (opcion != 5) {
		system("cls");
		std::cout<<"Bienvenido  a la calculadora, Seleccione un numero del menu: "<<std::endl;
		std::cout<<"1. Suma "<<std::endl;
		std::cout<<"2. Restar "<<std::endl;
		std::cout<<"3. Multiplicar "<<std::endl;
		std::cout<<"4. Dividir "<<std::endl;
		std::cout<<"5. Salir "<<std::endl;
		std::cin>>opcion;
		switch (opcion) {
			case 1:
				system("cls");
				std::cout<<"Suma"<<std::endl;
				std::cout<<"ingresa un numero: ";
				std::cin>>num1;
				std::cout<<"ingresa el segundo digito: ";
				std::cin>>num2;
				std::cout<<num1 << " + "<< num2 <<std::endl;
				res= (num1 + num2);
				std::cout<<"El resultado es: ";
				std::cout<<res<<std::endl;
				system ("pause");
				break;
			case 2:
				system("cls");
				std::cout<<"resta"<<std::endl;
				std::cout<<"ingresa un numero: ";
				std::cin>>num1;
				std::cout<<"ingresa el segundo digito: ";
				std::cin>>num2;
				std::cout<<num1 << " - "<< num2 <<std::endl;
				res= (num1 - num2);
				std::cout<<"El resultado es: ";
				std::cout<<res<<std::endl;
				system ("pause");
				break;
			case 3:
				system("cls");
				std::cout<<"Multiplicacion"<<std::endl;
				std::cout<<"ingresa un numero: ";
				std::cin>>num1;
				std::cout<<"ingresa el segundo digito: ";
				std::cin>>num2;
				std::cout<<num1 << " X "<< num2 <<std::endl;
				res= (num1 * num2);
				std::cout<<"El resultado es: ";
				std::cout<<res<<std::endl;
				system ("pause");
				break;
			case 4:
				system("cls");
				std::cout<<"Division"<<std::endl;
				std::cout<<"ingresa un numero: ";
				std::cin>>num1;
				std::cout<<"ingresa el segundo digito: ";
				std::cin>>num2;
				std::cout<<num1 << " / "<< num2 <<std::endl;
				res= (num1 / num2);
				std::cout<<"El resultado es: ";
				std::cout<<res<<std::endl;
				system ("pause");
				break;
		}

	}


}
