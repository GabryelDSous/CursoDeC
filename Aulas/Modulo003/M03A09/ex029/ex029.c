#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    // variaveis
    float eart;
    int opc;
    // Planetas
    float merc, ven, mar, jup, sat, ura;

    // Code
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX029 - Seu peso nos Planetas v1.0 >>>\n");
    printf(" Seu peso na Terra (Kg) = ");
    scanf("%f", &eart);
    printf("\t  ESCOLHA UM PLANETA\n");
    printf("\t======================\n");
    printf("\t1\tMercúrio\n");
    printf("\t2\tVênus\n");
    printf("\t3\tMarte\n");
    printf("\t4\tJúpter\n");
    printf("\t5\tSaturno\n");
    printf("\t6\tUrano\n");
    printf("\t======================\n");
    printf("Digite sua opção => ");
    fflush(stdin);
    scanf("%i", &opc);
    printf("---------------------------------------------\n");
    switch(opc){
    case 1:
        merc = eart *0.38;
        printf("No planeta MERCÚRIO, seu peso seria %.2f Kg", merc);
        break;
    case 2:
        ven = eart * 0.91;
        printf("No planeta VÊNUS, seu peso seria %.2f Kg", ven);
        break;
    case 3:
        mar = eart * 0.38;
        printf("No planeta MARTE, seu peso seria %.2f Kg", mar);
        break;
    case 4:
        jup = eart * 2.34;
        printf("No planeta JÚPITER, seu peso seria %.2f Kg", jup);
        break;
    case 5:
        sat = eart * 1.06;
        printf("No planeta SATURNO, seu peso seria %.2f Kg", sat);
        break;
    case 6:
        ura = eart * 0.92;
        printf("No planeta URANO, seu peso seria %.2f Kg", ura);
        break;
    default:
        printf("Seu peso não pode ser calculado para outros planetas. Tente novamente.");
    }
    printf("\n---------------------------------------------\n");
    printf("VOLTE SEMPRE!\n");
    system("pause");
}
