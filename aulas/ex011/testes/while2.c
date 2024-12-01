#include <stdio.h>

int main(){
    int num, result0, result1, result2, result3, result4, result5, result6, result7, result8, result9, result;

    printf("PROGRAMA PARA MOSTRAR A TABUADA.\n");
    printf("Digite um valor: ");
    scanf("%d", &num);

    while (num >= 0)
    {
        result0 = num * 0;
        result1 = num * 1;
        result2 = num * 2;
        result3 = num * 3;
        result4 = num * 4;
        result5 = num * 5;
        result6 = num * 6;
        result7 = num * 7;
        result8 = num * 8;
        result9 = num * 9;
        result = num * 10;

        printf("Tabuada do número %d\n", num);
        printf("%d x 0 = %d\n", num, result0);
        printf("%d x 1 = %d\n", num, result1);
        printf("%d x 2 = %d\n", num, result2);
        printf("%d x 3 = %d\n", num, result3);
        printf("%d x 4 = %d\n", num, result4);
        printf("%d x 5 = %d\n", num, result5);
        printf("%d x 6 = %d\n", num, result6);
        printf("%d x 7 = %d\n", num, result7);
        printf("%d x 8 = %d\n", num, result8);
        printf("%d x 9 = %d\n", num, result9);
        printf("%d x 10 = %d\n\a", num, result);
    return 1;
    }
    printf("Número Inválido!\n\a");
}
