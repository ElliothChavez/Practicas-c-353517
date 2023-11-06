#include <iostream>
using namespace std;

int main()
{
	int a=2;
	int b=2;
	a = a+1;
	printf("el resultado de estos incrementos / decrementos es %d\n",a);
	a++;
	a--;
	printf("el resultado de estos incrementos / decrementos es %d\n",a);
	b = a++; // b=a y a=a+1
	printf("el resultado de esta asignacion es: a=%d y b=%d\n",a,b);
	b=++a;
	printf("el resultado de esta asignacion es: a=%d y b=%d\n",a,b);
	printf("antes de la ultima operacion: a=%d y b=%d\n",a,b);
	a+=b;//a=b+a
	printf("el resultado de esta asignacion e incremento es: a=%d y b=%d\n",a,b);	
	a-=b;
	printf("el resultado de esta asignacion e incremento es: a=%d y b=%d\n",a,b);	
	a*=b;
	printf("el resultado de esta asignacion e incremento es: a=%d y b=%d\n",a,b);	
	a/=b;
	printf("el resultado de esta asignacion e incremento es: a=%d y b=%d\n",a,b);	
	a%=b;
	printf("el resultado de esta asignacion e incremento es: a=%d y b=%d\n",a,b);		
	return 0;
}
