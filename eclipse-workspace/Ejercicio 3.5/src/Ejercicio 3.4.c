/*
 ============================================================================
 Name        : 4.c
 Author      : Paul Mandole
 Version     :
 Copyright   :
 Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
	int Sumar1(int, int);
	int Sumar2(void);
	void  Sumar3(int, int);
	void Sumar4(void);

 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar1(int num1, int num2);
int sumar2(void);
void sumar3(int num1, int num2);
void sumar4(void);


int main(void) {
	setbuf(stdout,NULL);
	int suma1;
	int suma2;

	suma1=sumar1(4,15);

	printf("el resultado de sumar 1 es: %d\n", suma1);

	suma2=sumar2();

	printf("\nel resultado de sumar2 es: %d", suma2);

	sumar3(85,68);

	sumar4();


	return EXIT_SUCCESS;
}

int sumar1(int num1, int num2)
{
	int resultado;

	resultado=num1+num2;

	return resultado;
}

int sumar2(void)
{
	int num1;
	int num2;
	int resultado;

	printf("ingrese un numero: ");
	fflush(stdin);
	scanf("%d", &num1);
	printf("ingrese otro numero: ");
	fflush(stdin);
	scanf("%d", &num2);

	resultado=num1+num2;

	return resultado;
}

void sumar3(int num1, int num2)
{
	int resultado;

	resultado=num1+num2;

	printf("\nel resultado de la suma es: %d",resultado);
}

void sumar4(void)
{
	int num1;
	int num2;
	int resultado;

	printf("\ningrese un numero: ");
	fflush(stdin);
	scanf("%d", &num1);
	printf("ingrese otro numero: ");
	fflush(stdin);
	scanf("%d", &num2);

	resultado=num1+num2;

	printf("el resultado de Sumar4 es:%d", resultado);

}
