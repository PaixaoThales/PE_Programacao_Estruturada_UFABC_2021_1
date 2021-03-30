#include <stdio.h>
#include <stdlib.h>
#define TAM 3


int main(int argc, char const *argv[]){
    int matriz[TAM][TAM]; 
    int *ptrMatriz = matriz;
    for(int c = 0; c < TAM * TAM; c++){
        scanf("%d", ptrMatriz + c);
    } 
    for(int l = 0; l < TAM * TAM; l++){
        printf("%d\n", *(ptrMatriz + l) + 1);
    }
    return 0;
}