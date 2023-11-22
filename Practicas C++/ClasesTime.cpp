#include <windows.h>
#include <iostream>
//#include <stdlib>
using namespace std;

class Tiempo {
	public:
		Tiempo(int h=0, int m=0) : hora(h), minuto(m) {}
		void Mostrar();
		Tiempo operator+(Tiempo h);
	private:
		int hora;
		int minuto;
};
Tiempo Tiempo::operator+(Tiempo h) {
	Tiempo temp;
	temp.minuto = minuto - h.minuto;
	temp.hora = hora - h.hora;
	if(temp.minuto >= 60) {
		temp.minuto -= 60;
		temp.hora++;
	}
	return temp;
}
void Tiempo::Mostrar() {
	cout << hora << ":" << minuto << endl;
}
int main() {
	int x,y;
    SYSTEMTIME lc;
	GetLocalTime(&lc);
	cout<<"ingrese tiempo en Hr para restarlo a la hr local"<<endl;
	cin>>x;
	cout<<"ingrese el tiempo en Min para restarlo a los min local"<<endl;
	cin>>y;
	Tiempo T2(lc.wHour,lc.wMinute), T1(x,y);
	T1= T2 + T1;
	T1.Mostrar();
	system("PAUSE");
	return 0;
}
