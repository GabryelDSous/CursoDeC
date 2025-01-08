#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    // Declarando variaveis
    // Pessoa 1
    char nomeP1[30] = "Gabryel";
    char sexoP1;
    float notaP1;
    // Pessoa 2
    char nomeP2[30];
    char sexoP2;
    float notaP2;
    // Pessoa 2
    char nomeP3[30];
    char sexoP3;
    float notaP3;


    printf("<<< EX004 - Listagem >>>\n");
    // Capturando dados
    // Pessoa 1
    printf("\nCadastrando a primeira pessoa:");
    printf("\n--------------------------------\n");
    printf("NOME: ");
    gets(nomeP1);
    printf("SEXO [M/F]: ");
    sexoP1 = getchar();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &notaP1);

    // Pessoa 2
    printf("\nCadastrando a segunda pessoa:");
    printf("\n--------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nomeP2);
    printf("SEXO [M/F]: ");
    sexoP2 = getchar();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &notaP2);

    // Pessoa 3
    printf("\nCadastrando a terceira pessoa:");
    printf("\n--------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nomeP3);
    printf("SEXO [M/F]: ");
    sexoP3 = getchar();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &notaP3);

    // Mostrando resultados
    printf("\n\nListagem Completa");
    printf("\n--------------------------------\n");
    printf("Nome\t\t\tSexo\tNota");

    // Primeira pessoa
    printf("\n%-23s\t%c\t%.1f", nomeP1, sexoP1, notaP1);

    // Segunda pessoa
    printf("\n%-23s\t%c\t%.1f", nomeP2, sexoP2, notaP2);

    // Terceira pessoa
    printf("\n%-23s\t%c\t%.1f\n", nomeP3, sexoP3, notaP3);

    system("pause");
}
