/*
6. Construa um programa que imprime a soma de todos os valores positivos
digitados pelo usuário até que ele digite um número negativo. (resolva com Do-While)
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int num = 0.0, soma = 0.0;

    do {
        printf("\nDigite um número: ");
        scanf("%d", &num);

        soma += num;

    } while (num >= 0)

    printf("\nA soma dos números positivos é igual a: %d", soma);

    return 0;
}

