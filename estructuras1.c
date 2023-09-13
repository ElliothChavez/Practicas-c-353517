/* manejo de estructuras en c
ellioth Chavez*/

#include<stdio.h>
int main()
{
	struct datoPersonas
	{
		char inicial;
		int edad;
		float calif1;
	}persona,persona1,persona2;
	
	persona1.edad=10;
	persona1.inicial='J';
	persona.inicial='L';
	persona.edad=45;
	persona.calif1=7.8;
	printf("La inicial es: %c\n",persona.inicial);
	printf("la edad capturada es: %d\n",persona.edad);
	printf("la calificacion obtenida es: %.2f\n",persona.calif1);
	return 0;
}
