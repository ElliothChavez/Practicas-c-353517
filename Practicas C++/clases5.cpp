//clase5
#include <iostream>
#include "TCoor.h"
using namespace std;

int main () {
	int i;
	Tcoordenada p1,p2;
	Tcoordenada *ptr1= &p1;
	Tcoordenada *ptr2= &p2;
	//p1.setX(1);
	//p1.setY(2);
	//p1.setZ(3);
	ptr1-> setX(5);
	ptr1-> setY(6);
	//ptr1-> setZ(8);
	(*ptr1).setZ(8);
	//p2.setX(4);
	//p2.setY(5);
	//p2.setZ(6);
	ptr2->setX(9);
	ptr2->setY(10);
	ptr2->setZ(11);
	p1.Imprimir();
	p2.Imprimir();
	return 0;
}
