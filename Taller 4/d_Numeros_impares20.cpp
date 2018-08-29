/*
Programa: Un arreglo de 100 numeros pares
Fecha: 29/08/2018
Autor: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{
	//Definir variables
	int  numero[20];
	printf ("Ingrese 20 numeros\n");
	//Proceso
	for(int i=0;i<20;i++)
	{
		scanf("%d",&numero[i]);
	}
	printf("Los numeros impares  son\n");
	for(int i=0; i<20;i++)
	{
		if (numero[i]%2 == 1)
		{
			printf ("%d\n",numero[i]);
		}
	}
	return 0;
}
