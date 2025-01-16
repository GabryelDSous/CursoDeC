#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    //char sit[10];
    //sit = (media >= 7)?"Aprovado":"Reprovado";
    int n1,n2;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    fflush(stdin);
    scanf("%d", &n2);
    int mai = (n1>n2)?n1:n2;
    printf("Entre %d e %d o maior foi %i", n1, n2, mai);
    printf("\n");
    system("pause");
}
