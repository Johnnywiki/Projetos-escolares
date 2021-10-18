#include <stdio.h>

float m(int valores, int n){
    float media;

    media =  valores/n;

    return media;
}

int main(){
    
    int cont=0, idade, menorIdade=1000, maiorIdade=0, soma_idades=0;
    float media=0;

    do { 
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade<menorIdade  && idade !=0){
            menorIdade=idade;
        }
        if(idade>=maiorIdade){
            maiorIdade=idade;
        }
        if (idade>0){
            soma_idades = soma_idades +idade;
            cont++;
        }

    } while (idade > 0);

    media = m(soma_idades,cont);

    printf("A menor idade foi: %d. A maior idade foi: %d. A media de idades foi %f",menorIdade,maiorIdade,media);

    return 0;
}
