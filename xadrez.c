#include <stdio.h>

// Constantes para direções
const char* cima = "Cima";
const char* baixo = "Baixo";
const char* esquerda = "Esquerda";
const char* direita = "Direita";

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    // Caso base: quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    printf("%s\n", direita); // Movimento para a direita
    moverTorre(casas - 1);   // Chamada recursiva
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casas) {
    // Caso base: quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    printf("%s + %s\n", cima, direita); // Movimento na diagonal
    moverBispo(casas - 1);              // Chamada recursiva
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    // Caso base: quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    printf("%s\n", esquerda); // Movimento para a esquerda
    moverRainha(casas - 1);   // Chamada recursiva
}

// Função para movimentação do Cavalo usando loops complexos
void moverCavalo() {
    int movimento_vertical = 1;
    
    // Loop externo para controle do movimento vertical (2 casas para cima)
    while (movimento_vertical <= 2) {
        printf("%s\n", cima); // Movimento para cima
        
        // Loop interno para controle do movimento horizontal (1 casa para direita)
        // Executado apenas no segundo movimento vertical
        if (movimento_vertical == 2) {
            for (int movimento_horizontal = 1; movimento_horizontal <= 1; movimento_horizontal++) {
                printf("%s\n", direita); // Movimento para direita
                
                // Poderia usar break aqui, mas não é necessário pois o loop executa apenas uma vez
            }
        }
        
        movimento_vertical++;
    }
}

// Função alternativa para o Bispo usando loops aninhados
void moverBispoComLoopsAninhados(int casas) {
    // Loop externo para controle do movimento vertical
    for (int i = 1; i <= casas; i++) {
        // Loop interno para controle do movimento horizontal
        for (int j = 1; j <= 1; j++) {
            printf("%s + %s\n", cima, direita); // Movimento na diagonal
        }
    }
}

int main() {
    printf("=== DESAFIO DE XADREZ AVANÇADO - MATECHECK ===\n\n");
    
    // Quantidade de movimentos de cada peça
    int movimentos_bispo = 5;    // 5 casas na diagonal superior direita
    int movimentos_torre = 5;    // 5 casas para a direita
    int movimentos_rainha = 8;   // 8 casas para a esquerda
    
    // Movimentação da Torre usando recursividade
    printf("Movimentacao da Torre (%d casas para a direita) - RECURSIVO:\n", movimentos_torre);
    moverTorre(movimentos_torre);
    printf("\n");
    
    // Movimentação do Bispo usando recursividade
    printf("Movimentacao do Bispo (%d casas na diagonal superior direita) - RECURSIVO:\n", movimentos_bispo);
    moverBispo(movimentos_bispo);
    printf("\n");
    
    // Movimentação do Bispo usando loops aninhados (alternativa)
    printf("Movimentacao do Bispo (%d casas na diagonal superior direita) - LOOPS ANINHADOS:\n", movimentos_bispo);
    moverBispoComLoopsAninhados(movimentos_bispo);
    printf("\n");
    
    // Movimentação da Rainha usando recursividade
    printf("Movimentacao da Rainha (%d casas para a esquerda) - RECURSIVO:\n", movimentos_rainha);
    moverRainha(movimentos_rainha);
    printf("\n");
    
    // Movimentação do Cavalo usando loops complexos
    printf("Movimentacao do Cavalo (2 casas pra cima e 1 casa pra direita) - LOOPS COMPLEXOS:\n");
    moverCavalo();
    printf("\n");
    
    printf("=== FIM DO DESAFIO AVANÇADO ===\n");
    
    return 0;
}