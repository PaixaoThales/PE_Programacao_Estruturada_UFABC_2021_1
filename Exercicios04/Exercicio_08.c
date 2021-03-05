#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 4

int main(int argc, char const *argv[]){
    int matriz[TAM][TAM];
    int soma = 0;
    for(int l = 0; l < TAM; l++){
        for(int c = 0; c < TAM; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    for(int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            if(linha > coluna){
                soma += matriz[linha][coluna];
            }
        }
    }
    printf("Soma: %d", soma);
    return 0;
}