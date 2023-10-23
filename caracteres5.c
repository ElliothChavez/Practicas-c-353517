#include<stdio.h>

int main()
{
    printf("caracteres especiales\n");

    printf("%c ",   160); 
    printf("%c \n", 181); 
    printf("%c ",   130);/* é */
    printf("%c \n", 144); /* É */
    printf("%c ",   161);/* í */
    printf("%c \n", 214);/* Í */
    printf("%c ",   162);/* ó */
    printf("%c \n", 224);/* Ó */
    printf("%c ",   163);/* ú */
    printf("%c \n", 233);/* Ú */
    printf("%c ",   164);/* ñ */
    printf("%c \n", 165);/* Ñ */
    printf("ya puedo pon%cr ac%cntos en t%cdas las l%ctras, incluso las letra %c, %c\n",130,130,162,130,164,165);

    return 0;
}
