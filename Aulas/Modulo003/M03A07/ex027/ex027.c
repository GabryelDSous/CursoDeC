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
    scanf("%d", &num1);

    printf("Segundo n�mero: ");
    fflush(stdin);
    scanf("%d", &num2);

    printf("Terceiro n�mero: ");
    fflush(stdin);
    scanf("%d", &num3);

    printf("\n------------------------------------\n");

    // If e Else
    if(num1 > num2 && num1 > num3){ // num1 > all
        printf("MAIOR: %d\n", num1);
        if(num2 > num3){ // num2 > num3
            printf("INTERMEDI�RIO: %d\n", num2);
            printf("MENOR: %d\n", num3);
        }
        else{ // num3 > num2
            printf("INTERMEDI�RIO: %d\n", num3);
            printf("MENOR: %d\n", num2);
        }
    } else if(num2 > num1 && num2 > num3){ // num1 > all
        printf("MAIOR: %d\n", num2);
        if(num1 > num3){ // num1 > num3
            printf("INTERMEDI�RIO: %d\n", num1);
            printf("MENOR: %d\n", num3);
        } else { // num3 > num1
            printf("INTERMEDI�RIO: %d\n", num3);
            printf("MENOR: %d\n", num1);
        }
    } else if(num3 > num1 && num3 > num2){ // num3 > all
        printf("MAIOR: %d\n", num3);
        if(num1 > num2){
            printf("INTERMEDI�RIO: %d\n", num1);
            printf("MENOR: %d\n", num2);
        } else {
            printf("INTERMEDI�RIO: %d\n", num2);
            printf("MENOR: %d\n", num1);
        }
    }
}
