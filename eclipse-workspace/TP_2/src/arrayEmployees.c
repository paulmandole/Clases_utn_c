/*
 * arrayEmployees.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Paul
 *
   ============================================================================
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
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#include "arrayEmployees.h"


int initEmployees(sEmployee* list, int len)
{
	int retorno=-1;
	int i;
	if(list!= NULL && len>0)
	{
		for(i=0; i<len; i++)
		{
			list[i].isEmpty=EMPTY;
			retorno=0;
		}
	}
	return retorno;
}

int addEmployee(sEmployee* list, int len, int* id)
{
	int retorno=-1;
	int index;
	if(list!=NULL && len>0)
	{
		buscarEspacioVacio(list, len, &index);
		printf("indice vacio: %d",index);

		if()


		retorno=0;
	}
	return retorno;
}




