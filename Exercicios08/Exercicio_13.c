#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int* preecheVetor(int matriz[TAM][TAM], int vetor[TAM]);

int* preecheVetor(int matriz[TAM][TAM], int vetor[TAM]){
    int* p = NULL;
    p = malloc(sizeof(int) * TAM);
    for(int linha = 0; linha < TAM; linha++){
        int aux = 0;
        for(int coluna = 0; coluna < TAM; coluna++){
            aux += matriz[linha][coluna] * vetor[coluna];
        }
        *(p + linha) = aux;
    }
    return p;
}

int main(int argc, char const *argv[]){
    int matriz[TAM][TAM], vetor[TAM], *ptrVetor = NULL;
    for(int x = 0; x < TAM; x++){
        for(int y = 0; y < TAM; y++){
            scanf("%d", &matriz[x][y]);
        }
    }
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }
    ptrVetor = preecheVetor(matriz, vetor);
    for(int y = 0; y < TAM; y++){
        printf("%d ", *(ptrVetor + y));
    }
    return 0;
}