#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");
    printf("<<< EX024 - Ordem em dois n�meros >>>\n");
    printf("Me diga dois n�meros e eu colocarei\nos dois em ordem crescente.\n\n");
    printf("Primeiro n�mero: ");
    int num1;
    fflush(stdin);
    scanf("%d", &num1);
    printf("Segundo n�mero: ");
    int num2;
    fflush(stdin);
    scanf("%d", &num2);
    printf("Os n�meros em ordem s�o ");
    if(num1 > num2)printf("%d e %d", num2, num1);
    else if(num1 < num2) printf("%d e %d", num1, num2);
    else printf("iguais");
    printf("\n\n");
    system("pause");
}
