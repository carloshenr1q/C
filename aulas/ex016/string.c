#include <stdio.h>

int main(){

    char nome [10];

    printf("Digite seu nome: ");
    scanf("%36[^\n]s", nome);

    printf("Parabéns, %s\n\n", nome);
}
