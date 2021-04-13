#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int* preecheVetor(int matriz[TAM][TAM]);

int* preecheVetor(int matriz[TAM][TAM]){
    int* p = NULL;
    p = malloc(sizeof(int) * TAM);
    for(int linha = 0; linha < TAM; linha++){
        int aux = 0;
        for(int coluna = 0; coluna < TAM; coluna++){
            aux += matriz[coluna][linha];
        }
        *(p + linha) = aux;
    }
    return p;
}

int main(int argc, char const *argv[]){
    int matriz[TAM][TAM], *ptrVetor = NULL;
    for(int x = 0; x < TAM; x++){
        for(int y = 0; y < TAM; y++){
            scanf("%d", &matriz[x][y]);
        }
    }
    ptrVetor = preecheVetor(matriz);
    for(int y = 0; y < TAM; y++){
        printf("%d ", *(ptrVetor + y));
    }
    return 0;
}