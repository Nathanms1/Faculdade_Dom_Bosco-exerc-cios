#include <stdio.h>
/*
4) Escrever um programa que leia o ano de nascimento de uma pessoa. Escrever a 
sua idade. Considere para o cálculo o ano atual. 
*/

int main ()
{
	int ano=2018, nasc, ida;
	printf("Informe o seu ano de nascimento: ");
		scanf("%d", &nasc);
		ida=ano-nasc;
	printf("A sua idade e: %d", ida);
	
}
