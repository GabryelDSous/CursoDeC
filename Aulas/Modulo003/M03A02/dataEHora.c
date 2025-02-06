#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int d = data->tm_mday;
    int m = data->tm_mon + 1;
    int a = data->tm_year + 1900;
    printf("Estamos no dia %d no mês %i e no ano de %d\n", d, m, a);
    system("pause");
}
