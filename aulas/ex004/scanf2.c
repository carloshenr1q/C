#include <stdio.h>

int main (){

    int tvs = 0;
    int celulares = 0;
    int pcs = 0;

    printf("Quantas TVs tem na sua casa?\n");
    scanf("%d", &tvs);

    printf("Quantos celulares tem na sua residência?\n");
    scanf("%d", &celulares);

    printf("Quantas computadores/notebooks tem na sua casa?\n");
    scanf("%d", &pcs);

    printf("Na sua casa tem %d TVs, %d celulares e %d computadores.\n\a", tvs, celulares, pcs);

    return 0;
}