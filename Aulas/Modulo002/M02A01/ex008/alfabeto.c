#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX008 - Alfabeto >>>\n");
    printf("\nDigite uma letra: ");
    char letraDig;
    letraDig = getchar();
    int antesLetra = letraDig - 1;
    int depoisLetra = letraDig + 1;
    printf("Antes da letra %c, temos a letra %c. Depois temos a letra %c\n\n", letraDig, antesLetra, depoisLetra);
    system("pause");
}
