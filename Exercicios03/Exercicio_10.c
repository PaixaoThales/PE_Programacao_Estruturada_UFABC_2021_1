#include <stdio.h>
#include <stdlib.h>
#define tamanho 10

int main(int argc, char *argv[]){
    float vetor[tamanho];
    float auxiliar;
    for(int i = 0; i < tamanho; i++){
        scanf("%f", &vetor[i]);
    }
    for(int j = 0; j < tamanho; j++){
        for(int c = 0; c < tamanho; c++){
            if(vetor[j] < vetor[c]){
                auxiliar = vetor[c];
                vetor[c] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }
    for(int k = 0; k < tamanho; k++){
        printf("%f\n", vetor[k]);
    }
    return 0;
}