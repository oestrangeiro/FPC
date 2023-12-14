#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 4

/*
 * Página 36. Algoritmo 1
 * Faça um programa que receba quatro números inteiros, calcule e mostre
 * a soma de desses números
*/

int main(){

    system("clear");

    int numeros[TAMANHO];
    int soma = 0;

    for(int i = 0; i < TAMANHO; i++){
        printf("ENTRE COM O %i° NÚMERO (inteiro): ", i+1);
        scanf("%i", &numeros[i]);
    }

    printf("OS NÚMEROS INFORMADOS FORAM:\n");

    for(int i = 0; i < TAMANHO; i++){
        printf("%i\t", numeros[i]);
    }

    for(int i = 0; i < TAMANHO; i++){
        soma += numeros[i];
    }

    printf("\nSOMA: %i\n", soma);

    return 0;
}
