#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(0, "Portuguese");
    // Pegando o ano
    time_t t;
    time(&t);
    struct tm *date;
    date = localtime(&t);
    int ano = 2018;//date->tm_year+1900;
    // Cod principal
    printf("<<< EX025 - Servi�o Militar v2.0 >>>\n\n");
    printf("Atualmente estamos no ano de %d.\n", ano);
    printf("Em que ano voc� nasceu? ");
    int anoNasc;
    fflush(stdin);
    scanf("%d", &anoNasc);
    printf("\n------------------------------------------\n");
    int idade = ano - anoNasc;
    printf("Sua idade atual � %d anos\n", idade);
    // If e Else
    if(idade > 18){
        int anoAlist = anoNasc+18;
        int anoPass = ano-anoAlist;
        printf("Seu alistamento foi em %d. Ja se passaram %d anos.", anoAlist, anoPass);
    } else if(idade < 18){
        int anoAlist = anoNasc+18;
        int anoFalt = anoAlist-ano;
        printf("Seu alistamento ser� em %d. Ainda faltam %d anos", anoAlist, anoFalt);
    } else printf("Voc� completa 18 anos exatamente em %d. V� se alistar!", ano);
    printf("\n------------------------------------------");
    printf("\n\n");
    system("pause");
}
