#include <stdio.h>
#include <math.h>

int suma(int, int);
main()
{
	int a=10,b=25,t;
	t=suma(a,b);
	printf("%d=%d",suma(a,b),t);
	suma(a,b);
}
int suma(int a,int b)
{
	return(a+b);
}
