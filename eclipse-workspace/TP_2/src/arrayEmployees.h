/*
 * arrayEmployees.h
 *
 *  Created on: 24 sep. 2021
 *      Author: Paul
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_
#include "funciones.h"
typedef struct
{
	 int id;
	 char name[51];
	 char lastName[51];
	 float salary;
	 int sector;
	 int isEmpty;

}sEmployee;

#define TAM 5
#define EMPTY 0
#define FULL 1

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 */
int initEmployees(sEmployee* list, int len);


int addEmployee(sEmployee* list, int len, int* id);

#endif /* ARRAYEMPLOYEES_H_ */
