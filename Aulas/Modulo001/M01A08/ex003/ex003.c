#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    int idade;
    float peso;

    printf("Qual � o seu nome? ");
    gets(nome);

    printf("Quantos anos voc� tem? ");
    fflush(stdin);
    scanf("%i", &idade);

    printf("Qual � o seu peso? ");
    fflush(stdin);
    scanf("%f", &peso);

    printf("\nMuito prazer %s. Voc� tem %i anos e pesa %.2fKg correto?\nFIM\n", nome, idade, peso);
    system("pause");
}
