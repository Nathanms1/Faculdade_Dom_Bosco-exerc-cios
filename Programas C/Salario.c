#include <stdio.h>
/*
7) Uma empresa tem para um determinado funcionário uma ficha contendo o número de
horas trabalhadas e o n0 de dependentes. 
Considerando que: a) A empresa paga 12 reais por hora e 40 reais por dependentes,
isto é o salário bruto. b) Sobre o salário bruto são feitos descontos de 8,5% 
para o INSS e 5% para IR. Faça um programa para ler o número de horas trabalhadas
e número de dependentes de um funcionário. Após a leitura, escreva qual o salário
bruto, os valores descontados para cada tipo de imposto e finalmente qual o 
salário líquido do funcionário.  
 
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
