/*
3. Sabendo que a fórmula de conversão de graus Fahrenheit para Celsius é:
C = ( 5 / 9 ) * ( f – 32 ), escreva um programa que converta de Fahrenheit para Celsius
exiba na tela as temperaturas compreendidas em um intervalo a ser fornecido pelo
usuário. O usuário deverá fornecer o valor inicial e o valor final. O programa então
exibirá as temperaturas compreendidas no intervalo, devendo exibir as duas
unidades de conversão. programa deverá exibir o seguinte cabeçalho. O programa
deverá exibir o seguinte cabeçalho

                CONVERSAO FAHREINHEIT – CELSIUS
FAHREINHEIT                                         Celcius     

*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float inicial = 0, final = 0, conversao = 0;

    printf("\nDigite a temperatura Fahreinheit inteira inicial: ");
    scanf("%f", &inicial); 

    printf("\nDigite a temperatura Fahreinheit inteira final: ");
    scanf("%f", &final);

    printf("\n \t\t\tConversão Fahreinheit -> Celcius \n\n\tFahreinheit \t\t\t\t\t\tCelcius");

    while (inicial <= final) {

        conversao = (5.0 / 9.0) * (inicial - 32.0);

        printf("\n\n \t%.1fºF \t\t\t\t\t\t\t%.1fºC", inicial, conversao);

        inicial++;
    }

    return 0;
}