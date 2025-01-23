/* Fulano possui um cronômetro que consegue marcar o tempo apenas em segundos. Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em segundos, e diga quantas horas, minutos e segundos se passaram a partir do tempo cronometrado. */

#include <stdio.h>
#include <stdlib.h>

int main (){
    int seg_int, rest_seg_int;
    float seg, final_seg, rest_seg, rest_min, hor;

    printf("Digite o tempo (segundos): ");
    scanf("%f", &seg);
    printf("\n");

    hor = seg / 3600;

    seg_int = seg;

    rest_seg = seg_int % 3600;
    rest_min = rest_seg / 60;

    rest_seg_int = rest_seg;

    final_seg = rest_seg_int % 60;

    

    printf("%.0f hora(s), %.1f minuto(s) e %.0f segundo(s).", hor, rest_min, final_seg);

    return 0;
}