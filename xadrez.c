#include <stdio.h>

int main() {
    printf("=== DESAFIO DE XADREZ - MATECHECK ===\n\n");
    
    // Constantes (usando variáveis com valores fixos)
    const char* cima = "Cima";
    const char* baixo = "Baixo";
    const char* esquerda = "Esquerda";
    const char* direita = "Direita";
    
    // Quantidade de movimentos de cada peça
    int movimentos_bispo = 5;    // 5 casas na diagonal superior direita
    int movimentos_torre = 5;    // 5 casas para a direita
    int movimentos_rainha = 8;   // 8 casas para a esquerda
    
    // Movimentação do Bispo - 5 casas na diagonal superior direita
    printf("Movimentacao do Bispo (%d casas na diagonal superior direita):\n", movimentos_bispo);
    
    // Usando estrutura for para o bispo
    for(int i = 1; i <= movimentos_bispo; i++) {
        printf("Movimento %d: ", i);
        printf("%s + %s\n", cima, direita);
    }
    printf("\n");
    
    // Movimentação da Torre - 5 casas para a direita
    printf("Movimentacao da Torre (%d casas para a direita):\n", movimentos_torre);
    
    // Usando estrutura while para a torre
    int movimento_torre = 1;
    while(movimento_torre <= movimentos_torre) {
        printf("Movimento %d: %s\n", movimento_torre, direita);
        movimento_torre++;
    }
    printf("\n");
    
    // Movimentação da Rainha - 8 casas para a esquerda
    printf("Movimentacao da Rainha (%d casas para a esquerda):\n", movimentos_rainha);
    
    // Usando estrutura do-while para a rainha
    int movimento_rainha = 1;
    do {
        printf("Movimento %d: %s\n", movimento_rainha, esquerda);
        movimento_rainha++;
    } while(movimento_rainha <= movimentos_rainha);
    
    printf("\n=== FIM DA SIMULACAO ===\n");
    
    return 0;
}