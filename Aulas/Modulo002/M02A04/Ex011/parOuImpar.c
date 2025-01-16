#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número qualquer: ");
    scanf("%d", &num);
    printf("O número que você digitou é %s!\n", (num%2==0)?"PAR":"IMPAR");
    system("pause");
}
