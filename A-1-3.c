#include<stdio.h>

int main(void){
    float ladoa, ladob, ladoc;
    printf("Me de os lados de seu triangulo e direi sua composicao:\n");
    printf("lado 1:\n");
    scanf("%f", &ladoa);

    printf("lado 2:\n");
    scanf("%f", &ladob);

    printf("lado 3:\n");
    scanf("%f", &ladoc);

    if(ladoa != ladob != ladoc){
        printf("TRIANGULO ESCALENO!!!!!");
    }
    else
        if ((ladoa = ladob) != ladoc && (ladob = ladoc) != ladoa && (ladoa = ladoc != ladob))
        {
         printf("TRINAGULO ISOSCELES!!!");
        
        }
    else 
        if (ladoa = ladob = ladoc)
        {
        printf("TRIANGULO EQUILATERO!!");
        }
            
        
    }
