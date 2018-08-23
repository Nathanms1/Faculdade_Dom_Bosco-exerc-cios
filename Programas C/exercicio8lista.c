#include <stdio.h>
/*
8) Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma 
sendo vendida respectivamente por 10, 15, 18 reais. Construa um programa em que 
o usuário forneça a quantidade de camisetas pequenas, médias e grandes vendidas. 
Informe o valor a ser cobrado. 
*/

	int main ()
{
 int campeq, camed, camgra, precpeq, precmed, precgra, valtot;
 	printf("Informe o numero de camisetas pequenas:");
			scanf("%d",&campeq);
			precpeq=10*campeq;
	printf("Informe o numero de camisetas medias:");
			scanf("%d",&camed);
			precmed=15*camed;
	printf("Informe o numero de camisetas grandes:");
			scanf("%d",&camgra);
			precgra=18*camgra;
	printf("Camisetas pequenas: R$ %d \n Camisetas medias: R$ %d \n Camisetas grandes: R$ %d \n",precpeq,precmed,precgra);
	valtot=precpeq+precmed+precgra;
	printf("Valor total: R$ %d",valtot);





}
