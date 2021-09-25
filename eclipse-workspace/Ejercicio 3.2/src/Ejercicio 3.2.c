/*
 ============================================================================
 Name        : 2.c
 Author      : Paul Mandole
 Version     :
 Copyright   : Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroPar(void);

int main(void)
{
	setbuf(stdout,NULL);//lo necesita el programa

	int resultado;

	resultado=numeroPar();

	printf("%d",resultado);

	return EXIT_SUCCESS;
}

int numeroPar(void)
{
	int respuesta;
	int num;


	printf("ingrese un numero: ");
	fflush(stdin);
	scanf("%d",&num);

	if(num%2 == 0)
	{
		respuesta=1;
	}
	else
	{
		respuesta=0;
	}

	return respuesta;

}
