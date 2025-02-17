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
        if (0 != 3 % primos[i])
        {
            if (0 != 2 % primos[i])
            {
                printf("%d é primo na posição %d\n", primos[i], i);
            }
        }
    }
    
}