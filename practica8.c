/* Realizo Ellioth Chavez
fecha: 30 de agosto 2023
funcion: Estructura de control FOR
*/
#include <stdio.h>
int main()
{
	int x;
	int buzz;
	int frizz;
	for(x=1;x<=100;x++)
	{
	   buzz=x%5;
   	   frizz=x%3;
	    if(buzz==0 && bizz==0)
		  printf("buzz-bizz\n");
    	else if(bizz==0)
    	   printf("bizz\n");
    	else if(buzz==0)
    	   printf("buzz\n");
    	else
		   printf("%d\n",x) ;  
    }
}
