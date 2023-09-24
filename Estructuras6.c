/* Practica en clase del 20 de Sept del 2023
Autor: Ellioth Chavez Lujan
realizar un menu, que muestre losdatos y permita la lectura */

/* #include<stdio.h>
#include<string.h>

int main() {
	FILE*archivo;
	int x;
	int longi;
	struct datoPersona {
		char nombre[20];
		int edad;
		float calif1;
	} persona[x];
	int opcion;
	while(opcion!=4) {
		system("cls");
		printf("Bienvenido al menu de datos, a continuacion le mostraremos las siguientes opciones su documento:\n ");
		printf("1.-Crear un Archivo con n numero de personas\n");
		printf("2.-Leer el Archivo binario\n");
		printf("3.-Edicion de los datos para correciones\n");
		printf("4.-salir\n");
		printf("Cual es la opcion deseada:   ");
		scanf("%d",&opcion);
		switch(opcion) {
			case 1:
				archivo = fopen("Hojadatos.dat","ab");
				system("pause");
				printf("Creacion del documento, por favor introduzca los datos:\n");
				printf("escriba el numero de personas que agregara a el documento:   ");
				scanf("%d",&longi);
				fflush(stdin);
				for(x=1; x<=longi; x++) {

					printf("Escribe tu nombre:  ");
					gets(persona[x].nombre);
					printf("Escribe tu edad:  ");
					scanf("%d",&persona[x].edad);
					printf("Escribe tu calificacion:   ");
					scanf("%f",&persona[x].calif1);
					fflush(stdin);
					printf("%s tiene %d a%cos y su calificacion es de %.2f\n",persona[x].nombre,persona[x].edad,164,persona[x].calif1);
				}
				printf("Documento creado y Guardado.\n");
				fwrite(persona,sizeof(persona),20,archivo);
				system("pause");
				break;
				fclose(archivo);

			case 2:
				archivo = fopen("Hojadatos.dat","ab");
				system("pause");
				printf("Lectura de los datos del documento, presione ENT para mostrar cada usuario:\n");
				fread(persona, sizeof(struct datoPersona),20, archivo);
				for(x=1; x<=sizeof(struct datoPersona); x++) {
					printf("nombre: %s\n",persona[x].nombre);
					printf("edad: %d\n",persona[x].edad);
					printf("calificacion: %0.2f\n",persona[x].calif1);
					getch();
				}
				system("pause");
				break;
			case 3:
				system("pause");
				printf("Edicion de los datos del documento\n");
				system("pause");
				break;
			default:
				printf("recuerda solo utilizar valores del 1 al 3, vuelve a intentar :) \n");
				system("pause");
				break;
		}

	}

	return 0;

}
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct Alumno {
	char nombre[50];
	int edad;
	float calificacion;
}alumno;

int main() {
	int opcion, numAlumnos;
	int i;

	printf("Seleccione una opción:\n");
	printf("1. Crear un documento binario de alumnos\n");
	printf("2. Leer el documento binario de alumnos\n");
	printf("3. Editar el documento binario de alumnos\n");
	scanf("%d", &opcion);

	switch (opcion) {
		case 1:
			printf("Ingrese la cantidad de alumnos a registrar: ");
			scanf("%d", &numAlumnos);


			FILE *archivo = fopen("alumnos.dat", "wb");
			if (archivo == NULL) {
				perror("Error al abrir el archivo");
				exit(1);
			}


			struct Alumno alumno;
			for (int i=0; i <= numAlumnos; i++) {
				printf("Ingrese el nombre del alumno: ");
				scanf("%s", alumno.nombre);
				printf("Ingrese la edad del alumno: ");
				scanf("%d", &alumno.edad);
				printf("Ingrese la calificación del alumno: ");
				scanf("%f", &alumno.calificacion);


				fwrite(&alumno, sizeof(struct Alumno), 1, archivo);
			}


			fclose(archivo);
			break;

		case 2:
			archivo = fopen("alumnos.dat", "rb");
			if (archivo == NULL) {
				perror("Error al abrir el archivo");
				exit(1);
			}


			printf("Datos de los alumnos:\n");
			while (fread(&alumno, sizeof(struct Alumno), 1, archivo) == 1) {
				printf("Nombre: %s\n", alumno.nombre);
				printf("Edad: %d\n", alumno.edad);
				printf("Calificación: %.2f\n", alumno.calificacion);
			}


			fclose(archivo);
			break;

		case 3:

			archivo = fopen("alumnos.dat", "rb+");
			if (archivo == NULL) {
				perror("Error al abrir el archivo");
				exit(1);
			}

			char buscarNombre[50];
			printf("Ingrese el nombre del alumno a editar: ");
			scanf("%s", buscarNombre);
			while (fread(&alumno, sizeof(struct Alumno), 1, archivo) == 1) {
				if (strcmp(alumno.nombre, buscarNombre) == 0) {
					printf("Ingrese la nueva edad del alumno: ");
					scanf("%d", &alumno.edad);
					printf("Ingrese la nueva calificación del alumno: ");
					scanf("%f", &alumno.calificacion);


					fseek(archivo, -sizeof(struct Alumno), SEEK_CUR);


					fwrite(&alumno, sizeof(struct Alumno), 1, archivo);
					printf("Los datos del alumno han sido actualizados.\n");
					break;
				}
			}


			fclose(archivo);
			break;

		default:
			printf("Opción no válida.\n");
			break;
	}

	return 0;
}
