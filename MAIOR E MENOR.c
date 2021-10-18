/*exercicio 2*/
#include <stdio.h>

int main(){
    
    int cont, valor, multiplica;
    int cont2 = 1;

    while (cont2 == 1) {
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &valor);

        if(valor>=1 && valor <=10){
            for(cont=1; cont<=10; cont++){
                multiplica = valor * cont;
                printf("%d x %d = %d \n",valor,cont,multiplica);
            }

        } else {
            printf("Valor informado não é válido.");
            cont2=0;
        }
    }

    return 0;
}

/*exercicio 5*/
#include <stdio.h>

int main(){
    
    int cont=0, idade, menorIdade=1000, maiorIdade=0;
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
            media = media +idade;
            cont++;
        }

    } while (idade > 0);

    media = media / cont;
    printf("A menor idade foi: %d. A maior idade foi: %d. A media de idades foi %f",menorIdade,maiorIdade,media);

    return 0;
}