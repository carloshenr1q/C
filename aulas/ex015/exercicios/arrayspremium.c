#include <stdio.h>

int main(){
    int aluno;
    float nota[5];
    float media = 0.0;

    for ( aluno = 0; aluno < 5; aluno++)
    {
        printf("Digite a nota do Aluno %d: ", aluno + 1);
        scanf("%f", &nota[aluno]);

        if (nota[aluno] > 10 || nota[aluno] < 0)
        {
            printf("ERRO!\n\a");
            return 1;
        }

        media += nota[aluno];

    }
    
    printf("A média das notas é: %.2f\n\a", media/5);
}