/*
 * funciones.h
 *
 *  Created on: 3 sep. 2021
 *      Author: Paul
 */


#ifndef FUNCIONES_H_
#define FUNCIONES_H_
// prototipos
#include <stdio.h>
#include <stdlib.h>
//#define MINIMO 1

int pedirNumeroEntero(char* mensaje,char* mensajeError, int minimo , int maximo);
/**
 * @fn int pedirNumeroEntero(char*, char*, int, int)
 * @brief
 *
 * @param mensaje mensaje a mostrar para pedir lo que se necesite
 * @param mensajeError mensaje de ERROR mas mensaje de reingreso
 * @param minimo valor minimo a validar
 * @param maximo valor minimo a validar
 * @return retorna un numero ingresado valido
 */
void limpiarConsola(void);

void mostrarSeparador(void);

#endif /* FUNCIONES_H_ */
