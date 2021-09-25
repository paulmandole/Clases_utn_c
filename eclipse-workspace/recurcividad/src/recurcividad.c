/******************************************************************************
SACAR FACTORIAL (con ingreso infinito para testing)

*******************************************************************************/
/*
 ============================================================================
 Name        : recursividad.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int calcularFactorial(int numeroACalcular);

int main(void) {

	setbuf(stdout, NULL);

	int numeroIngresado;
	int factorial;

	while(1) //bucle infinito
	{
		printf("Ingrese un numero: ");
		fflush(stdin);
		scanf("%d", &numeroIngresado);

		factorial = calcularFactorial(numeroIngresado);

		printf("\nEl factorial de %d es %d\n", numeroIngresado, factorial);
	}

	return EXIT_SUCCESS;
}

int calcularFactorial(int numeroACalcular)
{
	int factorial = 1;

	if (numeroACalcular != 1 && numeroACalcular != 0)
	{
		factorial = numeroACalcular * calcularFactorial(numeroACalcular-1);
	}

	return factorial;
}


