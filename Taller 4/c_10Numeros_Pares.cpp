/*
Programa: Ingresar 10 numeros enteros y mostrar los numeros pares
Fecha: 29/08/2018
Autor: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{
	//Definicion de variables
	int  numero[10];
	printf ("Ingrese 10 numeros\n");
	//Preceso
	for(int i=0;i<10;i++)
	{
		scanf("%d",&numero[i]);
	}
	printf("Los numeros pares son\n");
	for(int i=0; i<10;i++)
	{
		if (numero[i] % 2 == 0)
		{
			printf("%d,",numero[i]);
		}
	}
	return 0;
}
