#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

main(){
    setlocale(LC_ALL, "pt-BR");

    char x [N];
    int num;

    printf("Digite algo: ");
    fgets(x, N, stdin);

    num = strlen(x);

    printf("Tem %d caracteres.\n", num - 1);

    printf("Impressão de posição a posição: \n");
    for ( num = 0; num < strlen(x); num++)
    {
        printf("%c ", x [num]);
    }
return 0;
}