#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(0, "Portuguese");
    printf("<<< EX027 - Três valores em ordem >>>\n");
    printf("Me diga três números e eu colocarei\neles em ordem para você\n\n");
    //Números:
    int num1;
    int num2;
    int num3;
    // Code
    printf("Primeiro número: ");
    fflush(stdin);
    scanf("$d", &num1);

    printf("Segundo número: ");
    fflush(stdin);
    scanf("$d", &num2);

    printf("Terceiro número: ");
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
