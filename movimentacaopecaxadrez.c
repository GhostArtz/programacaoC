#include <stdio.h>

void movTorre(int torre){
    if(torre <= 0){
        return;
    }

    for(int i = 0; i < 1; i++){
        printf("Direita\n");
    }

    movTorre(torre - 1);
}

void movBispo(int bispo){
    if(bispo <= 0){
        return;
    }

    int i = 0;
    while(i < 1){ // vertical
        
        int j = 0;
        while(j < 1){ // horizontal
            printf("Direita\n");
            j++;
        }

        printf("Cima\n");
        i++;
    }

    movBispo(bispo - 1);
}

void movRainha(int rainha){
    if(rainha <= 0){
        return;
    }

    int i = 0;
    do{
        printf("Esquerda\n");
        i++;
    } while(i < 1);

    movRainha(rainha - 1);
}

int main(){

    int casastorre, casasbispo, casasrainha;

    printf("======= MOVIMENTAÇÃO DE PEÇAS DE XADREZ ===========\n");
    printf("Digite quantas casas pra direita você quer andar com a torre: ");
    scanf("%d", &casastorre);
    printf("\n");
    movTorre(casastorre);

    printf("=======\n");

    printf("Digite quantas casas na diagonal para cima e à direita você quer andar com o bispo: ");
    scanf("%d", &casasbispo);
    printf("\n");
    movBispo(casasbispo);

    printf("=======\n");

    printf("Digite quantas casas para esquerda você quer andar com a rainha: ");
    scanf("%d", &casasrainha);
    printf("\n");
    movRainha(casasrainha);

    printf("=======\n");

    printf("Movimentação do cavalo:\n\n");

    int etapas = 3; // 2 cima + 1 direita

    for(int i = 0; i < etapas; i++){

        for(int j = 0; j < 1; j++){

            if(i < 2){
                printf("Cima\n");
                continue; // pula pro próximo i
            }

            if(i == 2){
                printf("Direita\n");
                break; // sai do loop interno
            }
        }
    }

    return 0;

}