#include <stdio.h>
#include "conversao.h"

float CelFahr (float num1, float num2){
   return num2 = ((num1 * 9/5) + 32);
}

float CelKel (float num1, float num2){
    return num2 = (num1 + 273.15);
}

float FahrCel (float num1, float num2){
    return num2 = (num1 - 32) * 5/9;
}

float FahrKel (float num1, float num2){
    return num2 = ((num1 - 32) * 5/9) + 273.15;
}

float KelCel (float num1, float num2){
    return num2 = num1 - 273.15;
}

float KelFahr(float num1, float num2){
    return num2 = (num1 - 273.15) * 9/5 + 32;
}