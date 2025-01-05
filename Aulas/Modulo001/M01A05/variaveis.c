#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    unsigned int idade = 33;
    float peso = 85.9;
    char sexo = 'M';
    char *nome = "Juvenal"; // Funciona tanto com *nome como nome[]
    printf("O %s é do sexo %c tem %i anos e pesa %.2fkg\n", nome, sexo, idade, peso);
    system("pause");
}
