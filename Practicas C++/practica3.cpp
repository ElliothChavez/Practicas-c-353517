// programa para utilizar un while en c++
//imprimir los pares entre 0 y 1000

#include <iostream>
int main ()
{
	int i=0;
	while(i<=100)
	{
		//std::cout<<i++<<std::endl;
		if (i%2==0)
		{
			std::cout<<i<<""<<" Es un numero par"<<std::endl;
			
		}
		i++;
	}
	return 3;
}
