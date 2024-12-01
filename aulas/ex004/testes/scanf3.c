#include <stdio.h>

int main(){
    int altura = 0;
    float peso = 0;
    int idade = 0;

        printf("Digite sua altura em centimetros: \n");
        scanf("%d", &altura);

        printf("Digite seu peso: \n");
        scanf("%f", &peso);

        printf("Digite sua idade: \n");
        scanf("%d", &idade);

        printf("Você tem %d anos com altura de %.dcm e com peso %.2f.\n", idade, altura, peso);
}