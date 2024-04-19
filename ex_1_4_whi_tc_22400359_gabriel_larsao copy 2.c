/*
1. Elaborar um programa C para computar a média de N números reais.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float num = 0.0, soma = 0.0, limite = 0.0, media = 0.0;
    int i = 0.0;

    printf("\nDigite de quantos números você deseja calcular a média: ");
    scanf("%f", &limite);

    while (i < limite) {
        
        i++; 

        printf("\nDigite o %dº número: ", i);
        scanf("%f", &num);

        soma += num;
    }

    media = soma / limite;

    printf("\nA media dos números digitados é igual a: %.1f", media);
    
    return 0;
}