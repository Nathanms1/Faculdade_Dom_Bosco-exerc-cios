#include <stdio.h>
/*
6) O preço de um automóvel é calculado pela soma do preço de fábrica com o preço 
dos impostos (45% do preço de fábrica) e a percentagem do revendedor 
(28% do preço de fábrica). Faça um programa que leia o preço de fábrica e 
imprima o seu preço final. 
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
