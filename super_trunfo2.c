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
//    float superpoder1;

   //CARTA 2

   char estado2;
   char codigo2[4]; 
   char cidade2[50]; 
   unsigned long int populacao2; 
   float area2; 
   double pib2; 
   int pturistico2; 
//    float superpoder2;

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

//    double pib_capita1, pib_capita2;
//    pib_capita1 = (pib1 * 1000000000) / populacao1;
//    pib_capita2 = (pib2 * 1000000000) / populacao2;

   // ---------------

    // superpoder1 = populacao1 + area1 + pib1 + pturistico1 + (1/dens_populacional1) + pib_capita1;
    // superpoder2 = populacao2 + area2 + pib2 + pturistico2 + (1/dens_populacional2) + pib_capita2;

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

    int compararAtributo1;
    int compararAtributo2;
    printf("### Escolha o atributo que deseja comparar ###\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Pontos turísticos\n");
    printf("4 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &compararAtributo1);
    printf("\n");

    double valor1_carta1;
    double valor1_carta2;

    double valor2_carta1;
    double valor2_carta2;

    char *nomeAtributo1 = ""; 
    char *nomeAtributo2 = "";

    switch(compararAtributo1){
    case 1: 
    valor1_carta1 = populacao1;
    valor1_carta2 = populacao2;
    nomeAtributo1 = "População";
    break;

    case 2: 
    valor1_carta1 = area1;
    valor1_carta2 = area2;
    nomeAtributo1 = "Área";
    break;

    case 3: 
    valor1_carta1 = pturistico1;
    valor1_carta2 = pturistico2;
    nomeAtributo1 = "Pontos Turísticos";
    break;

    case 4: 
    valor1_carta1 = dens_populacional1;
    valor1_carta2 = dens_populacional2;
    nomeAtributo1 = "Densidade Demográfica";
    break;

    default:
    printf("Opção invalida!\n");
    return 0;
    }

    printf("### Escolha o segundo atributo que deseja comparar ###\n");
    switch(compararAtributo1){
        case 1:
        printf("2 - Área\n");
        printf("3 - Pontos turísticos\n");
        printf("4 - Densidade demográfica\n");
        printf("Escolha: ");
        scanf("%d", &compararAtributo2);
        break;

        case 2:
        printf("1 - População\n");
        printf("3 - Pontos turísticos\n");
        printf("4 - Densidade demográfica\n");
        printf("Escolha: ");
        scanf("%d", &compararAtributo2);
        break;

        case 3:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("4 - Densidade demográfica\n");
        printf("Escolha: ");
        scanf("%d", &compararAtributo2);
        break;

        case 4:
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - Pontos turísticos\n");
        printf("Escolha: ");
        scanf("%d", &compararAtributo2);
        break;

        default:
        printf("Opção inválida!\n");
        return 0;
    }

    switch(compararAtributo2){
    case 1: 
    valor2_carta1 = populacao1;
    valor2_carta2 = populacao2;
    nomeAtributo2 = "População";
    break;

    case 2: 
    valor2_carta1 = area1;
    valor2_carta2 = area2;
    nomeAtributo2 = "Área";
    break;

    case 3: 
    valor2_carta1 = pturistico1;
    valor2_carta2 = pturistico2;
    nomeAtributo2 = "Pontos Turísticos";
    break;

    case 4: 
    valor2_carta1 = dens_populacional1;
    valor2_carta2 = dens_populacional2;
    nomeAtributo2 = "Densidade Demográfica";
    break;

    default:
    printf("Opção invalida!\n");
    return 0;
    }

    printf("======================================================================\n");

    // CÁLCULO DA SOMA TOTAL
    double somaCarta1 = 0;
    double somaCarta2 = 0;
    // Tratamento para o Atributo 1: Se for Densidade (ID 4), inverte o valor na soma
    if (compararAtributo1 == 4) {
        somaCarta1 += (1.0 / valor1_carta1);
        somaCarta2 += (1.0 / valor1_carta2);
    } else {
        somaCarta1 += valor1_carta1;
        somaCarta2 += valor1_carta2;
    }
    // Tratamento para o Atributo 2: Se for Densidade (ID 4), inverte o valor na soma
    if (compararAtributo2 == 4) {
        somaCarta1 += (1.0 / valor2_carta1);
        somaCarta2 += (1.0 / valor2_carta2);
    } else {
        somaCarta1 += valor2_carta1;
        somaCarta2 += valor2_carta2;
    }

    // EXIBIÇÃO DOS RESULTADOS
    printf("\n### RESULTADO DA COMPARAÇÃO ###\n");
    printf("Carta 1: %s | Carta 2: %s\n", cidade1, cidade2);
    printf("%s: %.2f vs %.2f\n", nomeAtributo1, valor1_carta1, valor1_carta2);
    printf("%s: %.2f vs %.2f\n", nomeAtributo2, valor2_carta1, valor2_carta2);
    printf("Soma Total: %.4f vs %.4f\n", somaCarta1, somaCarta2);
    printf("------------------------------------------\n");

    // Lógica de Vencedor com Operador Ternário e if-else para empate
    if (somaCarta1 == somaCarta2) {
        printf("Resultado Final: Empate!\n");
    } else {
        // Usando o operador ternário para decidir o vencedor
        printf("Resultado Final: %s Venceu!\n", (somaCarta1 > somaCarta2) ? cidade1 : cidade2);
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
