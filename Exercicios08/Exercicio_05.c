#include <stdio.h>
#include <stdlib.h>

int* preecheVetor(int *vetorA, int* vetorB, int n);

int* preecheVetor(int *vetorA, int* vetorB, int n){
    int *p = NULL;
    p = malloc(sizeof(int) * n);
    for(int x = 0; x < n; x++){
        *(p + x) = *(vetorA + x) + *(vetorB + x);
    } 
    return p;
}

int main(int argc, char const *argv[]){
    int *ptrVetor = NULL, *ptrVetorA = NULL, *ptrVetorB = NULL, n = 0;
    scanf("%d", &n);
    ptrVetorA = malloc(sizeof(int) * n);
    ptrVetorB = malloc(sizeof(int) * n);
    for(int a = 0; a < n; a++){
        scanf("%d", ptrVetorA + a);
    }
    for(int b = 0; b < n; b++){
        scanf("%d", ptrVetorB + b);
    }
    ptrVetor = preecheVetor(ptrVetorA, ptrVetorB, n);
    free(ptrVetorA);
    free(ptrVetorB);
    for(int x = 0; x < n; x++){
        printf("%d ", *(ptrVetor + x));
    }
    free(ptrVetor);
    return 0;
}