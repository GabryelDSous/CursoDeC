#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome1[30], nome2[30], diferenca[30];
    int comparar;
    printf("Digite um nome: ");
    gets(nome1);
    printf("Digite outro nome: ");
    gets(nome2);
    comparar = strcmp(nome1,nome2);
    strcpy(diferenca, (comparar==0)?"Iguais":"Diferentes");
    printf("Os nomes %s e %s são %s\n", nome1, nome2, diferenca);
    system("pause");
}
