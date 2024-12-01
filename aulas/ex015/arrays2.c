#include <stdio.h>

int main(){

    int i [5] = {10, 20, 30, 40, 50};
    int x;
    float m = 0;

    for (x = 0; x < 5; x++)
    {
        m += i[x];
    }
    
    printf("%f", m/5);
}