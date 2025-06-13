#include <stdio.h>

int main() {
    // Matriz 5x5 simulando o tabuleiro
    int tabuleiro[5][5] = {0};

    // Posição inicial dos navios
    int linha_navio_vertical = 0;
    int coluna_navio_vertical = 2;

    int linha_navio_horizontal = 3;
    int coluna_navio_horizontal = 1;

    // Tamanho dos navios (3 casas)
    int tamanho_navio = 3;

    // Posiciona navio vertical
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = 1;
    }

    // Posiciona navio horizontal
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = 2;
    }

    // Exibe as coordenadas dos navios
    printf("=== Coordenadas dos Navios ===\n");

    printf("\nNavio Vertical (código 1):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    printf("\nNavio Horizontal (código 2):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 2) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}
