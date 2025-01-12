#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");
    printf("<<< EX009 - Média do Aluno >>>\n");
    char nome[30];
    float nota1;
    float nota2;
    printf("\nNome do aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f", &nota2);
    float media = (nota1 + nota2) / 2;
    printf("O aluno %s tirou notas %.1f, e %.1f e ficou com média %.1f", nome, nota1, nota2, media);
}
