#include <stdio.h>

int main(){
    int select;
    float y, x, result;

    printf("Digite 1 para soma, 2 para subtração, 3 para multiplicação e 4 para divisão.\n");
    scanf("%d", &select);

    switch (select){
        case 1:
            printf("Digite um valor: \n");
            scanf("%f", &y);

            printf("Digite um valor: \n");
            scanf("%f", &x);

            result = y + x;

            printf("O resultado da soma é %f\a", result);
            break;

        case 2:
            printf("Digite um valor: \n");
            scanf("%f", &y);

            printf("Digite um valor: \n");
            scanf("%f", &x);

            result = y - x;

            printf("O resultado da subtração é %f\a", result);
            break;

        case 3:
            printf("Digite um valor: \n");
            scanf("%f", &y);

            printf("Digite um valor: \n");
            scanf("%f", &x);

            result = y * x;

            printf("O resultado da multiplicação é %f\a", result);
            break;

        case 4:
            printf("Digite um valor: \n");
            scanf("%f", &y);

            printf("Digite um valor: \n");
            scanf("%f", &x);

            result = y / x;

            printf("O resultado da divisão é %f\a", result);
            break;
    default:
        printf("Número inválido!\a");
        break;
    }
}