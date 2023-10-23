#include <stdio.h>

int fibonacci (int numero);
int main(){
	int numero,i;
	printf("escribe cuantos numeros de fibonacci deseas observar:  ");
	scanf("%d",&numero);
	for(i=0;i<=numero;i++){
		printf("%ld\n",fibonacci(i));
	}
	return 0;
}

int fibonacci (int numero){
	if (numero==0 || numero ==1)
	return numero;
	else
	{
		return(fibonacci(numero-1)+fibonacci(numero-2));
	}
}

