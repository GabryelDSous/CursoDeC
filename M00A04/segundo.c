#include <stdio.h>
#include <stdlib.h>
void main(){
    char nome[10];
    printf("Qual e o seu nome? ");
    scanf("%s", &nome);
    printf("Muito prazer em te conhecer %s", nome);
    printf("\n");
    system("pause");
}
