/*
Programa: Arreglo de 10 y decir que numero es el mayor
Fecha: 29/08/2018
Autor: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{
	//Definicion de variables
	int numero[] = {34,53,12,3,11,77,51,10,66,0};
	int mayor = numero[0];
	//Proceso
	for(int i=0; i<10; i++)
	{
		printf("%d\n",numero[i]);
		if(mayor<numero[i])
		{
			mayor=numero[i];
		}
	}
	printf("El numero mayor es %d",mayor);
	return 0;
}
