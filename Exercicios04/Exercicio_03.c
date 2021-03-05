#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 4

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
            if(matriz[linha][coluna] > 10){
                metricas[0] += 1;
            }
            if(matriz[linha][coluna] < 0){
                metricas[1] += 1;
            }
        }
    }
    printf("Qtd. > 10: %d\n", metricas[0]);
    printf("Qtd. < 0: %d\n", metricas[1]);
    return 0;
}