#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(0, "Portuguese");
    short anoNasc;
    printf("<<< EX017 - Fila de Banco >>>\n");
    printf("Em que ano voc� nasceu? ");
    scanf("%d", &anoNasc);
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    short ano = data->tm_year+1900;
    short idade = ano - anoNasc;
    printf("\n----------------------------------\n");
    printf("Voc� tem %d anos, certo?\n", idade);
    printf("Seja bem-vindo(a) ao Banco Estudonauta");
    if(idade >= 65) printf("\n=== ATEN��O! DIRIJA-SE PARA A FILA PREFERENCIAL ===");
    printf("\n----------------------------------\n");
}
