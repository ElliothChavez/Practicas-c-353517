/*Manejo de archivos de texto */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char nombre[30];
	char apellidos[30];
	char estatura[4];
	char esp[2]= ",";
	FILE* archivo;
	int continuar=0;
	archivo=fopen("alumnos.csv","a"); //  W borra y remplaza y A escribe bajo la linea
	while(continuar!=1)
	{
	
	printf("Escribe tus nombres: \n");
	scanf("%[^\n]", nombre);
	fputs(nombre,archivo);
	puts(" ");
	fflush(stdin);
	fputs(esp,archivo);
	printf("Escribe tus apellidos: \n");
	scanf("%[^\n]", apellidos);
	fputs(apellidos,archivo);
	puts(" ");
	fflush(stdin);
	fputs(esp,archivo);
	printf("Escribe tus estatura en cm: \n");
	scanf("%[^\n]", estatura);
	fputs(estatura,archivo);
	puts(" ");
	fflush(stdin);
	fputs(esp,archivo);
	fputs("\n",archivo);
	printf("Presione 1 para cerrar el programa y 2 para continuar:  ");
	scanf("%d",&continuar); // se puede usar *c
	fflush(stdin);
	}
	fclose(archivo);
	puts("Proceso terminado correctamente");
}
