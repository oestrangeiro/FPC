#include <stdio.h>
#include <stdlib.h>

/*
	Página 40. Algoritmo 8:
	Faça um programa que receba o valor de um depósito e o valor da
	taxa de juros, calcule e mostre o valor do rendimento e o valor total
	depois do rendimento.
*/

int main(){

	float deposito, taxa, rendimento, totalFinal = 0.0;

	printf("* INFORME O VALOR A SER DEPOSITADO: R$:");
	scanf("%f", &deposito);
	fflush(stdin);
	printf("* INFORME O VALOR DA TAXA AO MÊS: ");
	scanf("%f", &taxa);
	fflush(stdin);

	rendimento = deposito * taxa/100;
	totalFinal = rendimento + deposito;

	printf("\n>> VALOR DEPOSITADO R$:%.2f\n", deposito);
	printf(">> VALOR DO RENDIMENTO AO MÊS R$:%.2f\n", rendimento);
	printf(">> VALOR TOTAL APÓS O RENDIMENTO R$:%.2f\n", totalFinal);

	return 0;
}