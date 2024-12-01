#include <stdio.h>

int main(){
    int aluno;
    float nota [5];
    float media;

    for ( aluno = 1; aluno < 6; aluno++)
    {
        printf("Digite a nota do Aluno %d: ", aluno);
        scanf("%f", &nota[aluno]);

        if (nota[aluno] > 10 || nota[aluno] < 0)
        {
            printf("ERRO!\n\a");
            return 1;
        }
    }  
    media = (nota[0] + nota[1] + nota[2] + nota[3] + nota[4])/5;

    printf("A média das notas é: %f\n\a", media);
}