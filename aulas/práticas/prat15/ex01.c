#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 4

// Acessa membros de um variável
struct people
{
    char name [50];
    int year;
    float height, weight;
};

// Renomeia o identificador 
typedef struct people people;
//               |       |
//            struct / typedef

int main(){
    setlocale(LC_ALL, "PT-BR");

// typedef renomeia a struct people 3 vezes por causa do TAM = 3
//    |
    people list[TAM];
    int x;
    
    for (x = 1; x < TAM; x++)
    {
        printf("=========================== USUÁRIO %d ===========================\n\n", x);

        printf("Digite o nome do usuário: ");
        scanf("%49[^\n]s", &list[x].name);
//      identificando qual typedef people e a várivel dentro da struct    
        fflush(stdin);
        printf("\n");

        printf("Digite sua idade: ");
        scanf("%d", &list[x].year);
//      identificando qual typedef people e a várivel dentro da struct 
        fflush(stdin);
        printf("\n");

        printf("Digite seu peso: ");
        scanf("%f", &list[x].weight);
//      identificando qual typedef people e a várivel dentro da struct 
        fflush(stdin);
        printf("\n");

        printf("Digite sua altura: ");
        scanf("%f", &list[x].height);
//      identificando qual typedef people e a várivel dentro da struct 
        fflush(stdin);
        printf("\n");
    }
    system("cls");

    for (x = 1; x < TAM; x++)
    {
        if (x == 1)
        {
            printf("=========================== USUÁRIO %d ===========================\n\n", x);
    
            printf("Nome do usuário: %s", list[x].name);
            printf("\n");
    
            printf("Sua idade: %d", list[x].year);
            printf("\n");
        }
        else if(x == 3)
        {
            printf("=========================== USUÁRIO %d ===========================\n\n", x);

            printf("Seu peso: %.2f", list[x].weight);
            printf("\n");
    
            printf("Seu peso: %.2f", list[x].height);
        }
    }
}