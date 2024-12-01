#include <stdio.h>

int main(){
    int mat [3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int x, y, result;

    printf("Digite os valores da matriz 3x3\n\n");
    
    for ( x = 0; x < 3; x++)
    {  
        for (y = 0; y < 3; y++)
        {
            printf("Valor da linha, depois coluna e assim respectivamente: \n");
            scanf("%d", &mat [x][y]);
        }
    }
    printf("Fazendo a soma: \n\n");

    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
           result = x + y;
        }
        
    }
}