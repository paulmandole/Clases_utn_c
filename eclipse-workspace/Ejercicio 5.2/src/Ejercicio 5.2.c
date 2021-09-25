/*
 ============================================================================
 Name        : 2.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================

Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000.
Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.
Se deberán utilizar funciones y vectores.
==============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main(void) {
	setbuf(stdout,NULL);
	int numeros[TAM];
	int contPos;
	int contNeg;
	int maxImp;
	int sumPares;

	inicializarArray(numeros, TAM);

	pedirNumeros("Ingrese un numero entre -1000 y 1000: ", "ERROR.El numero ingresado no se encuentra entre -1000 y 1000.\nRe ingrese un numero: ", numeros, MAX, MIN, TAM);

	positivosYNegativos(numeros, TAM, &contPos, &contNeg);

	printf("la cantidad de numeros positivos ingresados es: %d\nla cantidad de numeros negativos ingresados es: %d\n",contPos,contNeg);

	sumaParesYMayorImpares(numeros, TAM, &sumPares, &maxImp);

	printf("La suma de los pares es: %d\nEl mayor de los impares es:%d\n", sumPares, maxImp);

	mostrar(numeros, TAM);
	return EXIT_SUCCESS;
}
