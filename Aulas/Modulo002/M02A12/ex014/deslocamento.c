#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(0, "Portuguese");
    printf("<<< EX014 - Operadores de Deslocamento >>>\n");
    int val1, val2;
    printf("Digite um número: ");
    scanf("%d", &val1);
    printf("Digite o deslocamento: ");
    scanf("%d", &val2);
    printf("------ OPERAÇÕES SHIFT ------\n");
    printf("Calculando %d >> %d é igual a %d\n", val1, val2, val1>>val2);
    printf("Calculando %d << %d é igual a %d\n", val1, val2, val1<<val2);
    system("pause");
}
