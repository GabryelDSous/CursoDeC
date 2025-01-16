#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2;
    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    float media =(nota1+nota2)/2;
    printf("A média do aluno foi %.1f\nA situação é %s\n", media, media>6?"APROVADO":"REPROVADO");
}
