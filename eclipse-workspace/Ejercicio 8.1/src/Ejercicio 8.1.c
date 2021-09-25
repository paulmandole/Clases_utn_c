/*
 ============================================================================
 Name        : 1.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================

 * Ejercicio 8-1:
Crear la estructura Jugador (nombre, goles metidos, partidos jugados, promedio de goles).
Crear una función que permita cargar los datos de un jugador y otra que los muestre.
Una tercera función calculará el promedio de goles.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
int main(void) {
	setbuf(stdout,NULL);
	sJugador jugador;

	pedirString(jugador.nombre, "Ingrese el nombre del jugador: ", "ERROR.EL nombre es demaciado largo el maximo de caracteres es 35 .\nReingrese el nombre: ", TAMCHAR);
	pedirNumero(&jugador.goles, "ingrese La cantidad de goles realizados por el jugador: ", "ERROR el numero de goles ingresado no es valido. Ingrese un numero mayor a 0 y menor a 2000\nReingrese goles: ", 0, 1000);
	pedirNumero(&jugador.partidos, "Ingrese la cantidad de partidos jugados por el jugador: ", "ERROR. EL numero de partidos ingresados no es valido.\nReingrese un numero entre 0 y 200:", 0, 200);
	promedio(&jugador.promedioGoles, jugador.goles, jugador.partidos);
	mostrarLista(&jugador);
	return EXIT_SUCCESS;
}
