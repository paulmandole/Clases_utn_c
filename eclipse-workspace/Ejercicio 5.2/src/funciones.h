/*
 * funciones.h
 *
 *  Created on: 12 sep. 2021
 *      Author: Paul
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#define MAX 1000
#define MIN -1000
#define TAM 5
int inicializarArray(int* numeros, int tam);

int pedirNumeros(char* mensaje, char* mensajeError,int* numeros, int max, int min, int tam);

int positivosYNegativos(int* numeros,int tam, int* positivos, int* negativos);

int sumaParesYMayorImpares(int* numeros, int tam, int* sumaPares,int* mayorImpar);

int mostrar(int* numeros, int tam);


#endif /* FUNCIONES_H_ */
