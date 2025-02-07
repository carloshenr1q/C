#include <stdio.h>

int main(){
    float nota1, nota2, nota3, result;

    printf("=========================== PROGRAMA NOTA FINAL ===========================\n\n");

    printf("Digite a nota do Trabalho de Laboratório: ");
    scanf("%f", &nota1);
    if (nota1 > 10 || nota1 < 0)
    {
        printf("ERRO!");
        return 1;
    }
    printf("Digite a nota da Avaliação Semestral : ");
    scanf("%f", &nota2);
    if (nota2 > 10 || nota2 < 0)
    {
        printf("ERRO!");
        return 1;
    }
    printf("Digite a nota do Exame Final: ");
    scanf("%f", &nota3);
    if (nota3 > 10 || nota3 < 0)
    {
        printf("ERRO!");
        return 1;
    }

    result = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    printf("Média ponderada: %.2f\n", result);

    if (result >= 8)
        printf("Conceito A\n");
    else if (result >= 7)
        printf("Conceito B\n");
    else if (result >= 6)
        printf("Conceito C\n");
    else if (result >= 5)
        printf("Conceito D\n");
    else
        printf("Conceito E\n");

    return 0;
}