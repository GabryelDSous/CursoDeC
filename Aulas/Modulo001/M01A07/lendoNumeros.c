#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");

    char nome[30];
    char ender[40];
    printf("Digite seu nome: ");
    //fflush(stdin);
    gets(nome);
    printf("Digite seu endere�o: ");
    gets(ender);
    printf("Voc� digitou \"%s\"\nQue mora em \"%s\"\n", nome, ender);

    system("pause");
}
/*

    existe essas duas formas de usar ler uma entrada do teclado

    1. scanf("%c", v);
    2. v = getchar();

    NOTA: tenho sempre que usar o fflush(stdin); antes de ler.
    NOTA: caso use o scanf(" %c", v) alguns compiladores aceitam a forma de dar espa�o do tipo da variavel
    eliminando o fflush, embora nem todos aceitem

*/
