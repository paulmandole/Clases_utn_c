/*
 ============================================================================
 Name        : 3.c
 Author      : Paul Mandole
 Version     :
 Copyright   : Crear una función que pida el ingreso de un entero y lo retorne.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroEntero(void);

int main(void) {

	setbuf(stdout,NULL);

	int num;

	num=numeroEntero();

	printf("El numero ingresado es: %d",num);

	return EXIT_SUCCESS;
}

int numeroEntero(void)
{
	int num;

	printf("ingrese un numero: ");
	fflush(stdin);
	scanf("%d",&num);


	return num;
}
