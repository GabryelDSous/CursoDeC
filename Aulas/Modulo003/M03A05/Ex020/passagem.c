#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX020 - Pre�o da Passagem >>>\n");
    int km;
    int valor;
    printf("========= TABELA DE PRE�OS =========\n");
    printf("Viagens at� 200 Km\tR$0.50/Km\n");
    printf("A partir de 200 Km\tR$0.35/Km\n");
    printf("------------------------------------\n");
    printf("Dist�ncia total de viagens, em Km: ");
    fflush(stdin);
    scanf("%d", &km);
    printf("Uma viagem de %.2dKm vai custar R$", km);
    if(km > 200){
        printf("R$0,35/Km.");
        valor = km * 0.35;
    } else {
        printf("R$0,50/Km.");
        valor = km * 0.5;
    }

    printf("\nValor total: R$%.2d", valor);
}
