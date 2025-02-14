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

    printf("Você comprou R$%.2f na nossa loja. ", totCompra);
    if(totCompra >= 500){
        float dezPor = totCompra * 10 / 100;
        printf("\n============== ATEÇÃO =================\n");
        printf("Por fazer mais de R$500 em compras, você vai receber %.2f de desconto\n",dezPor);
        printf("O valor a ser pago é %.2f! ", (totCompra-dezPor));
    }
    printf("Volte Sempre!");
    printf("\n---------------------------------------\n");
    system("pause");
}
