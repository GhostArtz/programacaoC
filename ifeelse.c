#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));

    int escolha, resultado;
    int numjogador, numcomputador;

     numcomputador = rand() % 100 + 1;

    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("1 - Maior\n");
    printf("2 - Menor\n");
    printf("3 - Igual\n");
    printf("4 - Sair\n");
    
    printf("Escolha a comparação: ");
    scanf("%d", &escolha);
    printf("\n");

    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numjogador);
    printf("\n");

    if (numjogador >= 1 && numjogador <= 100){

    switch(escolha){
        case 1:
        printf("Você escolheu a opção Maior!\n");
        resultado = numjogador > numcomputador ? 1 : 0;
        break;

        case 2:
        printf("Você escolheu a opção Menor!\n");
        resultado = numjogador < numcomputador ? 1 : 0;
        break;

        case 3:
        printf("Você escolheu a opção Igual!\n");
        resultado = numjogador == numcomputador ? 1 : 0;
        break;

        case 4:
        printf("Saindo...\n");
        return 0;

        default:
        printf("Opção invalida!\n");
        return 0;
    }
    printf("\n");

    printf("O número do computador é: %d", numcomputador);
    printf("\n");

    if(resultado == 1){
        printf("Parabéns, você venceu!\n");
    } else {
        printf("Você perdeu!\n");
    }

} else {
    printf("Número fora do escopo. Tente novamente!\n");
}

    // int escolhajogador;
    // int escolhacomputador;

    // printf("JOGO DE JOKENPÔ\n");
    // printf("1 - Pedra\n");
    // printf("2 - Papel\n");
    // printf("3 - Tesoura\n");
    // printf("Escolha: \n");
    // scanf("%d", &escolhajogador);

    // srand(time(0));
    // escolhacomputador = rand() % 3 +1;

    // switch(escolhajogador){
    //     case 1:
    //     printf("Jogador: Pedra | ");
    //     break; 

    //     case 2:
    //     printf("Jogador: Papel | ");
    //     break;

    //     case 3:
    //     printf("Jogador: Tesoura | ");
    //     break;

    //     default:
    //     printf("Opção invalida!\n");
    //     return 0;
    // }

    // switch(escolhacomputador){
    //     case 1:
    //     printf("Computador: Pedra\n");
    //     break; 

    //     case 2:
    //     printf("Computador: Papel\n");
    //     break;

    //     case 3:
    //     printf("Computador: Tesoura\n");
    //     break;
    // }

    // if (escolhajogador == escolhacomputador){
    //     printf("### O Jogo empatou! ###\n");
    // } else if ((escolhajogador == 1 && escolhacomputador == 3) || 
    //             (escolhajogador == 2 && escolhacomputador == 1) ||
    //             (escolhajogador == 3 && escolhacomputador == 2)){
    //     printf("### Você venceu! ###\n");
    // } else {
    //     printf("### Você perdeu! ####\n");
    // }
    printf("\n");
    return 0;
}