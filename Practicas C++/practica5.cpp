//codigo que pida un numero mayor que 100 y  menor que 1000
//e imprima las centenas, las decenas y las unidades
//ej 453 va a imprimir 4 centenas, 5 decenas y 3 unidades

#include<iostream>
#include<cmath>


int main()
{
	int num;
	float centenas;
	float decenas;
	float unidades;
	std::cout<<"Escriba un numero entre 1000 y 100"<<std::endl;
	std::cin>>num;
	if(num>=100 && num<=1000)
	{
		centenas= (num/100);
		std::cout<<"las Centenas son: "<<trunc(centenas)<<std::endl;
		decenas =(num %100)/10;
		std::cout<<"las Decenas son: "<<trunc(decenas)<<std::endl;
		unidades=num/10;
		unidades = num%10;
		std::cout<<"las Unidades son: "<<trunc(unidades)<<std::endl;
	}
	else
		std::cout<<"El numero no encaja con las caracteristicas necesarias "<<std::endl;
}
 
	

