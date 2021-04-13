#include <stdio.h>
#include <stdlib.h>

int *insertionSort(int *vetor, int n);

int *insertionSort(int *vetor, int n){
    int atual = 0, j = 0;
    for(int i = 0; i < n; i++){
        atual = *(vetor + i);
        j = i;
        while(j > 0 && atual > *(vetor + (j - 1))){
            *(vetor + j) = *(vetor + (j - 1));
            j--;
        }
        *(vetor + j) = atual; 
    }
    return vetor;
}

int main(int argc, char const *argv[]){
    int *vetor = NULL, n;
    scanf("%d", &n);
    vetor = malloc(sizeof(int) * n);
    for(int x = 0; x < n; x++){
        scanf("%d", vetor + x);
    }
    vetor = insertionSort(vetor, n);
    for(int y = 0; y < n; y++){
        printf("%d ", *(vetor + y));
    }
    return 0;
}
