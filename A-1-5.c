#include<stdio.h>

int main(void){
    float volume, peso,  altura, largura, comprimento, dimensao;
    printf("Vamos checar sua bagagem, que tal?\n");
    printf("---------------------------------------\n");
    printf("Informe-me a quantidade de volumes\n");
    scanf("%f", &volume); // por alguma razao, nao vai com 1 input, precisa de 2???
    if (volume>1)
    {
        printf("Regra desrespeitada! volume não pode exceder 1!");
        return 0;
    }
    
    printf("Informe-me o peso\n");
    scanf("%f", &peso);
    if (peso>15)
    {
        printf("Regra desrespeitada! peso não pode exceder 15!!\n");
    }

    printf("Informe-me a altura\n");
    scanf("%f", &altura);

    printf("Informe-me a largura\n");
    scanf("%f", &largura);

    printf("Informe-me o comprimento\n");
    scanf("%f", &comprimento);

    dimensao = altura+comprimento+largura;
    if (dimensao>158)
    {
        printf("Regra desrespeitada! dimensao excedente de 158!!");
    }
    


}