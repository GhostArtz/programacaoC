#include <stdio.h>
#include <string.h>

int main(){

    // DESAFIO NIVEL MESTRE

    // DECLARAÇÃO DE VARIÁVEIS

    //CARTA 1

   char estado1;
   char codigo1[4]; 
   char cidade1[50];
   unsigned long int populacao1;
   float area1;
   double pib1;
   int pturistico1;
   float superpoder1;

   //CARTA 2

   char estado2;
   char codigo2[4]; 
   char cidade2[50]; 
   unsigned long int populacao2; 
   float area2; 
   double pib2; 
   int pturistico2; 
   float superpoder2;

   // LEITURA DA CARTA 1

 
   printf("\n==================== CADASTRO DA CARTA 1 ==========================\n");
   printf("\n");
   printf("Digite o estado da carta 1 (EX: A): "); //estado
   scanf(" %c", &estado1);
   printf("\n");

   printf("Digite o codigo da carta 1 (EX: A01): "); //codigo
   scanf("%s", codigo1);
   printf("\n");

   printf("Digite o nome da cidade na carta 1 (EX: Rio de Janeiro): "); //nome da cidade
   getchar(); //limpei o buffer
   fgets(cidade1, 50, stdin);
   cidade1[strcspn(cidade1, "\n")] = '\0';
   printf("\n");

   printf("Digite a população da carta 1 (EX: 6748000): "); //população
   scanf("%lu", &populacao1);
   printf("\n");

   printf("Digite a área em km² da carta 1 (EX: 1200.25): "); //area em km²
   scanf("%f", &area1);
   printf("\n");

   printf("Digite o PIB da carta 1 (EX: 300.50): "); //pib
   scanf("%lf", &pib1);
   printf("\n");

   printf("Digite a quantia de pontos turisticos da carta 1 (EX: 30): "); //pontos turisticos
   scanf("%d", &pturistico1);
   printf("\n");

   // FIM DO CADASTRO DA CARTA 1


   // LEITURA DA CARTA 2

   printf("\n==================== CADASTRO DA CARTA 2 ==========================\n");
   printf("\n");
   printf("Digite o estado da carta 2 (EX: B): "); //estado
   scanf(" %c", &estado2);
   printf("\n");

   printf("Digite o codigo da carta 2 (EX: B01): "); //codigo
   scanf("%s", codigo2);
   printf("\n");

   printf("Digite o nome da cidade na carta 2 (EX: São Paulo): "); //nome da cidade
   getchar(); //limpei o buffer
   fgets(cidade2, 50, stdin);
   cidade2[strcspn(cidade2, "\n")] = '\0';
   printf("\n");

   printf("Digite a população da carta 2 (EX: 12325000): "); //população
   scanf("%lu", &populacao2);
   printf("\n");

   printf("Digite a área em km² da carta 2 (EX: 1521.11): "); //area em km²
   scanf("%f", &area2);
   printf("\n");

   printf("Digite o PIB da carta 2 (EX: 699.28): "); //pib
   scanf("%lf", &pib2);
   printf("\n");

   printf("Digite a quantia de pontos turisticos da carta 2 (EX: 50): "); //pontos turisticos
   scanf("%d", &pturistico2);
   printf("\n");
   printf("======================================================================\n");
   printf("\n");

   // FIM DO CADASTRO DA CARTA 2

   // CALCULO

   float dens_populacional1, dens_populacional2;
   dens_populacional1 = (populacao1/area1);
   dens_populacional2 = (populacao2/area2);

   double pib_capita1, pib_capita2;
   pib_capita1 = (pib1 * 1000000000) / populacao1;
   pib_capita2 = (pib2 * 1000000000) / populacao2;

   // ---------------

    superpoder1 = populacao1 + area1 + pib1 + pturistico1 + (1/dens_populacional1) + pib_capita1;
    superpoder2 = populacao2 + area2 + pib2 + pturistico2 + (1/dens_populacional2) + pib_capita2;

   // EXIBIÇÃO DAS CARTAS

    // printf("\n========================= VISUALIZAR CARTA 1 =========================\n");

    // printf("Estado: %c\n", estado1);
    // printf("Codigo: %s\n", codigo1);
    // printf("Nome da Cidade: %s", cidade1);
    // printf("Populacao: %lu\n", populacao1);
    // printf("Area: %.2f km²\n", area1);
    // printf("PIB: %.2f Bilhões de reais\n", pib1);
    // printf("Pontos Turisticos: %d\n", pturistico1);
    // printf("Densidade populacional: %.2f hab/km²\n", dens_populacional1);
    // printf("PIB per Capita: %.2f reais\n", pib_capita1);
    // printf("Super Poder: %.2f\n", superpoder1);

    // printf("==============================================================\n");


    // // CARTA 2

    // printf("\n========================= VISUALIZAR CARTA 2 ==========================\n");

    // printf("Estado: %c\n", estado2);
    // printf("Codigo: %s\n", codigo2);
    // printf("Nome da Cidade: %s", cidade2);
    // printf("Populacao: %lu\n", populacao2);
    // printf("Area: %.2f km²\n", area2);
    // printf("PIB: %.2f Bilhões de reais\n", pib2);
    // printf("Pontos Turisticos: %d\n", pturistico2);
    // printf("Densidade populacional: %.2f hab/km²\n", dens_populacional2);
    // printf("PIB per Capita: %.2f reais\n", pib_capita2);
    // printf("Super Poder: %.2f\n", superpoder2);

    // printf("==============================================================\n");

    int compararAtributo;
    printf("### Escolha o atributo que deseja comparar ###\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Número de pontos turísticos\n");
    printf("4 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &compararAtributo);
    printf("\n");

    printf("======================================================================\n");
    printf("\n");
    switch(compararAtributo){
    case 1: 
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
        if (populacao1 == populacao2){
            printf("Resultado: Empate!\n");
        } else if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;

    case 2: 
        printf("Comparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
        if (area1 == area2){
            printf("Resultado: Empate!\n");
        } else if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;

    case 3: 
        printf("Comparação de cartas (Atributo: Ponto Turístico):\n");
        printf("Carta 1 - %s: %d\n", cidade1, pturistico1);
        printf("Carta 2 - %s: %d\n", cidade2, pturistico2);
        if (pturistico1 == pturistico2){
            printf("Resultado: Empate!\n");
        } else if (pturistico1 > pturistico2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;

    case 4: 
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, dens_populacional1);
        printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, dens_populacional2);
        if (dens_populacional1 == dens_populacional2){
            printf("Resultado: Empate!\n");
        } else if (dens_populacional1 < dens_populacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
    break;

    default:
    printf("Opção invalida!\n");
    return 0;
    }
    printf("\n");
    // COMPARAÇÃO DAS CARTAS

    // printf("================= COMPARAÇÃO ENTRE AS CARTAS =================\n");
   
    // if (populacao1 > populacao2){
    //     printf("População: Carta 1 vence!\n");
    // } else {
    //     printf("População: Carta 2 vence!\n");
    // }

    // if (area1 > area2){
    //     printf("Area: Carta 1 vence!\n");
    // } else {
    //     printf("Area: Carta 2 vence!\n");
    // }

    // if (pib1 > pib2){
    //     printf("PIB: Carta 1 vence!\n");
    // } else {
    //     printf("PIB: Carta 2 vence!\n");
    // }

    // if (pturistico1 > pturistico2){
    //     printf("Pontos Turísticos: Carta 1 vence!\n");
    // } else {
    //     printf("Pontos Turísticos: Carta 2 vence!\n");
    // }

    // if (dens_populacional1 < dens_populacional2){
    //     printf("Densidade Populacional: Carta 1 vence!\n");
    // } else {
    //     printf("Densidade Populacional: Carta 2 vence!\n");
    // }

    // if (pib_capita1 > pib_capita2){
    //     printf("PIB per Capita: Carta 1 vence!\n");
    // } else {
    //     printf("PIB per Capita: Carta 2 vence!\n");
    // }

    // if (superpoder1 > superpoder2){
    //     printf("Super Poder: Carta 1 vence!\n");
    // } else {
    //     printf("Super poder: Carta 2 vence!\n");
    // }

    // printf("==============================================================\n");

    return 0;

}
