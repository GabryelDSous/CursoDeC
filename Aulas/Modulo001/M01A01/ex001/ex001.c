#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(0,"Portuguese");

    printf("<<< EX001 - Listagem >>>\n");
    printf("\nListagem de Alunos");
    printf("\nNome\t\tNota");
    printf("\n---------------------");
    printf("\nAna Beatriz\t8.5");
    printf("\nBianca Martins\t9.0");
    printf("\nCláudio Sá\t5.5");
    printf("\nGiovana Silva\t7.5\n");
    system("pause");
}




/*
Usando a biblioteca locale.h eu posso usar o setlocale() para
Usar o padrão UTF-8 que o brasileiro
setlocale(0 ou LC_ALL, "Nome do Idioma")
*/
