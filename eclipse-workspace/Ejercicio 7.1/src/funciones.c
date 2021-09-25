/*
 * funciones.c
 *
 *  Created on: 20 sep. 2021
 *      Author: Paul
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"


void mostrarMenu(int* opcion)
{
	printf("*****************\nBIENVENIDO\n*****************\n1.ALTA DE PRODUCTO.\n2.BAJA PRODUCTO.\n3.MODIFICAR PRODUCTO.\n4.LISTADO DE PRODUCTOS.\n5.LISTADO ORDENADO POR PRECIO.\n6.LISTADO ORDENADO POR DESCRIPCION.\n7.SALIR DEL PROGRAMA\n");
	pedirNumero(opcion, "Ingrese una opcion:", "ERROR,La opcion ingresado no es valida.\nReingrese una OPCION entre 1 Y 7:", MINOPCION, MAXOPCION);
}
int pedirNumero(int* num,char* mensaje,char* mensajeError,int min, int max)
{
	int retorno;
	int numIngresado;

	if(num!=NULL && mensaje!=NULL && mensajeError!=NULL)
	{
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%d",&numIngresado);

		while(numIngresado<min || numIngresado>max)
		{
			printf("%s",mensajeError);
			fflush(stdin);
			scanf("%d",&numIngresado);
		}
		*num=numIngresado;
		retorno=0;
	}
	else
	{
		retorno=1;
	}

	return retorno;
}
int altaProducto(sProducto* producto,int tam,int minId,int maxId,int tamChar ,int minPrecio, int maxPrecio)
{
	int retorno=1;
	int indice;
	char nacionalidad[5];
	char tipo[7];


	if(producto!=NULL && tam>0)
	{
		indiceACargar(producto, tam, &indice);

		if(indice!=-1)
		{
			producto[indice].estado = 1;
			pedirNumero(&producto[indice].idProducto, "Ingrese el Id del producto: ", "ERROR.El Id ingresado no es valido.\nReingrese Id mayor a 0 y menor a 1000: ", minId, maxId);
			pedirString(producto[indice].descripcion, "Ingrese la Descripcion del producto: ", "ERROR.La descripcion es demaciado larga ingrese una decripcion con un maximo de 60 caracteres.", tamChar);
			pedirNumeroFlotante(&producto[indice].precio, "Ingrese el precio del producto: ", "ERROR.Ingrese un precio valido mayor a 0:", minPrecio, maxPrecio);
			pedirString(nacionalidad, "Ingrese la Nacionalidad del producto sea EEUU,CHINA o OTRO: ", "ERROR.La nacionalidad Ingresada es Incorrecta.\nReingrese la nacionalidad sea EEUU,CHINA o OTRO:", 5);

			while(strcmp(nacionalidad,"EEUU")!=0 && strcmp(nacionalidad,"CHINA")!=0  && strcmp(nacionalidad,"OTRO")!=0 )
			{
				pedirString(nacionalidad, "Ingrese la Nacionalidad del producto sea EEUU,CHINA o OTRO: ", "ERROR.La nacionalidad Ingresada es Incorrecta.\nReingrese la nacionalidad sea EEUU,CHINA o OTRO:", 5);

			}
			if(strcmp(nacionalidad,"EEUU")==0)
			{
				producto[indice].nacionalidad=EEUU;
			}
			else
			{
				if(strcmp(nacionalidad,"CHINA")==0)
				{
					producto[indice].nacionalidad=CHINA;
				}
				else
				{
					if(strcmp(nacionalidad,"OTRO")==0)
					{
						producto[indice].nacionalidad=OTRO;
					}
				}
			}

			pedirString(tipo, "Ingrese el tipo de producto sea IPHONE,MAC,IPAD o ACCESORIOS: ", "ERROR.El tipo de producto ingresado es Incorrecto.\nReingrese el tipo de producto sea IPHONE,MAC,IPAD o ACCESORIOS: ", 10);

			while(strcmp(tipo,"IPHONE")!=0 && strcmp(tipo,"MAC")!=0  && strcmp(tipo,"IPAD")!=0 && strcmp(tipo,"ACCESORIOS")!=0 )
			{
				pedirString(tipo, "Ingrese el tipo de producto sea IPHONE,MAC,IPAD o ACCESORIOS: ", "ERROR.El tipo de producto ingresado es Incorrecto.\nReingrese el tipo de producto sea IPHONE,MAC,IPAD o ACCESORIOS: ", 10);
			}
			if(strcmp(tipo,"IPHONE")==0)
			{
				producto[indice].tipo=IPHONE;
			}
			else
			{
				if(strcmp(tipo,"MAC")==0)
				{
					producto[indice].tipo=MAC;
				}
				else
				{
					if(strcmp(tipo,"IPAD")==0)
					{
						producto[indice].tipo=IPAD;
					}
					else
					{
						if(strcmp(tipo,"ACCESORIOS")==0)
						{
							producto[indice].tipo=ACCESORIOS;
						}
					}
				}
			}

		}
		retorno=0;
	}
	return retorno;
}
int inicialisarStruct(sProducto* producto,int tam)
{
	int retorno;
	int i;
	if(producto != NULL && tam>0)
	{
		for(i=0; i<tam; i++)
		{
			producto[i].estado=0;
		}
		retorno=0;
	}
	else
	{
		retorno=1;
	}
	return retorno;
}
int indiceACargar(sProducto* producto,int tam,int* indice)
{
	int retorno=1;
	int i;
	int flag=0;
	if(producto!= NULL && tam>0)
	{
		for(i=0; i<tam; i++)
		{
			if(producto[i].estado==0)
			{
				*indice=i;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("ERROR.No queda espacio para guardar mas productos.\n");
			*indice=-1;
		}
	}
	return retorno;
}
int pedirString(char* cadena,char* mensaje,char* mensajeError,int max)
{
	int retorno=1;
	char cadenaAux[200];

	if(cadena!=NULL && max>0)
	{
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%[^\n]",cadenaAux);

		while(strlen(cadenaAux)>max)
		{
			printf("%s",mensajeError);
			fflush(stdin);
			scanf("%[^\n]",cadenaAux);
		}
		strcpy(cadena,cadenaAux);
		retorno=0;
	}

	return retorno;
}
int pedirNumeroFlotante(float* num, char* mensaje,char* mensajeError,int min,int max)
{
	int retorno=1;
	float numeroIngresado;
	if(num!=NULL && mensaje!=NULL && mensajeError!=NULL)
	{
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%f",&numeroIngresado);
		while(numeroIngresado>max || numeroIngresado<min)
		{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%f",&numeroIngresado);
		}
		*num=numeroIngresado;
		retorno=0;
	}
	return retorno;
}
int bajaProducto(sProducto* producto,int tam, int minId, int maxId)
{
	int retorno=1;
	int id;
	int ubicacion;
	int confirmacion;
	if(producto!=NULL && tam>0)
	{
		pedirNumero(&id, "Ingrese el Id del producto a dar de baja: ", "ERROR.Elnumero ingresado no es valido.Reingrese un numero entre 0 y 1000: ", minId, maxId);
		buscadorId(producto, tam, id, &ubicacion);
		if(ubicacion!=-1)
		{
			printf("El id a borrar es: %d\n esta seguro de dar de baja este ID?",id);
			pedirNumero(&confirmacion, "ingrese 1 para borrar o 2 para cancelar: ", "ERROR.EL numero ingresado no esta entre las opciones.Reingrese numero 1 para borrar o 2 para cancelar: ", 1, 2);
			if(confirmacion==1)
			{
				producto[ubicacion].estado=0;
			}
			else
			{
				printf("Se a cancelado la baja del Id %d.\n",id);
			}
		}
		else
		{
			printf("ERROR.No se encontro el ID ingresado en la base de datos, el Id ingresado fue: %d\n",id);
		}

		retorno=0;
	}
	return retorno;
}
int buscadorId(sProducto* producto,int tam, int id,int* ubicacion)
{
	int retorno=1;
	int i;
	int flag=0;
	if(producto!=NULL && tam>0)
	{
		for(i=0; i<tam; i++)
		{
			if(producto[i].estado==1)
			{
				if(producto[i].idProducto==id)
				{
					*ubicacion=i;
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
		{
			*ubicacion=-1;
		}
	}
	return retorno;
}
int listadoProductos(sProducto* producto, int tam)
{
	int retorno=1;
	int i;
	if(producto!=NULL && tam>0)
	{
		for(i=0; i<tam; i++)
		{
			if(producto[i].estado==1)
			{
				mostrarLista(&producto[i]);
			}
		}

		retorno=0;
	}

	return retorno;
}
int mostrarLista(sProducto* producto)
{
	int retorno=1;

	if(producto!=NULL)
	{
		printf("\nID Producto: %d\nDescripcion del Producto: %s\nNacionalidad del Producto: %d\nTipo de Producto: %d\nPrecio del Producto: %.2f\n", (*producto).idProducto,(*producto).descripcion,(*producto).nacionalidad,(*producto).tipo,(*producto).precio );
	}

	return retorno;
}
int ordenarStructuraPrecio(sProducto* producto, int tam)
{
	int retorno=1;
	int limite;
	int i;
	int flagSwap;
	sProducto auxProducto;
	if(producto!=NULL && tam>0)
	{
		limite=tam-1;
		do
		{
			flagSwap=0;
			for(i=0; i<limite; i++)
			{
				if(producto[i].precio>producto[i+1].precio)//preguntar como pasar ese dato a comparar como parametro generico
				{
					auxProducto=producto[i];
					producto[i]=producto[i+1];
					producto[i+1]=auxProducto;
					flagSwap=1;
				}

			}
			limite--;
		}while(flagSwap);

		retorno=0;
	}
	return retorno;
}
int ordenarStructuraDescripcion(sProducto* producto, int tam)
{
	int retorno=1;
	int limite;
	int flagSwap;
	int i;
	sProducto auxProducto;
	if(producto!=NULL && tam>0)
	{
		limite=tam-1;
		do
		{
			flagSwap=0;
			for(i=0; i<limite; i++)
			{
				if(strcmp(producto[i].descripcion,producto[i+1].descripcion)==1)
				{
					auxProducto=producto[i];
					producto[i]=producto[i+1];
					producto[i+1]=auxProducto;
					flagSwap=1;
				}
			}
			limite--;
		}while(flagSwap);


		retorno=0;
	}
	return retorno;
}
int modificarProducto(sProducto* producto, int tam,int idMax, int idMin,int tamChar, int minPrecio, int maxPrecio)
{
	int retorno=1;
	int id;
	int indice;
	int opcionAModificar;
	char nacionalidad[5];
	char tipo[7];
	if(producto!=NULL && tam>0)
	{
		pedirNumero(&id, "Ingrese el ID del producto a modificar: ", "ERROR.El numero ingresado debe ser del 0 al 1000.\n Reingrese un numero valido: ", idMax, idMin);
		buscadorId(producto, tam, id, &indice);
		if(indice!=-1)
		{
			printf("Ingrese que dato desea modificar.\n1.Descripcion\n2.Nacionalidad\n3.Tipo\n4.Precio\n");
			pedirNumero(&opcionAModificar, "Ingrese una opcion: " , "ERROR.La opcion ingresada es invalida.Ingrese un numero entre 1 y 4: ", 1, 4);
			switch(opcionAModificar)
			{
				case 1:
					pedirString(producto[indice].descripcion, "Ingrese la Descripcion del producto: ", "ERROR.La descripcion es demaciado larga ingrese una decripcion con un maximo de 60 caracteres.", tamChar);
					break;
				case 2:
					pedirString(nacionalidad, "Ingrese la Nacionalidad del producto sea EEUU,CHINA o OTRO: ", "ERROR.La nacionalidad Ingresada es Incorrecta.\nReingrese la nacionalidad sea EEUU,CHINA o OTRO:", 5);

					while(strcmp(nacionalidad,"EEUU")!=0 && strcmp(nacionalidad,"CHINA")!=0  && strcmp(nacionalidad,"OTRO")!=0 )
					{
						pedirString(nacionalidad, "Ingrese la Nacionalidad del producto sea EEUU,CHINA o OTRO: ", "ERROR.La nacionalidad Ingresada es Incorrecta.\nReingrese la nacionalidad sea EEUU,CHINA o OTRO:", 5);

					}
					if(strcmp(nacionalidad,"EEUU")==0)
					{
						producto[indice].nacionalidad=EEUU;
					}
					else
					{
						if(strcmp(nacionalidad,"CHINA")==0)
						{
							producto[indice].nacionalidad=CHINA;
						}
						else
						{
							if(strcmp(nacionalidad,"OTRO")==0)
							{
								producto[indice].nacionalidad=OTRO;
							}
						}
					}

					break;
				case 3:
					pedirString(tipo, "Ingrese el tipo de producto sea IPHONE,MAC,IPAD o ACCESORIOS: ", "ERROR.El tipo de producto ingresado es Incorrecto.\nReingrese el tipo de producto sea IPHONE,MAC,IPAD o ACCESORIOS: ", 10);

					while(strcmp(tipo,"IPHONE")!=0 && strcmp(tipo,"MAC")!=0  && strcmp(tipo,"IPAD")!=0 && strcmp(tipo,"ACCESORIOS")!=0 )
					{
						pedirString(tipo, "Ingrese el tipo de producto sea IPHONE,MAC,IPAD o ACCESORIOS: ", "ERROR.El tipo de producto ingresado es Incorrecto.\nReingrese el tipo de producto sea IPHONE,MAC,IPAD o ACCESORIOS: ", 10);
					}
					if(strcmp(tipo,"IPHONE")==0)
					{
						producto[indice].tipo=IPHONE;
					}
					else
					{
						if(strcmp(tipo,"MAC")==0)
						{
							producto[indice].tipo=MAC;
						}
						else
						{
							if(strcmp(tipo,"IPAD")==0)
							{
								producto[indice].tipo=IPAD;
							}
							else
							{
								if(strcmp(tipo,"ACCESORIOS")==0)
								{
									producto[indice].tipo=ACCESORIOS;
								}
							}
						}
					}
					break;
				case 4:
					pedirNumeroFlotante(&producto[indice].precio, "Ingrese el precio del producto: ", "ERROR.Ingrese un precio valido mayor a 0:", minPrecio, maxPrecio);
					break;
			}
		}
		else
		{
			printf("ERROR el ID ingresado no se encuentra en la base de datos.\n");
		}
		retorno=0;
	}
	return retorno;

}
