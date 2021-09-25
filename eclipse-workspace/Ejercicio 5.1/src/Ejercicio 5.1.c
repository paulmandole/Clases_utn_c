/*
 ============================================================================
 Name        : 1.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 5-1:
Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.

 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main(void) {
	setbuf(stdout,NULL);
	int numeros[TAM];
	int i;
	int suma=0;
	for(i=0; i<TAM; i++)
	{
		printf("ingrese 5 numeros: ");
		fflush(stdin);
		scanf("%d",&numeros[i]);

	}

	for(i=0; i<TAM; i++)
	{
		suma=suma+numeros[i];
	}

	printf("La suma de los numeros ingresados es : %d",suma);


	return EXIT_SUCCESS;
}
