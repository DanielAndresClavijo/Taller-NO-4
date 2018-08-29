/*
Programa:Pedir 5 calificaciones y dar el promedio
Fecha: 29/08/2018
Autor: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{
	//Definicion de variables
	float calificacion[5],promedio;
	printf("Ingrese cinco calificaciones\n");
	//Proceso
	for(int i=0;i<5;i++)
	{
		scanf("%f", &calificacion[i]);
		
	}
	printf("Las calificaciones que se han ingresado son:\n");
	for(int i=0;i<5;i++)
	{
		printf("- %.0f\n",calificacion[i]);
		promedio+=calificacion[i];
	}
	printf("El promedio de las calificacion es de: %.1f ",promedio/5);
	return 0;
}
