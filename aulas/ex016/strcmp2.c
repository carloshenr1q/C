#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

main(){
    setlocale(LC_ALL, "pt-BR");
    
    char hardText [N] = {"/exit"};
    char senha_usr [N];
    int ok;

    printf("Digite a senha:\n");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr);

    if (ok == 0)
    {
        printf("A senha está correta!");
    }
    else{
        printf("A senha está incorreta!");
    }

    }