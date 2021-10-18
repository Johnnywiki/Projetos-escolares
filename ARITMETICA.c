#include<stdio.h>

int main(){ //inicio
    //declaração de variáveis
    float num1, num2, num3, num4;
    double result;
    double resF;

    printf("Digite um valor:\n");
    scanf("%f", &num1);

    printf("Digite um valor:\n");
    scanf("%f", &num2);

    printf("Digite um valor:\n");
    scanf("%f", &num3);

    printf("Digite um valor:\n");
    scanf("%f", &num4);

    result = num1+num2+num3+num4;
    resF = result / 4;
    printf("O resultado é:" "%f", resF); 
}
