#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, soma, result, i;
    soma = 1;
    num = 0;

    printf("Números do Fibonacci\n");

    for (i = 0; i < 6; i++)
    {
        num = soma + num;

        i++;
        printf("%d ", num);
    }

    return 0;
}