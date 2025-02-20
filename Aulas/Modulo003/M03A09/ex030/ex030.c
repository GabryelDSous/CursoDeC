#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    // variaveis
    float valor;
    int opc;
    // Varia��o dos pre�os
    float carn, ferias, dayChildren, blackF, natal;
    // Code
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX030 - Pre�o por �poca >>>\n");
    printf(" Digite o pre�o de um produto R$");
    scanf("%f", &valor);
    printf("\t  ESCOLHA UM PER�ODO\n");
    printf("\t======================\n");
    printf("\t1\tCarnaval [+10]\n");
    printf("\t2\tF�rias Escolares [+20]\n");
    printf("\t3\tDia das Crian�as [+5]\n");
    printf("\t4\tBlack Friday [-30]\n");
    printf("\t5\tNatal [-5]\n");
    printf("\t======================\n");
    printf("Digite sua op��o => ");
    fflush(stdin);
    scanf("%i", &opc);
    printf("---------------------------------------------\n");
    switch(opc){
    case 1:
        carn = valor * 10 / 100;
        printf("Na �poca do CARNAVAL, o pre�o do produto vai para R$%.2f", (valor+=carn));
        break;
    case 2:
        ferias = valor * 20 / 100;
        printf("Na �poca das FERIAS, o pre�o do produto vai para R$%.2f", (valor+=ferias));
        break;
    case 3:
        dayChildren = valor * 5 / 100;
        printf("Na �poca do DIA DAS CRIAN�AS, o pre�o do produto vai para R$%.2f", (valor+=dayChildren));
        break;
    case 4:
        blackF = valor * 30 / 100;
        printf("Na �poca de BLACK FRIDAY, o pre�o do produto vai para R$%.2f", (valor-=blackF));
        break;
    case 5:
        natal = valor * 5 / 100;
        printf("Na �poca de NATAL, o pre�o do produto vai para R$%.2f", (valor-=natal));
        break;
    default:
        printf("Em �pocas assim, mantenha o pre�o do produto em R$%.2f", valor);
    }
    printf("\n---------------------------------------------\n");
    printf("VOLTE SEMPRE!\n");
    system("pause");
}
