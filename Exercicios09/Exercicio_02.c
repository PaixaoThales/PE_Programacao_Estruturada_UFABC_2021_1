#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int *vetor = NULL, n, aux;
    scanf("%d", &n);
    vetor = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d", vetor + i);
    }
    for(int contador = 1; contador < n; contador++){
        for(int x = 0; x < n - 1; x++){
            if(vetor[x] > vetor[x + 1]){
                aux = vetor[x];
                vetor[x] = vetor[x + 1];
                vetor[x + 1] = aux;
            }
        }
    }
    for(int y = 0; y < n; y++){
        printf("%d ", *(vetor + y));
    }
    return 0;
}
