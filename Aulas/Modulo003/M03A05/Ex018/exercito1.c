#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");
    int anoNasc;
    time_t tempo;
    time(&tempo);
    struct tm * datas;
    datas = localtime(&tempo);
    int ano = datas->tm_year + 1900;
    printf("<<< EX018 - Serviço Militar v1.0 >>>\n");
    printf("Atualmente estamos no ano de %d\n", ano);
    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%d", &anoNasc);
    int idade = ano-anoNasc;
    printf("Sua idade atual é %d\n", idade);
    if(idade > 17) printf("Já fez 18 anos. Espero sinceramente que você ja tenha se alistado.");
    else printf("Você não tem 18 anos. Não pode se alistar.");
    printf("\n------------------------------------------------\n");
    system("pause");

}

// Sua idade atual é (ano-anoNasc) anos.
// Já fez 18 anos. Espero sinceramente que você ja tenha se alistado.
