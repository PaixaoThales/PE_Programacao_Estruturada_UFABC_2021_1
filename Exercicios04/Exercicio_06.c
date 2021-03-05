#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

int main(int argc, char const *argv[]){
    int matriz[TAM][TAM];
    int vetor[3] = {0, 0, 0};
    for(int l = 0; l < TAM; l++){
        for(int c = 0; c < TAM; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    for(int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            if(coluna == 0){
                vetor[0] += matriz[linha][coluna];
            }else if(coluna == 1){
                vetor[1] += matriz[linha][coluna];
            }else{
                vetor[2] += matriz[linha][coluna];
            }
        }
    }
    for(int x = 0; x < 3; x++){
        printf("%d ", vetor[x]);
    }
    return 0;
}