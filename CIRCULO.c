#include<stdio.h>

int main(){ //inicio
    //declaração de variáveis
    float num1, area; 
    

    printf("Digite um valor para o raio:\n");
    scanf("%f", &num1);

    area = 3.1415*(num1*num1);
    printf("O resultado é, para a area em cm é, :" "%f", area); 
}
