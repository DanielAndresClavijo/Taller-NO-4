/*
Programa: Suma de 4 numeros decimales
Fecha: 29/08/2018
Autor: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{
	//Definicion de variables
	float  suma,numero[]={3.1,4.6,8.9,7.1};
	printf ("Numeros decimales\n");
	for(int i=0; i<4;i++)
	{
		printf ("%.1f\n",numero[i]);
		suma+=numero[i];
	}
	printf ("La suma de los 4 numeros decimales es de %.1f ",suma);
	return 0;
}
