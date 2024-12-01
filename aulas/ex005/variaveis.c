#include <stdio.h>

#define text "Olá, iremos armazenar os dados à seguir."

int main (){

    printf("%s\n", text);

    int idade = 0;
    float peso = 0;
    float altura = 0;
    char nome [30];

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Diga sua idade: \n");
    scanf("%d", idade);

    printf("Escreva sua altura: \n");
    scanf("%f", &altura);

    printf("Declare seu peso: \n");
    scanf("%f", &peso);

    printf("Bem-vindo %s, sua idade (%d), peso (%f) e altura (%f) foram coletados corretamente.\n\a", nome, idade, peso, altura);

}