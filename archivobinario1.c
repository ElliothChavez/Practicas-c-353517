#include<stdio.h>

int main() 
{
	FILE *arch;
	arch=fopen("archivo1.dat","wb");
	if (arch==NULL)
		exit(1);
	char letra='A';
	fwrite(&letra, sizeof(char), 1, arch);
	int valor1=12;
	fwrite(&valor1, sizeof(int), 1, arch);
	float valor2=5.25;
	fwrite(&valor2, sizeof(float), 1, arch);
	fclose(arch);
	printf("Se creo un archivo binario que almacena un char, un int y un float.");
	getch();
	return(0);
}
