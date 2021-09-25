/*
 * funciones.c
 *
 *  Created on: 22 sep. 2021
 *      Author: Paul
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int pedirNumero(int* num,char* mensaje,char* mensajeError,int min, int max)
{
	int retorno;
	int numIngresado;

	if(num!=NULL && mensaje!=NULL && mensajeError!=NULL)
	{
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%d",&numIngresado);

		while(numIngresado<min || numIngresado>max)
		{
			printf("%s",mensajeError);
			fflush(stdin);
			scanf("%d",&numIngresado);
		}
		*num=numIngresado;
		retorno=0;
	}
	else
	{
		retorno=1;
	}

	return retorno;
}
int pedirString(char* cadena,char* mensaje,char* mensajeError,int max)
{
	int retorno=1;
	char cadenaAux[200];

	if(cadena!=NULL && max>0)
	{
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%[^\n]",cadenaAux);

		while(strlen(cadenaAux)>max)
		{
			printf("%s",mensajeError);
			fflush(stdin);
			scanf("%[^\n]",cadenaAux);
		}
		strcpy(cadena,cadenaAux);
		retorno=0;
	}

	return retorno;
}
int promedio(int* promedio, int num, int num2)
{
	int retorno=1;
	if(promedio!=NULL)
	{
		*promedio=num/num2;
		retorno=0;
	}
	return retorno;
}
int mostrarLista(sJugador* jugador)
{
	int retorno=1;

	if(jugador!=NULL)
	{
		printf("El nombre del jugador es: %s\nLa cantidad de goles hechos por el jugador son: %d\nLa cantidad de partidos jugados por el jugador son: %d\nEl promedio de goles del jugador son: %d",(*jugador).nombre, (*jugador).goles, (*jugador).partidos, (*jugador).promedioGoles);
	}

	return retorno;
}

