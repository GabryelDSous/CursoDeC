#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    // VARIAVEIS
    int val1, val2, soma, sub, mult;
    float div;
    char opr;
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX028 - Super Calculadora v1.0 >>>\n");
    printf("VALOR 1 = ");
    scanf("%d", &val1);
    printf("VALOR 2 = ");
    fflush(stdin);
    scanf("%d", &val2);
    printf("=============================\n");
    printf("+\t\tAdi��o\n");
    printf("-\t\tSubtra��o\n");
    printf("*\t\tMultiplica��o\n");
    printf("/\t\tDivis�o\n");
    printf("=============================\n");
    printf("Digite sua op��o => ");
    fflush(stdin);
    opr = getchar();
    printf("---------------------------------------------\n");
    //printf("O resultado de %d %c %i � igual a ", val1, opr, val2);
   switch (opr){
    case '+':
        soma = val1 + val2;
        printf("O resultado de %d + %i � igual a %d", val1, val2, soma);
        break;
    case '-':
        sub = val1 - val2;
        printf("O resultado de %d - %i � igual a %d", val1, val2, sub);
        break;
    case '*':
        mult = val1 * val2;
        printf("O resultado de %d * %i � igual a %d", val1, val2, mult);
        break;
    case '/':
        div = (float)val1 / val2;
        printf("O resultado de %d / %i � igual a %.2f", val1, val2, div);
        break;
    default:
        printf("N�o foi poss�vel fazer a opera��o. Tente novamente.");
    }
    printf("\n---------------------------------------------\n");
    printf("VOLTE SEMPRE!");
    system("pause");
}
