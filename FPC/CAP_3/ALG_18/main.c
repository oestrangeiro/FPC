#include <stdio.h>
#include <stdlib.h>

/*
	Página, Algortimo 18:
	Pedro comprou um saco de ração com peso em quilos. Ele possui dois
	gatos, para os quais fornece a quantidade de ração em gramas. a quantidade
*/

int main(){

	float pesoSaco, racaoGato1, racaoGato2, totalFinal = 0.0;

	printf("* Informe o peso do saco de ração (Kg): ");
	scanf("%f", &pesoSaco);

	printf("* Informe a quantidade de ração do gato 1 (g): ");
	scanf("%f", &racaoGato1);
	printf("* Informe a quantidade de ração do gato 2 (g): ");
	scanf("%f", &racaoGato2);

	pesoSaco = pesoSaco * 1000;
	

	return 0;
}
