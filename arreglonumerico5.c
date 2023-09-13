/*array dos dimensiones */


#include <stdio.h>
#include <string.h>

int main()
{
	int numero, i;
	char mes [12][20];
	char valor[20];
	for(i=0;i<=11;i++)
	{
		printf("escribe el mes:  ");
		gets(valor);
		strcpy(mes[i],valor);
	}
	printf("cual mes deseas imprimir:  ");
	scanf("%d",&numero);
	printf("El mes %d, corresponde a: %s\n", numero,mes[numero-1]);
	printf("todo el arreglo impreso es: \n ");
	for(i=1;i<=12;i++)
	{
		printf("el %d mes es: %s \n ",i,mes[i-1]);
	}
	printf("la segunda letra del tercer mes es: %c\n",mes[2][1]);
	printf("La primer letra del tercer mes + la segunda letra del cuarto mes son: %c y %c\n",mes[2][0],mes[3][1]);
	return 0;
	
	
	
}
