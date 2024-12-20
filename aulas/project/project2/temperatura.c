#include <stdio.h>
#include "conversao.c"

int main(){
    float orig, conv, result;
    int unid;
    char frase [] = "Digite a unidade de temperatura para conversão: \n";
    char frase2 [] = "A conversão para";
    char erro [] = "ERRO!";

    printf("Digite a temperatura: \n");
    scanf("%f", &orig);
    printf("Qual é unidade de temperatura?\n");
    printf("1 para Celsius.\n");
    printf("2 para Fahrenheit.\n");
    printf("3 para Kelvin\n");
    scanf("%d", &unid);

    switch (unid){
}
}