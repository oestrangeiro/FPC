#include <stdio.h>
#include <stdlib.h>

/*
 * Página 40. Algoritmo 7:
 * Faça um programa que receba o salário base de um funcionário,
 * calcule e mostre seu salario a receber, sabendo-se que o
 * funcionário tem gratificaçao de R$50 e paga imposto de 10% sobre
 * o seu salario base.
 */


int main(){
    float salarioBase, imposto, novoSalario = 0.0;
    const float gratificacao = 50.0;

    system("clear");
    printf("* Por favor, insira o salário do funcionário:\n>>");
    scanf("%f*c", &salarioBase);

    imposto = salarioBase * 10/100;

    novoSalario = salarioBase + gratificacao - imposto;

    printf("* Imposto de R$:%.2f sobre o salário base de R$:%.2f", imposto, salarioBase);
    printf("\nSalário final do funcionário (com a gratificacao de R$50,00): R$:%.2f\n", novoSalario);


    return 0;
}
