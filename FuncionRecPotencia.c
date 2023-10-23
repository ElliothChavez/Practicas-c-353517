/* funcion que calcula la potencia 3 de un numero, se llama a si misma 3 veces y multiplica
resultados posteriormente los manda a imprimir.*/

#include<stdio.h>
#include<math.h>
int cubo(int x,int cont);
int main() {
	int num,resultado,cont=3;
	printf("Dame un valor para elevarlo al cubo 3 veces: ");
	scanf("%d",&num);
	resultado=cubo(num,cont); /* manda llamar a la funcion y espera un resultado de retorno.*/
	printf("El cubo del numero es: %d \n",resultado);
	return 0;
}

int cubo (int x,int cont) {
	int res;
	if (cont==0)
		return 1;
	else {
		res=pow(x,3);
		/*cont=cont-1;*/
		return (res*cubo(x,cont=cont-1));
	}
}