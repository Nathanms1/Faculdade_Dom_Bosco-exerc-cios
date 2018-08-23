#include <stdio.h>
/*
3) Elaborar um programa que leia a base e a altura de triângulo e apresente a área
 deste triângulo.  
*/

int main ()
{
	float base, alt, area;
	printf("Informe a base do triangulo: ");
		scanf("%f", &base);
	printf ("Informe a altura do triangulo:");
		scanf("%f", &alt);
		area= (base*alt)/2;
	printf("A area do triangulo e: %.2f", area);
	
}
