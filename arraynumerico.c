/*Una tabla, vector, matriz o array (que algunos autores traducen por “arreglo”) 
es un conjunto de elementos, todos los cuales son del mismo tipo. 
Estos elementos tendrán todos el mismo nombre, y ocuparán un espacio contiguo en la memoria.*/

/*---------------------------*/
/*                           */
/*  Primer ejemplo de tablas */
/*                           */
/*    Curso de C,            */
/*   Lino Carrillo           */
/*---------------------------*/
 
#include <stdio.h>
 
int main()
{
    int numero[5];           /* Un array de 5 números enteros */
    int suma,suma2=0,i;      /* Un entero que será la suma */
 
    numero[0] = 200;         /* Les damos valores */
    numero[1] = 150;
    numero[2] = 100;
    numero[3] = -50;
    numero[4] = 300;
    suma = numero[0] + numero[1] + numero[2] + numero[3] + numero[4];
    printf("Su suma es %d\n", suma);
 
    /* Nota: esta es la forma más ineficiente e incómoda */
  
     
	 for(i=0;i<=4;i++)
	 {
	 	suma2=suma2+numero[i];
	 }
     printf("Su suma es %d\n", suma2);
     return 0;
}
 