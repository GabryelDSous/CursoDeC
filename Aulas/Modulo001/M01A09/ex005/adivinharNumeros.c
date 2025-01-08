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
    printf("<<< EX005 - Será que você acerta? >>>");
    printf("\nVou pensar em um número entre 1 e 5. Tente adivinhar!");
    printf("\nQual é o seu palpite? ");
    scanf("%d", &numPalp);
    printf("Eu pensei no número %d e você pensou no %d\n",numRand,numPalp);

    system("pause");
}
