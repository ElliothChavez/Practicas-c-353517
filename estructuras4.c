#include<stdio.h>
#include<string.h>

int main() {
	FILE*archivo;
	archivo = fopen("alumnos.dat","wb");//cambiar a rd

	int x;
	struct datoPersona {
		char nombre[20];
		int edad;
		float calif1;
	} persona[5];
	if(archivo!=0) {


		for(x=0; x<=4; x++) {

			printf("Escribe tu nombre:  ");
			gets(persona[x].nombre);
			printf("Escribe tu edad:  ");
			scanf("%d",&persona[x].edad);
			printf("Escribe tu calificacion:   ");
			scanf("%f",&persona[x].calif1);
			fflush(stdin);
			printf("%s tiene %d a%cos y su calificacion es de %.2f\n ",persona[x].nombre,persona[x].edad,164,persona[x].calif1);
		}
			fwrite(&persona,sizeof(persona),5,archivo);
	}
	return(0);
}
