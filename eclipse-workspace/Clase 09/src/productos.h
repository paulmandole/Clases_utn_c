#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

//Nacionalidad
#define EEUU 0
#define CHINA 1
#define OTRO 2
//Tipo
#define IPHONE 0
#define MAC 1
#define IPAD 2
#define ACCESORIOS 3
//Tamaño del array
#define TAM 5
//Estado
#define VACIO 0
#define OCUPADO 1

typedef struct
{
	int idProducto;
	char descripcion[51];
	int nacionalidad;
	int tipo;
	float precio;
	int estado;
}eProducto;

void producto_inicializarArray(eProducto productos[], int tam);
void producto_mostrarUno(eProducto producto);
void producto_mostrarTodos(eProducto productos[], int tam);
int producto_agregarProducto(eProducto productos[], int tam, int* ultimoIdIngresado);
int producto_cargarUno(eProducto productos[], int i, int id);
int producto_borrarUno(eProducto productos[], int tam);
int producto_subMenuModificarUno(eProducto productos[], int tam);
int producto_buscarPorId(eProducto productos[], int tam, int id);
int producto_buscarEspacioLibre(eProducto productos[], int tam);
void producto_hardCodear(eProducto productos[], int tam);
void producto_ordenarProductosPorPrecioAsc(eProducto productos[], int tam);
void producto_ordenarProductosPorDescripcionAsc(eProducto productos[], int tam);
int producto_verificarConfirmacion(char* mensaje);

#endif /* PRODUCTO_H_ */
