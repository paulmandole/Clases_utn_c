/*
 * funciones.h
 *
 *  Created on: 24 sep. 2021
 *      Author: Paul
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include "arrayEmployees.h"
#define MAXOPCION 5
#define MINOPCION 1

/**
 * @fn void mostrarMenu(int*)
 * @brief
 *
 * @param opcion
 */
void mostrarMenu(int* opcion);

/**
 * @fn int pedirNumero(int*, char*, char*, int, int)
 * @brief
 *
 * @param num
 * @param mensaje
 * @param mensajeError
 * @param min
 * @param max
 * @return
 */
int pedirNumero(int* num,char* mensaje,char* mensajeError,int min, int max);

/**
 * @fn int pedirString(char*, char*, char*, int)
 * @brief
 *
 * @param cadena
 * @param mensaje
 * @param mensajeError
 * @param max
 * @return
 */
int pedirString(char* cadena,char* mensaje,char* mensajeError,int max);

/**
 * @fn int pedirNumeroFlotante(float*, char*, char*, int, int)
 * @brief
 *
 * @param num
 * @param mensaje
 * @param mensajeError
 * @param min
 * @param max
 * @return
 */
int pedirNumeroFlotante(float* num, char* mensaje,char* mensajeError,int min,int max);

/**
 * @fn int buscarEspacioVacio(sEmployee*, int, int)
 * @brief
 *
 * @param list
 * @param len
 * @param id
 * @return
 */
int buscarEspacioVacio(sEmployee* list, int len ,int* index);
#endif /* FUNCIONES_H_ */
