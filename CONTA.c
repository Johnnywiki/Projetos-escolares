#include<stdio.h>

int main(){ //inicio
    //declaração de variáveis
    float num1, num2, result;
    printf("Digite um valor:\n");
    scanf("%f", &num1);

    printf("Digite um valor:\n");
    scanf("%f", &num2);

    printf("Digite a operação:\n");   
    scanf("%%" &oper);

    result = num1*oper*num2;
    printf("O resultado é: %f", result); 
    // Tem que fazer um If-else aqui Johnny! ( Ex: se o usuario colocar +, fazer uma adição, ETC...)   