#include "poligonos.h"

float calcPerimentroTriangulo(float a, float b, float c){

    return a + b + c;

}

float calcPerimentroRetangulo(float b, float a){

    return 2*b + 2*a;

}

float calcPerimentroCirculo(float r){

    return 2 * PI * r;

}

float calcAreaTriangulo(float b, float a){

    return (b * a) / 2;

}

float calcAreaRetangulo(float b, float a){

    return b * a;

}

float calcAreaCirculo(float r){

    2 * PI * r * r;

}