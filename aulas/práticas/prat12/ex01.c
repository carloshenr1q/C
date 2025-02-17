#include <stdio.h>
#include <stdlib.h>

float kw1(float sal_min){
    return sal_min / 1000;
}
float kwfinal(float kw_resid, float kw){
    return kw_resid * kw;
}
float kwdescont(float kw_final){
    return kw_final * 0.85;
}

int main(){
    float kw_resid, sal_min, kw_final, kw_descont, kw;

    printf("Insira o salário mínimo: ");
    scanf("%f", &sal_min);

    printf("Insira a quantidade de KWs gastos: ");
    scanf("%f", &kw_resid);

    kw = kw1(sal_min);
    kw_final = kwfinal(kw_resid, kw);
    kw_descont = kwdescont(kw_final);

    printf("Valor de 1KW (em R$): %.2f\n", kw);
    printf("Valor a ser pago (em R$): %.2f\n", kw_final);
    printf("Valor com desconto de 15%% (em R$): %.2f", kw_descont);
}