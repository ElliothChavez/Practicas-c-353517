/* Realizo Ellioth Chavez
fecha: 8 de septimbre 2023
funcion: trabajo en clase con arreglos
generar arreglos que el usaurio pidio usando numeros random del 0-10
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int arreglo;
	int num;
	int lon;
	printf("de que tama%co necesita el arreglo: ",164);
	scanf("%d",&arreglo);
	int selec[arreglo];
	for(lon=0;lon<=arreglo-1;lon++) //Aqui generamos un numero aleatorio por cada array que escogio el usuario
	{
	    selec[lon]=rand()%11; //el numero aleatorio lo guardamos en selec y usamos lon para que genere un rand por cada selec generado	
	}
	for(num=0;num<=arreglo-1;num++) //aqui se hara la impresion de cada numero aleatorio
	{
		printf(" el primer numero del array es: %d\n",selec[num]);
	}
	
	return 0;
	
}
