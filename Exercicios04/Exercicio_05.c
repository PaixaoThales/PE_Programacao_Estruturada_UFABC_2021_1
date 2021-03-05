#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main(int argc, char const *argv[]){
    int matriz[TAM][TAM];
    int linhas, colunas;
    scanf("%d", &linhas);
    scanf("%d", &colunas);
    for(int l = 0; l < linhas; l++){
        for(int c = 0; c < colunas; c++){
            if(l < c){
                matriz[l][c] = (2 * l) + (7 * c) - 2;
            }else if(l > c){
                matriz[l][c] = (4 * (l * l * l)) + (5 * (c * c)) + 1;
            }else{
                matriz[l][c] = (3 * (l * l)) - 1;
            }
        }
    }
    for(int linha = 0; linha < linhas; linha++){
        for (int coluna = 0; coluna < colunas; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}