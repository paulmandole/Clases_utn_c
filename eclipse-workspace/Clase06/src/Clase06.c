/*
 ============================================================================
 Name        : Clase06.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : clase06.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define TAM 11

int main(void) {
	setbuf(stdout, NULL);

	//-------EJEMPLO 1: CARGA DE ARRAY DE CARACTERES (ingreso de palabra/s)
	//char nombreYApellido[TAM];

	//printf("Ingrese su nombre y apellido\n");
	//fflush(stdin);

	//fgets(nombreYApellido, TAM, stdin);
	//gets(nombreYApellido);
	//scanf("%[^\n]", nombreYApellido);

	//printf("Su nombre y apellido es %s", nombreYApellido);

	//-------EJEMPLO 2: LARGO DE CADENA DE CARACTERES
	//char nombre[TAM];

	//int tamanio = strlen(palabra);

	//printf("Ingrese su nombre\n");
	//scanf("%s", nombre);
	//scanf("%[^\n]", nombre);
	//gets(nombre);
	//fgets(nombre, TAM, stdin);

	//int tamanio = strlen(nombre);

	//nombre[tamanio-1] = '\0';

	//printf("El tamanio es: %d", tamanio);

	//printf("Su nombre es: %s", nombre);
	//printf("excelente");

	//-------EJEMPLO 3: ASIGNARLE UN VALOR A UNA CADENA DE CARACTERES
	//char saludo[TAM] = "hola";

	//char despido[TAM] = "chau";
	//palabra = "chau"; NO SE PUEDE

	//strcpy(saludo, "como estas");

	//printf("Saludo: %s", saludo);

	//-------EJEMPLO 4: COMPARACION DE CADENA DE CARACTERES (IGUALDAD Y ORDEN)
	//char primerPalabra[TAM] = "abz";
	//char segundaPalabra[TAM] = "abc";


	//int devolucion = strcmp(primerPalabra, segundaPalabra); //SI SON IGUALES, DEVUELVE 0
	//SI LA PRIMERA ES MENOR EN CODIGO ASCII, DEVUELVE -1
	//ELSE: DEVUELVE 1

	//printf("Devolvio: %d", devolucion);

	//-------EJEMPLO 4: COMPARACION DE CADENA DE CARACTERES (IGUALDAD Y ORDEN) IGNORANDO MAYUSCULAS

	//char primerPalabra[TAM] = "HoLa";
	//char segundaPalabra[TAM] = "hola";

	//int devolucion = stricmp(primerPalabra, segundaPalabra); //NO ES CASE SENSITIVE

	//printf("Devolvio: %d", devolucion);

	//------PASAR CADENA A MAYUSCULAS Y A MINUSCULAS
	//char primerPalabra[TAM] = "HoLa";

	//strupr(primerPalabra);
	//strlwr(primerPalabra);

	//printf("Devolvio: %s", primerPalabra);

	//------CONCATENACION DE CADENAS DE CARACTERES
	//char nombre[31] = "Luciaasdasdasdsad";
	//char apellido[31] = " Morel";

	//char nombreApellido[3] = "";

	//oracion += segundaOracion; ES LO MISMO QUE ESTAMOS HACIENDO ABAJO, ESTO NO SE PUEDE
	//strcat(nombreApellido, nombre); //SIEMPRE de a pares
	//strcat(nombreApellido, apellido);

	//strncat(nombreApellido, nombre, 2); //increible

	//printf("Su nombre y apellido son: %s", nombreApellido);

	//-------------FUNCIONES DE CARACTERES
	/*tolower
	 *toupper
	 *isdigit
	 *isalpha
	 *isspace ' '
	 */
	return EXIT_SUCCESS;
}

