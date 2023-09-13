/*Manejo de archivos de texto */
#include<stdio.h>
int main()
{
	FILE* archivo;
	archivo=fopen("datos.txt","w"); // Borra y remplaza y a escribe bajo la linea
	fputs(" ya estas programando y almacenando en archivos\n",archivo);
	fputs("Requiere esfuerzo y dedicación\n",archivo);
	fputs("Pero el resultado vale la pena\n",archivo);
	fclose(archivo);
	puts("Proceso terminado correctamente");
}
