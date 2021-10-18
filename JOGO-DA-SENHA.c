#include<stdio.h>

int main(){

    float senha, tentativas, chute;
    tentativas = 4;
    printf("Digite um valor para sua senha ultra-mega-secreta de 1 a 100 UwU:\n");
    scanf("%f", &senha);
    if (senha >=100 || senha <=1)
    {
        printf("isso no pode");
        return 0;
    }
    

    printf("Agora passe pro jogador 2. É a vez dele de advinhar:\n");
    printf("Pufavo jogador 2, acerte senao voce vai perder!! e isso nao e o intuito grrrrr\n");
    scanf("%f", &chute);
    if (chute >=100 || chute <=1)
    {
       printf("isso no pode");
        return 0;
    }
    

    while (tentativas != 0){ if (chute == senha){
        printf("Mega-uauzerss! voce ganhou do jogador 1, jogador 2!! pode comemorar como um cara descolado\n");
        tentativas--;
        return 0;}
        else if (chute == senha - 1){
            printf("VOCE ESTA NA AREA HOT MEU PARCEIROOOO\n");
            scanf("%f", &chute);
            tentativas--;}

        else if (chute == senha + 1){
            printf("VOCE ESTA NA AREA HOT MEU PARCEIROOOO\n");
            scanf("%f", &chute);
            tentativas--;}

        else if (chute != senha){
            printf("Amigo, voce esta nao perto, chuta melhor\n");
            scanf("%f", &chute);
            tentativas--;}
    }
    if (tentativas == 0)
    {
    printf("Acabaram suas chances amigo, game over\n");
    return 0;
    }
} 
