#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void main(){
    setlocale(0, "Portuguese");
    printf("<<< EX026 - Qual � seu Estado? >>>\n");
    printf("Em que estado do Brasil voc� nasceu? ");
    char nEst[2];
    gets(nEst);
    printf("Nascendo no %s voc� � ", strupr(nEst));
    if(strcmp(nEst, "RJ") == 0) printf("CARIOCA");
    else if(strcmp(nEst, "SP") == 0) printf("PAULISTA");
    else if(strcmp(nEst, "MG") == 0) printf("MINEIRO");
    else printf("Nacendo em %s voc� � natural da sua cidade, mas eu n�o sei omo te chamar!");
    printf("\n\n");
    system("pause");
}
