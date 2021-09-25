/*
 ============================================================================
Paul Mandole
Ejercicio 2-2:
Ingresar 10 números enteros, distintos de cero. Mostrar:
a. Cantidad de pares e impares.
b. El menor número ingresado.
c. De los pares el mayor número ingresado.
d. Suma de los positivos.
e. Producto de los negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define cantidad 10

int main(void) {
	setbuf(stdout,NULL);
	int numero[cantidad];
	int i;
	int parMax=0;
	int contPares=0;
	int contImpares=0;
	int suma=0;
	int min;
	int prodNeg=1;


	for(i=0; i<cantidad; i++)
	{
		do{
		printf("Ingrese un numero: ");
		fflush(stdin);
		scanf("%d",&numero[i]);
		}while(numero[i] == 0);

		if(numero[i] % 2 == 0)
		{
			contPares++;
			if(i==0 || parMax<numero[i])
			{
				parMax=numero[i];
			}
		}
		else
		{
			contImpares++;
		}

		if(numero[i]>0)
		{
			suma=suma+numero[i];
		}

		if( i==0 || numero[i]<min)
		{
			min=numero[i];

		}
		if(numero[i]<0)
		{
			prodNeg=prodNeg*numero[i];
		}

	}




	printf("La Cantidad de numeros pares ingresados son: %d\nLa Cantidad de impares ingresados son: %d\nEl Menor numero ingresado es:%d\nEl mayor numero de los pares ingresado es: %d\nLa suma de los numeros positivos es: %d\nEl producto de los numeros negativos es: %d ", contPares, contImpares, min, parMax, suma, prodNeg);




	return EXIT_SUCCESS;
}
