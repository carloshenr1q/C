#include <stdio.h>

int main(){
    int x, y, adic, sub, mult, div;

    printf("Digite um número: \n");
    scanf("%d", &x);

    printf("Digite um número: \n");
    scanf("%d", &y);
    
    adic = x + y;
    sub = x - y;
    mult = x * y;
    div = x / y;

    printf("Adição: %d\n", adic);
    printf("Subtração: %d\n", sub);
    printf("Multiplicação: %d\n", mult);
    printf("Divição: %d\n", div);
}