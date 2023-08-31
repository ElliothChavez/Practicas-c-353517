/* Realizo Ellioth Chavez
fecha: 24 de agosto 2023
funcion: Estructura de control FOR
*/
#include <stdio.h>
int main()
{
	int tabla;
	int multiplicador;
	printf("Que tabla desea imprimir:  ");
	scanf("%d",&tabla);
	for (multiplicador=0;multiplicador<=10;multiplicador++)
	{
			printf("%d x %d = %d\n",tabla,multiplicador,tabla*multiplicador);
	}

}

