#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");

    char r;
    char s;
    printf("Digite só uma letra: ");
    fflush(stdin);
    r = getchar();
    printf("Digite outra letra: ");
    fflush(stdin);
    s = getchar();
    printf("Você digitou a letra \"%c\" e \"%c\"\n", r, s);

    system("pause");
}
/*

    existe essas duas formas de usar ler uma entrada do teclado

    1. scanf("%c", v);
    2. v = getchar();

    NOTA: tenho sempre que usar o fflush(stdin); antes de ler.
    NOTA: caso use o scanf(" %c", v) alguns compiladores aceitam a forma de dar espaço do tipo da variavel
    eliminando o fflush, embora nem todos aceitem

*/
