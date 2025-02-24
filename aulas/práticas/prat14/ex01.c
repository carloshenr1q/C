#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4];
    int valor;
    int i, j;

    for(i = 1; i < 4; i++){
        for(j = 1; j < 4; j++){
            printf("Insira o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Insira um valor armazenado na matriz: ");
    scanf("%d", &valor);

    for(i = 1; i < 4; i++){
        for(j = 1; j < 4; j++){
            if(matriz[i][j] == valor){
                printf("O valor %d está na posição [%d][%d]\n", valor, i, j);
                return 0;
            }
        }
    }
        printf("O valor %d não está na matriz\n", valor);
        return 0;
}