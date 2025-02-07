#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, soma;
    soma = 0;
    x = 1;

    while (x <= 10)
    {
        soma = soma + x;
        x = x + 1;
    }

    printf("Soma: %d\n", soma);
    return 0;
}