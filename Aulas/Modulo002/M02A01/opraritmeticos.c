#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    char l = 'J';
    l = l + 30;
    printf("Estou com a letra %c na memoria\n", l);
    system("pause");
}
