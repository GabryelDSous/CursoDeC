#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    // Preparando Random
    srand(time(NULL));
    int numPalp;
    int numRand = rand() % 5+1;
    printf("<<< EX005 - Ser� que voc� acerta? >>>");
    printf("\nVou pensar em um n�mero entre 1 e 5. Tente adivinhar!");
    printf("\nQual � o seu palpite? ");
    scanf("%d", &numPalp);
    printf("Eu pensei no n�mero %d e voc� pensou no %d\n",numRand,numPalp);

    system("pause");
}
