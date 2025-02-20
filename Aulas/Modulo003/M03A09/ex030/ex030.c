#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    // variaveis
    float valor;
    int opc;
    // Variação dos preços
    float carn, ferias, dayChildren, blackF, natal;
    // Code
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX030 - Preço por Época >>>\n");
    printf(" Digite o preço de um produto R$");
    scanf("%f", &valor);
    printf("\t  ESCOLHA UM PERÍODO\n");
    printf("\t======================\n");
    printf("\t1\tCarnaval [+10]\n");
    printf("\t2\tFérias Escolares [+20]\n");
    printf("\t3\tDia das Crianças [+5]\n");
    printf("\t4\tBlack Friday [-30]\n");
    printf("\t5\tNatal [-5]\n");
    printf("\t======================\n");
    printf("Digite sua opção => ");
    fflush(stdin);
    scanf("%i", &opc);
    printf("---------------------------------------------\n");
    switch(opc){
    case 1:
        carn = valor * 10 / 100;
        printf("Na época do CARNAVAL, o preço do produto vai para R$%.2f", (valor+=carn));
        break;
    case 2:
        ferias = valor * 20 / 100;
        printf("Na época das FERIAS, o preço do produto vai para R$%.2f", (valor+=ferias));
        break;
    case 3:
        dayChildren = valor * 5 / 100;
        printf("Na época do DIA DAS CRIANÇAS, o preço do produto vai para R$%.2f", (valor+=dayChildren));
        break;
    case 4:
        blackF = valor * 30 / 100;
        printf("Na época de BLACK FRIDAY, o preço do produto vai para R$%.2f", (valor-=blackF));
        break;
    case 5:
        natal = valor * 5 / 100;
        printf("Na época de NATAL, o preço do produto vai para R$%.2f", (valor-=natal));
        break;
    default:
        printf("Em épocas assim, mantenha o preço do produto em R$%.2f", valor);
    }
    printf("\n---------------------------------------------\n");
    printf("VOLTE SEMPRE!\n");
    system("pause");
}
