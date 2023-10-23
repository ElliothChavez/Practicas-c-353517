/* funcion Recursiva para sumar e imprimir los  numeros naturales indicados por el usuario*/
#include <stdio.h>
/*Declaración de la función recursiva*/
int sumaNaturales(int n);
int main() {
	int n;
	printf("Ingresa un numero entero positivo: ");
	scanf("%d", &n);

	/* Llama a la función recursiva para calcular la suma de los primeros n números naturales*/
	int resultado = sumaNaturales(n);

	/* Imprime el resultado*/
	printf("La suma de los primeros %d numeros naturales es: %d\n", n, resultado);
	return 0;
}

	int sumaNaturales(int n) {
	/* Caso base: si n es 0, la suma es 0*/
	if (n == 0) {
		return 0;
	}
	return n + sumaNaturales(n - 1); /* Llama a la función recursiva con n-1 y suma n*/
}
