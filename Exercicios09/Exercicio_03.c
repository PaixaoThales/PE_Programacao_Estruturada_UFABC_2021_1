#include <stdio.h>
#include <stdlib.h>

int *selectionSort(int *vetor, int n);

int *selectionSort(int *vetor, int n){
    int menor = 0, aux = 0;
    for(int i = 0; i < n; i++){
        menor = i;
        for(int j = i + 1; j < n; j++){
            if(*(vetor + j) > *(vetor + menor)){
                menor = j;
            }
        }
        if(i != menor){
            aux = *(vetor + i);
            *(vetor + i) = *(vetor + menor);
            *(vetor + menor) = aux;
        }    
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
    vetor = selectionSort(vetor, n);
    for(int y = 0; y < n; y++){
        printf("%d ", *(vetor + y));
    }
    return 0;
}
