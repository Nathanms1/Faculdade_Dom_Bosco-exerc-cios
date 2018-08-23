#include <stdio.h>
/*
9) Escrever um programa para ler o número de eleitores de um município, o número 
de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um 
representa em relação ao total de eleitores. 
*/ 

	int main ()
{
	float numelei=5000, numvb, numnul, numval, percent_vb, percent_nul, percent_val;
	printf("Numero total de votos: %.1f \n",numelei);
	printf("Informe o numero de votos brancos:");
			scanf("%f",&numvb);
	printf("Informe o numero de votos nulos:");
			scanf("%f",&numnul);
	printf("Informe o numero de votos validos:");
			scanf("%f",&numval);
	percent_vb=  (numvb/numelei)*100;
	percent_nul= (numnul/numelei)*100;
	percent_val= (numval/numelei)*100;
	printf("Votos brancos: %.1f %%\n",percent_vb);
	printf("Votos nulos: %.1f %%\n",percent_nul);
	printf("Votos validos: %.1f %%\n",percent_val);		



}
