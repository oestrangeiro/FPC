#include <stdio.h>
#include <stdlib.h>

/*
	Página 44. Algoritmo 15:
	O custo ao consumidor de um carro novo é a soma
	do preço de fábrica com o percentual do de lucro do
	distribuidor e dos impostos aplicados ao preço de fábrica.
	Faça um programa que receba o preço de fábrica de um veículo,
	o percentual de lucro do distribuidor e o percentual de impostos,
	calcule e mostre:
	a) O valor correspondente ao lucro do distribuidor
	b) O valor correspondente aos impostos
	c) O preço final do veículo
*/

int main(){

	float vlrFinal, vlrDistribuidor, vlrImpostos, precoFabrica, percentImpostos, percentLucroDistribuidor = 0.0;

	printf("* Informe o preço de fábrica do veículo: ");
	scanf("%f", &precoFabrica);
	printf("* Informe o percentual de lucro do distribuidor: ");
	scanf("%f", &percentLucroDistribuidor);
	printf("* Informe o percentual de impostos: ");
	scanf("%f", &percentImpostos);

	vlrDistribuidor = precoFabrica * percentLucroDistribuidor / 100;
	vlrImpostos = precoFabrica * percentImpostos / 100;
	vlrFinal = precoFabrica + vlrDistribuidor + vlrImpostos; 

	printf("\n> VALOR DO DISTRIBUIDOR: R$%.3f\n", vlrDistribuidor);
	printf("> VALOR DOS IMPOSTOS: R$%.3f\n", vlrImpostos);
	printf("> VALOR FINAL DO VEÍCULO: R$%.3f\n", vlrFinal);

	return 0;
}
