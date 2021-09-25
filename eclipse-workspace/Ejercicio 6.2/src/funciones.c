/*
 * funciones.c
 *
 *  Created on: 16 sep. 2021
 *      Author: Paul
 */
#include "funciones.h"
int ingresarNumeros(int* numeros,int tam)
{
	int retorno;
	int i;
	if(numeros!=NULL && tam>-1)
	{
		for(i=0;i<tam;i++)
		{
			printf("Ingrese un numero: ");
			fflush(stdin);
			scanf("%d",&numeros[i]);
		}
		retorno=0;
	}
	else
	{
		retorno=1;
	}

	return retorno;
}

int separarPositivosYNegativos(int* numeros,int* positivos,int* negativos,int tam)
{
	int retorno;
	int i;
	if(tam>-1 && positivos!= NULL && negativos!= NULL)
	{
		for(i=0;i<tam;i++)
		{
			if(numeros[i]<0)
			{
				negativos[i]=numeros[i];

			}
			if(numeros[i]>=0)
			{
				positivos[i]=numeros[i];

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
int ordenarNumerosPositivosYNegativos(int* positivos,int* negativos,int tam)
{
	int retorno;
	int flagSwap;
	int limite;
	int i;
	int aux;
	 if(positivos!=NULL && tam>-1 && negativos!=NULL)
	 {
		 limite = tam - 1;
		 do{
		 		flagSwap = 0;
		 		for(i=0; i<limite; i++)
		 		{
		 			if(negativos[i]!=1)
		 			{
		 				if(negativos[i] < negativos[i+1])
		 				{
		 					aux = negativos[i];
		 					negativos[i] = negativos[i+1];
		 					negativos[i+1] = aux;
		 					flagSwap = 1;
		 				}
		 			}

		 		}
		 		limite--;
		 	}while(flagSwap);

		 limite=tam-1;
		 do
		 {
			 flagSwap=0;
			 for(i=0;i<limite;i++)
			 {
				 if(positivos[i]!=-1)
				 {
					 if(positivos[i]>positivos[i+1])
					 {
						 aux=positivos[i];
						 positivos[i]=positivos[i+1];
						 positivos[i+1]=aux;
						 flagSwap=1;
					 }
				 }
			 }
			 limite--;

		 }while(flagSwap);

		 retorno=0;
	 }
	 else
	 {
		 retorno=1;
	 }

	return retorno;
}

int inicializarArray(int* array,int tam,int inicializacion)
{
	int retorno;
	int i;
	if(array!=NULL && tam>-1)
	{
		for(i=0;i<tam;i++)
		{
			array[i]=inicializacion;
		}
		retorno=0;
	}
	else
	{
		retorno=1;
	}
	return retorno;
}

int mostrarArray(int* array, char* mensaje, int tam, int inicializacion)
{
	int retorno;
	int i;


	if(array!= NULL && tam>-1)
	{
		printf("%s\n",mensaje);
		for(i=0;i<tam;i++)
		{
			if(array[i]!=inicializacion)
			{
				printf("%d\n",array[i]);
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
/*
int ordenarNumeros(int* numeros,int tam,int manera)
{
	int retorno;
	int flagSwap;
	int limite;
	int i;
	int aux;


	if(numeros!=NULL && tam>-1)
	{
		if(manera==0)
		{
			limite=tam-1;
			do
			{
				flagSwap=0;
				for(i=0;i<tam;i++)
				{
					if(numeros[i]<numeros[i+1])
					{
						aux=numeros[i];
						numeros[i]=numeros[i+1];
						numeros[i+1]=aux;
						flagSwap=1;
					}

				}
				limite--;
			}while(flagSwap);
		}
		else if(manera==1)
		{
			limite=tam-1;
			do
			{
				flagSwap=0;
				for(i=0;i<tam;i++)
				{
					if(numeros[i]>numeros[i+1])
					{
						aux=numeros[i];
						numeros[i]=numeros[i+1];
						numeros[i+1]=aux;
						flagSwap=1;
					}

				}
				limite--;
			}while(flagSwap);
		}

		retorno=0;
	}
	else
	{
		retorno=1;
	}
	return retorno;
}*/


