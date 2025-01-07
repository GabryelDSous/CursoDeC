#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    int idade;
    float peso;

    printf("Qual é o seu nome? ");
    gets(nome);

    printf("Quantos anos você tem? ");
    fflush(stdin);
    scanf("%i", &idade);

    printf("Qual é o seu peso? ");
    fflush(stdin);
    scanf("%f", &peso);

    printf("\nMuito prazer %s. Você tem %i anos e pesa %.2fKg correto?\nFIM\n", nome, idade, peso);
    system("pause");
}
