#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main(){

	float area, raio = 0.0;

	system("clear");

	printf(">> --------------------------------------- >>\n");
	printf("\tCALCULADORA DA ÁREA DE CÍRCULO \n");
	printf(">> --------------------------------------- >>\n\n");
	
	printf("* Informe o raio do círculo: ");
	scanf("%f", &raio);
	fflush(stdin);

	area = PI * pow(raio, 2);
	printf(">> Valor da área do círculo: %.2f\n", area);
	return 0;
}
