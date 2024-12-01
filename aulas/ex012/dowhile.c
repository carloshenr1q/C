#include <stdio.h>

main (){
    int valor = 0;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor <= 0)
    {
        printf("ERRO!");
        return 1;
    }

    do
    {
        printf("%d ", valor);
        valor += 2;
    } while (valor <= 100);

    return 0;
}