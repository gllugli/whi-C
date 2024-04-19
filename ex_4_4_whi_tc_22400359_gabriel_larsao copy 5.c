/*
4. Faça um programa que calcula a média aritmética de uma turma com cinquenta
alunos, sabendo-se que cada aluno realizou uma avaliação. Para facilitar os testes,
faça com quatro alunos.

Teste 1: notas: 2, 3, 4 e 5
Saída: Média da turma = 3.5

ALTERAÇÕES:
a. Troque a mensagem de entrada estática do input por uma mensagem dinâmica: Digite a nota do aluno número X:

b. Mostre a média da turma com duas casas decimais.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float qtd_notas = 0.0, acumulador = 0.0, nota = 0.0, media = 0.0;

    while (qtd_notas <= 4.0) {
        
        printf("\nDigite a nota do aluno: ");
        scanf("%f", nota);

        media = acumulador / 4.0;
       
        acumulador = acumulador + nota;

        qtd_notas++;
    }

    printf("\nA média dos alunos é igual a: %.1f", media);

    return 0;
}