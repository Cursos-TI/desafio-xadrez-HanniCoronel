#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato Movimentação das Peças
printf("Movimentos de Peças de Xadrez\n");

    // Movimento da Torre (5 casas para a Direita) usando FOR
    int casaTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casaTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na Diagonal: Cima + Direita) usando WHILE
    int casaBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casaBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha (8 casas para a Esquerda) usando DO-WHILE
    int casaRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casaRainha);


    // Nível Aventureiro - Movimentação do Cavalo
     //Movimento do Cavalo (2 casas para Cima e 1 para Direita) usando LoopFOR
    int movimentoCavalo = 1;
    printf("\nMovimento do Cavalo:\n");

    while (movimentoCavalo--){

        for(int i = 0; i < 2; i++){ //vai imprimir 2 vezes "Cima"
            printf("Cima\n");
        }

        printf("Direita\n"); //imprime 1 vez "Direita"
    }





  
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
