#include <stdio.h>

int main(){

    float nota1, nota2, nota3, result;
    char frase[16] = "Digite sua nota";

    // Entrada da primeira nota com verificação
    printf("%s 1: \n", frase);
    scanf("%f", &nota1);
    if (nota1 < 0 || nota1 > 10) {
        printf("Erro: nota fora do intervalo permitido (0 a 10)\n");
        return 1; // Encerrar o programa em caso de erro
    }

    // Entrada da segunda nota com verificação
    printf("%s 2: \n", frase);
    scanf("%f", &nota2);
    if (nota2 < 0 || nota2 > 10) {
        printf("Erro: nota fora do intervalo permitido (0 a 10)\n");
        return 1; // Encerrar o programa em caso de erro
    }

    // Entrada da terceira nota com verificação
    printf("%s 3: \n", frase);
    scanf("%f", &nota3);
    if (nota3 < 0 || nota3 > 10) {
        printf("Erro: nota fora do intervalo permitido (0 a 10)\n");
        return 1; // Encerrar o programa em caso de erro
    }

    // Cálculo da média
    result = (nota1 + nota2 + nota3) / 3;

    // Verificação do resultado final
    if (result >= 7) {
        printf("Parabéns, você foi aprovado!\n\a");
    }
    else if (result >= 5) {
        printf("Você está de recuperação, melhore!\n\a");
    }
    else {
        printf("Você foi reprovado!\n\a");
    }

    return 0;
}
