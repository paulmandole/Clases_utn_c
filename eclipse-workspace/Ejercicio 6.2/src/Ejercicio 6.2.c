/*
 ============================================================================
 Name        : 2.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos). Necesito generar un listado de los números positivos de manera creciente y negativos de manera decreciente. (Como máximo 5 for
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(void) {
	setbuf(stdout,NULL);
	int numeros[TAM];
	int positivos[TAM];
	int negativos[TAM];

	inicializarArray(positivos, TAM, -1);
	inicializarArray(negativos, TAM, 1);
	ingresarNumeros(numeros, TAM);
	separarPositivosYNegativos(numeros, positivos, negativos, TAM);
	ordenarNumerosPositivosYNegativos(positivos, negativos, TAM);
	mostrarArray(positivos, "lista de positivos:", TAM, -1);
	mostrarArray(negativos,"lista de negativos: ", TAM, 1);

	return EXIT_SUCCESS;
}
