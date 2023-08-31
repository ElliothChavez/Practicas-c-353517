/* Realizo Ellioth Chavez
fecha: 30 de agosto 2023
funcion: Estructura de control while
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int adivina=-1;
	int contador=0;
	srand(time(NULL));    //genera numeros aleatorios
	int nooculto=rand()%51;
	//printf("%d",nooculto);
	while (nooculto!=adivina)
	{
		contador=contador+1;
		printf("adivina el numero oculto entre 0 y 50:  ");
	    scanf("%d",&adivina);
		if(adivina==nooculto)
		{
		    printf("ganaste %d \n",nooculto);
		    printf("ganaste en %d intentos\n",contador);
		}
		else if(adivina>nooculto)
		printf("el numero oculto es menor :(\n");
		else
		printf("dame un numero mayor\n");
		if(contador==5)
		{
			printf("perdiste :(\n");
			adivina=nooculto;
		}
	}
	
}
