#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota do aluno: \n");
    scanf("%d", &nota1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%d", &nota2);
    printf("Digite a terceira nota do aluno: \n");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;

    printf("A média do aluno no bimestre foi: %.1f\n", media);

    return 0;
}