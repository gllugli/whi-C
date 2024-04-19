/*
2. Sabendo que a fórmula de conversão de graus Fahrenheit para Celsius é:
C = ( 5 / 9 ) * ( f – 32 ), escreva um programa que converta de Fahrenheit para Celsius
e exiba na tela os 20 (vinte) primeiros valores a partir da temperatura de 32° F ,
devendo exibir as duas unidades de conversão. programa deverá exibir o seguinte
cabeçalho.

            CONVERSAO FAHREINHEIT – CELSIUS
CELSIUS                                          FAHREINHEIT
*/


#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    float conversao, temperatura = 32.0;

    printf("\n \t\t\tConversão Fahreinheit -> Celcius \n\n\tFahreinheit \t\t\t\t\t\tCelcius");

    while (temperatura <= 52.0) {

        conversao = (5.0 / 9.0) * (temperatura - 32.0);

        printf("\n\n \t%.1fºF \t\t\t\t\t\t\t%.1fºC", temperatura, conversao);

        temperatura++;
    }

    return 0;
}