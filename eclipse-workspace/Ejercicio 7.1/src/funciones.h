/*
 * funciones.h
 *
 *  Created on: 20 sep. 2021
 *      Author: Paul
 */
#define TAMCHAR 61
#define EEUU 1
#define CHINA 2
#define OTRO 3
#define ACCESORIOS 1
#define IPHONE 2
#define MAC 3
#define IPAD 4
#define TAM 7
#define MAXOPCION 7
#define MINOPCION 1
#define MAXID 1000
#define MINID 0
#define MINPRECIO 0
#define MAXPRECIO 2000000
typedef struct
{
	int estado;
	int idProducto;
	char descripcion[TAMCHAR];
	int nacionalidad;
	int tipo;
	float precio;
}sProducto;

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

int mostrarLista(sProducto* producto);
void mostrarMenu(int* opcion);
int pedirNumero(int* num,char* mensaje,char* mensajeError,int min, int max);
int altaProducto(sProducto* producto,int tam,int minId,int maxId, int tamChar, int minPrecio, int maxPrecio);
int inicialisarStruct(sProducto* producto,int tam);
int indiceACargar(sProducto* producto,int tam,int* indice);
int pedirString(char* cadena,char* mensaje,char* mensajeError,int max);
int pedirNumeroFlotante(float* num, char* mensaje,char* mensajeError,int min,int max);
int bajaProducto(sProducto* producto,int tam, int minId, int maxId);
int buscadorId(sProducto* producto,int tam, int id, int* ubicacion);
int listadoProductos(sProducto* producto, int tam);
int ordenarStructuraPrecio(sProducto* producto, int tam);
int ordenarStructuraDescripcion(sProducto* producto, int tam);
int modificarProducto(sProducto* producto, int tam, int idMax, int idMin, int tamChar, int minPrecio, int maxPrecio);


#endif /* FUNCIONES_H_ */
