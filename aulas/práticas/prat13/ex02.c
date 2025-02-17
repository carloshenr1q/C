#include <stdio.h>
#include <stdlib.h>

int eh_primo(int num) {
    if (num < 2) return 0; // Números menores que 2 não são primos
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int primos[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &primos[i]);
    }

    printf("\nNúmeros primos digitados:\n");
    for (i = 0; i < 10; i++) {
        if (eh_primo(primos[i])) {
            printf("%d é primo na posição %d\n", primos[i], i);
        }
    }

    return 0;
}
