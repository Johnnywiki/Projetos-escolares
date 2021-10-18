#include<stdio.h>

int main(){

    float varA, varB, result;
    int opcao;

        printf("Escolha uma opção:\n");
        printf("Digite 1 para adicao:\n");
        printf("Digite 2 para subtracao:\n");
        printf("Digite 3 para multiplicacao:\n");
        printf("Digite 4 para divisao:\n");
        printf("-----------------------------------\n");

        scanf("%d", &opcao);

        printf("Digite dois numeros:\n");
        scanf("%f", &varA);
        scanf("%f", &varB);
        printf("-----------------------------------\n");

        if(opcao==1){
            result = varA+varB;
            printf("O valor da adicao de %f + %f = %f \n", varA, varB, result);
        }

        else if(opcao==2){
            result = varA-varB;
            printf("O valor da subtracao de %f - %f = %f \n", varA, varB, result);
        }

        else if(opcao==3){
            result = varA*varB;
            printf("O valor da multiplicacao de %f * %f = %f \n", varA, varB, result);
        }

        else if(opcao==4){

            if(varB!=0){
                result = varA/varB;
                printf("O valor da divisao de %f / %f = %f \n", varA, varB, result);
                
            }
            else{
                printf("Nao existe divisao por zero seu bobinho!\n");
            }
        }

        else{
            printf("Esta não é uma opçao viavel...");
        }

    return 0;

}