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
