#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Productos.h"
#include "funciones.h"

void producto_inicializarArray(eProducto producto[], int tam)
{
	int i;
	for(i=0; i<tam; i++)
	{
		producto[i].estado = VACIO;
	}
}

void producto_mostrarUno(eProducto producto)
{
	printf("%-5d %-20s %-20d %-20d %-20.2f\n", producto.idProducto, producto.descripcion, producto.nacionalidad, producto.tipo, producto.precio);
}

void producto_mostrarTodos(eProducto productos[], int tam)
{
	int i;
	printf("\nMostrando lista de productos...\n\n"
		   "%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
	for(i=0; i<tam; i++)
	{
		if(productos[i].estado == OCUPADO)
		{
			producto_mostrarUno(productos[i]);
		}
	}
	printf("\n");
}

int producto_agregarProducto(eProducto productos[], int tam, int* ultimoIdIngresado)
{
	int retorno = -1;
	int id;
	int index = producto_buscarEspacioLibre(productos, tam);

	id=*ultimoIdIngresado;

	if(index != -1) //Si hay lugar en el array
	{
		printf("\nDando de alta un producto...\n\n");
		if(!producto_cargarUno(productos, index, id))
		{
			printf("\nSe cargo el producto!\n\n");
			id++;
			*ultimoIdIngresado=id;
		}
		else
		{
			printf("\nSe cancelo el alta del producto.\n\n");

		}
		retorno = 0;
	}
	else
	{
		printf("\nError. No hay espacio disponible.\n\n");
	}

	return retorno;
}

int producto_cargarUno(eProducto productos[], int i, int id)
{

	int retorno = -1;


	productos[i].idProducto=id;

	//pedirEntero(&productos[i].idProducto, "Ingrese el id (entre 1000-1100): ", "Ingrese un id valido (entre 1000-1100): ", 1000, 1100);
	pedirCadena(productos[i].descripcion, "Ingrese la descripcion: ", "Descripcion invalida, hasta 50 caracteres, reingrese: ", 51);
	pedirEntero(&productos[i].nacionalidad, "Ingrese la nacionalidad (EEUU = 0, CHINA = 1, OTRO = 2): ", "Ingrese una nacionalidad valida  (EEUU = 0, CHINA = 1, OTRO = 2): ", 0, 2);
	pedirEntero(&productos[i].tipo, "Ingrese el tipo (IPHONE = 0, MAC = 1, IPAD = 2, ACCESORIOS = 3): ", "Ingrese un tipo valido (IPHONE = 0, MAC = 1, IPAD = 2, ACCESORIOS = 3): ", 0, 3);
	pedirFlotante(&productos[i].precio, "Ingrese el precio (entre 1000 y 300000): ", "Ingrese un precio valido (entre 1000 y 300000): ", 1000, 300000);

	printf("\nProducto a agregar:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
	producto_mostrarUno(productos[i]);

	if(!producto_verificarConfirmacion("\nIngrese 's' para confirmar el alta del producto: "))
	{
		productos[i].estado = OCUPADO;
		retorno = 0;
	}

	return retorno;
}

int producto_borrarUno(eProducto productos[], int tam)
{
	int retorno = -1;
	int index;
	int idIngresado;

	pedirEntero(&idIngresado, "Ingrese el ID del producto a borrar (1000-1100): ", "Reingrese el ID del producto a borrar (1000-1100): ", 1000, 1100);
	index = producto_buscarPorId(productos, tam, idIngresado);

	if(index != -1) //Existe el producto?
	{
		printf("\nProducto a eliminar:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
		producto_mostrarUno(productos[index]);

		if(!producto_verificarConfirmacion("\nIngrese 's' para confirmar la baja del producto: "))
		{
			productos[index].estado = VACIO;
			printf("\nProducto %s dado de baja correctamente!\n\n", productos[index].descripcion);
			retorno = 0;
		}
		else
		{
			printf("\nSe cancelo la baja del producto.\n\n");
		}
	}
	else
	{
		printf("\nError. Producto no encontrado...\n\n");
	}

	return retorno;
}

int producto_subMenuModificarUno(eProducto productos[], int tam)
{
	int retorno = -1;
	int index;
	int idIngresado;
	int opcion;
	eProducto auxProducto;

	pedirEntero(&idIngresado, "Ingrese el ID del producto a modificar (1000-1100): ", "Reingrese el ID del producto a modificar (1000-1100): ", 1000, 1100);
	index = producto_buscarPorId(productos, tam, idIngresado);

	if(index != -1) //Existe el producto?
	{
		printf("\nProducto a modificar:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
		producto_mostrarUno(productos[index]);

		do
		{
			auxProducto = productos[index];
			pedirEntero(&opcion, "-------------------------------------\n"
								 "1. MODIFICAR precio\n"
								 "2. MODIFICAR tipo\n"
								 "3. ATRAS\n"
								 "-------------------------------------\n"
								 "Ingrese una opcion: ",
								 "-------------------------------------\n"
								 "1. MODIFICAR precio\n"
								 "2. MODIFICAR tipo\n"
								 "3. ATRAS\n"
								 "-------------------------------------\n"
								 "Opcion invalida, reingrese: ", 1, 3);

			switch(opcion)
			{
				case 1:
					printf("\nProducto a modificar:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
					producto_mostrarUno(productos[index]);
					pedirFlotante(&auxProducto.precio, "Ingrese el nuevo precio (entre 1000 y 300000): ", "Ingrese un precio valido (entre 1000 y 300000): ", 1000, 300000);

					printf("\nProducto luego de la modificación:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
					producto_mostrarUno(auxProducto);

					if(!producto_verificarConfirmacion("\nIngrese 's' para confirmar la modificacion del producto: "))
					{
						productos[index].precio = auxProducto.precio;
						printf("\nProducto %s modificado correctamente!\n\n", productos[index].descripcion);
						retorno = 0;
					}
					else
					{
						printf("\nSe cancelo la modificacion del producto.\n\n");
					}

					system("pause");
					break;
				case 2:
					printf("\nProducto a modificar:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
					producto_mostrarUno(productos[index]);
					pedirEntero(&auxProducto.tipo, "Ingrese el nuevo tipo (IPHONE = 0, MAC = 1, IPAD = 2, ACCESORIOS = 3): ", "Ingrese un tipo valido (IPHONE = 0, MAC = 1, IPAD = 2, ACCESORIOS = 3): ", 0, 3);

					printf("\nProducto luego de la modificación:\n\n%-5s %-20s %-20s %-20s %-20s\n", "ID", "Descripcion", "Nacionalidad", "Tipo", "Precio");
					producto_mostrarUno(auxProducto);

					if(!producto_verificarConfirmacion("\nIngrese 's' para confirmar la modificacion del producto: "))
					{
						productos[index].tipo = auxProducto.tipo;
						printf("\nProducto %s modificado correctamente!\n\n", productos[index].descripcion);
						retorno = 0;
					}
					else
					{
						printf("\nSe cancelo la modificacion del producto.\n\n");
					}

					system("pause");
					break;
				case 3:
					break;
			}
		}while(opcion != 3);
	}
	else
	{
		printf("\nError. Producto no encontrado...\n\n");
	}

	return retorno;
}

int producto_buscarPorId(eProducto productos[], int tam, int id)
{
	int i;
	int index = -1;

	for(i=0; i<tam; i++)
	{
		if(productos[i].estado == OCUPADO && productos[i].idProducto == id)
		{
			index = i;
			break;
		}
	}

	return index;
}

int producto_buscarEspacioLibre(eProducto productos[], int tam)
{
	int i;
	int index = -1;

	for(i=0; i<tam; i++)
	{
		if(productos[i].estado == VACIO)
		{
			index = i;
			break;
		}
	}

	return index;
}

void producto_hardCodear(eProducto productos[], int tam)
{
	int i;
	int ids[] = {1000, 1001, 1002};
	char descripciones[][51] = {"IPhone 12", "IPhone 13", "IPad Pro"};
	int nacionalidades[] = {EEUU, EEUU, CHINA};
	int tipos[] = {IPHONE, IPHONE, IPAD};
	float precios[] = {250000, 300000, 275000};

	for(i=0; i<tam-2; i++)
	{
		productos[i].idProducto = ids[i];
		strcpy(productos[i].descripcion, descripciones[i]);
		productos[i].nacionalidad = nacionalidades[i];
		productos[i].tipo = tipos[i];
		productos[i].precio = precios[i];
		productos[i].estado = OCUPADO;
	}
}

void producto_ordenarProductosPorPrecioAsc(eProducto productos[], int tam)
{
	int i;
	int j;
	eProducto auxProducto;

	for(i=0; i<tam-1; i++)
	{
		for(j=i+1; j<tam; j++)
		{
			if(productos[i].precio > productos[j].precio)
			{
				auxProducto = productos[i]; //copiamos la estructura ENTERA
				productos[i] = productos[j]; //copiamos la estructura ENTERA
				productos[j] = auxProducto; //copiamos la estructura ENTERA
			}
		}
	}

	printf("\nLista de productos ordenada exitosamente!\n\n");
}

void producto_ordenarProductosPorDescripcionAsc(eProducto productos[], int tam)
{
	int i;
	int j;
	eProducto auxProducto;

	for(i=0; i<tam-1; i++)
	{
		for(j=i+1; j<tam; j++)
		{
			if(strcmp(productos[i].descripcion, productos[j].descripcion) == 1)
			{
				auxProducto = productos[i]; //copiamos la estructura ENTERA
				productos[i] = productos[j]; //copiamos la estructura ENTERA
				productos[j] = auxProducto; //copiamos la estructura ENTERA
			}
		}
	}

	printf("\nLista de productos ordenada exitosamente!\n\n");
}

int producto_verificarConfirmacion(char* mensaje)
{
	int retorno = -1;
	char respuesta;

	pedirCaracter(&respuesta, mensaje);
	if(respuesta == 's' || respuesta == 'S')
	{
		retorno = 0;
	}

	return retorno;
}
