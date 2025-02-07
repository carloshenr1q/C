#include <stdio.h>
#include <stdio.h>

int main (){
    int z;
    float result, x, y;

    printf("Digite 1 para soma\n");
    printf("       2 para subtração\n");
    printf("       3 para multiplicação\n");
    printf("       4 para divisão\n");
    printf("Valor: ");
    scanf("%d", &z);

    switch (z)
    {
    case 1:
        printf("======================== SOMA ========================\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &x);
        printf("Digite o segundo valor: ");
        scanf("%f", &y);

        result = x + y;

        printf("Resultado da soma é: %.2f", result);
        break;
    case 2:
        printf("======================== SUBTRAÇÃO ========================\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &x);
        printf("Digite o segundo valor: ");
        scanf("%f", &y);

        result = x - y;

        printf("Resultado da subtração é: %.2f", result);
        break;
    case 3:
        printf("======================== MULTIPLICAÇÃO ========================\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &x);
        printf("Digite o segundo valor: ");
        scanf("%f", &y);

        result = x * y;

        printf("Resultado da multiplicação é: %.2f", result);
        break;
    case 4:
        printf("======================== DIVISÃO ========================\n\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &x);
        printf("Digite o segundo valor: ");
        scanf("%f", &y);

        result = x / y;

        if (y == 0)
        {
            printf("Resultado da divisão é: 0");
            return 1;
        }
        
        printf("Resultado da divisão é: %.2f", result);
        break;
    
    default:
        break;
    }
    
    if (z != 1 && z != 2 && z != 3 && z != 4)
    {
        printf("Erro!");

        return 1;
    }
    
    return 0;
}