#include <stdio.h>
#include <stdlib.h>

float imposto(float pfabric, float impost){
    return (pfabric * impost) / 100;
}
float lucro(float pfabric, float luc){
    return (pfabric * luc) / 100;
}
float pconsumidor(float pfabric, float luc, float impost){
    return imposto(pfabric, impost) + lucro(pfabric, luc) + pfabric;
}

int main(){
    float realucro, realimpost, pfabric, luc, impost, pconsum;

    printf("Digite o preço de fábrica: ");
    scanf("%f", &pfabric);
    printf("Digite a porcentagem de lucro da distribuidora: ");
    scanf("%f", &luc);
    printf("Digite a porcentagem do imposto: ");
    scanf("%f", &impost);

    realucro = lucro(pfabric, luc);
    realimpost = imposto(pfabric, impost);
    pconsum = pconsumidor(pfabric, luc, impost);

    printf("Lucro da distribuidora: R$ %.2f\n", realucro);
    printf("Impostos: R$ %.2f\n", realimpost);
    printf("Valor final para consumidor: R$ %.2f", pconsum);

    return 0;
}