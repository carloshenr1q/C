#include <stdio.h>
#include <stdlib.h>

int main(){
    float realucro, realimpost, pfabric, lucro, impost, pconsum;

    printf("Digite o preço de fábrica: ");
    scanf("%f", &pfabric);
    printf("Digite a porcentagem de lucro da distribuidora: ");
    scanf("%f", &lucro);
    printf("Digite a porcentagem do imposto: ");
    scanf("%f", &impost);

    realucro = (pfabric * lucro) / 100;
    realimpost = (pfabric * impost) / 100;
    pconsum = realucro + realimpost + pfabric;

    printf("Lucro da distribuidora: R$ %.2f\n", realucro);
    printf("Impostos: R$ %.2f\n", realimpost);
    printf("Valor final para consumidor: R$ %.2f", pconsum);

    return 0;
}