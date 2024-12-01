#include <stdio.h>

int main(){
    int id;

    printf("Digite sua idade: \n");
    scanf("%d", &id);

    if (id < 0)
    {
        printf("ERRO!");
    }
    else if (id <= 12)
    {
        printf("Você é uma criança!\n\a");
    }
    else if (id <= 17)
    {
        printf("Você é um adolescente!\n\a");
    }
    else if (id <= 64)
    {
        printf("Você é um adulto!\n\a");
    }
    else if (id <= 124)
    {
        printf("Você é um idoso!\n\a");
    }
    else if (id <= 999)
    {
        printf("Você definitivamente está mentindo!\a\n");
    }
    
    
}