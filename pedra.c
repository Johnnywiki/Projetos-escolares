#include <stdio.h>
#include <stdlib.h>

int main(){

    int player1 = (rand() % 3) + 1; // 1,2,3
    int player2 = 0;

    printf("--------------------------\n");
    printf("Bem vindo a PEDRA VS PAPEL VS TESOURA!!:\n"); 
    printf("--------------------------\n");
    printf("Escolha uma opção:\n");
    printf("1) para Pedra:\n");
    printf("2) para Papel:\n");
    printf("3) para Tesoura:\n");
    printf("--------------------------\n");

    scanf("%d", &player2);
    printf(" foi sua esoclha, então...\n");

    /*pedra ganha de tesoura 1 > 3
    papel ganha de pedra 2 > 1
    tesoura ganha de papel 3 > 2*/

    if((player1==1 && player2==3) || (player1==2 && player2==1) ||(player1==3 && player2==2)){
        printf("O vencedor desta vez foi...\n");
        printf("--------------------------\n");
        printf("...o computador ;) \n");
        printf("RESULTADO FINAL: %d, %d\n", player1, player2);
    }else if((player2==1 && player1==3) || (player2==2 && player1==1) ||(player2==3 && player1==2)){
        printf("O vencedor desta vez foi...\n");
        printf("--------------------------\n");
        printf("...você ;) \n");
        printf("RESULTADO FINAL: %d, %d\n", player1 ("foi a escolha do computador"), player2 ("foi sua escolha"));
    }else{
        printf("Parece que vocês empataram! sortudos..., %d, %d\n", player1, player2);
    }
}
