#include <stdio.h>
#include <stdlib.h>

void kwconta(float sal_min1, float kw_resid1, float *kw1, float *kw_final1, float *kw_descont1){
    *kw1 = sal_min1 / 1000;
    *kw_final1 = *kw1 * kw_resid1;
    *kw_descont1 = *kw_final1 * 0.85;
}

int main(){
    float kw_resid, sal_min, kw_final, kw_descont, kw;

    printf("Insira o salário mínimo: ");
    scanf("%f", &sal_min);

    printf("Insira a quantidade de KWs gastos: ");
    scanf("%f", &kw_resid);

    kwconta(sal_min, kw_resid, &kw, &kw_final, &kw_descont);

    printf("Valor de 1KW (em R$): %.2f\n", kw);
    printf("Valor a ser pago (em R$): %.2f\n", kw_final);
    printf("Valor com desconto de 15%% (em R$): %.2f", kw_descont);
}