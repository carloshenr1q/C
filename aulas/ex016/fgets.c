#include <stdio.h>

int main(){

    char s [10];

    printf("Digite algo: ");
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("Resultado: ");
    puts(s);
}