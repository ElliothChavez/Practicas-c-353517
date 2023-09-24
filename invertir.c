/* Palabras al reves Practica del 21 de sep del 2023*/
#include <stdio.h>
#include <string.h>

int main() {
	char palabra1[150], palabra2[250],palabra3[150];
	int i,r,cont=0,cont2=0;
	printf("introduzca una palabra\n");
	gets(palabra1);
	for(i=0; i<=strlen(palabra1)-1; i++) {
		if(palabra1[i]!=' ') {


			palabra3[cont2]=palabra1[i];
			cont2++;
		}
	}
	puts(palabra1);
	puts(palabra3);
	for(i=strlen(palabra3)-1; i>=0;i--) {
		palabra2[cont]=palabra3[i];
		cont++;
		printf("los valores del contador 1= %d los valores del contador 2 son %d\n",cont,i);
	}
	system("pause");
	system("cls");
	printf("la palabra invertida es: \n");
	puts(palabra2);
	r=strcmp(palabra3,palabra2);
	if(r==0)
	  printf("la palabra es un palindromo\n");
	else
	   printf("La palabra no es un palindromo");
	


	return(0);
}
