#include <stdio.h>
#include <stdlib.h>

/*
 * Pág. 38. Algoritmo 3:
 * Faça um programa que receba três notas e seus respectivos pesos,
 * calcule e mostre a média ponderada
 */

int main(){

    float n1, n2, n3, p1, p2, p3,  soma1, soma2, soma3, total, mediaPonderada = 0;

    system("clear");

    printf("<<*------------------------------*>>\n");
    printf("<<*---  C A L C U L A D O R  ----*>>\n");
    printf("<<*-----------  D E  ------------*>>\n");
    printf("<<*-------  M E D I A  ---------*>>\n");
    printf("<<*------------------------------*>>\n");

    printf("\nInsira o valor da 1ª nota: ");
    scanf("%f*c", &n1);
    printf("\nInsira o valor da 2ª nota: ");
    scanf("%f*c", &n2);
    printf("\nInsira o valor da 3ª nota: ");
    scanf("%f*c", &n2);

    printf("\nInsira o valor do 1° peso: ");
    scanf("%f*c", &p1);
    printf("\nInsira o valor do 2° peso: ");
    scanf("%f*c", &p2);
    printf("\nInsira o valor do 3° peso: ");
    scanf("%f*c", &p3);

    mediaPonderada = ((n1 * p1) + (n2 * p2) + (n3 * p3))/(p1 + p2 + p3);

    printf("Média ponderada: %.2f", mediaPonderada);

    return 0;
}
