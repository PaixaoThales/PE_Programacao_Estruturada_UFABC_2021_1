#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

int main(int argc, char *argv[]){
    int vetorA[tamanho];
    int vetorB[tamanho];
    int vetorC[tamanho];
    for(int j = 0; j < tamanho; j++){
        scanf("%d", &vetorA[j]);
    }
    for(int k = 0; k < tamanho; k++){
        scanf("%d", &vetorB[k]);
    }
    for(int c = 0; c < tamanho; c++){
        vetorC[c] = vetorA[c]- vetorB[c];
    }
    for(int i = 0; i < tamanho; i++){
       printf("%d " ,vetorC[i]);
    }
    return 0;
}