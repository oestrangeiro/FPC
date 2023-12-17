#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	Página 42. Algoritmo 11:
	Faça um programa que recebaum número positivo e maior que zero, calcule e retorne:
	a) O número digitado ao quadrado
	b) O número digitado ao cubo
	c) A raíz quadarada do número digitado
	d) A raíz cúbica do número digitado
*/

int main(){

	double num = 0.0;

	system("clear");

	printf("Informe o número desejado: ");
	scanf("%lf", &num);
	
	while(num <= 0){
	
		printf("Número não atende aos requisitos: 1) Positivo e maior que zero!\n ");
		printf("Por favor, informe novamente o número desejado: ");
		scanf("%lf", &num);
		if(num > 0){
			break;
		}
	}

	printf("\n>> NÚMERO INFORMADO: %.2lf\n", num);
	printf(">> NÚMERO INFORMADO AO QUADRADO: %.2lf\n", pow(num, 2));
	printf(">> NÚMERO INFORMADO AO CUBO: %.2lf\n", pow(num, 3));
	printf(">> RAÍZ QUADRADA DO NÚMERO INFORMADO: %.2lf\n", sqrt(num));
	printf(">> RAÍZ CÚBICA DO NÚMERO INFORMADO: %.2lf\n", cbrt(num));
	

	
	return 0;
}
