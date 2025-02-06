#include <stdio.h>
void main(){
    float vel;
    printf("Digite a do automovel: ");
    scanf("%f", &vel);

    if(vel>80){
        printf("Voce foi multado!");
    }
    printf("Se beber, nao dirija!");
}
