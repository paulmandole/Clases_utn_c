/*
 ============================================================================
 Name        : 1.c
 Author      : Paul Mandole
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 SACAR UN FACTORIAL DE UN NUMERO
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		setbuf(stdout, NULL);



	    int factor=1;
	    int cont;
	    int numero;

	    printf("ingrese un numero: ");
	    fflush(stdin);
	    scanf("%d",&numero);


	    //EL NUMERO 5*5*4*3*2*1
	    for(cont=1;cont<=numero;cont++)
	    {
	        factor=factor*cont;
	        printf("%d\n",factor);
	    }

	    printf("%d",factor);

	    return EXIT_SUCCESS;;

}
