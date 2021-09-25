/*
 ============================================================================
Ejercicio 2-3:
Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas, de cada persona
debemos obtener los siguientes datos:
número de cliente,
estado civil (s para soltero& c para casado o v  viudo),
edad( solo mayores de edad, más de 17),
temperatura corporal (validar por favor)
y sexo (f para femenino, m; para masculino, o; para no binario).
NOTA: el precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado viudo de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que
solo mostramos si corresponde.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


#define cant 5
#define precio 600

int main(void) {

	setbuf(stdout,NULL);

	int numCliente[cant];
	int flag=0,flag1=0;
	int i;
	int edad[cant];
	int cantMayViu=0;
	int edadMinMujer;
	int numClienteMujer;
	int total;
	int precioFinal;
	int masSesenta=0;
	int opcion;
	int temperatura[cant];
	char seguir='s';
	char estadoCivil[cant];
	char sexo[cant];



	while(seguir=='s')
	{
		system("cls");
		printf("**************************************************************************\n");
		printf("1- Ingresar un pasajeros\n");
		printf("2- Informar la cantidad de personas mayores de 60 años viudos\n");
		printf("3- Informar el numero de cliente y edad de la mujer soltera mas joven\n");
		printf("4- Informar el total del viaje sin descuentos\n");
		printf("5- Informar si se posee un descuento del 25 porciento\n");
		printf("6- Salir\n");
		printf("**************************************************************************\n");

		printf("ingrese una opcion:");
		fflush(stdin);
		scanf("%d", &opcion);
		system("cls");


		switch(opcion)
		{
			case 1:

				flag=1;
				for(i=0; i<cant; i++)
				{
					printf("ingrese numero de cliente: ");
					fflush(stdin);
					scanf("%d", &numCliente[i]);
					printf("\nIngresar Estado civil sea v(para viudo),c(casado)o s(soltero): ");
					fflush(stdin);
					scanf("%c", &estadoCivil[i]);
					printf("\ningrese su sexo sea f(femenino) o m(masculino): ");
					fflush(stdin);
					scanf("%c", &sexo[i]);
					printf("\ningrese la edad: ");
					fflush(stdin);
					scanf("%d", &edad[i]);
					do
					{
						printf("Ingrese la temperatura corporal de la persona: ");
						fflush(stdin);
						scanf("%d", &temperatura[i]);
						if(temperatura[i]<35 || temperatura[i]>37)
						{
							printf("La temperatura ingresada no es de un persona sana deberia ir al medico.Reingrese la temperatura:\n");
						}

					}while(temperatura[i]<35 || temperatura[i]>37);


					system("cls");

				}
				system("cls");
				break;

			case 2:

				if(flag==1)
				{
					for(i=0; i<cant; i++)
					{
						if((edad[i] >= 80) && (estadoCivil[i]=='v'))
						{
							cantMayViu++;
						}
					}
					printf("la cantidad de personas mayores de 80 años viudos/as es: %d\n",cantMayViu);
					system("pause");
					system("cls");
				}
				else
				{
					printf("ERROR. Primero debe pasar por la opcion 1.!!!\n");
					system("pause");
					system("cls");
				}

				break;

			case 3:
				if(flag==1)
				{
					for(i=0; i<cant; i++)
					{
						if(sexo[i]=='f')
						{
							if(flag1==0 || edad[i]<edadMinMujer)
							{
								edadMinMujer=edad[i];
								numClienteMujer=numCliente[i];
								flag1=1;
							}
						}
					}

					if(flag1==0)
					{
						printf("No se an ingresado mujeres como clientes.\n");

					}
					else
					{
						printf("El Numero de cliente de la mujer mas joves es: %d y su Edad es: %d\n",numClienteMujer ,edadMinMujer);
					}
					system("pause");
					system("cls");


				}
				else
				{
					printf("ERROR. Primero debe pasar por la opcion 1.!!!\n");
					system("pause");
					system("cls");
				}


				break;

			case 4:
				if(flag==1)
				{
					total=cant*precio;
					printf("El total del viaje es:%d\n", total);
					system("pause");
					system("cls");
				}
				else
				{
					printf("ERROR. Primero debe pasar por la opcion 1.!!!\n");
					system("pause");
					system("cls");
				}

				break;

			case 5:
				if(flag==1)
				{
					for(i=0; i<cant; i++)
					{
						if(edad[i]>=60)
						{
							masSesenta++;
						}

					}

					if(masSesenta>(cant/2))
					{
						precioFinal=total-(cant*precio)*0.25;
						printf("Ustedes poseen un descuento del 25 porciento el precio total es: %d\n", precioFinal);
					}
					else
					{
						printf("Ustedes no poseen un descuento.\n");
					}
					system("pause");
					system("cls");
				}
				else
				{
					printf("ERROR. Primero debe pasar por la opcion 1.!!!\n");
					system("pause");
					system("cls");
				}
				system("cls");
				break;

			case 6:
                seguir = 'n';
                break;

			default:
                printf("ERROR. el numero ingresado no esta entre las opciones!!!!\n");
                system("pause");
                system("cls");
                break;
		}

	}

	return EXIT_SUCCESS;
}
