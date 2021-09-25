/*
 * funciones.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Paul
 */
/*
 *    ============================================================================
 	El sistema deberá tener el siguiente menú de opciones:
	1. ALTAS: Se debe permitir ingresar un empleado calculando automáticamente el número
	de Id. El resto de los campos se le pedirá al usuario.
	2. MODIFICAR: Se ingresará el Número de Id, permitiendo modificar: o Nombre o Apellido
	o Salario o Sector
	3. BAJA: Se ingresará el Número de Id y se eliminará el empleado del sistema.
	4. INFORMAR:
	1. Listado de los empleados ordenados alfabéticamente por Apellido y Sector.
	2. Total y promedio de los salarios, y cuántos empleados superan el salario promedio.
	NOTA: Se deberá realizar el menú de opciones y las validaciones a través de funciones.
	Tener en cuenta que no se podrá ingresar a los casos 2, 3 y 4; sin antes haber realizado la
	carga de algún empleado.
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#include "arrayEmployees.h"


void mostrarMenu(int* opcion)
{
	printf(				"***********************\n"
						"BIENVENIDO\n\n"
						"1.ALTA DE EMPLEADO\n"
						"2.MODIFICAR EMPLEADO\n"
						"3.BAJA DE EMPLEADO\n"
						"4.INFORMAR\n"
						"5.SALIR DEL PROGRAMA\n"
						"***********************\n"
			);
	pedirNumero(opcion, "Ingrese una opcion:", "ERROR,La opcion ingresado no es valida.\nReingrese una OPCION entre 1 Y 5:", MINOPCION, MAXOPCION);
}

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

int pedirNumeroFlotante(float* num, char* mensaje,char* mensajeError,int min,int max)
{
	int retorno=1;
	float numeroIngresado;
	if(num!=NULL && mensaje!=NULL && mensajeError!=NULL)
	{
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%f",&numeroIngresado);
		while(numeroIngresado>max || numeroIngresado<min)
		{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%f",&numeroIngresado);
		}
		*num=numeroIngresado;
		retorno=0;
	}
	return retorno;
}

int buscarEspacioVacio(sEmployee* list, int len ,int* index)
{
	int retorno=-1;
	int i;
	if(list!=NULL && len>0)
	{
		for(i=0; i<len; i++)
		{
			if(list[i].isEmpty==EMPTY)
			{
				*index=i;
				retorno=0;
				break;
			}
		}
	}
	return retorno;

}
