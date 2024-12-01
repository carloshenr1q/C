#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome [TAM];
};

typedef struct tipo_pessoa type_pessoa;
    
int main(){
    setlocale(LC_ALL, "pt-br");

    type_pessoa pes = {1, 1.1, "Henrique"};

    printf("Início: \n");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.1f\n", pes.peso);
    printf("Nome: %s\n\n", pes.nome);

    pes.idade = 2;
    pes.peso = 2.2;
    strcpy(pes.nome, "Aires");

    printf("Alterando os dados: \n");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.1f\n", pes.peso);
    printf("Nome: %s\n\n", pes.nome);

    printf("Solicitando os dados: \n");
    printf("Idade: ", pes.idade);
    scanf("%d", &pes.idade);

    printf("Peso: ", pes.peso);
    scanf("%f", &pes.peso);

    fflush(stdin);
    printf("Nome: ", pes.nome);
    scanf("%s", &pes.nome);

    printf("\n");

    printf("Dados solicitados: \n");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.1f\n", pes.peso);
    printf("Nome: %s\n\n", pes.nome);

}
