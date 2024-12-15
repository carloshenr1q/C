#include <stdio.h>

float calculo(float num1, float num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    float x, y, z;
    printf("Insira um valor: \n");
    scanf("%f", &x);
    printf("Insira outro valor: \n");
    scanf("%f", &y);

    z = calculo(x, y);
    printf("O maior valor é %f", z);

}