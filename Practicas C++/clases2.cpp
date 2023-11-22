#include <iostream>
using namespace std;

class Tcoordenada{
	public:
		//funciones miembro
		void setX(int xx){x=xx;}
		void setY(int yy){y=yy;}
		void setZ(int zz){z=zz;}
		
		int getX(void){return x;}
		int getY(void){return y;}
		int getZ(void){return z;}
	private:
		 int x,y,z;	
};

int main (){
	int i;
	Tcoordenada p1;
	p1.setX(1);
	p1.setY(2);
	p1.setZ(3);
	cout<<"("<<p1.getX();
	cout<<","<<p1.getY();
	cout<<","<<p1.getZ();
	cout<<")"<<endl;
	return 0;
}
