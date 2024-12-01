#include <stdio.h>

int main(){
    int mat [3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int x, y;

    printf("Mostrando toda a matriz: \n");

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%d ", mat [x][y]);
        }
        printf("\n");
    }
    
}