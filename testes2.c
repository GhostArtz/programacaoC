#include <stdio.h>

int main(){

    // iniciando o tabuleiro
    int tabuleiro[10][10];

    for(int i = 0; i < 10; i ++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // criando os navios
    int naviohorizontal[3] = {3, 3, 3};
    int naviovertical[3] = {3, 3, 3};

    // coordenadas do navio horizontal
    int linhahorizontal = 6;
    int colunahorizontal = 1;

    // coordenadas do navio vertical
    int linhavertical = 2;
    int colunavertical = 5;

    // colocando o navio no tabuleiro
    // horizontal
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            tabuleiro[linhahorizontal][colunahorizontal + i] = naviohorizontal[i];
        }
    }

    // vertical
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            tabuleiro[linhavertical + i][colunavertical] = naviovertical[i];
        }
    }

    // EXIBINDO O TABULEIRO

    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    for(int i = 0; i < 10; i++){
        printf(" %c", linha[i]);
    }

    printf("\n");

    for(int j = 0; j < 10; j++){
        printf("%2d ", j + 1);

        for(int k = 0; k < 10; k++){
            printf("%d ", tabuleiro[j][k]);
        }
        printf("\n");
    }

    return 0;

}