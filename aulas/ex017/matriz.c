#include <stdio.h>

int main(){
    int mat [3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int x;

    printf("Mostrando a primeira linha: ");
    for ( x = 0; x < 3; x++)
    {
        printf("%d, ", mat [0][x]);
    }
    
}