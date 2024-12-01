#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
    setlocale(LC_ALL, "pt-BR");

    char orig[N] = {"Olá, mundo"};
    char dest[N];

    printf("Antes do strcpy: \n");
    puts(orig);
    puts(dest);

    strcpy(dest, orig);

    printf("Depois do strcpy: \n");
    puts(orig);
    puts(dest);
}