/*
5. Desenvolva um programa que leia vários números digitados pelo usuário e use o
valor -1 como condição (flag) de saída da estrutura de repetição. Na tela de saída,
mostre a quantidade de números digitados.

Teste 1: Entrada: 5, 6 e -1 Saída: Quantidade de números: 2
Teste 2: Entrada: 5, 6, 7 e -1 Saída: Quantidade de números: 3
Teste 3: Entrada: 5, 6, 6, 7 e -1 Saída: Quantidade de números: 4

ALTERAÇÕES:
a. Na tela de saída, acrescente a soma dos valores digitados. 
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int num = 0.0, acumulador = 0.0, soma = 0.0;

    while (num != -1) {

        printf("\nDigite um número: ");
        scanf("%d", &num);

        soma += num;

        acumulador++;
    }

    printf("\nVocê digitou %d números. A soma deles é igual a: %d", acumulador, soma);

    return 0;

}