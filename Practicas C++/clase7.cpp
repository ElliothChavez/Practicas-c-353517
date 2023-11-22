//Herencia
#include <iostream>

using namespace std;

class Operacion {
	protected: //permite que una subclase pueda acceder a dichos atributos
		int valor1;
		int valor2;
		int resultado;
	public:
		cargar1(); //generamos 3 metodos de la clase operacon
		cargar2();
		mostrarRes();
};
// una clase puede heredar los atrinutos de otra clase "padre" convirtiendose en una subclase por lo que todos los metodos de la clase
//operacion son metodos de la clase suma
class Suma: public Operacion {
	public:
		operar();
};

class Resta: public Operacion{
	public:
		operar();
};

Operacion::cargar1(){ //metodo de la clase operacion
      cout<<"ingrese el primer valor:  ";
      cin>>valor1;
}

Operacion:: cargar2(){//metodo 2 de la clase operacion
	cout<<"ingrese el segundo valor: ";
	cin>>valor2;
}

Operacion::mostrarRes(){
	cout<<resultado<<endl;
}

Suma::operar(){
	resultado=valor1+valor2;//caracteristicas que agrega la clase Suma junto con lo que heredo de padre
}

Resta::operar(){
	resultado=valor1-valor2;
}

int main()
{
	Suma suma1;
	suma1.cargar1();
	suma1.cargar2();
	suma1.operar();
	cout<<"La suma de los valores es: ";
	suma1.mostrarRes();
	
	Resta resta1;
	resta1.cargar1();
	resta1.cargar2();
	resta1.operar();
	cout<<"La resta de los valores es: ";
	resta1.mostrarRes();
}


