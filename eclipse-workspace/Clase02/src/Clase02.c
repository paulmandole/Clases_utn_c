/*
 ============================================================================
 Name        : Clase02.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 // si se las veces q itera el blucle for
  * si no se la cantidad de veces while
  * si se ejecuta al menos una vez do while
  * switch para bifurcar el camino
  * switch(numero){
  * 	case 0:// cero es la condicion se usa para dias de semana etc,
  * 	 caracter es 'a' cadena "nombre"
  * 		printf("es cero");
  * 		break;
  * 	case 1:
  * 		printf("es uno");
  * 	default:
  * 	 	printf("es otro numero");
  * 	 	break;
  * }
  * acumulador y contador
  * se inicializa en 0
  * int contador;
  * int acumulador=0;
  * int numero;
  *
  * for(contador=0; contador<5; contador++)
  * {
  *
  * 	acumulador= acumulador + numero;
  * }
  *else if{
  *
  }
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);//lo necesita el programa

	int numero;
	int minimo;
	int bandera=0;
	int i;

	for(i=0; i<3; i++)
	{
		printf("Ingrese un numero: ");
		fflush(stdin);
		scanf("%d", &numero);

		if(bandera==0 || numero< minimo)
		{
			minimo=numero;
			bandera=1;
		}

	}

	printf("el minimo es: %d", minimo);

	return EXIT_SUCCESS;
}
