#include <stdio.h>
/*
6) O pre�o de um autom�vel � calculado pela soma do pre�o de f�brica com o pre�o 
dos impostos (45% do pre�o de f�brica) e a percentagem do revendedor 
(28% do pre�o de f�brica). Fa�a um programa que leia o pre�o de f�brica e 
imprima o seu pre�o final. 
*/

	int main ()
{
	float precarr, impfab, percrev, precfin;
	printf ("Informe o preco do carro:");
		scanf("%f", &precarr);
	impfab= precarr*0.45;
	percrev=precarr*0.28;
	precfin= precarr+impfab+percrev;
	printf("O preco final do carro e de: %.3f",precfin);
	
}
