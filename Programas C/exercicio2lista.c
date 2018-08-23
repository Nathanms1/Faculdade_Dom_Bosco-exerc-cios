#include <stdio.h>
/*
2) Escrever um programa para calcular o volume de uma lata de refrigerante, 
lembre-se que a fórmula é: VOLUME = PI * R * R * altura, onde PI = 3.14159. 
*/

int main ()
{
	double raio, volume, altura;
	double pi=3.14159;
	printf("Informe o raio da lata: ");
		scanf("%lf", &raio);
	printf ("Informe a altura da lata:");
		scanf("%lf", &altura);
		volume=(raio*raio)*altura*pi;
	printf("O volume da lata e: %.2lf", volume);
	
}
