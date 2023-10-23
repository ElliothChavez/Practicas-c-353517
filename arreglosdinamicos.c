/*Manejo de Arreglos dinamicos
crea un arreglo dinamico de valores enteros
y genera otro nuevo con los valores pares y lo imprime
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	int dim_usu;
	int dim_par;
	int n;  //para recorrer los for
	int m;  // para generar elarreglo de numeros pares
	int *pvec_usu; //puntero al arreglo alimentafo por el usuario
	int *pvec_par; //puntero al arreglo de elementos pares (Dinamico)
	printf("cual es la dimension del arreglo (unidimensional): ");
	scanf("%d",&dim_usu);
	// pvec_usu= (int*) calloc(dim_usu,sizeof(int)); //Asigna memoria para el arreglo usuario
	pvec_usu= (int*) malloc(dim_usu*sizeof(int)); //Asigna memoria para el arreglo usuario
	if(pvec_usu==NULL) {
		printf("ERROR NO HAY MEMORIA SUFICIENTE: para crear vector de %d elementos",dim_usu);
	} else {
		for(n=0; n<dim_usu; n++) {
			printf("elemento %d = ",n);
			scanf("%d",&(pvec_usu[n]));
		}
	}
	dim_par=0;
	for(n=0; n<dim_usu; n++)
		if((pvec_usu[n]%2)==0) dim_par++;
	pvec_par=(int *) calloc(dim_par,sizeof(int));
	if(pvec_par==NULL)
		printf("ERROR: no hay memoria suficiente para crear vector de %d elementos", dim_par);
	else {
		m=0;
		for(n=0; n<dim_usu; n++) {
			if((pvec_usu[n]%2)==0) {
				pvec_par[m]=pvec_usu[n];
				m++;
			}
		}
	}
	for(n=0; n<dim_par; n++)
		printf("elemento par %d = %d\n",n,pvec_par[n]);
	free(pvec_par);
	printf("____________________________________\n");
	for(n=0; n<dim_par; n++)
		printf("elemento par %d = %d\n",n,pvec_par[n]);
	free(pvec_usu);

}




