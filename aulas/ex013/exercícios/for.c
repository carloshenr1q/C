#include <stdio.h>

int main(){

    for ( int num = 1; num <=20; num++)
    {
        if (num % 2 == 0)
        {
            printf("%d é par.\n", num);
        }
        else {
            printf("%d é impar.\n", num);
        }
    }
    return 0;
}