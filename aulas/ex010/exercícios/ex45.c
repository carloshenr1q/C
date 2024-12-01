#include <stdio.h>

int main(){

    float orig, conv;
    char unid [] = {'c', 'f', 'k'};
    
    char result;
    char frase [] = "Digite a unidade de temperatura para conversão: \n";
    char frase2 [] = "A conversão para";

    printf("Digite a temperatura: \n");
    scanf("%f", &orig);
    printf("Qual é unidade de temperatura?\n");
    printf("c para Celsius.\n");
    printf("f para Fahrenheit.\n");
    printf("k para Kelvin\n");
    scanf("%s", &unid);

    switch (unid)
    {
    case 1:
        printf("%s", frase);
        printf("f para Fahrenheit.\n");
        printf("k para Kelvin\n");
        scanf("%s", &result);
        if (result == 'f')
        {
            conv = ((orig * 9/5) + 32);
            printf("%s Fahrenheit é %f\n\a", frase2, conv);
        }
        else if (result == 'k')
        {
            conv = orig + 273.15;
            printf("%s Kelvin é %f\a\n", frase2, conv);
        }
    printf("ERRO!");
    break;

    case 2:
        printf("%s", frase);
        printf("c para Celsius.\n");
        printf("k para Kelvin\n");
        scanf("%s", &result);
        if (result == 'c')
        {
            conv = (orig - 32) * 5/9;
            printf("%s Celsius é %f\n\a", frase2, conv);
        }
        else if (result == 'k')
        {
            conv = ((orig - 32) * 5/9) + 273.15;
            printf("%s Kelvin é %f\a\n", frase2, conv);
        }
    break;

    case 3:
        printf("%s", frase);
        printf("c para Celsius.\n");
        printf("f para Fahrenheit\n");
        scanf("%s", &result);
        if (result == 'c')
        {
            conv = orig - 273.15;
            printf("%s Celsius é %f\n\a", frase2, conv);
        }
        else if (result == 'f')
        {
            conv = (orig - 273.15) * 9/5 + 32;
            printf("%s Fahrenheit é %f\a\n", frase2, conv);
        }
    break;

    default:
        printf("ERRO!\n\a");
        break;
    }
}