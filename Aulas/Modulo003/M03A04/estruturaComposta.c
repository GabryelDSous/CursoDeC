#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    printf("Digite um numero: ");
    fflush(stdin);
    scanf("%i", &n);
    if(n%2==0){
        printf("O valor %i e par", n);
    } else{
        printf("O valor %d e impar", n);
    }
    printf("\nACABOU!\n");
    system("pause");
}
