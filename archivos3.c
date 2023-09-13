#include<stdio.h>
int main()
{
	FILE* fin;
	char c;
	fin=fopen("alumnos.csv","r");
	while (c != EOF)
	{
		c=fgetc(fin);
		putchar(c);	
	}
	fclose(fin);
}
