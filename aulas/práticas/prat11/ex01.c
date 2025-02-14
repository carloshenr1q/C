#include <stdio.h>
#include <stdlib.h>

float salario_brut(float horas, float sal_min){
    return horas * (sal_min / 2);
}
float salario(float sal_brut){
    return sal_brut * 0.97;
}

int main (){
    float horas, sal_min, sal_brut, sal;

    printf("Insira número de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Insira valor do salário mínimo: ");
    scanf("%f", &sal_min);

    sal_brut = salario_brut(horas, sal_min);
    sal = salario(sal_brut);

    printf("Salário líquido a receber: R$ %.2f", sal);

    return 0;
}