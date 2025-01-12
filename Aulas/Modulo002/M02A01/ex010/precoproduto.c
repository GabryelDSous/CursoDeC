#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    printf("<<< EX010 - Preço do Produto >>>\n");
    char produto[30];
    float valProd;
    float desconto;
    float valAtt;
    printf("\nProduto: ");
    gets(produto);
    printf("Preço de %s: R$",produto);
    scanf("%f", &valProd);
    printf("Desconto: (%%) ");
    fflush(stdin);
    scanf("%f", &desconto);
    valAtt = valProd - (valProd * desconto / 100);
    printf("O produto %s custava R$%.2f, mas com %.2f%% de desconto, passa a custar %.2f.", produto, valProd, desconto, valAtt);
}
