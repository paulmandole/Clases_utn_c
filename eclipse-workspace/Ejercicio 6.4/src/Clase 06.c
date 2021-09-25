/*
 ============================================================================
 Name        : Clase.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style

1- Se pide el ingreso de dos personas, cada una con su respectivo nombre y apellido (nombreCompletoUno, nombreCompletoDos)
2- Mostrar el largo de cada nombre ingresado
3- Se pide dividir el hilo de ejecucion:
	a) Si los nombres son identicos, mostrar "Ingresaste lo mismo, salame"
	b) Si el primer nombre (usando en el orden ingresado en el punto 1) esta primero alfabeticamente, mostrar ambos nombres en orden (simple, dos printf)
	c) Si el segundo nombre (usando en el orden ingresado en el punto 1 esta primero alfabeticamente, mostrarlo en orden (simple, dos printf)

*NOTA: Hacer una GUI intuitiva para el usuario
*NOTA 2: Usar las funciones vistas en clase (no olviden la biblioteca)
*NOTA
*NOTA hacer ejercicio 6.3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 21

int main(void) {
	setbuf(stdout,NULL);
	char nombre1[TAM];
	char nombre2[TAM];
	int tamanio1;
	int tamanio2;
	int comparacion;

	printf("ingrese el primer nombre: ");
	fflush(stdin);
	gets(nombre1);
	printf("ingrese el segundo nombre: ");
	fflush(stdin);
	gets(nombre2);

	tamanio1 = strlen(nombre1);
	tamanio2 = strlen(nombre2);

	printf("el tamanio del primer nombre es: %d\nel tamanio del segundo nombre es: %d",tamanio1,tamanio2);

	comparacion=strcmp(nombre1,nombre2);
	if(comparacion==0)
	{
		printf("Ingresaste lo mismo, salame.\n");
	}
	else if(comparacion==-1)
	{
		printf("\n%s\n%s",nombre1,nombre2);
	}
	else
	{
		printf("\n%s\n%s",nombre2,nombre1);
	}

	return EXIT_SUCCESS;
}
