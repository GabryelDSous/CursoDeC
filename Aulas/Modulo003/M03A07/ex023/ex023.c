#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX023 - Positivo ou Negativo >>>\n");
    printf("Me figa um número e eu te direi se\nele é POSITIVO, NEGATIVO ou NULO.\n\n");
    printf("Digite um número: ");
    int num;
    fflush(stdin);
    scanf("%d", &num);
    printf("O número %d é ", num);
    if(num > 0) printf("POSITIVO");
    else if(num < 0) printf("NEGATIVO");
    else printf("NULO");
    printf("\n");
    system("pause");
}
