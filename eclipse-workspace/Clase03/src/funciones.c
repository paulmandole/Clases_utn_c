/*
 * funciones.c
 *
 *  Created on: 3 sep. 2021
 *      Author: Paul
 */
//incluyo la biblioteca
#include "funciones.h"

  int pedirNumeroEntero(char* mensaje, char* mensajeError, int minimo , int maximo)
 {
 	int numeroIngresado;

 	 printf("%s", mensaje);
 	 fflush(stdin);
 	 scanf("%d",&numeroIngresado);

 	while(numeroIngresado<minimo || numeroIngresado>maximo)
 	{
	 	 printf("%s", mensajeError);
	 	 fflush(stdin);
	 	 scanf("%d",&numeroIngresado);
 	}




 	 return numeroIngresado;
 }

