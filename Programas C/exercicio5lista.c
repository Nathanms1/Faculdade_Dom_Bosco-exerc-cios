#include <stdio.h>
/*
5) Efetuar o c�lculo da quantidade de litros de combust�vel gastas em uma 
viagem, utilizando-se um autom�vel que faz 12 Km por litro. Para obter o 
c�lculo, o usu�rio dever� fornecer o tempo gasto na viagem e a velocidade m�dia 
durante a mesma. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a 
f�rmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da dist�ncia, basta calcular
 a quantidade de litros de combust�vel utilizada na viagem com a f�rmula: LITROS 
 = DISTANCIA / 12. O programa dever� apresentar os valores da velocidade m�dia, 
 tempo gasto na viagem, � dist�ncia percorrida e a quantidade de litros utilizada 
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
