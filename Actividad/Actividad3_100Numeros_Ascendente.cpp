/*
Programa: Imprimir los 100 primeros numeros de forma descendente 
Fecha: 29/08/2018
Autor: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{
	//Definicion de variables
	int numero[100];
	//Proceso
	for(int i=100;i>0;i--)
	{
		numero[i]=i;
		printf("%d\n",numero[i]);
	}
	return 0;
}
