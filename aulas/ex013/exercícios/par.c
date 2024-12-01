#include <stdio.h>

int main (){
    int b = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i & 2 == 0)
        {
            b += i;
        }
        printf("%d", i);
    }
    
}