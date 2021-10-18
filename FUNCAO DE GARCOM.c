#include<stdio.h>

float gorjeta(float x, float y){
    scanf("%f", &x);
    y = x*1.10;
    return y;
}

float main(){
    float gorjetaa, garcom, gorjetax;
    printf("Porfavor, insira o preço do seu gasto aqui\n");
    scanf("%f", &gorjetaa);
    gorjetax = gorjeta (gorjetaa, 1.10);
    printf("O valor a ser pago será %f", gorjetax);
}
