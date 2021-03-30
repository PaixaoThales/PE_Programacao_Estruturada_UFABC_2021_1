#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int funcao(float *vet, int N);

int funcao(float *vet, int N){
    int negativos = 0;
    for(int x = 0; x < N; x++){
        if(*(vet + x) < 0){
            negativos += 1;
        }    
    }
    return negativos;
}
int main(int argc, char const *argv[]){
    float vetor[TAM];
    float *ptrVetor = vetor; 
    int n;
    scanf("%d", &n);
    for(int x = 0; x < n; x++){
        scanf("%f", ptrVetor + x);   
    }
    printf("%d", funcao(ptrVetor, n));
    return 0;
}