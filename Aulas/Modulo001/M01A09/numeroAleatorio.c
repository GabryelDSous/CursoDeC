#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int n = rand() % 10+1; // Gera entre 1 e 10
    printf("eu gerei o n�mero (%d)\n",n);
    system("pause");
}
