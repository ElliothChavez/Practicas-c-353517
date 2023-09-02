/* Realizo Ellioth Chavez
fecha: 1 de septiembre 2023
funcion: Ejercicio while y case switch
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int opcion=1;
	int num1,pot,num3;
	int resultado;
	float num2,res;
	while(opcion!=5)
	{
		system("cls");
		printf("1.-Determinar si el numero recibido es par o impar\n");
		printf("2.-calcular la raiz cuadrada del numero recibido \n");
		printf("3.-elevar el numero recibido a la potencia indicada por el usuario\n");
		printf("4.-pedir dos valores e imprimirlos, primero el mayor\n");
		printf("5.-salir\n");
		printf("Cual es la opcion deseada:   ");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
				printf("Determinar si el numero es par o impar\n");
				printf("escriba un numero  ");
				scanf("%d",&num1);
				resultado=num1%2;
				if(resultado==0)
				printf("El numero es par\n");
				else
				printf("el numero es impar\n");
				break;
		    case 2:
		    	printf("calcular la raiz cuadrada del numero recibido \n");
		    	printf("escriba un numero  ");
				scanf("%f",&num2);
				if(num2>=0)
				{
				    res=sqrt(num2);
				    printf("resultado es= %f\n",res);
			    } 
			    else
			    printf("No se puede sacar raiz de un numero negativo\n");
		    	break;
		    case 3:
		    	printf("elevar el numero recibido a la potencia indicada por el usuario\n");
		    	printf("escriba el numero:  ");
		    	scanf("%d",&num1);
		    	printf("Escriba la potencia:   ");
		    	scanf("%d",&pot);
		    	resultado=pow(num1,pot);
		    	printf("%d\n",resultado);
				break;
			case 4:
				printf("Pedir dos valores e imprimirlos, primero el mayor\n");
				printf("Escriba el primer numero:   ");
				scanf("%d",&num1);
				printf("Escriba el segundo numero:  ");
				scanf("%d",&num3);
				if(num1>num3)
				printf("el numero mayor es %d, y el menor es %d\n",num1,num3);
				else if(num3>num1)
				printf("el numero mayor es %d, y el menor es %d\n",num3,num1);
				else
				printf("los numeros son iguales");
				break;
		    case 5:
		    	printf("GRACIAS por utilizar el programa \n");
		    	
		    	break;
		    default:
		    	printf("recuerda solo utilizar valores del 1 al 5, vuelve a intentar :) \n");
		    	break;
		}
		system("pause");
		

    }
}
