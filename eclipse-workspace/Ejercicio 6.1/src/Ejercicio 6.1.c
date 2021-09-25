/*
 ============================================================================
 Name        : 1.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 Disponemos de dos variables numéricas (a y b). Realizar un algoritmo que permita el intercambio de valores de dichas variables.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int num1=2;
	int num2=5;
	int aux;

	printf("numero 1 : %d numero 2 : %d\n",num1,num2);

	aux=num1;
	num1=num2;
	num2=aux;

	printf("numero 1 : %d numero 2 : %d",num1,num2);

	return EXIT_SUCCESS;
}
