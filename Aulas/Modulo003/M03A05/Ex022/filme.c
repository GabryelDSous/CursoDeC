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
    // Exerc�cio:
    printf("<<< EX022 - D� pra ver o filme? >>> \n\n");
    printf("{ EXERC�CIO 020 - D� pra ver o filme? }\n\n");
    printf("=================== CINEMA ESTUDONAUTA =====================\n");
    printf("HOR�RIO DO FILME: 19h - PRE�O DO INGRESSO: R$20");
    printf("\n------------------------------------------------------------\n");
    printf("Quanto dinheiro voc� tem? R$");
    fflush(stdin);
    scanf("%f", &cash);
    printf("Agora s�o %d horas.", hora);
    if(cash < 20) printf("\nInfelizmente n�o � poss�vel comprar o ingresso!");
    else printf("\nVoc� consegue comprar o ingresso!\n");
    system("pause");
}
