#include<math.h>
int calculo(int x); //declaracion de fincion
int main() {
	int valor;
	float salida;
	printf("Programa para calcular la raiz cuadrada de un numero\n\n");
	printf("ingrese el valor para calcular raiz cuadrada:  ");
	scanf("%d",&valor);
	salida=calculo(valor);
	printf("el resutado es %2.2f\n",salida);

	return (0);
}

int calculo(int x)
{
	float resultado;
	resultado=sqrt(x);
	return resultado;
}
