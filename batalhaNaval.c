#include <stdio.h>

int main() {
    // Tabuleiro 10x10 inicializado com zeros
    int tabuleiro[10][10] = {0};

    // Tamanho padrão dos navios
    int tamanho = 4;

    // 1. Navio Horizontal na linha 2
    int linhaH = 2;
    int colunaH = 3;
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // 2. Navio Vertical na coluna 5
    int linhaV = 4;
    int colunaV = 5;
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // 3. Navio Diagonal Principal (↘)
    int linhaD1 = 0;
    int colunaD1 = 0;
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }

    // 4. Navio Diagonal Secundária (↙)
    int linhaD2 = 0;
    int colunaD2 = 9;
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
    }

    // Exibir tabuleiro completo
    printf("=== TABULEIRO 10x10 ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
