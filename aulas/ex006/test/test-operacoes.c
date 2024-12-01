#include <stdio.h>

int main (){
    int X, Y, S, SU, DI, MU;

    printf("Digite um número: \n");
    scanf("%d", &X);

    printf("Digite um número: \n");
    scanf("%d", &Y);

    S = X + Y;
    SU = X - Y;
    DI = X / Y;
    MU = X * Y;

    printf("Resultado das operações: \n");
    printf("Soma: %d\n", S);
    printf("Subtração: %d\n", SU);
    printf("Divisão: %d\n", DI);
    printf("Multiplicação: %d\a\n", MU);
    

}