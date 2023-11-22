#include <iostream>
using namespace std;

class Tcoordenada {
	public:
		//funciones miembro
		void setX(int xx) {
			x=xx;
		}
		void setY(int yy) {
			y=yy;
		}
		void setZ(int zz) {
			z=zz;
		}

		//int getX(void){return x;}
		//	int getY(void){return y;}
		//int getZ(void){return z;}

		void Imprimir (void) {
			cout<<"("<<x;
			cout<<","<<y;
			cout<<","<<z;
			cout<<")"<<endl;

		}
	private:
		int x,y,z;
};

int main () {
	int i;
	Tcoordenada p1,p2;
	p1.setX(1);
	p1.setY(2);
	p1.setZ(3);
	p2.setX(4);
	p2.setY(5);
	p2.setZ(6);
	p1.Imprimir();
	p2.Imprimir();
	return 0;
}

