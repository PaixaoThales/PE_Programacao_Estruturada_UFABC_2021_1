#include <stdio.h>
#include <stdlib.h>

int findInMatriz(int n, int linha, int coluna, int *pMatriz);

int findInMatriz(int n, int linha, int coluna, int *pMatriz){
    for(int l = 0; l < linha * coluna; l++){
        if(*(pMatriz + l) == n){
            return 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[]){
    int *ptrMatriz, linha, coluna, n;
    scanf("%d", &linha);
    scanf("%d", &coluna);
    scanf("%d", &n);
    ptrMatriz = malloc(sizeof(int) * linha * coluna);
    for(int c = 0; c < linha * coluna; c++){
        scanf("%d", ptrMatriz + c);
    } 
    printf("%d", findInMatriz(n, linha, coluna, ptrMatriz));
    free(ptrMatriz);
    return 0;
}