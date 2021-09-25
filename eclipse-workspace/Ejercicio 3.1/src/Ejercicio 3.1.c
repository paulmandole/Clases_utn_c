/*
 ============================================================================
 Name        : 1.c
 Author      : Paul Mandole
 Version     :
 Copyright   : Your copyright notice
 Description : Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float numeroFlotante(void);
void mostrarFlotante(float num);

int main(void) {

	float numero;

	setbuf(stdout,NULL);

	numero=numeroFlotante();

	mostrarFlotante(numero);

	return EXIT_SUCCESS;
}

float numeroFlotante(void)
{
	float numero;

	printf("Ingrese un numero flotante: ");
	fflush(stdin);
	scanf("%f", &numero);

	return numero;
}
void mostrarFlotante(float num)
{
	printf("El numero flotante ingresado es:%.2f",num);
}
