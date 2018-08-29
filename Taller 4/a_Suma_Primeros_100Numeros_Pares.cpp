/*
Programa: Suma de los 100 primeros numeros pares
Fecha: 29/08/2018
Autor: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{
	//Definicion de variables
	int i=0,x=0,numero[100],suma=0;
	printf(" Los primeros 100 numeros pares son\n");
	//Variables
	for(i=2;i<=200;i++)
	{
		if(i%2 == 0)
		{
			numero[x]=i;			
			suma+=numero[x];	
			 printf("%d - %d\n",x+1,numero[x]);
			x+=1;	
		}
	}
	printf("La suma de los numeros pares es de %d",suma);
	return 0;
}
