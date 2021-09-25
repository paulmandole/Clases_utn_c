/*
 ============================================================================
 Name        : 1.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================

Ejercicio 7-1:
Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:
idProducto (numerico)
descripcion (alfanumérico)
nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
precio (numérico decimal)
Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:
1.ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array.
2.BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
3.MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo.
4.LISTADO Productos.
5.LISTADO ordenado por precio.
6.LISTADO ordenado por descripción.


Para maniana: funcion para verificar conformidad.
Esta funcion devolvera 0 o -1 dependiendo de si esta conforme o no.
En base a su retorno se realizara, o no, la alta o la baja de productos
==============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"



int main(void)
{
	setbuf(stdout,NULL);
	sProducto productos[TAM];
	int opcion;

	inicialisarStruct(productos, TAM);

	do
	{
		mostrarMenu(&opcion);
		switch(opcion)
		{
			case 1:
				altaProducto(productos, TAM, MINID, MAXID,TAMCHAR, MINPRECIO, MAXPRECIO);
				break;
			case 2:
				bajaProducto(productos, TAM, MINID, MAXID);
				system("pause");
				break;
			case 3:
				modificarProducto(productos, TAM, MINID, MAXID , TAMCHAR, MINPRECIO, MAXPRECIO);
				system("pause");
				break;
			case 4:
				listadoProductos(productos, TAM);
				system("pause");
				break;
			case 5:
				ordenarStructuraPrecio(productos, TAM);
				printf("se ordeno por precio.\n");
				system("pause");
				break;
			case 6:
				ordenarStructuraDescripcion(productos, TAM);
				printf("se ordeno por Descripcion.\n");//hacer en la funcion
				system("pause");
				break;
			case 7:
				printf("gracias por elegir el programeitor 9000.!!!!");
				break;
			default:
				printf("ERROR en funcion pedir opcion.\n");
				break;
		}

	}while(opcion!=7);







	return EXIT_SUCCESS;
}
