/* Faça um programa que receba 4 números inteiros, calcule e mostre a soma desses números. */ 

#include <stdio.h>

int main (){
    int x, y, z, k, result;

    printf("Digite 4 números inteiros: \n");
    printf("1º -> ");
    scanf("%d", &x);

    printf("2º -> ");
    scanf("%d", &y);

    printf("3º -> ");
    scanf("%d", &z);

    printf("4º -> ");
    scanf("%d", &k);

    result = x + y + z + k;
    
    printf("Soma dos números inteiros é: %d.", result);

    return 0;
}