/*
 ============================================================================
 Name        : 4.c
 Author      : Paul Mandole
 Version     :
 Copyright   : Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroEntero(int minimo , int maximo);

int main(void) {

	setbuf(stdout,NULL);

	int num;

	num=numeroEntero(1,100);

	printf("El numero ingresado es: %d",num);

	return EXIT_SUCCESS;
}

int numeroEntero(int minimo, int maximo)
{
	int num;

	printf("ingrese un numero entre 1 y 100: ");
	fflush(stdin);
	scanf("%d",&num);

	while(num<minimo || num>maximo)
	{
		printf("el numero ingresado no esta entre 1 y 100 reingrese numero: ");
		fflush(stdin);
		scanf("%d",&num);
	}


	return num;
}
