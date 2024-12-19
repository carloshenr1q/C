#include <stdio.h>
#include "calculadora.c"

int main(){
    int alternativa;
    float x, y, result;

    printf("Digite um número: ");
    scanf("%f", &x);

    printf("Digite um número: ");
    scanf("%f", &y);

    printf("Digite 1 para Adição.\n");
    printf("Digite 2 para Subtração\n");
    printf("Digite 3 para Multiplicação\n");
    printf("Digite 4 para Divisão\n");
    scanf("%d", &alternativa);

    switch (alternativa)
    {
    case 1:
        result = adic(x, y);
        printf("O resultado da adição é %.2f", result);

        break;

    case 2:
        result = sub(x, y);
        printf("O resultado da subtração é %.2f", result);

        break;

    case 3:
        result = mult(x, y);
        printf("O resultado da multiplicação é %.2f", result);

        break;

    case 4:
        result = div(x, y);
        printf("O resultado da divisão é %.2f", result);

        break;
    
    default:
        break;
    }

}