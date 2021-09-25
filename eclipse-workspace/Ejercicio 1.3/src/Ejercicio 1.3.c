/*
 ============================================================================
Paul Mandole
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no
exista también informarlo.

 ============================================================================
 */
//#define corte 3//para definir algo antes
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numero;
	int numeroDos;
	int numeroTres;
	int medio;


	printf("Ingrese un numero: ");
	fflush(stdin);
	scanf("%d",&numero);

	printf("Ingrese un numero: ");
	fflush(stdin);
	scanf("%d",&numeroDos);

	printf("Ingrese un numero: ");
	fflush(stdin);
	scanf("%d",&numeroTres);

	if((numero<numeroDos && numero>numeroTres) ||(numero>numeroDos && numero<numeroTres))
	{
		medio=numero;
		printf("el numero del medio es: %d.", medio);

	}
	else if((numeroDos<numero && numeroDos>numeroTres) || (numeroDos>numero && numeroDos<numeroTres))
	{
		medio=numeroDos;
		printf("el numero del medio es: %d.", medio);
	}
	else if((numeroTres<numero && numeroTres>numeroDos) || (numeroTres>numero && numeroTres<numeroDos))
	{
		medio=numeroTres;
		printf("el numero del medio es: %d.", medio);
	}
	else
	{
		printf("no hay numero en medio.");
	}



	return EXIT_SUCCESS;
}
