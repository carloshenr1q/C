#include <stdio.h>
#include <stdlib.h>

int main (){
    float x, y;

    printf("Digite 2 números.\n");

    printf("1° número: ");
    scanf("%f", &x);

    printf("2° número: ");
    scanf("%f", &y);

    if (x > y)
    {
        printf("Maior é: %0.2f", x);
    }
    else if (y > x)
    {
        printf("Maior é: %0.2f", y);
    }
    else
    {
        printf("Os números são iguais.");
    }
    
    return 0;
}