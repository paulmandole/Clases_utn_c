/*
 ============================================================================
 Name        : 3.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 Pedirle al usuario su nombre y apellido (en variables separadas, una para el nombre y otra para el apellido). Ninguna de las dos variables se puede modificar.
 Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
 Por ejemplo:
 Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
 Gomez, Juan Ignacio
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 20
int main(void) {
	setbuf(stdout,NULL);
	char nombre[TAM];
	char apellido[TAM];
	char nombreYApellido[40]= "";
	int i;
	int indice;

	printf("ingres su nombre: ");
	fflush(stdin);
	gets(nombre);
	printf("ingrese su apellido: ");
	fflush(stdin);
	gets(apellido);

	strlwr(nombre);
	strlwr(apellido);

	nombre[0] = toupper(nombre[0]);
	apellido[0] = toupper(apellido[0]);
	for(i=0; i<TAM; i++)
	{
		if(nombre[i]==' ')
		{
			indice=i+1;
			break;
		}
	}
	nombre[indice] = toupper(nombre[indice]);
	strcat(nombreYApellido,apellido);
	strcat(nombreYApellido,", ");
	strcat(nombreYApellido,nombre);
	printf("El nombre y apelllido ingresado es: %s",nombreYApellido);

	return EXIT_SUCCESS;
}
