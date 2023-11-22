#include <iostream>
using namespace std;

class Figura{
	public:
		virtual double area() = 0;
		void imprimir(){
			cout<<"El area de la figura es: "<<area()<<endl;
		}
};

class Circulo : public Figura{
	private:
		double radio;
	public:
		Circulo(double r){
			radio=r;
		}
		double area(){
			return 3.1416*radio*radio;
		}
};

class Romboide : public Figura{
	private:
		double altura;
		double base;
	public:
		Romboide(double h, double b){
			altura=h;
			base=b;
		}
		double area(){
			return base*altura;
		}	
};

class Triangulo : public Figura{
	private:
		double altura;
		double base;
	public:
		Triangulo(double h, double b){
			altura=h;
			base=b;
		}
		double area(){
			return (base*altura)/2;
		}
};

int main(void){
	Figura*figuras[3];
	figuras[0] = new Circulo[4];
	Circulo.imprimir();
}
