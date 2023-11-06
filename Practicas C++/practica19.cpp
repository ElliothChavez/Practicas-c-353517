//calcular raiz cuadrada
#include <iostream>
#include "raices.h"

using namespace std;
int main()
{
	float dato;
	float res;
	cout<<"a que numero le quieres sacar raiz: "<<endl;
	cin>>dato;
	res= raices(dato);
	cout<<"tu raiz es: "<<res<<endl;
	cout<<"el cuadrado es: "<<cuadrado(res);
}
