#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int ano;
    printf("<<< EX019 - Ano Bissexto >>>\n");
    printf("\nDigite um ano qualquer: ");
    fflush(stdin);
    scanf("%d", &ano);
    printf("O ano %d ", ano);
    if(ano%400==0 || (ano%4==0 && ano%100!=0)) printf("É BISSEXTO.");
    else printf("NÃO É BISSEXTO.");
}
