/*Realizo: Ellioth Chavez
Fecha: 23 de agosto 2023
funcion: Verifica si el usuario es mayor de edad y tiene Ine para votar */

#include <stdio.h>
int main()
{
    int edad;
    int ine;
    printf("Que edad tienes:  ");
    scanf("%d",&edad);
    printf("tienes INE  1:Si , 0:No   ");  
    scanf("%d",&ine);
    if(edad>=18 && ine==1)
        printf("Si puedes votar :) ");	  
	else
       printf("No puedes votar :(  ");
    
    
}
