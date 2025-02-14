#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(0, "Portuguese");
    // Data e Hora local:
    time_t t;
    time(&t);
    struct tm *date;
    date = localtime(&t);
    int hora = date->tm_hour;
    // Variavel:
    float cash;
    // Exercício:
    printf("<<< EX022 - Dá pra ver o filme? >>> \n\n");
    printf("{ EXERCÍCIO 020 - Dá pra ver o filme? }\n\n");
    printf("=================== CINEMA ESTUDONAUTA =====================\n");
    printf("HORÁRIO DO FILME: 19h - PREÇO DO INGRESSO: R$20");
    printf("\n------------------------------------------------------------\n");
    printf("Quanto dinheiro você tem? R$");
    fflush(stdin);
    scanf("%f", &cash);
    printf("Agora são %d horas.", hora);
    if(cash < 20) printf("\nInfelizmente não é possível comprar o ingresso!");
    else printf("\nVocê consegue comprar o ingresso!\n");
    system("pause");
}
