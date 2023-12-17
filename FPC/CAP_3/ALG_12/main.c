#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/*
	Página 43. Algoritmo 12:
	Faça um programa que receba dois números maiores que zero e escreva um
	elevado ao outro.
*/


int main(){

	double num, num2 = 0.0;

	printf("INFORME O PRIMEIRO NUMERO: ");
	scanf("%lf", &num);

	while(num <= 0){

		printf("OPERAÇÃO INVÁLIDA!\nPOR FAVOR, INFORME UM NÚMERO QUE ATENDA AOS REQUISITOS: (1) SER MAIOR QUE ZERO\n");
		printf("INFORME O PRIMEIRO NUMERO: ");
		scanf("%lf", &num);
		if(num > 0){
			break;
		}
	}
	
	printf("INFORME O SEGUNDO NUMERO: ");
	scanf("%lf", &num2);

	while(num2 <= 0){
	
		printf("OPERAÇÃO INVÁLIDA!\nPOR FAVOR, INFORME UM NÚMERO QUE ATENDA AOS REQUISITOS: (1) SER MAIOR QUE ZERO\n");
		printf("INFORME O SEGUNDO NUMERO: ");
		scanf("%lf", &num2);
		if(num2 > 0){
			break;
		}
	}

	printf("\n* %.2lf ELEVADO A %.2lf == %.2lf\n", num, num2, pow(num, num2));
	printf("\n* %.2lf ELEVADO A %.2lf == %.2lf\n", num2, num, pow(num2, num));
	
	return 0;
}
