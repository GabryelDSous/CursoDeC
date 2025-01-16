#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    char nome1[30], nome2[30], maior[30];
    int dif;
    printf("Digite o nome de uma pessoa: ");
    gets(nome1);
    printf("Digite outro nome: ");
    gets(nome2);
    strcpy(maior,(strlen(nome1)>strlen(nome2))?nome1:nome2);
    printf("Entre %s e %s, o maior nome é %s\n", nome1, nome2, maior);
    system("pause");
}
