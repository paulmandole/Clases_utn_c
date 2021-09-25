/*
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

inicializar
harcodear


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "Productos.h"

int main(void) {
	setbuf(stdout, NULL);

	eProducto arrayProductos[TAM];
	int opcion;
	int cantidadProductos = 3;
	int ultimoIdIngresado=1003;

	producto_inicializarArray(arrayProductos, TAM);
	producto_hardCodear(arrayProductos, TAM);

	do
	{
		pedirEntero(&opcion, "-------------------------------------\n"
							 "1. ALTA producto\n"
							 "2. BAJA producto\n"
							 "3. MODIFICACION producto\n"
							 "4. LISTADO productos\n"
							 "5. LISTADO ordenado por precio\n"
							 "6. LISTADO ordenado por descripcion\n"
							 "7. SALIR\n"
							 "-------------------------------------\n"
							 "Ingrese una opcion: ",
							 "-------------------------------------\n"
							 "1. ALTA producto\n"
							 "2. BAJA producto\n"
							 "3. MODIFICACION producto\n"
							 "4. LISTADO productos\n"
							 "5. LISTADO ordenado por precio\n"
							 "6. LISTADO ordenado por descripcion\n"
							 "7. SALIR\n"
							 "-------------------------------------\n"
							 "Opcion invalida, reingrese: ", 1, 7);

		switch(opcion)
		{
			case 1:
				if(!producto_agregarProducto(arrayProductos, TAM, &ultimoIdIngresado))
				{
					cantidadProductos++;
				}
				system("pause");
				break;
			case 2:
				producto_mostrarTodos(arrayProductos, TAM);
				if(!producto_borrarUno(arrayProductos, TAM))
				{
					cantidadProductos--;
				}
				system("pause");
				break;
			case 3:
				producto_mostrarTodos(arrayProductos, TAM);
				producto_subMenuModificarUno(arrayProductos, TAM);
				break;
			case 4:
				if(cantidadProductos > 0)
				{
					producto_mostrarTodos(arrayProductos, TAM);
				}
				else
				{
					printf("\nNo hay productos cargados en el sistema.\n\n");
				}
				system("pause");
				break;
			case 5:
				if(cantidadProductos > 0)
				{
					producto_ordenarProductosPorPrecioAsc(arrayProductos, TAM);
				}
				else
				{
					printf("\nNo hay productos cargados en el sistema.\n\n");
				}
				system("pause");
				break;
			case 6:
				if(cantidadProductos > 0)
				{
					producto_ordenarProductosPorDescripcionAsc(arrayProductos, TAM);
				}
				else
				{
					printf("\nNo hay productos cargados en el sistema.\n\n");
				}
				system("pause");
				break;
			case 7:
				printf("\nSaliendo...\nPrograma terminado.\n");
				break;
		}
	}while(opcion != 7);

	return EXIT_SUCCESS;
}
