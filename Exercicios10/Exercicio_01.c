#include <stdio.h>
#include <stdlib.h>

void merge(int *vetor, int inicio, int meio, int fim);
void mergeSort(int *vetor, int inicio, int fim);

void merge(int *vetor, int inicio, int meio, int fim){
    int *temp = NULL, p1, p2, tam, k, fim1 = 0, fim2 = 0;
    tam = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = malloc(sizeof(int) * tam);
    if(temp != NULL){
        for(int i = 0; i < tam; i++){
            if(!fim1 && !fim2){
                if(vetor[p1] > vetor[p2]){
                    temp[i] = vetor[p1++];
                }else{
                    temp[i] = vetor[p2++];
                }
                if(p1 > meio){
                    fim1 = 1;
                }
                if(p2 > fim){
                    fim2 = 1;
                }
            }else{
                if(!fim1){
                    temp[i] = vetor[p1++];
                }else{
                    temp[i] = vetor[p2++];
                }    
            }
        }
        k = inicio; 
        for(int j = 0; j < tam; j++){
            vetor[k] = temp[j];
            k++;
        }    
    }
    free(temp);      
}

void mergeSort(int *vetor, int inicio, int fim){
    int meio = 0;
    if(inicio < fim){
        meio = (inicio + fim) / 2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);
        merge(vetor, inicio, meio, fim);
    }
}

int main(int argc, char const *argv[]){
    int *vetor = NULL, n;
    scanf("%d", &n);
    vetor = malloc(sizeof(int) * n);
    for(int x = 0; x < n; x++){
        scanf("%d", vetor + x);
    }
    mergeSort(vetor, 0, n - 1);
    for(int y = 0; y < n; y++){
        printf("%d ", *(vetor + y));
    }
    free(vetor);
    return 0;
}
