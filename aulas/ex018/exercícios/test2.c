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
    int y, z;

    printf("============ CADASTRO NACIONAL PF ============\n\n");
    for (y = 1; y <= 1; y++) {
        puts("Digite nome de usuário: ");
        scanf("%49[^\n]s", lista[y].user);
        fflush(stdin);

        puts("Digite uma senha: ");
        scanf("%49[^\n]s", lista[y].password);
        fflush(stdin);
    }

    system("cls");
    printf("\n");

    printf("============ ACESSO NACIONAL PF ============\n\n");
    

    while (user1 != lista[1].user)
    {
        puts("Digite nome de usuário: ");
        scanf("%49[^\n]s", user1);
        fflush(stdin);
        printf("\n");
        z = strcmp(lista[1].user, user1);

        if (z != 0)
        {
            printf
        }
        
        
    }
    
}
