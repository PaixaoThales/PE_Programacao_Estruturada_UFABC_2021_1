#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

int main(int argc, char const *argv[]){
    int matriz[TAM][TAM];
    int metricas[2] = {0, 0};
    for(int l = 0; l < TAM; l++){
        for(int c = 0; c < TAM; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    for(int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            if(linha == coluna){
                metricas[0] += matriz[linha][coluna];
            }
            if(linha == ((TAM - 1) - coluna) && coluna == ((TAM - 1) - linha)){
                metricas[1] += matriz[linha][coluna];
            }
        }
    }
    printf("Soma diagonal principal: %d\n", metricas[0]);
    printf("Soma diagonal secundaria: %d\n", metricas[1]);
    return 0;
}