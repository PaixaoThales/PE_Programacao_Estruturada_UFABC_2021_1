#include <stdio.h>
#include <stdlib.h>

int particiona(int *vetor, int meio, int final1);
void quickSort(int *vetor, int inicio, int fim);

int particiona(int *vetor, int inicio, int final1){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final1;
    pivo = vetor[inicio];
    while(esq < dir){
        while(vetor[esq] >= pivo){
            esq++;
        }
        while(vetor[dir] < pivo){
            dir--;
        }
        if(esq < dir){
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;
        }
    }
    vetor[inicio] = vetor[dir];
    vetor[dir] = pivo;
    return dir;
}    

void quickSort(int *vetor, int inicio, int fim){
    int pivo = 0;
    if(fim > inicio){
        pivo = particiona(vetor, inicio, fim);
        quickSort(vetor, inicio, pivo - 1);
        quickSort(vetor, pivo + 1, fim);
    }
}

int main(int argc, char const *argv[]){
    int *vetor = NULL, n;
    scanf("%d", &n);
    vetor = malloc(sizeof(int) * n);
    for(int x = 0; x < n; x++){
        scanf("%d", vetor + x);
    }
    quickSort(vetor, 0, n - 1);
    for(int y = 0; y < n; y++){
        printf("%d ", *(vetor + y));
    }
    free(vetor);
    return 0;
}
