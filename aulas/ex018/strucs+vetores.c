#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct pessoas
{
    int idade;
    float peso;
    char nome [50];
};

typedef struct pessoas pessoas;

int main(){
    setlocale(LC_ALL, "PT-BR");

    pessoas lista[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Insira os dados (%d): \n", i+1);
        puts("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);

        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }
    system("cls");

    puts("Seus Dados:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("________________ PESSOA %d ________________\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    printf("____________________________________________\n");
}
