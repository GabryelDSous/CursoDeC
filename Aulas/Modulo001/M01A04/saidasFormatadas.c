#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("O %s tem %i anos de idade\n","Gabryel",18);
    printf("Seu peso atual � de %6.2fKg\n",75.24); // Usando o %f eu posso formatar o n�mero assim %6.2f
    printf("Seu sexo � %c\n",'M');
    system("pause");
}
