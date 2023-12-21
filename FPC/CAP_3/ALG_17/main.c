#include <stdio.h>
#include <stdlib.h>

/*
	Página 45. Algoritmo 17:
	Um trabalhador recebeu seu salário e o depositou
	em sua conta bancária. Esse trabalhador emitiu dois
	cheques e agora deseja saber seu saldo atual. Sabe-se
	que cada operacão bancária de retirada paga CPMF de 0,38%
	e o saldo inicial da conta está zerado.
	
*/


int main(){

	float salario, cheque1, cheque2, cpmf1, cpmf2, saldo = 0.0;

	system("clear");
	printf("\t\t\t ____________________________________\n");
	printf("\t\t\t|-------- BANCO OESTRANGEIRO --------|\n");
	printf("\t\t\t|____________________________________|\n\n");

	printf("Seja bem vindo!\nInforme o salário a ser depositado: ");
	scanf("%f", &salario);

	saldo = salario;
	
	printf("\n>> SALDO DISPONÍVEL: R$:%.2f", saldo);
	
	printf("\nInforme o valor do cheque 1: ");
	scanf("%f", &cheque1);	
	cpmf1 = cheque1 * 0.38 / 100;
	
	saldo -= (cheque1 + cpmf1);
	printf(">> SALDO DISPONÍVEL: R$:%.2f\n", saldo);
	
	printf("Informe o valor do cheque 2: ");
	scanf("%f", &cheque2);
	cpmf2 = cheque2 * 0.38 / 100;

	saldo -= (cheque2 + cpmf2);
	printf(">> SALDO DISPONÍVEL: R$:%.2f\n", saldo);
	printf("\nObrigado por confiar nos nossos sistemas, volte sempre!\n");

	// Acho que esse foi o algoritmo mais enfeitado e que eu mais gostei até agora... ;)
	return 0;
}
