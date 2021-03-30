#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void imprimeVetor(int vetor[TAM]);

void imprimeVetor(int vetor[TAM]){
    int x = 0;
    while (x < TAM){
        printf("%d ", *vetor++);
        x++;
    }
    
}

int main(int argc, char const *argv[]){
    int vetor[5];
    for(int x = 0; x < TAM; x++){
        scanf("%d", &vetor[x]);
    }   
    imprimeVetor(vetor);
    return 0;
}