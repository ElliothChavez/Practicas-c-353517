#include <stdio.h>

main() {
	int a=10,b=25,t,res1=0,res2=0,mult=0;
	suma(a,b,&res1,&res2,&mult);
	printf("el valor de la suma es %d el valor de la respuesta es %d \n",res1,res2);
	printf("la multiplicacion es %d\n",mult);
}

suma(int a, int b,int*res1,int *res2,int*mult) {
	*res1=(a+b); // estos punteros se llaman indirecciones
	*res2=(a-b);
	*mult=(a*b);
}
