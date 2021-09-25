/*
 * funciones.c
 *
 *  Created on: 12 sep. 2021
 *      Author: Paul
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int inicializarArray(int* numeros, int tam)
{
	int retorno;
	int i;

	if(numeros!=NULL)
	{
		for(i=0; i<tam; i++)
		{
			numeros[i]=2000;
		}
		retorno=0;
	}
	else
	{
		retorno=1;
	}
	return retorno;
}
int pedirNumeros(char* mensaje, char* mensajeError,int* numeros, int max, int min, int tam)
{
	int retorno;
	int i;

	if(numeros!= NULL)
	{
		for(i=0; i<tam; i++)
		{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%d",&numeros[i]);

			while((numeros[i]>max) || (numeros[i]<min))
			{
				printf("%s",mensajeError);
				fflush(stdin);
				scanf("%d",&numeros[i]);
			}
		}
		retorno=0;
	}
	else
	{
		retorno=1;
	}

	return retorno;
}

int positivosYNegativos(int* numeros,int tam, int* positivos, int* negativos)
{
	int retorno;
	int contPos=0;
	int contNeg=0;
	int i;

	if(numeros!= NULL)
	{
		for(i=0; i<tam; i++)
		{
			if(numeros[i]<0)
			{
				contNeg++;
			}
			else
			{
				contPos++;
			}
		}
		*positivos=contPos;
		*negativos=contNeg;
		retorno=0;
	}
	else
	{
		retorno=1;
	}

	return retorno;
}

int sumaParesYMayorImpares(int* numeros, int tam, int* sumaPares, int* mayorImpar)
{
	int retorno;
	int i;
	int sumar=0;
	int maxImp;
	int flag=0;

	if(numeros!= NULL)
	{
		for(i=0; i<tam; i++)
		{
			if(numeros[i] %2 ==0)
			{
				sumar=sumar+numeros[i];
			}
			else
			{
				if(flag==0 || numeros[i]>maxImp)
				{
					maxImp=numeros[i];
				}
			}
		}
		*mayorImpar=maxImp;
		*sumaPares=sumar;
		retorno=0;
	}
	else
	{
		retorno=1;
	}
	return retorno;
}
/*Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.*/

int mostrar(int* numeros, int tam)
{
	int retorno;
	int i;


	if(numeros != NULL)
	{
		for(i=0; i<tam; i++)
		{
			if(numeros[i]!=2000)
			{
				printf("El numero ingresado en la posicion %d es: %d\n", i+1, numeros[i]);
			}

		}

		printf("listado de numeros Pares:\n");

		for(i=0; i<tam; i++)
		{
			if(numeros[i]!= 2000)
			{
				if(numeros[i] % 2==0)
				{
					printf("posicion%d: %d\n",i+1,numeros[i]);
				}
			}
		}

		printf("Listado de pociciones numeros impares:\n");
		for(i=0; i<tam; i++)
		{
			if(numeros[i]!=2000)
			{
				if(numeros[i] % 2!=0)
				{
					printf("posicion: %d\n",i+1);
				}
			}
		}
		retorno=0;
	}
	else
	{
		retorno=1;
	}
	return retorno;
}
