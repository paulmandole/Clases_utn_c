/*
 * funciones.h
 *
 *  Created on: 22 sep. 2021
 *      Author: Paul
 *
 *    Ejercicio 8-1:
Crear la estructura Jugador (nombre, goles metidos, partidos jugados, promedio de goles).
Crear una función que permita cargar los datos de un jugador y otra que los muestre.
Una tercera función calculará el promedio de goles.
 *
 */
#define TAMCHAR 35
#ifndef FUNCIONES_H_
#define FUNCIONES_H_
typedef struct
{
	char nombre[TAMCHAR];
	int goles;
	int partidos;
	int promedioGoles;

}sJugador;

int pedirNumero(int* num,char* mensaje,char* mensajeError,int min, int max);
int pedirString(char* cadena,char* mensaje,char* mensajeError,int max);
int promedio(int* promedio, int num, int num2);
int mostrarLista(sJugador* jugador);

#endif /* FUNCIONES_H_ */
