#include<stdio.h>
#include<math.h>
/*Programa que calcula la hipotenusa, el area y el perimetro de un triangulo rectangulo a partir de sus catetos*/
int main()
{
	float cateto1, cateto2, hipotenusa, area, perimetro;
	/*Lectura de datos de entrada: cateto1 y cateto2*/
	printf("Cateto1?");
	scanf_s("%f", &cateto1);
	printf("Cateto2?");
	scanf_s("%f", &cateto2);
	/*Proceso: calculo de la hipotenusa, del area y del perimetro*/
	hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
	area = (cateto1 * cateto2) / 2.0;
	perimetro = cateto1 + cateto2 + hipotenusa;
	/*Salida de resultados*/
	printf("La hipotenusa es: %f\n", hipotenusa);
	printf("El area es: %f\n", area);
	printf("El perimetro es: %f\n", perimetro);
}
/*Programa que calcula el área de un triangulo*/

#include <stdio.h>

int main()
{
   float altura, area, base;

   printf( "Introduzca base: " );
   scanf( "%f", &base );
   printf( "Introduzca altura: " );
   scanf( "%f", &altura );

   area = base * altura / 2;

   printf( "El area del triangulo es: %f", area );

   return 0;
}

/* Programa: Área de una circunferencia (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
    float area, radio;

    printf( "\n   Introduzca radio: " );
    scanf( "%f", &radio );

    area = 3.141592 * radio * radio;

    printf( "\n   El %area de la circunferencia es: %.2f", 160, area );

   
    return 0;
}

