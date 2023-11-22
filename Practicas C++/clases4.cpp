#include <iostream>

using namespace std;
class TCoordenada{
	public:
		int x,y,z;
};

int main(){
	int i;
	TCoordenada p1;
	TCoordenada *ptr1= &p1; // generamos un puntero a la memoria localidad de memoriadel p1
	ptr1-> x=5;
	ptr1-> y=6;
	ptr1-> z=8;
	(*ptr1).x=1;
	(*ptr1).y=2;
	(*ptr1).z=3;
	cout<<"("<<p1.x<<","<<p1.y<<","<<p1.z<<")"<<endl;
	return 0;
	
}
