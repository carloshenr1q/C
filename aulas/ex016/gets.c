#include <stdio.h>

int main(){

    char s [10];

    printf("Digite algo: ");
    gets(s);
    fflush(stdin);

    puts("Resultado: ");
    puts(s);
    
}