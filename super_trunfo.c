#include <stdio.h>

int main(){

    // DECLARAÇÃO DE VARIÁVEIS

    //CARTA 1

   char estado1;
   char codigo1[4]; 
   char cidade1[50];
   int populacao1;
   float area1;
   float pib1;
   int pturistico1;

   //CARTA 2

   char estado2;
   char codigo2[4]; 
   char cidade2[50]; 
   int populacao2; 
   float area2; 
   float pib2; 
   int pturistico2; 

   // LEITURA DA CARTA 1

 
   printf("\n==================== CADASTRO DA CARTA 1 ==========================\n");

   printf("Digite o estado da carta 1 (EX: A): "); //estado
   scanf(" %c", &estado1);
   printf("\n");

   printf("Digite o codigo da carta 1 (EX: A01): "); //codigo
   scanf("%s", codigo1);
   printf("\n");

   printf("Digite o nome da cidade na carta 1 (EX: Rio de Janeiro): "); //nome da cidade
   getchar(); //limpei o buffer
   fgets(cidade1, 50, stdin);
   printf("\n");

   printf("Digite a população da carta 1 (EX: 6748000): "); //população
   scanf("%d", &populacao1);
   printf("\n");

   printf("Digite a área em km² da carta 1 (EX: 1200.25): "); //area em km²
   scanf("%f", &area1);
   printf("\n");

   printf("Digite o PIB da carta 1 (EX: 300.50): "); //pib
   scanf("%f", &pib1);
   printf("\n");

   printf("Digite a quantia de pontos turisticos da carta 1 (EX: 30): "); //pontos turisticos
   scanf("%d", &pturistico1);
   printf("\n");
   
   printf("======================================================================\n");

   // FIM DO CADASTRO DA CARTA 1


   // LEITURA DA CARTA 2

   printf("\n==================== CADASTRO DA CARTA 2 ==========================\n");

   printf("Digite o estado da carta 2: "); //estado
   scanf(" %c", &estado2);
   printf("\n");

   printf("Digite o codigo da carta 2: "); //codigo
   scanf("%s", codigo2);
   printf("\n");

   printf("Digite o nome da cidade na carta 2: "); //nome da cidade
   getchar(); //limpei o buffer
   fgets(cidade2, 50, stdin);
   printf("\n");

   printf("Digite a população da carta 2: "); //população
   scanf("%d", &populacao2);
   printf("\n");

   printf("Digite a área em km² da carta 2: "); //area em km²
   scanf("%f", &area2);
   printf("\n");

   printf("Digite o PIB da carta 2: "); //pib
   scanf("%f", &pib2);
   printf("\n");

   printf("Digite a quantia de pontos turisticos da carta 2: "); //pontos turisticos
   scanf("%d", &pturistico2);
   printf("\n");
   
   printf("======================================================================\n");

   // FIM DO CADASTRO DA CARTA 2

   // EXIBIÇÃO DAS CARTAS

    printf("\n==================== CARTA 1 ====================\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pturistico1);

    printf("=================================================\n");


    // CARTA 2

    printf("\n==================== CARTA 2 ====================\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pturistico2);

    printf("=================================================\n");

      return 0;

}
