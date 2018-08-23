#include <stdio.h>
/*
5) Efetuar o cálculo da quantidade de litros de combustível gastas em uma 
viagem, utilizando-se um automóvel que faz 12 Km por litro. Para obter o 
cálculo, o usuário deverá fornecer o tempo gasto na viagem e a velocidade média 
durante a mesma. Desta forma, será possível obter a distância percorrida com a 
fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular
 a quantidade de litros de combustível utilizada na viagem com a fórmula: LITROS 
 = DISTANCIA / 12. O programa deverá apresentar os valores da velocidade média, 
 tempo gasto na viagem, à distância percorrida e a quantidade de litros utilizada 
 na viagem. 
 */

int main ()
{
	float totlit, porlit=12, tempo, vm, dist;
	printf("Informe o tempo de viagem: ");
		scanf("%f", &tempo);
	printf("Informe a velocidade media na viagem: ");
		scanf("%f", &vm);	
	dist=tempo*vm;
	totlit=dist/porlit; 
	printf("A sua distancia percorrida foi de: %.1f e a quantidade de litros utilizada foi de: %.1f",dist,totlit);
	
}
