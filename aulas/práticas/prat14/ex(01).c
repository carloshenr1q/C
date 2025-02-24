#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4];
    int valor;
    int i, j;

    for (i = 1; i < 4; i++)
    {
        for (j = 1; j < 4; j++)
        {
            printf("Digite a matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um valor guardado na matriz: ");
    scanf("%d", &valor);

    for (i = 1; i < 4; i++)
    {
        for (j = 1; j < 4; j++)
        {
            if (matriz[i][j] == valor)
            {
                printf("Valor %d está armazenado na matriz [%d][%d]\n", valor, i, j);
                return 0;
            }
        }
    }
    printf("Este valor não está armazenado na matriz.");
    return 0;
}