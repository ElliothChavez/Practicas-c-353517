#include<stdio.h>

int main()
{
	struct datospersonas
	{
		char nombre[20];
		int edad;
		float calif1;
	};
	struct datospersonas persona={"lino",20,9.45};
	printf("el nombre es: %s\n",persona.nombre);
	printf("la edad es: %d\n",persona.edad);
	printf("La calif es %.2f\n",persona.calif1);
}
