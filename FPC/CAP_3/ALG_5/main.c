#include <stdio.h>
#include <stdlib.h>

/*
 * Página 39. Algoritmo 5:
 * Faça um programa que receba o salário de um funcionário
 * e o percentual de aumento, calcule e mostre o valor do aumento
 * e do novo salário
 */

int main(){

    float salario, novoSalario, percentual, valAumento = 0.0;

    system("clear");
    printf("\n* Insira o salário do funcionário R$: ");
    scanf("%f", &salario);
    fflush(stdin);

    printf("\n* Insira o percentual de aumento (apenas números!): ");
    scanf("%f", &percentual);
    fflush(stdin);

    valAumento = salario * percentual/100;
    printf("\n* Valor do aumento: %.2f", valAumento);

    novoSalario = salario + valAumento;
    printf("\n* Valor do novo salário: R$:%.2f\n", novoSalario);

    return 0;
}
