#include <stdio.h>
#include "conversao.c"

void limparBuffer() { 
    int c; while ((c = getchar()) != '\n' && c != EOF) {} 
    }

int main(){
    float orig, conv, valor;
    int unid, result;
    char frase [] = "Digite a unidade de temperatura para conversão: \n";
    char frase2 [] = "Converter para";
    char frase3 [] = "Conversão para";
    char erro [] = "Valor Inválido!";

    printf("=========================================== CONVERSOR DE TEMPERATURAS ===========================================\n\n");
    printf("1 para Celsius.\n");
    printf("2 para Fahrenheit.\n");
    printf("3 para Kelvin\n");
    printf("Qual é unidade de temperatura?\n");
    scanf("%d", &unid);
    limparBuffer();

    if (unid != 1 && unid != 2 && unid != 3)
    {
        printf("%s", erro);
        return 0;
    }
    
    printf("Digite a temperatura: \n");
    scanf("%f", &orig);
    limparBuffer();

    switch (unid){

    case 1:
        printf("%s\n", frase2);
        printf("1 para Fahrenheit.\n");
        printf("2 para Kelvin\n");
        scanf("%d", &result);
        limparBuffer();

        if (result == 1)
        {
            valor = CelFahr(orig, conv);
            printf("%s Fahrenheit é %f\n\a", frase3, valor);
        }
        else if (result == 2)
        {
            valor = CelKel(orig, conv);
            printf("%s Kelvin é %f\a\n", frase3, valor);
        }
        else if (result != 1 && result != 2)
        {
            printf("%s", erro);
        }
    break;
    case 2:
        printf("%s", frase);
        printf("1 para Celsius.\n");
        printf("2 para Kelvin\n");
        scanf("%d", &result);
        limparBuffer();

        if (result == 1)
        {
            valor = FahrCel(orig, conv);
            printf("%s Celsius é %f\n\a", frase3, valor);
        }
        else if (result == 2)
        {
            valor = FahrKel(orig, conv);
            printf("%s Kelvin é %f\a\n", frase3, valor);
        }
        else if (result != 1 && result != 2)
        {
            printf("%s", erro);
        }
    break;
    case 3:
        printf("%s", frase);
        printf("1 para Celsius.\n");
        printf("2 para Fahrenheit\n");
        scanf("%d", &result);
        limparBuffer();

        if (result == 1)
        {
            valor = KelCel(orig, conv);
            printf("%s Celsius é %f\n\a", frase3, valor);
        }
        else if (result == 2)
        {
            valor = KelFahr(orig, conv);
            printf("%s Fahrenheit é %f\a\n", frase3, valor);
        }
        else if (result != 1 && result != 2)
        {
            printf("%s", erro);
        }
    break;
    default:
    break;
    }
}