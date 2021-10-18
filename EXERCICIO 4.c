#include<stdio.h>

int main(){ //inicio
    //declaração de variáveis
    float num1, num2, num3, num4, num5, result;
    printf("Digite um valor para dividir de binario para decimal (1caractere):\n");
    scanf("%f", &num1);

    printf("Digite um valor para dividir de binario para decimal (2caractere):\n");
    scanf("%f", &num2);

    printf("Digite um valor para dividir de binario para decimal (3caractere):\n");
    scanf("%f", &num3);

    printf("Digite um valor para dividir de binario para decimal (4caractere):\n");
    scanf("%f", &num4);

    printf("Digite um valor para dividir de binario para decimal (5caractere):\n");
    scanf("%f", &num5);
    num1= num1*(2*2*2*2);
    num2= num2*(2*2*2);
    num3= num3*(2*2);
    num4= num4*2;
    num5= num5;
    result= num1+num2+num3+num4+num5;
    printf("Seu numero convertido se tornou %f", result);
}
