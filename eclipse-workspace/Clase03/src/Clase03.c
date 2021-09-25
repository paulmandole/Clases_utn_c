/*
 ============================================================================
Paul Mandole

setbuf(stdout,NULL);//funcion especifica del compilador

*Modulurarizacion
 * independencia de codigo
 * depuracion
 * refactorizacion
 * redundancia de datos
 *
 *
 * 1.declaracion de la fuincion (prototipo)
 *
 * tipo-dato-retorno --- nombre(verbo)---argumentos(parametros)---;
 * void suma(int num, int num1);
 *
 * retorno  parametros
 * int		int
 * void		int
 * int		void
 *
 * 3.llamada a la funcion
 * 2.Desarrollo de la funcion
 *
 *
 * pasaje por referencia:
 *void modificar(int* numero); * luego de la variable para pasar la direccion de memoria
 *
 * modificar(&numero);
 *
 * void modificar(int* numero)
 * {
 * 	 *numero=7;//modifico en la direccion de memoria accedo en la direcion de memoria con el *
 *
 *
 * }
 * %p mascara de punteros
 * *numero para mostrar el numero en la direccion de memoria
 ============================================================================
 pasar cadena de caracteres

 int pedirNumeroEntero(char* mensaje, int minimo , int maximo);

 int main(void)
 {
 	 int dni;
 	 int edad;

 	 dni=pedirNumeroEntero("ingrese su DNI:");
 	 edad=pedirNumeroEntero("ingrese su edad: ");

 	 printf("DNI: %d - Edad: %d", dni ,edad);

 	 return EXIT_SUCCESS;
 }


  int pedirNumeroEntero(char* mensaje, int minimo , int maximo)
 {
 	 int numeroIngresado;

 	 printf("%s", mensaje);
 	 fflush(stdin);
 	 scanf("%d",&numeroIngresado);

 	 return numeroIngresado;
 }


 */

/*//1.declaracion de la funcion (prototipo)
int sumarEnteros(int unNumero , int otroNumero);

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int unNumero=4;
	int otroNumero=7;
	int resultado;

	//3.llamada a la funcion
	resultado=sumarEnteros(unNumero,otroNumero);
	printf("%d",resultado);

	return EXIT_SUCCESS;
}

//2.Desarrollo de la funcion

int sumarEnteros(int unNumero , int otroNumero)
{
	int total;

	total = unNumero+otroNumero;

	return total;


}

Hacer todos el tema 3
*/
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


 int main(void)
 {
	 setbuf(stdout,NULL);
 	 int dni;
 	 int edad;

 	 dni=pedirNumeroEntero("ingrese su DNI:","ERROR. Reingrese su DNI: ",10000000,52000000);
 	 edad=pedirNumeroEntero("ingrese su edad: ","ERROR. Reingrese su edad: ",1,120);

 	 printf("DNI: %d - Edad: %d", dni ,edad);

 	 return EXIT_SUCCESS;
 }


