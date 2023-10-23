#include <stdio.h>
#include <math.h>
int Cubo(int x);

int main(){
	int numero,res,suma;
	int resu;
	printf("escribe un numero para elevarlo al cubo:  ");
	scanf("%d",&numero);
	res=Cubo(numero);
	printf("El cubo del numero es %d\n",res);
	suma=Cubo(numero+numero+numero);
	printf("la suma los 3 resultados son: %d\n",suma);
	return 0;
}

int Cubo(int x){
	int resf;
	resf=pow(x,3);
	return resf;	
}


