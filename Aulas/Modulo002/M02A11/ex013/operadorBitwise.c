#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX013 - Operadores Bitwise >>>\n");
    int val1;
    int val2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &val1);
    printf("Digite o segundo valor: ");
    scanf("%d", &val2);
    printf("------ OPERAÇÕES BITWISE ------\n");
    printf("Calculando %d & %d é igual a %d\n", val1, val2, (val1 & val2));
    printf("Calculando %d | %d é igual a %d\n", val1, val2, (val1 | val2));
    printf("Calculando %d ^ %d é igual a %d\n", val1, val2, (val1 ^ val2));

    system("pause");
}
