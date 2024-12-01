#include <stdio.h>

int main(){

    float nota1, nota2, nota3, result;
    char frase [16] = "Digite sua nota";

    printf("%s 1: \n", frase);
    scanf("%f", &nota1);

    if (nota1 < 0 || nota1 > 10)
    {
        printf("ERRO!");
        return 1;
    }
    
    printf("%s 2: \n", frase);
    scanf("%f", &nota2);

    if (nota2 < 0 || nota2 > 10)
    {
        printf("ERRO!");
        return 1;
    }

    printf("%s 3: \n", frase);
    scanf("%f", &nota3);

    if (nota3 < 0 || nota3 > 10)
    {
        printf("ERRO!");
        return 1;
    }

    result = ((nota1 + nota2 + nota3)/3);

    if (result >= 7)
    {
        printf("Parabéns, você foi aprovado!\n\a");
    }
    else if (result >= 5)
    {
        printf("Você está de recuperação, melhore!\n\a");
    }
    else if (result < 5 )
    {
        printf("Você foi reprovado!\n\a");
    }
    
}