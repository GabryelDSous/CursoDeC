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
    printf("<<< EX018 - Servi�o Militar v1.0 >>>\n");
    printf("Atualmente estamos no ano de %d\n", ano);
    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%d", &anoNasc);
    int idade = ano-anoNasc;
    printf("Sua idade atual � %d\n", idade);
    if(idade > 17) printf("J� fez 18 anos. Espero sinceramente que voc� ja tenha se alistado.");
    else printf("Voc� n�o tem 18 anos. N�o pode se alistar.");
    printf("\n------------------------------------------------\n");
    system("pause");

}

// Sua idade atual � (ano-anoNasc) anos.
// J� fez 18 anos. Espero sinceramente que voc� ja tenha se alistado.
