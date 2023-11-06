#include <iostream>
using namespace std;

int main()
{
	int a, b, mayor;
	cout<<"Escriba un numero: ";
	cin>>a;
	cout<<"Escriba otro: ";
	cin>>b;
	mayor = (a>b) ? a:b;
	cout<<"el mayor de los numeros es: "<<mayor;		
	return 0;
}
