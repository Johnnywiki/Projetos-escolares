#include<stdio.h>

int main(){ //inicio
    //declaração de variáveis
    float num1, num2, num3;
    printf("Digite um valor para decidirmos qual o maior entre eles\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    if (num1>num2>num3)
    {
        printf("O maior numero foi...: %f", num1);
        return 0;
        }
        else if (num2> num1>num3)
        {
        printf("O maior numero foi...: %f", num2);
        return 0;
        }
        else{
            printf("O maior numero foi...:%f", num3);
        }
        }

