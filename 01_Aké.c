/*Programa: 1; Descripcion: Imprime el resultado de una funcion Booleana;
Autor: Alejandro Ake Gamboa; Version: 1.0; Fecha: 24-03-2021.*/

/*Directivas de procesamiento*/
#include <stdio.h>
#include <conio.h>

int main(){ /*Bloque principal*/
	
	/*Variables locales*/
	int x, y, z, opc, opc1, opc2, result;
	
	/*Entrada*/
	/*Escoger una funcion Booleana*/
	printf("Dos funciones Booleanas: \n\n");
	printf("(1) f(x,y,z)= xy + yz + xyz + xz\n");
	printf("(2) g(x,y,z)= (xyz)(xy)(yz)(yz + xyz)\n\n");
	printf("Escoge una: ");
	scanf("%i",&opc);
	printf("\n");
	/*Asignar valores a x, y, z*/
	printf("\a*NOTA IMPORTANTE: x,y,z==0 || x,y,z==1*\n\n"); /*Indicar valores aceptados*/
	printf("Valor de x: ");
	scanf("%i",&x);
	printf("Valor de y: ");
	scanf("%i",&y);
	printf("Valor de z: ");
	scanf("%i",&z);
	
	/*Procedimiento y, a su vez, Salida*/
	/*Funcion Booleana 1*/
	if (opc ==1){
		result = x*y + y*z + x*y*z + x*z;
		if (result <=0){
			printf("\nEl valor de f es: 0, ");
		} else{
			if (result >=1){
				printf("\nEl valor de f es: 1, ");
			}
		}
	} else{
		/*Funcion Booleana 2*/
		if (opc ==2){
			result = ((x*y*z))*((x*y))*((y*z))*((y*z) + (x*y*z));
			if (result <=0){
				printf("\nEl valor de g es: 0, ");
			} else{
				if (result >=1){
					printf("\nEl valor de g es: 1, ");
				}
			}
		}
	}
	printf("%cotro valor\? (1=s%c, 2=no): ",168,161);
	scanf("%i",&opc1);
	printf("\n");
	/*Estructura repetitiva, para permitir agregar otros valores*/
	while (opc1 ==1){
		opc2 = opc; /*Para que la funcion Booleana, seleccionada desde el principio, se mantenga*/
		printf("Valor de x: ");
		scanf("%i",&x);
		printf("Valor de y: ");
		scanf("%i",&y);
		printf("Valor de z: ");
		scanf("%i",&z);
		/*Funcion Booleana 1*/
		if (opc2 ==1){
			result = x*y + y*z + x*y*z + x*z;
			if (result <=0){
				printf("\nEl valor de f es: 0, ");
			} else{
				if (result >=1){
					printf("\nEl valor de f es: 1, ");
				}
			}
		} else{
			/*Funcion Booleana 2*/
			if (opc2 ==2){
				result = ((x*y*z))*((x*y))*((y*z))*((y*z) + (x*y*z));
				if (result <=0){
					printf("\nEl valor de g es: 0, ");
				} else{
					if (result >=1){
						printf("\nEl valor de g es: 1, ");
					}
				}
			}
		}
		printf("%cotro valor\? (1=s%c, 2=no): ",168,161);
		scanf("%i",&opc1);
		printf("\n");
	}
	
	return 0;
}


