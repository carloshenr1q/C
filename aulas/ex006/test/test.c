#include <stdio.h>

int main(){
    char cargo [50];
    char nome [50];
    float salario;
    int tempo;

    printf("Bem-vindo ao sistema integrado da Empresa Express!\n");
    printf("Insira os dados solicitados.\n");

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite seu cargo: \n");
    scanf("%s", &cargo);

    printf("Digite seu sálario: \n");
    scanf("%f", &salario);

    printf("Digite seu o tempo que está no cargo em mês: \n");
    scanf("%d", &tempo);

    printf("Olá %s, os seus dados foram salvos com sucesso.\a\n", nome);
   
}