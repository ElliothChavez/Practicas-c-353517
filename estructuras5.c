  #include<stdio.h>
#include<string.h>

int main() {
	int x;
	int y;
	FILE *archivo;
	archivo=fopen("alumnos.dat","rb");
	struct datoPersona {
		char nombre[20];
		int edad;
		float calif1;
	} persona[5];
	for(x=0; x<=4; x++) {
        fread(persona, sizeof(struct datoPersona),5, archivo);
		printf("nombre: %s\n",persona[x].nombre);
		printf("edad: %d\n",persona[x].edad);
		printf("calificacion: %0.2f\n",persona[x].calif1);
		getch();
		fclose(archivo);
	} 
		

	return 0;  
	
/*	for(x=0;x<=4;x++){
		fread(&persona[x],sizeof(persona[x]),3,archivo);
		printf("%s tiene %d a%cos y su calificacion es de %.2f\n ",persona[x].nombre,persona[x].edad,164,persona[x].calif1);
		getch();
	}
	fclose(archivo);
	return(0);  */
}
