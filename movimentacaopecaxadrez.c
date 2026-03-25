#include <stdio.h>

int main(){

    int casastorre, casasbispo, casasrainha;

    printf("======= MOVIMENTAÇÃO DE PEÇAS DE XADREZ ===========\n");
    printf("Digite quantas casas pra direita você quer andar com a torre: ");
    scanf("%d", &casastorre);
    printf("\n");
    for(int i = 0; i < casastorre; i++){
        printf("Direita\n");
    }

    printf("=======\n");

    printf("Digite quantas casas na diagonal para cima e à direita você quer andar com o bispo: ");
    scanf("%d", &casasbispo);
    printf("\n");
    int b = 0;
    while(b < casasbispo){
        b++;
        printf("Cima, Direita\n");
    }

    printf("=======\n");

    printf("Digite quantas casas para esquerda você quer andar com a rainha: ");
    scanf("%d", &casasrainha);
    printf("\n");
    int r = 0;
    do{
        r++;
        printf("Esquerda\n");
    } while(r < casasrainha);

    return 0;

}