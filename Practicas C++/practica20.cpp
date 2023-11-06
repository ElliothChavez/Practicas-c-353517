//usar una clase para calcular la formula general 
#include <iostream>
#include "formulaG.h"

using namespace std;
int main()
{
	int a,b,c;
	float x,y;
	cout<<"Calcularemos raices con formula general:) "<<endl;
	cout<<"Ingresa el valor de A: "<<endl;
	cin>>a;
	cout<<"Ingresa el valor de B: "<<endl;
	cin>>b;
	cout<<"Ingresa el valor de C: "<<endl;
	cin>>c;
	x=suma(a,b,c);
	y=resta(a,b,c);
	cout<<"El valor de X1 es de: "<<x<<endl;
	cout<<"El valor de x2 es de: "<<y<<endl;
	
}
