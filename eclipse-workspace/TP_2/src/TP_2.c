/*
 ============================================================================
 Name        : TP_2.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================

 El sistema deber� tener el siguiente men� de opciones:
	1. ALTAS: Se debe permitir ingresar un empleado calculando autom�ticamente el n�mero
	de Id. El resto de los campos se le pedir� al usuario.
	2. MODIFICAR: Se ingresar� el N�mero de Id, permitiendo modificar: o Nombre o Apellido
	o Salario o Sector
	3. BAJA: Se ingresar� el N�mero de Id y se eliminar� el empleado del sistema.
	4. INFORMAR:
	1. Listado de los empleados ordenados alfab�ticamente por Apellido y Sector.
	2. Total y promedio de los salarios, y cu�ntos empleados superan el salario promedio.
	NOTA: Se deber� realizar el men� de opciones y las validaciones a trav�s de funciones.
	Tener en cuenta que no se podr� ingresar a los casos 2, 3 y 4; sin antes haber realizado la
	carga de alg�n empleado.
 ============================================================================

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#include "arrayEmployees.h"

int main(void) {

	setbuf(stdout,NULL);
	sEmployee list[TAM];
	int opcion;
	int ultimoIdCargado;

	initEmployees(list, TAM);

	do
	{
		mostrarMenu(&opcion);
		switch(opcion)
		{
			case 1:
				addEmployee(list, TAM, &ultimoIdCargado);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
		}

	}while(opcion!=5);


	return EXIT_SUCCESS;
}
