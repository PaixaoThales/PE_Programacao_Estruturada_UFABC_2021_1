#include <stdio.h>
#include <stdlib.h>

int encontraPosicao(int elemento, int *vetor, int n);

int *trocaPosicao(int posicao, int *vetor, int n, int elemento);

int encontraPosicao(int elemento, int *vetor, int n){
    for(int i = 0; i < n; i++){
        if(elemento < *(vetor + i)){
            return i;
        }
    }
    return n;
}

int *trocaPosicao(int posicao, int *vetor, int n, int elemento){
    int aux = 0, anterior = 0;
    for(int i = 0; i <= n; i++){
        if(i == posicao){
            anterior = *(vetor + i);
            *(vetor + i) = elemento;
            for(int c = i + 1; c < n + 1; c++){
                aux = *(vetor + c);
                *(vetor + c) = anterior;
                anterior = aux; 
            }
            return vetor;
        }
    }
    return vetor;
}

int main(int argc, char const *argv[]){
    int *vetor = NULL, n , elemento;
    scanf("%d", &elemento);
    scanf("%d", &n);
    vetor = malloc((sizeof(int) * n) + 1);
    for(int x = 0; x < n; x++){
        scanf("%d", vetor + x);
    }
    vetor = trocaPosicao(encontraPosicao(elemento, vetor, n), vetor, n, elemento);
    for(int y = 0; y < n + 1; y++){
        printf("%d ", *(vetor + y));
    }
    free(vetor);
    return 0;
}
