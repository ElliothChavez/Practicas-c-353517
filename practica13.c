#include<stdio.h>

/* Este programa muestra la utilización de cadenas en C */

char cadena[8], resto[80];

void main()
{
        printf("Escriba una cadena: ");
        scanf("%s", cadena); /* Las cadenas NO llevan & */
        
        printf("La cadena leida era:  %s\n", cadena);
        
        printf("Y el resto era\n");
        gets(resto);
        puts(resto);
        printf("Terminacion normal del programa.\n\n");
}
