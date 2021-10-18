#include<stdio.h>

int main(){ //inicio
    //declaração de variáveis
    float num1, num2, area, perimetro;
    

    printf("Digite um valor para a base:\n");
    scanf("%f", &num1);

    printf("Digite um valor para a altura:\n");
    scanf("%f", &num2);

    area = num1*num2;
    perimetro = 2*(num1+num2);
    printf("O resultado é, para a area, :" "%f", area);
    printf("O resultado é, para o perimetro, :" "%f", perimetro); 
}
