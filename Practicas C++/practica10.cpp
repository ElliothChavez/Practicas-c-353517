#include <iostream>
using namespace std;

int main()
{
	int a, b, res;
	int operacion;
	cout<<"Escriba un numero: ";
	cin>>a;
	cout<<"Escriba otro: ";
	cin>>b;
	cout<<"Escriba una operacion (1= resta; otro = suma): ";
	cin>>operacion;
	res = (operacion == 1) ? a-b : a+b;
	cout<<"El resultado es: "<<res;		
	return 0;
}
