#include <stdio.h>
#include <stdlib.h>

void diaSemana(int n);

void diaSemana(int n){
    switch(n){
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terça-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
        break;
    case 7:
        printf("Sabado");
        break;
    } 
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    while(n < 1 || n > 7){
        printf("O numero deve ser >=1 e <=7!\n");
        scanf("%d", &n);
    }
    diaSemana(n);
    return 0;
}
