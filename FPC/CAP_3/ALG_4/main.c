#include <stdio.h>
#include <stdlib.h>

/*
 * Página 39. Algoritmo 4:
 * Faça um programa que receba o salário de um funcionário,
 * calcule e mostre o novo salário, sabendo-se que este
 * sofreu um aumento de 25%.
 */

int main(){

    float salario, aumento, novoSalario = 0.0;
    printf("\nINFORME O SALÁRIO DO FUNCIONARIO: R$:");
    scanf("%f", &salario);
    aumento = salario * 25/100;
    novoSalario = aumento + salario;
    printf("Salario atual: %.2f\n", novoSalario);

    return 0;
}
