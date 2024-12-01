#include <stdio.h>

int main(){
    float salario;

    printf("Digite seu salário bruto: \n");
    scanf("%f", &salario);

    if (salario > 2259)
    {
        printf("Você irá pagar IR\n\a");
    }
    else
    {
        printf("Você é isento do IR\n\a");
    }
    
}