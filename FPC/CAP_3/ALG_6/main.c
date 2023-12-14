#include <stdio.h>
#include <stdlib.h>

/*
 * Página 40. Algoritmo 6:
 * Faça um programa que receba o salário base de um funcionário,
 * calcule e mostre o salário a receber, sabendo-se que o funcionário
 * tem a gratificação de 5% sobre o salario base e paga imposto de 7%
 * sobre também o salário base.
 */

int main(){

    float salarioBase, imposto, gratificacao, novoSalario = 0.0;

    system("clear");
    printf(">> Insira o salário base do funcionário R$: ");
    scanf("%f*c", &salarioBase);

    gratificacao = salarioBase * 5/100;
    printf("\n* Valor da gratificação R$:%.2f", gratificacao);

    imposto = salarioBase * 7/100;
    printf("\n* Valor do imposto R$:%.2f", imposto);

    novoSalario = salarioBase + gratificacao - imposto;

    printf("\n\n>> Salário final do funcionário R$:%.2f\n", novoSalario);

    return 0;
}
