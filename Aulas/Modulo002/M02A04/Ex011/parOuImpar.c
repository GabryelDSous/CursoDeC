#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um n�mero qualquer: ");
    scanf("%d", &num);
    printf("O n�mero que voc� digitou � %s!\n", (num%2==0)?"PAR":"IMPAR");
    system("pause");
}
