#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef INPUTS_H_
#define INPUTS_H_

int pedirEntero(int* entero, char* mensaje, char* mensajeError, int min, int max);
int pedirFlotante(float* flotante, char* mensaje, char* mensajeError, float min, float max);
int pedirCadena(char* cadena, char* mensaje, char* mensajeError, int max);
int pedirCaracter(char* caracter, char* mensaje);

#endif /* INPUTS_H_ */
