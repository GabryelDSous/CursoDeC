#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    printf("<<< EX007 - Dobro e Ter�a Parte >>>\n");
    printf("\nDigite um n�mero: ");
    int numLido;
    scanf("%d", &numLido);
    int dobro = numLido * 2;
    float terca = (float)numLido / 3;
    printf("Analisando o n�mero %d, seu dobro � %d e sua ter�a parte � %.2f.\n\n", numLido, dobro, terca);
    system("pause");
}
