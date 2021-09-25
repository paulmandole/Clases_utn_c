/*
 ============================================================================
 Name        : 3.3
 Author      : Paul Mandole
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 *Crear una función que pida el ingreso de un entero y lo retorne.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);

int main(void) {

	setbuf(stdout,NULL);
	int numeroIngresado;

	numeroIngresado=pedirNumero();

	printf("El numero ingresado es: %d", numeroIngresado);

	return EXIT_SUCCESS;
}

int pedirNumero(void)
{
	int numeroIngresado;

	printf("ingrese un numero: ");
	fflush(stdin);
	scanf("%d",&numeroIngresado);

	return numeroIngresado;
}
