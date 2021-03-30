#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void maior(int vetor[TAM], int n);

void maior(int vetor[TAM], int n){
    int *ptrVetor = vetor, maior = -1, rep = 0;
    for(int x = 0; x < n; x++){
        if(*(ptrVetor + x) > maior){
            maior = *(ptrVetor + x);
            rep = 1;
        }else if(*(ptrVetor + x) == maior){
            rep += 1;
        }    
    }
    printf("O numero %d ocorreu %d vezes", maior, rep);

}

int main(int argc, char const *argv[]){
    int vetor[TAM], n;
    int *ptrVetor = vetor;
    scanf("%d", &n);
    for(int x = 0; x < n; x++){
        scanf("%d", ptrVetor + x);   
    }
    maior(vetor, n);
    return 0;
}