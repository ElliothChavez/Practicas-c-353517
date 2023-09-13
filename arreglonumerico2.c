/* ArrayNumerico2
Creador: Ellioth Chavez
Fecha 07-Sep-2023 */

#include <stdio.h>

int main()
{
	int longitud;
	int mult,suma=0;
	int x,y;
	int notas[3][3] =
	 {1,2,3,
	 4,5,6,
	 7,8,9,
	 };
	printf("la diagonal principal es %d %d %d\n",notas[0][0],notas[1][1],notas[2][2]);
	   longitud=sizeof(notas)/sizeof(notas[0]);
	mult=notas[0][1]*notas[0][2]*notas[0][3];
	printf("La multiplicacion de los primeros es elementos es: %d\n");
	for(x=0;x<=2;x++)
	{
		for(y=0;y<=2;y++)
		{
		suma=suma+notas[x][y];	
		}
	}
	printf("la suma de todos los valores del arreglo es %d\n",suma);
	return 0;
}
