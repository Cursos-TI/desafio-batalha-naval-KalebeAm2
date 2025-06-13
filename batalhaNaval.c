#include <stdio.h>

void exibirMatriz(int matriz[5][5], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Matriz do Cone (5x5)
    int cone[5][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            cone[i][j] = 1;
        }
    }

    // Matriz da Cruz (5x5)
    int cruz[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        cruz[i][2] = 1; // coluna central
        cruz[2][i] = 1; // linha central
    }

    // Matriz do Octaedro (5x5)
    int octaedro[5][5] = {0};
    for (int i = 0; i < 3; i++) {
        octaedro[i][2] = 1;
    }
    octaedro[1][1] = 1;
    octaedro[1][3] = 1;

    // Exibir padrões
    printf("=== Habilidade: CONE ===\n");
    exibirMatriz(cone, 5, 5);

    printf("\n=== Habilidade: CRUZ ===\n");
    exibirMatriz(cruz, 5, 5);

    printf("\n=== Habilidade: OCTAEDRO ===\n");
    exibirMatriz(octaedro, 5, 5);

    return 0;
}
