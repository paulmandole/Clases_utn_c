/*
 * funciones.h
 *
 *  Created on: 16 sep. 2021
 *      Author: Paul
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int ingresarNumeros(int* numeros,int tam);
int inicializarArray(int* array,int tam,int inicializacion);
int ordenarNumerosPositivosYNegativos(int* positivos,int* negativos,int tam);
int separarPositivosYNegativos(int* numeros,int* positivos,int* negativos,int tam);
int mostrarArray(int* array, char* mensaje, int tam, int inicializacion);
//int ordenarNumeros(int* numeros,int tam,int manera);

#endif /* FUNCIONES_H_ */
