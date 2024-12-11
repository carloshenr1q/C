#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct conta
{
    int x;
    char user[50];
    char password[50];
};

typedef struct conta conta;

int main() {
    setlocale(LC_ALL, "PT-BR");

    conta lista[TAM];
    char user1[50];
    char password1[50];
    int y, z, i;

    printf("============ CADASTRO NACIONAL PF ============\n\n");
    for (y = 0; y < 1; y++) {
        puts("Digite nome de usuário: ");
        scanf("%49[^\n]s", lista[y].user);
        fflush(stdin);

        puts("Digite uma senha: ");
        scanf("%49[^\n]s", lista[y].password);
        fflush(stdin);
    }

    system("cls || clear");
    printf("============ ACESSO NACIONAL PF ============\n\n");
    
    while (z != 0)
    {
        puts("Digite nome de usuário: ");
        scanf("%49[^\n]s", user1);
        fflush(stdin);
        printf("\n");
        z = strcmp(lista[0].user, user1);

        if (z != 0)
        {
            system("cls || clear");
            printf("============ ACESSO NACIONAL PF ============\n\n");
            printf("Usuário Incorreto!\n");
            printf("\n");
        } 
    }

    printf("Usuário Encontrado!\n\n");

    while (i != 0)
    {
        puts("Digite a senha: ");
        scanf("%49[^\n]s", password1);
        fflush(stdin);
        printf("\n");
        i = strcmp(lista[0].password, password1);

        if (i != 0)
        {
            system("cls || clear");
            printf("============ ACESSO NACIONAL PF ============\n\n");
            printf("Senha Incorreta!\n");
            printf("\n");
        } 
    }

    system("cls || clear");
    printf("============ BEM-VINDO AO ACESSO DA PF, %s ============", user1);
    return 0;
}
