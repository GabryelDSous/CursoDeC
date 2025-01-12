#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int numDig;
    printf("<<< EX006 - Antecessor e Sucessor >>>\n");
    printf("\nDigite um número: ");
    scanf("%d", &numDig);\
    // antecessor e sucessor do número digitado
    int numAntes = numDig - 1;
    int numDepois = numDig + 1;
    printf("Analisando o número %d, seu antecessor é %d e seu sucessor é %d\n\n", numDig, numAntes, numDepois);
    system("pause");

}
