#include <stdlib.h>
#include <stdio.h>

/*
	Página 44. Algoritmo 14:
	Faça um programa que receba o ano de nascimento de uma
	pessoa e o ano atual, calcule e mostre:
	a) A idade da pessoa
	b) Quantos anos ela terá em 2050
*/

int main(){

	int anoNascimento, anoAtual, idade, idade2050 = 0;
	printf("> Informe seu ano de nascimento: ");
	scanf("%d", &anoNascimento);
	fflush(stdin);
	printf(">Informe o ano atual: ");
	scanf("%d", &anoAtual);
	fflush(stdin);

	idade = anoAtual - anoNascimento;
	idade2050 = 2050 - anoNascimento;

	printf("IDADE:\t%i anos\nIDADE EM 2050:\tterá %i anos\n", idade, idade2050);

	return 0;
}