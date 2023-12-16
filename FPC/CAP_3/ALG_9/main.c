#include <stdio.h>
//#include <stdlib.h>

/*
	Página 41. Algoritmo 9:
	Faça um progama que calcule a áre de um triângulo. Sabe-se
	que: A = (base * altura)/2
*/

int main(){
	float base, altura, areaT = 0.0;

	printf(">> INSIRA O VALOR DA BASE DO TRIÂNGULO <<");
	scanf("%f", &base);
	fflush(stdin);
	printf(">> INSIRA O VALOR DA ALTURA DO TRIÂNGULO <<");
	scanf("%f", &altura);
	fflush(stdin);
	printf("* VALORES INSERIDOS\n>>Base:%.2f\n>>Altura:%.2f", base, altura);
	areaT = (base * altura)/2;

	printf(">> ÁREA DO TRIÂNGULO: %.2f U.M\n", areaT);

	return 0;
}