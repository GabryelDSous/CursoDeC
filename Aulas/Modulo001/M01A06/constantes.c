#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TOTAL 8
void main(){
    setlocale(LC_ALL,"Portuguese");
    //const int TOTAL = 8;
    printf("%i\n",TOTAL);
    system("pause");
}
