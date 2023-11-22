//libreria clases 5 Tcoor
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
