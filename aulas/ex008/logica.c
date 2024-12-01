#include <stdio.h>

int main(){
    float nota; 

    printf("Digite sua nota: \a");
    scanf("%f", &nota);

    if (nota >= 4.5 && nota < 7)
    {
        printf("Você tem direito a uma segunda chance!");
    }
    
}