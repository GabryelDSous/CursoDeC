#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int x = 65;
    printf("Eu tenho %c\n", (cha)x);

    system("pause");
}
