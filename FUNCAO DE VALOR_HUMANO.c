#include<stdio.h>

float desconto(float x, float y){
    scanf("%f", &x);
    y = x*1.10 - x*0.8 - 100.0;
    /*z = x*0.8;
    w = x-100.0; */
    return y;
}

float main(){
    float salario, descontos, deducao;
    printf("Porfavor, insira o seu valor :(\n");
    scanf("%f", &salario);
    deducao = desconto(salario, );
    printf("O seu valor, descontado, sera respectivamente para INSS,FGTS e PDS: %f", deducao);
}
