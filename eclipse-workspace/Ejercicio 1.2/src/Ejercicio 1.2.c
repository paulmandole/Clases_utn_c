/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Paul Mandole
 Ejercicio 1-2:ingresar 3 números y mostrar el mayor de los tres.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);//lo necesita el programa

		int numero;
		int maximo;
		int bandera=0;
		int i;

		for(i=0; i<3; i++)
		{
			printf("Ingrese un numero: ");
			fflush(stdin);
			scanf("%d", &numero);

			if(bandera==0 || numero> maximo)
			{
				maximo=numero;
				bandera=1;
			}

		}
		printf("el maximo es: %d", maximo);


	return EXIT_SUCCESS;
}
