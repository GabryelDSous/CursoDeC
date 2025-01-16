#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    int a = 6;
    int b = 6;
    int c = a>=b;
    printf("O resultado é %i",c);

    printf("\n");
    system("pause");
}
