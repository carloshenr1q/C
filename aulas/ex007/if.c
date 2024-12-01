#include <stdio.h>

int main (){

    int m;

    printf("Você qual é a sua idade?\n");
    scanf("%d", &m);

    if (m >= 18)
    {
        printf("Parabéns, você é maior de idade!\n");
    }
}