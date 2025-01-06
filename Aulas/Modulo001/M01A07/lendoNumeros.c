#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Digite um número real: ");
    scanf("%f", &m);
    printf("Você acabou de digitar os valores %d. e %.1f Obrigado\n", n, m);
    system("pause");
}
