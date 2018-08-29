/*
Programa: Pedir 5 numeros y multiplicarlos por 2 y s emuestren ordenados
Fecha: 29/08/2018
Autor: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{
	//Definicion de variables
	int numero[5], a[5], b[5];
	printf("Ingrese 5 numeros\n");
	//Proceso
	for(int i=0;i<4;i++)
	{
		scanf("%d\n",&numero[i]);
		a[i]=numero[i]*2;
	}
	printf("Los numeros multiplicados por 2 son\n");
	for(int i=0;i<4;i++)
	{
		b[i]=a[i];
		printf("%d\n",b[i]);
	}

	return 0;
}
