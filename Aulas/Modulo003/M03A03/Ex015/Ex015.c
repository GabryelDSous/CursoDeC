#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");
    float nota1;
    float nota2;
    printf("<<< EX015 - Bons alunos merecem parab�ns >>>\n\n");
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    float media = (nota1 + nota2)/2;
    if(media >= 7) printf("MEUS PARAB�NS! ");
    printf("A sua m�dia final foi %.1f\n", media);
    system("pause");
}
