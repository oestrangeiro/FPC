#include <stdio.h>
#include <stdlib.h>

/*
	Página 43. Algoritmo 13:
	Sabe-se que:
	pé = 12 polegadas
	1 jarda = 3 pés
	1 milha = 1,760 jardas
	Faça um programa que receba uma medida em pés e,
	faça as comversões e mostre os resultados:
	a) Polegadas;
	b) Jardas;
	c) Milhas;
*/

int main(){

	double pole, pes, jardas, milhas = 0.0;

	system("clear");
	
	printf("* Insira uma medida em pés para conversão: ");
	scanf("%lf", &pes);
	fflush(stdin);

	printf("\n** Medida inserida:\t%.2lf **\n", pes);

	// Conversões
	pole = pes * 12;
	jardas = pes / 3;
	milhas = jardas / 1760;

	printf(">> %.2lf em polegadas:\t%.2lf\n", pes, pole);
	printf(">> %.2lf em jardas:\t%.2lf\n", pes, jardas);
	printf(">> %.2lf em milhas:\t%lf\n", pes, milhas);



	return 0;
}
