#include <stdio.h>

int main(){
    int num = 10;

    printf("Número original é %d\n", num);

    num++;
    printf("Incrementado: %d\n", num);

    num--;
    printf("Decrementado: %d\n", num);

    num+= 3;
    printf("Incrementado genérico: %d\n", num);

    num-= 4;
    printf("Decrementado genérico: %d\n", num);

    num*= 2;
    printf("Atribuição com multi: %d\n", num);

    num/= 2;
    printf("Atribuição com div: %d\n\a", num);
    
}