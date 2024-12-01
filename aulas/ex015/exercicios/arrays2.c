#include <stdio.h>

int main(){
    float num [5], num2 [5], resul [5];
    int y;

for ( y = 0; y < 2; y++)
{
    printf("Digite o número %d do primeiro array: ", y + 1);
    scanf("%f", &num[y]);
}
for ( y = 0; y < 2; y++)
{
    printf("Digite o número %d do segundo array: ", y + 1);
    scanf("%f", &num2[y]);
}

resul[0] = num[0] + num2[0];
resul[1] = num[1] + num2[1];

printf("Array resultante da soma: %.3f %.3f\n\a", resul[0], resul[1]);

}