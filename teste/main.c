/* Comentários */
#include <stdio.h> //diretivas "includes" 
#include <stdlib.h>
#include "calculos.h"
int main(){
    /*int num1, num2, soma;
    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);
    printf("Digite o primeiro segundo:\n");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("Soma: %d\n", soma);
    return 0;*/
    int y;
    printf("Usando headers\n");
    scanf("%d", &y);
    int quad = quadrado(y);
    int cub = cubo(y);
    printf("Quadrado de %d: %d\n", y, quad);
    printf("Cubo de %d: %d\n", y, cub);
    printf("Valor da constante PI: %f\n", _PI);
    return 0;
}