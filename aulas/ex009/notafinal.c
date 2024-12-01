#include <stdio.h>

int main(){
    float nota;

    printf("Insira sua nota: \n");
    scanf("%f", &nota);

    if (nota >= 7.0 )
    {
        printf("Parabéns, você foi aprovado! \n\a");
    }
    else
    {
        printf("Você foi reprovado :(\n\a");
    }
    
}