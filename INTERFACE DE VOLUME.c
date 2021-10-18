#include<stdio.h>
int main(){
    float varA, varB, varC, result, PI;
    int opcao;
    PI = 3.1415;
    printf("--------------------------\n");
    printf("Bem vindo a calculadora:\n");
    printf("--------------------------\n");
    printf("Escolha uma opção:\n");
    printf("1) para volume da caixa:\n");
    printf("2) para volume da esfera:\n");
    printf("3) para volume do cilindro:\n");
    printf("4) para divisão do cone:\n");
    printf("--------------------------\n");

    scanf("%d", &opcao);

    if(opcao==1){
    printf("Digite tres números:\n");
    scanf("%f", &varA);
    scanf("%f", &varB);
    scanf("%f", &varC);
    printf("--------------------------\n");
    result = varA * varB * varC;
    printf("O valor da area é %f", result);

    }else if(opcao==2){
    printf("Digite o raio:\n");
    scanf("%f", &varA);
    printf("--------------------------\n");
    result = (varA*varA)*4/3*PI;
    printf("O valor do volume do raio é %f", result);

    }else if(opcao==3){
    printf("Digite H (primeiro valor) e R (Segundo valor):\n");
    scanf("%f", &varA);
    scanf("%f", &varB);
    printf("--------------------------\n");
    result = PI*(varA*varA)*varB;
    printf("O valor do volume do cilindro é %f:", result);


    }else if(opcao==4){
    printf("Digite H (primeiro valor) e R (Segundo valor):\n");
    scanf("%f", &varA);
    scanf("%f", &varB);
    printf("--------------------------\n");
    result = (PI*(varA*varA)*varB)*1/3;
    printf("O valor do volume do cone é %f:", result);


    }else{
    printf("Opção inválida. Tente novamente!");
    }

}