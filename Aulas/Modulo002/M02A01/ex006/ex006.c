#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int numDig;
    printf("<<< EX006 - Antecessor e Sucessor >>>\n");
    printf("\nDigite um n�mero: ");
    scanf("%d", &numDig);\
    // antecessor e sucessor do n�mero digitado
    int numAntes = numDig - 1;
    int numDepois = numDig + 1;
    printf("Analisando o n�mero %d, seu antecessor � %d e seu sucessor � %d\n\n", numDig, numAntes, numDepois);
    system("pause");

}
