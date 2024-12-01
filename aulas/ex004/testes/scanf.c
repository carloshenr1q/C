#include <stdio.h>

int main (){
    float dolar = 0;
    float euro = 0;

    printf("A cotação do dólar e euro respectivamente guardados é %.2f e %.2f\a\n", dolar, euro);

    printf("Digite a cotação do dólar hoje: \a\n");
    scanf("%f", &dolar);

    printf("Digite a cotação do euro hoje: \a\n");
    scanf("%f", &euro);

    printf("A cotação do dólar e euro hoje respectivamente é %.2f e %.2f\a\n", dolar, euro);
}