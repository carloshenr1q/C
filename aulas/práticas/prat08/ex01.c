#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, soma, result, i;
    soma = 1;
    num = 0;

    printf("Números do Fibonacci\n");

    for (i = 0; i < 15; i++)
    {
        result = num + soma;
        num = soma;
        soma = result;

        i++;
        printf("%d ", soma);
    }

    return 0;
}