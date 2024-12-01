#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
    char x [N] = {"Olá, "};
    char y [N] = {"Mundo"};

    printf("Antes do strcat: \n");
    puts(x);
    puts(y);

    strcat(x, y);

    printf("Depois do strcat: \n");
    puts(x);

}