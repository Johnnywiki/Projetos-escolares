#include<stdio.h>

int Soma(int a, int b){
    return (a+b);
}
int Multiplicacao(int a, int b){
    return (a*b);
}
float Divisao(int a, int b){
    return ((float)a/(float)b);
}
int main(){
    int a, b;
    float result;
    char c;
    printf("-------Bem Vindo à Calculadora---------:\n");
    printf("-------Escolha uma opção:---------------\n");
    printf("a) Soma   b) Multiplicação    c) Divisão   d) Subtração\n");
    
    scanf("%c", &c);
    
    printf("Digite um valor \n");
    scanf("%d", &a);
    printf("Digite um valor \n");
    scanf("%d", &b);


    switch (c){
        case 'a':
            result = Soma(a,b);
            printf("O resultado da Soma é %f\n", result);

            break;
        case 'b':
            result = Multiplicacao(a,b);
            printf("O resultado da Multiplicação é %f\n", result);
            break;
        case 'c':
            result = Divisao(a,b);
            printf("O resultado da Divisão é %f\n", result);
            break;
        
        default:
            printf("valor default");
            break;
    }