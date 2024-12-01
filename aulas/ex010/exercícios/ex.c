#include <stdio.h>

int main (){
    float x, y, ad, sub, mult, div;
    int select;

    printf("Bem-vindo a calculadora básica em C!\n");
    printf("Digite um valor: \n");
    scanf("%f", &x);

    printf("Digite outro valor: \n");
    scanf("%f", &y);

    printf("Digite 1 para Soma, 2 para Subtração, 3 para Multiplicação e 4 para Divisão.\n");
    scanf("%d", &select);

    switch (select)
    {
    case 1:
        ad = x + y;

        printf("Resultado da Soma é %.3f\a", ad);
        break;
    
    case 2:
        sub = x - y;

        printf("Resultado da Subtração é %.3f\a", sub);
        break;

    case 3:
        mult = x * y;

        printf("Resultado da Multiplicação é %.3f\a", mult);
        break;

    case 4:
        div = x / y;

        if (x == 0 || y == 0)
        {
            printf("ERRO!\a");
        }
        else
        {
            printf("Resultado da Divisão é %.3f\a", div);
        }
        break;

    default:
        printf("ERRO!\n\a");
        break;
    }    
}