#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void imprimeVetor(int vetor[TAM]);

void imprimeVetor(int vetor[TAM]){
    int *ptrVetor;
    for(ptrVetor = vetor; ptrVetor < &vetor[TAM]; ptrVetor++){
        printf("%d ", (*ptrVetor) * 2);
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