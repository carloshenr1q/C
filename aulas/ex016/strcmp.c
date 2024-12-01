#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

main(){
    
    char cadeado [N] = {"chave"};
    char chave [N];
    int x;

    printf("Digite a senha: ");
    gets(chave);

    x = strcmp(cadeado, chave);

    if (x == 0)
    {
        printf("A senha está correta!");
    }
    else{
        printf("A senha está incorreta!");
    }

    }