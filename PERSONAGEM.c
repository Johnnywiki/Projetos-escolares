#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    char A, B;
    int vidaA, vidaB, ataqueA, ataqueB, defesaA, defesaB, batalha1, batalha2;

    vidaA = (rand() % 500) + 500;
    vidaB = (rand() % 500) + 500;

    ataqueA = (rand() % 50) + 50;
    ataqueB = (rand() % 50) + 50;

    defesaA = (rand() % 101);
    defesaB = (rand() % 101);

    printf("Escolha entre o personagem A e B:\n");
    scanf("%c", &A, &B);
    if ("%c" != A || B){
        printf("Não existe outro personagem!");
        return 0;
    }
    

    batalha1 = vidaA - (ataqueB - defesaA);
    batalha2 = vidaB - (ataqueA - defesaB);

    if (vidaA > vidaB){
        printf("O jogador A saca sua espada e dilacera a garganta do jogador B!");
       }   
        else if(vidaA < vidaB){
        printf("Jogador B saca sua espada e arranca a cabeça do jogador A fora!");
        }

        else{
        printf("Acidentalmente, ambos se apunhalaram e tiveram um final horrível..."); 
    }
    
    



}

// Feito por: Johnny, Ayslan, Gabriel B., Leonardo B., Miguel A.