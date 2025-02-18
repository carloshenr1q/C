#include <stdio.h>
#include <stdlib.h>

int main(){
    int primos [10];
    int i;
    i = 1;

    for (i = 1; i < 10; i++)
    {
        printf("Digite %d/9 números: ", i);
        scanf("%d", &primos[i]);
    }

    for (i = 1; i < 10; i++)
    {
        if (1 == primos[i])
        {
            printf("%d é primo na posição %d\n", primos[i], i);
        }
        else if (2 == primos[i])
        {
            printf("%d é primo na posição %d\n", primos[i], i);
        }
        else if (3 == primos[i])
        {
            printf("%d é primo na posição %d\n", primos[i], i);
        }
        else if (0 == 3 % primos[i] || 0 == 2 % primos[i] || 0 == 5 % primos[i]){
        }
        else{
            printf("%d é primo na posição %d\n", primos[i], i);
        }
    }
        
}