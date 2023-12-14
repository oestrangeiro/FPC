#include <stdio.h>
#include <stdlib.h>

#define TAM_ARRAY 3

/*
 * Página 36. Algoritmo 2
 * Faça um programa que receba três notas, calcule e mostre
 * a média aritmética
*/

int main(){

    float notas[TAM_ARRAY];
    float soma, media = 0;

    system("clear || cls");

    for(int i = 0; i < TAM_ARRAY; i++){
        printf("Digite a %i° nota: ", i+1);
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i < TAM_ARRAY; i++){
        soma += notas[i];
    }

    media = soma/3;

    printf("Média aritmética final: %.2f\n", media);

    return 0;
}
