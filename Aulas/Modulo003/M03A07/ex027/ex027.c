#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(0, "Portuguese");
    printf("<<< EX027 - Tr�s valores em ordem >>>\n");
    printf("Me diga tr�s n�meros e eu colocarei\neles em ordem para voc�\n\n");
    //N�meros:
    int num1;
    int num2;
    int num3;
    // Code
    printf("Primeiro n�mero: ");
    fflush(stdin);
    scanf("$d", &num1);

    printf("Segundo n�mero: ");
    fflush(stdin);
    scanf("$d", &num2);

    printf("Terceiro n�mero: ");
    fflush(stdin);
    scanf("$d", &num3);

    printf("\n------------------------------------\n");

    // If e Else
    if(num1 > num2){
        printf("MAIOR: %d", num1);
        if(num2 > num3){
            printf("INTERMEDIARIO: %d", num2);
            printf("MENOR: %d", num3);
        }

    }

    printf("\n\n");
    system("pause");
}
/*
        printf("MAIOR: %d", num2);
        printf("INTERMEDIARIO: %d", num1);
        printf("MENOR: %d", num3);
*/
