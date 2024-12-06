#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct conta {
    int x;
    char user[50];
    char password[50];
};

typedef struct conta conta;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    setlocale(LC_ALL, "PT-BR");

    conta lista[TAM];
    char user1[50];
    char password1[50];
    int y, z;

    printf("============ CADASTRO NACIONAL PF ============\n\n");
    for (y = 0; y < 1; y++) {
        printf("Digite nome de usuário: ");
        fgets(lista[y].user, sizeof(lista[y].user), stdin);
        lista[y].user[strcspn(lista[y].user, "\n")] = '\0'; // Remove trailing newline

        printf("Digite uma senha: ");
        fgets(lista[y].password, sizeof(lista[y].password), stdin);
        lista[y].password[strcspn(lista[y].password, "\n")] = '\0'; // Remove trailing newline
    }

    system("cls");
    printf("\n");

    printf("============ ACESSO NACIONAL PF ============\n\n");

    do {
        printf("Digite nome de usuário: ");
        fgets(user1, sizeof(user1), stdin);
        user1[strcspn(user1, "\n")] = '\0'; // Remove trailing newline
        printf("\n");

        z = strcmp(lista[0].user, user1);

        if (z != 0) {
            printf("Usuário Incorreto!\n\n");
        }
    } while (z != 0);

    printf("Usuário encontrado!\n\n");

    do {
        printf("Digite a senha: ");
        fgets(password1, sizeof(password1), stdin);
        password1[strcspn(password1, "\n")] = '\0'; // Remove trailing newline
        printf("\n");

        z = strcmp(lista[0].password, password1);

        if (z != 0) {
            system("cls");
            printf("Senha Incorreta!\n\n");
        }
    } while (z != 0);

    system("cls");
    printf("============ BEM-VINDO AO ACESSO DA PF, %s ============\n", user1);

    return 0;
}
