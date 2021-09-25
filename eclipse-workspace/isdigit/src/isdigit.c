/*
 ============================================================================
 Name        : isdigit.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void validaLetra(char num);

int main(void) {
	setbuf(stdout,NULL);

	char num;

	printf("ingrese un numero:");
	fflush(stdin);
	scanf("%c",&num);
	validaLetra(num);

	return EXIT_SUCCESS;
}
void validaLetra(char num)
{
 int respuesta;
 respuesta=isdigit(num);
	if(respuesta==1)
	{
		printf("es un numero.");
	}
	else
	{
		printf("no es un numero.");
	}


}
