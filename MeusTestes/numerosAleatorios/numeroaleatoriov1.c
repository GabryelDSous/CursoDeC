#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(0,"Portuguese");
    srand(time(NULL));
    int numRandom = rand() % 100+1;
    int numInfo;
    int tentativas = 0;
    printf("Estou pensando em um número entre 1 e 100\nQual seu palpite: ");
    while (numInfo != numRandom){
        tentativas++;
        scanf("%d", &numInfo);
        if(numInfo < 1 || numInfo > 100){
            printf("O numero deve estar entre 1 e 100\n");
        } else if(numInfo > numRandom){
            printf("Muito alto! Tente de novo\n");
        } else if(numInfo < numRandom){
            printf("Muito baixo! Tente de novo\n");
        } else break;
    }
    printf("Parabens! Voce acertou em %d tentativas\n", tentativas);
    system("pause");
}
