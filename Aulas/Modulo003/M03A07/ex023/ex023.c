#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX023 - Positivo ou Negativo >>>\n");
    printf("Me figa um n�mero e eu te direi se\nele � POSITIVO, NEGATIVO ou NULO.\n\n");
    printf("Digite um n�mero: ");
    int num;
    fflush(stdin);
    scanf("%d", &num);
    printf("O n�mero %d � ", num);
    if(num > 0) printf("POSITIVO");
    else if(num < 0) printf("NEGATIVO");
    else printf("NULO");
    printf("\n");
    system("pause");
}
