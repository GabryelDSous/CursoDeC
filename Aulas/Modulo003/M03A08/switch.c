#include <stdio.h>

void main(){
    int n;
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    switch (n){
    case 1:
        printf("Um");
        break;
    case 2:
        printf("Dois");
        break;
    case 3:
        printf("tr�s");
        break;
    case 4:
        printf("Quatro");
        break;
    default:
        printf("Erro");
    }
    printf("\nACABOU!");
}
