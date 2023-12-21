#include <stdio.h>
#include <stdlib.h>

/*
	Página 45. Algoritmo 16:
	Faça um programa que receba o número de horas trabalhadas
	e o valor do salário mínimo, calcule e mostre o salário
	a receber, seguindo estas regras:
	
	a) A hora trabalhada vale metade do salário mínimo.
	
	b) O salário bruto equivale ao número de horas trabalhadas
	multiplicado pelo valor da hora trabalhada.
	
	c) O imposto equivale a 3% do salário bruto.
	 
	d) O salário a receber equivale ao salário bruto menos o
	valor do imposto.
*/


int main(){

	float salarioReceber, salarioBruto, salarioMin, horasTrab, vlrHorasTrab, imposto = 0.0;

	system("clear");
	printf("Informe o número de horas trabalhadas: ");
	scanf("%f", &horasTrab);
	fflush(stdin);
	printf("Informe o salário mínimo: ");
	scanf("%f", &salarioMin);
	fflush(stdin);

	vlrHorasTrab = (salarioMin/2);
	
	salarioBruto = horasTrab * vlrHorasTrab;

	imposto = salarioBruto * 3 / 100;

	salarioReceber = salarioBruto - imposto;

	printf(">> Quantidade de horas trabalhadas:\t%.2f\n", horasTrab);
	printf(">> Valor das horas trabalhadas:\tR$: %.2f\n", vlrHorasTrab);
	printf(">> Valor do imposto: R$:%.1f\n", imposto);
	printf(">> Valor do salário bruto:\tR$: %.2f\n", salarioBruto);
	printf(">> Valor do salário a receber:\tR$: %.2f\n", salarioReceber);
	
	
	return 0;
}
