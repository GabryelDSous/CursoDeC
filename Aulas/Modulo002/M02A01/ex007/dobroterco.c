#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    printf("<<< EX007 - Dobro e Terça Parte >>>\n");
    printf("\nDigite um número: ");
    int numLido;
    scanf("%d", &numLido);
    int dobro = numLido * 2;
    float terca = (float)numLido / 3;
    printf("Analisando o número %d, seu dobro é %d e sua terça parte é %.2f.\n\n", numLido, dobro, terca);
    system("pause");
}
