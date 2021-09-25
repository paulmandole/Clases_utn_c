/*
 ============================================================================
 Name        : Clase.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 define MINIMO // va en el funciones.h
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/******************************************************************************
    EJEMPLO MENU
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	setbuf(stdout, NULL);
	int opcion;

	printf("Bienvenido!!\n");

	do
	{
		mostrarSeparador();
		printf("1.Cargar perro\n2. Borrar perro\n3.Mostrar perros\n4. Salir\nElija una opción\n");
		mostrarSeparador();

		opcion=pedirNumeroEntero("ingrese una opcion: ", "ERROR. El numero ingresado no es valido\nReingrese el numero:",1, 4);

		switch(opcion)
		{
		case 1:
			printf("Eligio cargar un perrito\n");
			break;
		case 2:
			printf("Eligio borrar un perrito\n");
			break;
		case 3:
			printf("Eligio mostrar perritos\n");
			break;
		case 4:
			printf("Eligio salir, fin del programa\n");
			break;
		default:
			printf("Se rompio el programa\n");
			break;
		}

		if (opcion != 4)
		{
			system("pause");
			limpiarConsola();
		}

	}while(opcion != 4);

	return EXIT_SUCCESS;
}


