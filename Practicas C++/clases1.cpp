#include <iostream>
using namespace std;

class Tcoordenada{
	public:
		int x, y, z;
	protected:
		//parte protegida, funciones y datos
	private:
		 //normalmente, datos y funciones auxiliares	
};

int main (void){
	int i;
	Tcoordenada p1;
	p1.x=1;
	p1.y=2;
	p1.z=3;
	cout<<"("<<p1.x<<", "<<p1.y<<", "<<p1.z<<")"<<endl;
	return 0;
}
