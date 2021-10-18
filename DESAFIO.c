#include<stdio.h>

int main(){ //inicio
    //declaração de variáveis
    float pista, voltas, abast, comb;
    float conta1, conta2, conta3, conta4, conta5, conta6;

    printf("Digite o comprimento da pista em M:\n");
    scanf("%f", &pista);

    printf("Digite o numero total de voltas a serem percorridas:\n");
    scanf("%f", &voltas);

    printf("Digite o numero de abastecimentos desejados:\n");
    scanf("%f", &abast);

        printf("Digite o consumo de combustivel do carro em Km/l:\n");
    scanf("%f", &comb);
 
    conta1 = pista/1000; // transforma em km
    conta3 = conta1*voltas; // tamanho total do percurso
    conta4 = comb*abast; // quanto o carro vai percorrer
    conta2 = conta1/abast; // tamanho igual entre os abastecimentos
    conta5 = conta1*voltas/conta4; // quantos km o carro passou do posto passado/ LOGO, O ULTIMO POSTO O QUAL PRECISAVA ABASTECER
    conta6 = conta1*voltas - conta5; // em qual km será o abastecimento obrigatorio

 
    printf("Até o primeiro abastecimento serão necessarios %f," conta2, "litros de combustivel"); // se o carro não desabastecer até ser necessario reabastecer
    printf("Até o primeiro abastecimento serão necessarios %f," conta6, "litros de combustivel"); // ultima parada possivel para reabastecer
    };
    
    // Prof, as contas foram até foram, mas as variaveis não estão sendo declaradas? Não consegui entender muito bem o porque. ENFIM, deve ser mais ou menos isso :)