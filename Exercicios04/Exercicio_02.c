#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main(int argc, char const *argv[]){
    int tamanho;
    scanf("%d", &tamanho);
    int matriz[TAM][TAM];
    for(int l = 0; l < tamanho; l++){
        for(int c = 0; c < tamanho; c++){
            if(l == c){
                matriz[l][c] = 1;
            }else{
                matriz[l][c] = 0;
            }
        }
    }
    for(int linha = 0; linha < tamanho; linha++){
        for (int coluna = 0; coluna < tamanho; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}