/*Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, porcent, aumento, novosalario;

    printf("Digite seu salário: ");
    scanf("%f", &salario);
    printf("\n");

    printf("Valores quebrados digitar 'Exemplo: 2.4'\n");
    printf("Digite seu aumento em porcentagem: ");
    scanf("%f", &porcent);
    printf("\n");

    aumento = (salario * porcent) / 100;
    novosalario = aumento + salario;

    printf("Aumento de R$%.2f\n", aumento);
    printf("Seu novo salário é R$%.2f", novosalario);

    return 0;
}