#include <stdio.h>

int main() {

    // Tabuleiro 10x10
    int tabuleiro[10][10];

    // Inicializando tudo com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navios (tamanho 3)
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    // Coordenadas iniciais
    int linha_h = 2, coluna_h = 4; // horizontal
    int linha_v = 5, coluna_v = 1; // vertical

    // Posicionando navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    // Posicionando navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }

    // Exibindo o tabuleiro
    printf("   A B C D E F G H I J\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // número da linha

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}