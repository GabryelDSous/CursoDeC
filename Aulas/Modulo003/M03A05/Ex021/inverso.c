#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");
    int num;
    printf("<<< EX021 - Inverso ou oposto >>>\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d", &num);
    if(num > 0){
        float inv = 1 / (float)num;
        printf("O inverso de %d � igual a %f\n", num, inv);
    } else{
        printf("O oposto de %d � %d\n",num, abs(num));
    }
    system("pause");
}
