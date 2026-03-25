#include <stdio.h>
 
int main() {

    int numero, i;

    printf("Escolha o número que deseja ver a tabuada: ");
    scanf("%d", &numero);
    printf("\n");

    for(i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}