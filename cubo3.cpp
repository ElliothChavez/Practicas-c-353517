#include <stdio.h>

void f1();
int k=5;//Variable global

int main () {
	int I;
	for (I = 1; I<= 3; I++) {
		::k++;
		f1();
	}
}
void f1()

{
	int k = 2;
	k += k;
	printf("\n\n EL valor de la variable local es: %d", k);
	::k = ::k + k;
	printf("\nEl valor de la variable global es: %d", ::k);
}
