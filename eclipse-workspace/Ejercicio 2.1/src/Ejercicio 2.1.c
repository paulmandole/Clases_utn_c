/*
 paul mandole
 Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la
aplicación con distintos valores.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numero;
	int i;
	int contador=0;
	int suma=0;
	float promedio;

	for(i=0; i<5; i++)
	{
		printf("ingrese un numero: ");
		fflush(stdin);
		scanf("%d", &numero);

		contador++;
		suma=suma+numero;
	}
	promedio=suma/(float)contador;

	printf("el promedio de los numeros ingresados es: %.2f", promedio);

	return EXIT_SUCCESS;
}
