#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAML 3
#define TAMC 3

int main(int argc, char const *argv[]){
    int matriz[TAML][TAMC];
    int maior[3], menor[3];
    for(int l = 0; l < TAML; l++){
        for(int c = 0; c < TAMC; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    maior[0] = matriz[0][0];
    maior[1] = 0;
    maior[2] = 0;
    menor[0] = matriz[0][0];
    menor[1] = 0;
    menor[2] = 0;
    for(int linha = 0; linha < TAML; linha++){
        for (int coluna = 0; coluna < TAMC; coluna++){
            if(matriz[linha][coluna] > maior[0]){
                maior[0] = matriz[linha][coluna];
                maior[1] = linha;
                maior[2] = coluna;
            }
            if(matriz[linha][coluna] < menor[0]){
                menor[0] = matriz[linha][coluna];
                menor[1] = linha;
                menor[2] = coluna;
            }
        }
    }
    printf("Maior: %d\n", maior[0]);
    printf("Posicao (maior): %d linha e %d coluna\n", maior[1], maior[2]);
    printf("Menor: %d\n", menor[0]);
    printf("Posicao (menor): %d linha e %d coluna\n", menor[1], menor[2]);
    return 0;
}