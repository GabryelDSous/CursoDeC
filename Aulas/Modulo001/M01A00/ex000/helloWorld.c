#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Olá, Mundo!");
    printf("\nUfa! Já estou \"LIVRE\" da maldição\n");
    system("pause");
}
