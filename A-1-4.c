#include<stdio.h>

int main(){ //inicio
    //declaração de variáveis
    float num1, num2, num3, media;

    printf("Porfavor informe sua nota1:\n");
    scanf("%f", &num1);

    printf("Porfavor informe sua nota2:\n");
    scanf("%f", &num2);

    media = (num1+num2)/2;
    if (media>5 && (num1||num2 >3))
    {
     printf("APROVADO INSTANTANEAMENTE");}
     else{
        printf("Porfavor informe sua nota3:\n");
        scanf("%f", &num3);
            if (num1>num2){
                media = (num3+num1)/2;
                if (media<5)
                printf("Reprovado %f", media);
                else
                printf("Aprovado %f", media);
            }
        else if (num1<num2){
             media = (num3+num2)/2;
                if (media<5)
                printf("Reprovado %f", media);
                else
                printf("Aprovado %f", media);
            }
        }     
    
    }

