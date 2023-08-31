#include <stdio.h>
int main()
{
	float precio;
	float descuento;
	printf("Ingrese el precio dek producto:  ");
	scanf("%f",&precio);   //usamos la D para enteros y &para agregar a una variable y f para un flotante 
	if(precio<=1000)
	  printf("el descuento es del 20 porciento");
    else if (precio<=2000)
	    printf("el descuento es del 30 porciento");	
	 else if (precio<=5000)
	    printf("el descuento es del 40 porciento");		  
   else 
       printf("sin descuento");	  
}

