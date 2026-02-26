#include <stdio.h>

int main() {

    // Variaveis

   char produtoA[30] = "Produto A";
   char produtoB[30] = "Produto B";

   unsigned int estoqueA = 1000;
   unsigned int estoqueB = 2000;

   float valorA = 10.50;
   float valorB = 20.40;

   unsigned int estoqueMinimoA = 500;
   unsigned int estoqueMinimoB = 2500;

   double valorTotalA = (valorA * estoqueA);
   double valorTotalB = (valorB * estoqueB);

   int resultadoA, resultadoB;

   // Informações dos produtos

   printf("O %s tem estoque %u e valor unitário R$ %.2f\n", produtoA, estoqueA, valorA);
   printf("O %s tem estoque %u e valor unitário R$ %.2f\n", produtoB, estoqueB, valorB);

   // Comparação do valor minimo de estoques
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O %s tem estoque minimo? %u\n", produtoA, resultadoA);
    printf("O %s tem estoque minimo? %u\n", produtoB, resultadoB);

    // Comparação entre os valores totais dos produtos

    printf("O valor total de A(R$ %.2f) é maior que o valor total de B(R$ %.2f)? %d\n", valorTotalA, valorTotalB, (valorTotalA) > (valorTotalB));

   return 0;

}