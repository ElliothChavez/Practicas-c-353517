/* Realizo Ellioth Chavez
fecha: 24 de agosto 2023
funcion: Estructura de control FOR
*/
#include <stdio.h>
int main()
{
	int tabla;
	int multiplicador;
	for (tabla=1;tabla<=10;tabla++)
	{
	   printf("tabla de multipicar del %d\n",tabla);
	   for(multiplicador=1;multiplicador<=10;multiplicador++)
		printf("%d x %d = %d\n",tabla,multiplicador,tabla*multiplicador);
	   puts(" ");	
	}

	

}
