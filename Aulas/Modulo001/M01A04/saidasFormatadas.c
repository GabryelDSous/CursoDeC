#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("O %s tem %i anos de idade\n","Gabryel",18);
    printf("Seu peso atual é de %6.2fKg\n",75.24); // Usando o %f eu posso formatar o número assim %6.2f
    printf("Seu sexo é %c\n",'M');
    system("pause");
}
