#include <stdio.h>
#include <stdlib.h>

int main(){
    int a1, a2, result;

    for (a1 = 1; a1 < 11; a1++)
    {
        for (a2 = 1; a2 < 11; a2++)
        {
            result = a1 * a2;
            printf("%d x %d = %d\n", a1, a2, result);
        }
        printf("\n");
    }
    return 0;
}