#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float totCompra;
    printf("<<< EX016 - Consumidor ganha desconto >>>\n");
    printf("Qual foi o valor total das compras? R$");
    scanf("%f", &totCompra);
    printf("---------------------------------------\n");

    printf("Voc� comprou R$%.2f na nossa loja. ", totCompra);
    if(totCompra >= 500){
        float dezPor = totCompra * 10 / 100;
        printf("\n============== ATE��O =================\n");
        printf("Por fazer mais de R$500 em compras, voc� vai receber %.2f de desconto\n",dezPor);
        printf("O valor a ser pago � %.2f! ", (totCompra-dezPor));
    }
    printf("Volte Sempre!");
    printf("\n---------------------------------------\n");
    system("pause");
}
