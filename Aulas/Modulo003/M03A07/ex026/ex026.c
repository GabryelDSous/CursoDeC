#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(0, "Portuguese");
    printf("<<< EX026 - Qual é seu Estado? >>>\n");
    printf("Em que estado do Brasil você nasceu? ");
    char nEst[2];
    gets(nEst);
    printf("Nascendo no %s você é ", strupr(nEst));
    if(strcmp(nEst, "RJ") == 0) printf("CARIOCA");
    else if(strcmp(nEst, "SP") == 0) printf("PAULISTA");
    else if(strcmp(nEst, "MG") == 0) printf("MINEIRO");
    else printf("Nacendo em %s você é natural da sua cidade, mas eu não sei omo te chamar!");
    printf("\n\n");
    system("pause");
}
