#include <stdio.h>

int main(){

    float orig, conv;
    int unid, result;
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
    case 1:
        printf("%s", frase);
        printf("1 para Fahrenheit.\n");
        printf("2 para Kelvin\n");
        scanf("%d", &result);
        if (result == 1)
        {
            conv = ((orig * 9/5) + 32);
            printf("%s Fahrenheit é %f\n\a", frase2, conv);
        }
        else if (result == 2)
        {
            conv = orig + 273.15;
            printf("%s Kelvin é %f\a\n", frase2, conv);
        }
        else if (result =! 1, 2)
        {
            printf("%s\n\a", erro);
        }
    break;

    case 2:
        printf("%s", frase);
        printf("1 para Celsius.\n");
        printf("2 para Kelvin\n");
        scanf("%d", &result);
        if (result == 1)
        {
            conv = (orig - 32) * 5/9;
            printf("%s Celsius é %f\n\a", frase2, conv);
        }
        else if (result == 2)
        {
            conv = ((orig - 32) * 5/9) + 273.15;
            printf("%s Kelvin é %f\a\n", frase2, conv);
        }
        else if (result =! 1, 2)
        {
            printf("%s\n\a", erro);
        }
    break;

    case 3:
        printf("%s", frase);
        printf("1 para Celsius.\n");
        printf("2 para Fahrenheit\n");
        scanf("%d", &result);
        if (result == 1)
        {
            conv = orig - 273.15;
            printf("%s Celsius é %f\n\a", frase2, conv);
        }
        else if (result == 2)
        {
            conv = (orig - 273.15) * 9/5 + 32;
            printf("%s Fahrenheit é %f\a\n", frase2, conv);
        }
        else if (result =! 1, 2)
        {
            printf("%s\n\a", erro);
        }
    break;

    default:
        printf("%s \n\a", erro);
        break;
    }
}