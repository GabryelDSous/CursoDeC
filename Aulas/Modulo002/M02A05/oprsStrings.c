#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(0,"Portuguese");
    char nome[] = "André";
    printf("%s\n", strupr(nome));
    printf("%s", strlwr(nome));

    printf("\n");
    system("pause");
}
