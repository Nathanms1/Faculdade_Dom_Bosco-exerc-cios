#include <stdio.h>
/*
7) Uma empresa tem para um determinado funcion�rio uma ficha contendo o n�mero de
horas trabalhadas e o n0 de dependentes. 
Considerando que: a) A empresa paga 12 reais por hora e 40 reais por dependentes,
isto � o sal�rio bruto. b) Sobre o sal�rio bruto s�o feitos descontos de 8,5% 
para o INSS e 5% para IR. Fa�a um programa para ler o n�mero de horas trabalhadas
e n�mero de dependentes de um funcion�rio. Ap�s a leitura, escreva qual o sal�rio
bruto, os valores descontados para cada tipo de imposto e finalmente qual o 
sal�rio l�quido do funcion�rio.  
 
 */
 
	int main ()
{
	float hortrab, numdep, salbruto, inss, ir, saliq;		
		printf("Informe o numero de horas trabalhadas: ");
			scanf("%f",&hortrab);
		printf("Informe o numero de dependentes: ");
			scanf("%f",&numdep);
		salbruto=(12*hortrab)+(40*numdep);
		printf("O salario bruto do funcionario e de:R$ %.2f \n",salbruto);
		inss= salbruto*0.085;
		ir= salbruto*0.05;
		saliq= salbruto-inss-ir;
		printf("O salario liquido do funcionario e de: R$ %.2f \n",saliq);
		printf("Desconto INSS: %.2f \n",inss);
		printf("Desconto IR: %.2f \n", ir);
		
		
		


}
