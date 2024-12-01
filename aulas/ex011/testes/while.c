#include <stdio.h>

int main(){
    float numb;

    printf("Digite um valor para saber se é negativo, neutro ou positivo: \n");
    scanf("%f", &numb);

    while (numb >= 0)
    {
        if (numb == 0)
        {
            printf("Este número é neutro!");
        return 1;
        }
        else if (numb > 0)
        {
            printf("Este número é positivo!");
        return 1;
        }
    }
    printf("Este número é negativo");
    return 0;
}