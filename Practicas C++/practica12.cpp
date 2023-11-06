// for con goto
#include <iostream>
using namespace std;

int main()
{
	int i,j;
	for (i=0;i<=5;i++){
		for(j=0;j<=20;j+=2)
		{
			if((i==1)&&(j>=7))
			    goto salida;
			cout<<"i tiene valor de: "<<i<<"y j de: "<<j<<endl;
		}		   		
	}
	salida:
		cout<<"fin del programa"<<endl;
		return 0;
}
