#include <stdio.h>

int main(){
    int dia = 0;
    char mes [20];
    int ano = 0;

        printf("Digite o dia de hoje: \n");
        scanf("%d", &dia);

        printf("Digite o mês: \n");
        scanf("%s", mes);

        printf("Digite o ano: \n");
        scanf("%d", &ano);

        printf("Hoje é %.2d do mês de %s de %.2d.\a\n", dia, mes, ano);
}